#pragma once

#include "llvm/TableGen/TableGenBackend.h"

namespace RVision
{
    class X86TranslatorEmitter {
    private:
        const llvm::RecordKeeper &RK;

    public:
        explicit X86TranslatorEmitter(const llvm::RecordKeeper &RK) : RK(RK) {}
        void run(llvm::raw_ostream &OS) const;
    };

    bool EmitX86Translator(llvm::raw_ostream &OS, const llvm::RecordKeeper &RK);
}

