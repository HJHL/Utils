cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 17)

project(cpp)

add_executable(test_Profiler
    ${CMAKE_SOURCE_DIR}/test_Profiler.cc
    ${CMAKE_SOURCE_DIR}/Profiler.cc
)

add_executable(test_Log
    ${CMAKE_SOURCE_DIR}/test_Log.cc
)
