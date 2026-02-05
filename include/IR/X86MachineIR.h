//
// Created by root on 25-12-2.
//

#pragma once

#include "BaseMachineIR.h"


namespace RVision
{
    class X86MachineIR final : public BaseMachineIR{
    public:
        X86MachineIR(llvm::MCInst inst, uint64_t addr);
    private:
        const BaseMachine& getMachine() const override;
    };

}



