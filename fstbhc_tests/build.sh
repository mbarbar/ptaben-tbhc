#!/bin/sh

echo "Building C tests"
for f in *.c fs_tests/*.c; do
    echo "Building $f"
    $CC -ctir -I. -I.. -S -emit-llvm $f
done

echo "Building C++ tests"
for f in *.cpp; do
    echo "Building $f"
    $CXX -ctir -I. -I.. -S -emit-llvm $f
done
