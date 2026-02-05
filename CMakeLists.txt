cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(RVision)

# llvm config
set(LLVM_DIR "/root/llvm-project")
set(LLVM_BUILD_VERSION "22.1.0-rc1")
find_package(LLVM REQUIRED CONFIG HINTS ${LLVM_DIR}/build-${LLVM_BUILD_VERSION}/lib/cmake/llvm)
include_directories(
        ${LLVM_INCLUDE_DIRS}
        ${CLANG_INCLUDE_DIRS}
        ${LLVM_DIR}/build-${LLVM_BUILD_VERSION}/lib/Target/X86
        SYSTEM)
link_directories(${LLVM_LIBRARY_DIRS})
list(APPEND CMAKE_MODULE_PATH ${LLVM_CMAKE_DIR})
add_definitions(${LLVM_DEFINITIONS})


# RVision tblgen
add_subdirectory(tblgen)

# RVision
file(GLOB_RECURSE RVision_Src src/*.cpp include/*.h)
add_executable(RVision ${RVision_Src})


#target_compile_options(RVision PRIVATE -fdump-lang-class)
target_include_directories(RVision PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)


llvm_map_components_to_libnames(
        LLVM_LIBS

        X86CodeGen
        X86Info
        X86Desc
        X86Disassembler

        MC
        TargetParser
        Support
)

target_link_libraries(RVision ${LLVM_LIBS})


set_target_properties(RVision PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        COMPILE_FLAGS "-fno-rtti" # 关闭RTTI
)

