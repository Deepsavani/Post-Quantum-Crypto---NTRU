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
void crypto_sort(signed int *llvm_cbe_array, signed long long llvm_cbe_n);


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

void crypto_sort(signed int *llvm_cbe_array, signed long long llvm_cbe_n) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned long long llvm_cbe_storemerge;
  unsigned long long llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned long long llvm_cbe_tmp__2;
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
  static  unsigned long long aesl_llvm_cbe_storemerge122_count = 0;
  unsigned long long llvm_cbe_storemerge122;
  unsigned long long llvm_cbe_storemerge122__PHI_TEMPORARY;
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
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge219_count = 0;
  unsigned long long llvm_cbe_storemerge219;
  unsigned long long llvm_cbe_storemerge219__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  signed int *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  unsigned int llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  unsigned long long llvm_cbe_tmp__20;
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
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond29_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge314_count = 0;
  unsigned long long llvm_cbe_storemerge314;
  unsigned long long llvm_cbe_storemerge314__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge2513_count = 0;
  unsigned long long llvm_cbe_storemerge2513;
  unsigned long long llvm_cbe_storemerge2513__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge268_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge268_2e_us;
  unsigned long long llvm_cbe_storemerge268_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge47_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge47_2e_us;
  unsigned long long llvm_cbe_storemerge47_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned int llvm_cbe_tmp__24;
  unsigned int llvm_cbe_tmp__24__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  signed int *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  unsigned long long llvm_cbe_tmp__37;
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
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  signed int *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge268_count = 0;
  unsigned long long llvm_cbe_storemerge268;
  unsigned long long llvm_cbe_storemerge268__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  unsigned long long llvm_cbe_tmp__41;
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
  static  unsigned long long aesl_llvm_cbe_exitcond28_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge26_2e_lcssa_count = 0;
  unsigned long long llvm_cbe_storemerge26_2e_lcssa;
  unsigned long long llvm_cbe_storemerge26_2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned long long llvm_cbe_tmp__42;
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
  unsigned long long llvm_cbe_tmp__43;
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

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @crypto_sort\n");
  if ((((signed long long )llvm_cbe_n) < ((signed long long )2ull))) {
    goto llvm_cbe_tmp__44;
  } else {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned long long )1ull;   /* for PHI node */
    goto llvm_cbe__2e_preheader24;
  }

  do {     /* Syntactic loop '.preheader24' to make GCC happy */
llvm_cbe__2e_preheader24:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i64 [ %%4, %%.preheader24 ], [ 1, %%0  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned long long )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%I64X",llvm_cbe_storemerge);
printf("\n = 0x%I64X",llvm_cbe_tmp__2);
printf("\n = 0x%I64X",1ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sub nsw i64 %%n, %%storemerge, !dbg !2 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__1 = (unsigned long long )((unsigned long long )(llvm_cbe_n&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_storemerge&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__1&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = shl nsw i64 %%storemerge, 1, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__2 = (unsigned long long )llvm_cbe_storemerge << 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
  if ((((signed long long )llvm_cbe_storemerge) < ((signed long long )llvm_cbe_tmp__1))) {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__2;   /* for PHI node */
    goto llvm_cbe__2e_preheader24;
  } else {
    goto llvm_cbe__2e_preheader21;
  }

  } while (1); /* end of syntactic loop '.preheader24' */
llvm_cbe__2e_preheader21:
  if ((((signed long long )llvm_cbe_storemerge) > ((signed long long )0ull))) {
    llvm_cbe_storemerge122__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge;   /* for PHI node */
    goto llvm_cbe__2e_preheader18;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

  do {     /* Syntactic loop '.preheader18' to make GCC happy */
llvm_cbe__2e_preheader18:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge122 = phi i64 [ %%59, %%._crit_edge17 ], [ %%storemerge, %%.preheader21  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge122_count);
  llvm_cbe_storemerge122 = (unsigned long long )llvm_cbe_storemerge122__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge122 = 0x%I64X",llvm_cbe_storemerge122);
printf("\n = 0x%I64X",llvm_cbe_tmp__43);
printf("\nstoremerge = 0x%I64X",llvm_cbe_storemerge);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sub nsw i64 %%n, %%storemerge122, !dbg !2 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__3 = (unsigned long long )((unsigned long long )(llvm_cbe_n&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_storemerge122&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__3&18446744073709551615ull)));
  if ((((signed long long )llvm_cbe_tmp__3) > ((signed long long )0ull))) {
    llvm_cbe_storemerge219__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph20;
  } else {
    goto llvm_cbe__2e_preheader12;
  }

llvm_cbe__2e__crit_edge17:
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = ashr i64 %%storemerge122, 1, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__43 = (unsigned long long )((signed long long )(((signed long long )llvm_cbe_storemerge122) >> ((signed long long )1ull)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((signed long long )llvm_cbe_tmp__43));
  if ((((signed long long )llvm_cbe_tmp__43) > ((signed long long )0ull))) {
    llvm_cbe_storemerge122__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__43;   /* for PHI node */
    goto llvm_cbe__2e_preheader18;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

llvm_cbe__2e_preheader12:
  if ((((signed long long )llvm_cbe_storemerge) > ((signed long long )llvm_cbe_storemerge122))) {
    llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge;   /* for PHI node */
    llvm_cbe_storemerge2513__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe__2e__crit_edge17;
  }

  do {     /* Syntactic loop '.lr.ph20' to make GCC happy */
llvm_cbe__2e_lr_2e_ph20:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge219 = phi i64 [ %%28, %%27 ], [ 0, %%.preheader18  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge219_count);
  llvm_cbe_storemerge219 = (unsigned long long )llvm_cbe_storemerge219__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge219 = 0x%I64X",llvm_cbe_storemerge219);
printf("\n = 0x%I64X",llvm_cbe_tmp__20);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = and i64 %%storemerge219, %%storemerge122, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__4 = (unsigned long long )llvm_cbe_storemerge219 & llvm_cbe_storemerge122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
  if (((llvm_cbe_tmp__4&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe_tmp__45;
  } else {
    goto llvm_cbe_tmp__46;
  }

llvm_cbe_tmp__46:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add nsw i64 %%storemerge219, 1, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__20 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge219&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__20&18446744073709551615ull)));
  if (((llvm_cbe_tmp__20&18446744073709551615ULL) == (llvm_cbe_tmp__3&18446744073709551615ULL))) {
    goto llvm_cbe__2e_preheader12;
  } else {
    llvm_cbe_storemerge219__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__20;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph20;
  }

llvm_cbe_tmp__45:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add nsw i64 %%storemerge219, %%storemerge122, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__5 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge219&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge122&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__5&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i32* %%array, i64 %%12, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__6 = (signed int *)(&llvm_cbe_array[(((signed long long )llvm_cbe_tmp__5))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i32* %%13, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__7 = (unsigned int )*llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i32* %%array, i64 %%storemerge219, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_array[(((signed long long )llvm_cbe_storemerge219))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge219 = 0x%I64X",((signed long long )llvm_cbe_storemerge219));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i32* %%15, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__9 = (unsigned int )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = xor i32 %%16, %%14, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__10 = (unsigned int )llvm_cbe_tmp__9 ^ llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sub nsw i32 %%14, %%16, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__11 = (unsigned int )((unsigned int )(llvm_cbe_tmp__7&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__9&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__11&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = xor i32 %%18, %%14, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__12 = (unsigned int )llvm_cbe_tmp__11 ^ llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = and i32 %%19, %%17, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__13 = (unsigned int )llvm_cbe_tmp__12 & llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = xor i32 %%20, %%18, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__14 = (unsigned int )llvm_cbe_tmp__13 ^ llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = ashr i32 %%21, 31, !dbg !7 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__15 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__14) >> ((signed int )31u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__15));
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = and i32 %%22, %%17, !dbg !7 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__16 = (unsigned int )llvm_cbe_tmp__15 & llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = xor i32 %%23, %%16, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__17 = (unsigned int )llvm_cbe_tmp__16 ^ llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%24, i32* %%15, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_121_count);
  *llvm_cbe_tmp__8 = llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i32* %%13, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__18 = (unsigned int )*llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = xor i32 %%23, %%25, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__19 = (unsigned int )llvm_cbe_tmp__16 ^ llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%26, i32* %%13, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_124_count);
  *llvm_cbe_tmp__6 = llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__19);
  goto llvm_cbe_tmp__46;

  } while (1); /* end of syntactic loop '.lr.ph20' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge314 = phi i64 [ %%57, %%56 ], [ %%storemerge, %%.preheader12  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge314_count);
  llvm_cbe_storemerge314 = (unsigned long long )llvm_cbe_storemerge314__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge314 = 0x%I64X",llvm_cbe_storemerge314);
printf("\n = 0x%I64X",llvm_cbe_tmp__42);
printf("\nstoremerge = 0x%I64X",llvm_cbe_storemerge);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2513 = phi i64 [ %%storemerge26.lcssa, %%56 ], [ 0, %%.preheader12  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge2513_count);
  llvm_cbe_storemerge2513 = (unsigned long long )llvm_cbe_storemerge2513__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2513 = 0x%I64X",llvm_cbe_storemerge2513);
printf("\nstoremerge26.lcssa = 0x%I64X",llvm_cbe_storemerge26_2e_lcssa);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sub nsw i64 %%n, %%storemerge314, !dbg !3 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__21 = (unsigned long long )((unsigned long long )(llvm_cbe_n&18446744073709551615ull)) - ((unsigned long long )(llvm_cbe_storemerge314&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__21&18446744073709551615ull)));
  if ((((signed long long )llvm_cbe_storemerge2513) < ((signed long long )llvm_cbe_tmp__21))) {
    goto llvm_cbe__2e_lr_2e_ph9;
  } else {
    llvm_cbe_storemerge26_2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge2513;   /* for PHI node */
    goto llvm_cbe_tmp__47;
  }

llvm_cbe_tmp__47:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge26.lcssa = phi i64 [ %%29, %%._crit_edge10 ], [ %%storemerge2513, %%.preheader  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge26_2e_lcssa_count);
  llvm_cbe_storemerge26_2e_lcssa = (unsigned long long )llvm_cbe_storemerge26_2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge26.lcssa = 0x%I64X",llvm_cbe_storemerge26_2e_lcssa);
printf("\n = 0x%I64X",llvm_cbe_tmp__21);
printf("\nstoremerge2513 = 0x%I64X",llvm_cbe_storemerge2513);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = ashr i64 %%storemerge314, 1, !dbg !7 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__42 = (unsigned long long )((signed long long )(((signed long long )llvm_cbe_storemerge314) >> ((signed long long )1ull)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((signed long long )llvm_cbe_tmp__42));
  if ((((signed long long )llvm_cbe_tmp__42) > ((signed long long )llvm_cbe_storemerge122))) {
    llvm_cbe_storemerge314__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__42;   /* for PHI node */
    llvm_cbe_storemerge2513__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge26_2e_lcssa;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    goto llvm_cbe__2e__crit_edge17;
  }

llvm_cbe__2e__crit_edge10:
  llvm_cbe_storemerge26_2e_lcssa__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__21;   /* for PHI node */
  goto llvm_cbe_tmp__47;

  do {     /* Syntactic loop '.lr.ph9.split.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph9_2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge268.us = phi i64 [ %%35, %%34 ], [ %%storemerge2513, %%.lr.ph9  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge268_2e_us_count);
  llvm_cbe_storemerge268_2e_us = (unsigned long long )llvm_cbe_storemerge268_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge268.us = 0x%I64X",llvm_cbe_storemerge268_2e_us);
printf("\n = 0x%I64X",llvm_cbe_tmp__23);
printf("\nstoremerge2513 = 0x%I64X",llvm_cbe_storemerge2513);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = and i64 %%storemerge268.us, %%storemerge122, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__22 = (unsigned long long )llvm_cbe_storemerge268_2e_us & llvm_cbe_storemerge122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__22);
  if (((llvm_cbe_tmp__22&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  } else {
    goto llvm_cbe_tmp__48;
  }

llvm_cbe_tmp__48:
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add nsw i64 %%storemerge268.us, 1, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__23 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge268_2e_us&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__23&18446744073709551615ull)));
  if (((llvm_cbe_tmp__23&18446744073709551615ULL) == (llvm_cbe_tmp__21&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge10;
  } else {
    llvm_cbe_storemerge268_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__23;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph9_2e_split_2e_us;
  }

llvm_cbe__2e__crit_edge_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%48, i32* %%53, align 4, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_179_count);
  *llvm_cbe_tmp__39 = llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
  goto llvm_cbe_tmp__48;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__49:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge47.us = phi i64 [ %%storemerge314, %%.lr.ph.us ], [ %%50, %%36  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge47_2e_us_count);
  llvm_cbe_storemerge47_2e_us = (unsigned long long )llvm_cbe_storemerge47_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge47.us = 0x%I64X",llvm_cbe_storemerge47_2e_us);
printf("\nstoremerge314 = 0x%I64X",llvm_cbe_storemerge314);
printf("\n = 0x%I64X",llvm_cbe_tmp__37);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = phi i32 [ %%54, %%.lr.ph.us ], [ %%48, %%36  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__24 = (unsigned int )llvm_cbe_tmp__24__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__24);
printf("\n = 0x%X",llvm_cbe_tmp__40);
printf("\n = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add nsw i64 %%storemerge47.us, %%storemerge268.us, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__25 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge47_2e_us&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge268_2e_us&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__25&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds i32* %%array, i64 %%38, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__26 = (signed int *)(&llvm_cbe_array[(((signed long long )llvm_cbe_tmp__25))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load i32* %%39, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__27 = (unsigned int )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = xor i32 %%40, %%37, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__28 = (unsigned int )llvm_cbe_tmp__27 ^ llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = sub nsw i32 %%40, %%37, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__29 = (unsigned int )((unsigned int )(llvm_cbe_tmp__27&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__24&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__29&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = xor i32 %%42, %%40, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__30 = (unsigned int )llvm_cbe_tmp__29 ^ llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = and i32 %%43, %%41, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__31 = (unsigned int )llvm_cbe_tmp__30 & llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = xor i32 %%44, %%42, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__32 = (unsigned int )llvm_cbe_tmp__31 ^ llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = ashr i32 %%45, 31, !dbg !8 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__33 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__32) >> ((signed int )31u)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = and i32 %%46, %%41, !dbg !7 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__34 = (unsigned int )llvm_cbe_tmp__33 & llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = xor i32 %%47, %%37, !dbg !8 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__35 = (unsigned int )llvm_cbe_tmp__34 ^ llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = xor i32 %%47, %%40, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__36 = (unsigned int )llvm_cbe_tmp__34 ^ llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%49, i32* %%39, align 4, !dbg !5 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_224_count);
  *llvm_cbe_tmp__26 = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = ashr i64 %%storemerge47.us, 1, !dbg !8 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_225_count);
  llvm_cbe_tmp__37 = (unsigned long long )((signed long long )(((signed long long )llvm_cbe_storemerge47_2e_us) >> ((signed long long )1ull)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((signed long long )llvm_cbe_tmp__37));
  if ((((signed long long )llvm_cbe_tmp__37) > ((signed long long )llvm_cbe_storemerge122))) {
    llvm_cbe_storemerge47_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__37;   /* for PHI node */
    llvm_cbe_tmp__24__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__35;   /* for PHI node */
    goto llvm_cbe_tmp__49;
  } else {
    goto llvm_cbe__2e__crit_edge_2e_us;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add nsw i64 %%storemerge268.us, %%storemerge122, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__38 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge268_2e_us&18446744073709551615ull)) + ((unsigned long long )(llvm_cbe_storemerge122&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__38&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds i32* %%array, i64 %%52, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__39 = (signed int *)(&llvm_cbe_array[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load i32* %%53, align 4, !dbg !4 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__40 = (unsigned int )*llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
  llvm_cbe_storemerge47_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge314;   /* for PHI node */
  llvm_cbe_tmp__24__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__40;   /* for PHI node */
  goto llvm_cbe_tmp__49;

  } while (1); /* end of syntactic loop '.lr.ph9.split.us' */
llvm_cbe__2e_lr_2e_ph9:
  if ((((signed long long )llvm_cbe_storemerge314) > ((signed long long )llvm_cbe_storemerge122))) {
    llvm_cbe_storemerge268_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge2513;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph9_2e_split_2e_us;
  } else {
    llvm_cbe_storemerge268__PHI_TEMPORARY = (unsigned long long )llvm_cbe_storemerge2513;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph9_2e__2e_lr_2e_ph9_2e_split_crit_edge;
  }

  do {     /* Syntactic loop '.lr.ph9..lr.ph9.split_crit_edge' to make GCC happy */
llvm_cbe__2e_lr_2e_ph9_2e__2e_lr_2e_ph9_2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge268 = phi i64 [ %%55, %%.lr.ph9..lr.ph9.split_crit_edge ], [ %%storemerge2513, %%.lr.ph9  for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_storemerge268_count);
  llvm_cbe_storemerge268 = (unsigned long long )llvm_cbe_storemerge268__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge268 = 0x%I64X",llvm_cbe_storemerge268);
printf("\n = 0x%I64X",llvm_cbe_tmp__41);
printf("\nstoremerge2513 = 0x%I64X",llvm_cbe_storemerge2513);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = add nsw i64 %%storemerge268, 1, !dbg !6 for 0x%I64xth hint within @crypto_sort  --> \n", ++aesl_llvm_cbe_244_count);
  llvm_cbe_tmp__41 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge268&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__41&18446744073709551615ull)));
  if (((llvm_cbe_tmp__41&18446744073709551615ULL) == (llvm_cbe_tmp__21&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge10;
  } else {
    llvm_cbe_storemerge268__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__41;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph9_2e__2e_lr_2e_ph9_2e_split_crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph9..lr.ph9.split_crit_edge' */
  } while (1); /* end of syntactic loop '.preheader' */
  } while (1); /* end of syntactic loop '.preheader18' */
llvm_cbe__2e_loopexit:
  goto llvm_cbe_tmp__44;

llvm_cbe_tmp__44:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @crypto_sort}\n");
  return;
}

