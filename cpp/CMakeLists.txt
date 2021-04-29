cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)

project(cpp)

add_executable(test_Profiler
    ${CMAKE_SOURCE_DIR}/test_Profiler.cc
    ${CMAKE_SOURCE_DIR}/Profiler.cc
)
