#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.c"
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.c" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
#pragma line 33 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
#pragma line 1 "/usr/include/stdint.h" 1 3 4
#pragma line 25 "/usr/include/stdint.h" 3 4
#pragma line 1 "/usr/include/features.h" 1 3 4
#pragma line 345 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/stdc-predef.h" 1 3 4
#pragma line 346 "/usr/include/features.h" 2 3 4
#pragma line 375 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/sys/cdefs.h" 1 3 4
#pragma line 392 "/usr/include/sys/cdefs.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 393 "/usr/include/sys/cdefs.h" 2 3 4
#pragma line 376 "/usr/include/features.h" 2 3 4
#pragma line 399 "/usr/include/features.h" 3 4
#pragma line 1 "/usr/include/gnu/stubs.h" 1 3 4
#pragma line 10 "/usr/include/gnu/stubs.h" 3 4
#pragma line 1 "/usr/include/gnu/stubs-64.h" 1 3 4
#pragma line 11 "/usr/include/gnu/stubs.h" 2 3 4
#pragma line 400 "/usr/include/features.h" 2 3 4
#pragma line 26 "/usr/include/stdint.h" 2 3 4
#pragma line 1 "/usr/include/bits/wchar.h" 1 3 4
#pragma line 22 "/usr/include/bits/wchar.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 23 "/usr/include/bits/wchar.h" 2 3 4
#pragma line 27 "/usr/include/stdint.h" 2 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 28 "/usr/include/stdint.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
#pragma empty_line
typedef long int int64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
#pragma empty_line
typedef unsigned int uint32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned long int uint64_t;
#pragma line 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
#pragma empty_line
typedef long int int_least64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
#pragma empty_line
typedef unsigned long int uint_least64_t;
#pragma line 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;
#pragma empty_line
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#pragma line 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;
#pragma empty_line
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#pragma line 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int uintptr_t;
#pragma line 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#pragma line 34 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
void crypto_sort(int32_t *array,long long n);
#pragma line 6 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.c" 2
#pragma line 18 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/crypto_sort.c"
void crypto_sort(int32_t *array,long long n)
{
  long long top,p,q,r,i;
  int32_t *x = array;
#pragma empty_line
  if (n < 2) return;
  top = 1;
  while (top < n - top) top += top;
#pragma empty_line
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
