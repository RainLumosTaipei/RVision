//
// Created by zzm on 2026/1/20
// Part of RVision
//

#include "Support/Error.h"
#include <llvm/Support/WithColor.h>


using namespace RVision;
using namespace llvm;

void RVision::reportError(llvm::Error E)
{
    assert(E);
    outs().flush();
    WithColor::error(errs());
    logAllUnhandledErrors(std::move(E), errs());
    exit(1);
}

void RVision::reportError(llvm::Error E, StringRef ToolName, StringRef string)
{
    assert(E);
    outs().flush();
    WithColor::error(errs(), ToolName);
    errs() << "'" << string << "'";
    logAllUnhandledErrors(std::move(E), errs());
    exit(1);
}