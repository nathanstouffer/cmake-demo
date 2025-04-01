#include <iostream>

#include <fibonacci/fib.hpp>

int main()
{
    std::cout << "The 8th fibonacci number is " << fibonacci::nth(8) << std::endl;
}