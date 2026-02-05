# RVision

实现从`x86`到`RISCV`的二进制翻译器

1. 动态翻译

2. 静态翻译

## 依赖

LLVM 22.1.0-rc1

## 使用

```shell
OVERVIEW: RVision Binary Translator

USAGE: RVision [options] --args Args passed to binary files

OPTIONS:

Generic Options:

--help              - Display available options (--help-hidden for more)
--help-list         - Display list of available options (--help-list-hidden for more)
--version           - Display the version of this program

RVision Translator Options:
Options for RVision Binary Translator

--args <string>...  - Args passed to binary files
--input=<string>    - Input binary files
--load-base=<ulong> - Load base addr
```

