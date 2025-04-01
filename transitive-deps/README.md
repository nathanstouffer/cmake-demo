# transitive-deps

This is one of my favorite features of CMake.
In addition to the ability to define libraries and link them into a target, CMake support _transitive_ dependencies.

That is, if you define some target `A` with a dependency on target `B` and you have a third target `T` that depends on `A`, then `T` will also depend on `B` without any extra work on your part.
Public include directories are inherited and the correct libraries are specified at link time.
It is pretty slick!

In this example, we have such a case.
The main application depends on a library `fibonacci` which, in turn, depends on a library `adder`.
The main application needs only add a single line of CMake to correctly link the dependencies: `target_link_libraries(transitive-deps fibonacci)`

```mermaid
flowchart LR;
    main --> fibonacci;
    fibonacci --> adder;
```