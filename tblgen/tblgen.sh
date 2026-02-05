#!/bin/bash

#../build/tblgen/RVision-tblgen \
#  -I /root/llvm-project/llvm/include \
#  -I /root/llvm-project/llvm/include/llvm/Target \
#  -I /root/llvm-project/llvm/lib/Target/X86 \
#  --gen-x86-translator  \
#  X86RVision.td \
#  -o ../include/Translator/X86Translators.h

../build/tblgen/RVision-tblgen \
  -I /root/llvm-project/llvm/include \
  -I /root/llvm-project/llvm/include/llvm/Target \
  -I /root/llvm-project/llvm/lib/Target/X86 \
  --gen-x86-interpreter  \
  --time-phases \
  X86RVision.td \
  -o ../include/Interpreter/X86Interpreters.h