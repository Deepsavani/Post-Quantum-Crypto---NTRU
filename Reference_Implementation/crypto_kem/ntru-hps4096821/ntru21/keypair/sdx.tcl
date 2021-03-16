# ==============================================================
# File generated on Tue Aug 25 23:04:01 EDT 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../PQCgenKAT_kem.c -cflags { -Wno-unknown-pragmas}
add_files verify.c
add_files sample.c
add_files rng.c
add_files poly.c
add_files packq.c
add_files pack3.c
add_files owcpa.c
add_files kem.c
add_files fips202.c
add_files crypto_sort.c
add_files aes.c
set_part xc7a200tfbg676-2
create_clock -name default -period 10
