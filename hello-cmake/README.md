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
$ cmake -S . -B .build/specified -G "<YOUR_GENERATOR_STRING_HERE>"

# use system default
$ cmake -S . -B .build/default
```

Then you can build the application using the build system you generated (eg Visual Studio) or you can just use CMake's build command.

```bash
$ cmake --build .build/default
```

Then you can run the application and you should see the following printed to the console:

```
Hello CMake!
```

You can also specify a build type.
CMake supports four build types out of the box: `Debug`, `Release`, `RelWithDebInfo`, and `MinSizeRel` (and you can create additional build types).
You can even see the size difference with a very small program.

```bash
# there is some nuance here depending on your generator. some
# build systems have the capacity to support multiple
# configurations (eg Visual Studio) while others (eg Makefile)
# can only support one configuration

# a debug build
$ cmake -S . -B .build/Debug -G "<YOUR_GENERATOR_STRING_HERE>"

# a build to deploy
$ cmake -S . -B .build/MinSizeRel -G "<YOUR_GENERATOR_STRING_HERE>"
```