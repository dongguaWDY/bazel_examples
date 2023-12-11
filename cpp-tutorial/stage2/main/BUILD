load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)

cc_library(
    name = "hello-greet2",
    srcs = ["hello-greet2.cc"],
    hdrs = ["hello-greet2.h"],
    deps = [
        ":hello-greet",
    ],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cc"],
    deps = [
        ":hello-greet",
        ":hello-greet2",
    ],
)
