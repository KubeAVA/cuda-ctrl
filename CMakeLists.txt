cmake_minimum_required(VERSION 3.22)
project(cuda-ctrl)

set(CMAKE_CXX_STANDARD 14)
set(STATIC_C_LIBRARIES -static-libgcc -static-libstdc++)

add_library(cuda-ctrl SHARED
        include/cuda_defines.h
        include/entry_manager.h
        include/hooks.h
        include/log.h
        src/hooks.cpp
        src/entry_manager.cpp
        src/log.cpp)

target_link_libraries(cuda-ctrl ${STATIC_C_LIBRARIES} -ldl)