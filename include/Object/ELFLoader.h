//
// Created by zzm on 26-1-5
// Part of RVision
//

#pragma once

#include "Object/BaseLoader.h"
#include "Object/ELFInfo.h"
#include "Object/ELFLoadInfo.h"
#include "Support/Error.h"
#include <sys/mman.h>


namespace RVision
{
    template <typename ELFT>
    class ELFLoadInfo;

    class ELFLoaderBase : public BaseLoader{
    public:
        ELFLoaderBase(const ELFInfoBase& O) : BaseLoader(O){}
    };

    template <typename ELFT>
    class ELFLoader : public ELFLoaderBase {
    public:
        LLVM_ELF_IMPORT_TYPES_ELFT(ELFT)
        using SegmentInfo = typename ELFLoadInfo<ELFT>::SegmentInfo;
    private:
        const ELFInfo<ELFT>& O;
        ELFLoadInfo<ELFT> I;

    public:
        ELFLoader(const RVision::ELFInfo<ELFT>& O) : ELFLoaderBase(O), O(O), I(O){}

    private:
        auto elf() const{ return O.ELF; }

        auto segment_range() const {
            return unwrapOrError(elf().program_headers());
        }

        auto load_range() const{
            std::vector<const Elf_Phdr*> load;
            for (const auto& Phdr : segment_range()) {
                if (Phdr.p_type == llvm::ELF::PT_LOAD) {
                    load.push_back(&Phdr);
                }
            }
            return load;
        }

        auto section_range() const{
            return unwrapOrError(elf().sections());
        }

    public:
        void alloc() override {
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

        void reloc() override
        {
            constexpr unsigned len = sizeof(uintptr_t) * 2 + 4;
            llvm::dbgs()
            << "[Segment Reloc]\n"
            << llvm::left_justify("Addr", len)
            << llvm::left_justify("Target", len)
            << "\n";
            auto Sections = unwrapOrError(elf().sections());
            for (auto& Section : Sections)
            {
                // .rela 和 .rel 只会存在一种
                // 一般使用 .rela
                if (Section.sh_type != llvm::ELF::SHT_RELA) continue;
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
                    case llvm::ELF::R_X86_64_IRELATIVE:
                        {
                            // 重定位地址 = 加载基址 + r_addend
                            uintptr_t real_addr = I.getBase() + Rela.r_addend;
                            *load_addr = real_addr;
                            llvm::dbgs()
                            << Address(load_addr) << llvm::indent(2)
                            << Address(real_addr) << llvm::indent(2)
                            << "\n";
                            break;
                        }
                    default:
                        assert(false);
                    }
                }
            }
            llvm::dbgs()  << "\n";
        }

        void env() override
        {

        }

        void free() override{
            llvm::dbgs()
            << "[Segment Freeing]\n"
            << llvm::left_justify("Addr", 12)
            << "\n";
            for (auto& [addr, s] : I.SegmentMap)
            {
                int r = munmap((void*)&addr, s.Size);
                assert(r == 0);
                llvm::dbgs() << addr << "\n";
            }
            llvm::dbgs()  << "\n";
        }

        void print() override {
            I.print();
        }

        void load() override {
            alloc();
            reloc();
        }
    };

    using ELF32LELoader =  ELFLoader<llvm::object::ELF32LE>;
    using ELF32BELoader =  ELFLoader<llvm::object::ELF32BE>;
    using ELF64LELoader =  ELFLoader<llvm::object::ELF64LE>;
    using ELF64BELoader =  ELFLoader<llvm::object::ELF64BE>;

    template <class ELFT>
    std::unique_ptr<BaseLoader> createLoader(const ELFInfo<ELFT>& O){
        return std::make_unique<ELFLoader<ELFT>>(O);
    }


}



