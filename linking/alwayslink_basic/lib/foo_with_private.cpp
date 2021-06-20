#include "linking/alwayslink_basic/lib/foo.hpp"
#include <vector>

int foo()
{
    return 42;
}

std::vector<int> private_foo()
{
    return {1, 3, 3, 7};
}
