Upstream documentation: https://docs.bazel.build/versions/main/be/c-cpp.html

Due to `cc_library` supporting several attributes to influence the include paths and C++ offering multiple ways to include header, there are several distinct cases how includes can behave, especially in conjuction with compiler warnings.

General rules:
* One can always include public headers of dependencies via the full workpsace path as quotes include.
* Generaly one cannot include headers of dependencies via the full workspace path as brackets include.
* If one uses `includes = [...]` or `strip_include_prefix = "..."` to modify the include path for a library, one can use quotes or brackets to the modified path.
  Both behave the same way.
There is no difference with regard to compiler warnings
* Using `includes = [...]` will tell the compiler these path are system include paths (aka `-I` compiler option).
  This means, compiler warnings from headers included relative to these paths are ignored.
* Using `strip_include_prefix = "..."` does not imply a system include path.
  Consequewntly, compiler warnings will appear and cause the compilation to fail if `Werror` is active.
* If one provides both `includes` and `strip_include_prefix` to the same path, the `strip_include_prefix` behavior is the observable one.

This directory contains multiple examples for the described behavior.
