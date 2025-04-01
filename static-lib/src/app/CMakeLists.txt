add_executable(hello-static-lib cpp/app/main.cpp)

target_link_libraries(hello-static-lib adder)