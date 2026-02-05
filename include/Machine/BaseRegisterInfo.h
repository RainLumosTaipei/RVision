//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include <cstdint>

namespace RVision
{
    class BaseRegisterInfo{
    public:
        BaseRegisterInfo() = default;
        virtual ~BaseRegisterInfo() = default;

    public:
        virtual void print() = 0;
        virtual void restore() = 0;
        virtual void save() = 0;
    };
}
