//
// Created by zzm on 2026/1/26
// Part of RVision
//

#include "Machine/BaseContext.h"
#include "Machine/BaseHeap.h"
#include "Machine/BaseStack.h"
#include "Machine/BaseRegisterInfo.h"
#include "Machine/X86Context.h"
#include "Support/Error.h"
#include <llvm/TargetParser/Host.h>
#include <llvm/TargetParser/Triple.h>

using namespace RVision;
using namespace llvm;

BaseContext::BaseContext(bool isMain){};

BaseContext::~BaseContext() = default;

std::unique_ptr<BaseContext> RVision::createContext(bool isMain)
{
    Triple triple(sys::getProcessTriple());

    switch (triple.getArch())
    {
        case Triple::x86:
            return std::make_unique<X86Context<32>>(isMain);
        case Triple::x86_64:
            return std::make_unique<X86Context<64>>(isMain);
        default:
            reportFatalUsageError("Only support X86-64 arch");
    }
}



