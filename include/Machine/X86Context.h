//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include "BaseContext.h"

namespace RVision
{
    template<std::size_t Bit>
    class X86RegisterInfo;

    template<std::size_t Bit>
    class X86Context : public BaseContext{
    private:
        X86RegisterInfo<Bit>* X86RegInfo;
    public:
        X86Context(bool isMain = false);

    public:
        void print() override;
        void save() override;
        void restore() override;
        void run(uint64_t Addr) override;
    };

} // RVision