//
// Created by zzm on 2026/1/26
// Part of RVision
//

#include "Machine/BaseStack.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Format.h"
#include "Support/Option.h"
#include <unistd.h>
#include <sys/mman.h>
#include <sys/auxv.h>
#include <cassert>

#include "Machine/BaseMachine.h"

using namespace RVision;
using namespace llvm;

namespace
{
    using PS = std::pair<uint32_t, const char*>;
    struct ArgInfo{
        std::vector<PS> Arg;

        ArgInfo(){
            Arg.emplace_back(0, Option::InputFile.c_str());
            for (auto& s : Option::Args)
                Arg.emplace_back(0, s.c_str());
        }

        auto argc() const { return Arg.size(); }

        auto begin() { return Arg.rbegin(); }
        auto end() { return Arg.rend(); }
    };

    struct EnvInfo{
        std::vector<PS> Env;

        EnvInfo(){
            auto p = environ;
            while (*p){
                Env.emplace_back(0, *p);
                ++p;
            }
        }

        auto begin() { return Env.rbegin(); }
        auto end() { return Env.rend(); }
    };

    struct AuxInfo{
        std::array<uintptr_t, 20> Aux;

        AuxInfo(){
            size_t i = 0;
            // Aux[i++] = AT_HWCAP;
            // Aux[i++] = getauxval(AT_HWCAP);
            // Aux[i++] = AT_PAGESZ;
            // Aux[i++] = 4096;
            // Aux[i++] = AT_CLKTCK;
            // Aux[i++] = CLOCKS_PER_SEC;
            // Aux[i++] = AT_PHDR;
            // Aux[i++] = bi->mmap_addr(0) + bi->elf_header()->e_phoff;
            // Aux[i++] = AT_PHENT;
            // Aux[i++] = sizeof(Elf_Phdr);
            // Aux[i++] = AT_PHNUM;
            // Aux[i++] = elf_header()->e_phnum;
            // Aux[i++] = AT_BASE;
            // Aux[i++] = 0x10000;
            // Aux[i++] = AT_FLAGS;
            // Aux[i++] = 0;
            // Aux[i++] = AT_ENTRY;
            // Aux[i++] = entry;
            // Aux[i++] = AT_UID;
            // Aux[i++] = getuid();
            // Aux[i++] = AT_EUID;
            // Aux[i++] = geteuid();
            // Aux[i++] = AT_GID;
            // Aux[i++] = getgid();
            // Aux[i++] = AT_EGID;
            // Aux[i++] = getegid();
            // Aux[i++] = AT_SECURE;
            // Aux[i++] = 0;
            // Aux[i++] = AT_RANDOM;
            // Aux[i++] = entry;
            // Aux[i++] = AT_HWCAP2;
            // Aux[i++] = 0;
            // Aux[i++] = AT_EXECFN;
            // Aux[i++] = file_name_pointer;
            // Aux[i++] = AT_PLATFORM;
            // Aux[i++] = platform_string_on_stack;
            // Aux[i++] = AT_NULL;
            // Aux[i++] = 0;
        }
    };
}

void BaseStack::init()
{
    ArgInfo argInfo;
    EnvInfo envInfo;
    AuxInfo auxInfo;

    Top << u32();
    for (auto& [p, s] : envInfo) p = Top << s;
    for (auto& [p, s] : argInfo) p = Top << s;
    Top << u64(AT_NULL);
    Top << u32();
    for (auto& [p, _] : envInfo) Top << p;
    Top << u32();
    for (auto& [p, _] : argInfo) Top << p;
    Top << u32(argInfo.argc());
}

void BaseStack::alloc() {

    int prot = PROT_READ | PROT_WRITE;
    int flags = MAP_PRIVATE | MAP_ANONYMOUS | MAP_GROWSDOWN;
    void* low = mmap(nullptr,STACK_SIZE, prot, flags,-1,0);
    assert (low != MAP_FAILED);

    End = (uint64_t)low;
    Begin = End + STACK_SIZE;
    Top = Begin;
}

void BaseStack::print()
{
    constexpr unsigned len = sizeof(uintptr_t) * 2 + 4;
    dbgs()
    << "[Stack Info]\n"
    << left_justify("Begin", len)
    << left_justify("End", len)
    << "\n"
    << Begin << indent(2)
    << End
    << "\n\n";
}
