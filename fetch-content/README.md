# fetch-content

CMake provides a number of ways to integrate project dependencies.
One way is with a method called `FetchContent`.
This is compatible with any other project that uses CMake and allows your CMake project to fetch the dependencies at configuration time.

This example fetches `nlohmann::json` and utilizes it in a very simple program.