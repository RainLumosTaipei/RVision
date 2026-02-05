//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include <cstdint>

namespace RVision
{
    class BaseHeap
    {
    private:
        uint64_t Begin;
        uint64_t End;

    public:
        BaseHeap() = default;
        virtual ~BaseHeap() = default;

    public:
        auto getBegin() {return Begin;}
        auto getEnd() {return End;}
    };
}
