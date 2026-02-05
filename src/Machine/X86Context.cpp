//
// Created by zzm on 2026/1/26
// Part of RVision
//
#include "Machine/X86Context.h"
#include "Machine/BaseStack.h"
#include "Machine/X86RegisterInfo.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Format.h"

using namespace llvm;
using namespace RVision;

template <std::size_t Bit>
X86Context<Bit>::X86Context(bool isMain)
{
    RegisterInfo = std::make_unique<X86RegisterInfo<Bit>>();
    X86RegInfo = reinterpret_cast<X86RegisterInfo<Bit>*>(RegisterInfo.get());
    Stack = std::make_unique<BaseStack>();
    if (isMain) return;

    Stack->alloc();
    X86RegInfo->getStackPointer().u() = Stack->getBegin();
}

template <std::size_t Bit>
void X86Context<Bit>::print()
{
    RegisterInfo->print();
    Stack->print();
}

template<std::size_t Bit>
void X86Context<Bit>::restore()
{
    RegisterInfo->restore();
}

template<std::size_t Bit>
void X86Context<Bit>::save()
{
    RegisterInfo->save();
}

template <std::size_t Bit>
void X86Context<Bit>::run(uint64_t Addr)
{
    dbgs() << "Context start at: " << format_hex(Addr, 10) << "\n";
    X86RegInfo->IP.u() = Addr;
    print();
    restore();

}

namespace RVision
{
    template class X86Context<32>;
    template class X86Context<64>;
}
