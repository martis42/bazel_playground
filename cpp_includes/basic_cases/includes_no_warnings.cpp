// Enabling shortened include paths does not inhibit using the full workspace path
#include "cpp_includes/basic_cases/hdrs/foo.hpp"
// Both include styles work for short paths provided by "includes = ..." and both surpress warnings
#include "unused_a.hpp"
#include <unused_b.hpp>

int foobar()
{
    return foo() + unused_a() + unused_b();
}
