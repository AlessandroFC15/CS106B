# cmake_minimum_required(VERSION <specify CMake version here>)
project(CS106B)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Chapter1/exercise9.cpp)
add_executable(CS106B ${SOURCE_FILES})