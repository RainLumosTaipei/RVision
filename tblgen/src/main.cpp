#include <iostream>

#include "llvm/TableGen/Main.h"
#include "X86TranslatorEmitter.h"
#include "X86InterpreterEmitter.h"
#include "llvm/Support/CommandLine.h"

using namespace llvm;
using namespace llvm::cl;


static opt<bool> GenTranslator(
    "gen-x86-translator",          // --gen-translator
    desc("Generate X86 translator CXX Headers"),
    ValueDisallowed,
    NotHidden
);

static opt<bool> GenInterpreter(
    "gen-x86-interpreter",          // --gen-interpreter
    desc("Generate X86 interpreter CXX Headers"),
    ValueDisallowed,
    NotHidden
);

int main(int argc, char **argv) {

    std::cout << "RVision tableGen is working, please wait for about 10s..." << std::endl;

    ParseCommandLineOptions(argc, argv, "RVision CXX Headers Generator\n");

    if (GenTranslator)
        TableGenMain(argv[0], RVision::EmitX86Translator);
    if (GenInterpreter)
        TableGenMain(argv[0], RVision::EmitX86Interpreter);

    return 0;
}