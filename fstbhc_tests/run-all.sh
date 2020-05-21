#!/bin/bash

for f in *.ll; do
    echo "@@@ analysing $f @@@"
    ./run.sh $f
    echo "^^^^^ $f ^^^^^"
done
