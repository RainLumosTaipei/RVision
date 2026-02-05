//
// Created by zzm on 2026/1/19
// Part of RVision
//

#pragma once

#include <llvm/Object/ELFTypes.h>
#include "Object/ObjectInfo.h"

namespace llvm::object
{
    class ELFObjectFileBase;
    template <class ELFT> class ELFObjectFile;
    template <class ELFT> class ELFFile;
}


namespace RVision
{
    class ELFInfoBase : public ObjectInfo{
    public:
        ELFInfoBase(const llvm::object::ELFObjectFileBase& O);
    };

    template <typename ELFT>
    class ELFInfo : public ELFInfoBase {
    public:
        const llvm::object::ELFObjectFile<ELFT>& ELFObject;
        const llvm::object::ELFFile<ELFT>& ELF;

        ELFInfo(const llvm::object::ELFObjectFile<ELFT> &O);
    };

    template <class ELFT>
    std::unique_ptr<ObjectInfo> createInfo(const llvm::object::ELFObjectFile<ELFT>& Obj);

    using ELF32LEInfo =  ELFInfo<llvm::object::ELF32LE>;
    using ELF32BEInfo =  ELFInfo<llvm::object::ELF32BE>;
    using ELF64LEInfo =  ELFInfo<llvm::object::ELF64LE>;
    using ELF64BEInfo =  ELFInfo<llvm::object::ELF64BE>;
}

