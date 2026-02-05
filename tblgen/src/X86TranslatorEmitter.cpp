//
// Created by zzm on 25-12-10
// Part of RVision
//

#include "X86TranslatorEmitter.h"

using namespace llvm;

void RVision::X86TranslatorEmitter::run(raw_ostream& OS) const
{

}

bool RVision::EmitX86Translator(raw_ostream& OS, const RecordKeeper& RK)
{
    X86TranslatorEmitter Emitter(RK);
    Emitter.run(OS);
    return false;
}