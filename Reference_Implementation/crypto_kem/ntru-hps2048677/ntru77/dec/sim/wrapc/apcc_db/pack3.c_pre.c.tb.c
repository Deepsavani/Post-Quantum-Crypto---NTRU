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
void poly_S3_tobytes( char *llvm_cbe_msg, l_struct_OC_poly *llvm_cbe_a);
void poly_S3_frombytes(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_msg);
unsigned short mod3(signed short );


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

void poly_S3_tobytes( char *llvm_cbe_msg, l_struct_OC_poly *llvm_cbe_a) {
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
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
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
  signed short *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  unsigned short llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  unsigned char llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  signed short *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned short llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned char llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  unsigned char llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  signed short *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned short llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned char llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  unsigned char llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned char llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  signed short *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  unsigned short llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned char llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned char llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned char llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  signed short *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  unsigned short llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned char llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  unsigned char llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned char llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  signed short *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned short llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned char llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned char llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  unsigned int llvm_cbe_tmp__40;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_S3_tobytes\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__41;

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 675, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__1 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )675ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i16* %%1, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__2 = (unsigned short )*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = trunc i16 %%2 to i8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__3 = (unsigned char )((unsigned char )llvm_cbe_tmp__2&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%msg, i64 135, !dbg !4 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_msg[(((signed long long )135ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%3, i8* %%4, align 1, !dbg !4 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_39_count);
  *llvm_cbe_tmp__4 = llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_S3_tobytes}\n");
  return;
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__41:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%41, %%5  for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__40);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = mul nsw i32 %%storemerge3, 5, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__5 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) * ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__5&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add nsw i32 %%6, 4, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_tmp__5&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__7 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__8 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__7))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i16* %%9, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__9 = (unsigned short )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = trunc i16 %%10 to i8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__10 = (unsigned char )((unsigned char )llvm_cbe_tmp__9&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = mul i8 %%11, 3, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__11 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__10&255ull)) * ((unsigned char )(((unsigned char )3)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__11&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%6, 3, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_tmp__5&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%14, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__14 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__13))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i16* %%15, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__15 = (unsigned short )*llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = trunc i16 %%16 to i8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__16 = (unsigned char )((unsigned char )llvm_cbe_tmp__15&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add i8 %%12, %%17, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__17 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__11&255ull)) + ((unsigned char )(llvm_cbe_tmp__16&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__17&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = mul i8 %%18, 3, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__18 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__17&255ull)) * ((unsigned char )(((unsigned char )3)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__18&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%6, 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__19 = (unsigned int )((unsigned int )(llvm_cbe_tmp__5&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__19&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i32 %%20 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__20 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%21, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__21 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__20))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__20));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i16* %%22, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__22 = (unsigned short )*llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = trunc i16 %%23 to i8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__23 = (unsigned char )((unsigned char )llvm_cbe_tmp__22&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add i8 %%19, %%24, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__24 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__18&255ull)) + ((unsigned char )(llvm_cbe_tmp__23&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__24&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = mul i8 %%25, 3, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__25 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__24&255ull)) * ((unsigned char )(((unsigned char )3)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__25&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add nsw i32 %%6, 1, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__26 = (unsigned int )((unsigned int )(llvm_cbe_tmp__5&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__26&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sext i32 %%27 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__27 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%28, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__28 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__27))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__27));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i16* %%29, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__29 = (unsigned short )*llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = trunc i16 %%30 to i8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__30 = (unsigned char )((unsigned char )llvm_cbe_tmp__29&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i8 %%26, %%31, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__31 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__25&255ull)) + ((unsigned char )(llvm_cbe_tmp__30&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__31&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = mul i8 %%32, 3, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__32 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__31&255ull)) * ((unsigned char )(((unsigned char )3)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__32&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%6 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__33 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%34, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__34 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__33))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i16* %%35, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__35 = (unsigned short )*llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = trunc i16 %%36 to i8, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__36 = (unsigned char )((unsigned char )llvm_cbe_tmp__35&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add i8 %%33, %%37, !dbg !5 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__37 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__32&255ull)) + ((unsigned char )(llvm_cbe_tmp__36&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__37&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%storemerge3 to i64, !dbg !4 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__38 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds i8* %%msg, i64 %%39, !dbg !4 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__39 = ( char *)(&llvm_cbe_msg[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%38, i8* %%40, align 1, !dbg !4 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_116_count);
  *llvm_cbe_tmp__39 = llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add nsw i32 %%storemerge3, 1, !dbg !6 for 0x%I64xth hint within @poly_S3_tobytes  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__40 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__40&4294967295ull)));
  if (((llvm_cbe_tmp__40&4294967295U) == (135u&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__40;   /* for PHI node */
    goto llvm_cbe_tmp__41;
  }

  } while (1); /* end of syntactic loop '' */
}


void poly_S3_frombytes(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_msg) {
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned long long llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
   char *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned char llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  unsigned short llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned short llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned long long llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  signed short *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned short llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned short llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned short llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  signed short *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  unsigned short llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned short llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned short llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned long long llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  signed short *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned short llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  unsigned short llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned short llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  unsigned long long llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  signed short *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  unsigned short llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned short llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned short llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned long long llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  signed short *llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned int llvm_cbe_tmp__74;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
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
   char *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  unsigned char llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  unsigned short llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  unsigned short llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  signed short *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  signed short *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_S3_frombytes\n");
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__81;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__81:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%0 ], [ %%34, %%1  for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__74);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge3 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__42 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%msg, i64 %%2, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__43 = ( char *)(&llvm_cbe_msg[(((signed long long )llvm_cbe_tmp__42))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__42));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__44 = (unsigned char )*llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i8 %%4 to i16, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__45 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__44&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call zeroext i16 @mod3(i16 zeroext %%5) nounwind, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__46 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__45);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = mul nsw i32 %%storemerge3, 5, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__47 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) * ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__47&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__48 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%8, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__49 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__48))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__48));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%6, i16* %%9, align 2, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_171_count);
  *llvm_cbe_tmp__49 = llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = mul i16 %%5, 171, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__50 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__45&65535ull)) * ((unsigned short )(((unsigned short )171)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__50&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = lshr i16 %%10, 9, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__51 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__50&65535ull)) >> ((unsigned short )(((unsigned short )9)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__51&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call zeroext i16 @mod3(i16 zeroext %%11) nounwind, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__52 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__51);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__52);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%7, 1, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__53 = (unsigned int )((unsigned int )(llvm_cbe_tmp__47&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__53&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__54 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%14, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__55 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__54))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__54));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%12, i16* %%15, align 2, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_178_count);
  *llvm_cbe_tmp__55 = llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = mul i16 %%5, 57, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__56 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__45&65535ull)) * ((unsigned short )(((unsigned short )57)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__56&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = lshr i16 %%16, 9, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__57 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__56&65535ull)) >> ((unsigned short )(((unsigned short )9)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__57&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call zeroext i16 @mod3(i16 zeroext %%17) nounwind, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__58 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__57);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__58);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add nsw i32 %%7, 2, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__59 = (unsigned int )((unsigned int )(llvm_cbe_tmp__47&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__59&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = sext i32 %%19 to i64, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__60 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%20, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__61 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__60))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__60));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%18, i16* %%21, align 2, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_185_count);
  *llvm_cbe_tmp__61 = llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = mul i16 %%5, 19, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__62 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__45&65535ull)) * ((unsigned short )(((unsigned short )19)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__62&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = lshr i16 %%22, 9, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__63 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__62&65535ull)) >> ((unsigned short )(((unsigned short )9)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__63&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = tail call zeroext i16 @mod3(i16 zeroext %%23) nounwind, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__64 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__63);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__64);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%7, 3, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__65 = (unsigned int )((unsigned int )(llvm_cbe_tmp__47&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__65&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__66 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%26, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__67 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__66))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__66));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%24, i16* %%27, align 2, !dbg !4 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_192_count);
  *llvm_cbe_tmp__67 = llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = mul i16 %%5, 203, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__68 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__45&65535ull)) * ((unsigned short )(((unsigned short )203)&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__68&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = lshr i16 %%28, 14, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__69 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__68&65535ull)) >> ((unsigned short )(((unsigned short )14)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__69&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = tail call zeroext i16 @mod3(i16 zeroext %%29) nounwind, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__70 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__69);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__70);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%7, 4, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__71 = (unsigned int )((unsigned int )(llvm_cbe_tmp__47&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__71&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = sext i32 %%31 to i64, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__72 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%32, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__73 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__72))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__72));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%30, i16* %%33, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_199_count);
  *llvm_cbe_tmp__73 = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add nsw i32 %%storemerge3, 1, !dbg !6 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__74 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__74&4294967295ull)));
  if (((llvm_cbe_tmp__74&4294967295U) == (135u&4294967295U))) {
    goto llvm_cbe_tmp__82;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__74;   /* for PHI node */
    goto llvm_cbe_tmp__81;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__82:
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i8* %%msg, i64 135, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_226_count);
  llvm_cbe_tmp__75 = ( char *)(&llvm_cbe_msg[(((signed long long )135ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load i8* %%36, align 1, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__76 = (unsigned char )*llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = zext i8 %%37 to i16, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__77 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__76&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = tail call zeroext i16 @mod3(i16 zeroext %%38) nounwind, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__78 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__77);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__78);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 675, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_242_count);
  llvm_cbe_tmp__79 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )675ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%39, i16* %%40, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_243_count);
  *llvm_cbe_tmp__79 = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_244_count);
  llvm_cbe_tmp__80 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%41, align 2, !dbg !5 for 0x%I64xth hint within @poly_S3_frombytes  --> \n", ++aesl_llvm_cbe_245_count);
  *llvm_cbe_tmp__80 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_S3_frombytes}\n");
  return;
}

