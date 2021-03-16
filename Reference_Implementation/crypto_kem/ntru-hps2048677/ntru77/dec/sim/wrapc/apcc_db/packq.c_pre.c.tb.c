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
void poly_Sq_tobytes( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void poly_Sq_frombytes(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a);
void poly_Rq_sum_zero_tobytes( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a);
void poly_Rq_sum_zero_frombytes(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a);


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

void poly_Sq_tobytes( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_t_count = 0;
  signed short llvm_cbe_t[8];    /* Address-exposed local */
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
  signed short *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  signed short *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  signed short *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  signed short *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  signed short *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  signed short *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  signed short *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  signed short *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge10_count = 0;
  unsigned int llvm_cbe_storemerge10;
  unsigned int llvm_cbe_storemerge10__PHI_TEMPORARY;
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
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  signed short *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned short llvm_cbe_tmp__12;
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
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  signed short *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned short llvm_cbe_tmp__16;
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
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  signed short *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned short llvm_cbe_tmp__20;
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
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  signed short *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned short llvm_cbe_tmp__24;
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
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned long long llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  signed short *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  unsigned short llvm_cbe_tmp__28;
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
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  signed short *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  unsigned short llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
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
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  signed short *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned short llvm_cbe_tmp__36;
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
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  signed short *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned short llvm_cbe_tmp__40;
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
  unsigned char llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  unsigned long long llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
   char *llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  unsigned char llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned int llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  unsigned long long llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
   char *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  unsigned int llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  unsigned int llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  unsigned char llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  unsigned long long llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
   char *llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  unsigned short llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  unsigned char llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  unsigned int llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  unsigned long long llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
   char *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  unsigned int llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  unsigned int llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  unsigned char llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  unsigned long long llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
   char *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  unsigned char llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  unsigned long long llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
   char *llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  unsigned int llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  unsigned int llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned char llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  unsigned long long llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
   char *llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned short llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned char llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
   char *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned int llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned char llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  unsigned int llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  unsigned long long llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
   char *llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned int llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  unsigned int llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  unsigned char llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  unsigned int llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  unsigned long long llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
   char *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  unsigned short llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  unsigned char llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  unsigned int llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  unsigned long long llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
   char *llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  unsigned int llvm_cbe_tmp__117;
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
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
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
  signed short *llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  unsigned short llvm_cbe_tmp__119;
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
  signed short *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  unsigned short llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  signed short *llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  unsigned short llvm_cbe_tmp__123;
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
  signed short *llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  unsigned short llvm_cbe_tmp__125;
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
  static  unsigned long long aesl_llvm_cbe_storemerge234_count = 0;
  unsigned int llvm_cbe_storemerge234;
  unsigned int llvm_cbe_storemerge234__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  signed short *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  unsigned int llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  unsigned short llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  unsigned int llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  unsigned short llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  unsigned int llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  unsigned int llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  unsigned int llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned char llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
   char *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  unsigned short llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  unsigned int llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  unsigned int llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  unsigned int llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  unsigned char llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
   char *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  unsigned short llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  unsigned char llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
   char *llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  unsigned short llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  unsigned int llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  unsigned int llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  unsigned int llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  unsigned int llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  unsigned char llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
   char *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  unsigned short llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  unsigned int llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  unsigned int llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  unsigned int llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  unsigned int llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  unsigned char llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
   char *llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  unsigned char llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
   char *llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Sq_tobytes\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__1 = (signed short *)(&llvm_cbe_t[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__2 = (signed short *)(&llvm_cbe_t[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__3 = (signed short *)(&llvm_cbe_t[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__4 = (signed short *)(&llvm_cbe_t[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__5 = (signed short *)(&llvm_cbe_t[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__6 = (signed short *)(&llvm_cbe_t[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__7 = (signed short *)(&llvm_cbe_t[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__8 = (signed short *)(&llvm_cbe_t[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader8;

  do {     /* Syntactic loop '.preheader8' to make GCC happy */
llvm_cbe__2e_preheader8:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge10 = phi i32 [ 0, %%0 ], [ %%117, %%.preheader8  for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_storemerge10_count);
  llvm_cbe_storemerge10 = (unsigned int )llvm_cbe_storemerge10__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge10 = 0x%X",llvm_cbe_storemerge10);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__117);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = shl i32 %%storemerge10, 3, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__9 = (unsigned int )llvm_cbe_storemerge10 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sext i32 %%9 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%10, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__11 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__10))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i16* %%11, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__12 = (unsigned short )*llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%12, i16* %%1, align 16, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_70_count);
  *llvm_cbe_tmp__1 = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i32 %%9, 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__13 = (unsigned int )llvm_cbe_tmp__9 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__14 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%14, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__15 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__14))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__14));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i16* %%15, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__16 = (unsigned short )*llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%16, i16* %%2, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_87_count);
  *llvm_cbe_tmp__2 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%9, 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_100_count);
  llvm_cbe_tmp__17 = (unsigned int )llvm_cbe_tmp__9 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = sext i32 %%17 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__18 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%18, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__19 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__18))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i16* %%19, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__20 = (unsigned short )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%20, i16* %%3, align 4, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_104_count);
  *llvm_cbe_tmp__3 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = or i32 %%9, 3, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__21 = (unsigned int )llvm_cbe_tmp__9 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%21 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__22 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%22, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__23 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__22))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__22));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i16* %%23, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__24 = (unsigned short )*llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%24, i16* %%4, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_121_count);
  *llvm_cbe_tmp__4 = llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = or i32 %%9, 4, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__25 = (unsigned int )llvm_cbe_tmp__9 | 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%25 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__26 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%26, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__27 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__26))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__26));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i16* %%27, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__28 = (unsigned short )*llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%28, i16* %%5, align 8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_138_count);
  *llvm_cbe_tmp__5 = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i32 %%9, 5, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__29 = (unsigned int )llvm_cbe_tmp__9 | 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%29 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__30 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%30, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__31 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__30))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__30));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i16* %%31, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__32 = (unsigned short )*llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%32, i16* %%6, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_155_count);
  *llvm_cbe_tmp__6 = llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = or i32 %%9, 6, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__33 = (unsigned int )llvm_cbe_tmp__9 | 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__34 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%34, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__35 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__34))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__34));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i16* %%35, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__36 = (unsigned short )*llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%36, i16* %%7, align 4, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_172_count);
  *llvm_cbe_tmp__7 = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = or i32 %%9, 7, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__37 = (unsigned int )llvm_cbe_tmp__9 | 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = sext i32 %%37 to i64, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__38 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 %%38, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__39 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load i16* %%39, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__40 = (unsigned short )*llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%40, i16* %%8, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_189_count);
  *llvm_cbe_tmp__8 = llvm_cbe_tmp__40;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = trunc i16 %%12 to i8, !dbg !4 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__41 = (unsigned char )((unsigned char )llvm_cbe_tmp__12&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = mul nsw i32 %%storemerge10, 11, !dbg !4 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_203_count);
  llvm_cbe_tmp__42 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) * ((unsigned int )(11u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__42&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = sext i32 %%42 to i64, !dbg !4 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__43 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = getelementptr inbounds i8* %%r, i64 %%43, !dbg !4 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__44 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__43))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__43));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%41, i8* %%44, align 1, !dbg !4 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_206_count);
  *llvm_cbe_tmp__44 = llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = zext i16 %%12 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__45 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__12&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = lshr i32 %%45, 8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__46 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__45&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__46&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i16 %%16 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__47 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__16&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = shl nuw nsw i32 %%47, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__48 = (unsigned int )llvm_cbe_tmp__47 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = or i32 %%48, %%46, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__49 = (unsigned int )llvm_cbe_tmp__48 | llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = trunc i32 %%49 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__50 = (unsigned char )((unsigned char )llvm_cbe_tmp__49&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = add nsw i32 %%42, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__51 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__51&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = sext i32 %%51 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__52 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds i8* %%r, i64 %%52, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__53 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__52))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__52));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%50, i8* %%53, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_216_count);
  *llvm_cbe_tmp__53 = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = lshr i32 %%47, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__54 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__47&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__54&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = zext i16 %%20 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_218_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__20&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = shl nuw nsw i32 %%55, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__56 = (unsigned int )llvm_cbe_tmp__55 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = or i32 %%56, %%54, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__57 = (unsigned int )llvm_cbe_tmp__56 | llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = trunc i32 %%57 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__58 = (unsigned char )((unsigned char )llvm_cbe_tmp__57&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add nsw i32 %%42, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_222_count);
  llvm_cbe_tmp__59 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__59&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = sext i32 %%59 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__60 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i8* %%r, i64 %%60, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_224_count);
  llvm_cbe_tmp__61 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__60))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__60));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%58, i8* %%61, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_225_count);
  *llvm_cbe_tmp__61 = llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = lshr i16 %%20, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_226_count);
  llvm_cbe_tmp__62 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__20&65535ull)) >> ((unsigned short )(((unsigned short )2)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__62&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = trunc i16 %%62 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__63 = (unsigned char )((unsigned char )llvm_cbe_tmp__62&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = add nsw i32 %%42, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_228_count);
  llvm_cbe_tmp__64 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__64&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = sext i32 %%64 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__65 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds i8* %%r, i64 %%65, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_230_count);
  llvm_cbe_tmp__66 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__65))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__65));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%63, i8* %%66, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_231_count);
  *llvm_cbe_tmp__66 = llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = lshr i32 %%55, 10, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_232_count);
  llvm_cbe_tmp__67 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__55&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__67&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i16 %%24 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__68 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__24&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = shl nuw nsw i32 %%68, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__69 = (unsigned int )llvm_cbe_tmp__68 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = or i32 %%69, %%67, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__70 = (unsigned int )llvm_cbe_tmp__69 | llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = trunc i32 %%70 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_236_count);
  llvm_cbe_tmp__71 = (unsigned char )((unsigned char )llvm_cbe_tmp__70&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = add nsw i32 %%42, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__72 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__72&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = sext i32 %%72 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__73 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds i8* %%r, i64 %%73, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_239_count);
  llvm_cbe_tmp__74 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__73))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__73));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%71, i8* %%74, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_240_count);
  *llvm_cbe_tmp__74 = llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = lshr i32 %%68, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__75 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__68&4294967295ull)) >> ((unsigned int )(7u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__75&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = zext i16 %%28 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_242_count);
  llvm_cbe_tmp__76 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__28&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = shl nuw nsw i32 %%76, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_243_count);
  llvm_cbe_tmp__77 = (unsigned int )llvm_cbe_tmp__76 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = or i32 %%77, %%75, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_244_count);
  llvm_cbe_tmp__78 = (unsigned int )llvm_cbe_tmp__77 | llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = trunc i32 %%78 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_245_count);
  llvm_cbe_tmp__79 = (unsigned char )((unsigned char )llvm_cbe_tmp__78&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = add nsw i32 %%42, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_246_count);
  llvm_cbe_tmp__80 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__80&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = sext i32 %%80 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_247_count);
  llvm_cbe_tmp__81 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds i8* %%r, i64 %%81, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__82 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__81))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__81));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%79, i8* %%82, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_249_count);
  *llvm_cbe_tmp__82 = llvm_cbe_tmp__79;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = lshr i32 %%76, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__83 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__76&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__83&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = zext i16 %%32 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__84 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__32&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = shl nuw nsw i32 %%84, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__85 = (unsigned int )llvm_cbe_tmp__84 << 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = or i32 %%85, %%83, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__86 = (unsigned int )llvm_cbe_tmp__85 | llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = trunc i32 %%86 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__87 = (unsigned char )((unsigned char )llvm_cbe_tmp__86&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = add nsw i32 %%42, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__88 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__88&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = sext i32 %%88 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__89 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = getelementptr inbounds i8* %%r, i64 %%89, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__90 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__89))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__89));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%87, i8* %%90, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_258_count);
  *llvm_cbe_tmp__90 = llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = lshr i16 %%32, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__91 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__32&65535ull)) >> ((unsigned short )(((unsigned short )1)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__91&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = trunc i16 %%91 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__92 = (unsigned char )((unsigned char )llvm_cbe_tmp__91&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = add nsw i32 %%42, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__93 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__93&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = sext i32 %%93 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__94 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = getelementptr inbounds i8* %%r, i64 %%94, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__95 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__94))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%92, i8* %%95, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_264_count);
  *llvm_cbe_tmp__95 = llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = lshr i32 %%84, 9, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__96 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__84&4294967295ull)) >> ((unsigned int )(9u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__96&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = zext i16 %%36 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__97 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__36&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = shl nuw nsw i32 %%97, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_267_count);
  llvm_cbe_tmp__98 = (unsigned int )llvm_cbe_tmp__97 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = or i32 %%98, %%96, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__99 = (unsigned int )llvm_cbe_tmp__98 | llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = trunc i32 %%99 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__100 = (unsigned char )((unsigned char )llvm_cbe_tmp__99&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = add nsw i32 %%42, 8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__101 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__101&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = sext i32 %%101 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_271_count);
  llvm_cbe_tmp__102 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = getelementptr inbounds i8* %%r, i64 %%102, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__103 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__102))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__102));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%100, i8* %%103, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_273_count);
  *llvm_cbe_tmp__103 = llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = lshr i32 %%97, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__104 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__97&4294967295ull)) >> ((unsigned int )(6u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__104&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = zext i16 %%40 to i32, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__105 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__40&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = shl nuw nsw i32 %%105, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__106 = (unsigned int )llvm_cbe_tmp__105 << 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = or i32 %%106, %%104, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__107 = (unsigned int )llvm_cbe_tmp__106 | llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = trunc i32 %%107 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__108 = (unsigned char )((unsigned char )llvm_cbe_tmp__107&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = add nsw i32 %%42, 9, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_279_count);
  llvm_cbe_tmp__109 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__109&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = sext i32 %%109 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_280_count);
  llvm_cbe_tmp__110 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = getelementptr inbounds i8* %%r, i64 %%110, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__111 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__110))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__110));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%108, i8* %%111, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_282_count);
  *llvm_cbe_tmp__111 = llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = lshr i16 %%40, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__112 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__40&65535ull)) >> ((unsigned short )(((unsigned short )3)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__112&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = trunc i16 %%112 to i8, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__113 = (unsigned char )((unsigned char )llvm_cbe_tmp__112&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = add nsw i32 %%42, 10, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__114 = (unsigned int )((unsigned int )(llvm_cbe_tmp__42&4294967295ull)) + ((unsigned int )(10u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__114&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = sext i32 %%114 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__115 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds i8* %%r, i64 %%115, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__116 = ( char *)(&llvm_cbe_r[(((signed long long )llvm_cbe_tmp__115))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__115));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%113, i8* %%116, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_288_count);
  *llvm_cbe_tmp__116 = llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = add nsw i32 %%storemerge10, 1, !dbg !8 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_289_count);
  llvm_cbe_tmp__117 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__117&4294967295ull)));
  if (((llvm_cbe_tmp__117&4294967295U) == (84u&4294967295U))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__117;   /* for PHI node */
    goto llvm_cbe__2e_preheader8;
  }

  } while (1); /* end of syntactic loop '.preheader8' */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 672, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__118 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )672ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load i16* %%118, align 2, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__119 = (unsigned short )*llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__119);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%119, i16* %%1, align 16, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_327_count);
  *llvm_cbe_tmp__1 = llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 673, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__120 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )673ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load i16* %%120, align 2, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_340_count);
  llvm_cbe_tmp__121 = (unsigned short )*llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%121, i16* %%2, align 2, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_341_count);
  *llvm_cbe_tmp__2 = llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 674, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__122 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )674ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = load i16* %%122, align 2, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_354_count);
  llvm_cbe_tmp__123 = (unsigned short )*llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__123);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%123, i16* %%3, align 4, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_355_count);
  *llvm_cbe_tmp__3 = llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds %%struct.poly* %%a, i64 0, i32 0, i64 675, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__124 = (signed short *)(&llvm_cbe_a->field0[(((signed long long )675ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load i16* %%124, align 2, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__125 = (unsigned short )*llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%125, i16* %%4, align 2, !dbg !7 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_369_count);
  *llvm_cbe_tmp__4 = llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__125);
  llvm_cbe_storemerge234__PHI_TEMPORARY = (unsigned int )4u;   /* for PHI node */
  goto llvm_cbe_tmp__164;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__164:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge234 = phi i32 [ 4, %%.lr.ph ], [ %%129, %%126  for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_storemerge234_count);
  llvm_cbe_storemerge234 = (unsigned int )llvm_cbe_storemerge234__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge234 = 0x%X",llvm_cbe_storemerge234);
printf("\n = 0x%X",4u);
printf("\n = 0x%X",llvm_cbe_tmp__128);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = sext i32 %%storemerge234 to i64, !dbg !8 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_383_count);
  llvm_cbe_tmp__126 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge234);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = getelementptr inbounds [8 x i16]* %%t, i64 0, i64 %%127, !dbg !8 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_384_count);
  llvm_cbe_tmp__127 = (signed short *)(&llvm_cbe_t[(((signed long long )llvm_cbe_tmp__126))
#ifdef AESL_BC_SIM
 % 8
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__126) < 8 && "Write access out of array 't' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%128, align 2, !dbg !8 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_385_count);
  *llvm_cbe_tmp__127 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = add nsw i32 %%storemerge234, 1, !dbg !8 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__128 = (unsigned int )((unsigned int )(llvm_cbe_storemerge234&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__128&4294967295ull)));
  if (((llvm_cbe_tmp__128&4294967295U) == (8u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge234__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__128;   /* for PHI node */
    goto llvm_cbe_tmp__164;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 't' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = load i16* %%4, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__129 = (unsigned short )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = zext i16 %%130 to i32, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_401_count);
  llvm_cbe_tmp__130 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__129&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = lshr i32 %%131, 7, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__131 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__130&4294967295ull)) >> ((unsigned int )(7u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__131&4294967295ull)));

#ifdef AESL_BC_SIM
  if (!(((signed long long )4ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 't' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = load i16* %%5, align 8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_403_count);
  llvm_cbe_tmp__132 = (unsigned short )*llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = zext i16 %%133 to i32, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__133 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__132&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = shl nuw nsw i32 %%134, 4, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__134 = (unsigned int )llvm_cbe_tmp__133 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = or i32 %%135, %%132, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__135 = (unsigned int )llvm_cbe_tmp__134 | llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = trunc i32 %%136 to i8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__136 = (unsigned char )((unsigned char )llvm_cbe_tmp__135&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds i8* %%r, i64 929, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__137 = ( char *)(&llvm_cbe_r[(((signed long long )929ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%137, i8* %%138, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_409_count);
  *llvm_cbe_tmp__137 = llvm_cbe_tmp__136;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__136);

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 't' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load i16* %%3, align 4, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__138 = (unsigned short )*llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = zext i16 %%139 to i32, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_411_count);
  llvm_cbe_tmp__139 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__138&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = lshr i32 %%140, 10, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_412_count);
  llvm_cbe_tmp__140 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__139&4294967295ull)) >> ((unsigned int )(10u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__140&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = shl nuw nsw i32 %%131, 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_413_count);
  llvm_cbe_tmp__141 = (unsigned int )llvm_cbe_tmp__130 << 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = or i32 %%142, %%141, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__142 = (unsigned int )llvm_cbe_tmp__141 | llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = trunc i32 %%143 to i8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_415_count);
  llvm_cbe_tmp__143 = (unsigned char )((unsigned char )llvm_cbe_tmp__142&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = getelementptr inbounds i8* %%r, i64 928, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__144 = ( char *)(&llvm_cbe_r[(((signed long long )928ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%144, i8* %%145, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_417_count);
  *llvm_cbe_tmp__144 = llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = lshr i16 %%139, 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__145 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__138&65535ull)) >> ((unsigned short )(((unsigned short )2)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__145&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = trunc i16 %%146 to i8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_419_count);
  llvm_cbe_tmp__146 = (unsigned char )((unsigned char )llvm_cbe_tmp__145&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = getelementptr inbounds i8* %%r, i64 927, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__147 = ( char *)(&llvm_cbe_r[(((signed long long )927ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%147, i8* %%148, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_421_count);
  *llvm_cbe_tmp__147 = llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__146);

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 't' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load i16* %%2, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__148 = (unsigned short )*llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = zext i16 %%149 to i32, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__149 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__148&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = lshr i32 %%150, 5, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__150 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__149&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__150&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = shl nuw nsw i32 %%140, 6, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__151 = (unsigned int )llvm_cbe_tmp__139 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = or i32 %%152, %%151, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_426_count);
  llvm_cbe_tmp__152 = (unsigned int )llvm_cbe_tmp__151 | llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = trunc i32 %%153 to i8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_427_count);
  llvm_cbe_tmp__153 = (unsigned char )((unsigned char )llvm_cbe_tmp__152&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = getelementptr inbounds i8* %%r, i64 926, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__154 = ( char *)(&llvm_cbe_r[(((signed long long )926ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%154, i8* %%155, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_429_count);
  *llvm_cbe_tmp__154 = llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__153);

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 8)) fprintf(stderr, "%s:%d: warning: Read access out of array 't' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = load i16* %%1, align 16, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__155 = (unsigned short )*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = zext i16 %%156 to i32, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_431_count);
  llvm_cbe_tmp__156 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__155&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = lshr i32 %%157, 8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_432_count);
  llvm_cbe_tmp__157 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__156&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__157&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = shl nuw nsw i32 %%150, 3, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__158 = (unsigned int )llvm_cbe_tmp__149 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = or i32 %%159, %%158, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__159 = (unsigned int )llvm_cbe_tmp__158 | llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = trunc i32 %%160 to i8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_435_count);
  llvm_cbe_tmp__160 = (unsigned char )((unsigned char )llvm_cbe_tmp__159&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = getelementptr inbounds i8* %%r, i64 925, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_436_count);
  llvm_cbe_tmp__161 = ( char *)(&llvm_cbe_r[(((signed long long )925ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%161, i8* %%162, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_437_count);
  *llvm_cbe_tmp__161 = llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = trunc i16 %%156 to i8, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__162 = (unsigned char )((unsigned char )llvm_cbe_tmp__155&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = getelementptr inbounds i8* %%r, i64 924, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_439_count);
  llvm_cbe_tmp__163 = ( char *)(&llvm_cbe_r[(((signed long long )924ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%163, i8* %%164, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_tobytes  --> \n", ++aesl_llvm_cbe_440_count);
  *llvm_cbe_tmp__163 = llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__162);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Sq_tobytes}\n");
  return;
}


void poly_Sq_frombytes(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  unsigned int llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  unsigned long long llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
   char *llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  unsigned char llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  unsigned short llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  unsigned int llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  unsigned long long llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
   char *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  unsigned char llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  unsigned short llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  unsigned short llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  unsigned short llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  unsigned short llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  unsigned int llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  unsigned long long llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  signed short *llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  unsigned char llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  unsigned short llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  unsigned short llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  unsigned int llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  unsigned long long llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
   char *llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  unsigned char llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  unsigned short llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  unsigned short llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  unsigned short llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  unsigned short llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  unsigned int llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  unsigned long long llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  signed short *llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  unsigned char llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  unsigned short llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  unsigned short llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  unsigned int llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  unsigned long long llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
   char *llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  unsigned char llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  unsigned short llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  unsigned short llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  unsigned int llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  unsigned long long llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
   char *llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  unsigned char llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  unsigned short llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  unsigned short llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  unsigned short llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  unsigned short llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  unsigned short llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  unsigned int llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  unsigned long long llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  signed short *llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  unsigned char llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  unsigned short llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  unsigned short llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  unsigned int llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  unsigned long long llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
   char *llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  unsigned char llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  unsigned short llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  unsigned short llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  unsigned short llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  unsigned short llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  unsigned int llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  unsigned long long llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  signed short *llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  unsigned char llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  unsigned short llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  unsigned short llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  unsigned int llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  unsigned long long llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
   char *llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  unsigned char llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  unsigned short llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  unsigned short llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  unsigned short llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  unsigned short llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  unsigned int llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  unsigned long long llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  signed short *llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  unsigned char llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  unsigned short llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  unsigned short llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  unsigned int llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  unsigned long long llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
   char *llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  unsigned char llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  unsigned short llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  unsigned short llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  unsigned int llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  unsigned long long llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
   char *llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  unsigned char llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  unsigned short llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  unsigned short llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  unsigned short llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  unsigned short llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  unsigned short llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  unsigned int llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  unsigned long long llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  signed short *llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  unsigned char llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  unsigned short llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  unsigned short llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  unsigned int llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  unsigned long long llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
   char *llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  unsigned char llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  unsigned short llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  unsigned short llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  unsigned short llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  unsigned short llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  unsigned int llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  unsigned long long llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  signed short *llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  unsigned char llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  unsigned short llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  unsigned short llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  unsigned int llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  unsigned long long llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
   char *llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  unsigned char llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  unsigned short llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  unsigned short llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  unsigned short llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  unsigned int llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  unsigned long long llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  signed short *llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  unsigned int llvm_cbe_tmp__292;
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
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
   char *llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  unsigned char llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  unsigned short llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  unsigned short llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
   char *llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  unsigned char llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  unsigned short llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  unsigned short llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  unsigned short llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  unsigned short llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  signed short *llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
   char *llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  unsigned char llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  unsigned short llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  unsigned short llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
   char *llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  unsigned char llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  unsigned short llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  unsigned short llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  unsigned char llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  unsigned short llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  unsigned short llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  unsigned short llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  unsigned short llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  unsigned short llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  signed short *llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
   char *llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  unsigned char llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  unsigned short llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  unsigned short llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  unsigned char llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  unsigned short llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  unsigned short llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  unsigned short llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  unsigned short llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  signed short *llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
   char *llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  unsigned char llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  unsigned short llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  unsigned char llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  unsigned short llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  unsigned short llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  unsigned short llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  unsigned short llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  signed short *llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Sq_frombytes\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__338;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__338:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%129, %%1  for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__292);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = mul nsw i32 %%storemerge1, 11, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__165 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) * ((unsigned int )(11u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__165&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%2 to i64, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__166 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%a, i64 %%3, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_528_count);
  llvm_cbe_tmp__167 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__166))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__166));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_529_count);
  llvm_cbe_tmp__168 = (unsigned char )*llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%5 to i16, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_530_count);
  llvm_cbe_tmp__169 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__168&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add nsw i32 %%2, 1, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_531_count);
  llvm_cbe_tmp__170 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__170&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_532_count);
  llvm_cbe_tmp__171 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i8* %%a, i64 %%8, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__172 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__171))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__171));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_534_count);
  llvm_cbe_tmp__173 = (unsigned char )*llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i8 %%10 to i16, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_535_count);
  llvm_cbe_tmp__174 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__173&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = shl nuw i16 %%11, 8, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_536_count);
  llvm_cbe_tmp__175 = (unsigned short )((unsigned short )(llvm_cbe_tmp__174 << ((unsigned short )8)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = and i16 %%12, 1792, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__176 = (unsigned short )((unsigned short )(llvm_cbe_tmp__175 & ((unsigned short )1792)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = or i16 %%13, %%6, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_538_count);
  llvm_cbe_tmp__177 = (unsigned short )((unsigned short )(llvm_cbe_tmp__176 | llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = shl nsw i32 %%storemerge1, 3, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_539_count);
  llvm_cbe_tmp__178 = (unsigned int )llvm_cbe_storemerge1 << 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i32 %%15 to i64, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__179 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__179);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%16, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__180 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__179))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__179));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%14, i16* %%17, align 2, !dbg !4 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_542_count);
  *llvm_cbe_tmp__180 = llvm_cbe_tmp__177;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%9, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_543_count);
  llvm_cbe_tmp__181 = (unsigned char )*llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i8 %%18 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_544_count);
  llvm_cbe_tmp__182 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__181&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = lshr i16 %%19, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_545_count);
  llvm_cbe_tmp__183 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__182&65535ull)) >> ((unsigned short )(((unsigned short )3)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__183&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%2, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_546_count);
  llvm_cbe_tmp__184 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__184&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%21 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_547_count);
  llvm_cbe_tmp__185 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds i8* %%a, i64 %%22, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_548_count);
  llvm_cbe_tmp__186 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__185))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__185));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__187 = (unsigned char )*llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i8 %%24 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_550_count);
  llvm_cbe_tmp__188 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__187&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nuw nsw i16 %%25, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_551_count);
  llvm_cbe_tmp__189 = (unsigned short )((unsigned short )(llvm_cbe_tmp__188 << ((unsigned short )5)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = and i16 %%26, 2016, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_552_count);
  llvm_cbe_tmp__190 = (unsigned short )((unsigned short )(llvm_cbe_tmp__189 & ((unsigned short )2016)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = or i16 %%27, %%20, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_553_count);
  llvm_cbe_tmp__191 = (unsigned short )((unsigned short )(llvm_cbe_tmp__190 | llvm_cbe_tmp__183));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = or i32 %%15, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_554_count);
  llvm_cbe_tmp__192 = (unsigned int )llvm_cbe_tmp__178 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%29 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_555_count);
  llvm_cbe_tmp__193 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%30, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_556_count);
  llvm_cbe_tmp__194 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__193))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__193));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%28, i16* %%31, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_557_count);
  *llvm_cbe_tmp__194 = llvm_cbe_tmp__191;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%23, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_558_count);
  llvm_cbe_tmp__195 = (unsigned char )*llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i8 %%32 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_559_count);
  llvm_cbe_tmp__196 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__195&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = lshr i16 %%33, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_560_count);
  llvm_cbe_tmp__197 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__196&65535ull)) >> ((unsigned short )(((unsigned short )6)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__197&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add nsw i32 %%2, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_561_count);
  llvm_cbe_tmp__198 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(3u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__198&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = sext i32 %%35 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_562_count);
  llvm_cbe_tmp__199 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i8* %%a, i64 %%36, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_563_count);
  llvm_cbe_tmp__200 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__199))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__199));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load i8* %%37, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_564_count);
  llvm_cbe_tmp__201 = (unsigned char )*llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = zext i8 %%38 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__202 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__201&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = shl nuw nsw i16 %%39, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_566_count);
  llvm_cbe_tmp__203 = (unsigned short )((unsigned short )(llvm_cbe_tmp__202 << ((unsigned short )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add nsw i32 %%2, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_567_count);
  llvm_cbe_tmp__204 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__204&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = sext i32 %%41 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_568_count);
  llvm_cbe_tmp__205 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds i8* %%a, i64 %%42, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_569_count);
  llvm_cbe_tmp__206 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__205))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__205));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i8* %%43, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_570_count);
  llvm_cbe_tmp__207 = (unsigned char )*llvm_cbe_tmp__206;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = zext i8 %%44 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_571_count);
  llvm_cbe_tmp__208 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__207&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = shl i16 %%45, 10, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_572_count);
  llvm_cbe_tmp__209 = (unsigned short )((unsigned short )(llvm_cbe_tmp__208 << ((unsigned short )10)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = and i16 %%46, 1024, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_573_count);
  llvm_cbe_tmp__210 = (unsigned short )((unsigned short )(llvm_cbe_tmp__209 & ((unsigned short )1024)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = or i16 %%40, %%34, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_574_count);
  llvm_cbe_tmp__211 = (unsigned short )((unsigned short )(llvm_cbe_tmp__203 | llvm_cbe_tmp__197));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = or i16 %%48, %%47, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__212 = (unsigned short )((unsigned short )(llvm_cbe_tmp__211 | llvm_cbe_tmp__210));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = or i32 %%15, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__213 = (unsigned int )llvm_cbe_tmp__178 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = sext i32 %%50 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__214 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%51, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__215 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__214))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__214));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%49, i16* %%52, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_579_count);
  *llvm_cbe_tmp__215 = llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i8* %%43, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_580_count);
  llvm_cbe_tmp__216 = (unsigned char )*llvm_cbe_tmp__206;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = zext i8 %%53 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_581_count);
  llvm_cbe_tmp__217 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__216&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = lshr i16 %%54, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_582_count);
  llvm_cbe_tmp__218 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__217&65535ull)) >> ((unsigned short )(((unsigned short )1)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__218&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add nsw i32 %%2, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_583_count);
  llvm_cbe_tmp__219 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__219&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = sext i32 %%56 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_584_count);
  llvm_cbe_tmp__220 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds i8* %%a, i64 %%57, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_585_count);
  llvm_cbe_tmp__221 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__220))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__220));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i8* %%58, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_586_count);
  llvm_cbe_tmp__222 = (unsigned char )*llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = zext i8 %%59 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_587_count);
  llvm_cbe_tmp__223 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__222&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = shl nuw nsw i16 %%60, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_588_count);
  llvm_cbe_tmp__224 = (unsigned short )((unsigned short )(llvm_cbe_tmp__223 << ((unsigned short )7)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = and i16 %%61, 1920, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_589_count);
  llvm_cbe_tmp__225 = (unsigned short )((unsigned short )(llvm_cbe_tmp__224 & ((unsigned short )1920)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = or i16 %%62, %%55, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_590_count);
  llvm_cbe_tmp__226 = (unsigned short )((unsigned short )(llvm_cbe_tmp__225 | llvm_cbe_tmp__218));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = or i32 %%15, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_591_count);
  llvm_cbe_tmp__227 = (unsigned int )llvm_cbe_tmp__178 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = sext i32 %%64 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__228 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%65, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_593_count);
  llvm_cbe_tmp__229 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__228))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__228));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%63, i16* %%66, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_594_count);
  *llvm_cbe_tmp__229 = llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i8* %%58, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_595_count);
  llvm_cbe_tmp__230 = (unsigned char )*llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__230);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i8 %%67 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_596_count);
  llvm_cbe_tmp__231 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__230&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = lshr i16 %%68, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_597_count);
  llvm_cbe_tmp__232 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__231&65535ull)) >> ((unsigned short )(((unsigned short )4)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__232&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = add nsw i32 %%2, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_598_count);
  llvm_cbe_tmp__233 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__233&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = sext i32 %%70 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_599_count);
  llvm_cbe_tmp__234 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds i8* %%a, i64 %%71, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_600_count);
  llvm_cbe_tmp__235 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__234))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__234));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = load i8* %%72, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_601_count);
  llvm_cbe_tmp__236 = (unsigned char )*llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = zext i8 %%73 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_602_count);
  llvm_cbe_tmp__237 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__236&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = shl nuw nsw i16 %%74, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_603_count);
  llvm_cbe_tmp__238 = (unsigned short )((unsigned short )(llvm_cbe_tmp__237 << ((unsigned short )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__238);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = and i16 %%75, 2032, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_604_count);
  llvm_cbe_tmp__239 = (unsigned short )((unsigned short )(llvm_cbe_tmp__238 & ((unsigned short )2032)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = or i16 %%76, %%69, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_605_count);
  llvm_cbe_tmp__240 = (unsigned short )((unsigned short )(llvm_cbe_tmp__239 | llvm_cbe_tmp__232));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = or i32 %%15, 4, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_606_count);
  llvm_cbe_tmp__241 = (unsigned int )llvm_cbe_tmp__178 | 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = sext i32 %%78 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_607_count);
  llvm_cbe_tmp__242 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%79, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_608_count);
  llvm_cbe_tmp__243 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__242))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__242));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%77, i16* %%80, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_609_count);
  *llvm_cbe_tmp__243 = llvm_cbe_tmp__240;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load i8* %%72, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_610_count);
  llvm_cbe_tmp__244 = (unsigned char )*llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__244);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = zext i8 %%81 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__245 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__244&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = lshr i16 %%82, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__246 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__245&65535ull)) >> ((unsigned short )(((unsigned short )7)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__246&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = add nsw i32 %%2, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_613_count);
  llvm_cbe_tmp__247 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__247&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = sext i32 %%84 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_614_count);
  llvm_cbe_tmp__248 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds i8* %%a, i64 %%85, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_615_count);
  llvm_cbe_tmp__249 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__248))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__248));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = load i8* %%86, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_616_count);
  llvm_cbe_tmp__250 = (unsigned char )*llvm_cbe_tmp__249;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = zext i8 %%87 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_617_count);
  llvm_cbe_tmp__251 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__250&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = shl nuw nsw i16 %%88, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_618_count);
  llvm_cbe_tmp__252 = (unsigned short )((unsigned short )(llvm_cbe_tmp__251 << ((unsigned short )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__252);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = add nsw i32 %%2, 8, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_619_count);
  llvm_cbe_tmp__253 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(8u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__253&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = sext i32 %%90 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__254 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__253);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = getelementptr inbounds i8* %%a, i64 %%91, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_621_count);
  llvm_cbe_tmp__255 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__254))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__254));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = load i8* %%92, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_622_count);
  llvm_cbe_tmp__256 = (unsigned char )*llvm_cbe_tmp__255;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = zext i8 %%93 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_623_count);
  llvm_cbe_tmp__257 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__256&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = shl i16 %%94, 9, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_624_count);
  llvm_cbe_tmp__258 = (unsigned short )((unsigned short )(llvm_cbe_tmp__257 << ((unsigned short )9)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__258);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = and i16 %%95, 1536, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_625_count);
  llvm_cbe_tmp__259 = (unsigned short )((unsigned short )(llvm_cbe_tmp__258 & ((unsigned short )1536)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__259);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = or i16 %%89, %%83, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_626_count);
  llvm_cbe_tmp__260 = (unsigned short )((unsigned short )(llvm_cbe_tmp__252 | llvm_cbe_tmp__246));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = or i16 %%97, %%96, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_627_count);
  llvm_cbe_tmp__261 = (unsigned short )((unsigned short )(llvm_cbe_tmp__260 | llvm_cbe_tmp__259));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = or i32 %%15, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_628_count);
  llvm_cbe_tmp__262 = (unsigned int )llvm_cbe_tmp__178 | 5u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = sext i32 %%99 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_629_count);
  llvm_cbe_tmp__263 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__263);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%100, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_630_count);
  llvm_cbe_tmp__264 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__263))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__263));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%98, i16* %%101, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_631_count);
  *llvm_cbe_tmp__264 = llvm_cbe_tmp__261;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load i8* %%92, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_632_count);
  llvm_cbe_tmp__265 = (unsigned char )*llvm_cbe_tmp__255;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__265);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = zext i8 %%102 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_633_count);
  llvm_cbe_tmp__266 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__265&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = lshr i16 %%103, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_634_count);
  llvm_cbe_tmp__267 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__266&65535ull)) >> ((unsigned short )(((unsigned short )2)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__267&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = add nsw i32 %%2, 9, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_635_count);
  llvm_cbe_tmp__268 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(9u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__268&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = sext i32 %%105 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_636_count);
  llvm_cbe_tmp__269 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__269);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = getelementptr inbounds i8* %%a, i64 %%106, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_637_count);
  llvm_cbe_tmp__270 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__269))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__269));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load i8* %%107, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_638_count);
  llvm_cbe_tmp__271 = (unsigned char )*llvm_cbe_tmp__270;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = zext i8 %%108 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_639_count);
  llvm_cbe_tmp__272 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__271&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__272);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = shl nuw nsw i16 %%109, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_640_count);
  llvm_cbe_tmp__273 = (unsigned short )((unsigned short )(llvm_cbe_tmp__272 << ((unsigned short )6)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__273);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = and i16 %%110, 1984, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_641_count);
  llvm_cbe_tmp__274 = (unsigned short )((unsigned short )(llvm_cbe_tmp__273 & ((unsigned short )1984)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = or i16 %%111, %%104, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_642_count);
  llvm_cbe_tmp__275 = (unsigned short )((unsigned short )(llvm_cbe_tmp__274 | llvm_cbe_tmp__267));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__275);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = or i32 %%15, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_643_count);
  llvm_cbe_tmp__276 = (unsigned int )llvm_cbe_tmp__178 | 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = sext i32 %%113 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_644_count);
  llvm_cbe_tmp__277 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%114, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_645_count);
  llvm_cbe_tmp__278 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__277))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__277));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%112, i16* %%115, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_646_count);
  *llvm_cbe_tmp__278 = llvm_cbe_tmp__275;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__275);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = load i8* %%107, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__279 = (unsigned char )*llvm_cbe_tmp__270;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__279);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = zext i8 %%116 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__280 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__279&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__280);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = lshr i16 %%117, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_649_count);
  llvm_cbe_tmp__281 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__280&65535ull)) >> ((unsigned short )(((unsigned short )5)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__281&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = add nsw i32 %%2, 10, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_650_count);
  llvm_cbe_tmp__282 = (unsigned int )((unsigned int )(llvm_cbe_tmp__165&4294967295ull)) + ((unsigned int )(10u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__282&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = sext i32 %%119 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_651_count);
  llvm_cbe_tmp__283 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__283);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = getelementptr inbounds i8* %%a, i64 %%120, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_652_count);
  llvm_cbe_tmp__284 = ( char *)(&llvm_cbe_a[(((signed long long )llvm_cbe_tmp__283))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__283));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = load i8* %%121, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_653_count);
  llvm_cbe_tmp__285 = (unsigned char )*llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = zext i8 %%122 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__286 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__285&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = shl nuw nsw i16 %%123, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_655_count);
  llvm_cbe_tmp__287 = (unsigned short )((unsigned short )(llvm_cbe_tmp__286 << ((unsigned short )3)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__287);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = or i16 %%124, %%118, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_656_count);
  llvm_cbe_tmp__288 = (unsigned short )((unsigned short )(llvm_cbe_tmp__287 | llvm_cbe_tmp__281));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = or i32 %%15, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_657_count);
  llvm_cbe_tmp__289 = (unsigned int )llvm_cbe_tmp__178 | 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = sext i32 %%126 to i64, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_658_count);
  llvm_cbe_tmp__290 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__290);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%127, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_659_count);
  llvm_cbe_tmp__291 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__290))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__290));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%125, i16* %%128, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_660_count);
  *llvm_cbe_tmp__291 = llvm_cbe_tmp__288;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = add nsw i32 %%storemerge1, 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_661_count);
  llvm_cbe_tmp__292 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__292&4294967295ull)));
  if (((llvm_cbe_tmp__292&4294967295U) == (84u&4294967295U))) {
    goto llvm_cbe_tmp__339;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__292;   /* for PHI node */
    goto llvm_cbe_tmp__338;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__339:
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = getelementptr inbounds i8* %%a, i64 928, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_705_count);
  llvm_cbe_tmp__293 = ( char *)(&llvm_cbe_a[(((signed long long )928ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = load i8* %%131, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_706_count);
  llvm_cbe_tmp__294 = (unsigned char )*llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__294);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = zext i8 %%132 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_707_count);
  llvm_cbe_tmp__295 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__294&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = lshr i16 %%133, 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__296 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__295&65535ull)) >> ((unsigned short )(((unsigned short )1)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__296&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = getelementptr inbounds i8* %%a, i64 929, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_709_count);
  llvm_cbe_tmp__297 = ( char *)(&llvm_cbe_a[(((signed long long )929ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = load i8* %%135, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_710_count);
  llvm_cbe_tmp__298 = (unsigned char )*llvm_cbe_tmp__297;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__298);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = zext i8 %%136 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_711_count);
  llvm_cbe_tmp__299 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__298&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__299);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = shl nuw nsw i16 %%137, 7, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_712_count);
  llvm_cbe_tmp__300 = (unsigned short )((unsigned short )(llvm_cbe_tmp__299 << ((unsigned short )7)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__300);
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = and i16 %%138, 1920, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__301 = (unsigned short )((unsigned short )(llvm_cbe_tmp__300 & ((unsigned short )1920)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = or i16 %%139, %%134, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_714_count);
  llvm_cbe_tmp__302 = (unsigned short )((unsigned short )(llvm_cbe_tmp__301 | llvm_cbe_tmp__296));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__302);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 675, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_715_count);
  llvm_cbe_tmp__303 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )675ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%140, i16* %%141, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_716_count);
  *llvm_cbe_tmp__303 = llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__302);
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = getelementptr inbounds i8* %%a, i64 926, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_717_count);
  llvm_cbe_tmp__304 = ( char *)(&llvm_cbe_a[(((signed long long )926ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = load i8* %%142, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_718_count);
  llvm_cbe_tmp__305 = (unsigned char )*llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = zext i8 %%143 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_719_count);
  llvm_cbe_tmp__306 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__305&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = lshr i16 %%144, 6, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_720_count);
  llvm_cbe_tmp__307 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__306&65535ull)) >> ((unsigned short )(((unsigned short )6)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__307&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = getelementptr inbounds i8* %%a, i64 927, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_721_count);
  llvm_cbe_tmp__308 = ( char *)(&llvm_cbe_a[(((signed long long )927ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = load i8* %%146, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_722_count);
  llvm_cbe_tmp__309 = (unsigned char )*llvm_cbe_tmp__308;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__309);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = zext i8 %%147 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_723_count);
  llvm_cbe_tmp__310 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__309&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = shl nuw nsw i16 %%148, 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_724_count);
  llvm_cbe_tmp__311 = (unsigned short )((unsigned short )(llvm_cbe_tmp__310 << ((unsigned short )2)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = load i8* %%131, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_725_count);
  llvm_cbe_tmp__312 = (unsigned char )*llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__312);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = zext i8 %%150 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_726_count);
  llvm_cbe_tmp__313 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__312&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = shl i16 %%151, 10, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_727_count);
  llvm_cbe_tmp__314 = (unsigned short )((unsigned short )(llvm_cbe_tmp__313 << ((unsigned short )10)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__314);
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = and i16 %%152, 1024, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_728_count);
  llvm_cbe_tmp__315 = (unsigned short )((unsigned short )(llvm_cbe_tmp__314 & ((unsigned short )1024)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__315);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = or i16 %%149, %%145, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_729_count);
  llvm_cbe_tmp__316 = (unsigned short )((unsigned short )(llvm_cbe_tmp__311 | llvm_cbe_tmp__307));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = or i16 %%154, %%153, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_730_count);
  llvm_cbe_tmp__317 = (unsigned short )((unsigned short )(llvm_cbe_tmp__316 | llvm_cbe_tmp__315));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 674, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_731_count);
  llvm_cbe_tmp__318 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )674ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%155, i16* %%156, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_732_count);
  *llvm_cbe_tmp__318 = llvm_cbe_tmp__317;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = getelementptr inbounds i8* %%a, i64 925, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_733_count);
  llvm_cbe_tmp__319 = ( char *)(&llvm_cbe_a[(((signed long long )925ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = load i8* %%157, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_734_count);
  llvm_cbe_tmp__320 = (unsigned char )*llvm_cbe_tmp__319;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__320);
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = zext i8 %%158 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_735_count);
  llvm_cbe_tmp__321 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__320&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = lshr i16 %%159, 3, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__322 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__321&65535ull)) >> ((unsigned short )(((unsigned short )3)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__322&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = load i8* %%142, align 1, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_737_count);
  llvm_cbe_tmp__323 = (unsigned char )*llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = zext i8 %%161 to i16, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_738_count);
  llvm_cbe_tmp__324 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__323&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__324);
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = shl nuw nsw i16 %%162, 5, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_739_count);
  llvm_cbe_tmp__325 = (unsigned short )((unsigned short )(llvm_cbe_tmp__324 << ((unsigned short )5)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = and i16 %%163, 2016, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_740_count);
  llvm_cbe_tmp__326 = (unsigned short )((unsigned short )(llvm_cbe_tmp__325 & ((unsigned short )2016)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = or i16 %%164, %%160, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_741_count);
  llvm_cbe_tmp__327 = (unsigned short )((unsigned short )(llvm_cbe_tmp__326 | llvm_cbe_tmp__322));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 673, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_742_count);
  llvm_cbe_tmp__328 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )673ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%165, i16* %%166, align 2, !dbg !5 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_743_count);
  *llvm_cbe_tmp__328 = llvm_cbe_tmp__327;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = getelementptr inbounds i8* %%a, i64 924, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_744_count);
  llvm_cbe_tmp__329 = ( char *)(&llvm_cbe_a[(((signed long long )924ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = load i8* %%167, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_745_count);
  llvm_cbe_tmp__330 = (unsigned char )*llvm_cbe_tmp__329;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__330);
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = zext i8 %%168 to i16, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_746_count);
  llvm_cbe_tmp__331 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__330&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = load i8* %%157, align 1, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_747_count);
  llvm_cbe_tmp__332 = (unsigned char )*llvm_cbe_tmp__319;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__332);
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = zext i8 %%170 to i16, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_748_count);
  llvm_cbe_tmp__333 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__332&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__333);
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = shl nuw i16 %%171, 8, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_749_count);
  llvm_cbe_tmp__334 = (unsigned short )((unsigned short )(llvm_cbe_tmp__333 << ((unsigned short )8)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__334);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = and i16 %%172, 1792, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_750_count);
  llvm_cbe_tmp__335 = (unsigned short )((unsigned short )(llvm_cbe_tmp__334 & ((unsigned short )1792)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = or i16 %%173, %%169, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_751_count);
  llvm_cbe_tmp__336 = (unsigned short )((unsigned short )(llvm_cbe_tmp__335 | llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__336);
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 672, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_752_count);
  llvm_cbe_tmp__337 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )672ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%174, i16* %%175, align 2, !dbg !6 for 0x%I64xth hint within @poly_Sq_frombytes  --> \n", ++aesl_llvm_cbe_753_count);
  *llvm_cbe_tmp__337 = llvm_cbe_tmp__336;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__336);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Sq_frombytes}\n");
  return;
}


void poly_Rq_sum_zero_tobytes( char *llvm_cbe_r, l_struct_OC_poly *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Rq_sum_zero_tobytes\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @poly_Sq_tobytes(i8* %%r, %%struct.poly* %%a), !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_tobytes  --> \n", ++aesl_llvm_cbe_759_count);
   /*tail*/ poly_Sq_tobytes(( char *)llvm_cbe_r, (l_struct_OC_poly *)llvm_cbe_a);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Rq_sum_zero_tobytes}\n");
  return;
}


void poly_Rq_sum_zero_frombytes(l_struct_OC_poly *llvm_cbe_r,  char *llvm_cbe_a) {
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  signed short *llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  unsigned long long llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  signed short *llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  unsigned short llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  unsigned short llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  unsigned short llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  unsigned int llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  unsigned short llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  unsigned short llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @poly_Rq_sum_zero_frombytes\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call void @poly_Sq_frombytes(%%struct.poly* %%r, i8* %%a), !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_770_count);
   /*tail*/ poly_Sq_frombytes((l_struct_OC_poly *)llvm_cbe_r, ( char *)llvm_cbe_a);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 676, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_771_count);
  llvm_cbe_tmp__340 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )676ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i16 0, i16* %%1, align 2, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_772_count);
  *llvm_cbe_tmp__340 = ((unsigned short )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )0));
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__349;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__349:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%8, %%2  for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__346);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%storemerge1 to i64, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_778_count);
  llvm_cbe_tmp__341 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__341);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.poly* %%r, i64 0, i32 0, i64 %%3, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_779_count);
  llvm_cbe_tmp__342 = (signed short *)(&llvm_cbe_r->field0[(((signed long long )llvm_cbe_tmp__341))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__341));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i16* %%4, align 2, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_780_count);
  llvm_cbe_tmp__343 = (unsigned short )*llvm_cbe_tmp__342;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__343);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i16* %%1, align 2, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_781_count);
  llvm_cbe_tmp__344 = (unsigned short )*llvm_cbe_tmp__340;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add i16 %%6, %%5, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_782_count);
  llvm_cbe_tmp__345 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__344&65535ull)) + ((unsigned short )(llvm_cbe_tmp__343&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__345&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%7, i16* %%1, align 2, !dbg !4 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_783_count);
  *llvm_cbe_tmp__340 = llvm_cbe_tmp__345;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__345);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge1, 1, !dbg !5 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_784_count);
  llvm_cbe_tmp__346 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__346&4294967295ull)));
  if (((llvm_cbe_tmp__346&4294967295U) == (676u&4294967295U))) {
    goto llvm_cbe_tmp__350;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__346;   /* for PHI node */
    goto llvm_cbe_tmp__349;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__350:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = sub i16 0, %%7, !dbg !5 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__347 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__345)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__347&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = and i16 %%10, 2047, !dbg !5 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__348 = (unsigned short )((unsigned short )(llvm_cbe_tmp__347 & ((unsigned short )2047)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__348);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%11, i16* %%1, align 2, !dbg !5 for 0x%I64xth hint within @poly_Rq_sum_zero_frombytes  --> \n", ++aesl_llvm_cbe_792_count);
  *llvm_cbe_tmp__340 = llvm_cbe_tmp__348;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__348);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @poly_Rq_sum_zero_frombytes}\n");
  return;
}

