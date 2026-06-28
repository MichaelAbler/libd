#!/bin/bash
set -e

mkdir -p build
cd build
cmake ..
make clean  # Only works with Makefile generator
make