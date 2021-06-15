load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

# These examples are not significantly different from the basic cases.
# They simply demonstrate the same include behavior is appearing for cc targets depending on other cc_library targets.

# Library which cannot be usded together with Werror due to included headers containing warnings
cc_library(
    name = "plain_lib_with_warnings",
    hdrs = [
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
        "plain_lib_with_warnings.hpp",
    ],
)

# Fails due to Werror being triggered by the warnings included from "hdrs/unused_a.hpp" through "plain_lib_with_warnings.hpp"
cc_binary(
    name = "plain_lib_unusable_with_werror",
    srcs = ["plain_lib_unusable_with_werror.cpp"],
    copts = [
        "-Werror",
        "-Wall",
    ],
    tags = ["manual"],
    deps = [":plain_lib_with_warnings"],
)

# Library which hides headers containing warnings behind system includes (-I)
cc_library(
    name = "includes_lib_with_warnings",
    hdrs = [
        "hdrs/bar.hpp",
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
        "hdrs/unused_b.hpp",
        "hdrs/unused_c.hpp",
        "includes_lib_with_warnings.hpp",
    ],
    includes = ["hdrs"],
)

# Show that we can use the workspace and shortened include path for headers from dependencies
cc_binary(
    name = "use_includes_lib_with_warnings",
    srcs = ["use_includes_lib_with_warnings.cpp"],
    copts = [
        "-Werror",
        "-Wall",
    ],
    deps = [":includes_lib_with_warnings"],
)
