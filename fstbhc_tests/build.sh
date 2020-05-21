#!/bin/bash

f=$1

if [ "$#" -ne 1 ]; then
    echo "usage: $0 c-/cpp-file"
    exit 1
fi

echo "Building $f"
if [[ "$f" == *.c ]]; then
    clang -ctir -I. -I.. -S -emit-llvm $f
elif [[ "$f" == *.cpp ]]; then
    clang++ -ctir -I. -I.. -S -emit-llvm $f
else
    echo "usage: $0 C/C++ file"
    exit 1
fi
