//
// Created by root on 25-12-9.
//

#pragma once

#include "BaseMachine.h"

namespace RVision
{
    class X86Machine final : public BaseMachine{
    private:
        static bool LLVMInitializeX86();
        // 静态成员会在 main 函数之前调用, 初始化 llvm 信息
        inline static bool x86Initialized = LLVMInitializeX86();

    public:
        explicit X86Machine(const llvm::Triple&);
    };

    X86Machine& getX86Machine(const llvm::Triple& triple = {});

}





