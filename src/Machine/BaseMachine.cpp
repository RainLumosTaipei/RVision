//
// Created by root on 25-12-9.
//
#include "llvm/MC/TargetRegistry.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"

#include "Machine/BaseMachine.h"
#include "Machine/X86Machine.h"

using namespace llvm;

RVision::BaseMachine::BaseMachine(const llvm::Triple& triple) : Triple(triple)
{
    std::string Error;
    Target = TargetRegistry::lookupTarget(Triple, Error);
    assert(Target);

    STI = std::unique_ptr<MCSubtargetInfo>(Target->createMCSubtargetInfo(Triple, CPU, Features));
    MII = std::unique_ptr<MCInstrInfo>(Target->createMCInstrInfo());
    MRI = std::unique_ptr<MCRegisterInfo>(Target->createMCRegInfo(Triple));
    MAI = std::unique_ptr<MCAsmInfo>(Target->createMCAsmInfo(*MRI, Triple, {}));
    assert(STI && MII && MAI && MRI);

    Ctx = std::make_unique<MCContext>(Triple, MAI.get(), MRI.get(), STI.get());
    assert(Ctx);

    DisAsm = std::unique_ptr<MCDisassembler>(Target->createMCDisassembler(*STI, *Ctx));
    IP = std::unique_ptr<MCInstPrinter>(Target->createMCInstPrinter(Triple, MAI->getAssemblerDialect(), *MAI, *MII, *MRI));
    assert(DisAsm && IP);

}

RVision::BaseMachine::~BaseMachine() = default;

RVision::BaseMachine& RVision::BaseMachine::getMachine(const llvm::Triple& triple)
{
    if (triple.isX86()) return getX86Machine(triple);

    reportFatalUsageError("Only support X86-64 arch");
}

