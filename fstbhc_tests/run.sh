#!/bin/bash

f=$1

if [ "$#" -ne 1 ]; then
    echo "usage: $0 ll-/bc-file"
    exit 1
fi

cmd="wpa -fstbhc -stat=false $f"
echo "Running '$cmd'"
exec $cmd
