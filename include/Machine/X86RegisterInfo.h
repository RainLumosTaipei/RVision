//
// Created by zzm on 2026/1/26
// Part of RVision
//

#pragma once

#include <array>
#include <vector>
#include "BaseRegisterInfo.h"
#include "Machine/X86Register.h"
#include "Machine/X86RegisterEnum.h"

namespace RVision
{

    template<std::size_t Bit>
    class X86RegisterTraits;

    template<>
    class X86RegisterTraits<32>{
    public:
        using GPRType = X86GPR32;
        using VectorRType = X86VecR512;
        using VectorMaskType = X86GPR32;
        using SegmentRType = X86SegR32;
        using EFlagsType = X86EFlags32;


        static constexpr size_t GPRCount = 8;
        static constexpr size_t VecRCount = 2;
        static constexpr size_t VMaskCount = 4;

        inline static std::vector<std::string> GPRNames = {
            "eax", "ebx", "ecx", "edx",
            "esi", "edi", "ebp", "esp"
        };
    };

    template<>
    class X86RegisterTraits<64>{
    public:
        using GPRType = X86GPR64;
        using VectorRType = X86VecR512;
        using SegmentRType = X86SegR64;
        using EFlagsType = X86EFlags64;
        using VectorMaskType = X86GPR64;

        static constexpr size_t GPRCount = 16;
        static constexpr size_t VecRCount = 4;
        static constexpr size_t VMaskCount = 8;

        inline static std::vector<std::string> GPRNames = {
            "rax", "rbx", "rcx", "rdx",
            "rsi", "rdi", "rbp", "rsp",
            "r8", "r9", "r10", "r11",
            "r12", "r13", "r14", "r15"
        };

    };

    template<std::size_t Bit>
    class X86RegisterInfo : public X86RegisterTraits<Bit>,
                            public BaseRegisterInfo{
    public:
        using Traits = X86RegisterTraits<Bit>;
        using GPRType = typename Traits::GPRType;
        using VectorRType =  typename Traits::VectorRType;
        using SegmentRType =  typename Traits::SegmentRType;
        using EFlagsType =  typename Traits::EFlagsType;
        using VectorMaskType =  typename Traits::VectorMaskType;

    public:
        std::array<GPRType, Traits::GPRCount> GPR;
        std::array<VectorRType, Traits::VecRCount> VR;
        std::array<VectorMaskType, Traits::VMaskCount> K;
        std::array<SegmentRType, 6> SR;
        GPRType IP;
        EFlagsType EFlags;
        X86GPR32 MXCSR;

    public:
        X86RegisterInfo();

        // =============================================================== //
        // x86 64-bit integer register

        BIT_GE(64) auto rax() { return GPR[RAX].r64(); }
        BIT_GE(64) auto rbx() { return GPR[RBX].r64(); }
        BIT_GE(64) auto rcx() { return GPR[RCX].r64(); }
        BIT_GE(64) auto rdx() { return GPR[RDX].r64(); }
        BIT_GE(64) auto rsi() { return GPR[RSI].r64(); }
        BIT_GE(64) auto rdi() { return GPR[RDI].r64(); }
        BIT_GE(64) auto rbp() { return GPR[RBP].r64(); }
        BIT_GE(64) auto rsp() { return GPR[RSP].r64(); }
        BIT_GE(64) auto r8()  { return GPR[R8].r64();  }
        BIT_GE(64) auto r9()  { return GPR[R9].r64();  }
        BIT_GE(64) auto r10() { return GPR[R10].r64(); }
        BIT_GE(64) auto r11() { return GPR[R11].r64(); }
        BIT_GE(64) auto r12() { return GPR[R12].r64(); }
        BIT_GE(64) auto r13() { return GPR[R13].r64(); }
        BIT_GE(64) auto r14() { return GPR[R14].r64(); }
        BIT_GE(64) auto r15() { return GPR[R15].r64(); }

        // =============================================================== //
        // x86 32-bit integer register

        BIT_GE(32) auto eax() { return GPR[EAX].r32(); }
        BIT_GE(32) auto ebx() { return GPR[EBX].r32(); }
        BIT_GE(32) auto ecx() { return GPR[ECX].r32(); }
        BIT_GE(32) auto edx() { return GPR[EDX].r32(); }
        BIT_GE(32) auto esi() { return GPR[ESI].r32(); }
        BIT_GE(32) auto edi() { return GPR[EDI].r32(); }
        BIT_GE(32) auto ebp() { return GPR[EBP].r32(); }
        BIT_GE(32) auto esp() { return GPR[ESP].r32(); }

        // =============================================================== //
        // x86 16-bit integer register

        BIT_GE(16) auto ax() { return GPR[AX].r16(); }
        BIT_GE(16) auto bx() { return GPR[BX].r16(); }
        BIT_GE(16) auto cx() { return GPR[CX].r16(); }
        BIT_GE(16) auto dx() { return GPR[DX].r16(); }
        BIT_GE(16) auto si() { return GPR[SI].r16(); }
        BIT_GE(16) auto di() { return GPR[DI].r16(); }
        BIT_GE(16) auto bp() { return GPR[BP].r16(); }
        BIT_GE(16) auto sp() { return GPR[SP].r16(); }

        // =============================================================== //
        // x86 instr pointer register

        BIT_EQ(16) auto& ip() { return IP; }
        BIT_EQ(32) auto& eip() { return IP; }
        BIT_EQ(64) auto& rip() { return IP; }

        // =============================================================== //
        // x86 SSE register

        BIT_GE(32) auto xmm0() { return VR[XMM0].r128(); }
        BIT_GE(32) auto xmm1() { return VR[XMM1].r128(); }
        BIT_GE(32) auto xmm2() { return VR[XMM2].r128(); }
        BIT_GE(32) auto xmm3() { return VR[XMM3].r128(); }
        BIT_GE(32) auto xmm4() { return VR[XMM4].r128(); }
        BIT_GE(32) auto xmm5() { return VR[XMM5].r128(); }
        BIT_GE(32) auto xmm6() { return VR[XMM6].r128(); }
        BIT_GE(32) auto xmm7() { return VR[XMM7].r128(); }

        BIT_GE(64) auto xmm8() { return VR[XMM8].r128(); }
        BIT_GE(64) auto xmm9() { return VR[XMM9].r128(); }
        BIT_GE(64) auto xmm10() { return VR[XMM10].r128(); }
        BIT_GE(64) auto xmm11() { return VR[XMM11].r128(); }
        BIT_GE(64) auto xmm12() { return VR[XMM12].r128(); }
        BIT_GE(64) auto xmm13() { return VR[XMM13].r128(); }
        BIT_GE(64) auto xmm14() { return VR[XMM14].r128(); }
        BIT_GE(64) auto xmm15() { return VR[XMM15].r128(); }

        BIT_GE(32) auto ymm0() { return VR[YMM0].r256(); }
        BIT_GE(32) auto ymm1() { return VR[YMM1].r256(); }
        BIT_GE(32) auto ymm2() { return VR[YMM2].r256(); }
        BIT_GE(32) auto ymm3() { return VR[YMM3].r256(); }

        BIT_GE(64) auto ymm4() { return VR[YMM4].r256(); }
        BIT_GE(64) auto ymm5() { return VR[YMM5].r256(); }
        BIT_GE(64) auto ymm6() { return VR[YMM6].r256(); }
        BIT_GE(64) auto ymm7() { return VR[YMM7].r256(); }

        BIT_GE(32) auto& zmm0() { return VR[ZMM0]; }
        BIT_GE(32) auto& zmm1() { return VR[ZMM1]; }

        BIT_GE(64) auto& zmm2() { return VR[ZMM2]; }
        BIT_GE(64) auto& zmm3() { return VR[ZMM3]; }

        // =============================================================== //
        // x86 AVX-512 Mask register

        BIT_GE(32) auto& k0() { return K[K0]; }
        BIT_GE(32) auto& k1() { return K[K1]; }
        BIT_GE(32) auto& k2() { return K[K2]; }
        BIT_GE(32) auto& k3() { return K[K3]; }

        BIT_GE(64) auto& k4() { return K[K4]; }
        BIT_GE(64) auto& k5() { return K[K5]; }
        BIT_GE(64) auto& k6() { return K[K6]; }
        BIT_GE(64) auto& k7() { return K[K7]; }

        // =============================================================== //
        // x86 segment register

        auto& es() { return SR[ES]; }
        auto& cs() { return SR[CS]; }
        auto& ss() { return SR[SS]; }
        auto& ds() { return SR[DS]; }
        auto& fs() { return SR[FS]; }
        auto& gs() { return SR[GS]; }

        auto& eflags() { return EFlags; }

    public:
        void print() override;
        void restore() override;
        void save() override;

        BIT_EQ(16) auto getStackPointer() { return sp(); }
        BIT_EQ(32) auto getStackPointer() { return esp(); }
        BIT_EQ(64) auto getStackPointer() { return rsp(); }

    private:
        inline static std::vector<std::string> SRNames = {
            "es", "cs", "ss", "ds", "fs", "gs"
        };
        inline static std::string EFlagsName = {"eflags"};

    };


}
