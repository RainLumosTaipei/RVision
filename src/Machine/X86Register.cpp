//
// Created by zzm on 2026/1/26
// Part of RVision
//

#include "Machine/X86Register.h"
#include <llvm/Support/Debug.h>
#include <llvm/Support/Format.h>
#include <llvm/Support/raw_ostream.h>

using namespace RVision;
using namespace llvm;

template<std::size_t Bit>
std::string X86Register<Bit>::str()
{
    std::string s;
    raw_string_ostream os(s);
    if constexpr (!isArrayTy){
        os << llvm::format_hex(u(), 0);
    }
    return os.str();
}


template<std::size_t Bit>
void X86Register<Bit>::print() {

    if constexpr (!isArrayTy) {
        dbgs() << llvm::format_hex(u(), Bit/4);
    }
}

namespace RVision
{
    template <std::size_t Bit>
    raw_ostream& operator<<(raw_ostream& os, X86Register<Bit>& Reg)
    {
        if constexpr (!X86Register<Bit>::isArrayTy) {
            return os << left_justify(Reg.str(), 20);
        }
        return os;
    }
}

namespace RVision
{
    template class X86Register<8>;
    template class X86Register<16>;
    template class X86Register<32>;
    template class X86Register<64>;
    template class X86Register<128>;
    template class X86Register<256>;
    template class X86Register<512>;

    template raw_ostream& operator<< <8>(raw_ostream&, X86Register<8>&);
    template raw_ostream& operator<< <16>(raw_ostream&, X86Register<16>&);
    template raw_ostream& operator<< <32>(raw_ostream&, X86Register<32>&);
    template raw_ostream& operator<< <64>(raw_ostream&, X86Register<64>&);
    template raw_ostream& operator<< <128>(raw_ostream&, X86Register<128>&);
    template raw_ostream& operator<< <256>(raw_ostream&, X86Register<256>&);
    template raw_ostream& operator<< <512>(raw_ostream&, X86Register<512>&);
}