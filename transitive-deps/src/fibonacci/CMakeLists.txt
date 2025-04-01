add_library(fibonacci STATIC "cpp/fibonacci/fib.cpp")

target_include_directories(fibonacci PUBLIC "include/public")

target_link_libraries(fibonacci PRIVATE adder)