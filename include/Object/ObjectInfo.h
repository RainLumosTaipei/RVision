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
        unsigned TypeID;
        const llvm::object::ObjectFile &O;
    protected:
        enum {
            ID_ELF32L,
            ID_ELF32B,
            ID_ELF64L,
            ID_ELF64B,
        };
    public:
        std::vector<IRPtr> MIR;

    public:
        ObjectInfo(unsigned ID, const llvm::object::ObjectFile &O);
        virtual ~ObjectInfo() = default;

    public:
        unsigned getTypeID() const { return TypeID; }

        void disassemble();
        void print(llvm::raw_ostream& out = Log::X86_MIR) const;

        bool isELF() const {
            return TypeID >= ID_ELF32L && TypeID <= ID_ELF64B;
        }

    protected:
        static unsigned int getELFType(bool isLE, bool is64Bits) {
            if (isLE) return is64Bits ? ID_ELF64L : ID_ELF32L;
            return is64Bits ? ID_ELF64B : ID_ELF32B;
        }
    };

    llvm::object::OwningBinary<llvm::object::ObjectFile> createFile(llvm::StringRef);
    std::unique_ptr<ObjectInfo> createInfo(const llvm::object::ObjectFile&);
}

