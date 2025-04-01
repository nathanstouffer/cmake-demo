#include <iostream>

#include <adder/add.hpp>

int main()
{
    int sum = adder::add(4, 9);
    std::cout << "4 + 9 = " << sum << std::endl;
}