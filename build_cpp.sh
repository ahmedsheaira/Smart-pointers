#!/bin/bash

# Get the directory containing this script
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

# Set the directory containing source files
SRC_DIR="${SCRIPT_DIR}"

# Set the output directory
BIN_DIR="${SCRIPT_DIR}/.bin_cpp"

# Create the bin directory if it doesn't exist
mkdir -p "${BIN_DIR}"

# Find all source files in the source directory
SOURCE_FILES=$(find "${SRC_DIR}" -name "*.cpp" -not -name "main.cpp")

# Compile all .cpp files in the source directory
/usr/bin/clang++ -std=gnu++14 -fcolor-diagnostics -fansi-escape-codes -g "${SRC_DIR}"/main.cpp $SOURCE_FILES -o "${BIN_DIR}/my_program_cpp"
