//
// Created by zzm on 25-12-31
// Part of RVision
//

#pragma once 

#include "llvm/Support/raw_ostream.h"

#include <iostream>


#define CERR_WITH_FUNC(msg) \
std::cerr << "[" << __func__ << "] " << msg << "\n"


#define CERR_WITH_LOC(msg) \
std::cerr << "[" << __FILE__ << ":" << __LINE__ << " (" << __func__ << ")] " << msg << "\n"


namespace RVision
{
    class Time
    {
    public:
        static std::string getTime();
    };

    class Log {
    public:
        inline static std::error_code err = {};
        inline static llvm::raw_fd_ostream X86_MIR = {"X86-MIR-" + Time::getTime(), err};
    };

}
