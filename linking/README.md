Upstream documentation: https://docs.bazel.build/versions/main/be/c-cpp.html

## cc_binary
By default it will create "mostly" standlone binaries, which means:
* statically link against own libraries
* dynamically link against system libraries

## cc_test
By default will create binaries which are linked dynamically against own libraries and system libraries.
