#include "linking/alwayslink_transitive_deps/lib/bar.hpp"
#include <string>
#include <vector>

int bar()
{
    return 13;
}

std::vector<std::string> hello()
{
    return {"Hello", "World"};
}
