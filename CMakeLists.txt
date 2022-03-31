cmake_minimum_required(VERSION 3.22)
project(cuda-ctrl)

set(CMAKE_CXX_STANDARD 14)

add_library(cuda-ctrl SHARED
        include/cuda_defines.h
        include/entry_manager.h
        include/entry_enum.h
        src/cuda_entries.cpp
        src/entry_manager.cpp)

target_link_libraries(cuda-ctrl ${STATIC_C_LIBRARIES})