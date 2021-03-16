#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/ntru01/dec/.autopilot/db/a.g.bc ${1+"$@"}
