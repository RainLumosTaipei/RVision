//
// Created by zzm on 26-1-1
// Part of RVision
//

#pragma once
#include <llvm/Support/Error.h>

namespace RVision
{
    class DefaultError : public llvm::ErrorInfo<DefaultError> {
    public:
        inline static char ID = 0;
        void log(llvm::raw_ostream& OS) const override{ OS << "Default error occurs\n"; }
        std::error_code convertToErrorCode() const override { return {}; }
    };

    inline llvm::Error createDefaultError() {
        return llvm::make_error<DefaultError>();
    }

    [[noreturn]] void reportError(llvm::Error E);
    [[noreturn]] void reportError(llvm::Error E, llvm::StringRef ToolName, llvm::StringRef string);

    template <typename T, typename... Ts>
    T unwrapOrError(llvm::Expected<T> EO, Ts &&...Args) {
        if (EO)
            return std::move(*EO);
        reportError(EO.takeError(), std::forward<Ts>(Args)...);
    }

    template <typename T>
    T assertOrError(T&& expr, const char* msg = "null check failed") {
        assert(static_cast<bool>(expr) && msg);
        return std::forward<T>(expr);
    }
}


