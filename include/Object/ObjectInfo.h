//
// Created by zzm on 2026/1/19
// Part of RVision
//

#pragma once

#include "Support/Log.h"
#include "llvm/Object/ObjectFile.h"

namespace RVision
{
    class BaseLoader;
    class BaseMachineIR;

    class ObjectInfo{
    private:
        using IRPtr = std::unique_ptr<BaseMachineIR>;
        const llvm::object::ObjectFile &O;
    public:
        std::vector<IRPtr> MIR;

    public:
        ObjectInfo(const llvm::object::ObjectFile &O);
        virtual ~ObjectInfo() = default;

    public:
        void disassemble();
        void print(llvm::raw_ostream& out = Log::X86_MIR) const;
    };

    llvm::object::OwningBinary<llvm::object::ObjectFile> createFile(llvm::StringRef);
    std::unique_ptr<ObjectInfo> createInfo(const llvm::object::ObjectFile&);
}

