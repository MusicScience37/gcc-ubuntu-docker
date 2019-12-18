#!/bin/bash -e

echo ">> version of gcc"
gcc --version
echo ">> version of g++"
g++ --version
echo ">> version of gcov"
gcov --version

echo ">> build"
cd $(dirname $0)
make
echo ">> execute"
build/test
