//
// Created by zzm on 2026/1/23
// Part of RVision
//

#pragma once

#include <map>
#include <Object/BaseLoadInfo.h>
#include "Object/ELFInfo.h"
#include "Machine/Address.h"

namespace RVision
{
    template <typename ELFT>
    class ELFLoadInfo : public BaseLoadInfo
    {
    private:
        const ELFInfo<ELFT>& O;
    public:
        LLVM_ELF_IMPORT_TYPES_ELFT(ELFT);

        struct SegmentInfo
        {
            const Elf_Phdr& Phdr;
            Address Addr;
            uint64_t Size;
            int Prot;
            int Flags;
            std::vector<llvm::object::SectionRef> Sections;

            SegmentInfo(const Elf_Phdr* Phdr);
            bool hasSection(llvm::StringRef Name) const;
        };

        using SegmentInfoRef = const SegmentInfo&;

        // 地址 -> section
        std::map<Address, llvm::object::SectionRef> SectionMap;
        // 地址 -> segment
        std::map<Address, SegmentInfo> SegmentMap;

    public:
        ELFLoadInfo(const RVision::ELFInfo<ELFT>& O);
        void FindSections(SegmentInfo&);
        llvm::Expected<SegmentInfoRef> FindSegmentBySection(llvm::StringRef Name) const;

    private:
        auto& elf() const;

    public:
        void print() override;
    };

    using ELF32LELoadInfo = ELFLoadInfo<llvm::object::ELF32LE>;
    using ELF64LELoadInfo = ELFLoadInfo<llvm::object::ELF64LE>;
    using ELF32BELoadInfo = ELFLoadInfo<llvm::object::ELF32BE>;
    using ELF64BELoadInfo = ELFLoadInfo<llvm::object::ELF64BE>;
}