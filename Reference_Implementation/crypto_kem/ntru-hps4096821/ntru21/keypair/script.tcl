############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project ntru21
set_top crypto_kem_keypair
add_files aes.c
add_files crypto_sort.c
add_files fips202.c
add_files kem.c
add_files owcpa.c
add_files pack3.c
add_files packq.c
add_files poly.c
add_files rng.c
add_files sample.c
add_files verify.c
add_files -tb PQCgenKAT_kem.c -cflags "-Wno-unknown-pragmas"
open_solution "keypair"
set_part {xc7a200tfbg676-2}
create_clock -period 10 -name default
#source "./ntru21/keypair/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
