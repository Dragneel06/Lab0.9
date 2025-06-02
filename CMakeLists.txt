cmake_minimum_required(VERSION 3.31)
project(lab_9)
set(CMAKE_CXX_STANDARD 20)
include_directories("include")
file(GLOB SRC "src/*.cpp" "src/*.cxx")
add_executable(lab_9 main.cpp
        include/Includes.hpp
        include/Massif.hpp
        src/Massif.cpp
        include/Function.hpp
        src/Function.cpp)
