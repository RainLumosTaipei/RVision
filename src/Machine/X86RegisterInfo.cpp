//
// Created by zzm on 2026/1/26
// Part of RVision
//

#include "Machine/X86RegisterInfo.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Debug.h"

using namespace llvm;
using namespace RVision;

namespace
{
    template <typename Names, typename Registers>
    void for_each_print(const Names& Name, Registers& Reg) {
        const auto len = std::min(Name.size(), Reg.size());
        for (std::size_t i = 0; i < len; ++i)
            dbgs() << left_justify(Name[i], 10) << Reg[i] << "\n";
    }
}

template <std::size_t Bit>
X86RegisterInfo<Bit>::X86RegisterInfo() :
EFlags(0x2u),
MXCSR(0x1f80u)
{
    cs() = 0x33u;
    ss() = 0x2bu;
}

template <std::size_t Bit>
void X86RegisterInfo<Bit>::print()
{
    dbgs()
    << "[Register Info]\n"
    << left_justify("Name", 10)
    << left_justify("Hex", 18)
    << "\n";
    for_each_print(Traits::GPRNames, GPR);
    for_each_print(SRNames, SR);
    dbgs() << left_justify(EFlagsName, 10) << EFlags << "\n";
    dbgs() << "\n";
}

template <>
void X86RegisterInfo<64>::restore()
{
    uint64_t Rax = rax().u(), Rbx = rbx().u(), Rcx = rcx().u(), Rdx = rdx().u(),
             Rsi = rsi().u(), Rdi = rdi().u(), Rbp = rbp().u(), Rsp = rsp().u(),
             R8  = r8().u(),  R9  = r9().u(),  R10 = r10().u(), R11 = r11().u(),
             R12 = r12().u(), R13 = r13().u(), R14 = r14().u(), R15 = r15().u();
    auto& Zmm0 = zmm0().u();
    auto& Zmm1 = zmm1().u();
    auto& Zmm2 = zmm2().u();
    auto& Zmm3 = zmm3().u();
    uint64_t K0 = k0().u(), K1 = k1().u(), K2 = k2().u(), K3 = k3().u(),
             K4 = k4().u(), K5 = k5().u(), K6 = k6().u(), K7 = k7().u();
    uint64_t Fs = fs().u(), Gs = gs().u();
    uint64_t Rip = rip().u();
    uint64_t Eflags = EFlags.u();
    uint64_t Mxcsr = MXCSR.u();

    // ============================================================== //
    // x86 SSE register
    // 需要
    // mov    -0x58(%rbp),%rax
    // vmovdqu64 (%rax),%zmm0

    asm volatile (
        "vmovdqu64 %0,  %%zmm0\n\t" "vmovdqu64 %1,  %%zmm1\n\t"
        "vmovdqu64 %2,  %%zmm2\n\t" "vmovdqu64 %3,  %%zmm3\n\t"
        : "=m"(Zmm0), "=m"(Zmm1), "=m"(Zmm2), "=m"(Zmm3):
        : "zmm0", "zmm1", "zmm2", "zmm3", "memory"
    );

    // ============================================================== //
    // x86 GPR register
    // mov    -0x140(%rbp),%rax

    asm volatile (
        "movq %0,  %%rax\n\t" "movq %1,  %%rbx\n\t" "movq %2,  %%rcx\n\t" "movq %3,  %%rdx\n\t"
        "movq %4,  %%rsi\n\t" "movq %5,  %%rdi\n\t"
        :  :
        "m"(Rax), "m"(Rbx), "m"(Rcx), "m"(Rdx), "m"(Rsi), "m"(Rdi)
        : "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "memory"
    );

    asm volatile (
        "movq %0,  %%r8\n\t"  "movq %1,  %%r9\n\t"  "movq %2, %%r10\n\t" "movq %3, %%r11\n\t"
        "movq %4, %%r12\n\t"  "movq %5, %%r13\n\t"  "movq %6, %%r14\n\t" "movq %7, %%r15\n\t"
        :  :
        "m"(R8), "m"(R9), "m"(R10), "m"(R11), "m"(R12), "m"(R13), "m"(R14), "m"(R15)
        : "r8",  "r9",  "r10", "r11", "r12", "r13", "r14", "r15", "memory"
    );

    // ============================================================== //
    // x86 Segment register
    // mov    -0x80(%rbp),%rax
    // mov    %eax,%fs

    asm volatile (
        "movq %0,  %%rax\n\t" "movq %%rax,  %%fs\n\t"
        "movq %1,  %%rax\n\t" "movq %%rax,  %%gs\n\t"
        : "=m"(Fs), "=m"(Gs) : :
    );

    // ============================================================== //
    // x86 AVX-512 Mask register
    // kmovq  -0xc0(%rbp),%k0

    asm volatile (
        "kmovq %0, %%k0\n\t" "kmovq %1, %%k1\n\t" "kmovq %2, %%k2\n\t" "kmovq %3, %%k3\n\t"
        "kmovq %4, %%k4\n\t" "kmovq %5, %%k5\n\t" "kmovq %6, %%k6\n\t" "kmovq %7, %%k7\n\t"
        : "=m"(K0), "=m"(K1), "=m"(K2), "=m"(K3), "=m"(K4), "=m"(K5), "=m"(K6), "=m"(K7): :
    );

    // ============================================================== //
    // x86 SSE Control register
    // ldmxcsr -0x60(%rbp)

    asm volatile ("ldmxcsr %0\n\t": "=m"(Mxcsr): :);

    // ============================================================== //
    // EFlags使用弹栈赋值
    // push   -0x68(%rbp)
    // popf

    asm volatile ("pushq %0\n\t" "popfq\n\t" : "=m"(Eflags): :);

    // ============================================================== //
    // rsp, rbp必须最后修改，因为栈上变量的访问需要这两个寄存器
    // rip需要先保存到一个临时寄存器，然后进行跳转

    asm volatile ("movq %0, %%rsp\n\t" : : "m"(Rsp): "memory");
    asm volatile ("movq %0, %%rax\n\t" :  "=m"(Rip): :);
    asm volatile ("movq %0, %%rbp\n\t" : : "m"(Rbp): "memory");
    asm volatile ("jmp *%%rax\n\t" : : : );
}

// b X86RegisterInfo.cpp:139

template <>
void X86RegisterInfo<64>::save()
{
    uint64_t R[GPRCount];

    asm volatile (
        "movq %%rax,  %0\n\t" "movq %%rbx,  %1\n\t" "movq %%rcx,  %2\n\t" "movq %%rdx,  %3\n\t"
        "movq %%rsi,  %4\n\t" "movq %%rdi,  %5\n\t" "movq %%rbp,  %6\n\t" "movq %%rsp,  %7\n\t"
        : "=m"(R[0]),  "=m"(R[1]),  "=m"(R[2]),  "=m"(R[3]),
          "=m"(R[4]),  "=m"(R[5]),  "=m"(R[6]),  "=m"(R[7])
        : :
    );

    asm volatile (
        "movq %%r8,   %0\n\t" "movq %%r9,   %1\n\t" "movq %%r10, %2\n\t" "movq %%r11, %3\n\t"
        "movq %%r12,  %4\n\t" "movq %%r13,  %5\n\t" "movq %%r14, %6\n\t" "movq %%r15, %7\n\t"
        : "=m"(R[8]),  "=m"(R[9]),  "=m"(R[10]), "=m"(R[11]),
          "=m"(R[12]), "=m"(R[13]), "=m"(R[14]), "=m"(R[15])
        : :
    );

    for (std::size_t i = 0; i < GPRCount; ++i) GPR[i] = R[i];
}

template <>
void X86RegisterInfo<32>::restore()
{
}

template <>
void X86RegisterInfo<32>::save()
{
}

namespace RVision
{
    template class X86RegisterInfo<32>;
    template class X86RegisterInfo<64>;
}