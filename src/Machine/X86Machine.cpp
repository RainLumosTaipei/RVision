//
// Created by root on 25-12-9.
//

#include "Machine/X86Machine.h"
#include "llvm/Support/TargetSelect.h"

using namespace llvm;
using namespace RVision;

bool X86Machine::LLVMInitializeX86() {
    LLVMInitializeX86Target();
    LLVMInitializeX86TargetInfo();
    LLVMInitializeX86TargetMC();
    LLVMInitializeX86Disassembler();
    return true;
}

X86Machine::X86Machine(const llvm::Triple& triple) : BaseMachine(triple)
{
}

X86Machine& RVision::getX86Machine(const llvm::Triple& triple)
{
    static X86Machine machine(triple);
    return machine;
}
