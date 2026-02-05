//
// Created by zzm on 2026/1/23
// Part of RVision
//

#include "Object/ELFLoadInfo.h"
#include <sys/mman.h>
#include "llvm/Object/ELFObjectFile.h"
#include "Support/Error.h"

using namespace llvm;
using namespace llvm::object;
using namespace RVision;

namespace
{
    // 地址对齐页面长度
    uint64_t align(uint64_t addr)
    {
        const int PAGE_SIZE = 4096; // 页长度
        return (addr + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1);   // 清空低位，取高位
    }
}

template <typename ELFT>
ELFLoadInfo<ELFT>::ELFLoadInfo(const ELFInfo<ELFT>& O) : O(O)
{
    setEntry((uintptr_t)elf().getHeader().e_entry);
    for (auto& Section : O.ELFObject.sections()) SectionMap.insert({Section.getAddress(), Section});
}

template <typename ELFT>
auto& ELFLoadInfo<ELFT>::elf() const
{
    return O.ELF;
}

template <typename ELFT>
ELFLoadInfo<ELFT>::SegmentInfo::SegmentInfo(const Elf_Phdr* P)
:
Phdr(*P),
Addr(align(P->p_vaddr)),
Size(P->p_memsz),
Prot(PROT_READ | PROT_WRITE | PROT_EXEC),
Flags(MAP_PRIVATE | MAP_FIXED | MAP_ANONYMOUS)
{
    // if (Phdr.p_flags & ELF::PF_R) prot |= PROT_READ;
    // if (Phdr.p_flags & ELF::PF_W) prot |= PROT_WRITE;
    // if (Phdr.p_flags & ELF::PF_X) prot |= PROT_EXEC;
}

template <typename ELFT>
bool ELFLoadInfo<ELFT>::SegmentInfo::hasSection(StringRef Name) const
{
    for (auto Section : Sections)
        if (Name == unwrapOrError(Section.getName()))
            return true;
    return false;
}

template <typename ELFT>
void ELFLoadInfo<ELFT>::FindSections(SegmentInfo& s)
{
    for (auto& [Addr, Section] : SectionMap)
        if (Addr >= s.Phdr.p_vaddr && Addr < s.Phdr.p_vaddr + s.Phdr.p_memsz)
            s.Sections.push_back(Section);
}

template <typename ELFT>
Expected<typename ELFLoadInfo<ELFT>::SegmentInfoRef>
ELFLoadInfo<ELFT>::FindSegmentBySection(llvm::StringRef Name) const
{
    for (auto& [Addr, Segment] : SegmentMap)
        if (Segment.hasSection(Name))
            return Segment;
    return createError("Can not find segment has section " + Name);
}

template <typename ELFT>
void ELFLoadInfo<ELFT>::print()
{
    constexpr unsigned len = sizeof(uintptr_t) * 2 + 4;
    dbgs()
    << "[Segment Mapping]\n"
    << left_justify("Begin", len)
    << left_justify("End", len)
    << left_justify("Sections", 10)
    << "\n";
    for (auto& [addr, s] : SegmentMap)
    {
        dbgs()
          << s.Addr << indent(2)
          << Address(s.Size + s.Addr) << indent(2);
        for (auto& Section : s.Sections)
            dbgs() << unwrapOrError(Section.getName()) << indent(1);
        dbgs()  << "\n";
    }
    dbgs()  << "\n";
}

namespace RVision
{
    template class ELFLoadInfo<ELF32LE>;
    template class ELFLoadInfo<ELF64LE>;
    template class ELFLoadInfo<ELF32BE>;
    template class ELFLoadInfo<ELF64BE>;
}
