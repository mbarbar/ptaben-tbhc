#!/bin/sh

svf=$1

if [ "$#" -ne 1 ]; then
    echo "usage: $0 svf-binary"
    exit 1
fi

for f in *.ll; do
    echo "Running $svf -fstbhc $f"
    $svf -fstbhc $f
    echo "^^^^^ $f ^^^^^"
    read tmp
done
