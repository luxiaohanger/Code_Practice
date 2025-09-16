cmake_minimum_required(VERSION 3.29)
project(Code_Practice)

set(CMAKE_CXX_STANDARD 23)

add_executable(Code_Practice main.cpp)
add_subdirectory(LeetCode)
add_subdirectory(Others)
