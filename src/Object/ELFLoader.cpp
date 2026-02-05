//
// Created by zzm on 26-1-5
// Part of RVision
//

#include "Object/ELFLoader.h"
#include "Object/ELFLoadInfo.h"
#include "Support/Error.h"
#include <sys/mman.h>
#include <llvm/BinaryFormat/ELF.h>
#include <llvm/Object/ELFObjectFile.h>

using namespace RVision;
using namespace llvm;
using namespace llvm::object;

ELFLoaderBase::ELFLoaderBase(const ELFInfoBase& O) : BaseLoader(O)
{
}

template <typename ELFT>
ELFLoader<ELFT>::ELFLoader(const RVision::ELFInfo<ELFT>& O)
: ELFLoaderBase(O), O(O), I(O)
{
}

template <typename ELFT>
auto ELFLoader<ELFT>::elf() const
{
    return O.ELF;
}


template <typename ELFT>
auto ELFLoader<ELFT>::segment_range() const
{
    return unwrapOrError(elf().program_headers());
}

template <typename ELFT>
auto ELFLoader<ELFT>::load_range() const
{
    std::vector<const Elf_Phdr*> load;
    for (const auto& Phdr : segment_range()) {
        if (Phdr.p_type == ELF::PT_LOAD) {
            load.push_back(&Phdr);
        }
    }
    return load;
}

template <typename ELFT>
auto ELFLoader<ELFT>::section_range() const
{
    return unwrapOrError(elf().sections());
}

template <typename ELFT>
void ELFLoader<ELFT>::alloc()
{
    for (const auto* Phdr : load_range())
    {
        SegmentInfo s{Phdr};
        s.Addr.u() += I.getBase();

        // mmap
        void* p = mmap((void*)&s.Addr, s.Size, s.Prot, s.Flags, -1, 0);
        assert(p != MAP_FAILED && p == (void*)&s.Addr);

        // 复制段数据
        memcpy(p, elf().base() + Phdr->p_offset, Phdr->p_filesz);

        // .bss 需要 memset 额外的空间为 0
        if (Phdr->p_memsz > Phdr->p_filesz)
        {
            auto dst = s.Addr + Phdr->p_filesz;
            auto len = Phdr->p_memsz - Phdr->p_filesz;
            memset((void*)dst, 0, len);
        }

        I.FindSections(s);
        I.SegmentMap.insert({s.Addr, s});
    }
}

template <typename ELFT>
void ELFLoader<ELFT>::reloc()
{
    constexpr unsigned len = sizeof(uintptr_t) * 2 + 4;
    dbgs()
    << "[Segment Reloc]\n"
    << left_justify("Addr", len)
    << left_justify("Target", len)
    << "\n";
    auto Sections = unwrapOrError(elf().sections());
    for (auto& Section : Sections)
    {
        // .rela 和 .rel 只会存在一种
        // 一般使用 .rela
        if (Section.sh_type != ELF::SHT_RELA) continue;
        // 包含多个 Elf64_Rela 重定位项
        Elf_Rela_Range Relas = unwrapOrError(elf().relas(Section));

        for (auto& Rela : Relas)
        {
            auto idx = Rela.getSymbol(false);
            auto type = Rela.getType(false);

            // 相对偏移 = r_offset(文件偏移) - .plt段的文件偏移
            // 实际地址 = .plt加载地址 + 相对便宜偏移
            const SegmentInfo& s = unwrapOrError(I.FindSegmentBySection(".plt"));
            //auto rela_offset = Rela.r_offset - s.Phdr.p_offset;
            auto rela_offset = Rela.r_offset - s.Phdr.p_vaddr;
            Address load_addr = s.Addr + rela_offset;

            switch (type)
            {
            case ELF::R_X86_64_IRELATIVE:
                {
                    // 重定位地址 = 加载基址 + r_addend
                    uintptr_t real_addr = I.getBase() + Rela.r_addend;
                    *load_addr = real_addr;
                    dbgs()
                    << Address(load_addr) << indent(2)
                    << Address(real_addr) << indent(2)
                    << "\n";
                    break;
                }
            default:
                assert(false);
            }
        }
    }
    dbgs()  << "\n";
}

template <typename ELFT>
void ELFLoader<ELFT>::env()
{
}

template <typename ELFT>
void ELFLoader<ELFT>::free()
{
    dbgs()
    << "[Segment Freeing]\n"
    << left_justify("Addr", 12)
    << "\n";
    for (auto& [addr, s] : I.SegmentMap)
    {
        int r = munmap((void*)&addr, s.Size);
        assert(r == 0);
        dbgs() << addr << "\n";
    }
    dbgs()  << "\n";
}

template <typename ELFT>
void ELFLoader<ELFT>::print()
{
    I.print();
}

template <typename ELFT>
void ELFLoader<ELFT>::load()
{
    alloc();
    reloc();
}

namespace RVision
{
    template class ELFLoader<ELF32LE>;
    template class ELFLoader<ELF64LE>;
    template class ELFLoader<ELF32BE>;
    template class ELFLoader<ELF64BE>;
}



