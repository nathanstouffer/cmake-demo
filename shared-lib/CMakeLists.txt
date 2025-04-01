cmake_minimum_required(VERSION 3.24)

project(hello-static-lib DESCRIPTION "A demo of a shared library with CMake" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)