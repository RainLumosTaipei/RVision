//
// Created by zzm on 2026/1/19
// Part of RVision
//

#include "llvm/Object/ObjectFile.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "Object/ObjectInfo.h"
#include "Machine/BaseMachine.h"
#include "Support/Error.h"
#include "IR/IRType.h"
#include "IR/BaseMachineIR.h"
#include "Object/ELFLoadInfo.h"
#include "Object/ELFInfo.h"
#include "Object/BaseLoader.h"


using namespace RVision;
using namespace llvm;
using namespace llvm::object;

namespace
{
    std::unique_ptr<ObjectInfo>
    createELFInfo(const ELFObjectFileBase &Obj) {
        if (const auto *O = dyn_cast<ELF32LEObjectFile>(&Obj))
            return createInfo(*O);
        if (const auto *O = dyn_cast<ELF32BEObjectFile>(&Obj))
            return createInfo(*O);
        if (const auto *O = dyn_cast<ELF64LEObjectFile>(&Obj))
            return createInfo(*O);
        return createInfo(cast<ELF64BEObjectFile>(Obj));
    }
}

std::unique_ptr<ObjectInfo> RVision::createInfo(const ObjectFile& Obj)
{
    if (const auto *O = dyn_cast<ELFObjectFileBase>(&Obj))
        return createELFInfo(*O);

    reportFatalUsageError("Not supported exec file type");
}


OwningBinary<ObjectFile> RVision::createFile(llvm::StringRef FileName)
{
    auto O = unwrapOrError(ObjectFile::createObjectFile(FileName));
    return O;
}



ObjectInfo::ObjectInfo(const ObjectFile& O) : O(O) {}

void ObjectInfo::disassemble()
{
    auto triple = O.makeTriple();
    auto& machine = BaseMachine::getMachine(triple);

    auto isText = [](const SectionRef& Section) {
        return Section.isText();
    };

    // .init
    // .plt
    // .text
    // .fini

    // 遍历所有 section
    for (auto Section : SectionFilter(isText, O)) {
        auto Name = unwrapOrError(Section.getName());

        uint64_t SecAddr = Section.getAddress();
        uint64_t SecSize = Section.getSize();
        if (SecSize == 0) continue;

        auto Bytes = unwrapOrError(Section.getContents());

        ArrayRef Data(reinterpret_cast<const uint8_t *>(Bytes.data()), Bytes.size());
        uint64_t Offset = 0;

        while (Offset < SecSize) {
            MCInst Inst;
            uint64_t CurAddr = SecAddr + Offset;
            ArrayRef<uint8_t> Slice = Data.slice(Offset);

            uint64_t InstSize;

            auto S =
                machine.getDisAsm().getInstruction(Inst, InstSize, Slice, CurAddr, nulls());

            if (S == MCDisassembler::Fail) {
                // 无法解码：跳过一个字节
                Offset += 1;
                continue;
            }

            MIR.emplace_back(MachineIRFactory::create(triple.getArch(),Inst, CurAddr));

            Offset += InstSize;
        }
    }
}

void ObjectInfo::print(llvm::raw_ostream& out) const
{
    for (const auto& MI : MIR) MI->print(out);
}

void ObjectInfo::load() const
{
    Loader->alloc();
    Loader->reloc();
    Loader->env();
}

void ObjectInfo::free() const
{
    Loader->free();
}




