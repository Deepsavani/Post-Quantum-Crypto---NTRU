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
void owcpa_samplemsg( char *llvm_cbe_msg,  char *llvm_cbe_seed);
void sample_rm(l_struct_OC_poly *, l_struct_OC_poly *,  char *);
void poly_S3_tobytes( char *, l_struct_OC_poly *);
void owcpa_keypair( char *llvm_cbe_pk,  char *llvm_cbe_sk,  char *llvm_cbe_seed);
void sample_fg(l_struct_OC_poly *, l_struct_OC_poly *,  char *);
void poly_S3_inv(l_struct_OC_poly *, l_struct_OC_poly *);
void poly_Z3_to_Zq(l_struct_OC_poly *);
void poly_Rq_mul(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void poly_Rq_inv(l_struct_OC_poly *, l_struct_OC_poly *);
void poly_Sq_mul(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
void poly_Sq_tobytes( char *, l_struct_OC_poly *);
void poly_Rq_sum_zero_tobytes( char *, l_struct_OC_poly *);
void owcpa_enc( char *llvm_cbe_c,  char *llvm_cbe_rm,  char *llvm_cbe_pk);
void poly_Rq_sum_zero_frombytes(l_struct_OC_poly *,  char *);
void poly_S3_frombytes(l_struct_OC_poly *,  char *);
void poly_lift(l_struct_OC_poly *, l_struct_OC_poly *);
signed int owcpa_dec( char *llvm_cbe_rm,  char *llvm_cbe_ciphertext,  char *llvm_cbe_secretkey);
void poly_Rq_to_S3(l_struct_OC_poly *, l_struct_OC_poly *);
void poly_S3_mul(l_struct_OC_poly *, l_struct_OC_poly *, l_struct_OC_poly *);
static signed int aesl_internal_owcpa_check_m(l_struct_OC_poly *llvm_cbe_m);
void poly_Sq_frombytes(l_struct_OC_poly *,  char *);
static signed int aesl_internal_owcpa_check_r(l_struct_OC_poly *llvm_cbe_r);
void poly_trinary_Zq_to_Z3(l_struct_OC_poly *);


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

void owcpa_samplemsg( char *llvm_cbe_msg,  char *llvm_cbe_seed) {
  static  unsigned long long aesl_llvm_cbe_r_count = 0;
  l_struct_OC_poly llvm_cbe_r;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_m_count = 0;
  l_struct_OC_poly llvm_cbe_m;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @owcpa_samplemsg\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @sample_rm(%%struct.poly* %%r, %%struct.poly* %%m, i8* %%seed) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_samplemsg  --> \n", ++aesl_llvm_cbe_8_count);
  sample_rm((l_struct_OC_poly *)(&llvm_cbe_r), (l_struct_OC_poly *)(&llvm_cbe_m), ( char *)llvm_cbe_seed);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_tobytes(i8* %%msg, %%struct.poly* %%r) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_samplemsg  --> \n", ++aesl_llvm_cbe_9_count);
  poly_S3_tobytes(( char *)llvm_cbe_msg, (l_struct_OC_poly *)(&llvm_cbe_r));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%msg, i64 136, !dbg !7 for 0x%I64xth hint within @owcpa_samplemsg  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_msg[(((signed long long )136ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_tobytes(i8* %%1, %%struct.poly* %%m) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_samplemsg  --> \n", ++aesl_llvm_cbe_11_count);
  poly_S3_tobytes(( char *)llvm_cbe_tmp__1, (l_struct_OC_poly *)(&llvm_cbe_m));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @owcpa_samplemsg}\n");
  return;
}


void owcpa_keypair( char *llvm_cbe_pk,  char *llvm_cbe_sk,  char *llvm_cbe_seed) {
  static  unsigned long long aesl_llvm_cbe_x1_count = 0;
  l_struct_OC_poly llvm_cbe_x1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x2_count = 0;
  l_struct_OC_poly llvm_cbe_x2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x3_count = 0;
  l_struct_OC_poly llvm_cbe_x3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x4_count = 0;
  l_struct_OC_poly llvm_cbe_x4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x5_count = 0;
  l_struct_OC_poly llvm_cbe_x5;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  signed short *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  unsigned short llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned short llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned short llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  signed short *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
   char *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @owcpa_keypair\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @sample_fg(%%struct.poly* %%x1, %%struct.poly* %%x3, i8* %%seed) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_68_count);
  sample_fg((l_struct_OC_poly *)(&llvm_cbe_x1), (l_struct_OC_poly *)(&llvm_cbe_x3), ( char *)llvm_cbe_seed);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_inv(%%struct.poly* %%x2, %%struct.poly* %%x1) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_69_count);
  poly_S3_inv((l_struct_OC_poly *)(&llvm_cbe_x2), (l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_tobytes(i8* %%sk, %%struct.poly* %%x1) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_70_count);
  poly_S3_tobytes(( char *)llvm_cbe_sk, (l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%sk, i64 136, !dbg !7 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__2 = ( char *)(&llvm_cbe_sk[(((signed long long )136ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_tobytes(i8* %%1, %%struct.poly* %%x2) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_72_count);
  poly_S3_tobytes(( char *)llvm_cbe_tmp__2, (l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Z3_to_Zq(%%struct.poly* %%x1) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_73_count);
  poly_Z3_to_Zq((l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Z3_to_Zq(%%struct.poly* %%x3) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_74_count);
  poly_Z3_to_Zq((l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__11;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__11:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%9, %%2  for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge1 to i64, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%x3, i64 0, i32 0, i64 %%3, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__4 = (signed short *)(&llvm_cbe_x3.field0[(((signed long long )llvm_cbe_tmp__3))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i16* %%4, align 2, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__5 = (unsigned short )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = mul i16 %%5, 3, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__6 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__5&65535ull)) * ((unsigned short )(((unsigned short )3)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__6&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i16 %%6, 2047, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__7 = (unsigned short )((unsigned short )(llvm_cbe_tmp__6 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.poly* %%x2, i64 0, i32 0, i64 %%3, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__8 = (signed short *)(&llvm_cbe_x2.field0[(((signed long long )llvm_cbe_tmp__3))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%7, i16* %%8, align 2, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_87_count);
  *llvm_cbe_tmp__8 = llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add nsw i32 %%storemerge1, 1, !dbg !11 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
  if (((llvm_cbe_tmp__9&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__12;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__9;   /* for PHI node */
    goto llvm_cbe_tmp__11;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__12:
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%x3, %%struct.poly* %%x2, %%struct.poly* %%x1) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_95_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_x3), (l_struct_OC_poly *)(&llvm_cbe_x2), (l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_inv(%%struct.poly* %%x4, %%struct.poly* %%x3) nounwind, !dbg !10 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_96_count);
  poly_Rq_inv((l_struct_OC_poly *)(&llvm_cbe_x4), (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%x5, %%struct.poly* %%x4, %%struct.poly* %%x1) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_97_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_x5), (l_struct_OC_poly *)(&llvm_cbe_x4), (l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Sq_mul(%%struct.poly* %%x3, %%struct.poly* %%x5, %%struct.poly* %%x1) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_98_count);
  poly_Sq_mul((l_struct_OC_poly *)(&llvm_cbe_x3), (l_struct_OC_poly *)(&llvm_cbe_x5), (l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%sk, i64 272, !dbg !7 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__10 = ( char *)(&llvm_cbe_sk[(((signed long long )272ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Sq_tobytes(i8* %%11, %%struct.poly* %%x3) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_100_count);
  poly_Sq_tobytes(( char *)llvm_cbe_tmp__10, (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%x5, %%struct.poly* %%x4, %%struct.poly* %%x2) nounwind, !dbg !10 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_101_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_x5), (l_struct_OC_poly *)(&llvm_cbe_x4), (l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%x3, %%struct.poly* %%x5, %%struct.poly* %%x2) nounwind, !dbg !10 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_102_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_x3), (l_struct_OC_poly *)(&llvm_cbe_x5), (l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_sum_zero_tobytes(i8* %%pk, %%struct.poly* %%x3) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_keypair  --> \n", ++aesl_llvm_cbe_103_count);
  poly_Rq_sum_zero_tobytes(( char *)llvm_cbe_pk, (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @owcpa_keypair}\n");
  return;
}


void owcpa_enc( char *llvm_cbe_c,  char *llvm_cbe_rm,  char *llvm_cbe_pk) {
  static  unsigned long long aesl_llvm_cbe_x1_count = 0;
  l_struct_OC_poly llvm_cbe_x1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x2_count = 0;
  l_struct_OC_poly llvm_cbe_x2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x3_count = 0;
  l_struct_OC_poly llvm_cbe_x3;    /* Address-exposed local */
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
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
   char *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  signed short *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  unsigned short llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  signed short *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned short llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  unsigned short llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned short llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @owcpa_enc\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_sum_zero_frombytes(%%struct.poly* %%x1, i8* %%pk) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_135_count);
  poly_Rq_sum_zero_frombytes((l_struct_OC_poly *)(&llvm_cbe_x1), ( char *)llvm_cbe_pk);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_frombytes(%%struct.poly* %%x2, i8* %%rm) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_136_count);
  poly_S3_frombytes((l_struct_OC_poly *)(&llvm_cbe_x2), ( char *)llvm_cbe_rm);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Z3_to_Zq(%%struct.poly* %%x2) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_137_count);
  poly_Z3_to_Zq((l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%x3, %%struct.poly* %%x2, %%struct.poly* %%x1) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_138_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_x3), (l_struct_OC_poly *)(&llvm_cbe_x2), (l_struct_OC_poly *)(&llvm_cbe_x1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%rm, i64 136, !dbg !7 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__13 = ( char *)(&llvm_cbe_rm[(((signed long long )136ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_frombytes(%%struct.poly* %%x2, i8* %%1) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_140_count);
  poly_S3_frombytes((l_struct_OC_poly *)(&llvm_cbe_x2), ( char *)llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_lift(%%struct.poly* %%x1, %%struct.poly* %%x2) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_141_count);
  poly_lift((l_struct_OC_poly *)(&llvm_cbe_x1), (l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__22;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__22:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%10, %%2  for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__21);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge1 to i64, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__14 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%x3, i64 0, i32 0, i64 %%3, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__15 = (signed short *)(&llvm_cbe_x3.field0[(((signed long long )llvm_cbe_tmp__14))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i16* %%4, align 2, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__16 = (unsigned short )*llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%x1, i64 0, i32 0, i64 %%3, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__17 = (signed short *)(&llvm_cbe_x1.field0[(((signed long long )llvm_cbe_tmp__14))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i16* %%6, align 2, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__18 = (unsigned short )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i16 %%7, %%5, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__19 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__18&65535ull)) + ((unsigned short )(llvm_cbe_tmp__16&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__19&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = and i16 %%8, 2047, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__20 = (unsigned short )((unsigned short )(llvm_cbe_tmp__19 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%9, i16* %%4, align 2, !dbg !8 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_156_count);
  *llvm_cbe_tmp__15 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge1, 1, !dbg !10 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__21 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__21&4294967295ull)));
  if (((llvm_cbe_tmp__21&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__23;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__21;   /* for PHI node */
    goto llvm_cbe_tmp__22;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__23:
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_sum_zero_tobytes(i8* %%c, %%struct.poly* %%x3) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_enc  --> \n", ++aesl_llvm_cbe_165_count);
  poly_Rq_sum_zero_tobytes(( char *)llvm_cbe_c, (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @owcpa_enc}\n");
  return;
}


signed int owcpa_dec( char *llvm_cbe_rm,  char *llvm_cbe_ciphertext,  char *llvm_cbe_secretkey) {
  static  unsigned long long aesl_llvm_cbe_x1_count = 0;
  l_struct_OC_poly llvm_cbe_x1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x2_count = 0;
  l_struct_OC_poly llvm_cbe_x2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x3_count = 0;
  l_struct_OC_poly llvm_cbe_x3;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x4_count = 0;
  l_struct_OC_poly llvm_cbe_x4;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
   char *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
   char *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  signed short *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  unsigned short llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  signed short *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  unsigned short llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned short llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned short llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
   char *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @owcpa_dec\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_sum_zero_frombytes(%%struct.poly* %%x1, i8* %%ciphertext) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_222_count);
  poly_Rq_sum_zero_frombytes((l_struct_OC_poly *)(&llvm_cbe_x1), ( char *)llvm_cbe_ciphertext);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_frombytes(%%struct.poly* %%x2, i8* %%secretkey) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_223_count);
  poly_S3_frombytes((l_struct_OC_poly *)(&llvm_cbe_x2), ( char *)llvm_cbe_secretkey);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Z3_to_Zq(%%struct.poly* %%x2) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_224_count);
  poly_Z3_to_Zq((l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_mul(%%struct.poly* %%x3, %%struct.poly* %%x1, %%struct.poly* %%x2) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_225_count);
  poly_Rq_mul((l_struct_OC_poly *)(&llvm_cbe_x3), (l_struct_OC_poly *)(&llvm_cbe_x1), (l_struct_OC_poly *)(&llvm_cbe_x2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Rq_to_S3(%%struct.poly* %%x2, %%struct.poly* %%x3) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_226_count);
  poly_Rq_to_S3((l_struct_OC_poly *)(&llvm_cbe_x2), (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%secretkey, i64 136, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__24 = ( char *)(&llvm_cbe_secretkey[(((signed long long )136ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_frombytes(%%struct.poly* %%x3, i8* %%1) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_228_count);
  poly_S3_frombytes((l_struct_OC_poly *)(&llvm_cbe_x3), ( char *)llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_mul(%%struct.poly* %%x4, %%struct.poly* %%x2, %%struct.poly* %%x3) nounwind, !dbg !9 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_229_count);
  poly_S3_mul((l_struct_OC_poly *)(&llvm_cbe_x4), (l_struct_OC_poly *)(&llvm_cbe_x2), (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%rm, i64 136, !dbg !7 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__25 = ( char *)(&llvm_cbe_rm[(((signed long long )136ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_tobytes(i8* %%2, %%struct.poly* %%x4) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_231_count);
  poly_S3_tobytes(( char *)llvm_cbe_tmp__25, (l_struct_OC_poly *)(&llvm_cbe_x4));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call fastcc i32 @aesl_internal_owcpa_check_m(%%struct.poly* %%x4), !dbg !10 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__26 = (unsigned int )aesl_internal_owcpa_check_m((l_struct_OC_poly *)(&llvm_cbe_x4));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_lift(%%struct.poly* %%x2, %%struct.poly* %%x4) nounwind, !dbg !10 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_241_count);
  poly_lift((l_struct_OC_poly *)(&llvm_cbe_x2), (l_struct_OC_poly *)(&llvm_cbe_x4));
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__38;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__38:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%12, %%4  for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge1 to i64, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_249_count);
  llvm_cbe_tmp__27 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds %%struct.poly* %%x1, i64 0, i32 0, i64 %%5, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__28 = (signed short *)(&llvm_cbe_x1.field0[(((signed long long )llvm_cbe_tmp__27))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i16* %%6, align 2, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__29 = (unsigned short )*llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.poly* %%x2, i64 0, i32 0, i64 %%5, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__30 = (signed short *)(&llvm_cbe_x2.field0[(((signed long long )llvm_cbe_tmp__27))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i16* %%8, align 2, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__31 = (unsigned short )*llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sub i16 %%7, %%9, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__32 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__29&65535ull)) - ((unsigned short )(llvm_cbe_tmp__31&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__32&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = and i16 %%10, 2047, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__33 = (unsigned short )((unsigned short )(llvm_cbe_tmp__32 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%11, i16* %%6, align 2, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_256_count);
  *llvm_cbe_tmp__28 = llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add nsw i32 %%storemerge1, 1, !dbg !11 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__34 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__34&4294967295ull)));
  if (((llvm_cbe_tmp__34&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__39;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__34;   /* for PHI node */
    goto llvm_cbe_tmp__38;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__39:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%secretkey, i64 272, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__35 = ( char *)(&llvm_cbe_secretkey[(((signed long long )272ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Sq_frombytes(%%struct.poly* %%x3, i8* %%14) nounwind, !dbg !8 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_266_count);
  poly_Sq_frombytes((l_struct_OC_poly *)(&llvm_cbe_x3), ( char *)llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_Sq_mul(%%struct.poly* %%x4, %%struct.poly* %%x1, %%struct.poly* %%x3) nounwind, !dbg !10 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_267_count);
  poly_Sq_mul((l_struct_OC_poly *)(&llvm_cbe_x4), (l_struct_OC_poly *)(&llvm_cbe_x1), (l_struct_OC_poly *)(&llvm_cbe_x3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = call fastcc i32 @aesl_internal_owcpa_check_r(%%struct.poly* %%x4), !dbg !11 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__36 = (unsigned int )aesl_internal_owcpa_check_r((l_struct_OC_poly *)(&llvm_cbe_x4));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = or i32 %%15, %%3, !dbg !11 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__37 = (unsigned int )llvm_cbe_tmp__36 | llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_trinary_Zq_to_Z3(%%struct.poly* %%x4) nounwind, !dbg !11 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_274_count);
  poly_trinary_Zq_to_Z3((l_struct_OC_poly *)(&llvm_cbe_x4));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @poly_S3_tobytes(i8* %%rm, %%struct.poly* %%x4) nounwind, !dbg !7 for 0x%I64xth hint within @owcpa_dec  --> \n", ++aesl_llvm_cbe_275_count);
  poly_S3_tobytes(( char *)llvm_cbe_rm, (l_struct_OC_poly *)(&llvm_cbe_x4));
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @owcpa_dec}\n");
  return llvm_cbe_tmp__37;
}


static signed int aesl_internal_owcpa_check_m(l_struct_OC_poly *llvm_cbe_m) {
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned int llvm_cbe_storemerge2;
  unsigned int llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned short llvm_cbe_tmp__40;
  unsigned short llvm_cbe_tmp__40__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  unsigned short llvm_cbe_tmp__41;
  unsigned short llvm_cbe_tmp__41__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  unsigned long long llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  signed short *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned short llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  unsigned short llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  unsigned short llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  unsigned short llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  unsigned short llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  unsigned short llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  unsigned short llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  unsigned long long llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  unsigned int llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  unsigned long long llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  unsigned long long llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  unsigned long long llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_owcpa_check_m\n");
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__40__PHI_TEMPORARY = (unsigned short )((unsigned short )0);   /* for PHI node */
  llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned short )((unsigned short )0);   /* for PHI node */
  goto llvm_cbe_tmp__62;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i32 [ 0, %%0 ], [ %%12, %%1  for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned int )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__50);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi i16 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__40 = (unsigned short )llvm_cbe_tmp__40__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__40);
printf("\n = 0x%X",((unsigned short )0));
printf("\n = 0x%X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = phi i16 [ 0, %%0 ], [ %%11, %%1  for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_300_count);
  llvm_cbe_tmp__41 = (unsigned short )llvm_cbe_tmp__41__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__41);
printf("\n = 0x%X",((unsigned short )0));
printf("\n = 0x%X",llvm_cbe_tmp__49);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%storemerge2 to i64, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__42 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.poly* %%m, i64 0, i32 0, i64 %%4, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__43 = (signed short *)(&llvm_cbe_m->field0[(((signed long long )llvm_cbe_tmp__42))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__42));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i16* %%5, align 2, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__44 = (unsigned short )*llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = and i16 %%6, 1, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__45 = (unsigned short )((unsigned short )(llvm_cbe_tmp__44 & ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i16 %%7, %%2, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__46 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__45&65535ull)) + ((unsigned short )(llvm_cbe_tmp__40&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__46&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = lshr i16 %%6, 1, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_310_count);
  llvm_cbe_tmp__47 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__44&65535ull)) >> ((unsigned short )(((unsigned short )1)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__47&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = and i16 %%9, 1, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_311_count);
  llvm_cbe_tmp__48 = (unsigned short )((unsigned short )(llvm_cbe_tmp__47 & ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i16 %%10, %%3, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_312_count);
  llvm_cbe_tmp__49 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__48&65535ull)) + ((unsigned short )(llvm_cbe_tmp__41&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__49&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add nsw i32 %%storemerge2, 1, !dbg !9 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__50 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__50&4294967295ull)));
  if (((llvm_cbe_tmp__50&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__63;
  } else {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__50;   /* for PHI node */
    llvm_cbe_tmp__40__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__46;   /* for PHI node */
    llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__49;   /* for PHI node */
    goto llvm_cbe_tmp__62;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__63:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = xor i16 %%8, %%11, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_324_count);
  llvm_cbe_tmp__51 = (unsigned short )((unsigned short )(llvm_cbe_tmp__46 ^ llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i16 %%14 to i64, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__52 = (unsigned long long )((unsigned long long )(unsigned short )llvm_cbe_tmp__51&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = zext i16 %%8 to i32, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_331_count);
  llvm_cbe_tmp__53 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__46&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i16 %%11 to i32, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_332_count);
  llvm_cbe_tmp__54 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__49&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add nsw i32 %%16, %%17, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_333_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(llvm_cbe_tmp__53&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__54&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__55&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = xor i32 %%18, 254, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_334_count);
  llvm_cbe_tmp__56 = (unsigned int )llvm_cbe_tmp__55 ^ 254u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = sext i32 %%19 to i64, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__57 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = or i64 %%20, %%15, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_336_count);
  llvm_cbe_tmp__58 = (unsigned long long )llvm_cbe_tmp__57 | llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sub i64 0, %%21, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_338_count);
  llvm_cbe_tmp__59 = (unsigned long long )-(llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__59&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = lshr i64 %%22, 63, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__60 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__59&18446744073709551615ull)) >> ((unsigned long long )(63ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__60&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = trunc i64 %%23 to i32, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_m  --> \n", ++aesl_llvm_cbe_345_count);
  llvm_cbe_tmp__61 = (unsigned int )((unsigned int )llvm_cbe_tmp__60&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__61);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_owcpa_check_m}\n");
  return llvm_cbe_tmp__61;
}


static signed int aesl_internal_owcpa_check_r(l_struct_OC_poly *llvm_cbe_r) {
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  unsigned long long llvm_cbe_tmp__64;
  unsigned long long llvm_cbe_tmp__64__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned long long llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  signed short *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  unsigned short llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  unsigned short llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  unsigned long long llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  unsigned long long llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  unsigned long long llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  unsigned long long llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  signed short *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  unsigned short llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  unsigned long long llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  unsigned long long llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  unsigned long long llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  unsigned int llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_owcpa_check_r\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__64__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__85;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__85:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%15, %%1  for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__77);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = phi i64 [ 0, %%0 ], [ %%14, %%1  for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_361_count);
  llvm_cbe_tmp__64 = (unsigned long long )llvm_cbe_tmp__64__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__64);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__76);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge1 to i64, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__65 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%3, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__66 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__65))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__65));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i16* %%4, align 2, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_364_count);
  llvm_cbe_tmp__67 = (unsigned short )*llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i16 %%5, 1, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__68 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__67&65535ull)) + ((unsigned short )(((unsigned short )1)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__68&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i16 %%6 to i32, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_366_count);
  llvm_cbe_tmp__69 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__68&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = and i32 %%7, 2044, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__70 = (unsigned int )llvm_cbe_tmp__69 & 2044u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i32 %%8 to i64, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__71 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__70&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%7, 1, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__72 = (unsigned int )((unsigned int )(llvm_cbe_tmp__69&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__72&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = and i32 %%10, 4, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__73 = (unsigned int )llvm_cbe_tmp__72 & 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = zext i32 %%11 to i64, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__74 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__73&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i64 %%9, %%2, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_372_count);
  llvm_cbe_tmp__75 = (unsigned long long )llvm_cbe_tmp__71 | llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = or i64 %%13, %%12, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_373_count);
  llvm_cbe_tmp__76 = (unsigned long long )llvm_cbe_tmp__75 | llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add nsw i32 %%storemerge1, 1, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_380_count);
  llvm_cbe_tmp__77 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__77&4294967295ull)));
  if (((llvm_cbe_tmp__77&4294967295U) == (677u&4294967295U))) {
    goto llvm_cbe_tmp__86;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__77;   /* for PHI node */
    llvm_cbe_tmp__64__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__76;   /* for PHI node */
    goto llvm_cbe_tmp__85;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__86:
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__78 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i16* %%17, align 2, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__79 = (unsigned short )*llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i16 %%18 to i64, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_388_count);
  llvm_cbe_tmp__80 = (unsigned long long )((unsigned long long )(unsigned short )llvm_cbe_tmp__79&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = or i64 %%19, %%14, !dbg !7 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__81 = (unsigned long long )llvm_cbe_tmp__80 | llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sub i64 0, %%20, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__82 = (unsigned long long )-(llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__82&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = lshr i64 %%21, 63, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_392_count);
  llvm_cbe_tmp__83 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__82&18446744073709551615ull)) >> ((unsigned long long )(63ull&18446744073709551615ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__83&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = trunc i64 %%22 to i32, !dbg !8 for 0x%I64xth hint within @aesl_internal_owcpa_check_r  --> \n", ++aesl_llvm_cbe_399_count);
  llvm_cbe_tmp__84 = (unsigned int )((unsigned int )llvm_cbe_tmp__83&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__84);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_owcpa_check_r}\n");
  return llvm_cbe_tmp__84;
}

