load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//linking/alwayslink_transitive_deps:__pkg__"])

cc_library(
    name = "bar",
    srcs = ["bar.cpp"],
    hdrs = ["bar.hpp"],
)

cc_library(
    name = "bar_alwayslink",
    srcs = ["bar.cpp"],
    hdrs = ["bar.hpp"],
    alwayslink = True,
)

cc_library(
    name = "foo_alwayslink_no_bar",
    srcs = ["foo_no_bar.cpp"],
    hdrs = ["foo.hpp"],
    alwayslink = True,
)

cc_library(
    name = "foo_unused_bar",
    srcs = ["foo_no_bar.cpp"],
    hdrs = ["foo.hpp"],
    deps = [":bar"],
)

cc_library(
    name = "foo_alwayslink_unused_bar",
    srcs = ["foo_no_bar.cpp"],
    hdrs = ["foo.hpp"],
    deps = [":bar"],
    alwayslink = True,
)

cc_library(
    name = "foo_unused_bar_alwayslink",
    srcs = ["foo_no_bar.cpp"],
    hdrs = ["foo.hpp"],
    deps = [":bar_alwayslink"],
)
