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

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int crypto_kem_keypair( char *llvm_cbe_pk,  char *llvm_cbe_sk);
signed int randombytes( char *, signed long long );
void owcpa_keypair( char *,  char *,  char *);
signed int crypto_kem_enc( char *llvm_cbe_c,  char *llvm_cbe_k,  char *llvm_cbe_pk);
void owcpa_samplemsg( char *,  char *);
void sha3_256( char *,  char *, signed long long );
void owcpa_enc( char *,  char *,  char *);
signed int crypto_kem_dec( char *llvm_cbe_k,  char *llvm_cbe_c,  char *llvm_cbe_sk);
signed int owcpa_dec( char *,  char *,  char *);
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

signed int crypto_kem_keypair( char *llvm_cbe_pk,  char *llvm_cbe_sk) {
  static  unsigned long long aesl_llvm_cbe_seed_count = 0;
   char llvm_cbe_seed[3211];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
   char *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @crypto_kem_keypair\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [3211 x i8]* %%seed, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @crypto_kem_keypair  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_seed[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3211
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i32 @randombytes(i8* %%1, i64 3211) nounwind, !dbg !5 for 0x%I64xth hint within @crypto_kem_keypair  --> \n", ++aesl_llvm_cbe_8_count);
  randombytes(( char *)llvm_cbe_tmp__1, 3211ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",3211ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @owcpa_keypair(i8* %%pk, i8* %%sk, i8* %%1) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_keypair  --> \n", ++aesl_llvm_cbe_9_count);
  owcpa_keypair(( char *)llvm_cbe_pk, ( char *)llvm_cbe_sk, ( char *)llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%sk, i64 1202, !dbg !4 for 0x%I64xth hint within @crypto_kem_keypair  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__3 = ( char *)(&llvm_cbe_sk[(((signed long long )1202ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = call i32 @randombytes(i8* %%3, i64 32) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_keypair  --> \n", ++aesl_llvm_cbe_11_count);
  randombytes(( char *)llvm_cbe_tmp__3, 32ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__4);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @crypto_kem_keypair}\n");
  return 0u;
}


signed int crypto_kem_enc( char *llvm_cbe_c,  char *llvm_cbe_k,  char *llvm_cbe_pk) {
  static  unsigned long long aesl_llvm_cbe_rm_count = 0;
   char llvm_cbe_rm[272];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_rm_seed_count = 0;
   char llvm_cbe_rm_seed[3211];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
   char *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @crypto_kem_enc\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [3211 x i8]* %%rm_seed, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @crypto_kem_enc  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__5 = ( char *)(&llvm_cbe_rm_seed[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3211
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i32 @randombytes(i8* %%1, i64 3211) nounwind, !dbg !5 for 0x%I64xth hint within @crypto_kem_enc  --> \n", ++aesl_llvm_cbe_22_count);
  randombytes(( char *)llvm_cbe_tmp__5, 3211ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",3211ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [272 x i8]* %%rm, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @crypto_kem_enc  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__7 = ( char *)(&llvm_cbe_rm[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 272
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @owcpa_samplemsg(i8* %%3, i8* %%1) nounwind, !dbg !5 for 0x%I64xth hint within @crypto_kem_enc  --> \n", ++aesl_llvm_cbe_24_count);
  owcpa_samplemsg(( char *)llvm_cbe_tmp__7, ( char *)llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha3_256(i8* %%k, i8* %%3, i64 272) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_enc  --> \n", ++aesl_llvm_cbe_25_count);
  sha3_256(( char *)llvm_cbe_k, ( char *)llvm_cbe_tmp__7, 272ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",272ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @owcpa_enc(i8* %%c, i8* %%3, i8* %%pk) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_enc  --> \n", ++aesl_llvm_cbe_26_count);
  owcpa_enc(( char *)llvm_cbe_c, ( char *)llvm_cbe_tmp__7, ( char *)llvm_cbe_pk);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @crypto_kem_enc}\n");
  return 0u;
}


signed int crypto_kem_dec( char *llvm_cbe_k,  char *llvm_cbe_c,  char *llvm_cbe_sk) {
  static  unsigned long long aesl_llvm_cbe_rm_count = 0;
   char llvm_cbe_rm[272];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_buf_count = 0;
   char llvm_cbe_buf[962];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
   char *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
   char *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  unsigned char llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
   char *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond4_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
   char *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  unsigned char llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe__2e_sum_count = 0;
  unsigned long long llvm_cbe__2e_sum;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  unsigned char llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @crypto_kem_dec\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [962 x i8]* %%buf, i64 0, i64 32, !dbg !6 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__8 = ( char *)(&llvm_cbe_buf[(((signed long long )32ull))
#ifdef AESL_BC_SIM
 % 962
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [272 x i8]* %%rm, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__9 = ( char *)(&llvm_cbe_rm[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 272
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call i32 @owcpa_dec(i8* %%2, i8* %%c, i8* %%sk) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__10 = (unsigned int )owcpa_dec(( char *)llvm_cbe_tmp__9, ( char *)llvm_cbe_c, ( char *)llvm_cbe_sk);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha3_256(i8* %%k, i8* %%2, i64 272) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_47_count);
  sha3_256(( char *)llvm_cbe_k, ( char *)llvm_cbe_tmp__9, 272ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",272ull);
}
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__24;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__24:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%11, %%4  for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__17);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add nsw i32 %%storemerge3, 1202, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__11 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1202u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__11&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%5 to i64, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__12 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i8* %%sk, i64 %%6, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__13 = ( char *)(&llvm_cbe_sk[(((signed long long )llvm_cbe_tmp__12))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__12));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i8* %%7, align 1, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__14 = (unsigned char )*llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge3 to i64, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__15 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [962 x i8]* %%buf, i64 0, i64 %%9, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__16 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__15))
#ifdef AESL_BC_SIM
 % 962
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__15));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__15) < 962 && "Write access out of array 'buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%8, i8* %%10, align 1, !dbg !5 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_64_count);
  *llvm_cbe_tmp__16 = llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add nsw i32 %%storemerge3, 1, !dbg !6 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__17 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__17&4294967295ull)));
  if (((llvm_cbe_tmp__17&4294967295U) == (32u&4294967295U))) {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__17;   /* for PHI node */
    goto llvm_cbe_tmp__24;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ %%16, %%.preheader ], [ 0, %%4  for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",llvm_cbe_tmp__22);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%storemerge12 to i64, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__18 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i8* %%c, i64 %%12, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__19 = ( char *)(&llvm_cbe_c[(((signed long long )llvm_cbe_tmp__18))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__20 = (unsigned char )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%.sum = add i64 %%12, 32, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe__2e_sum_count);
  llvm_cbe__2e_sum = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__18&18446744073709551615ull)) + ((unsigned long long )(32ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n.sum = 0x%I64X\n", ((unsigned long long )(llvm_cbe__2e_sum&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [962 x i8]* %%buf, i64 0, i64 %%.sum, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__21 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe__2e_sum))
#ifdef AESL_BC_SIM
 % 962
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n.sum = 0x%I64X",((signed long long )llvm_cbe__2e_sum));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe__2e_sum) < 962 && "Write access out of array 'buf' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%15, align 1, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_80_count);
  *llvm_cbe_tmp__21 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%storemerge12, 1, !dbg !7 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__22 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__22&4294967295ull)));
  if (((llvm_cbe_tmp__22&4294967295U) == (930u&4294967295U))) {
    goto llvm_cbe_tmp__25;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__22;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__25:
if (AESL_DEBUG_TRACE)
printf("\n  call void @sha3_256(i8* %%2, i8* %%1, i64 962) nounwind, !dbg !6 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_92_count);
  sha3_256(( char *)llvm_cbe_tmp__9, ( char *)llvm_cbe_tmp__8, 962ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",962ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = trunc i32 %%3 to i8, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__23 = (unsigned char )((unsigned char )llvm_cbe_tmp__10&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  call void @cmov(i8* %%k, i8* %%2, i64 32, i8 zeroext %%18) nounwind, !dbg !4 for 0x%I64xth hint within @crypto_kem_dec  --> \n", ++aesl_llvm_cbe_94_count);
  cmov(( char *)llvm_cbe_k, ( char *)llvm_cbe_tmp__9, 32ull, llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__23);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @crypto_kem_dec}\n");
  return 0u;
}

