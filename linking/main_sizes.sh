#!/usr/bin/env bash

SEARCH_DIR="bazel-bin/linking/"

mains=()
max_name_length=0

# Gather data
for f in $(find ${SEARCH_DIR} -type f); do
    # Get all main binaries by ignoring all files including ".", since those are library and metadata files
    if [[ ! "${f}" =~ "." ]]; then
        name="${f#"${SEARCH_DIR}"}"
        name_length=${#name}
        if [[ $name_length -gt $max_name_length ]]; then
            max_name_length=$name_length
        fi
        mains+=(${name})
    fi
done

# Adjust max length, otherwise longest name will be padded with 2 tabs
max_name_length=$((max_name_length + 1))

# Print result
for main in ${mains[@]}; do
    size="$(stat -c "%s" "${SEARCH_DIR}/${main}")"
    printf '%s\t : %s\n' "$main" "$size" | expand -t ${max_name_length}
done
