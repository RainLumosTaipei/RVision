/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* RVision X86 Instruction Interpreter Classes                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "Interpreter/X86InterpreterBase.h"
#include "X86GenInstrInfo.inc"

namespace RVision
{

class AAAInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 55;

public:
    void translate(const X86MachineIR &) override;
};

class AAD8i8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 213;

public:
    void translate(const X86MachineIR &) override;
};

class AADD32mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 252;

public:
    void translate(const X86MachineIR &) override;
};

class AAM8i8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 212;

public:
    void translate(const X86MachineIR &) override;
};

class AASInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 63;

public:
    void translate(const X86MachineIR &) override;
};

class ABS_FInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 217;

public:
    void translate(const X86MachineIR &) override;
};

class ABS_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ABS_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ABS_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADC8i8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 20;

public:
    void translate(const X86MachineIR &) override;
};

class ADC8miInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 128;

public:
    void translate(const X86MachineIR &) override;
};

class ADC8mi8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 130;

public:
    void translate(const X86MachineIR &) override;
};

class ADC8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 16;

public:
    void translate(const X86MachineIR &) override;
};

class ADC8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 18;

public:
    void translate(const X86MachineIR &) override;
};

class ADC16i16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 21;

public:
    void translate(const X86MachineIR &) override;
};

class ADC16miInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 129;

public:
    void translate(const X86MachineIR &) override;
};

class ADC16mi8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 131;

public:
    void translate(const X86MachineIR &) override;
};

class ADC16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 17;

public:
    void translate(const X86MachineIR &) override;
};

class ADC16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 19;

public:
    void translate(const X86MachineIR &) override;
};

class ADCX32rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 246;

public:
    void translate(const X86MachineIR &) override;
};

class ADCX32rm_EVEXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 102;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8i8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 4;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8mr_EVEXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8mr_NDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8mr_NFInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8mr_NF_NDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8ri_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 2;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rr_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rr_EVEXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rr_NDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rr_NFInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD8rr_NF_NDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD16i16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 5;

public:
    void translate(const X86MachineIR &) override;
};

class ADD16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 1;

public:
    void translate(const X86MachineIR &) override;
};

class ADD16ri_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 3;

public:
    void translate(const X86MachineIR &) override;
};

class ADD16rr_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD32ri_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD32rr_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD64ri32_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD64rr_DBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADDPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 88;

public:
    void translate(const X86MachineIR &) override;
};

class ADDR16_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 103;

public:
    void translate(const X86MachineIR &) override;
};

class ADDSUBPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 208;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_F32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 216;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_F64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 220;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FI16mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 222;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FI32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 218;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FpI16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FpI16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FpI16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FpI32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FpI32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADD_FpI32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADJCALLSTACKDOWN32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADJCALLSTACKDOWN64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADJCALLSTACKUP32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ADJCALLSTACKUP64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AESDEC128KLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 221;

public:
    void translate(const X86MachineIR &) override;
};

class AESDEC256KLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 223;

public:
    void translate(const X86MachineIR &) override;
};

class AESIMCrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 219;

public:
    void translate(const X86MachineIR &) override;
};

class AND8i8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 36;

public:
    void translate(const X86MachineIR &) override;
};

class AND8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 32;

public:
    void translate(const X86MachineIR &) override;
};

class AND8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 34;

public:
    void translate(const X86MachineIR &) override;
};

class AND16i16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 37;

public:
    void translate(const X86MachineIR &) override;
};

class AND16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 33;

public:
    void translate(const X86MachineIR &) override;
};

class AND16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 35;

public:
    void translate(const X86MachineIR &) override;
};

class ANDN32rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 242;

public:
    void translate(const X86MachineIR &) override;
};

class ANDNPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 85;

public:
    void translate(const X86MachineIR &) override;
};

class ANDPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 84;

public:
    void translate(const X86MachineIR &) override;
};

class ARPL16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 99;

public:
    void translate(const X86MachineIR &) override;
};

class ASAN_CHECK_MEMACCESSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX1_SETALLONESInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX2_SETALLONESInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_128_SET0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_256_SET0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_512_SET0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_512_SETALLONESInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_512_SEXT_MASK_32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_512_SEXT_MASK_64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_FsFLD0F128Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_FsFLD0SDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_FsFLD0SHInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX512_FsFLD0SSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class AVX_SET0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class BEXTR32rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 247;

public:
    void translate(const X86MachineIR &) override;
};

class BLENDPDrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 13;

public:
    void translate(const X86MachineIR &) override;
};

class BLENDPSrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 12;

public:
    void translate(const X86MachineIR &) override;
};

class BLSI32rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 243;

public:
    void translate(const X86MachineIR &) override;
};

class BOUNDS16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 98;

public:
    void translate(const X86MachineIR &) override;
};

class BSF16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 188;

public:
    void translate(const X86MachineIR &) override;
};

class BSR16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 189;

public:
    void translate(const X86MachineIR &) override;
};

class BSWAP16r_BADInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 200;

public:
    void translate(const X86MachineIR &) override;
};

class BT16mi8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 186;

public:
    void translate(const X86MachineIR &) override;
};

class BT16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 163;

public:
    void translate(const X86MachineIR &) override;
};

class BTC16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 187;

public:
    void translate(const X86MachineIR &) override;
};

class BTR16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 179;

public:
    void translate(const X86MachineIR &) override;
};

class BTS16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 171;

public:
    void translate(const X86MachineIR &) override;
};

class BZHI32rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 245;

public:
    void translate(const X86MachineIR &) override;
};

class CALL16mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 255;

public:
    void translate(const X86MachineIR &) override;
};

class CALL64m_RVMARKERInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CALL64pcrel32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 232;

public:
    void translate(const X86MachineIR &) override;
};

class CALL64pcrel32_RVMARKERInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CALL64r_RVMARKERInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CATCHRETInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CBWInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 152;

public:
    void translate(const X86MachineIR &) override;
};

class CCMP8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 56;

public:
    void translate(const X86MachineIR &) override;
};

class CCMP8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 58;

public:
    void translate(const X86MachineIR &) override;
};

class CCMP16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 57;

public:
    void translate(const X86MachineIR &) override;
};

class CCMP16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 59;

public:
    void translate(const X86MachineIR &) override;
};

class CDQInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 153;

public:
    void translate(const X86MachineIR &) override;
};

class CFCMOV16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 64;

public:
    void translate(const X86MachineIR &) override;
};

class CHS_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CHS_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CHS_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CLCInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 248;

public:
    void translate(const X86MachineIR &) override;
};

class CLDEMOTEInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 28;

public:
    void translate(const X86MachineIR &) override;
};

class CLEANUPRETInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CLFLUSHInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 174;

public:
    void translate(const X86MachineIR &) override;
};

class CLIInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 250;

public:
    void translate(const X86MachineIR &) override;
};

class CLTSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 6;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVBE_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVBE_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVBE_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVB_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVB_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVB_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVE_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVE_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVE_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNBE_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNBE_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNBE_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNB_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNB_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNB_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNE_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNE_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNE_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNP_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNP_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVNP_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVP_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVP_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOVP_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_FR16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_FR16XInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_FR32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_FR32XInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_FR64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_FR64XInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_GR8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_GR16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_GR32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_RFP32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_RFP64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_RFP80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK2Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK4Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VK64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VR64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VR128Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VR128XInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VR256Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VR256XInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMOV_VR512Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CMP8i8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 60;

public:
    void translate(const X86MachineIR &) override;
};

class CMP16i16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 61;

public:
    void translate(const X86MachineIR &) override;
};

class CMPCCXADDmr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 224;

public:
    void translate(const X86MachineIR &) override;
};

class CMPPDrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 194;

public:
    void translate(const X86MachineIR &) override;
};

class CMPSBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 166;

public:
    void translate(const X86MachineIR &) override;
};

class CMPSLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 167;

public:
    void translate(const X86MachineIR &) override;
};

class CMPXCHG8BInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 199;

public:
    void translate(const X86MachineIR &) override;
};

class CMPXCHG8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 176;

public:
    void translate(const X86MachineIR &) override;
};

class CMPXCHG16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 177;

public:
    void translate(const X86MachineIR &) override;
};

class COMISDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 47;

public:
    void translate(const X86MachineIR &) override;
};

class COM_FpIr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class COM_FpIr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class COM_FpIr80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class COM_Fpr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class COM_Fpr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class COM_Fpr80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class CPUIDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 162;

public:
    void translate(const X86MachineIR &) override;
};

class CRC32r32m8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 240;

public:
    void translate(const X86MachineIR &) override;
};

class CRC32r32m16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 241;

public:
    void translate(const X86MachineIR &) override;
};

class CS_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 46;

public:
    void translate(const X86MachineIR &) override;
};

class CTEST8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 132;

public:
    void translate(const X86MachineIR &) override;
};

class CTEST16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 133;

public:
    void translate(const X86MachineIR &) override;
};

class CVTDQ2PDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 230;

public:
    void translate(const X86MachineIR &) override;
};

class CVTDQ2PSrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 91;

public:
    void translate(const X86MachineIR &) override;
};

class CVTPD2PSrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 90;

public:
    void translate(const X86MachineIR &) override;
};

class CVTSD2SI64rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 45;

public:
    void translate(const X86MachineIR &) override;
};

class CVTSI2SDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 42;

public:
    void translate(const X86MachineIR &) override;
};

class CVTTSD2SI64rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 44;

public:
    void translate(const X86MachineIR &) override;
};

class DAAInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 39;

public:
    void translate(const X86MachineIR &) override;
};

class DEC8mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 254;

public:
    void translate(const X86MachineIR &) override;
};

class DEC16r_altInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 72;

public:
    void translate(const X86MachineIR &) override;
};

class DIVPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 94;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_FpI16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_FpI16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_FpI16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_FpI32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_FpI32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIVR_FpI32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_FpI16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_FpI16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_FpI16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_FpI32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_FpI32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DIV_FpI32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DPPDrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 65;

public:
    void translate(const X86MachineIR &) override;
};

class DS_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 62;

public:
    void translate(const X86MachineIR &) override;
};

class DYN_ALLOCA_32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class DYN_ALLOCA_64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class EH_RETURNInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 195;

public:
    void translate(const X86MachineIR &) override;
};

class EH_SjLj_LongJmp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class EH_SjLj_LongJmp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class EH_SjLj_SetJmp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class EH_SjLj_SetJmp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class EH_SjLj_SetupInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ENCODEKEY256Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 251;

public:
    void translate(const X86MachineIR &) override;
};

class ENDBR32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 30;

public:
    void translate(const X86MachineIR &) override;
};

class ES_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 38;

public:
    void translate(const X86MachineIR &) override;
};

class EXTRACTPSmriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 23;

public:
    void translate(const X86MachineIR &) override;
};

class EXTRQInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 121;

public:
    void translate(const X86MachineIR &) override;
};

class EXTRQIInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 120;

public:
    void translate(const X86MachineIR &) override;
};

class FARCALL16iInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 154;

public:
    void translate(const X86MachineIR &) override;
};

class FARJMP16iInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 234;

public:
    void translate(const X86MachineIR &) override;
};

class FEMMSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 14;

public:
    void translate(const X86MachineIR &) override;
};

class FP32_TO_INT16_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP32_TO_INT32_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP32_TO_INT64_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP64_TO_INT16_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP64_TO_INT32_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP64_TO_INT64_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP80_ADDm32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP80_ADDrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP80_TO_INT16_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP80_TO_INT32_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FP80_TO_INT64_IN_MEMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FS_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 100;

public:
    void translate(const X86MachineIR &) override;
};

class FsFLD0F128Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FsFLD0SDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FsFLD0SHInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class FsFLD0SSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class GF2P8AFFINEINVQBrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 207;

public:
    void translate(const X86MachineIR &) override;
};

class GF2P8AFFINEQBrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 206;

public:
    void translate(const X86MachineIR &) override;
};

class GS_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 101;

public:
    void translate(const X86MachineIR &) override;
};

class HADDPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 124;

public:
    void translate(const X86MachineIR &) override;
};

class HLTInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 244;

public:
    void translate(const X86MachineIR &) override;
};

class HSUBPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 125;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp64m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ILD_Fp64m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IMUL16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 175;

public:
    void translate(const X86MachineIR &) override;
};

class IMUL16rmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 105;

public:
    void translate(const X86MachineIR &) override;
};

class IMUL16rmi8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 107;

public:
    void translate(const X86MachineIR &) override;
};

class IN8riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 228;

public:
    void translate(const X86MachineIR &) override;
};

class IN8rrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 236;

public:
    void translate(const X86MachineIR &) override;
};

class IN16riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 229;

public:
    void translate(const X86MachineIR &) override;
};

class IN16rrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 237;

public:
    void translate(const X86MachineIR &) override;
};

class INDIRECT_THUNK_CALL32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class INDIRECT_THUNK_CALL64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class INDIRECT_THUNK_TCRETURN32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class INDIRECT_THUNK_TCRETURN64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class INSBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 108;

public:
    void translate(const X86MachineIR &) override;
};

class INSLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 109;

public:
    void translate(const X86MachineIR &) override;
};

class INTInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 205;

public:
    void translate(const X86MachineIR &) override;
};

class INT3Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 204;

public:
    void translate(const X86MachineIR &) override;
};

class INVDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 8;

public:
    void translate(const X86MachineIR &) override;
};

class IRETInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp64m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ISTT_Fp64m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp64m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class IST_Fp64m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class Int_eh_sjlj_setup_dispatchInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class JCC_1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 112;

public:
    void translate(const X86MachineIR &) override;
};

class JCXZInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 227;

public:
    void translate(const X86MachineIR &) override;
};

class JMPABS64iInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 161;

public:
    void translate(const X86MachineIR &) override;
};

class JMP_1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 235;

public:
    void translate(const X86MachineIR &) override;
};

class JMP_2Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 233;

public:
    void translate(const X86MachineIR &) override;
};

class KADDBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 74;

public:
    void translate(const X86MachineIR &) override;
};

class KANDNBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 66;

public:
    void translate(const X86MachineIR &) override;
};

class KCFI_CHECKInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KMOVBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 144;

public:
    void translate(const X86MachineIR &) override;
};

class KMOVBkrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 146;

public:
    void translate(const X86MachineIR &) override;
};

class KMOVBmkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 145;

public:
    void translate(const X86MachineIR &) override;
};

class KMOVBrkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 147;

public:
    void translate(const X86MachineIR &) override;
};

class KNOTBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 68;

public:
    void translate(const X86MachineIR &) override;
};

class KORBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 69;

public:
    void translate(const X86MachineIR &) override;
};

class KSET0DInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KSET0QInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KSET0WInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KSET1DInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KSET1QInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KSET1WInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class KSHIFTLBkiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 50;

public:
    void translate(const X86MachineIR &) override;
};

class KSHIFTLDkiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 51;

public:
    void translate(const X86MachineIR &) override;
};

class KSHIFTRBkiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 48;

public:
    void translate(const X86MachineIR &) override;
};

class KSHIFTRDkiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 49;

public:
    void translate(const X86MachineIR &) override;
};

class KUNPCKBWkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 75;

public:
    void translate(const X86MachineIR &) override;
};

class KXNORBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 70;

public:
    void translate(const X86MachineIR &) override;
};

class KXORBkkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 71;

public:
    void translate(const X86MachineIR &) override;
};

class LAHFInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 159;

public:
    void translate(const X86MachineIR &) override;
};

class LCMPXCHG16B_NO_RBXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LCMPXCHG16B_SAVE_RBXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LDS16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 197;

public:
    void translate(const X86MachineIR &) override;
};

class LDTILECFGInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 73;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp64m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp80mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp032Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp064Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp080Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp132Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp164Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LD_Fp180Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LEA16rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 141;

public:
    void translate(const X86MachineIR &) override;
};

class LEAVEInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 201;

public:
    void translate(const X86MachineIR &) override;
};

class LES16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 196;

public:
    void translate(const X86MachineIR &) override;
};

class LFS16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 180;

public:
    void translate(const X86MachineIR &) override;
};

class LGS16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 181;

public:
    void translate(const X86MachineIR &) override;
};

class LKGS16mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LKGS16rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LLDT16mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LLDT16rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LOCK_ADD8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LOCK_OR16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 9;

public:
    void translate(const X86MachineIR &) override;
};

class LOCK_SUB8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 40;

public:
    void translate(const X86MachineIR &) override;
};

class LOCK_SUB16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 41;

public:
    void translate(const X86MachineIR &) override;
};

class LODSBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 172;

public:
    void translate(const X86MachineIR &) override;
};

class LODSLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 173;

public:
    void translate(const X86MachineIR &) override;
};

class LOOPInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 226;

public:
    void translate(const X86MachineIR &) override;
};

class LOOPEInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 225;

public:
    void translate(const X86MachineIR &) override;
};

class LRET16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 203;

public:
    void translate(const X86MachineIR &) override;
};

class LRETI16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 202;

public:
    void translate(const X86MachineIR &) override;
};

class LSS16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 178;

public:
    void translate(const X86MachineIR &) override;
};

class LTRmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LTRrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class LXADD8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 192;

public:
    void translate(const X86MachineIR &) override;
};

class LXADD16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 193;

public:
    void translate(const X86MachineIR &) override;
};

class MASKPAIR16LOADInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MASKPAIR16STOREInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MAXCPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 95;

public:
    void translate(const X86MachineIR &) override;
};

class MINCPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 93;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_EMMSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 119;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_MOVD64from64mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 126;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_MOVD64rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 110;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_MOVDQ2QrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 214;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_MOVNTQmrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 231;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_MOVQ64mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 127;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_MOVQ64rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 111;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PABSWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 29;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PADDWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 253;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PALIGNRrmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 15;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PCMPEQBrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 116;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PCMPEQDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 118;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PCMPEQWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 117;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PHSUBSWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 7;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PMAXSWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 238;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PMOVMSKBrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 215;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PMULHRSWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 11;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSHUFBrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSHUFBrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSIGNDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 10;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSLLDriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 114;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSLLQriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 115;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSLLWriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 113;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSRLDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 210;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSRLQrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 211;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSRLWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 209;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PSUBWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 249;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PUNPCKHBWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 104;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PUNPCKHDQrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 106;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PUNPCKLBWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 96;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PUNPCKLWDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 97;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_PXORrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 239;

public:
    void translate(const X86MachineIR &) override;
};

class MMX_SET0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MORESTACK_RETInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MORESTACK_RET_RESTORE_R10Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOV8ao16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 160;

public:
    void translate(const X86MachineIR &) override;
};

class MOV8miInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 198;

public:
    void translate(const X86MachineIR &) override;
};

class MOV8mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 136;

public:
    void translate(const X86MachineIR &) override;
};

class MOV8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 138;

public:
    void translate(const X86MachineIR &) override;
};

class MOV16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 137;

public:
    void translate(const X86MachineIR &) override;
};

class MOV16msInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 140;

public:
    void translate(const X86MachineIR &) override;
};

class MOV16riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 184;

public:
    void translate(const X86MachineIR &) override;
};

class MOV16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 139;

public:
    void translate(const X86MachineIR &) override;
};

class MOV16smInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 142;

public:
    void translate(const X86MachineIR &) override;
};

class MOV32ImmSExti8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOV32r0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOV32r1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOV32r_1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOV32ri64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOV64ImmSExti8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MOVHPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 22;

public:
    void translate(const X86MachineIR &) override;
};

class MOVMSKPDrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 80;

public:
    void translate(const X86MachineIR &) override;
};

class MOVNTPDmrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 43;

public:
    void translate(const X86MachineIR &) override;
};

class MOVSBInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 164;

public:
    void translate(const X86MachineIR &) override;
};

class MOVSLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 165;

public:
    void translate(const X86MachineIR &) override;
};

class MOVSX16rm8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 190;

public:
    void translate(const X86MachineIR &) override;
};

class MOVSX16rm16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 191;

public:
    void translate(const X86MachineIR &) override;
};

class MOVZX16rm8Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 182;

public:
    void translate(const X86MachineIR &) override;
};

class MOVZX16rm16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 183;

public:
    void translate(const X86MachineIR &) override;
};

class MULPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 89;

public:
    void translate(const X86MachineIR &) override;
};

class MULX32HrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MULX32HrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MULX64HrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MULX64HrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_FpI16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_FpI16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_FpI16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_FpI32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_FpI32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MUL_FpI32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MWAITXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class MWAITX_SAVE_RBXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class NOOPLInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 31;

public:
    void translate(const X86MachineIR &) override;
};

class ORPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 86;

public:
    void translate(const X86MachineIR &) override;
};

class PFADDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 158;

public:
    void translate(const X86MachineIR &) override;
};

class PFMINrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 148;

public:
    void translate(const X86MachineIR &) override;
};

class PFRCPrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 150;

public:
    void translate(const X86MachineIR &) override;
};

class PFRSQRTrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 151;

public:
    void translate(const X86MachineIR &) override;
};

class PFSUBRrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 170;

public:
    void translate(const X86MachineIR &) override;
};

class PLDTILECFGVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PLEA32rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PLEA64rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PMOVZXDQrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 53;

public:
    void translate(const X86MachineIR &) override;
};

class PMOVZXWQrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 52;

public:
    void translate(const X86MachineIR &) override;
};

class POP2Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 143;

public:
    void translate(const X86MachineIR &) override;
};

class POPF16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 157;

public:
    void translate(const X86MachineIR &) override;
};

class POPGS16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 169;

public:
    void translate(const X86MachineIR &) override;
};

class PREFETCHIT0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 24;

public:
    void translate(const X86MachineIR &) override;
};

class PROBED_ALLOCA_32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PROBED_ALLOCA_64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PSHUFBrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PSHUFBrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0RSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0RST1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0RST1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0RSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0T1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0T1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ0VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1RSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1RST1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1RST1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1RSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1T1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1T1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PT2RPNTLVWZ1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCMMIMFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCMMIMFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCMMRLFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCMMRLFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCONJTCMMIMFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCONJTCMMIMFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCONJTFP16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCONJTFP16VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWD2PSrreInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWD2PSrreVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWD2PSrriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWD2PSrriVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16HrreInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16HrreVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16HrriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16HrriVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16LrreInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16LrreVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16LrriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2BF16LrriVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHHrreInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHHrreVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHHrriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHHrriVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHLrreInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHLrreVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHLrriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTCVTROWPS2PHLrriVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBF8PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBF8PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBF16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBF16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBHF8PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBHF8PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBSSDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBSSDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBSUDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBSUDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBUSDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBUSDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBUUDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPBUUDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPHBF8PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPHBF8PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPHF8PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTDPHF8PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDRSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDRST1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDRST1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDRSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDT1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDT1VInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILELOADDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEMOVROWrreInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEMOVROWrreVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEMOVROWrriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEMOVROWrriVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEPAIRLOADInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEPAIRSTOREInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILESTOREDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILESTOREDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEZEROInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTILEZEROVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTMMULTF32PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTMMULTF32PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTCMMIMFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTCMMIMFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTCMMRLFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTCMMRLFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTDPBF16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTDPBF16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTDPFP16PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTDPFP16PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTMMULTF32PSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTMMULTF32PSVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTRANSPOSEDInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PTTRANSPOSEDVInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class PUSHF16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 156;

public:
    void translate(const X86MachineIR &) override;
};

class PUSHGS16Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 168;

public:
    void translate(const X86MachineIR &) override;
};

class RCPPSmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 83;

public:
    void translate(const X86MachineIR &) override;
};

class RDFLAGS32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class RDFLAGS64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class RETInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class RSQRTPSmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 82;

public:
    void translate(const X86MachineIR &) override;
};

class SBB8rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 26;

public:
    void translate(const X86MachineIR &) override;
};

class SBB16mrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 25;

public:
    void translate(const X86MachineIR &) override;
};

class SBB16rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 27;

public:
    void translate(const X86MachineIR &) override;
};

class SEG_ALLOCA_32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEG_ALLOCA_64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_EndPrologueInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_EpilogueInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_PushFrameInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_PushRegInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_SaveRegInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_SaveXMMInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_SetFrameInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_StackAlignInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SEH_StackAllocInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SETB_C32rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SETB_C64rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SHLDROT32riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SHLDROT64riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SHRDROT32riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SHRDROT64riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SLDT16mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SLDT16rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SLDT32rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SLDT64rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SQRTPDmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 81;

public:
    void translate(const X86MachineIR &) override;
};

class SQRT_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SQRT_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SQRT_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SS_PREFIXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 54;

public:
    void translate(const X86MachineIR &) override;
};

class STACKALLOC_W_PROBINGInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class STR16rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class STR32rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class STR64rInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class STRmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_FpP32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_FpP64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_FpP64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_FpP80mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_FpP80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class ST_FpP80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBPDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 92;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_FpI16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_FpI16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_FpI16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_FpI32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_FpI32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUBR_FpI32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp32mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp64mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp64m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp80m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_Fp80m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_FpI16m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_FpI16m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_FpI16m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_FpI32m32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_FpI32m64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class SUB_FpI32m80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPdInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPd64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPd64_CCInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPd_CCInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPm64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPm64_REXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TAILJMPr64_REXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNdiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNdi64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNdi64ccInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNdiccInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNmi64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TCRETURNri64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLSCall_32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLSCall_64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_addr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_addr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_addrX32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_base_addr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_base_addr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_base_addrX32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_desc32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TLS_desc64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TST_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TST_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class TST_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UBSAN_UD1Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UCOM_FpIr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UCOM_FpIr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UCOM_FpIr80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UCOM_Fpr32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UCOM_Fpr64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UCOM_Fpr80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class UD1LmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 185;

public:
    void translate(const X86MachineIR &) override;
};

class V4FMADDSSrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 155;

public:
    void translate(const X86MachineIR &) override;
};

class VAARG_64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VAARG_X32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VASTART_SAVE_XMM_REGSInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VCVTPD2QQZ128rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 123;

public:
    void translate(const X86MachineIR &) override;
};

class VCVTTPD2QQZ128rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 122;

public:
    void translate(const X86MachineIR &) override;
};

class VERRmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VERRrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VERWmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VERWrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VFCMADDCSHZmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 87;

public:
    void translate(const X86MachineIR &) override;
};

class VGETEXPSDZmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 67;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVAPSZ128mr_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVAPSZ128rm_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVAPSZ256mr_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVAPSZ256rm_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVUPSZ128mr_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVUPSZ128rm_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVUPSZ256mr_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VMOVUPSZ256rm_NOVLXInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPBLENDVBYrmrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 76;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQYmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQYriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256mbiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256mbikInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256mbikzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256miInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256mikInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256mikzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256riInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256rikInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZ256rikzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZmbiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZmbikInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZmbikzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZmiInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZmikInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZmikzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZriInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZrikInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPERMQZrikzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPMACSSDQLrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 135;

public:
    void translate(const X86MachineIR &) override;
};

class VPMACSSWDrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 134;

public:
    void translate(const X86MachineIR &) override;
};

class VPMACSWWrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 149;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBYrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBYrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ128rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ128rmkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ128rmkzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ128rrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ128rrkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ128rrkzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ256rmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ256rmkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ256rmkzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ256rrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ256rrkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZ256rrkzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZrmkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZrmkzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZrrkInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBZrrkzInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VPSHUFBrrInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class VRCP14SDZrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 77;

public:
    void translate(const X86MachineIR &) override;
};

class VRSQRT14PDZ128mInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 78;

public:
    void translate(const X86MachineIR &) override;
};

class VRSQRT14SDZrmInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 79;

public:
    void translate(const X86MachineIR &) override;
};

class V_SET0Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class V_SETALLONESInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class WRFLAGS32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class WRFLAGS64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XABORT_DEFInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XAM_Fp32Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XAM_Fp64Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XAM_Fp80Interpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XBEGINInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XOR32_FPInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

class XOR64_FPInterpreter : public X86InterpreterBase {
private:
    const unsigned Opcode = 0;

public:
    void translate(const X86MachineIR &) override;
};

}
