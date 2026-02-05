//
// Created by zzm on 2026/2/1
// Part of RVision
//

#pragma once

namespace RVision
{
    enum SREnum {
        ES = 0,
        CS = 1,
        SS = 2,
        DS = 3,
        FS = 4,
        GS = 5
    };

    enum GPR64Enum {
        RAX = 0,
        RBX = 1,
        RCX = 2,
        RDX = 3,
        RSI = 4,
        RDI = 5,
        RBP = 6,
        RSP = 7,
        R8 = 8,
        R9 = 9,
        R10 = 10,
        R11 = 11,
        R12 = 12,
        R13 = 13,
        R14 = 14,
        R15 = 15
    };

    enum GPR32Enum {
        EAX = 0,
        EBX = 1,
        ECX = 2,
        EDX = 3,
        ESI = 4,
        EDI = 5,
        EBP = 6,
        ESP = 7
    };

    enum GPR16Enum {
        AX = 0,
        BX = 1,
        CX = 2,
        DX = 3,
        SI = 4,
        DI = 5,
        BP = 6,
        SP = 7
    };

    enum XMMEnum {
        XMM0 = 0,
        XMM1 = 0,
        XMM2 = 0,
        XMM3 = 0,
        XMM4 = 1,
        XMM5 = 1,
        XMM6 = 1,
        XMM7 = 1,
        XMM8 = 2,
        XMM9 = 2,
        XMM10 = 2,
        XMM11 = 2,
        XMM12 = 3,
        XMM13 = 3,
        XMM14 = 3,
        XMM15 = 3,
    };

    enum YMMEnum {
        YMM0 = 0,
        YMM1 = 0,
        YMM2 = 1,
        YMM3 = 1,
        YMM4 = 2,
        YMM5 = 2,
        YMM6 = 3,
        YMM7 = 3
    };

    enum ZMMEnum {
        ZMM0 = 0,
        ZMM1 = 1,
        ZMM2 = 2,
        ZMM3 = 3
    };

    enum VMaskEnum {
        K0 = 0,
        K1 = 1,
        K2 = 2,
        K3 = 3,
        K4 = 4,
        K5 = 5,
        K6 = 6,
        K7 = 7
    };

}