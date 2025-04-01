cmake_minimum_required(VERSION 3.24)

project(hello-cmake DESCRIPTION "A minimal demo of CMake" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

add_executable(hello-cmake main.cpp)