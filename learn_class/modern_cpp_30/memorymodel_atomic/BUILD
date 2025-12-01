# please run `bazel run //learn_class/modern_cpp_30/literalAssert:literal`
# please run `bazel run //learn_class/modern_cpp_30/literalAssert:assert`

load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "barrier_singleton",
    srcs = ["barrier_singleton.cpp"],
    copts = ["-std=c++17"],
)
cc_binary(
    name = "assert",
    srcs = ["assert.cpp"],
    copts = ["-std=c++11"],
)
cc_binary(
    name = "default_delete",
    srcs = ["default_delete.cpp"],
    copts = ["-std=c++11"],
)
cc_binary(
    name = "overridefinal",
    srcs = ["overridefinal.cpp"],
    copts = ["-std=c++11"],
)
