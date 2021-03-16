/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_poly l_struct_OC_poly;

/* Structure contents */
struct l_struct_OC_poly {
  signed short field0[677];
};


/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
unsigned short mod3(signed short llvm_cbe_a);
void poly_Z3_to_Zq(l_struct_OC_poly *llvm_cbe_r);
void poly_trinary_Zq_to_Z3(l_struct_OC_poly *llvm_cbe_r);
void poly_Rq_mul(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b);
void poly_Sq_mul(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b);
void poly_S3_mul(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b);
void poly_Rq_mul_x_minus_1(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void poly_lift(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void poly_Rq_to_S3(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void poly_Rq_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
static void aesl_internal_poly_R2_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
static void aesl_internal_poly_R2_inv_to_Rq_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_ai, l_struct_OC_poly *llvm_cbe_a);
void poly_S3_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
static void aesl_internal_cswappoly(l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b, signed int llvm_cbe_swap);
static void aesl_internal_poly_divx(l_struct_OC_poly *llvm_cbe_a, signed int llvm_cbe_s);
static void aesl_internal_poly_mulx(l_struct_OC_poly *llvm_cbe_a, signed int llvm_cbe_s);
void cmov( char *,  char *, signed long long ,  char );


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

unsigned short mod3(signed short llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  unsigned short llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  unsigned short llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  unsigned short llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  unsigned short llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_fold_count = 0;
  unsigned short llvm_cbe_fold;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  unsigned short llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  unsigned short llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  unsigned short llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_fold1_count = 0;
  unsigned short llvm_cbe_fold1;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned short llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  unsigned short llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned short llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_fold2_count = 0;
  unsigned short llvm_cbe_fold2;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned short llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  unsigned short llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned short llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned short llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  unsigned short llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned short llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  unsigned short llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  unsigned short llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mod3\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = lshr i16 %%a, 8, !dbg !9 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_3_count);
  llvm_cbe_tmp__1 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_a&65535ull)) >> ((unsigned short )(((unsigned short )8)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__1&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = and i16 %%a, 255, !dbg !9 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__2 = (unsigned short )((unsigned short )(llvm_cbe_a & ((unsigned short )255)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add i16 %%1, %%2, !dbg !9 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__3 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__1&65535ull)) + ((unsigned short )(llvm_cbe_tmp__2&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__3&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = lshr i16 %%3, 4, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__4 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__3&65535ull)) >> ((unsigned short )(((unsigned short )4)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__4&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%fold = add i16 %%1, %%a, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_fold_count);
  llvm_cbe_fold = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__1&65535ull)) + ((unsigned short )(llvm_cbe_a&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\nfold = 0x%X\n", ((unsigned short )(llvm_cbe_fold&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = and i16 %%fold, 15, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__5 = (unsigned short )((unsigned short )(llvm_cbe_fold & ((unsigned short )15)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i16 %%4, %%5, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__6 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__4&65535ull)) + ((unsigned short )(llvm_cbe_tmp__5&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__6&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = lshr i16 %%6, 2, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_15_count);
  llvm_cbe_tmp__7 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__6&65535ull)) >> ((unsigned short )(((unsigned short )2)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__7&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%fold1 = add i16 %%4, %%fold, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_fold1_count);
  llvm_cbe_fold1 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__4&65535ull)) + ((unsigned short )(llvm_cbe_fold&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\nfold1 = 0x%X\n", ((unsigned short )(llvm_cbe_fold1&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = and i16 %%fold1, 3, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__8 = (unsigned short )((unsigned short )(llvm_cbe_fold1 & ((unsigned short )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i16 %%7, %%8, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__9 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__7&65535ull)) + ((unsigned short )(llvm_cbe_tmp__8&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__9&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = lshr i16 %%9, 2, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__10 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__9&65535ull)) >> ((unsigned short )(((unsigned short )2)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__10&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%fold2 = add i16 %%7, %%fold1, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_fold2_count);
  llvm_cbe_fold2 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__7&65535ull)) + ((unsigned short )(llvm_cbe_fold1&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\nfold2 = 0x%X\n", ((unsigned short )(llvm_cbe_fold2&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = and i16 %%fold2, 3, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__11 = (unsigned short )((unsigned short )(llvm_cbe_fold2 & ((unsigned short )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i16 %%10, %%11, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__12 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__10&65535ull)) + ((unsigned short )(llvm_cbe_tmp__11&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__12&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i16 %%12, -3, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__13 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__12&65535ull)) + ((unsigned short )(((unsigned short )-3)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__13&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i16 %%13 to i32, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__14 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = lshr i32 %%14, 15, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__14&4294967295ull)) >> ((unsigned int )(15u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__15&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = trunc i32 %%15 to i16, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__16 = (unsigned short )((unsigned short )llvm_cbe_tmp__15&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = and i16 %%16, %%12, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__17 = (unsigned short )((unsigned short )(llvm_cbe_tmp__16 & llvm_cbe_tmp__12));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = xor i16 %%16, -1, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__18 = (unsigned short )((unsigned short )(llvm_cbe_tmp__16 ^ ((unsigned short )-1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = and i16 %%13, %%18, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__19 = (unsigned short )((unsigned short )(llvm_cbe_tmp__13 & llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = xor i16 %%17, %%19, !dbg !10 for 0x%I64xth hint within @mod3  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__20 = (unsigned short )((unsigned short )(llvm_cbe_tmp__17 ^ llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mod3}\n");
  return llvm_cbe_tmp__20;
}


void poly_Z3_to_Zq(l_struct_OC_poly *llvm_cbe_r) {
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  signed short *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned short llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned short llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned short llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned short llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned short llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Z3_to_Zq\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__29;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__29:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%9, %%1  for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__21 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__22 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__21))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__21));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__23 = (unsigned short )*llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = lshr i16 %%4, 1, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__24 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__23&65535ull)) >> ((unsigned short )(((unsigned short )1)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__24&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sub i16 0, %%5, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__25 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__24)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__25&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i16 %%6, 2047, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__26 = (unsigned short )((unsigned short )(llvm_cbe_tmp__25 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i16 %%7, %%4, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__27 = (unsigned short )((unsigned short )(llvm_cbe_tmp__26 | llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%8, i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_61_count);
  *llvm_cbe_tmp__22 = llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @poly_Z3_to_Zq  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__28 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__28&4294967295ull)));
  if (((llvm_cbe_tmp__28&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__30;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__28;   /* for PHI node */
    goto llvm_cbe_tmp__29;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__30:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Z3_to_Zq}\n");
  return;
}


void poly_trinary_Zq_to_Z3(l_struct_OC_poly *llvm_cbe_r) {
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  signed short *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned short llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned short llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned short llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned short llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_trinary_Zq_to_Z3\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__38;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__38:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__37);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__31 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__32 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__31))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__31));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__33 = (unsigned short )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = lshr i16 %%4, 10, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__34 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__33&65535ull)) >> ((unsigned short )(((unsigned short )10)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__34&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = xor i16 %%5, %%4, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__35 = (unsigned short )((unsigned short )(llvm_cbe_tmp__34 ^ llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i16 %%6, 3, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__36 = (unsigned short )((unsigned short )(llvm_cbe_tmp__35 & ((unsigned short )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%7, i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_88_count);
  *llvm_cbe_tmp__32 = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @poly_trinary_Zq_to_Z3  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__37 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__37&4294967295ull)));
  if (((llvm_cbe_tmp__37&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__39;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__37;   /* for PHI node */
    goto llvm_cbe_tmp__38;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__39:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_trinary_Zq_to_Z3}\n");
  return;
}


void poly_Rq_mul(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv8_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv8;
  unsigned int llvm_cbe_indvars_2e_iv8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv;
  unsigned int llvm_cbe_indvars_2e_iv__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge7_count = 0;
  unsigned int llvm_cbe_storemerge7;
  unsigned int llvm_cbe_storemerge7__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  signed short *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  unsigned long long llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  signed short *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned short llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  unsigned long long llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  signed short *llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  unsigned short llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned short llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned short llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  unsigned short llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge23_count = 0;
  unsigned int llvm_cbe_storemerge23;
  unsigned int llvm_cbe_storemerge23__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned long long llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  signed short *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned short llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned long long llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  signed short *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  unsigned short llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  unsigned short llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned short llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned short llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned short llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned short llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv_2e_next_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv_2e_next;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv_2e_next9_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv_2e_next9;
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Rq_mul\n");
  llvm_cbe_indvars_2e_iv8__PHI_TEMPORARY = (unsigned int )677u;   /* for PHI node */
  llvm_cbe_indvars_2e_iv__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  llvm_cbe_storemerge7__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__69;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__69:
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv8 = phi i32 [ 677, %%0 ], [ %%indvars.iv.next9, %%._crit_edge  for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv8_count);
  llvm_cbe_indvars_2e_iv8 = (unsigned int )llvm_cbe_indvars_2e_iv8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nindvars.iv8 = 0x%X",llvm_cbe_indvars_2e_iv8);
printf("\n = 0x%X",677u);
printf("\nindvars.iv.next9 = 0x%X",llvm_cbe_indvars_2e_iv_2e_next9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv = phi i32 [ 1, %%0 ], [ %%indvars.iv.next, %%._crit_edge  for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv_count);
  llvm_cbe_indvars_2e_iv = (unsigned int )llvm_cbe_indvars_2e_iv__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nindvars.iv = 0x%X",llvm_cbe_indvars_2e_iv);
printf("\n = 0x%X",1u);
printf("\nindvars.iv.next = 0x%X",llvm_cbe_indvars_2e_iv_2e_next);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge7 = phi i32 [ 0, %%0 ], [ %%6, %%._crit_edge  for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_storemerge7_count);
  llvm_cbe_storemerge7 = (unsigned int )llvm_cbe_storemerge7__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge7 = 0x%X",llvm_cbe_storemerge7);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__43);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge7 to i64, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__40 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge7);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__41 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__40))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_125_count);
  *llvm_cbe_tmp__41 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sub nsw i32 677, %%storemerge7, !dbg !11 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__42 = (unsigned int )((unsigned int )(677u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge7&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__42&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__42) > ((signed int )1u))) {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph6;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__67 = (unsigned short )*llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = and i16 %%31, 2047, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__68 = (unsigned short )((unsigned short )(llvm_cbe_tmp__67 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%32, i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_196_count);
  *llvm_cbe_tmp__41 = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv.next = add i32 %%indvars.iv, 1, !dbg !11 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv_2e_next_count);
  llvm_cbe_indvars_2e_iv_2e_next = (unsigned int )((unsigned int )(llvm_cbe_indvars_2e_iv&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nindvars.iv.next = 0x%X\n", ((unsigned int )(llvm_cbe_indvars_2e_iv_2e_next&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv.next9 = add i32 %%indvars.iv8, -1, !dbg !11 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv_2e_next9_count);
  llvm_cbe_indvars_2e_iv_2e_next9 = (unsigned int )((unsigned int )(llvm_cbe_indvars_2e_iv8&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nindvars.iv.next9 = 0x%X\n", ((unsigned int )(llvm_cbe_indvars_2e_iv_2e_next9&4294967295ull)));
  if (((llvm_cbe_indvars_2e_iv_2e_next&4294967295U) == (678u&4294967295U))) {
    goto llvm_cbe_tmp__70;
  } else {
    llvm_cbe_indvars_2e_iv8__PHI_TEMPORARY = (unsigned int )llvm_cbe_indvars_2e_iv_2e_next9;   /* for PHI node */
    llvm_cbe_indvars_2e_iv__PHI_TEMPORARY = (unsigned int )llvm_cbe_indvars_2e_iv_2e_next;   /* for PHI node */
    llvm_cbe_storemerge7__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__43;   /* for PHI node */
    goto llvm_cbe_tmp__69;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge7, 1, !dbg !11 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__43 = (unsigned int )((unsigned int )(llvm_cbe_storemerge7&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__43&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__43) > ((signed int )0u))) {
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  do {     /* Syntactic loop '.lr.ph6' to make GCC happy */
llvm_cbe__2e_lr_2e_ph6:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ %%19, %%.lr.ph6 ], [ 1, %%1  for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",llvm_cbe_tmp__55);
printf("\n = 0x%X",1u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge14, %%storemerge7, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__44 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge7&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__44&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%8 to i64, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__45 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%9, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__46 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__45))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__45));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i16* %%10, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__47 = (unsigned short )*llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sub nsw i32 677, %%storemerge14, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__48 = (unsigned int )((unsigned int )(677u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge14&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__48&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%12 to i64, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__49 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%13, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__50 = (signed short *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__49))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__49));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i16* %%14, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__51 = (unsigned short )*llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = mul i16 %%15, %%11, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__52 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__51&65535ull)) * ((unsigned short )(llvm_cbe_tmp__47&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__52&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__53 = (unsigned short )*llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add i16 %%17, %%16, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_159_count);
  llvm_cbe_tmp__54 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__53&65535ull)) + ((unsigned short )(llvm_cbe_tmp__52&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__54&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%18, i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_160_count);
  *llvm_cbe_tmp__41 = llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add nsw i32 %%storemerge14, 1, !dbg !11 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__55&4294967295ull)));
  if (((llvm_cbe_tmp__55&4294967295U) == (llvm_cbe_indvars_2e_iv8&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__55;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph6;
  }

  } while (1); /* end of syntactic loop '.lr.ph6' */
  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge23 = phi i32 [ %%30, %%.lr.ph ], [ 0, %%.preheader  for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_storemerge23_count);
  llvm_cbe_storemerge23 = (unsigned int )llvm_cbe_storemerge23__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge23 = 0x%X",llvm_cbe_storemerge23);
printf("\n = 0x%X",llvm_cbe_tmp__66);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = sub nsw i32 %%storemerge7, %%storemerge23, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__56 = (unsigned int )((unsigned int )(llvm_cbe_storemerge7&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge23&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__56&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i32 %%20 to i64, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__57 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%21, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__58 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__57))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__57));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i16* %%22, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__59 = (unsigned short )*llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = sext i32 %%storemerge23 to i64, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__60 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%24, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__61 = (signed short *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__60))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__60));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i16* %%25, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__62 = (unsigned short )*llvm_cbe_tmp__61;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = mul i16 %%26, %%23, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__63 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__62&65535ull)) * ((unsigned short )(llvm_cbe_tmp__59&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__63&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__64 = (unsigned short )*llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i16 %%28, %%27, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__65 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__64&65535ull)) + ((unsigned short )(llvm_cbe_tmp__63&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__65&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%29, i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_182_count);
  *llvm_cbe_tmp__41 = llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%storemerge23, 1, !dbg !11 for 0x%I64xth hint within @poly_Rq_mul  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__66 = (unsigned int )((unsigned int )(llvm_cbe_storemerge23&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__66&4294967295ull)));
  if (((llvm_cbe_tmp__66&4294967295U) == (llvm_cbe_indvars_2e_iv&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge23__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__66;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__70:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Rq_mul}\n");
  return;
}


void poly_Sq_mul(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  signed short *llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  unsigned long long llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  signed short *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  unsigned short llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  unsigned short llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  unsigned short llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  unsigned short llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Sq_mul\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @poly_Rq_mul(%%struct.poly* %%r, %%struct.poly* %%a, %%struct.poly* %%b), !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_220_count);
   /*tail*/ poly_Rq_mul((l_struct_OC_poly *)llvm_cbe_r, (l_struct_OC_poly *)llvm_cbe_a, (l_struct_OC_poly *)llvm_cbe_b);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_226_count);
  llvm_cbe_tmp__71 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__79;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__79:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%9, %%2  for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__78);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_228_count);
  llvm_cbe_tmp__72 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%3, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__73 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__72))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__72));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i16* %%4, align 2, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__74 = (unsigned short )*llvm_cbe_tmp__73;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i16* %%1, align 2, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__75 = (unsigned short )*llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sub i16 %%5, %%6, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__76 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__74&65535ull)) - ((unsigned short )(llvm_cbe_tmp__75&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__76&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = and i16 %%7, 2047, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__77 = (unsigned short )((unsigned short )(llvm_cbe_tmp__76 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%8, i16* %%4, align 2, !dbg !9 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_234_count);
  *llvm_cbe_tmp__73 = llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @poly_Sq_mul  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__78 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__78&4294967295ull)));
  if (((llvm_cbe_tmp__78&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__80;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__78;   /* for PHI node */
    goto llvm_cbe_tmp__79;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__80:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Sq_mul}\n");
  return;
}


void poly_S3_mul(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b) {
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv_2e_next_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv_2e_next;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv_2e_next12_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv_2e_next12;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  signed short *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv11_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv11;
  unsigned int llvm_cbe_indvars_2e_iv11__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_indvars_2e_iv_count = 0;
  unsigned int llvm_cbe_indvars_2e_iv;
  unsigned int llvm_cbe_indvars_2e_iv__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge9_count = 0;
  unsigned int llvm_cbe_storemerge9;
  unsigned int llvm_cbe_storemerge9__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  signed short *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned int llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge27_count = 0;
  unsigned int llvm_cbe_storemerge27;
  unsigned int llvm_cbe_storemerge27__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned long long llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  signed short *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  unsigned short llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  unsigned int llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned long long llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  signed short *llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  unsigned short llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  unsigned short llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned short llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  unsigned short llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge36_count = 0;
  unsigned int llvm_cbe_storemerge36;
  unsigned int llvm_cbe_storemerge36__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  unsigned long long llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  signed short *llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  unsigned short llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  unsigned long long llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  signed short *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  unsigned short llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  unsigned short llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  unsigned short llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  unsigned short llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge14_count = 0;
  unsigned int llvm_cbe_storemerge14;
  unsigned int llvm_cbe_storemerge14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  unsigned long long llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  signed short *llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  unsigned short llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  unsigned short llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned short llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  unsigned short llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  unsigned short llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_S3_mul\n");
  llvm_cbe_indvars_2e_iv11__PHI_TEMPORARY = (unsigned int )677u;   /* for PHI node */
  llvm_cbe_indvars_2e_iv__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  llvm_cbe_storemerge9__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__117;

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__81 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__118;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__117:
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv11 = phi i32 [ 677, %%0 ], [ %%indvars.iv.next12, %%.loopexit  for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv11_count);
  llvm_cbe_indvars_2e_iv11 = (unsigned int )llvm_cbe_indvars_2e_iv11__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nindvars.iv11 = 0x%X",llvm_cbe_indvars_2e_iv11);
printf("\n = 0x%X",677u);
printf("\nindvars.iv.next12 = 0x%X",llvm_cbe_indvars_2e_iv_2e_next12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv = phi i32 [ 1, %%0 ], [ %%indvars.iv.next, %%.loopexit  for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv_count);
  llvm_cbe_indvars_2e_iv = (unsigned int )llvm_cbe_indvars_2e_iv__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nindvars.iv = 0x%X",llvm_cbe_indvars_2e_iv);
printf("\n = 0x%X",1u);
printf("\nindvars.iv.next = 0x%X",llvm_cbe_indvars_2e_iv_2e_next);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge9 = phi i32 [ 0, %%0 ], [ %%7, %%.loopexit  for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_storemerge9_count);
  llvm_cbe_storemerge9 = (unsigned int )llvm_cbe_storemerge9__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge9 = 0x%X",llvm_cbe_storemerge9);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__85);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge9 to i64, !dbg !9 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__82 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge9);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%3, !dbg !9 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__83 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__82))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__82));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%4, align 2, !dbg !9 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_289_count);
  *llvm_cbe_tmp__83 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sub nsw i32 677, %%storemerge9, !dbg !11 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__84 = (unsigned int )((unsigned int )(677u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge9&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__84&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__84) > ((signed int )1u))) {
    llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph8;
  } else {
    goto llvm_cbe__2e_preheader5;
  }

llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv.next = add i32 %%indvars.iv, 1, !dbg !11 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv_2e_next_count);
  llvm_cbe_indvars_2e_iv_2e_next = (unsigned int )((unsigned int )(llvm_cbe_indvars_2e_iv&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nindvars.iv.next = 0x%X\n", ((unsigned int )(llvm_cbe_indvars_2e_iv_2e_next&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%indvars.iv.next12 = add i32 %%indvars.iv11, -1, !dbg !11 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_indvars_2e_iv_2e_next12_count);
  llvm_cbe_indvars_2e_iv_2e_next12 = (unsigned int )((unsigned int )(llvm_cbe_indvars_2e_iv11&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\nindvars.iv.next12 = 0x%X\n", ((unsigned int )(llvm_cbe_indvars_2e_iv_2e_next12&4294967295ull)));
  if (((llvm_cbe_indvars_2e_iv_2e_next&4294967295U) == (678u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_indvars_2e_iv11__PHI_TEMPORARY = (unsigned int )llvm_cbe_indvars_2e_iv_2e_next12;   /* for PHI node */
    llvm_cbe_indvars_2e_iv__PHI_TEMPORARY = (unsigned int )llvm_cbe_indvars_2e_iv_2e_next;   /* for PHI node */
    llvm_cbe_storemerge9__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__85;   /* for PHI node */
    goto llvm_cbe_tmp__117;
  }

llvm_cbe__2e_preheader5:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add nsw i32 %%storemerge9, 1, !dbg !11 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_310_count);
  llvm_cbe_tmp__85 = (unsigned int )((unsigned int )(llvm_cbe_storemerge9&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__85&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__85) > ((signed int )0u))) {
    llvm_cbe_storemerge36__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  do {     /* Syntactic loop '.lr.ph8' to make GCC happy */
llvm_cbe__2e_lr_2e_ph8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge27 = phi i32 [ %%20, %%.lr.ph8 ], [ 1, %%2  for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_storemerge27_count);
  llvm_cbe_storemerge27 = (unsigned int )llvm_cbe_storemerge27__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge27 = 0x%X",llvm_cbe_storemerge27);
printf("\n = 0x%X",llvm_cbe_tmp__97);
printf("\n = 0x%X",1u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge27, %%storemerge9, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__86 = (unsigned int )((unsigned int )(llvm_cbe_storemerge27&4294967295ull)) + ((unsigned int )(llvm_cbe_storemerge9&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__86&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%9 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__87 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%10, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__88 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__87))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__87));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i16* %%11, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__89 = (unsigned short )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sub nsw i32 677, %%storemerge27, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__90 = (unsigned int )((unsigned int )(677u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge27&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__90&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__91 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%14, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__92 = (signed short *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__91))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__91));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i16* %%15, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_320_count);
  llvm_cbe_tmp__93 = (unsigned short )*llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = mul i16 %%16, %%12, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__94 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__93&65535ull)) * ((unsigned short )(llvm_cbe_tmp__89&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__94&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i16* %%4, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__95 = (unsigned short )*llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i16 %%18, %%17, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__96 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__95&65535ull)) + ((unsigned short )(llvm_cbe_tmp__94&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__96&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%19, i16* %%4, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_324_count);
  *llvm_cbe_tmp__83 = llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge27, 1, !dbg !11 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__97 = (unsigned int )((unsigned int )(llvm_cbe_storemerge27&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__97&4294967295ull)));
  if (((llvm_cbe_tmp__97&4294967295U) == (llvm_cbe_indvars_2e_iv11&4294967295U))) {
    goto llvm_cbe__2e_preheader5;
  } else {
    llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__97;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph8;
  }

  } while (1); /* end of syntactic loop '.lr.ph8' */
  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge36 = phi i32 [ %%31, %%.lr.ph ], [ 0, %%.preheader5  for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_storemerge36_count);
  llvm_cbe_storemerge36 = (unsigned int )llvm_cbe_storemerge36__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge36 = 0x%X",llvm_cbe_storemerge36);
printf("\n = 0x%X",llvm_cbe_tmp__108);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sub nsw i32 %%storemerge9, %%storemerge36, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_336_count);
  llvm_cbe_tmp__98 = (unsigned int )((unsigned int )(llvm_cbe_storemerge9&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge36&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__98&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%21 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_337_count);
  llvm_cbe_tmp__99 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%22, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_338_count);
  llvm_cbe_tmp__100 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__99))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__99));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i16* %%23, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__101 = (unsigned short )*llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sext i32 %%storemerge36 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__102 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge36);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%25, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__103 = (signed short *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__102))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__102));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i16* %%26, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_342_count);
  llvm_cbe_tmp__104 = (unsigned short )*llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = mul i16 %%27, %%24, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_343_count);
  llvm_cbe_tmp__105 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__104&65535ull)) * ((unsigned short )(llvm_cbe_tmp__101&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__105&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i16* %%4, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__106 = (unsigned short )*llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i16 %%29, %%28, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_345_count);
  llvm_cbe_tmp__107 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__106&65535ull)) + ((unsigned short )(llvm_cbe_tmp__105&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__107&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%30, i16* %%4, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_346_count);
  *llvm_cbe_tmp__83 = llvm_cbe_tmp__107;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%storemerge36, 1, !dbg !12 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_347_count);
  llvm_cbe_tmp__108 = (unsigned int )((unsigned int )(llvm_cbe_storemerge36&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__108&4294967295ull)));
  if (((llvm_cbe_tmp__108&4294967295U) == (llvm_cbe_indvars_2e_iv&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge36__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__108;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__118:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge14 = phi i32 [ 0, %%.preheader ], [ %%40, %%32  for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_storemerge14_count);
  llvm_cbe_storemerge14 = (unsigned int )llvm_cbe_storemerge14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge14 = 0x%X",llvm_cbe_storemerge14);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__116);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%storemerge14 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_358_count);
  llvm_cbe_tmp__109 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge14);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%33, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_359_count);
  llvm_cbe_tmp__110 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__109))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__109));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i16* %%34, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_360_count);
  llvm_cbe_tmp__111 = (unsigned short )*llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i16* %%1, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_361_count);
  llvm_cbe_tmp__112 = (unsigned short )*llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = shl i16 %%36, 1, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__113 = (unsigned short )((unsigned short )(llvm_cbe_tmp__112 << ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add i16 %%37, %%35, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__114 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__113&65535ull)) + ((unsigned short )(llvm_cbe_tmp__111&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__114&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = tail call zeroext i16 @mod3(i16 zeroext %%38), !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__115 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__114);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__115);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%39, i16* %%34, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_365_count);
  *llvm_cbe_tmp__110 = llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add nsw i32 %%storemerge14, 1, !dbg !11 for 0x%I64xth hint within @poly_S3_mul  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__116 = (unsigned int )((unsigned int )(llvm_cbe_storemerge14&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__116&4294967295ull)));
  if (((llvm_cbe_tmp__116&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__119;
  } else {
    llvm_cbe_storemerge14__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__116;   /* for PHI node */
    goto llvm_cbe_tmp__118;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__119:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_S3_mul}\n");
  return;
}


void poly_Rq_mul_x_minus_1(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  signed short *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  unsigned short llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned int llvm_cbe_storemerge2;
  unsigned int llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  unsigned long long llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  signed short *llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  unsigned short llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  signed short *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  unsigned short llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  unsigned short llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  unsigned short llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  signed short *llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  signed short *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  unsigned short llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  unsigned short llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  unsigned short llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  signed short *llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Rq_mul_x_minus_1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 676, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__120 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i16* %%1, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_392_count);
  llvm_cbe_tmp__121 = (unsigned short )*llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )676u;   /* for PHI node */
  goto llvm_cbe_tmp__137;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__137:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i32 [ 676, %%0 ], [ %%4, %%3  for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned int )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",676u);
printf("\n = 0x%X",llvm_cbe_tmp__122);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add nsw i32 %%storemerge2, -1, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__122 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__122&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%4 to i64, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_403_count);
  llvm_cbe_tmp__123 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%5, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__124 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__123))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__123));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i16* %%6, align 2, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__125 = (unsigned short )*llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge2 to i64, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__126 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%8, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__127 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__126))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i16* %%9, align 2, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__128 = (unsigned short )*llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sub i16 %%7, %%10, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__129 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__125&65535ull)) - ((unsigned short )(llvm_cbe_tmp__128&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__129&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = and i16 %%11, 2047, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__130 = (unsigned short )((unsigned short )(llvm_cbe_tmp__129 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%8, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_411_count);
  llvm_cbe_tmp__131 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__126))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%12, i16* %%13, align 2, !dbg !9 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_412_count);
  *llvm_cbe_tmp__131 = llvm_cbe_tmp__130;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
  if ((((signed int )llvm_cbe_tmp__122) > ((signed int )0u))) {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__122;   /* for PHI node */
    goto llvm_cbe_tmp__137;
  } else {
    goto llvm_cbe_tmp__138;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__138:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_421_count);
  llvm_cbe_tmp__132 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i16* %%16, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__133 = (unsigned short )*llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sub i16 %%2, %%17, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__134 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__121&65535ull)) - ((unsigned short )(llvm_cbe_tmp__133&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__134&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = and i16 %%18, 2047, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__135 = (unsigned short )((unsigned short )(llvm_cbe_tmp__134 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 0, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__136 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%19, i16* %%20, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_mul_x_minus_1  --> \n", ++aesl_llvm_cbe_426_count);
  *llvm_cbe_tmp__136 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Rq_mul_x_minus_1}\n");
  return;
}


void poly_lift(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  unsigned long long llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  signed short *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  unsigned short llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  signed short *llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_lift\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__144;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__144:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__143);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_439_count);
  llvm_cbe_tmp__139 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_440_count);
  llvm_cbe_tmp__140 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__139))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_441_count);
  llvm_cbe_tmp__141 = (unsigned short )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_442_count);
  llvm_cbe_tmp__142 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__139))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%4, i16* %%5, align 2, !dbg !9 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_443_count);
  *llvm_cbe_tmp__142 = llvm_cbe_tmp__141;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_444_count);
  llvm_cbe_tmp__143 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__143&4294967295ull)));
  if (((llvm_cbe_tmp__143&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__145;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__143;   /* for PHI node */
    goto llvm_cbe_tmp__144;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__145:
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @poly_Z3_to_Zq(%%struct.poly* %%r), !dbg !9 for 0x%I64xth hint within @poly_lift  --> \n", ++aesl_llvm_cbe_451_count);
   /*tail*/ poly_Z3_to_Zq((l_struct_OC_poly *)llvm_cbe_r);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_lift}\n");
  return;
}


void poly_Rq_to_S3(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  unsigned long long llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  signed short *llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  unsigned short llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  unsigned short llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  unsigned short llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  unsigned short llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  signed short *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  unsigned short llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  unsigned short llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  unsigned int llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  signed short *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  unsigned short llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  unsigned short llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  unsigned long long llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  signed short *llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  unsigned short llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  unsigned short llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  unsigned short llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  unsigned short llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  unsigned short llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  unsigned int llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Rq_to_S3\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__167;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__167:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%11, %%1  for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__155);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge3 to i64, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_476_count);
  llvm_cbe_tmp__146 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_477_count);
  llvm_cbe_tmp__147 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__146))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__146));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i16* %%3, align 2, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__148 = (unsigned short )*llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = shl i16 %%4, 1, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__149 = (unsigned short )((unsigned short )(llvm_cbe_tmp__148 << ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i16 %%5, -2048, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_480_count);
  llvm_cbe_tmp__150 = (unsigned short )((unsigned short )(llvm_cbe_tmp__149 & ((unsigned short )-2048)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = xor i16 %%6, 6144, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_481_count);
  llvm_cbe_tmp__151 = (unsigned short )((unsigned short )(llvm_cbe_tmp__150 ^ ((unsigned short )6144)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%2, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__152 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__146))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__146));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%7, i16* %%8, align 2, !dbg !9 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_483_count);
  *llvm_cbe_tmp__152 = llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__153 = (unsigned short )*llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add i16 %%7, %%9, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__154 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__151&65535ull)) + ((unsigned short )(llvm_cbe_tmp__153&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__154&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%10, i16* %%8, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_486_count);
  *llvm_cbe_tmp__152 = llvm_cbe_tmp__154;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add nsw i32 %%storemerge3, 1, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_487_count);
  llvm_cbe_tmp__155 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__155&4294967295ull)));
  if (((llvm_cbe_tmp__155&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__168;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__155;   /* for PHI node */
    goto llvm_cbe_tmp__167;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__168:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_500_count);
  llvm_cbe_tmp__156 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i16* %%13, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_501_count);
  llvm_cbe_tmp__157 = (unsigned short )*llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = tail call zeroext i16 @mod3(i16 zeroext %%14), !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_502_count);
  llvm_cbe_tmp__158 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__157);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__158);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%15, i16* %%13, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_503_count);
  *llvm_cbe_tmp__156 = llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__158);
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__169;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__169:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%12 ], [ %%24, %%16  for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__166);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = sext i32 %%storemerge12 to i64, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_516_count);
  llvm_cbe_tmp__159 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%17, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_517_count);
  llvm_cbe_tmp__160 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__159))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__159));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i16* %%18, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_518_count);
  llvm_cbe_tmp__161 = (unsigned short )*llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i16* %%13, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_519_count);
  llvm_cbe_tmp__162 = (unsigned short )*llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = shl i16 %%20, 1, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_520_count);
  llvm_cbe_tmp__163 = (unsigned short )((unsigned short )(llvm_cbe_tmp__162 << ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add i16 %%21, %%19, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_521_count);
  llvm_cbe_tmp__164 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__163&65535ull)) + ((unsigned short )(llvm_cbe_tmp__161&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__164&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = tail call zeroext i16 @mod3(i16 zeroext %%22), !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_522_count);
  llvm_cbe_tmp__165 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__164);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__165);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%23, i16* %%18, align 2, !dbg !10 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_523_count);
  *llvm_cbe_tmp__160 = llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add nsw i32 %%storemerge12, 1, !dbg !11 for 0x%I64xth hint within @poly_Rq_to_S3  --> \n", ++aesl_llvm_cbe_524_count);
  llvm_cbe_tmp__166 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__166&4294967295ull)));
  if (((llvm_cbe_tmp__166&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__170;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__166;   /* for PHI node */
    goto llvm_cbe_tmp__169;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__170:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Rq_to_S3}\n");
  return;
}


void poly_Rq_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_ai2_count = 0;
  l_struct_OC_poly llvm_cbe_ai2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Rq_inv\n");
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_poly_R2_inv(%%struct.poly* %%ai2, %%struct.poly* %%a), !dbg !10 for 0x%I64xth hint within @poly_Rq_inv  --> \n", ++aesl_llvm_cbe_544_count);
  aesl_internal_poly_R2_inv((l_struct_OC_poly *)(&llvm_cbe_ai2), (l_struct_OC_poly *)llvm_cbe_a);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_poly_R2_inv_to_Rq_inv(%%struct.poly* %%r, %%struct.poly* %%ai2, %%struct.poly* %%a), !dbg !9 for 0x%I64xth hint within @poly_Rq_inv  --> \n", ++aesl_llvm_cbe_545_count);
  aesl_internal_poly_R2_inv_to_Rq_inv((l_struct_OC_poly *)llvm_cbe_r, (l_struct_OC_poly *)(&llvm_cbe_ai2), (l_struct_OC_poly *)llvm_cbe_a);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Rq_inv}\n");
  return;
}


static void aesl_internal_poly_R2_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_b_count = 0;
  l_struct_OC_poly llvm_cbe_b;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_f_count = 0;
  l_struct_OC_poly llvm_cbe_f;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_g_count = 0;
  l_struct_OC_poly llvm_cbe_g;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge24_count = 0;
  unsigned int llvm_cbe_storemerge24;
  unsigned int llvm_cbe_storemerge24__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  unsigned long long llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  signed short *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  unsigned int llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond33_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  signed short *llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge123_count = 0;
  unsigned int llvm_cbe_storemerge123;
  unsigned int llvm_cbe_storemerge123__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  unsigned long long llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  signed short *llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  unsigned int llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond32_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge222_count = 0;
  unsigned int llvm_cbe_storemerge222;
  unsigned int llvm_cbe_storemerge222__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  unsigned long long llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  signed short *llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  unsigned short llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  unsigned short llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  signed short *llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  unsigned int llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond31_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  signed short *llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge320_count = 0;
  unsigned int llvm_cbe_storemerge320;
  unsigned int llvm_cbe_storemerge320__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  unsigned long long llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  signed short *llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  unsigned int llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond30_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge418_count = 0;
  unsigned int llvm_cbe_storemerge418;
  unsigned int llvm_cbe_storemerge418__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  unsigned int llvm_cbe_tmp__188;
  unsigned int llvm_cbe_tmp__188__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  unsigned short llvm_cbe_tmp__189;
  unsigned short llvm_cbe_tmp__189__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  unsigned short llvm_cbe_tmp__190;
  unsigned short llvm_cbe_tmp__190__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  unsigned int llvm_cbe_tmp__191;
  unsigned int llvm_cbe_tmp__191__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  unsigned short llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  unsigned int llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  unsigned int llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  unsigned int llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  unsigned int llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  unsigned int llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  unsigned int llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  unsigned int llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  unsigned int llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  unsigned short llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  unsigned short llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  unsigned short llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  unsigned short llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  unsigned short llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  unsigned short llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  unsigned short llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge816_count = 0;
  unsigned int llvm_cbe_storemerge816;
  unsigned int llvm_cbe_storemerge816__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  unsigned long long llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  signed short *llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  unsigned short llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  unsigned short llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  signed short *llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  unsigned short llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  unsigned short llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  unsigned short llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  unsigned int llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond28_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge915_count = 0;
  unsigned int llvm_cbe_storemerge915;
  unsigned int llvm_cbe_storemerge915__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  unsigned long long llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  signed short *llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  unsigned short llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  unsigned short llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  signed short *llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  unsigned short llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  unsigned short llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  unsigned short llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  unsigned int llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond27_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  unsigned short llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  unsigned short llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  unsigned int llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  unsigned short llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  unsigned int llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  unsigned int llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  unsigned int llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  unsigned int llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond29_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  unsigned short llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  unsigned short llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  unsigned int llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  unsigned int llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  unsigned int llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  unsigned int llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  unsigned int llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
   char *llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
   char *llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge513_count = 0;
  unsigned int llvm_cbe_storemerge513;
  unsigned int llvm_cbe_storemerge513__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  unsigned long long llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  signed short *llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  unsigned short llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  signed short *llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  unsigned int llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond26_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge612_count = 0;
  unsigned int llvm_cbe_storemerge612;
  unsigned int llvm_cbe_storemerge612__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  unsigned int llvm_cbe_tmp__248;
  unsigned int llvm_cbe_tmp__248__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  unsigned int llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge710_count = 0;
  unsigned int llvm_cbe_storemerge710;
  unsigned int llvm_cbe_storemerge710__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  unsigned int llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  unsigned int llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  unsigned long long llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  signed short *llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  unsigned short llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  unsigned long long llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  signed short *llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  unsigned int llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  unsigned char llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  unsigned char llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  unsigned int llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  unsigned int llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond25_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_poly_R2_inv\n");
  llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__262;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__262:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge24 = phi i32 [ 1, %%0 ], [ %%4, %%1  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge24_count);
  llvm_cbe_storemerge24 = (unsigned int )llvm_cbe_storemerge24__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge24 = 0x%X",llvm_cbe_storemerge24);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__173);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge24 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__171 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge24);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !15 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_621_count);
  llvm_cbe_tmp__172 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__171))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__171));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%3, align 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_622_count);
  *llvm_cbe_tmp__172 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add nsw i32 %%storemerge24, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_623_count);
  llvm_cbe_tmp__173 = (unsigned int )((unsigned int )(llvm_cbe_storemerge24&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__173&4294967295ull)));
  if (((llvm_cbe_tmp__173&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__263;
  } else {
    llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__173;   /* for PHI node */
    goto llvm_cbe_tmp__262;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__263:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__174 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 1, i16* %%6, align 2, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_655_count);
  *llvm_cbe_tmp__174 = ((unsigned short )1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )1));
  llvm_cbe_storemerge123__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__264;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__264:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge123 = phi i32 [ 0, %%5 ], [ %%10, %%7  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge123_count);
  llvm_cbe_storemerge123 = (unsigned int )llvm_cbe_storemerge123__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge123 = 0x%X",llvm_cbe_storemerge123);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__177);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge123 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_686_count);
  llvm_cbe_tmp__175 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge123);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%8, !dbg !14 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_687_count);
  llvm_cbe_tmp__176 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__175))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__175));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%9, align 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_688_count);
  *llvm_cbe_tmp__176 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge123, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_689_count);
  llvm_cbe_tmp__177 = (unsigned int )((unsigned int )(llvm_cbe_storemerge123&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__177&4294967295ull)));
  if (((llvm_cbe_tmp__177&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge222__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader21;
  } else {
    llvm_cbe_storemerge123__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__177;   /* for PHI node */
    goto llvm_cbe_tmp__264;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader21' to make GCC happy */
llvm_cbe__2e_preheader21:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge222 = phi i32 [ %%16, %%.preheader21 ], [ 0, %%7  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge222_count);
  llvm_cbe_storemerge222 = (unsigned int )llvm_cbe_storemerge222__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge222 = 0x%X",llvm_cbe_storemerge222);
printf("\n = 0x%X",llvm_cbe_tmp__183);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%storemerge222 to i64, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_720_count);
  llvm_cbe_tmp__178 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge222);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%11, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_721_count);
  llvm_cbe_tmp__179 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__178))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__178));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i16* %%12, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_722_count);
  llvm_cbe_tmp__180 = (unsigned short )*llvm_cbe_tmp__179;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__180);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = and i16 %%13, 1, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_723_count);
  llvm_cbe_tmp__181 = (unsigned short )((unsigned short )(llvm_cbe_tmp__180 & ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 %%11, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_724_count);
  llvm_cbe_tmp__182 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )llvm_cbe_tmp__178))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__178));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%14, i16* %%15, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_725_count);
  *llvm_cbe_tmp__182 = llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%storemerge222, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_726_count);
  llvm_cbe_tmp__183 = (unsigned int )((unsigned int )(llvm_cbe_storemerge222&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__183&4294967295ull)));
  if (((llvm_cbe_tmp__183&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge320__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader19;
  } else {
    llvm_cbe_storemerge222__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__183;   /* for PHI node */
    goto llvm_cbe__2e_preheader21;
  }

  } while (1); /* end of syntactic loop '.preheader21' */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_763_count);
  llvm_cbe_tmp__184 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge418__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__188__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__189__PHI_TEMPORARY = (unsigned short )((unsigned short )676);   /* for PHI node */
  llvm_cbe_tmp__190__PHI_TEMPORARY = (unsigned short )((unsigned short )676);   /* for PHI node */
  llvm_cbe_tmp__191__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__265;

  do {     /* Syntactic loop '.preheader19' to make GCC happy */
llvm_cbe__2e_preheader19:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge320 = phi i32 [ %%20, %%.preheader19 ], [ 0, %%.preheader21  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge320_count);
  llvm_cbe_storemerge320 = (unsigned int )llvm_cbe_storemerge320__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge320 = 0x%X",llvm_cbe_storemerge320);
printf("\n = 0x%X",llvm_cbe_tmp__187);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%storemerge320 to i64, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__185 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge320);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.poly* %%g, i64 0, i32 0, i64 %%18, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__186 = (signed short *)(&llvm_cbe_g.field0[(((signed long long )llvm_cbe_tmp__185))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__185));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 1, i16* %%19, align 2, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_767_count);
  *llvm_cbe_tmp__186 = ((unsigned short )1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )1));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge320, 1, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__187 = (unsigned int )((unsigned int )(llvm_cbe_storemerge320&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__187&4294967295ull)));
  if (((llvm_cbe_tmp__187&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe__2e_preheader17;
  } else {
    llvm_cbe_storemerge320__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__187;   /* for PHI node */
    goto llvm_cbe__2e_preheader19;
  }

  } while (1); /* end of syntactic loop '.preheader19' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__265:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge418 = phi i32 [ 0, %%.preheader17 ], [ %%70, %%62  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge418_count);
  llvm_cbe_storemerge418 = (unsigned int )llvm_cbe_storemerge418__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge418 = 0x%X",llvm_cbe_storemerge418);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__233);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = phi i32 [ 0, %%.preheader17 ], [ %%65, %%62  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__188 = (unsigned int )llvm_cbe_tmp__188__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__188);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__228);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = phi i16 [ 676, %%.preheader17 ], [ %%64, %%62  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__189 = (unsigned short )llvm_cbe_tmp__189__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__189);
printf("\n = 0x%X",((unsigned short )676));
printf("\n = 0x%X",llvm_cbe_tmp__227);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = phi i16 [ 676, %%.preheader17 ], [ %%41, %%62  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_801_count);
  llvm_cbe_tmp__190 = (unsigned short )llvm_cbe_tmp__190__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__190);
printf("\n = 0x%X",((unsigned short )676));
printf("\n = 0x%X",llvm_cbe_tmp__206);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = phi i32 [ 0, %%.preheader17 ], [ %%69, %%62  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_802_count);
  llvm_cbe_tmp__191 = (unsigned int )llvm_cbe_tmp__191__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__191);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__232);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i16* %%17, align 2, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_803_count);
  llvm_cbe_tmp__192 = (unsigned short )*llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = zext i16 %%26 to i32, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_804_count);
  llvm_cbe_tmp__193 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__192&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i1 %%28 to i32, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__194 = (unsigned int )((unsigned int )(bool )((llvm_cbe_tmp__191&4294967295U) == (0u&4294967295U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = zext i16 %%23 to i32, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_811_count);
  llvm_cbe_tmp__195 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__189&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = zext i16 %%24 to i32, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_812_count);
  llvm_cbe_tmp__196 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__190&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = sub nsw i32 %%30, %%31, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_813_count);
  llvm_cbe_tmp__197 = (unsigned int )((unsigned int )(llvm_cbe_tmp__195&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__196&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__197&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = lshr i32 %%32, 15, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_814_count);
  llvm_cbe_tmp__198 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__197&4294967295ull)) >> ((unsigned int )(15u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__198&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = and i32 %%33, %%29, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__199 = (unsigned int )llvm_cbe_tmp__198 & llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = and i32 %%34, %%27, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_816_count);
  llvm_cbe_tmp__200 = (unsigned int )llvm_cbe_tmp__199 & llvm_cbe_tmp__193;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_cswappoly(%%struct.poly* %%f, %%struct.poly* %%g, i32 %%35), !dbg !18 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_821_count);
  aesl_internal_cswappoly((l_struct_OC_poly *)(&llvm_cbe_f), (l_struct_OC_poly *)(&llvm_cbe_g), llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__200);
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_cswappoly(%%struct.poly* %%b, %%struct.poly* %%r, i32 %%35), !dbg !14 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_822_count);
  aesl_internal_cswappoly((l_struct_OC_poly *)(&llvm_cbe_b), (l_struct_OC_poly *)llvm_cbe_r, llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__200);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = xor i16 %%23, %%24, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__201 = (unsigned short )((unsigned short )(llvm_cbe_tmp__189 ^ llvm_cbe_tmp__190));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = trunc i32 %%35 to i16, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_824_count);
  llvm_cbe_tmp__202 = (unsigned short )((unsigned short )llvm_cbe_tmp__200&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = sub i16 0, %%37, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_825_count);
  llvm_cbe_tmp__203 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__202)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__203&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = and i16 %%36, %%38, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_827_count);
  llvm_cbe_tmp__204 = (unsigned short )((unsigned short )(llvm_cbe_tmp__201 & llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = xor i16 %%39, %%23, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_828_count);
  llvm_cbe_tmp__205 = (unsigned short )((unsigned short )(llvm_cbe_tmp__204 ^ llvm_cbe_tmp__189));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = xor i16 %%39, %%24, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_836_count);
  llvm_cbe_tmp__206 = (unsigned short )((unsigned short )(llvm_cbe_tmp__204 ^ llvm_cbe_tmp__190));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = sext i1 %%28 to i16, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_870_count);
  llvm_cbe_tmp__207 = (unsigned short )((signed short )(0-((llvm_cbe_tmp__191&4294967295U) == (0u&4294967295U))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__207);
  llvm_cbe_storemerge816__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__266;

llvm_cbe_tmp__267:
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_poly_divx(%%struct.poly* %%f, i32 %%29), !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_952_count);
  aesl_internal_poly_divx((l_struct_OC_poly *)(&llvm_cbe_f), llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__194);
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_poly_mulx(%%struct.poly* %%r, i32 %%29), !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_953_count);
  aesl_internal_poly_mulx((l_struct_OC_poly *)llvm_cbe_r, llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__194);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = zext i1 %%28 to i16, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_954_count);
  llvm_cbe_tmp__226 = (unsigned short )((unsigned short )(bool )((llvm_cbe_tmp__191&4294967295U) == (0u&4294967295U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = sub i16 %%40, %%63, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_955_count);
  llvm_cbe_tmp__227 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__205&65535ull)) - ((unsigned short )(llvm_cbe_tmp__226&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__227&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = add nsw i32 %%22, %%29, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_962_count);
  llvm_cbe_tmp__228 = (unsigned int )((unsigned int )(llvm_cbe_tmp__188&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__194&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__228&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = sub i16 0, %%64, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_969_count);
  llvm_cbe_tmp__229 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__227)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__229&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = zext i16 %%66 to i32, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_970_count);
  llvm_cbe_tmp__230 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__229&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__230);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = lshr i32 %%67, 15, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_971_count);
  llvm_cbe_tmp__231 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__230&4294967295ull)) >> ((unsigned int )(15u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__231&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = xor i32 %%68, 1, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_972_count);
  llvm_cbe_tmp__232 = (unsigned int )llvm_cbe_tmp__231 ^ 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__232);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = add nsw i32 %%storemerge418, 1, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_981_count);
  llvm_cbe_tmp__233 = (unsigned int )((unsigned int )(llvm_cbe_storemerge418&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__233&4294967295ull)));
  if (((llvm_cbe_tmp__233&4294967295U) == (1351u&4294967295U))) {
    goto llvm_cbe_tmp__268;
  } else {
    llvm_cbe_storemerge418__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__233;   /* for PHI node */
    llvm_cbe_tmp__188__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__228;   /* for PHI node */
    llvm_cbe_tmp__189__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__227;   /* for PHI node */
    llvm_cbe_tmp__190__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__206;   /* for PHI node */
    llvm_cbe_tmp__191__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__232;   /* for PHI node */
    goto llvm_cbe_tmp__265;
  }

  do {     /* Syntactic loop '.preheader14' to make GCC happy */
llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge915 = phi i32 [ %%61, %%.preheader14 ], [ 0, %%43  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge915_count);
  llvm_cbe_storemerge915 = (unsigned int )llvm_cbe_storemerge915__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge915 = 0x%X",llvm_cbe_storemerge915);
printf("\n = 0x%X",llvm_cbe_tmp__225);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = sext i32 %%storemerge915 to i64, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_912_count);
  llvm_cbe_tmp__217 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge915);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%53, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_913_count);
  llvm_cbe_tmp__218 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__217))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i16* %%54, align 2, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_914_count);
  llvm_cbe_tmp__219 = (unsigned short )*llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = mul i16 %%55, %%26, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_915_count);
  llvm_cbe_tmp__220 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__219&65535ull)) * ((unsigned short )(llvm_cbe_tmp__192&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__220&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%53, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_916_count);
  llvm_cbe_tmp__221 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__217))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__217));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load i16* %%57, align 2, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_917_count);
  llvm_cbe_tmp__222 = (unsigned short )*llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = and i16 %%56, %%42, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_918_count);
  llvm_cbe_tmp__223 = (unsigned short )((unsigned short )(llvm_cbe_tmp__220 & llvm_cbe_tmp__207));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = xor i16 %%59, %%58, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_919_count);
  llvm_cbe_tmp__224 = (unsigned short )((unsigned short )(llvm_cbe_tmp__223 ^ llvm_cbe_tmp__222));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%60, i16* %%57, align 2, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_920_count);
  *llvm_cbe_tmp__221 = llvm_cbe_tmp__224;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = add nsw i32 %%storemerge915, 1, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_921_count);
  llvm_cbe_tmp__225 = (unsigned int )((unsigned int )(llvm_cbe_storemerge915&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__225&4294967295ull)));
  if (((llvm_cbe_tmp__225&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__267;
  } else {
    llvm_cbe_storemerge915__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__225;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  }

  } while (1); /* end of syntactic loop '.preheader14' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__266:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge816 = phi i32 [ 0, %%21 ], [ %%52, %%43  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge816_count);
  llvm_cbe_storemerge816 = (unsigned int )llvm_cbe_storemerge816__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge816 = 0x%X",llvm_cbe_storemerge816);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__216);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = sext i32 %%storemerge816 to i64, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_872_count);
  llvm_cbe_tmp__208 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge816);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds %%struct.poly* %%g, i64 0, i32 0, i64 %%44, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_873_count);
  llvm_cbe_tmp__209 = (signed short *)(&llvm_cbe_g.field0[(((signed long long )llvm_cbe_tmp__208))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__208));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i16* %%45, align 2, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_874_count);
  llvm_cbe_tmp__210 = (unsigned short )*llvm_cbe_tmp__209;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = mul i16 %%46, %%26, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_875_count);
  llvm_cbe_tmp__211 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__210&65535ull)) * ((unsigned short )(llvm_cbe_tmp__192&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__211&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 %%44, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__212 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )llvm_cbe_tmp__208))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__208));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i16* %%48, align 2, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_877_count);
  llvm_cbe_tmp__213 = (unsigned short )*llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = and i16 %%47, %%42, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_878_count);
  llvm_cbe_tmp__214 = (unsigned short )((unsigned short )(llvm_cbe_tmp__211 & llvm_cbe_tmp__207));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = xor i16 %%50, %%49, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_879_count);
  llvm_cbe_tmp__215 = (unsigned short )((unsigned short )(llvm_cbe_tmp__214 ^ llvm_cbe_tmp__213));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%51, i16* %%48, align 2, !dbg !13 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_880_count);
  *llvm_cbe_tmp__212 = llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add nsw i32 %%storemerge816, 1, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_881_count);
  llvm_cbe_tmp__216 = (unsigned int )((unsigned int )(llvm_cbe_storemerge816&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__216&4294967295ull)));
  if (((llvm_cbe_tmp__216&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge915__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader14;
  } else {
    llvm_cbe_storemerge816__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__216;   /* for PHI node */
    goto llvm_cbe_tmp__266;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__268:
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = trunc i32 %%65 to i16, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_990_count);
  llvm_cbe_tmp__234 = (unsigned short )((unsigned short )llvm_cbe_tmp__228&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = sub i16 676, %%72, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_991_count);
  llvm_cbe_tmp__235 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )676)&65535ull)) - ((unsigned short )(llvm_cbe_tmp__234&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__235&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = zext i16 %%73 to i32, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_992_count);
  llvm_cbe_tmp__236 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__235&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = lshr i32 %%74, 15, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_993_count);
  llvm_cbe_tmp__237 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__236&4294967295ull)) >> ((unsigned int )(15u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__237&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = sub i32 0, %%75, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_994_count);
  llvm_cbe_tmp__238 = (unsigned int )-(llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__238&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = and i32 %%76, 677, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_995_count);
  llvm_cbe_tmp__239 = (unsigned int )llvm_cbe_tmp__238 & 677u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = sub nsw i32 %%65, %%77, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_996_count);
  llvm_cbe_tmp__240 = (unsigned int )((unsigned int )(llvm_cbe_tmp__228&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__239&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__240&4294967295ull)));
  llvm_cbe_storemerge513__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__269;

llvm_cbe__2e_preheader11:
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = bitcast %%struct.poly* %%r to i8*, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1061_count);
  llvm_cbe_tmp__241 = ( char *)(( char *)llvm_cbe_r);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = bitcast %%struct.poly* %%f to i8*, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1062_count);
  llvm_cbe_tmp__242 = ( char *)(( char *)(&llvm_cbe_f));
  llvm_cbe_storemerge612__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__248__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__240;   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__269:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge513 = phi i32 [ 0, %%71 ], [ %%86, %%81  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge513_count);
  llvm_cbe_storemerge513 = (unsigned int )llvm_cbe_storemerge513__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge513 = 0x%X",llvm_cbe_storemerge513);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__247);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = sext i32 %%storemerge513 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1064_count);
  llvm_cbe_tmp__243 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge513);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__243);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%82, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1065_count);
  llvm_cbe_tmp__244 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__243))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__243));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load i16* %%83, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1066_count);
  llvm_cbe_tmp__245 = (unsigned short )*llvm_cbe_tmp__244;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%82, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1067_count);
  llvm_cbe_tmp__246 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__243))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__243));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%84, i16* %%85, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1068_count);
  *llvm_cbe_tmp__246 = llvm_cbe_tmp__245;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = add nsw i32 %%storemerge513, 1, !dbg !16 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1069_count);
  llvm_cbe_tmp__247 = (unsigned int )((unsigned int )(llvm_cbe_storemerge513&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__247&4294967295ull)));
  if (((llvm_cbe_tmp__247&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe__2e_preheader11;
  } else {
    llvm_cbe_storemerge513__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__247;   /* for PHI node */
    goto llvm_cbe_tmp__269;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge612 = phi i32 [ 0, %%.preheader11 ], [ %%102, %%98  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge612_count);
  llvm_cbe_storemerge612 = (unsigned int )llvm_cbe_storemerge612__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge612 = 0x%X",llvm_cbe_storemerge612);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__261);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = phi i32 [ %%78, %%.preheader11 ], [ %%101, %%98  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1100_count);
  llvm_cbe_tmp__248 = (unsigned int )llvm_cbe_tmp__248__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__248);
printf("\n = 0x%X",llvm_cbe_tmp__240);
printf("\n = 0x%X",llvm_cbe_tmp__260);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = shl i32 1, %%storemerge612, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__249 = (unsigned int )1u << llvm_cbe_storemerge612;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__249);
  llvm_cbe_storemerge710__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__270;

llvm_cbe_tmp__271:
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = trunc i32 %%87 to i8, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1126_count);
  llvm_cbe_tmp__258 = (unsigned char )((unsigned char )llvm_cbe_tmp__248&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__258);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = and i8 %%99, 1, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1127_count);
  llvm_cbe_tmp__259 = (unsigned char )((unsigned char )(llvm_cbe_tmp__258 & ((unsigned char )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__259);
if (AESL_DEBUG_TRACE)
printf("\n  call void @cmov(i8* %%79, i8* %%80, i64 1354, i8 zeroext %%100) nounwind, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1128_count);
  cmov(( char *)llvm_cbe_tmp__241, ( char *)llvm_cbe_tmp__242, 1354ull, llvm_cbe_tmp__259);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1354ull);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__259);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = ashr i32 %%87, 1, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1129_count);
  llvm_cbe_tmp__260 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__248) >> ((signed int )1u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__260));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = add nsw i32 %%storemerge612, 1, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1136_count);
  llvm_cbe_tmp__261 = (unsigned int )((unsigned int )(llvm_cbe_storemerge612&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__261&4294967295ull)));
  if (((llvm_cbe_tmp__261&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe_tmp__272;
  } else {
    llvm_cbe_storemerge612__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__261;   /* for PHI node */
    llvm_cbe_tmp__248__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__260;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__270:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge710 = phi i32 [ 0, %%.preheader ], [ %%97, %%89  for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_storemerge710_count);
  llvm_cbe_storemerge710 = (unsigned int )llvm_cbe_storemerge710__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge710 = 0x%X",llvm_cbe_storemerge710);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__257);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = add nsw i32 %%storemerge710, %%88, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1109_count);
  llvm_cbe_tmp__250 = (unsigned int )((unsigned int )(llvm_cbe_storemerge710&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__249&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__250&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = srem i32 %%90, 677, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1110_count);
  llvm_cbe_tmp__251 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__250) % ((signed int )677u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__251));
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = sext i32 %%91 to i64, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1111_count);
  llvm_cbe_tmp__252 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__252);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%92, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1112_count);
  llvm_cbe_tmp__253 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__252))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__252));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = load i16* %%93, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1113_count);
  llvm_cbe_tmp__254 = (unsigned short )*llvm_cbe_tmp__253;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = sext i32 %%storemerge710 to i64, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1114_count);
  llvm_cbe_tmp__255 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge710);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__255);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 %%95, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1115_count);
  llvm_cbe_tmp__256 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )llvm_cbe_tmp__255))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__255));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%94, i16* %%96, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1116_count);
  *llvm_cbe_tmp__256 = llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = add nsw i32 %%storemerge710, 1, !dbg !17 for 0x%I64xth hint within @aesl_internal_poly_R2_inv  --> \n", ++aesl_llvm_cbe_1117_count);
  llvm_cbe_tmp__257 = (unsigned int )((unsigned int )(llvm_cbe_storemerge710&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__257&4294967295ull)));
  if (((llvm_cbe_tmp__257&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__271;
  } else {
    llvm_cbe_storemerge710__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__257;   /* for PHI node */
    goto llvm_cbe_tmp__270;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__272:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_poly_R2_inv}\n");
  return;
}


static void aesl_internal_poly_R2_inv_to_Rq_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_ai, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_b_count = 0;
  l_struct_OC_poly llvm_cbe_b;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
  l_struct_OC_poly llvm_cbe_c;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_s_count = 0;
  l_struct_OC_poly llvm_cbe_s;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  unsigned long long llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  signed short *llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  unsigned short llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  unsigned short llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  unsigned short llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  signed short *llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  unsigned int llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  unsigned long long llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  signed short *llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  unsigned short llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  signed short *llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  unsigned int llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  signed short *llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  unsigned short llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  unsigned short llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  unsigned short llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  unsigned short llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  unsigned short llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  unsigned short llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  unsigned short llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  unsigned short llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_poly_R2_inv_to_Rq_inv\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__294;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__294:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__279);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge3 to i64, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1193_count);
  llvm_cbe_tmp__273 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__273);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1194_count);
  llvm_cbe_tmp__274 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__273))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__273));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i16* %%3, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1195_count);
  llvm_cbe_tmp__275 = (unsigned short )*llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__275);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sub i16 0, %%4, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1196_count);
  llvm_cbe_tmp__276 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__275)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__276&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = and i16 %%5, 2047, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1197_count);
  llvm_cbe_tmp__277 = (unsigned short )((unsigned short )(llvm_cbe_tmp__276 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1198_count);
  llvm_cbe_tmp__278 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__273))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__273));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%6, i16* %%7, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1199_count);
  *llvm_cbe_tmp__278 = llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge3, 1, !dbg !11 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1200_count);
  llvm_cbe_tmp__279 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__279&4294967295ull)));
  if (((llvm_cbe_tmp__279&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__279;   /* for PHI node */
    goto llvm_cbe_tmp__294;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ %%13, %%.preheader ], [ 0, %%1  for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",llvm_cbe_tmp__284);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge12 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1211_count);
  llvm_cbe_tmp__280 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__280);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.poly* %%ai, i64 0, i32 0, i64 %%9, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1212_count);
  llvm_cbe_tmp__281 = (signed short *)(&llvm_cbe_ai->field0[(((signed long long )llvm_cbe_tmp__280))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__280));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i16* %%10, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1213_count);
  llvm_cbe_tmp__282 = (unsigned short )*llvm_cbe_tmp__281;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%9, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1214_count);
  llvm_cbe_tmp__283 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__280))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__280));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%11, i16* %%12, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1215_count);
  *llvm_cbe_tmp__283 = llvm_cbe_tmp__282;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%storemerge12, 1, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1216_count);
  llvm_cbe_tmp__284 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__284&4294967295ull)));
  if (((llvm_cbe_tmp__284&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__295;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__284;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__295:
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%c, %%struct.poly* %%r, %%struct.poly* %%b), !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1227_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)llvm_cbe_r, (l_struct_OC_poly *)(&llvm_cbe_b));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 0, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1228_count);
  llvm_cbe_tmp__285 = (signed short *)(&llvm_cbe_c.field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1229_count);
  llvm_cbe_tmp__286 = (unsigned short )*llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add i16 %%16, 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1230_count);
  llvm_cbe_tmp__287 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__286&65535ull)) + ((unsigned short )(((unsigned short )2)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__287&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%17, i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1231_count);
  *llvm_cbe_tmp__285 = llvm_cbe_tmp__287;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__287);
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%s, %%struct.poly* %%c, %%struct.poly* %%r), !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1232_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_s), (l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)llvm_cbe_r);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%c, %%struct.poly* %%s, %%struct.poly* %%b), !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1233_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)(&llvm_cbe_s), (l_struct_OC_poly *)(&llvm_cbe_b));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1234_count);
  llvm_cbe_tmp__288 = (unsigned short )*llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add i16 %%18, 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1235_count);
  llvm_cbe_tmp__289 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__288&65535ull)) + ((unsigned short )(((unsigned short )2)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__289&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%19, i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1236_count);
  *llvm_cbe_tmp__285 = llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%r, %%struct.poly* %%c, %%struct.poly* %%s), !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1237_count);
  poly_Rq_mul((l_struct_OC_poly *)llvm_cbe_r, (l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)(&llvm_cbe_s));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%c, %%struct.poly* %%r, %%struct.poly* %%b), !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1238_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)llvm_cbe_r, (l_struct_OC_poly *)(&llvm_cbe_b));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1239_count);
  llvm_cbe_tmp__290 = (unsigned short )*llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__290);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add i16 %%20, 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1240_count);
  llvm_cbe_tmp__291 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__290&65535ull)) + ((unsigned short )(((unsigned short )2)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__291&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%21, i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1241_count);
  *llvm_cbe_tmp__285 = llvm_cbe_tmp__291;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%s, %%struct.poly* %%c, %%struct.poly* %%r), !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1242_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_s), (l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)llvm_cbe_r);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%c, %%struct.poly* %%s, %%struct.poly* %%b), !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1243_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)(&llvm_cbe_s), (l_struct_OC_poly *)(&llvm_cbe_b));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1244_count);
  llvm_cbe_tmp__292 = (unsigned short )*llvm_cbe_tmp__285;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__292);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = add i16 %%22, 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1245_count);
  llvm_cbe_tmp__293 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__292&65535ull)) + ((unsigned short )(((unsigned short )2)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__293&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%23, i16* %%15, align 2, !dbg !12 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1246_count);
  *llvm_cbe_tmp__285 = llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%r, %%struct.poly* %%c, %%struct.poly* %%s), !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_R2_inv_to_Rq_inv  --> \n", ++aesl_llvm_cbe_1247_count);
  poly_Rq_mul((l_struct_OC_poly *)llvm_cbe_r, (l_struct_OC_poly *)(&llvm_cbe_c), (l_struct_OC_poly *)(&llvm_cbe_s));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_poly_R2_inv_to_Rq_inv}\n");
  return;
}


void poly_S3_inv(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_b_count = 0;
  l_struct_OC_poly llvm_cbe_b;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_c_count = 0;
  l_struct_OC_poly llvm_cbe_c;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_f_count = 0;
  l_struct_OC_poly llvm_cbe_f;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_g_count = 0;
  l_struct_OC_poly llvm_cbe_g;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge27_count = 0;
  unsigned int llvm_cbe_storemerge27;
  unsigned int llvm_cbe_storemerge27__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  unsigned long long llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  signed short *llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  unsigned int llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond37_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  signed short *llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge126_count = 0;
  unsigned int llvm_cbe_storemerge126;
  unsigned int llvm_cbe_storemerge126__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  unsigned long long llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  signed short *llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  unsigned int llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond36_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge225_count = 0;
  unsigned int llvm_cbe_storemerge225;
  unsigned int llvm_cbe_storemerge225__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  unsigned long long llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  signed short *llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  unsigned short llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  signed short *llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  unsigned int llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond35_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  signed short *llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  signed short *llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge323_count = 0;
  unsigned int llvm_cbe_storemerge323;
  unsigned int llvm_cbe_storemerge323__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  unsigned long long llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  signed short *llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  unsigned int llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond34_count = 0;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge421_count = 0;
  unsigned int llvm_cbe_storemerge421;
  unsigned int llvm_cbe_storemerge421__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  unsigned short llvm_cbe_tmp__313;
  unsigned short llvm_cbe_tmp__313__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  unsigned short llvm_cbe_tmp__314;
  unsigned short llvm_cbe_tmp__314__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  unsigned short llvm_cbe_tmp__315;
  unsigned short llvm_cbe_tmp__315__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  unsigned int llvm_cbe_tmp__316;
  unsigned int llvm_cbe_tmp__316__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  unsigned short llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  unsigned short llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  unsigned short llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  unsigned short llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  unsigned short llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  unsigned int llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  unsigned int llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  unsigned int llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  unsigned int llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  unsigned int llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  unsigned int llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  unsigned int llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  unsigned int llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  unsigned int llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  unsigned int llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  unsigned short llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  unsigned short llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  unsigned short llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  unsigned short llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  unsigned short llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  unsigned short llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  unsigned short llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  unsigned short llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge919_count = 0;
  unsigned int llvm_cbe_storemerge919;
  unsigned int llvm_cbe_storemerge919__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  unsigned long long llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  signed short *llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  unsigned short llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  signed short *llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  unsigned short llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  unsigned short llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  unsigned short llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  unsigned short llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  unsigned int llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond32_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1018_count = 0;
  unsigned int llvm_cbe_storemerge1018;
  unsigned int llvm_cbe_storemerge1018__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  unsigned long long llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  signed short *llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  unsigned short llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  signed short *llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  unsigned short llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  unsigned short llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  unsigned short llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  unsigned short llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  unsigned int llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond31_count = 0;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  unsigned short llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  unsigned short llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  unsigned short llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;
  static  unsigned long long aesl_llvm_cbe_1729_count = 0;
  static  unsigned long long aesl_llvm_cbe_1730_count = 0;
  static  unsigned long long aesl_llvm_cbe_1731_count = 0;
  static  unsigned long long aesl_llvm_cbe_1732_count = 0;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
  unsigned short llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_1734_count = 0;
  unsigned int llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_1735_count = 0;
  unsigned int llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_1736_count = 0;
  unsigned int llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_1737_count = 0;
  static  unsigned long long aesl_llvm_cbe_1738_count = 0;
  static  unsigned long long aesl_llvm_cbe_1739_count = 0;
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  unsigned int llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond33_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  unsigned short llvm_cbe_tmp__366;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  unsigned short llvm_cbe_tmp__367;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  unsigned short llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  unsigned short llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  unsigned short llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
   char *llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
   char *llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge516_count = 0;
  unsigned int llvm_cbe_storemerge516;
  unsigned int llvm_cbe_storemerge516__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  unsigned long long llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  signed short *llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  unsigned short llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  unsigned short llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  unsigned short llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  signed short *llvm_cbe_tmp__378;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  unsigned int llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond30_count = 0;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge615_count = 0;
  unsigned int llvm_cbe_storemerge615;
  unsigned int llvm_cbe_storemerge615__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  unsigned short llvm_cbe_tmp__380;
  unsigned short llvm_cbe_tmp__380__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  unsigned int llvm_cbe_tmp__381;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  signed short *llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge813_count = 0;
  unsigned int llvm_cbe_storemerge813;
  unsigned int llvm_cbe_storemerge813__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  unsigned int llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  unsigned int llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  unsigned long long llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  signed short *llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  unsigned short llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  unsigned long long llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  signed short *llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  unsigned int llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond28_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  unsigned char llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  unsigned char llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  unsigned short llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  unsigned int llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond29_count = 0;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge711_count = 0;
  unsigned int llvm_cbe_storemerge711;
  unsigned int llvm_cbe_storemerge711__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  unsigned long long llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  signed short *llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  unsigned short llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  unsigned short llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  unsigned short llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  unsigned short llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  unsigned short llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  unsigned int llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
  static  unsigned long long aesl_llvm_cbe_2011_count = 0;
  static  unsigned long long aesl_llvm_cbe_2012_count = 0;
  static  unsigned long long aesl_llvm_cbe_2013_count = 0;
  static  unsigned long long aesl_llvm_cbe_2014_count = 0;
  static  unsigned long long aesl_llvm_cbe_2015_count = 0;
  static  unsigned long long aesl_llvm_cbe_2016_count = 0;
  static  unsigned long long aesl_llvm_cbe_2017_count = 0;
  static  unsigned long long aesl_llvm_cbe_2018_count = 0;
  static  unsigned long long aesl_llvm_cbe_2019_count = 0;
  static  unsigned long long aesl_llvm_cbe_2020_count = 0;
  static  unsigned long long aesl_llvm_cbe_2021_count = 0;
  static  unsigned long long aesl_llvm_cbe_2022_count = 0;
  static  unsigned long long aesl_llvm_cbe_2023_count = 0;
  static  unsigned long long aesl_llvm_cbe_2024_count = 0;
  static  unsigned long long aesl_llvm_cbe_2025_count = 0;
  static  unsigned long long aesl_llvm_cbe_2026_count = 0;
  static  unsigned long long aesl_llvm_cbe_2027_count = 0;
  static  unsigned long long aesl_llvm_cbe_2028_count = 0;
  static  unsigned long long aesl_llvm_cbe_2029_count = 0;
  static  unsigned long long aesl_llvm_cbe_2030_count = 0;
  static  unsigned long long aesl_llvm_cbe_2031_count = 0;
  static  unsigned long long aesl_llvm_cbe_2032_count = 0;
  static  unsigned long long aesl_llvm_cbe_2033_count = 0;
  static  unsigned long long aesl_llvm_cbe_2034_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2035_count = 0;
  static  unsigned long long aesl_llvm_cbe_2036_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_S3_inv\n");
  llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__403;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__403:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge27 = phi i32 [ 1, %%0 ], [ %%4, %%1  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge27_count);
  llvm_cbe_storemerge27 = (unsigned int )llvm_cbe_storemerge27__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge27 = 0x%X",llvm_cbe_storemerge27);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__298);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge27 to i64, !dbg !15 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1328_count);
  llvm_cbe_tmp__296 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge27);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__296);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%2, !dbg !15 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1329_count);
  llvm_cbe_tmp__297 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__296))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__296));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%3, align 2, !dbg !15 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1330_count);
  *llvm_cbe_tmp__297 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add nsw i32 %%storemerge27, 1, !dbg !15 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1331_count);
  llvm_cbe_tmp__298 = (unsigned int )((unsigned int )(llvm_cbe_storemerge27&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__298&4294967295ull)));
  if (((llvm_cbe_tmp__298&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__404;
  } else {
    llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__298;   /* for PHI node */
    goto llvm_cbe_tmp__403;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__404:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 0, !dbg !17 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1368_count);
  llvm_cbe_tmp__299 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 1, i16* %%6, align 2, !dbg !17 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1369_count);
  *llvm_cbe_tmp__299 = ((unsigned short )1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )1));
  llvm_cbe_storemerge126__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__405;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__405:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge126 = phi i32 [ 0, %%5 ], [ %%10, %%7  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge126_count);
  llvm_cbe_storemerge126 = (unsigned int )llvm_cbe_storemerge126__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge126 = 0x%X",llvm_cbe_storemerge126);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__302);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%storemerge126 to i64, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1406_count);
  llvm_cbe_tmp__300 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge126);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__300);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%8, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1407_count);
  llvm_cbe_tmp__301 = (signed short *)(&llvm_cbe_c.field0[(((signed long long )llvm_cbe_tmp__300))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__300));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%9, align 2, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1408_count);
  *llvm_cbe_tmp__301 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge126, 1, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1409_count);
  llvm_cbe_tmp__302 = (unsigned int )((unsigned int )(llvm_cbe_storemerge126&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__302&4294967295ull)));
  if (((llvm_cbe_tmp__302&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge225__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader24;
  } else {
    llvm_cbe_storemerge126__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__302;   /* for PHI node */
    goto llvm_cbe_tmp__405;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader24' to make GCC happy */
llvm_cbe__2e_preheader24:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge225 = phi i32 [ %%15, %%.preheader24 ], [ 0, %%7  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge225_count);
  llvm_cbe_storemerge225 = (unsigned int )llvm_cbe_storemerge225__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge225 = 0x%X",llvm_cbe_storemerge225);
printf("\n = 0x%X",llvm_cbe_tmp__307);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%storemerge225 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1446_count);
  llvm_cbe_tmp__303 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge225);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__303);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%11, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1447_count);
  llvm_cbe_tmp__304 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__303))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i16* %%12, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1448_count);
  llvm_cbe_tmp__305 = (unsigned short )*llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 %%11, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1449_count);
  llvm_cbe_tmp__306 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )llvm_cbe_tmp__303))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__303));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%13, i16* %%14, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1450_count);
  *llvm_cbe_tmp__306 = llvm_cbe_tmp__305;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add nsw i32 %%storemerge225, 1, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1451_count);
  llvm_cbe_tmp__307 = (unsigned int )((unsigned int )(llvm_cbe_storemerge225&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__307&4294967295ull)));
  if (((llvm_cbe_tmp__307&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge323__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader22;
  } else {
    llvm_cbe_storemerge225__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__307;   /* for PHI node */
    goto llvm_cbe__2e_preheader24;
  }

  } while (1); /* end of syntactic loop '.preheader24' */
llvm_cbe__2e_preheader20:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.poly* %%g, i64 0, i32 0, i64 0, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1494_count);
  llvm_cbe_tmp__308 = (signed short *)(&llvm_cbe_g.field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 0, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1495_count);
  llvm_cbe_tmp__309 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge421__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__313__PHI_TEMPORARY = (unsigned short )((unsigned short )0);   /* for PHI node */
  llvm_cbe_tmp__314__PHI_TEMPORARY = (unsigned short )((unsigned short )676);   /* for PHI node */
  llvm_cbe_tmp__315__PHI_TEMPORARY = (unsigned short )((unsigned short )676);   /* for PHI node */
  llvm_cbe_tmp__316__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__406;

  do {     /* Syntactic loop '.preheader22' to make GCC happy */
llvm_cbe__2e_preheader22:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge323 = phi i32 [ %%20, %%.preheader22 ], [ 0, %%.preheader24  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge323_count);
  llvm_cbe_storemerge323 = (unsigned int )llvm_cbe_storemerge323__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge323 = 0x%X",llvm_cbe_storemerge323);
printf("\n = 0x%X",llvm_cbe_tmp__312);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%storemerge323 to i64, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1497_count);
  llvm_cbe_tmp__310 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge323);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.poly* %%g, i64 0, i32 0, i64 %%18, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1498_count);
  llvm_cbe_tmp__311 = (signed short *)(&llvm_cbe_g.field0[(((signed long long )llvm_cbe_tmp__310))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__310));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 1, i16* %%19, align 2, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1499_count);
  *llvm_cbe_tmp__311 = ((unsigned short )1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )1));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge323, 1, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1500_count);
  llvm_cbe_tmp__312 = (unsigned int )((unsigned int )(llvm_cbe_storemerge323&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__312&4294967295ull)));
  if (((llvm_cbe_tmp__312&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe__2e_preheader20;
  } else {
    llvm_cbe_storemerge323__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__312;   /* for PHI node */
    goto llvm_cbe__2e_preheader22;
  }

  } while (1); /* end of syntactic loop '.preheader22' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__406:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge421 = phi i32 [ 0, %%.preheader20 ], [ %%77, %%69  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge421_count);
  llvm_cbe_storemerge421 = (unsigned int )llvm_cbe_storemerge421__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge421 = 0x%X",llvm_cbe_storemerge421);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__365);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = phi i16 [ 0, %%.preheader20 ], [ %%72, %%69  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1537_count);
  llvm_cbe_tmp__313 = (unsigned short )llvm_cbe_tmp__313__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__313);
printf("\n = 0x%X",((unsigned short )0));
printf("\n = 0x%X",llvm_cbe_tmp__360);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = phi i16 [ 676, %%.preheader20 ], [ %%71, %%69  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1538_count);
  llvm_cbe_tmp__314 = (unsigned short )llvm_cbe_tmp__314__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__314);
printf("\n = 0x%X",((unsigned short )676));
printf("\n = 0x%X",llvm_cbe_tmp__359);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = phi i16 [ 676, %%.preheader20 ], [ %%47, %%69  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1539_count);
  llvm_cbe_tmp__315 = (unsigned short )llvm_cbe_tmp__315__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__315);
printf("\n = 0x%X",((unsigned short )676));
printf("\n = 0x%X",llvm_cbe_tmp__337);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = phi i32 [ 0, %%.preheader20 ], [ %%76, %%69  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1540_count);
  llvm_cbe_tmp__316 = (unsigned int )llvm_cbe_tmp__316__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__316);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__364);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i16* %%16, align 2, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1541_count);
  llvm_cbe_tmp__317 = (unsigned short )*llvm_cbe_tmp__308;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i16* %%17, align 2, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1542_count);
  llvm_cbe_tmp__318 = (unsigned short )*llvm_cbe_tmp__309;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__318);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = shl i16 %%26, 1, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1543_count);
  llvm_cbe_tmp__319 = (unsigned short )((unsigned short )(llvm_cbe_tmp__317 << ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__319);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = mul i16 %%28, %%27, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1544_count);
  llvm_cbe_tmp__320 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__319&65535ull)) * ((unsigned short )(llvm_cbe_tmp__318&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__320&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = call zeroext i16 @mod3(i16 zeroext %%29), !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1545_count);
  llvm_cbe_tmp__321 = (unsigned short )mod3(llvm_cbe_tmp__320);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__320);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__321);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = zext i16 %%30 to i32, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1546_count);
  llvm_cbe_tmp__322 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__321&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__322);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = lshr i32 %%31, 1, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1552_count);
  llvm_cbe_tmp__323 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__322&4294967295ull)) >> ((unsigned int )(1u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__323&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = or i32 %%32, %%31, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1553_count);
  llvm_cbe_tmp__324 = (unsigned int )llvm_cbe_tmp__323 | llvm_cbe_tmp__322;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__324);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = zext i1 %%34 to i32, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1555_count);
  llvm_cbe_tmp__325 = (unsigned int )((unsigned int )(bool )((llvm_cbe_tmp__316&4294967295U) == (0u&4294967295U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = zext i16 %%23 to i32, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1556_count);
  llvm_cbe_tmp__326 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__314&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i16 %%24 to i32, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1557_count);
  llvm_cbe_tmp__327 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__315&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = sub nsw i32 %%36, %%37, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1558_count);
  llvm_cbe_tmp__328 = (unsigned int )((unsigned int )(llvm_cbe_tmp__326&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__327&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__328&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = lshr i32 %%38, 15, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1559_count);
  llvm_cbe_tmp__329 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__328&4294967295ull)) >> ((unsigned int )(15u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__329&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = and i32 %%39, %%35, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1560_count);
  llvm_cbe_tmp__330 = (unsigned int )llvm_cbe_tmp__329 & llvm_cbe_tmp__325;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__330);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = and i32 %%40, %%33, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1561_count);
  llvm_cbe_tmp__331 = (unsigned int )llvm_cbe_tmp__330 & llvm_cbe_tmp__324;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_cswappoly(%%struct.poly* %%f, %%struct.poly* %%g, i32 %%41), !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1566_count);
  aesl_internal_cswappoly((l_struct_OC_poly *)(&llvm_cbe_f), (l_struct_OC_poly *)(&llvm_cbe_g), llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__331);
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_cswappoly(%%struct.poly* %%b, %%struct.poly* %%c, i32 %%41), !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1567_count);
  aesl_internal_cswappoly((l_struct_OC_poly *)(&llvm_cbe_b), (l_struct_OC_poly *)(&llvm_cbe_c), llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__331);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = xor i16 %%23, %%24, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1568_count);
  llvm_cbe_tmp__332 = (unsigned short )((unsigned short )(llvm_cbe_tmp__314 ^ llvm_cbe_tmp__315));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__332);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = trunc i32 %%41 to i16, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1569_count);
  llvm_cbe_tmp__333 = (unsigned short )((unsigned short )llvm_cbe_tmp__331&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__333);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = sub i16 0, %%43, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1570_count);
  llvm_cbe_tmp__334 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__333)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__334&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = and i16 %%42, %%44, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1572_count);
  llvm_cbe_tmp__335 = (unsigned short )((unsigned short )(llvm_cbe_tmp__332 & llvm_cbe_tmp__334));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = xor i16 %%45, %%23, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1573_count);
  llvm_cbe_tmp__336 = (unsigned short )((unsigned short )(llvm_cbe_tmp__335 ^ llvm_cbe_tmp__314));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__336);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = xor i16 %%45, %%24, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1581_count);
  llvm_cbe_tmp__337 = (unsigned short )((unsigned short )(llvm_cbe_tmp__335 ^ llvm_cbe_tmp__315));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__337);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = sext i1 %%34 to i16, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1621_count);
  llvm_cbe_tmp__338 = (unsigned short )((signed short )(0-((llvm_cbe_tmp__316&4294967295U) == (0u&4294967295U))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__338);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = and i16 %%30, %%48, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1622_count);
  llvm_cbe_tmp__339 = (unsigned short )((unsigned short )(llvm_cbe_tmp__321 & llvm_cbe_tmp__338));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__339);
  llvm_cbe_storemerge919__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__407;

llvm_cbe_tmp__408:
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_poly_divx(%%struct.poly* %%f, i32 %%35), !dbg !14 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1716_count);
  aesl_internal_poly_divx((l_struct_OC_poly *)(&llvm_cbe_f), llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__325);
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_poly_mulx(%%struct.poly* %%c, i32 %%35), !dbg !14 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1717_count);
  aesl_internal_poly_mulx((l_struct_OC_poly *)(&llvm_cbe_c), llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__325);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = zext i1 %%34 to i16, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1718_count);
  llvm_cbe_tmp__358 = (unsigned short )((unsigned short )(bool )((llvm_cbe_tmp__316&4294967295U) == (0u&4294967295U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__358);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = sub i16 %%46, %%70, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1719_count);
  llvm_cbe_tmp__359 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__336&65535ull)) - ((unsigned short )(llvm_cbe_tmp__358&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__359&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = add i16 %%22, %%70, !dbg !11 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1726_count);
  llvm_cbe_tmp__360 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__313&65535ull)) + ((unsigned short )(llvm_cbe_tmp__358&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__360&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = sub i16 0, %%71, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1733_count);
  llvm_cbe_tmp__361 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__359)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__361&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = zext i16 %%73 to i32, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1734_count);
  llvm_cbe_tmp__362 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__361&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__362);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = lshr i32 %%74, 15, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1735_count);
  llvm_cbe_tmp__363 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__362&4294967295ull)) >> ((unsigned int )(15u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__363&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = xor i32 %%75, 1, !dbg !12 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1736_count);
  llvm_cbe_tmp__364 = (unsigned int )llvm_cbe_tmp__363 ^ 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__364);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = add nsw i32 %%storemerge421, 1, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1745_count);
  llvm_cbe_tmp__365 = (unsigned int )((unsigned int )(llvm_cbe_storemerge421&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__365&4294967295ull)));
  if (((llvm_cbe_tmp__365&4294967295U) == (1351u&4294967295U))) {
    goto llvm_cbe_tmp__409;
  } else {
    llvm_cbe_storemerge421__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__365;   /* for PHI node */
    llvm_cbe_tmp__313__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__360;   /* for PHI node */
    llvm_cbe_tmp__314__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__359;   /* for PHI node */
    llvm_cbe_tmp__315__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__337;   /* for PHI node */
    llvm_cbe_tmp__316__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__364;   /* for PHI node */
    goto llvm_cbe_tmp__406;
  }

  do {     /* Syntactic loop '.preheader17' to make GCC happy */
llvm_cbe__2e_preheader17:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1018 = phi i32 [ %%68, %%.preheader17 ], [ 0, %%50  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge1018_count);
  llvm_cbe_storemerge1018 = (unsigned int )llvm_cbe_storemerge1018__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1018 = 0x%X",llvm_cbe_storemerge1018);
printf("\n = 0x%X",llvm_cbe_tmp__357);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = sext i32 %%storemerge1018 to i64, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1670_count);
  llvm_cbe_tmp__349 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1018);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__349);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%60, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1671_count);
  llvm_cbe_tmp__350 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__349))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__349));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i16* %%61, align 2, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1672_count);
  llvm_cbe_tmp__351 = (unsigned short )*llvm_cbe_tmp__350;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__351);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds %%struct.poly* %%c, i64 0, i32 0, i64 %%60, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1673_count);
  llvm_cbe_tmp__352 = (signed short *)(&llvm_cbe_c.field0[(((signed long long )llvm_cbe_tmp__349))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__349));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i16* %%63, align 2, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1674_count);
  llvm_cbe_tmp__353 = (unsigned short )*llvm_cbe_tmp__352;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__353);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = mul i16 %%64, %%49, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1675_count);
  llvm_cbe_tmp__354 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__353&65535ull)) * ((unsigned short )(llvm_cbe_tmp__339&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__354&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = add i16 %%65, %%62, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1676_count);
  llvm_cbe_tmp__355 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__354&65535ull)) + ((unsigned short )(llvm_cbe_tmp__351&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__355&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = call zeroext i16 @mod3(i16 zeroext %%66), !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1677_count);
  llvm_cbe_tmp__356 = (unsigned short )mod3(llvm_cbe_tmp__355);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__355);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__356);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%67, i16* %%61, align 2, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1678_count);
  *llvm_cbe_tmp__350 = llvm_cbe_tmp__356;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__356);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = add nsw i32 %%storemerge1018, 1, !dbg !17 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1679_count);
  llvm_cbe_tmp__357 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1018&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__357&4294967295ull)));
  if (((llvm_cbe_tmp__357&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__408;
  } else {
    llvm_cbe_storemerge1018__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__357;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  }

  } while (1); /* end of syntactic loop '.preheader17' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__407:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge919 = phi i32 [ 0, %%21 ], [ %%59, %%50  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge919_count);
  llvm_cbe_storemerge919 = (unsigned int )llvm_cbe_storemerge919__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge919 = 0x%X",llvm_cbe_storemerge919);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__348);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = sext i32 %%storemerge919 to i64, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1624_count);
  llvm_cbe_tmp__340 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge919);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__340);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 %%51, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1625_count);
  llvm_cbe_tmp__341 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )llvm_cbe_tmp__340))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__340));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i16* %%52, align 2, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1626_count);
  llvm_cbe_tmp__342 = (unsigned short )*llvm_cbe_tmp__341;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__342);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds %%struct.poly* %%g, i64 0, i32 0, i64 %%51, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1627_count);
  llvm_cbe_tmp__343 = (signed short *)(&llvm_cbe_g.field0[(((signed long long )llvm_cbe_tmp__340))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__340));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i16* %%54, align 2, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1628_count);
  llvm_cbe_tmp__344 = (unsigned short )*llvm_cbe_tmp__343;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = mul i16 %%55, %%49, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1629_count);
  llvm_cbe_tmp__345 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__344&65535ull)) * ((unsigned short )(llvm_cbe_tmp__339&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__345&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = add i16 %%56, %%53, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1630_count);
  llvm_cbe_tmp__346 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__345&65535ull)) + ((unsigned short )(llvm_cbe_tmp__342&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__346&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = call zeroext i16 @mod3(i16 zeroext %%57), !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1631_count);
  llvm_cbe_tmp__347 = (unsigned short )mod3(llvm_cbe_tmp__346);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__346);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__347);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%58, i16* %%52, align 2, !dbg !13 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1632_count);
  *llvm_cbe_tmp__341 = llvm_cbe_tmp__347;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__347);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%storemerge919, 1, !dbg !16 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1633_count);
  llvm_cbe_tmp__348 = (unsigned int )((unsigned int )(llvm_cbe_storemerge919&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__348&4294967295ull)));
  if (((llvm_cbe_tmp__348&4294967295U) == (677u&4294967295U))) {
    llvm_cbe_storemerge1018__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader17;
  } else {
    llvm_cbe_storemerge919__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__348;   /* for PHI node */
    goto llvm_cbe_tmp__407;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__409:
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load i16* %%17, align 2, !dbg !19 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1754_count);
  llvm_cbe_tmp__366 = (unsigned short )*llvm_cbe_tmp__309;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__366);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = sub i16 676, %%72, !dbg !11 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1755_count);
  llvm_cbe_tmp__367 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )676)&65535ull)) - ((unsigned short )(llvm_cbe_tmp__360&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__367&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = ashr i16 %%80, 15, !dbg !11 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1756_count);
  llvm_cbe_tmp__368 = (unsigned short )((unsigned short )(((signed short )(((signed short )llvm_cbe_tmp__367) >> ((signed short )((unsigned short )15))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed short )llvm_cbe_tmp__368));
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = and i16 %%81, 677, !dbg !11 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1757_count);
  llvm_cbe_tmp__369 = (unsigned short )((unsigned short )(llvm_cbe_tmp__368 & ((unsigned short )677)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__369);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = sub i16 %%72, %%82, !dbg !11 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1758_count);
  llvm_cbe_tmp__370 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__360&65535ull)) - ((unsigned short )(llvm_cbe_tmp__369&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__370&65535ull)));
  llvm_cbe_storemerge516__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__410;

llvm_cbe__2e_preheader14:
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = bitcast %%struct.poly* %%r to i8*, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1835_count);
  llvm_cbe_tmp__371 = ( char *)(( char *)llvm_cbe_r);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = bitcast %%struct.poly* %%f to i8*, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1836_count);
  llvm_cbe_tmp__372 = ( char *)(( char *)(&llvm_cbe_f));
  llvm_cbe_storemerge615__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__380__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__370;   /* for PHI node */
  goto llvm_cbe__2e_preheader12;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__410:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge516 = phi i32 [ 0, %%78 ], [ %%93, %%86  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge516_count);
  llvm_cbe_storemerge516 = (unsigned int )llvm_cbe_storemerge516__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge516 = 0x%X",llvm_cbe_storemerge516);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__379);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = sext i32 %%storemerge516 to i64, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1838_count);
  llvm_cbe_tmp__373 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge516);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__373);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%87, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1839_count);
  llvm_cbe_tmp__374 = (signed short *)(&llvm_cbe_b.field0[(((signed long long )llvm_cbe_tmp__373))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__373));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load i16* %%88, align 2, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1840_count);
  llvm_cbe_tmp__375 = (unsigned short )*llvm_cbe_tmp__374;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = mul i16 %%89, %%79, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1841_count);
  llvm_cbe_tmp__376 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__375&65535ull)) * ((unsigned short )(llvm_cbe_tmp__366&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__376&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = call zeroext i16 @mod3(i16 zeroext %%90), !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1842_count);
  llvm_cbe_tmp__377 = (unsigned short )mod3(llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__376);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__377);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%87, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1843_count);
  llvm_cbe_tmp__378 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__373))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__373));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%91, i16* %%92, align 2, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1844_count);
  *llvm_cbe_tmp__378 = llvm_cbe_tmp__377;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__377);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = add nsw i32 %%storemerge516, 1, !dbg !17 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1845_count);
  llvm_cbe_tmp__379 = (unsigned int )((unsigned int )(llvm_cbe_storemerge516&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__379&4294967295ull)));
  if (((llvm_cbe_tmp__379&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe__2e_preheader14;
  } else {
    llvm_cbe_storemerge516__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__379;   /* for PHI node */
    goto llvm_cbe_tmp__410;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader12' to make GCC happy */
llvm_cbe__2e_preheader12:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge615 = phi i32 [ 0, %%.preheader14 ], [ %%110, %%106  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge615_count);
  llvm_cbe_storemerge615 = (unsigned int )llvm_cbe_storemerge615__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge615 = 0x%X",llvm_cbe_storemerge615);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__394);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = phi i16 [ %%83, %%.preheader14 ], [ %%109, %%106  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1882_count);
  llvm_cbe_tmp__380 = (unsigned short )llvm_cbe_tmp__380__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__380);
printf("\n = 0x%X",llvm_cbe_tmp__370);
printf("\n = 0x%X",llvm_cbe_tmp__393);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = shl i32 1, %%storemerge615, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1889_count);
  llvm_cbe_tmp__381 = (unsigned int )1u << llvm_cbe_storemerge615;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__381);
  llvm_cbe_storemerge813__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__411;

llvm_cbe_tmp__412:
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = trunc i16 %%94 to i8, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1944_count);
  llvm_cbe_tmp__391 = (unsigned char )((unsigned char )llvm_cbe_tmp__380&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__391);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = and i8 %%107, 1, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1945_count);
  llvm_cbe_tmp__392 = (unsigned char )((unsigned char )(llvm_cbe_tmp__391 & ((unsigned char )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__392);
if (AESL_DEBUG_TRACE)
printf("\n  call void @cmov(i8* %%84, i8* %%85, i64 1354, i8 zeroext %%108) nounwind, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1946_count);
  cmov(( char *)llvm_cbe_tmp__371, ( char *)llvm_cbe_tmp__372, 1354ull, llvm_cbe_tmp__392);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1354ull);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__392);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = lshr i16 %%94, 1, !dbg !11 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1947_count);
  llvm_cbe_tmp__393 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__380&65535ull)) >> ((unsigned short )(((unsigned short )1)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__393&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = add nsw i32 %%storemerge615, 1, !dbg !17 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1954_count);
  llvm_cbe_tmp__394 = (unsigned int )((unsigned int )(llvm_cbe_storemerge615&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__394&4294967295ull)));
  if (((llvm_cbe_tmp__394&4294967295U) == (10u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge615__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__394;   /* for PHI node */
    llvm_cbe_tmp__380__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__393;   /* for PHI node */
    goto llvm_cbe__2e_preheader12;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__411:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge813 = phi i32 [ 0, %%.preheader12 ], [ %%105, %%97  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge813_count);
  llvm_cbe_storemerge813 = (unsigned int )llvm_cbe_storemerge813__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge813 = 0x%X",llvm_cbe_storemerge813);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__390);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = add nsw i32 %%storemerge813, %%95, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1927_count);
  llvm_cbe_tmp__383 = (unsigned int )((unsigned int )(llvm_cbe_storemerge813&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__381&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__383&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = srem i32 %%98, 677, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1928_count);
  llvm_cbe_tmp__384 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__383) % ((signed int )677u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__384));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = sext i32 %%99 to i64, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1929_count);
  llvm_cbe_tmp__385 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__384);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__385);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%100, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1930_count);
  llvm_cbe_tmp__386 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__385))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__385));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load i16* %%101, align 2, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1931_count);
  llvm_cbe_tmp__387 = (unsigned short )*llvm_cbe_tmp__386;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = sext i32 %%storemerge813 to i64, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1932_count);
  llvm_cbe_tmp__388 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge813);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__388);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = getelementptr inbounds %%struct.poly* %%f, i64 0, i32 0, i64 %%103, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1933_count);
  llvm_cbe_tmp__389 = (signed short *)(&llvm_cbe_f.field0[(((signed long long )llvm_cbe_tmp__388))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__388));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%102, i16* %%104, align 2, !dbg !9 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1934_count);
  *llvm_cbe_tmp__389 = llvm_cbe_tmp__387;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = add nsw i32 %%storemerge813, 1, !dbg !18 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1935_count);
  llvm_cbe_tmp__390 = (unsigned int )((unsigned int )(llvm_cbe_storemerge813&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__390&4294967295ull)));
  if (((llvm_cbe_tmp__390&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__412;
  } else {
    llvm_cbe_storemerge813__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__390;   /* for PHI node */
    goto llvm_cbe_tmp__411;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader12' */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1925_count);
  llvm_cbe_tmp__382 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge711__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__413;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__413:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge711 = phi i32 [ 0, %%.preheader ], [ %%119, %%111  for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_storemerge711_count);
  llvm_cbe_storemerge711 = (unsigned int )llvm_cbe_storemerge711__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge711 = 0x%X",llvm_cbe_storemerge711);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__402);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = sext i32 %%storemerge711 to i64, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1991_count);
  llvm_cbe_tmp__395 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge711);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__395);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%112, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1992_count);
  llvm_cbe_tmp__396 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__395))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__395));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = load i16* %%113, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1993_count);
  llvm_cbe_tmp__397 = (unsigned short )*llvm_cbe_tmp__396;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__397);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = load i16* %%96, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1994_count);
  llvm_cbe_tmp__398 = (unsigned short )*llvm_cbe_tmp__382;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__398);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = shl i16 %%115, 1, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1995_count);
  llvm_cbe_tmp__399 = (unsigned short )((unsigned short )(llvm_cbe_tmp__398 << ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__399);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = add i16 %%116, %%114, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1996_count);
  llvm_cbe_tmp__400 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__399&65535ull)) + ((unsigned short )(llvm_cbe_tmp__397&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__400&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = call zeroext i16 @mod3(i16 zeroext %%117), !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1997_count);
  llvm_cbe_tmp__401 = (unsigned short )mod3(llvm_cbe_tmp__400);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__400);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__401);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%118, i16* %%113, align 2, !dbg !10 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1998_count);
  *llvm_cbe_tmp__396 = llvm_cbe_tmp__401;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__401);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = add nsw i32 %%storemerge711, 1, !dbg !17 for 0x%I64xth hint within @poly_S3_inv  --> \n", ++aesl_llvm_cbe_1999_count);
  llvm_cbe_tmp__402 = (unsigned int )((unsigned int )(llvm_cbe_storemerge711&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__402&4294967295ull)));
  if (((llvm_cbe_tmp__402&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__414;
  } else {
    llvm_cbe_storemerge711__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__402;   /* for PHI node */
    goto llvm_cbe_tmp__413;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__414:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_S3_inv}\n");
  return;
}


static void aesl_internal_cswappoly(l_struct_OC_poly *llvm_cbe_a, l_struct_OC_poly *llvm_cbe_b, signed int llvm_cbe_swap) {
  static  unsigned long long aesl_llvm_cbe_2037_count = 0;
  static  unsigned long long aesl_llvm_cbe_2038_count = 0;
  static  unsigned long long aesl_llvm_cbe_2039_count = 0;
  static  unsigned long long aesl_llvm_cbe_2040_count = 0;
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
  unsigned short llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_2045_count = 0;
  static  unsigned long long aesl_llvm_cbe_2046_count = 0;
  static  unsigned long long aesl_llvm_cbe_2047_count = 0;
  static  unsigned long long aesl_llvm_cbe_2048_count = 0;
  static  unsigned long long aesl_llvm_cbe_2049_count = 0;
  static  unsigned long long aesl_llvm_cbe_2050_count = 0;
  static  unsigned long long aesl_llvm_cbe_2051_count = 0;
  static  unsigned long long aesl_llvm_cbe_2052_count = 0;
  unsigned short llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_2053_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2054_count = 0;
  unsigned long long llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_2055_count = 0;
  signed short *llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_2056_count = 0;
  unsigned short llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_2057_count = 0;
  signed short *llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_2058_count = 0;
  unsigned short llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_2059_count = 0;
  unsigned short llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_2060_count = 0;
  unsigned short llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_2061_count = 0;
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  unsigned short llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  unsigned short llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  unsigned short llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  unsigned int llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_cswappoly\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = trunc i32 %%swap to i16, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2044_count);
  llvm_cbe_tmp__415 = (unsigned short )((unsigned short )llvm_cbe_swap&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__415);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sub i16 0, %%1, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2052_count);
  llvm_cbe_tmp__416 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__415)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__416&65535ull)));
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__428;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__428:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%14, %%3  for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__427);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2054_count);
  llvm_cbe_tmp__417 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__417);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%4, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2055_count);
  llvm_cbe_tmp__418 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__417))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__417));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i16* %%5, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2056_count);
  llvm_cbe_tmp__419 = (unsigned short )*llvm_cbe_tmp__418;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__419);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.poly* %%b, i64 0, i32 0, i64 %%4, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2057_count);
  llvm_cbe_tmp__420 = (signed short *)(&llvm_cbe_b->field0[(((signed long long )llvm_cbe_tmp__417))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__417));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i16* %%7, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2058_count);
  llvm_cbe_tmp__421 = (unsigned short )*llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__421);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = xor i16 %%8, %%6, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2059_count);
  llvm_cbe_tmp__422 = (unsigned short )((unsigned short )(llvm_cbe_tmp__421 ^ llvm_cbe_tmp__419));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__422);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = and i16 %%9, %%2, !dbg !9 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2060_count);
  llvm_cbe_tmp__423 = (unsigned short )((unsigned short )(llvm_cbe_tmp__422 & llvm_cbe_tmp__416));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__423);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = xor i16 %%10, %%6, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2064_count);
  llvm_cbe_tmp__424 = (unsigned short )((unsigned short )(llvm_cbe_tmp__423 ^ llvm_cbe_tmp__419));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__424);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%11, i16* %%5, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2065_count);
  *llvm_cbe_tmp__418 = llvm_cbe_tmp__424;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__424);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i16* %%7, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2066_count);
  llvm_cbe_tmp__425 = (unsigned short )*llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__425);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = xor i16 %%10, %%12, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2067_count);
  llvm_cbe_tmp__426 = (unsigned short )((unsigned short )(llvm_cbe_tmp__423 ^ llvm_cbe_tmp__425));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__426);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%13, i16* %%7, align 2, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2068_count);
  *llvm_cbe_tmp__420 = llvm_cbe_tmp__426;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__426);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @aesl_internal_cswappoly  --> \n", ++aesl_llvm_cbe_2069_count);
  llvm_cbe_tmp__427 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__427&4294967295ull)));
  if (((llvm_cbe_tmp__427&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__429;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__427;   /* for PHI node */
    goto llvm_cbe_tmp__428;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__429:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_cswappoly}\n");
  return;
}


static void aesl_internal_poly_divx(l_struct_OC_poly *llvm_cbe_a, signed int llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;
  static  unsigned long long aesl_llvm_cbe_2087_count = 0;
  static  unsigned long long aesl_llvm_cbe_2088_count = 0;
  static  unsigned long long aesl_llvm_cbe_2089_count = 0;
  static  unsigned long long aesl_llvm_cbe_2090_count = 0;
  static  unsigned long long aesl_llvm_cbe_2091_count = 0;
  static  unsigned long long aesl_llvm_cbe_2092_count = 0;
  static  unsigned long long aesl_llvm_cbe_2093_count = 0;
  static  unsigned long long aesl_llvm_cbe_2094_count = 0;
  static  unsigned long long aesl_llvm_cbe_2095_count = 0;
  static  unsigned long long aesl_llvm_cbe_2096_count = 0;
  unsigned int llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_2097_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2098_count = 0;
  unsigned long long llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_2099_count = 0;
  signed short *llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_2100_count = 0;
  unsigned short llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_2101_count = 0;
  unsigned int llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_2102_count = 0;
  unsigned int llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_2103_count = 0;
  unsigned int llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_2104_count = 0;
  unsigned long long llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_2105_count = 0;
  signed short *llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_2106_count = 0;
  unsigned short llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_2107_count = 0;
  unsigned int llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_2108_count = 0;
  unsigned int llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_2109_count = 0;
  unsigned int llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_2110_count = 0;
  unsigned short llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_2111_count = 0;
  static  unsigned long long aesl_llvm_cbe_2112_count = 0;
  unsigned int llvm_cbe_tmp__444;
  static  unsigned long long aesl_llvm_cbe_2113_count = 0;
  static  unsigned long long aesl_llvm_cbe_2114_count = 0;
  static  unsigned long long aesl_llvm_cbe_2115_count = 0;
  static  unsigned long long aesl_llvm_cbe_2116_count = 0;
  static  unsigned long long aesl_llvm_cbe_2117_count = 0;
  static  unsigned long long aesl_llvm_cbe_2118_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2119_count = 0;
  static  unsigned long long aesl_llvm_cbe_2120_count = 0;
  signed short *llvm_cbe_tmp__445;
  static  unsigned long long aesl_llvm_cbe_2121_count = 0;
  unsigned short llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_2122_count = 0;
  unsigned short llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_2123_count = 0;
  unsigned short llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_2124_count = 0;
  static  unsigned long long aesl_llvm_cbe_2125_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_poly_divx\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i1 %%1 to i32, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2096_count);
  llvm_cbe_tmp__430 = (unsigned int )((signed int )(0-((llvm_cbe_s&4294967295U) == (0u&4294967295U))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__430);
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__449;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__449:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 1, %%0 ], [ %%17, %%3  for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__444);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2098_count);
  llvm_cbe_tmp__431 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__431);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%4, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2099_count);
  llvm_cbe_tmp__432 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__431))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__431));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i16* %%5, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2100_count);
  llvm_cbe_tmp__433 = (unsigned short )*llvm_cbe_tmp__432;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__433);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i16 %%6 to i32, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2101_count);
  llvm_cbe_tmp__434 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__433&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__434);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = mul nsw i32 %%7, %%s, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2102_count);
  llvm_cbe_tmp__435 = (unsigned int )((unsigned int )(llvm_cbe_tmp__434&4294967295ull)) * ((unsigned int )(llvm_cbe_s&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__435&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge1, -1, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2103_count);
  llvm_cbe_tmp__436 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__436&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%9 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2104_count);
  llvm_cbe_tmp__437 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__436);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__437);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%10, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2105_count);
  llvm_cbe_tmp__438 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__437))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__437));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i16* %%11, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2106_count);
  llvm_cbe_tmp__439 = (unsigned short )*llvm_cbe_tmp__438;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__439);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i16 %%12 to i32, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2107_count);
  llvm_cbe_tmp__440 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__439&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__440);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = and i32 %%13, %%2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2108_count);
  llvm_cbe_tmp__441 = (unsigned int )llvm_cbe_tmp__440 & llvm_cbe_tmp__430;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__441);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = or i32 %%14, %%8, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2109_count);
  llvm_cbe_tmp__442 = (unsigned int )llvm_cbe_tmp__441 | llvm_cbe_tmp__435;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = trunc i32 %%15 to i16, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2110_count);
  llvm_cbe_tmp__443 = (unsigned short )((unsigned short )llvm_cbe_tmp__442&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__443);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%16, i16* %%11, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2111_count);
  *llvm_cbe_tmp__438 = llvm_cbe_tmp__443;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__443);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2112_count);
  llvm_cbe_tmp__444 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__444&4294967295ull)));
  if (((llvm_cbe_tmp__444&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__450;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__444;   /* for PHI node */
    goto llvm_cbe_tmp__449;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__450:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 676, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2120_count);
  llvm_cbe_tmp__445 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i16* %%19, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2121_count);
  llvm_cbe_tmp__446 = (unsigned short )*llvm_cbe_tmp__445;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__446);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i1 %%1 to i16, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2122_count);
  llvm_cbe_tmp__447 = (unsigned short )((signed short )(0-((llvm_cbe_s&4294967295U) == (0u&4294967295U))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__447);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = and i16 %%20, %%21, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2123_count);
  llvm_cbe_tmp__448 = (unsigned short )((unsigned short )(llvm_cbe_tmp__446 & llvm_cbe_tmp__447));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%22, i16* %%19, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_divx  --> \n", ++aesl_llvm_cbe_2124_count);
  *llvm_cbe_tmp__445 = llvm_cbe_tmp__448;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__448);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_poly_divx}\n");
  return;
}


static void aesl_internal_poly_mulx(l_struct_OC_poly *llvm_cbe_a, signed int llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_2126_count = 0;
  static  unsigned long long aesl_llvm_cbe_2127_count = 0;
  static  unsigned long long aesl_llvm_cbe_2128_count = 0;
  static  unsigned long long aesl_llvm_cbe_2129_count = 0;
  static  unsigned long long aesl_llvm_cbe_2130_count = 0;
  static  unsigned long long aesl_llvm_cbe_2131_count = 0;
  static  unsigned long long aesl_llvm_cbe_2132_count = 0;
  static  unsigned long long aesl_llvm_cbe_2133_count = 0;
  static  unsigned long long aesl_llvm_cbe_2134_count = 0;
  static  unsigned long long aesl_llvm_cbe_2135_count = 0;
  static  unsigned long long aesl_llvm_cbe_2136_count = 0;
  static  unsigned long long aesl_llvm_cbe_2137_count = 0;
  static  unsigned long long aesl_llvm_cbe_2138_count = 0;
  static  unsigned long long aesl_llvm_cbe_2139_count = 0;
  static  unsigned long long aesl_llvm_cbe_2140_count = 0;
  static  unsigned long long aesl_llvm_cbe_2141_count = 0;
  static  unsigned long long aesl_llvm_cbe_2142_count = 0;
  static  unsigned long long aesl_llvm_cbe_2143_count = 0;
  unsigned int llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_2144_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2145_count = 0;
  unsigned int llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_2146_count = 0;
  unsigned int llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_2147_count = 0;
  unsigned long long llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_2148_count = 0;
  signed short *llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_2149_count = 0;
  unsigned short llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_2150_count = 0;
  unsigned int llvm_cbe_tmp__457;
  static  unsigned long long aesl_llvm_cbe_2151_count = 0;
  unsigned int llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_2152_count = 0;
  unsigned long long llvm_cbe_tmp__459;
  static  unsigned long long aesl_llvm_cbe_2153_count = 0;
  signed short *llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_2154_count = 0;
  unsigned short llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_2155_count = 0;
  unsigned int llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_2156_count = 0;
  unsigned int llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_2157_count = 0;
  unsigned int llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_2158_count = 0;
  unsigned short llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_2159_count = 0;
  static  unsigned long long aesl_llvm_cbe_2160_count = 0;
  unsigned int llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_2161_count = 0;
  static  unsigned long long aesl_llvm_cbe_2162_count = 0;
  static  unsigned long long aesl_llvm_cbe_2163_count = 0;
  static  unsigned long long aesl_llvm_cbe_2164_count = 0;
  static  unsigned long long aesl_llvm_cbe_2165_count = 0;
  static  unsigned long long aesl_llvm_cbe_2166_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2167_count = 0;
  static  unsigned long long aesl_llvm_cbe_2168_count = 0;
  signed short *llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_2169_count = 0;
  unsigned short llvm_cbe_tmp__468;
  static  unsigned long long aesl_llvm_cbe_2170_count = 0;
  unsigned short llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_2171_count = 0;
  unsigned short llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_2172_count = 0;
  static  unsigned long long aesl_llvm_cbe_2173_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_poly_mulx\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i1 %%1 to i32, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2143_count);
  llvm_cbe_tmp__451 = (unsigned int )((signed int )(0-((llvm_cbe_s&4294967295U) == (0u&4294967295U))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__451);
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__471;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__471:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 1, %%0 ], [ %%18, %%3  for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__466);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sub nsw i32 677, %%storemerge1, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2145_count);
  llvm_cbe_tmp__452 = (unsigned int )((unsigned int )(677u&4294967295ull)) - ((unsigned int )(llvm_cbe_storemerge1&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__452&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add nsw i32 %%4, -1, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2146_count);
  llvm_cbe_tmp__453 = (unsigned int )((unsigned int )(llvm_cbe_tmp__452&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__453&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%5 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2147_count);
  llvm_cbe_tmp__454 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__453);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__454);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%6, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2148_count);
  llvm_cbe_tmp__455 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__454))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__454));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i16* %%7, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2149_count);
  llvm_cbe_tmp__456 = (unsigned short )*llvm_cbe_tmp__455;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__456);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i16 %%8 to i32, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2150_count);
  llvm_cbe_tmp__457 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__456&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__457);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = mul nsw i32 %%9, %%s, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2151_count);
  llvm_cbe_tmp__458 = (unsigned int )((unsigned int )(llvm_cbe_tmp__457&4294967295ull)) * ((unsigned int )(llvm_cbe_s&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__458&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%4 to i64, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2152_count);
  llvm_cbe_tmp__459 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__452);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__459);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%11, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2153_count);
  llvm_cbe_tmp__460 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__459))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__459));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i16* %%12, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2154_count);
  llvm_cbe_tmp__461 = (unsigned short )*llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__461);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i16 %%13 to i32, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2155_count);
  llvm_cbe_tmp__462 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__461&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__462);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = and i32 %%14, %%2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2156_count);
  llvm_cbe_tmp__463 = (unsigned int )llvm_cbe_tmp__462 & llvm_cbe_tmp__451;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__463);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = or i32 %%15, %%10, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2157_count);
  llvm_cbe_tmp__464 = (unsigned int )llvm_cbe_tmp__463 | llvm_cbe_tmp__458;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__464);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = trunc i32 %%16 to i16, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2158_count);
  llvm_cbe_tmp__465 = (unsigned short )((unsigned short )llvm_cbe_tmp__464&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__465);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%17, i16* %%12, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2159_count);
  *llvm_cbe_tmp__460 = llvm_cbe_tmp__465;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__465);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2160_count);
  llvm_cbe_tmp__466 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__466&4294967295ull)));
  if (((llvm_cbe_tmp__466&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__472;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__466;   /* for PHI node */
    goto llvm_cbe_tmp__471;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__472:
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 0, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2168_count);
  llvm_cbe_tmp__467 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i16* %%20, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2169_count);
  llvm_cbe_tmp__468 = (unsigned short )*llvm_cbe_tmp__467;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__468);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i1 %%1 to i16, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2170_count);
  llvm_cbe_tmp__469 = (unsigned short )((signed short )(0-((llvm_cbe_s&4294967295U) == (0u&4294967295U))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__469);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = and i16 %%21, %%22, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2171_count);
  llvm_cbe_tmp__470 = (unsigned short )((unsigned short )(llvm_cbe_tmp__468 & llvm_cbe_tmp__469));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__470);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%23, i16* %%20, align 2, !dbg !9 for 0x%I64xth hint within @aesl_internal_poly_mulx  --> \n", ++aesl_llvm_cbe_2172_count);
  *llvm_cbe_tmp__467 = llvm_cbe_tmp__470;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__470);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_poly_mulx}\n");
  return;
}

