#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/ntru21/dec/.autopilot/db/a.g.bc ${1+"$@"}
