// ==============================================================
// File generated on Tue Aug 25 12:31:42 EDT 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/packq.c"
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/packq.c" 1
#1 "<built-in>" 1
#1 "<built-in>" 3
#149 "<built-in>" 3
#1 "<command line>" 1
#1 "<built-in>" 2
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/packq.c" 2
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/poly.h" 1



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
#5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/poly.h" 2
#1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/params.h" 1
#6 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/poly.h" 2


uint16_t mod3(uint16_t a);

typedef struct{
  uint16_t coeffs[677];
} poly;


void poly_Sq_tobytes(unsigned char *r, const poly *a);
void poly_Sq_frombytes(poly *r, const unsigned char *a);

void poly_Rq_sum_zero_tobytes(unsigned char *r, const poly *a);
void poly_Rq_sum_zero_frombytes(poly *r, const unsigned char *a);

void poly_S3_tobytes(unsigned char msg[(((677 -1)+4)/5)], const poly *r);
void poly_S3_frombytes(poly *r, const unsigned char msg[(((677 -1)+4)/5)]);

void poly_Sq_mul(poly *r, const poly *a, const poly *b);
void poly_Rq_mul(poly *r, const poly *a, const poly *b);
void poly_Rq_mul_x_minus_1(poly *r, const poly *a);
void poly_S3_mul(poly *r, const poly *a, const poly *b);
void poly_lift(poly *r, const poly *a);
void poly_Rq_to_S3(poly *r, const poly *a);

void poly_Rq_inv(poly *r, const poly *a);
void poly_S3_inv(poly *r, const poly *a);

void poly_Z3_to_Zq(poly *r);
void poly_trinary_Zq_to_Z3(poly *r);
#2 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048677/packq.c" 2

void poly_Sq_tobytes(unsigned char *r, const poly *a)
{
  int i,j;
  uint16_t t[8];

  for(i=0;i<(677 -1)/8;i++)
  {
    for(j=0;j<8;j++)
      t[j] = a->coeffs[8*i+j];

    r[11*i+ 0] = t[0] & 0xff;
    r[11*i+ 1] = (t[0] >> 8) | ((t[1] & 0x1f) << 3);
    r[11*i+ 2] = (t[1] >> 5) | ((t[2] & 0x03) << 6);
    r[11*i+ 3] = (t[2] >> 2) & 0xff;
    r[11*i+ 4] = (t[2] >> 10) | ((t[3] & 0x7f) << 1);
    r[11*i+ 5] = (t[3] >> 7) | ((t[4] & 0x0f) << 4);
    r[11*i+ 6] = (t[4] >> 4) | ((t[5] & 0x01) << 7);
    r[11*i+ 7] = (t[5] >> 1) & 0xff;
    r[11*i+ 8] = (t[5] >> 9) | ((t[6] & 0x3f) << 2);
    r[11*i+ 9] = (t[6] >> 6) | ((t[7] & 0x07) << 5);
    r[11*i+10] = (t[7] >> 3);
  }

  for(j=0;j<(677 -1)-8*i;j++)
    t[j] = a->coeffs[8*i+j];
  for(; j<8; j++)
    t[j] = 0;

  switch((677 -1) - 8*((677 -1)/8))
  {
    case 6:
    r[11*i+ 8] = (t[5] >> 9) | ((t[6] & 0x3f) << 2);
    r[11*i+ 7] = (t[5] >> 1) & 0xff;
    r[11*i+ 6] = (t[4] >> 4) | ((t[5] & 0x01) << 7);

    case 4:
    r[11*i+ 5] = (t[3] >> 7) | ((t[4] & 0x0f) << 4);
    r[11*i+ 4] = (t[2] >> 10) | ((t[3] & 0x7f) << 1);
    r[11*i+ 3] = (t[2] >> 2) & 0xff;

    case 2:
    r[11*i+ 2] = (t[1] >> 5) | ((t[2] & 0x03) << 6);
    r[11*i+ 1] = (t[0] >> 8) | ((t[1] & 0x1f) << 3);
    r[11*i+ 0] = t[0] & 0xff;
  }
}

void poly_Sq_frombytes(poly *r, const unsigned char *a)
{
  int i;
  for(i=0;i<(677 -1)/8;i++)
  {
    r->coeffs[8*i+0] = (a[11*i+ 0] >> 0) | (((uint16_t)a[11*i+ 1] & 0x07) << 8);
    r->coeffs[8*i+1] = (a[11*i+ 1] >> 3) | (((uint16_t)a[11*i+ 2] & 0x3f) << 5);
    r->coeffs[8*i+2] = (a[11*i+ 2] >> 6) | (((uint16_t)a[11*i+ 3] & 0xff) << 2) | (((uint16_t)a[11*i+ 4] & 0x01) << 10);
    r->coeffs[8*i+3] = (a[11*i+ 4] >> 1) | (((uint16_t)a[11*i+ 5] & 0x0f) << 7);
    r->coeffs[8*i+4] = (a[11*i+ 5] >> 4) | (((uint16_t)a[11*i+ 6] & 0x7f) << 4);
    r->coeffs[8*i+5] = (a[11*i+ 6] >> 7) | (((uint16_t)a[11*i+ 7] & 0xff) << 1) | (((uint16_t)a[11*i+ 8] & 0x03) << 9);
    r->coeffs[8*i+6] = (a[11*i+ 8] >> 2) | (((uint16_t)a[11*i+ 9] & 0x1f) << 6);
    r->coeffs[8*i+7] = (a[11*i+ 9] >> 5) | (((uint16_t)a[11*i+10] & 0xff) << 3);
  }
  switch((677 -1) - 8*((677 -1)/8))
  {
    case 6:
      r->coeffs[8*i+5] = (a[11*i+ 6] >> 7) | (((uint16_t)a[11*i+ 7] & 0xff) << 1) | (((uint16_t)a[11*i+ 8] & 0x03) << 9);
      r->coeffs[8*i+4] = (a[11*i+ 5] >> 4) | (((uint16_t)a[11*i+ 6] & 0x7f) << 4);

    case 4:
      r->coeffs[8*i+3] = (a[11*i+ 4] >> 1) | (((uint16_t)a[11*i+ 5] & 0x0f) << 7);
      r->coeffs[8*i+2] = (a[11*i+ 2] >> 6) | (((uint16_t)a[11*i+ 3] & 0xff) << 2) | (((uint16_t)a[11*i+ 4] & 0x01) << 10);

    case 2:
      r->coeffs[8*i+1] = (a[11*i+ 1] >> 3) | (((uint16_t)a[11*i+ 2] & 0x3f) << 5);
      r->coeffs[8*i+0] = (a[11*i+ 0] >> 0) | (((uint16_t)a[11*i+ 1] & 0x07) << 8);
  }
}

void poly_Rq_sum_zero_tobytes(unsigned char *r, const poly *a)
{
  poly_Sq_tobytes(r, a);
}

void poly_Rq_sum_zero_frombytes(poly *r, const unsigned char *a)
{
  int i;
  poly_Sq_frombytes(r,a);


  r->coeffs[677 -1] = 0;
  for(i=0;i<(677 -1);i++)
  {
    r->coeffs[677 -1] += r->coeffs[i];
  }
  r->coeffs[677 -1] = ((-(r->coeffs[677 -1])) & ((1 << 11)-1));
}
