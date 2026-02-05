//
// Created by root on 25-11-27.
//

#pragma once

#include "IR/X86IR.h"

namespace RVision
{
    class X86TranslatorBase {
    private:
        X86TranslatorBase() = default;

    public:
        X86TranslatorBase(const X86TranslatorBase&) = delete;
        X86TranslatorBase& operator=(const X86TranslatorBase&) = delete;
        X86TranslatorBase(X86TranslatorBase&&) = delete;
        virtual ~X86TranslatorBase() = 0;

    public:
        virtual void translate(const X86IR &IR) = 0;
    };
}





