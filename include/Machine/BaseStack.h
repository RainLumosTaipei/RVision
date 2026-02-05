//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include "Machine/Address.h"

namespace RVision
{
    class BaseStack {
        StackAddress Begin;
        StackAddress End;
        StackAddress Top;

    public:
        BaseStack() = default;
        virtual ~BaseStack() = default;

    public:
        auto getBegin() const { return Begin; }
        auto getEnd() const { return End; }
        auto getTop() const { return Top; }

        void alloc();
        void init();
        void print();

    public:
        static constexpr std::size_t STACK_SIZE = 1024 * 1024 * 2;
        static constexpr std::size_t PAGE_SIZE = 4096;
    };
}

