//
// Created by zzm on 25-12-31
// Part of RVision
//

#include "IR/BaseMachineIR.h"
#include "Machine/BaseMachine.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCInstPrinter.h"

using namespace RVision;
using namespace llvm;

BaseMachineIR::BaseMachineIR(llvm::MCInst inst, uint64_t addr)
: Inst(std::move(inst)), Addr(addr)
{
}

void BaseMachineIR::print(raw_ostream& out) const
{
    out << "0x" << format_hex(Addr, 10) << ": ";
    getMachine().getIP().printInst(&Inst, Addr, "", getMachine().getSTI(), out);
    out << "\n";
}

const MCInstrDesc& BaseMachineIR::getMIDesc() const
{
    return getMachine().getMII().get(Inst.getOpcode());
}

// void X86MachineIR::toMIR()
// {
//     const auto desc = getX86Machine().getMIDesc(Inst.getOpcode());
//     auto builder = BuildMI(getX86MF(), DebugLoc(), desc);
//     int count = 0;
//     for (auto& MO : Inst)
//     {
//         if (MO.isImm()) builder.addImm(MO.getImm());
//         if (MO.isReg() && count < desc.getNumDefs()) builder.addDef(MO.getReg());
//         if (MO.isReg() && count >= desc.getNumDefs()) builder.addUse(MO.getReg());
//         ++count;
//     }
//     MI = builder.getInstr();
// }