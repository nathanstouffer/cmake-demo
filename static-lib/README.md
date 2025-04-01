# static-lib

This project outlines a minimal static library that can be specified via CMake.
The `hello-static-lib` target depends on a library that was defined earlier in the CMake tree.
That library's headers are included and it is provided to the linker to resolve symbols.