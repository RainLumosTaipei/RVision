//
// Created by zzm on 26-1-5
// Part of RVision
//

#include "Object/BaseLoader.h"
#include "Object/ELFLoader.h"
#include "Object/ELFInfo.h"
#include "Object/ELFLoadInfo.h"

using namespace RVision;
using namespace llvm;

namespace
{
    std::unique_ptr<BaseLoader> createELFLoader(const ELFInfoBase& I) {
        if (const auto *O = dyn_cast<ELF32LEInfo>(&I))
            return createLoader(*O);
        if (const auto *O= dyn_cast<ELF32BEInfo>(&I))
            return createLoader(*O);
        if (const auto *O = dyn_cast<ELF64LEInfo>(&I))
            return createLoader(*O);
        return createLoader(cast<ELF64BEInfo>(I));
    }
}

BaseLoader::BaseLoader(const ObjectInfo& O) : O(O)
{
}

std::unique_ptr<BaseLoader> RVision::createLoader(const ObjectInfo& I)
{
    if (const auto *O = dyn_cast<ELFInfoBase>(&I))
        return createELFLoader(*O);
    reportFatalUsageError("Unsupport Loader");
}
