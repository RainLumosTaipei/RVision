//
// Created by root on 25-12-2.
//

#include "IR/X86MachineIR.h"
#include "../../include/Machine/X86Machine.h"

using namespace RVision;
using namespace llvm;

X86MachineIR::X86MachineIR(llvm::MCInst inst, uint64_t addr)
    : BaseMachineIR(std::move(inst), addr)
{
}

const BaseMachine& X86MachineIR::getMachine() const
{
    return getX86Machine();
}
