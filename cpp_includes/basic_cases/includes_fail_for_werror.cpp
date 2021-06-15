// Warnings are only surpressed for the shortened include path, not for the full workspace path
#include "cpp_includes/basic_cases/hdrs/unused_a.hpp"
#include "foo.hpp"

int foobar()
{
    return foo() + unused_a();
}
