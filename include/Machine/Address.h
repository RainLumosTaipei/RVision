//
// Created by zzm on 2026/2/2
// Part of RVision
//

#pragma once

#include <cstdint>
#include <cstring>
#include <string>

namespace llvm
{
    class raw_ostream;
}

namespace RVision
{
    class Address
    {
    protected:
        uintptr_t p;

    public:
        Address() = default;
        Address(uintptr_t p) : p(p) {}
        virtual ~Address() = default;

        friend llvm::raw_ostream& operator<< (llvm::raw_ostream& os, const Address& addr);

    public:
        auto& u()  { return p; }
        void print() const;
        std::string str() const;

        uintptr_t* operator&() const { return reinterpret_cast<uintptr_t*>(p);}
        uintptr_t& operator*() const { return *reinterpret_cast<uintptr_t*>(p);}
        operator uintptr_t() const { return p; }

        virtual Address& operator++() { ++p;  return *this; }
        virtual Address& operator--() { --p; return *this; }

        template <typename UintTy>
        Address& operator<<(UintTy v) {
            *reinterpret_cast<UintTy*>(p) = v;
            p += sizeof(UintTy);
            return *this;
        }

        virtual Address& operator<<(const char* s){
            size_t len = strlen(s) + 1;  // \0
            memcpy(reinterpret_cast<void*>(p), s, len);
            p += len;
            return *this;
        }

    protected:
        static constexpr unsigned len = sizeof(uintptr_t) * 2 + 2;
    };


    class StackAddress : public Address
    {
    public:
        StackAddress() = default;
        StackAddress(uintptr_t p) : Address(p) {}
    public:
        StackAddress& operator++() override { --p;  return *this; }
        StackAddress& operator--() override { ++p; return *this; }

        template <typename UintTy>
        StackAddress& operator<<(UintTy v){
            p -= sizeof(UintTy);
            *reinterpret_cast<UintTy*>(p) = v;
            return *this;
        }

        StackAddress& operator<<(const char* s) override{
            size_t len = strlen(s) + 1;  // \0
            p -= len;
            memcpy(reinterpret_cast<void*>(p), s, len);
            return *this;
        }
    };

    std::ostream& operator<< (std::ostream& os, const Address& addr);
    llvm::raw_ostream& operator<< (llvm::raw_ostream& os, const Address& addr);


    template <typename UintTy>
    struct U
    {
        UintTy u;

        template <typename T>
        constexpr U(T v) : u(static_cast<UintTy>(v)) {}
        constexpr U() = default;

        operator UintTy() const noexcept{ return u; }
    };

    using u8 = U<uint8_t>;
    using u16 = U<uint16_t>;
    using u32 = U<uint32_t>;
    using u64 = U<uint64_t>;
} // RVision