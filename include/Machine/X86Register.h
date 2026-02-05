//
// Created by zzm on 2026/2/5
// Part of RVision
//

#pragma once

#include <cstddef>
#include <cstdint>
#include <array>
#include <string>
#include "Machine/BaseRegister.h"
#include <llvm/ADT/STLForwardCompat.h>

// 保留原有宏定义（无需修改）
#define BIT_GE(BIT) template<std::size_t B = Bit> std::enable_if_t<(B >= BIT), void> = nullptr

#define BIT_EQ(BIT) template<std::size_t B = Bit> std::enable_if_t<(B == BIT), bool> = true

namespace RVision
{
    template <std::size_t Bit>
    class RegisterMemoryView {
        std::byte* P;
    public:
        RegisterMemoryView(std::byte* P) : P(P) {};
        ~RegisterMemoryView() = default;

        RegisterMemoryView(const RegisterMemoryView&) = delete;
        RegisterMemoryView& operator=(const RegisterMemoryView&) = delete;

        RegisterMemoryView(RegisterMemoryView&&) noexcept = default;
        RegisterMemoryView& operator=(RegisterMemoryView&&) noexcept = default;

    private:
        template<typename UTy>
        auto& u(){ return *reinterpret_cast<UTy*>(P);}

        template<typename ITy>
        auto& i(){ return *reinterpret_cast<ITy*>(P);}

    public:
        auto& u() { return u<Bit>(P); }
        auto& i() { return i<Bit>(P); }

    };


    template<std::size_t Bit>
    class X86Register : public BaseRegister{
    protected:
        static constexpr std::size_t Byte = Bit / 8;
        static constexpr bool isArrayTy =
            std::is_array_v<llvm::remove_cvref_t<decltype(std::declval<X86Register>().u())>>;

    public:
        alignas(Byte) std::array<std::byte, Byte> bit = {};

        template<class T>
        X86Register(T u) { memcpy(bit.data(), &u, sizeof(T)); }
        X86Register() = default;

    protected:
        template<std::size_t SubBit>
        auto SubReg(int id){
            auto* p = bit.data() + id * SubBit / 8;
            return RegisterMemoryView<SubBit>(p);
        }

    public:
        void print() override;
        std::string str() override;

        auto& u() {return RegisterMemoryView<Bit>(bit.data()).u();}
        auto& i() {return RegisterMemoryView<Bit>(bit.data()).i();}

    };

    template<std::size_t Bit>
    class X86IntRegister : public X86Register<Bit>{
    public:
        template<class T>
        X86IntRegister(T u) : X86Register<Bit>(u){}
        X86IntRegister() = default;
    };

    template<std::size_t Bit>
    using X86GPR = X86IntRegister<Bit>;

    using X86GPR8 = X86GPR<8>;
    using X86GPR16 = X86GPR<16>;
    using X86GPR32 = X86GPR<32>;
    using X86GPR64 = X86GPR<64>;

    template<std::size_t Bit>
    class X86SegmentRegister : public X86Register<Bit>{
    public:
        template<class T>
        X86SegmentRegister(T u) : X86Register<Bit>(u){}
        X86SegmentRegister() = default;
    };

    template<std::size_t Bit>
    using X86SegR = X86SegmentRegister<Bit>;

    using X86SegR8 = X86SegR<8>;
    using X86SegR16 = X86SegR<16>;
    using X86SegR32 = X86SegR<32>;
    using X86SegR64 = X86SegR<64>;

    template<std::size_t Bit>
    class X86VecRegister : public X86Register<Bit>{
    public:
        template<class T>
        X86VecRegister(T u) : X86Register<Bit>(u){}
        X86VecRegister() = default;
    };

    template<std::size_t Bit>
    using X86VecR = X86VecRegister<Bit>;

    using X86VecR128 = X86VecR<128>;
    using X86VecR256 = X86VecR<256>;
    using X86VecR512 = X86VecR<512>;

    template<std::size_t Bit>
    class X86EFlagsRegister : public X86Register<Bit>{
    public:
        template<class T>
        X86EFlagsRegister(T u) : X86Register<Bit>(u){}
        X86EFlagsRegister() = default;
    };

    template<std::size_t Bit>
    using X86EFlags = X86EFlagsRegister<Bit>;

    using X86EFlags32 = X86EFlags<32>;
    using X86EFlags64 = X86EFlags<64>;
}




