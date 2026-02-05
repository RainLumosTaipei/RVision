//
// Created by zzm on 25-12-10
// Part of RVision
//

#include "Interpreter/X86InterpreterRegistry.h"

using namespace RVision;

void X86InterpreterRegistry::regist(unsigned opcode, X86InterpreterBase* interpreter)
{
    Registry[opcode] = interpreter;
}

X86InterpreterRegistry& RVision::getX86InterpreterRegistry()
{
    static X86InterpreterRegistry registry;
    return registry;
}
