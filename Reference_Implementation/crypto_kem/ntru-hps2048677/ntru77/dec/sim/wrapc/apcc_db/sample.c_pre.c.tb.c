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
void sample_fg(l_struct_OC_poly *llvm_cbe_f, l_struct_OC_poly *llvm_cbe_g,  char *llvm_cbe_uniformbytes);
void sample_iid(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_uniformbytes);
void sample_fixed_type(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_u);
void sample_rm(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_m,  char *llvm_cbe_uniformbytes);
unsigned short mod3(signed short );
void crypto_sort(signed int *, signed long long );


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

void sample_fg(l_struct_OC_poly *llvm_cbe_f, l_struct_OC_poly *llvm_cbe_g,  char *llvm_cbe_uniformbytes) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sample_fg\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sample_iid(%%struct.poly* %%f, i8* %%uniformbytes), !dbg !6 for 0x%I64xth hint within @sample_fg  --> \n", ++aesl_llvm_cbe_8_count);
   /*tail*/ sample_iid((l_struct_OC_poly *)llvm_cbe_f, ( char *)llvm_cbe_uniformbytes);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%uniformbytes, i64 676, !dbg !6 for 0x%I64xth hint within @sample_fg  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_uniformbytes[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sample_fixed_type(%%struct.poly* %%g, i8* %%1), !dbg !6 for 0x%I64xth hint within @sample_fg  --> \n", ++aesl_llvm_cbe_10_count);
   /*tail*/ sample_fixed_type((l_struct_OC_poly *)llvm_cbe_g, ( char *)llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sample_fg}\n");
  return;
}


void sample_iid(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_uniformbytes) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
   char *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned char llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  unsigned short llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned short llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  signed short *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  signed short *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sample_iid\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__10;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__10:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge1 to i64, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%uniformbytes, i64 %%2, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__3 = ( char *)(&llvm_cbe_uniformbytes[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__4 = (unsigned char )*llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i8 %%4 to i16, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__5 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__4&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call zeroext i16 @mod3(i16 zeroext %%5) nounwind, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__6 = (unsigned short ) /*tail*/ mod3(llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__5);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%2, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__7 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__2))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__2));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%6, i16* %%7, align 2, !dbg !5 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_29_count);
  *llvm_cbe_tmp__7 = llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge1, 1, !dbg !6 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__8 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__8&4294967295ull)));
  if (((llvm_cbe_tmp__8&4294967295U) == (676u&4294967295U))) {
    goto llvm_cbe_tmp__11;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__8;   /* for PHI node */
    goto llvm_cbe_tmp__10;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__11:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !6 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__9 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%10, align 2, !dbg !6 for 0x%I64xth hint within @sample_iid  --> \n", ++aesl_llvm_cbe_38_count);
  *llvm_cbe_tmp__9 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sample_iid}\n");
  return;
}


void sample_fixed_type(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_u) {
  static  unsigned long long aesl_llvm_cbe_s_count = 0;
  signed int llvm_cbe_s[676];    /* Address-exposed local */
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
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge8_count = 0;
  unsigned int llvm_cbe_storemerge8;
  unsigned int llvm_cbe_storemerge8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  unsigned char llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
   char *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  unsigned char llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
   char *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned char llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
   char *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned char llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  signed int *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  unsigned long long llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
   char *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned char llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  unsigned int llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned long long llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
   char *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  unsigned char llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned int llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned long long llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
   char *llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  unsigned char llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  unsigned int llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  unsigned long long llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
   char *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned char llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned int llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  unsigned int llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned long long llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  signed int *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned long long llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
   char *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned char llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned long long llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
   char *llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned char llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
   char *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned char llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned int llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  unsigned int llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned long long llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
   char *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  unsigned char llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  unsigned int llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  unsigned int llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned int llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned long long llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  signed int *llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
   char *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned char llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  unsigned int llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  unsigned int llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  unsigned int llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  unsigned long long llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
   char *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned char llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  unsigned int llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  unsigned int llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned long long llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
   char *llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  unsigned char llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  unsigned int llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned int llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  unsigned int llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  unsigned int llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  signed int *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge17_count = 0;
  unsigned int llvm_cbe_storemerge17;
  unsigned int llvm_cbe_storemerge17__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned long long llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  signed int *llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  unsigned int llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  unsigned int llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned long long llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  signed int *llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  unsigned int llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  unsigned int llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  unsigned int llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond9_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  signed int *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge34_count = 0;
  unsigned int llvm_cbe_storemerge34;
  unsigned int llvm_cbe_storemerge34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  signed int *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  unsigned int llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  unsigned short llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  unsigned short llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  signed short *llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  unsigned int llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  signed short *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sample_fixed_type\n");
  llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__153;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__153:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge8 = phi i32 [ 0, %%0 ], [ %%123, %%1  for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_storemerge8_count);
  llvm_cbe_storemerge8 = (unsigned int )llvm_cbe_storemerge8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge8 = 0x%X",llvm_cbe_storemerge8);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__133);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = mul nsw i32 %%storemerge8, 15, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) * ((unsigned int )(15u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%2 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%u, i64 %%3, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__14 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__13))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__15 = (unsigned char )*llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__16 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__15&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = shl nuw nsw i32 %%6, 2, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__17 = (unsigned int )llvm_cbe_tmp__16 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%2, 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__18 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__18&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%8 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__19 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i8* %%u, i64 %%9, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__20 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__19))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%10, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__21 = (unsigned char )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = zext i8 %%11 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__22 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__21&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = shl nuw nsw i32 %%12, 10, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__23 = (unsigned int )llvm_cbe_tmp__22 << 10u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add nsw i32 %%2, 2, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__24&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = sext i32 %%14 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__25 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds i8* %%u, i64 %%15, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__26 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__25))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i8* %%16, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__27 = (unsigned char )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i8 %%17 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__28 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__27&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = shl nuw nsw i32 %%18, 18, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__29 = (unsigned int )llvm_cbe_tmp__28 << 18u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%2, 3, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__30 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__30&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i32 %%20 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__31 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i8* %%u, i64 %%21, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__32 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__31))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__31));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i8* %%22, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__33 = (unsigned char )*llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = zext i8 %%23 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__34 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__33&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = shl i32 %%24, 26, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__35 = (unsigned int )llvm_cbe_tmp__34 << 26u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = or i32 %%13, %%7, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__36 = (unsigned int )llvm_cbe_tmp__23 | llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = or i32 %%26, %%19, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__37 = (unsigned int )llvm_cbe_tmp__36 | llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = or i32 %%27, %%25, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__38 = (unsigned int )llvm_cbe_tmp__37 | llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = shl nsw i32 %%storemerge8, 2, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__39 = (unsigned int )llvm_cbe_storemerge8 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%29 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_127_count);
  llvm_cbe_tmp__40 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%30, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__41 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__40))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__40) < 676 && "Write access out of array 's' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%28, i32* %%31, align 16, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_129_count);
  *llvm_cbe_tmp__41 = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = lshr i32 %%24, 4, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__42 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__34&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__42&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = and i32 %%32, 12, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__43 = (unsigned int )llvm_cbe_tmp__42 & 12u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add nsw i32 %%2, 4, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__44 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__44&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = sext i32 %%34 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__45 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i8* %%u, i64 %%35, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__46 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__45))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__45));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load i8* %%36, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__47 = (unsigned char )*llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = zext i8 %%37 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__48 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__47&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = shl nuw nsw i32 %%38, 4, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__49 = (unsigned int )llvm_cbe_tmp__48 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add nsw i32 %%2, 5, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_138_count);
  llvm_cbe_tmp__50 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__50&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = sext i32 %%40 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__51 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds i8* %%u, i64 %%41, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__52 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__51))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__51));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load i8* %%42, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__53 = (unsigned char )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = zext i8 %%43 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__54 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__53&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = shl nuw nsw i32 %%44, 12, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__55 = (unsigned int )llvm_cbe_tmp__54 << 12u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = add nsw i32 %%2, 6, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__56 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__56&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = sext i32 %%46 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__57 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds i8* %%u, i64 %%47, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__58 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__57))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__57));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i8* %%48, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__59 = (unsigned char )*llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = zext i8 %%49 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__60 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__59&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = shl nuw nsw i32 %%50, 20, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__61 = (unsigned int )llvm_cbe_tmp__60 << 20u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add nsw i32 %%2, 7, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__62 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__62&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = sext i32 %%52 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__63 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds i8* %%u, i64 %%53, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__64 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__63))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__63));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i8* %%54, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__65 = (unsigned char )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = zext i8 %%55 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__66 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__65&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = shl i32 %%56, 28, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__67 = (unsigned int )llvm_cbe_tmp__66 << 28u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = or i32 %%33, %%39, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__68 = (unsigned int )llvm_cbe_tmp__43 | llvm_cbe_tmp__49;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = or i32 %%58, %%45, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__69 = (unsigned int )llvm_cbe_tmp__68 | llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = or i32 %%59, %%51, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__70 = (unsigned int )llvm_cbe_tmp__69 | llvm_cbe_tmp__61;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = or i32 %%60, %%57, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_159_count);
  llvm_cbe_tmp__71 = (unsigned int )llvm_cbe_tmp__70 | llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = or i32 %%29, 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__72 = (unsigned int )llvm_cbe_tmp__39 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = sext i32 %%62 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__73 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%63, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__74 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__73))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__73));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__73) < 676 && "Write access out of array 's' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%61, i32* %%64, align 4, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_163_count);
  *llvm_cbe_tmp__74 = llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = lshr i32 %%56, 2, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__75 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__66&4294967295ull)) >> ((unsigned int )(2u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__75&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = and i32 %%65, 60, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_165_count);
  llvm_cbe_tmp__76 = (unsigned int )llvm_cbe_tmp__75 & 60u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add nsw i32 %%2, 8, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__77 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__77&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = sext i32 %%67 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__78 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds i8* %%u, i64 %%68, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__79 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__78))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__78));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load i8* %%69, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__80 = (unsigned char )*llvm_cbe_tmp__79;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = zext i8 %%70 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__81 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__80&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = shl nuw nsw i32 %%71, 6, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__82 = (unsigned int )llvm_cbe_tmp__81 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = add nsw i32 %%2, 9, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__83 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__83&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = sext i32 %%73 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__84 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds i8* %%u, i64 %%74, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__85 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__84))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__84));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load i8* %%75, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__86 = (unsigned char )*llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = zext i8 %%76 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__87 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__86&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = shl nuw nsw i32 %%77, 14, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__88 = (unsigned int )llvm_cbe_tmp__87 << 14u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = add nsw i32 %%2, 10, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__89 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(10u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__89&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = sext i32 %%79 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__90 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds i8* %%u, i64 %%80, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__91 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__90))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load i8* %%81, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__92 = (unsigned char )*llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = zext i8 %%82 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__93 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__92&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = shl nuw nsw i32 %%83, 22, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__94 = (unsigned int )llvm_cbe_tmp__93 << 22u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = add nsw i32 %%2, 11, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__95 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(11u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__95&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = sext i32 %%85 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__96 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds i8* %%u, i64 %%86, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__97 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__96))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__96));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = load i8* %%87, align 1, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__98 = (unsigned char )*llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = zext i8 %%88 to i32, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__99 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__98&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = shl i32 %%89, 30, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__100 = (unsigned int )llvm_cbe_tmp__99 << 30u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = or i32 %%66, %%72, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__101 = (unsigned int )llvm_cbe_tmp__76 | llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = or i32 %%91, %%78, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__102 = (unsigned int )llvm_cbe_tmp__101 | llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = or i32 %%92, %%84, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__103 = (unsigned int )llvm_cbe_tmp__102 | llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = or i32 %%93, %%90, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__104 = (unsigned int )llvm_cbe_tmp__103 | llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = or i32 %%29, 2, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__105 = (unsigned int )llvm_cbe_tmp__39 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = sext i32 %%95 to i64, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__106 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%96, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__107 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__106))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__106));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__106) < 676 && "Write access out of array 's' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%94, i32* %%97, align 8, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_197_count);
  *llvm_cbe_tmp__107 = llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = and i32 %%89, 252, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__108 = (unsigned int )llvm_cbe_tmp__99 & 252u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = add nsw i32 %%2, 12, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__109 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(12u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__109&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = sext i32 %%99 to i64, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__110 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = getelementptr inbounds i8* %%u, i64 %%100, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__111 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__110))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__110));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load i8* %%101, align 1, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__112 = (unsigned char )*llvm_cbe_tmp__111;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = zext i8 %%102 to i32, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__113 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__112&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = shl nuw nsw i32 %%103, 8, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__114 = (unsigned int )llvm_cbe_tmp__113 << 8u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = or i32 %%104, %%98, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__115 = (unsigned int )llvm_cbe_tmp__114 | llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = add nsw i32 %%2, 13, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__116 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(13u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__116&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = sext i32 %%106 to i64, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__117 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = getelementptr inbounds i8* %%u, i64 %%107, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__118 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__117))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__117));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = load i8* %%108, align 1, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__119 = (unsigned char )*llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = zext i8 %%109 to i32, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__120 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__119&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = shl nuw nsw i32 %%110, 15, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__121 = (unsigned int )llvm_cbe_tmp__120 << 15u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = add nsw i32 %%2, 14, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__122 = (unsigned int )((unsigned int )(llvm_cbe_tmp__12&4294967295ull)) + ((unsigned int )(14u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__122&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = sext i32 %%112 to i64, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__123 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = getelementptr inbounds i8* %%u, i64 %%113, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__124 = ( char *)(&llvm_cbe_u[(((signed long long )llvm_cbe_tmp__123))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__123));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = load i8* %%114, align 1, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__125 = (unsigned char )*llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = zext i8 %%115 to i32, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_216_count);
  llvm_cbe_tmp__126 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__125&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = shl nuw i32 %%116, 24, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__127 = (unsigned int )llvm_cbe_tmp__126 << 24u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = add i32 %%105, %%111, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_218_count);
  llvm_cbe_tmp__128 = (unsigned int )((unsigned int )(llvm_cbe_tmp__115&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__121&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__128&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = add i32 %%118, %%117, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__129 = (unsigned int )((unsigned int )(llvm_cbe_tmp__128&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__127&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__129&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = or i32 %%29, 3, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__130 = (unsigned int )llvm_cbe_tmp__39 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = sext i32 %%120 to i64, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__131 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%121, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__132 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__131))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__131));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__131) < 676 && "Write access out of array 's' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%119, i32* %%122, align 4, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_223_count);
  *llvm_cbe_tmp__132 = llvm_cbe_tmp__129;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = add nsw i32 %%storemerge8, 1, !dbg !7 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__133 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__133&4294967295ull)));
  if (((llvm_cbe_tmp__133&4294967295U) == (169u&4294967295U))) {
    llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader6;
  } else {
    llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__133;   /* for PHI node */
    goto llvm_cbe_tmp__153;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader6' to make GCC happy */
llvm_cbe__2e_preheader6:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge17 = phi i32 [ %%128, %%.preheader6 ], [ 0, %%1  for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_storemerge17_count);
  llvm_cbe_storemerge17 = (unsigned int )llvm_cbe_storemerge17__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge17 = 0x%X",llvm_cbe_storemerge17);
printf("\n = 0x%X",llvm_cbe_tmp__138);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = sext i32 %%storemerge17 to i64, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__134 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge17);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%124, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__135 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__134))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__134));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__134) < 676)) fprintf(stderr, "%s:%d: warning: Read access out of array 's' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = load i32* %%125, align 4, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__136 = (unsigned int )*llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = or i32 %%126, 1, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__137 = (unsigned int )llvm_cbe_tmp__136 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__137);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__134) < 676 && "Write access out of array 's' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%127, i32* %%125, align 4, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_265_count);
  *llvm_cbe_tmp__135 = llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = add nsw i32 %%storemerge17, 1, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__138 = (unsigned int )((unsigned int )(llvm_cbe_storemerge17&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__138&4294967295ull)));
  if (((llvm_cbe_tmp__138&4294967295U) == (127u&4294967295U))) {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )127u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge17__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__138;   /* for PHI node */
    goto llvm_cbe__2e_preheader6;
  }

  } while (1); /* end of syntactic loop '.preheader6' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ %%133, %%.preheader ], [ 127, %%.preheader6  for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",llvm_cbe_tmp__143);
printf("\n = 0x%X",127u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = sext i32 %%storemerge25 to i64, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__139 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%129, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__140 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__139))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__139));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__139) < 676)) fprintf(stderr, "%s:%d: warning: Read access out of array 's' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = load i32* %%130, align 4, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__141 = (unsigned int )*llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = or i32 %%131, 2, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__142 = (unsigned int )llvm_cbe_tmp__141 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__142);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__139) < 676 && "Write access out of array 's' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%132, i32* %%130, align 4, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_307_count);
  *llvm_cbe_tmp__140 = llvm_cbe_tmp__142;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = add nsw i32 %%storemerge25, 1, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__143 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__143&4294967295ull)));
  if (((llvm_cbe_tmp__143&4294967295U) == (254u&4294967295U))) {
    goto llvm_cbe_tmp__154;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__143;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__154:
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 0, !dbg !9 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_345_count);
  llvm_cbe_tmp__144 = (signed int *)(&llvm_cbe_s[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @crypto_sort(i32* %%135, i64 676) nounwind, !dbg !9 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_346_count);
  crypto_sort((signed int *)llvm_cbe_tmp__144, 676ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",676ull);
}
  llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__155;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__155:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34 = phi i32 [ 0, %%134 ], [ %%143, %%136  for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_storemerge34_count);
  llvm_cbe_storemerge34 = (unsigned int )llvm_cbe_storemerge34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34 = 0x%X",llvm_cbe_storemerge34);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__151);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = sext i32 %%storemerge34 to i64, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_383_count);
  llvm_cbe_tmp__145 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge34);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [676 x i32]* %%s, i64 0, i64 %%137, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_384_count);
  llvm_cbe_tmp__146 = (signed int *)(&llvm_cbe_s[(((signed long long )llvm_cbe_tmp__145))
#ifdef AESL_BC_SIM
 % 676
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__145) < 676)) fprintf(stderr, "%s:%d: warning: Read access out of array 's' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load i32* %%138, align 4, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__147 = (unsigned int )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = trunc i32 %%139 to i16, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__148 = (unsigned short )((unsigned short )llvm_cbe_tmp__147&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = and i16 %%140, 3, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__149 = (unsigned short )((unsigned short )(llvm_cbe_tmp__148 & ((unsigned short )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%137, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_388_count);
  llvm_cbe_tmp__150 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__145))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%141, i16* %%142, align 2, !dbg !5 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_389_count);
  *llvm_cbe_tmp__150 = llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = add nsw i32 %%storemerge34, 1, !dbg !8 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__151 = (unsigned int )((unsigned int )(llvm_cbe_storemerge34&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__151&4294967295ull)));
  if (((llvm_cbe_tmp__151&4294967295U) == (676u&4294967295U))) {
    goto llvm_cbe_tmp__156;
  } else {
    llvm_cbe_storemerge34__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__151;   /* for PHI node */
    goto llvm_cbe_tmp__155;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__156:
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_427_count);
  llvm_cbe_tmp__152 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%145, align 2, !dbg !6 for 0x%I64xth hint within @sample_fixed_type  --> \n", ++aesl_llvm_cbe_428_count);
  *llvm_cbe_tmp__152 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sample_fixed_type}\n");
  return;
}


void sample_rm(l_struct_OC_poly *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_m,  char *llvm_cbe_uniformbytes) {
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
   char *llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @sample_rm\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sample_iid(%%struct.poly* %%r, i8* %%uniformbytes), !dbg !6 for 0x%I64xth hint within @sample_rm  --> \n", ++aesl_llvm_cbe_437_count);
   /*tail*/ sample_iid((l_struct_OC_poly *)llvm_cbe_r, ( char *)llvm_cbe_uniformbytes);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds i8* %%uniformbytes, i64 676, !dbg !6 for 0x%I64xth hint within @sample_rm  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__157 = ( char *)(&llvm_cbe_uniformbytes[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @sample_fixed_type(%%struct.poly* %%m, i8* %%1), !dbg !6 for 0x%I64xth hint within @sample_rm  --> \n", ++aesl_llvm_cbe_439_count);
   /*tail*/ sample_fixed_type((l_struct_OC_poly *)llvm_cbe_m, ( char *)llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @sample_rm}\n");
  return;
}

