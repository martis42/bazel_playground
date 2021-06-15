load("@rules_cc//cc:defs.bzl", "cc_library")

# Default behavior including header via the workspace path using quotes style
cc_library(
    name = "workspace_path_include_with_quotes",
    srcs = ["workspace_path_include_with_quotes.cpp"],
    hdrs = ["hdrs/foo.hpp"],
)

# One cannot include with bracket style using the workspace path
cc_library(
    name = "workspace_path_include_fails_for_brackets",
    srcs = ["workspace_path_include_fails_for_brackets.cpp"],
    hdrs = ["hdrs/foo.hpp"],
    tags = ["manual"],
)

# Usage of "includes" enables a shortened include path which behaves like system includes (aka -I) and thus surpresses warnings
cc_library(
    name = "includes_no_warnings",
    srcs = ["includes_no_warnings.cpp"],
    hdrs = [
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
        "hdrs/unused_b.hpp",
    ],
    copts = [
        "-Wall",
        "-Werror",
    ],
    includes = ["hdrs"],
)

# Example for a build failing when not utilizing the shortened include path for headers containing warnings
# Only the shortened include paths surpresses warnings via "-I"
cc_library(
    name = "includes_fail_for_werror",
    srcs = ["includes_fail_for_werror.cpp"],
    hdrs = [
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
    ],
    copts = [
        "-Wall",
        "-Werror",
    ],
    includes = ["hdrs"],
    tags = ["manual"],
)

# Usage of "strip_include_prefix" enables a shortened include path
# Will print 2 warnings from the included headers
cc_library(
    name = "strip_include_prefix_with_warnings",
    srcs = ["strip_include_prefix_with_warnings.cpp"],
    hdrs = [
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
        "hdrs/unused_b.hpp",
    ],
    copts = [
        "-Wall",
    ],
    strip_include_prefix = "hdrs",
)

# Example for a build failing due to included headers containing warnings
# No matter the include style, "strip_include_prefix" does not mark include paths with "-I"
cc_library(
    name = "strip_include_prefix_fails_for_werror",
    srcs = ["strip_include_prefix_fails_for_werror.cpp"],
    hdrs = [
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
        "hdrs/unused_b.hpp",
    ],
    copts = [
        "-Wall",
        "-Werror",
    ],
    strip_include_prefix = "hdrs",
    tags = ["manual"],
)

# Build fails due to all public headers of library having to be located below the strip_include_prefix path
cc_library(
    name = "strip_include_prefix_requires_all_public_headers_below_stripped_path",
    hdrs = [
        "hdrs/foo.hpp",
        "header_outside_strip_include_path.hpp",
    ],
    strip_include_prefix = "hdrs",
    tags = ["manual"],
)

# If one specifies both "includes" and "strip_include_prefix", the "strip_include_prefix" behavior overlays
# the "includes" behavior, which causes this target to fail due to 2 warnings triggering Werror
cc_library(
    name = "strip_include_prefix_overlays_includes",
    srcs = ["strip_include_prefix_overlays_includes.cpp"],
    hdrs = [
        "hdrs/foo.hpp",
        "hdrs/unused_a.hpp",
        "hdrs/unused_b.hpp",
    ],
    copts = [
        "-Wall",
        "-Werror",
    ],
    includes = ["hdrs"],
    strip_include_prefix = "hdrs",
    tags = ["manual"],
)
