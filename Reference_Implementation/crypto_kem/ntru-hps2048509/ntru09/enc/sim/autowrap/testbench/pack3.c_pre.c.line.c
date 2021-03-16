#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/pack3.c"
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/pack3.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/pack3.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.h" 1
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
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.h" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/params.h" 1
#pragma line 6 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.h" 2
#pragma empty_line
#pragma empty_line
uint16_t mod3(uint16_t a);
#pragma empty_line
typedef struct{
  uint16_t coeffs[509];
} poly;
#pragma empty_line
#pragma empty_line
void poly_Sq_tobytes(unsigned char *r, const poly *a);
void poly_Sq_frombytes(poly *r, const unsigned char *a);
#pragma empty_line
void poly_Rq_sum_zero_tobytes(unsigned char *r, const poly *a);
void poly_Rq_sum_zero_frombytes(poly *r, const unsigned char *a);
#pragma empty_line
void poly_S3_tobytes(unsigned char msg[(((509 -1)+4)/5)], const poly *r);
void poly_S3_frombytes(poly *r, const unsigned char msg[(((509 -1)+4)/5)]);
#pragma empty_line
void poly_Sq_mul(poly *r, const poly *a, const poly *b);
void poly_Rq_mul(poly *r, const poly *a, const poly *b);
void poly_Rq_mul_x_minus_1(poly *r, const poly *a);
void poly_S3_mul(poly *r, const poly *a, const poly *b);
void poly_lift(poly *r, const poly *a);
void poly_Rq_to_S3(poly *r, const poly *a);
#pragma empty_line
void poly_Rq_inv(poly *r, const poly *a);
void poly_S3_inv(poly *r, const poly *a);
#pragma empty_line
void poly_Z3_to_Zq(poly *r);
void poly_trinary_Zq_to_Z3(poly *r);
#pragma line 2 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/pack3.c" 2
#pragma empty_line
void poly_S3_tobytes(unsigned char msg[(2*(((509 -1)+4)/5))], const poly *a)
{
  int i;
  unsigned char c;
#pragma empty_line
  int j;
#pragma empty_line
#pragma empty_line
  for(i=0; i<(509 -1)/5; i++)
  {
    c = a->coeffs[5*i+4] & 255;
    c = (3*c + a->coeffs[5*i+3]) & 255;
    c = (3*c + a->coeffs[5*i+2]) & 255;
    c = (3*c + a->coeffs[5*i+1]) & 255;
    c = (3*c + a->coeffs[5*i+0]) & 255;
    msg[i] = c;
  }
#pragma empty_line
  i = (509 -1)/5;
  c = 0;
  for(j = (509 -1) - (5*i) - 1; j>=0; j--)
    c = (3*c + a->coeffs[5*i+j]) & 255;
  msg[i] = c;
#pragma empty_line
}
#pragma empty_line
void poly_S3_frombytes(poly *r, const unsigned char msg[(2*(((509 -1)+4)/5))])
{
  int i;
  unsigned char c;
#pragma empty_line
  int j;
#pragma empty_line
#pragma empty_line
  for(i=0; i<(509 -1)/5; i++)
  {
    c = msg[i];
    r->coeffs[5*i+0] = mod3(c);
    r->coeffs[5*i+1] = mod3(c * 171 >> 9);
    r->coeffs[5*i+2] = mod3(c * 57 >> 9);
    r->coeffs[5*i+3] = mod3(c * 19 >> 9);
    r->coeffs[5*i+4] = mod3(c * 203 >> 14);
  }
#pragma empty_line
  i = (509 -1)/5;
  c = msg[i];
  for(j=0; (5*i+j)<(509 -1); j++)
  {
    r->coeffs[5*i+j] = mod3(c);
    c = c * 171 >> 9;
  }
#pragma empty_line
  r->coeffs[509 -1] = 0;
}
