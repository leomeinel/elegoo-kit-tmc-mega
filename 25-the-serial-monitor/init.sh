#!/usr/bin/env bash
###
# File: init.sh
# Author: Leopold Johannes Meinel (leo@meinel.dev)
# -----
# Copyright (c) 2025 Leopold Johannes Meinel & contributors
# SPDX ID: Apache-2.0
# URL: https://www.apache.org/licenses/LICENSE-2.0
###

# Fail on error
set -e

# Set ${SCRIPT_DIR}
SCRIPT_DIR="$(dirname -- "$(readlink -f -- "${0}")")"

# Out of source build
mkdir "${SCRIPT_DIR}"/build || true

# Install required packages
pio pkg install -d "${SCRIPT_DIR}"

# Generate compile_commands.json
pio run -t compiledb -d "${SCRIPT_DIR}"
mv "${SCRIPT_DIR}"/compile_commands.json "${SCRIPT_DIR}"/build/
