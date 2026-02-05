//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include <memory>
#include <cstdint>

namespace RVision
{
    class BaseStack;
    class BaseHeap;
    class BaseRegisterInfo;
    class ObjectInfo;

    class BaseContext
    {
    public:
        std::unique_ptr<BaseStack> Stack;
        std::unique_ptr<BaseHeap> Heap;
        std::unique_ptr<BaseRegisterInfo> RegisterInfo;

    public:
        BaseContext(bool isMain = false);
        virtual ~BaseContext();

    public:
        virtual void print() = 0;
        virtual void restore() = 0;
        virtual void save() = 0;
        virtual void run(uint64_t Addr) = 0;
    };

    std::unique_ptr<BaseContext> createContext(bool isMain = false);

} // RVision