# hello-cmake

This project outlines a minimal example of how to work with CMake.
You can generate your build system of choice by running or you can use your system's default

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