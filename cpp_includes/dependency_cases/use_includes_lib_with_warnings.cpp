// We can include this header which tranitively uses headers with warnings, since they are included through -I
#include "cpp_includes/dependency_cases/includes_lib_with_warnings.hpp"
// We have access to the shortened include paths of our dependencies
#include "bar.hpp"
// We can include headers containing warings directly as long as we use an include path which is using -I
#include <unused_c.hpp>

int main()
{
    return bar();
}
