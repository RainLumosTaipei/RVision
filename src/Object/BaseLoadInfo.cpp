//
// Created by zzm on 2026/1/23
// Part of RVision
//

#include "Object/BaseLoadInfo.h"
#include "Support/Option.h"

using namespace llvm;
using namespace RVision;

static cl::opt<uint64_t> LoadBase {
    "load-base",
    cl::desc("Load base addr"),
    cl::init(0),
    cl::cat(Option::RVisionCategory),
    cl::NotHidden
};

BaseLoadInfo::BaseLoadInfo(): Entry(0), Base(LoadBase) { }