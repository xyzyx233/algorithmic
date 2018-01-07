cmake_minimum_required(VERSION 3.8)
project(NQueen)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp queen.cpp queen.h point.cpp point.h)
add_executable(NQueen ${SOURCE_FILES})