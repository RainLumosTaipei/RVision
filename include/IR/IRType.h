//
// Created by zzm on 2026/1/20
// Part of RVision
//

#pragma once

#include "llvm/TargetParser/Triple.h"
#include "X86MachineIR.h"

namespace RVision
{
    template <llvm::Triple::ArchType Arch>
    struct IRType;

    template <> struct IRType<llvm::Triple::x86_64> { using Type = X86MachineIR; };

    class MachineIRFactory{
    public:
        using IRPtr = std::unique_ptr<BaseMachineIR>;
        static IRPtr create(llvm::Triple::ArchType Arch,llvm::MCInst& Inst, uint64_t Addr)
        {
            switch (Arch)
            {
                case llvm::Triple::x86_64:
                    using IRTy = IRType<llvm::Triple::x86_64>::Type;
                    return std::make_unique<IRTy>(Inst, Addr);
                default:
                    llvm::reportFatalUsageError("Not supported arch");
            }
        };
    };
}