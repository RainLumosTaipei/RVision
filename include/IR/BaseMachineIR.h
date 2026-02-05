//
// Created by zzm on 25-12-31
// Part of RVision
//
// 这个类记录反汇编得到的 MIR，并且包含一些在原文件中的信息
//

#pragma once 

#include <llvm/MC/MCInst.h>
#include <llvm/Support/raw_ostream.h>

namespace llvm
{
    class MCInstrDesc;
}

namespace RVision {

    class BaseMachine;
    class BaseMachineIR {
    private:
        uint64_t Addr;
        llvm::MCInst Inst;

    private:
        virtual const BaseMachine& getMachine() const = 0;

    public:
        BaseMachineIR(llvm::MCInst inst, uint64_t addr);
        virtual ~BaseMachineIR() = default;

    public:
        const llvm::MCInst& getInst() const { return Inst; }
        const uint64_t& getAddr() const { return Addr; }
        void print(llvm::raw_ostream& out = llvm::outs()) const;
        const llvm::MCInstrDesc& getMIDesc() const;
    };



} // RVision
