# hello-cmake

This project outlines a minimal example of how to work with CMake.
We have a simple `main.cpp` that prints out the string `Hello CMake!` and a simple `CMakeLists.txt` file that tells CMake how the project is structured.

```C++
#include <iostream>

int main()
{
    std::cout << "Hello CMake!" << std::endl;
}
```

```CMake
cmake_minimum_required(VERSION 3.24)

project(hello-cmake DESCRIPTION "A minimal demo of CMake" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

add_executable(hello-cmake main.cpp)
```

You can generate your build system of choice by running or you can use your system's default.

```bash
# specify generator
$ cmake -S . -B .build -G "<YOUR_GENERATOR_STRING_HERE>"

# use system default
$ cmake -S . -B .build
```

Then you can build the application using the build system you generated (eg Visual Studio) or you can just use CMake's build command.

```bash
$ cmake --build .build/
```

Then you can run the application and you should see the following printed to the console:

```
Hello CMake!
```