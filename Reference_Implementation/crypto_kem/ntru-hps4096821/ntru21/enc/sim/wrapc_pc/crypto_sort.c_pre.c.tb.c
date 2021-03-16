// ==============================================================
// File generated on Tue Aug 25 19:06:33 EDT 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.c"
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.c" 1
#1 "<built-in>" 1
#1 "<built-in>" 3
#149 "<built-in>" 3
#1 "<command line>" 1
#1 "<built-in>" 2
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.c" 2



#1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
#33 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
#1 "/usr/include/stdint.h" 1 3 4
#25 "/usr/include/stdint.h" 3 4
#1 "/usr/include/features.h" 1 3 4
#345 "/usr/include/features.h" 3 4
#1 "/usr/include/stdc-predef.h" 1 3 4
#346 "/usr/include/features.h" 2 3 4
#375 "/usr/include/features.h" 3 4
#1 "/usr/include/sys/cdefs.h" 1 3 4
#392 "/usr/include/sys/cdefs.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#393 "/usr/include/sys/cdefs.h" 2 3 4
#376 "/usr/include/features.h" 2 3 4
#399 "/usr/include/features.h" 3 4
#1 "/usr/include/gnu/stubs.h" 1 3 4
#10 "/usr/include/gnu/stubs.h" 3 4
#1 "/usr/include/gnu/stubs-64.h" 1 3 4
#11 "/usr/include/gnu/stubs.h" 2 3 4
#400 "/usr/include/features.h" 2 3 4
#26 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wchar.h" 1 3 4
#22 "/usr/include/bits/wchar.h" 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#23 "/usr/include/bits/wchar.h" 2 3 4
#27 "/usr/include/stdint.h" 2 3 4
#1 "/usr/include/bits/wordsize.h" 1 3 4
#28 "/usr/include/stdint.h" 2 3 4








typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
#65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
#90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#34 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
#5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.c" 2
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.h" 1



void crypto_sort(int32_t *array,long long n);
#6 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.c" 2
#18 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps4096821/crypto_sort.c"
void crypto_sort(int32_t *array,long long n)
{
  long long top,p,q,r,i;
  int32_t *x = array;

  if (n < 2) return;
  top = 1;
  while (top < n - top) top += top;

  for (p = top;p > 0;p >>= 1) {
    for (i = 0;i < n - p;++i)
      if (!(i & p))
        do { int32_t ab = x[i+p] ^ x[i]; int32_t c = x[i+p] - x[i]; c ^= ab & (c ^ x[i+p]); c >>= 31; c &= ab; x[i] ^= c; x[i+p] ^= c; } while(0);
    i = 0;
    for (q = top;q > p;q >>= 1) {
      for (;i < n - q;++i) {
        if (!(i & p)) {
          int32_t a = x[i + p];
          for (r = q;r > p;r >>= 1)
            do { int32_t ab = x[i+r] ^ a; int32_t c = x[i+r] - a; c ^= ab & (c ^ x[i+r]); c >>= 31; c &= ab; a ^= c; x[i+r] ^= c; } while(0);
            x[i + p] = a;
        }
      }
    }
  }
}
