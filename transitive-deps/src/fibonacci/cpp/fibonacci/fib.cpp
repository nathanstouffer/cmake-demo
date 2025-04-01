#include "fibonacci/fib.hpp"

#include <adder/add.hpp>

namespace fibonacci
{

    int nth(int n)
    {
        if (n == 0) { return 0; }
        else if (n == 1) { return 1; }
        else { return adder::add(nth(n - 1), nth(n - 2)); }
    }

}