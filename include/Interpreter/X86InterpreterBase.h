//
// Created by zzm on 25-12-10
// Part of RVision
//

#pragma once

#include "IR/X86MachineIR.h"

namespace RVision
{
    class X86InterpreterBase {
    private:
        unsigned Opcode;

    public:
        X86InterpreterBase() = default;
        X86InterpreterBase(const X86InterpreterBase&) = delete;
        X86InterpreterBase& operator=(const X86InterpreterBase&) = delete;
        X86InterpreterBase(X86InterpreterBase&&) = delete;
        virtual ~X86InterpreterBase() = 0;

    public:
        virtual unsigned getOpcode() const { return Opcode; }
        virtual void interpret(const X86MachineIR &IR) = 0;
    };
}
