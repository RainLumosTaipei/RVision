//
// Created by zzm on 26-1-5
// Part of RVision
//

#pragma once

#include "BaseLoader.h"
#include "Object/ELFInfo.h"


namespace RVision
{
    template <typename ELFT>
    class ELFLoadInfo;

    class ELFLoaderBase : public BaseLoader{
    public:
        ELFLoaderBase(const ELFInfoBase& O);
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
        ELFLoader(const RVision::ELFInfo<ELFT>& O);

    private:
        auto elf() const;
        auto segment_range() const;
        auto load_range() const;
        auto section_range() const;

    public:
        void alloc() override;
        void reloc() override;
        void env() override;
        void free() override;
        void print() override;
        void load() override;
    };

    using ELF32LELoader =  ELFLoader<llvm::object::ELF32LE>;
    using ELF32BELoader =  ELFLoader<llvm::object::ELF32BE>;
    using ELF64LELoader =  ELFLoader<llvm::object::ELF64LE>;
    using ELF64BELoader =  ELFLoader<llvm::object::ELF64BE>;
}



