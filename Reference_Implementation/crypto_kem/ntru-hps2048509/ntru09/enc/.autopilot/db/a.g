#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/ntru09/enc/.autopilot/db/a.g.bc ${1+"$@"}
