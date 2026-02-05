//
// Created by zzm on 26-1-5
// Part of RVision
//

#pragma once 

#include <memory>
#include "Object/ObjectInfo.h"

namespace RVision
{
    class BaseLoadInfo;

    class BaseLoader {
    public:
        const ObjectInfo& O;
    public:
        BaseLoader(const ObjectInfo& O);
        virtual ~BaseLoader() = default;

    public:
        virtual void alloc() = 0;
        virtual void reloc() = 0;
        virtual void env() = 0;
        virtual void load() = 0;
        virtual void free() = 0;
        virtual void print() = 0;
    };

    std::unique_ptr<BaseLoader> createLoader(const ObjectInfo& O);

}


