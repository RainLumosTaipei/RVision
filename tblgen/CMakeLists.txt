cmake_minimum_required(VERSION 3.13)

project(RVision-tblgen)

file(GLOB_RECURSE RVision_tblgen_src src/*.cpp include/*.h)


llvm_map_components_to_libnames(
        LLVM_LIBS

        TableGen
        MC
        Support
)

add_executable(RVision-tblgen ${RVision_tblgen_src})

target_link_libraries(RVision-tblgen ${LLVM_LIBS})

target_include_directories(RVision-tblgen PUBLIC include)

set_target_properties(RVision-tblgen PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        COMPILE_FLAGS "-fno-rtti" # 关闭RTTI
)




