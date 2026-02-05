//
// Created by zzm on 2026/1/23
// Part of RVision
//

#pragma once

#include "Machine/Address.h"

namespace RVision
{
    class BaseLoadInfo
    {
    protected:
        Address Entry; // 程序入口
        Address Base;  // 程序加载基址

    public:
        BaseLoadInfo();
        virtual ~BaseLoadInfo() = default;

    public:
        auto getEntry() const { return Entry; }
        auto getBase() const { return Base; }

        void setEntry(Address Entry) { this->Entry = Entry; }
        void setBase(Address Base) { this->Base = Base; }

        virtual void print() = 0;
    };
}
