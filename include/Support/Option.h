//
// Created by zzm on 26-1-1
// Part of RVision
//

#pragma once

#include <llvm/Support/CommandLine.h>

namespace RVision
{
    class Option
    {
    public:
        inline static llvm::cl::OptionCategory RVisionCategory {
            "RVision Translator Options",
            "Options for RVision Binary Translator"
        };

        inline static llvm::cl::opt<std::string> InputFile {
            "input",
            llvm::cl::Required,
            llvm::cl::desc("Input binary files"),
            llvm::cl::cat(RVisionCategory),
            llvm::cl::NotHidden
        };

        inline static llvm::cl::alias AliasInput {
            "i",
            llvm::cl::desc("Alias for --input"),
            llvm::cl::aliasopt(InputFile)
        };

        inline static llvm::cl::list<std::string> Args {
            "args",
            llvm::cl::Positional,
            llvm::cl::PositionalEatsArgs,
            llvm::cl::desc("Args passed to binary files"),
            llvm::cl::cat(RVisionCategory),
            llvm::cl::NotHidden
        };

        // exampl
        // inline static llvm::cl::opt<bool> TestOther{
        //     "test-other",
        //     llvm::cl::desc("Test binary files"),
        //     llvm::cl::cat(RVisionCategory),
        //     llvm::cl::NotHidden,
        //     llvm::cl::init(true),
        //     llvm::cl::callback([](const bool& value)
        //     {
        //         std::cout << value << "\n";
        //     })
        // };


    };


}
