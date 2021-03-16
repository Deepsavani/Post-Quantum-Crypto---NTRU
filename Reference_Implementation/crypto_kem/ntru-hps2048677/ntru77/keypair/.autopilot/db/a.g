#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/ntru77/keypair/.autopilot/db/a.g.bc ${1+"$@"}
