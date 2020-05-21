#!/bin/bash

echo "Building C tests"
for f in *.c fs_tests/*.c; do
    ./build.sh $f
done

echo "Building C++ tests"
for f in *.cpp; do
    ./build.sh $f
done
