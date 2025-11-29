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

# Install required packages
pio pkg install

# Generate compile_commands.json
pio run -t compiledb
