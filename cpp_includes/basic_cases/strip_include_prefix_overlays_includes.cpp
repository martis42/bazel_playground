// Enabling shortened include paths does not inhibit using the full workspace path
#include "cpp_includes/basic_cases/hdrs/foo.hpp"
// No matter which include style is used, the "strip_include_prefix" behavior is used
#include "unused_a.hpp"
#include <unused_b.hpp>

int foobar()
{
    return foo() + unused_a() + unused_b();
}
