add_executable(hello-shared-lib cpp/app/main.cpp)

target_link_libraries(hello-shared-lib adder)