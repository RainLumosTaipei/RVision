//
// Created by zzm on 25-12-31
// Part of RVision
//

#include "Support/Log.h"
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace llvm;
using namespace RVision;

std::string Time::getTime()
{
    auto now = std::chrono::system_clock::now();
    std::time_t nowTime = std::chrono::system_clock::to_time_t(now);

    // 格式化为本地时间字符串（2026-01-20 15:30:45）
    std::tm localTime{};
    localtime_r(&nowTime, &localTime);

    std::ostringstream oss;
    oss << std::put_time(&localTime, "%Y-%m-%d %H:%M:%S");

    return oss.str();
}
