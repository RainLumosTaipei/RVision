//
// Created by zzm on 25-12-10
// Part of RVision
//

#pragma once

#include "X86InterpreterBase.h"
#include <unordered_map>

namespace RVision
{
    class X86InterpreterRegistry {
    private:
        std::unordered_map<unsigned, X86InterpreterBase*> Registry;

    public:
        X86InterpreterRegistry() = default;
        ~X86InterpreterRegistry() = default;

    public:
        void regist(unsigned opcode, X86InterpreterBase*);
    };

    X86InterpreterRegistry& getX86InterpreterRegistry();

}
