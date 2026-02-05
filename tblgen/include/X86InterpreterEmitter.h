#pragma once

#include "llvm/TableGen/TableGenBackend.h"

namespace RVision
{
    class X86InterpreterEmitter {
    private:
        const llvm::RecordKeeper &RK;

    public:
        explicit X86InterpreterEmitter(const llvm::RecordKeeper &RK) : RK(RK) {}
        void run(llvm::raw_ostream &OS) const;
    };

    bool EmitX86Interpreter(llvm::raw_ostream &OS, const llvm::RecordKeeper &RK);
}

