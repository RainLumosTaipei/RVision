//
// Created by zzm on 2026/1/19
// Part of RVision
//

#include "Object/ELFInfo.h"
#include "Object/ELFLoader.h"
#include "Object/ELFLoadInfo.h"
#include "IR/BaseMachineIR.h"
#include "llvm/Object/ELFObjectFile.h"

using namespace RVision;
using namespace llvm;
using namespace llvm::object;

ELFInfoBase::ELFInfoBase(const ELFObjectFileBase& O) : ObjectInfo(O)
{
}

template <typename ELFT>
ELFInfo<ELFT>::ELFInfo(const ELFObjectFile<ELFT> &O)
: ELFInfoBase(O), ELFObject(O), ELF(O.getELFFile()){

}

template <class ELFT>
std::unique_ptr<ObjectInfo> RVision::createInfo(const ELFObjectFile<ELFT>& Obj) {
    return std::make_unique<ELFInfo<ELFT>>(Obj);
}

namespace RVision{
    template class ELFInfo<ELF32LE>;
    template class ELFInfo<ELF64LE>;
    template class ELFInfo<ELF32BE>;
    template class ELFInfo<ELF64BE>;

    template std::unique_ptr<ObjectInfo> RVision::createInfo(const ELFObjectFile<ELF32LE>&);
    template std::unique_ptr<ObjectInfo> RVision::createInfo(const ELFObjectFile<ELF64LE>&);
    template std::unique_ptr<ObjectInfo> RVision::createInfo(const ELFObjectFile<ELF32BE>&);
    template std::unique_ptr<ObjectInfo> RVision::createInfo(const ELFObjectFile<ELF64BE>&);
}
