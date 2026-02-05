//
// Created by zzm on 2026/1/19
// Part of RVision
//

#pragma once

#include "Object/ObjectInfo.h"
#include "IR/BaseMachineIR.h"
#include "llvm/Object/ELFObjectFile.h"

namespace RVision
{
    class ELFInfoBase : public ObjectInfo{
    public:
        ELFInfoBase(unsigned ID, const llvm::object::ELFObjectFileBase& O): ObjectInfo(ID, O){}

        static bool classof(const ObjectInfo* O){
            return O->isELF();
        }
    };

    template <typename ELFT>
    class ELFInfo final: public ELFInfoBase {
    public:
        const llvm::object::ELFObjectFile<ELFT>& ELFObject;
        const llvm::object::ELFFile<ELFT>& ELF;

        ELFInfo(const llvm::object::ELFObjectFile<ELFT> &O) :
            ELFInfoBase(getELFType(ELFT::Endianness == llvm::endianness::little, ELFT::Is64Bits), O),
            ELFObject(O), ELF(O.getELFFile()) {}

        static bool classof(const ObjectInfo* O){
            return O->getTypeID() ==
                getELFType(ELFT::Endianness == llvm::endianness::little, ELFT::Is64Bits);
        }
    };

    template <class ELFT>
    std::unique_ptr<ObjectInfo> createInfo(const llvm::object::ELFObjectFile<ELFT>& Obj){
        return std::make_unique<ELFInfo<ELFT>>(Obj);
    }

    using ELF32LEInfo =  ELFInfo<llvm::object::ELF32LE>;
    using ELF32BEInfo =  ELFInfo<llvm::object::ELF32BE>;
    using ELF64LEInfo =  ELFInfo<llvm::object::ELF64LE>;
    using ELF64BEInfo =  ELFInfo<llvm::object::ELF64BE>;
}

