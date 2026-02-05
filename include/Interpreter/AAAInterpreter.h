//
// Created by zzm on 25-12-10
// Part of RVision
//

#pragma once
#include "X86InterpreterBase.h"
#include "X86InterpreterRegistry.h"


namespace RVision
{
    class AAAInterpreter : public X86InterpreterBase
    {
    private:
        unsigned Opcode = 1;
        inline static bool isRegistered = getX86InterpreterRegistry().regist(Opcode, this);

    public:
        void interpret(const X86MachineIR& IR) override;

    public:
        static AAAInterpreter& getInstance();
    };
}
