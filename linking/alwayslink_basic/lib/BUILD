load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//linking/alwayslink_basic:__pkg__"])

cc_library(
    name = "foo",
    srcs = ["foo.cpp"],
    hdrs = ["foo.hpp"],
)

cc_library(
    name = "foo_alwayslink",
    srcs = ["foo.cpp"],
    hdrs = ["foo.hpp"],
    alwayslink = True,
)

cc_library(
    name = "foo_with_private",
    srcs = ["foo_with_private.cpp"],
    hdrs = ["foo.hpp"],
)

cc_library(
    name = "foo_with_private_alwayslink",
    srcs = ["foo_with_private.cpp"],
    hdrs = ["foo.hpp"],
    alwayslink = True,
)
