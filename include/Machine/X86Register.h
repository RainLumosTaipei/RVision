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

// 保留原有宏定义（无需修改）
#define BIT_GE(BIT) template<std::size_t B = Bit> std::enable_if_t<(B >= BIT), void> = nullptr

#define BIT_EQ(BIT) template<std::size_t B = Bit> std::enable_if_t<(B == BIT), bool> = true

namespace RVision
{
    template <std::byte Bit>
    class RegisterMemoryView {
        std::byte* p;
    public:
        RegisterMemoryView() = default;
        ~RegisterMemoryView() = default;

        RegisterMemoryView(const RegisterMemoryView&) = delete;
        RegisterMemoryView& operator=(const RegisterMemoryView&) = delete;

        RegisterMemoryView(RegisterMemoryView&&) noexcept = default;
        RegisterMemoryView& operator=(RegisterMemoryView&&) noexcept = default;

    };


    template<std::size_t Bit>
    class X86Register : public BaseRegister{
    protected:
        static constexpr std::size_t Byte = Bit / 8;
    public:

        alignas(Byte) std::array<std::byte, Byte> bit = {};

        template<class T>
        X86Register(T u) { memcpy(bit.data(), &u, sizeof(T)); }
        X86Register() = default;

    public:
        void print() const override;
        std::string str() const override;

        template<std::size_t SubBit>
        X86Register<SubBit>& SubReg(size_t id) {}

        auto u() return {RegisterM}
    };
}




