load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main_no_dep",
    srcs = ["main_minimal.cpp"],
)

cc_binary(
    name = "main_unused_foo",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_basic/lib:foo"],
)

cc_binary(
    name = "main_unused_dep_with_alwayslink",
    srcs = ["main_minimal.cpp"],
    deps = ["//linking/alwayslink_basic/lib:foo_alwayslink"],
)

cc_binary(
    name = "main_foo",
    srcs = ["main_foo.cpp"],
    deps = ["//linking/alwayslink_basic/lib:foo"],
)

cc_binary(
    name = "main_foo_with_private",
    srcs = ["main_foo.cpp"],
    deps = ["//linking/alwayslink_basic/lib:foo_with_private"],
)

cc_binary(
    name = "main_foo_with_private_alwayslink",
    srcs = ["main_foo.cpp"],
    deps = ["//linking/alwayslink_basic/lib:foo_with_private_alwayslink"],
)
