load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main_no_dep",
    srcs = ["main_minimal.cpp"],
)

cc_binary(
    name = "main_unused_bar_alwayslink",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_transitive_deps/lib:bar_alwayslink"],
)

cc_binary(
    name = "main_unused_foo_unused_bar_alwayslink",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_transitive_deps/lib:foo_unused_bar_alwayslink"],
)

cc_binary(
    name = "main_unused_foo_alwayslink_no_bar",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_transitive_deps/lib:foo_alwayslink_no_bar"],
)

cc_binary(
    name = "main_unused_foo_unused_bar",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_transitive_deps/lib:foo_unused_bar"],
)

cc_binary(
    name = "main_unused_foo_alwayslink_unused_bar",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_transitive_deps/lib:foo_alwayslink_unused_bar"],
)
