#include "Object/ObjectInfo.h"
#include "Object/BaseLoader.h"
#include "Object/BaseLoadInfo.h"
#include "Machine/BaseContext.h"
#include "IR/BaseMachineIR.h"
#include "Support/Option.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/InitLLVM.h"

using namespace llvm;
using namespace RVision;


int main(int argc, char **argv) {

    InitLLVM X(argc, argv);

    HideUnrelatedOptions(Option::RVisionCategory);
    cl::ParseCommandLineOptions(argc, argv, "RVision Binary Translator\n");

    auto F = createFile(Option::InputFile);
    auto O = createInfo(*F.getBinary());

    auto L = createLoader(*O);
    L->load();
    L->print();

    auto MainCtx = createContext(true);
    MainCtx->save();
    MainCtx->print();

    auto OCtx = createContext();
    //OCtx->run(O->Loader->LoadInfo->getEntry());

    L->free();

    return 0;
}