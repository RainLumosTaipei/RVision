//
// Created by zzm on 25-12-10
// Part of RVision
//
#include "X86InterpreterEmitter.h"
#include <set>
#include <iostream>
#include <llvm/MC/LaneBitmask.h>
#include "llvm/TableGen/TableGenBackend.h"

using namespace llvm;

namespace
{
    std::set<unsigned> AllOpcode;
    int InstCount = 0;

    bool isPseudo(const Record* Instr)
    {
        return !Instr->getValue("Opcode");
    }

    void removeNameSuffix(StringRef name)
    {
        static std::set suffix = {'r', 'm', 'b', 'k', 'z'};
        static std::set flag = {"_EVEX", "_NF", "_ND"};

        while (true)
        {
            bool rmFlag = false;
            for (auto& s : flag)
                rmFlag = name.consume_back(s);
            if (!rmFlag) break;
        }
    }
}

namespace
{
    unsigned getOpcode(const Record* Instr)
    {
        unsigned Opcode = 0;
        auto OpInit = Instr->getValueInit("Opcode");
        auto BI = dyn_cast<BitsInit>(OpInit);

        // 遍历每一位
        // TableGen中BitsInit的位序, 低位在前, 高位在后
        for (unsigned i = 0; i < BI->getNumBits(); ++i) {
            auto Bit = BI->getBit(i);
            if (auto BitInt = dyn_cast<BitInit>(Bit)) {
                if (BitInt->getValue()) {
                    Opcode |= (1 << i);
                }
            }
        }
        return Opcode;
    }

    void ClassDeclare(const Record* Instr, raw_ostream& OS)
    {
        auto Opcode = getOpcode(Instr);
        if (AllOpcode.count(Opcode)) return;

        if (Opcode != 0) AllOpcode.insert(Opcode);
        removeNameSuffix(Instr->getName());
        auto Name = Instr->getName();
        auto ClassName = Name + "Interpreter";


        OS  << "class " << ClassName << " : public X86InterpreterBase {\n"
            << "private:\n"
            << "    const unsigned Opcode = " << Opcode << ";\n\n"
            << "public:\n"
            << "    void translate(const X86IR &) override;\n"
            << "};\n\n";

        ++InstCount;
    }
}

void RVision::X86InterpreterEmitter::run(raw_ostream& OS) const
{
    emitSourceFileHeader("RVision X86 Instruction Interpreter Classes",OS);

    OS << "#include \"Interpreter/X86InterpreterBase.h\"\n"
       << "#include \"X86GenInstrInfo.inc\"\n"
       << '\n'
       << "namespace RVision\n{\n\n";

    auto Instrs = RK.getAllDerivedDefinitions("Instruction");

    for (auto Instr : Instrs) {
        if (isPseudo(Instr)) continue;
        ClassDeclare(Instr, OS);
    }

    OS << "}\n";

    std::cout << "All Interpreter Count: " << InstCount << std::endl;
}

bool RVision::EmitX86Interpreter(raw_ostream& OS, const RecordKeeper& RK)
{
    X86InterpreterEmitter Emitter(RK);
    Emitter.run(OS);
    return false;
}