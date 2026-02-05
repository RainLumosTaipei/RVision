//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include <string>

namespace RVision
{
    class BaseRegister{
    public:
        BaseRegister() = default;
        virtual ~BaseRegister() = default;
    public:
        virtual void print() = 0;
        virtual std::string str() = 0;
    };

    class BaseIntRegister : public BaseRegister{
    public:
        BaseIntRegister() = default;
    };

    class BaseFPRegister : public BaseRegister{
    public:
        BaseFPRegister() = default;
    };

    class BaseVecRegister : public BaseRegister{
    public:
        BaseVecRegister() = default;
    };
}

