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
#include <llvm/Support/Debug.h>
#include <llvm/Support/Format.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/ADT/STLForwardCompat.h>

#define BIT(n, op) template<std::size_t B = Bit, std::enable_if_t<(B op n), bool> = true>
#define BIT_GE(n) BIT(n, >=)
#define BIT_EQ(n) BIT(n, ==)
#define BIT_LE(n) BIT(n, <=)

namespace llvm
{
    class raw_ostream;
}

namespace RVision
{
    template<std::size_t Bit>
    class X86Register;

    template <std::size_t Bit>
    llvm::raw_ostream& operator<<(llvm::raw_ostream& os, X86Register<Bit>& Reg)
    {
        if constexpr (!X86Register<Bit>::isArrayTy) {
            return os << llvm::left_justify(Reg.str(), 20);
        }
        return os;
    }

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
        BIT_EQ(8)  auto& u() { return u<uint8_t>(); }
        BIT_EQ(16) auto& u() { return u<uint16_t>(); }
        BIT_EQ(32) auto& u() { return u<uint32_t>(); }
        BIT_EQ(64) auto& u() { return u<uint64_t>(); }

        BIT_EQ(128) auto& u() { return u<uint64_t[2]>(); }
        BIT_EQ(256) auto& u() { return u<uint64_t[4]>(); }
        BIT_EQ(512) auto& u() { return u<uint64_t[8]>(); }
    };

    template<std::size_t Bit>
    class X86Register : public BaseRegister{
    public:
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
        auto& u() { return RegisterMemoryView<Bit>(bit.data()).u();}

        BIT_GE(8) auto r8(size_t id = 0) { return SubReg<8>(id);}
        BIT_GE(16) auto r16(size_t id = 0) { return SubReg<16>(id);}
        BIT_GE(32) auto r32(size_t id = 0) { return SubReg<32>(id);}
        BIT_GE(64) auto r64(size_t id = 0) { return SubReg<64>(id);}
        BIT_GE(128) auto r128(size_t id = 0) { return SubReg<128>(id);}
        BIT_GE(256) auto r256(size_t id = 0) { return SubReg<256>(id);}
        BIT_GE(512) auto r512(size_t id = 0) { return SubReg<512>(id);}

        void print() override
        {
            if constexpr (!isArrayTy) {
                llvm::dbgs() << llvm::format_hex(u(), Bit/4);
            }
        }

        std::string str() override
        {
            std::string s;
            llvm::raw_string_ostream os(s);
            if constexpr (!isArrayTy){
                os << llvm::format_hex(u(), 0);
            }
            return os.str();
        }
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




