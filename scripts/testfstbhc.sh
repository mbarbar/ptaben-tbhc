#/bin/bash
# For running FSTBHC tests.

TNAME=wpa
EXEFILE=$PTABIN/wpa
FLAGS="-fstbhc -stat=false"

LLVMFLAGS="-mem2reg -wpa -fstbhc -vgep=true --debug-pass=Structure "
LIBNAME=lib$TNAME

############don't need to touch here (please see run.sh script for meaning of the parameters)##########
if [[ $2 == 'opt' ]]
then
  $RUNSCRIPT $1 $TNAME "$LLVMFLAGS" $2
else
  $RUNSCRIPT $1 $TNAME "$FLAGS" $2
fi
