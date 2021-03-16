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
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC__iobuf {
   char *field0;
  unsigned int field1;
   char *field2;
  unsigned int field3;
  unsigned int field4;
  unsigned int field5;
  unsigned int field6;
   char *field7;
};


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int isxdigit2(signed int llvm_cbe_ch);
signed int main(void);
void randombytes_init( char *,  char *, signed int );
signed int randombytes( char *, signed long long );
void fprintBstr(l_struct_OC__iobuf *llvm_cbe_fp,  char *llvm_cbe_S,  char *llvm_cbe_A, signed long long llvm_cbe_L);
signed int FindMarker(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_marker);
signed int ReadHex(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_A, signed int llvm_cbe_Length,  char *llvm_cbe_str);
signed int crypto_kem_keypair( char *,  char *);
signed int crypto_kem_enc( char *,  char *,  char *);
signed int AESL_WRAP_crypto_kem_dec( char *,  char *,  char *);


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str[17] = "PQCkemKAT_%d.req";
static  char aesl_internal__OC_str1[2] = "w";
static  char aesl_internal__OC_str2[30] = "Couldn't open <%s> for write\n";
static  char aesl_internal__OC_str3[17] = "PQCkemKAT_%d.rsp";
static  char aesl_internal__OC_str4[12] = "count = %d\n";
static  char aesl_internal__OC_str10[2] = "r";
static  char aesl_internal__OC_str5[8] = "seed = ";
static  char aesl_internal__OC_str6[6] = "pk =\n";
static  char aesl_internal__OC_str7[6] = "sk =\n";
static  char aesl_internal__OC_str8[6] = "ct =\n";
static  char aesl_internal__OC_str9[7] = "ss =\n\n";
static  char aesl_internal__OC_str11[29] = "Couldn't open <%s> for read\n";
static  char aesl_internal__OC_str12[7] = "# %s\n\n";
static  char aesl_internal__OC_str13[16] = "NTRU-HPS2048677";
static  char aesl_internal__OC_str27[5] = "%02X";
static  char aesl_internal__OC_str21[6] = "ct = ";
static  char aesl_internal__OC_str18[6] = "pk = ";
static  char aesl_internal__OC_str20[30] = "crypto_kem_enc returned <%d>\n";
static  char aesl_internal__OC_str14[9] = "count = ";
static  char aesl_internal__OC_str28[3] = "00";
static  char aesl_internal__OC_str22[6] = "ss = ";
static  char aesl_internal__OC_str19[6] = "sk = ";
static  char aesl_internal__OC_str17[34] = "crypto_kem_keypair returned <%d>\n";
static  char aesl_internal_str[39] = "crypto_kem_dec returned bad 'ss' value";
static  char aesl_internal__OC_str16[40] = "ERROR: unable to read 'seed' from <%s>\n";
static  char aesl_internal__OC_str15[3] = "%d";
static  char aesl_internal__OC_str24[30] = "crypto_kem_dec returned <%d>\n";


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

signed int isxdigit2(signed int llvm_cbe_ch) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @isxdigit2\n");
  if (((llvm_cbe_ch&4294967295U) == (48u&4294967295U))) {
    goto llvm_cbe_tmp__1;
  } else {
    goto llvm_cbe_tmp__2;
  }

llvm_cbe_tmp__2:
  switch (((unsigned int )(llvm_cbe_ch&4294967295ull))) {
  default:
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__3;
;
  case ((unsigned int )(70u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(69u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(68u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(67u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(66u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(65u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(57u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(56u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(55u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(54u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(53u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(52u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(51u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(50u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  case ((unsigned int )(49u&4294967295ull)):
    goto llvm_cbe_tmp__1;
    break;
  }
llvm_cbe_tmp__1:
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__3;

llvm_cbe_tmp__3:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 1, %%3 ], [ 0, %%2  for 0x%I64xth hint within @isxdigit2  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @isxdigit2}\n");
  return llvm_cbe_storemerge;
}


signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_fn_req_count = 0;
   char llvm_cbe_fn_req[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_fn_rsp_count = 0;
   char llvm_cbe_fn_rsp[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_seed_count = 0;
   char llvm_cbe_seed[48];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_entropy_input_count = 0;
   char llvm_cbe_entropy_input[48];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ct_count = 0;
   char llvm_cbe_ct[930];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ss_count = 0;
   char llvm_cbe_ss[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_ss1_count = 0;
   char llvm_cbe_ss1[32];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_count_count = 0;
  signed int llvm_cbe_count;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_pk_count = 0;
   char llvm_cbe_pk[930];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_sk_count = 0;
   char llvm_cbe_sk[1234];    /* Address-exposed local */
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
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__6;
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
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__10;
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
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge9_count = 0;
  unsigned int llvm_cbe_storemerge9;
  unsigned int llvm_cbe_storemerge9__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned char llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
   char *llvm_cbe_tmp__16;
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
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__25;
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
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
   char *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
   char *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
   char *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
   char *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
   char *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc_count = 0;
  unsigned int llvm_cbe_fputc;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts_count = 0;
  unsigned int llvm_cbe_puts;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned int llvm_cbe_tmp__48;
  unsigned int llvm_cbe_tmp__48__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [32 x i8]* %%fn_req, i64 0, i64 0, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_fn_req[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i32 (i8*, i8*, ...)* @sprintf(i8* %%1, i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str, i64 0, i64 0), i32 1234) nounwind, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_34_count);
  sprintf(( char *)llvm_cbe_tmp__4, ( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 1234u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1234u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__6 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__4, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
  if (((llvm_cbe_tmp__6) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__49;
  } else {
    goto llvm_cbe_tmp__50;
  }

llvm_cbe_tmp__49:
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str2, i64 0, i64 0), i8* %%1) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_50_count);
  printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__7);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [32 x i8]* %%fn_rsp, i64 0, i64 0, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__8 = ( char *)(&llvm_cbe_fn_rsp[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = call i32 (i8*, i8*, ...)* @sprintf(i8* %%8, i8* getelementptr inbounds ([17 x i8]* @aesl_internal_.str3, i64 0, i64 0), i32 1234) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_53_count);
  sprintf(( char *)llvm_cbe_tmp__8, ( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17
#endif
])), 1234u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1234u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call %%struct._iobuf* @fopen(i8* %%8, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__10 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__8, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}
  if (((llvm_cbe_tmp__10) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__52;
  } else {
    llvm_cbe_storemerge9__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe_tmp__52:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str2, i64 0, i64 0), i8* %%8) nounwind, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_67_count);
  printf(( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), ( char *)llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__11);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge9 = phi i32 [ %%17, %%.preheader ], [ 0, %%7  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge9_count);
  llvm_cbe_storemerge9 = (unsigned int )llvm_cbe_storemerge9__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge9 = 0x%X",llvm_cbe_storemerge9);
printf("\n = 0x%X",llvm_cbe_tmp__15);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = trunc i32 %%storemerge9 to i8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__12 = (unsigned char )((unsigned char )llvm_cbe_storemerge9&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = sext i32 %%storemerge9 to i64, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge9);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [48 x i8]* %%entropy_input, i64 0, i64 %%15, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__14 = ( char *)(&llvm_cbe_entropy_input[(((signed long long )llvm_cbe_tmp__13))
#ifdef AESL_BC_SIM
 % 48
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__13) < 48 && "Write access out of array 'entropy_input' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%16, align 1, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_72_count);
  *llvm_cbe_tmp__14 = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%storemerge9, 1, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(llvm_cbe_storemerge9&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__15&4294967295ull)));
  if (((llvm_cbe_tmp__15&4294967295U) == (48u&4294967295U))) {
    goto llvm_cbe_tmp__53;
  } else {
    llvm_cbe_storemerge9__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__15;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__53:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [48 x i8]* %%entropy_input, i64 0, i64 0, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__16 = ( char *)(&llvm_cbe_entropy_input[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @randombytes_init(i8* %%19, i8* null, i32 256) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_84_count);
  randombytes_init(( char *)llvm_cbe_tmp__16, ( char *)(( char *)/*NULL*/0), 256u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",256u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [48 x i8]* %%seed, i64 0, i64 0, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_seed[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 48
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%3, i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 0) nounwind, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_94_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), 0u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__18);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i32 @randombytes(i8* %%20, i64 48) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_95_count);
  randombytes(( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__19);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%3, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0), i8* %%20, i64 48), !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_96_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__6, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), ( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str6, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_97_count);
  fwrite(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str7, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_98_count);
  fwrite(( char *)((&aesl_internal__OC_str7[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__21);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = call i64 @fwrite(i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str8, i64 0, i64 0), i64 5, i64 1, %%struct._iobuf* %%3), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_99_count);
  fwrite(( char *)((&aesl_internal__OC_str8[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), 5ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",5ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = call i64 @fwrite(i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str9, i64 0, i64 0), i64 6, i64 1, %%struct._iobuf* %%3), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_100_count);
  fwrite(( char *)((&aesl_internal__OC_str9[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), 6ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",6ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__23);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = call i32 @fclose(%%struct._iobuf* %%3) nounwind, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_101_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__24);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str10, i64 0, i64 0)) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__25 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__4, ( char *)((&aesl_internal__OC_str10[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__25);
}
  if (((llvm_cbe_tmp__25) == (((l_struct_OC__iobuf *)/*NULL*/0)))) {
    goto llvm_cbe_tmp__54;
  } else {
    goto llvm_cbe_tmp__55;
  }

llvm_cbe_tmp__54:
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([29 x i8]* @aesl_internal_.str11, i64 0, i64 0), i8* %%1) nounwind, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_117_count);
  printf(( char *)((&aesl_internal__OC_str11[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 29
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__26);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967295u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__55:
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%10, i8* getelementptr inbounds ([7 x i8]* @aesl_internal_.str12, i64 0, i64 0), i8* getelementptr inbounds ([16 x i8]* @aesl_internal_.str13, i64 0, i64 0)) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_119_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str12[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 7
#endif
])), ( char *)((&aesl_internal__OC_str13[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [930 x i8]* %%pk, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__28 = ( char *)(&llvm_cbe_pk[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 930
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [1234 x i8]* %%sk, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__29 = ( char *)(&llvm_cbe_sk[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1234
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds [930 x i8]* %%ct, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__30 = ( char *)(&llvm_cbe_ct[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 930
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [32 x i8]* %%ss, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__31 = ( char *)(&llvm_cbe_ss[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [32 x i8]* %%ss1, i64 0, i64 0, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__32 = ( char *)(&llvm_cbe_ss1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  goto llvm_cbe_tmp__56;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__56:
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = call i32 @FindMarker(%%struct._iobuf* %%28, i8* getelementptr inbounds ([9 x i8]* @aesl_internal_.str14, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__33 = (unsigned int )FindMarker((l_struct_OC__iobuf *)llvm_cbe_tmp__25, ( char *)((&aesl_internal__OC_str14[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 9
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__33);
}
  if (((llvm_cbe_tmp__33&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__57;
  } else {
    goto llvm_cbe_tmp__58;
  }

llvm_cbe_tmp__59:
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = call i32 @memcmp(i8* %%37, i8* %%38, i64 32) nounwind, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__45 = (unsigned int )memcmp(( char *)llvm_cbe_tmp__31, ( char *)llvm_cbe_tmp__32, 32ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__45);
}
  if (((llvm_cbe_tmp__45&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__56;
  } else {
    goto llvm_cbe_tmp__60;
  }

llvm_cbe_tmp__61:
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str21, i64 0, i64 0), i8* %%36, i64 930), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_167_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str21[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__30, 930ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",930ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str22, i64 0, i64 0), i8* %%37, i64 32), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_168_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str22[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__31, 32ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",32ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc = call i32 @fputc(i32 10, %%struct._iobuf* %%10), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_fputc_count);
  fputc(10u, (l_struct_OC__iobuf *)llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn fputc = 0x%X",llvm_cbe_fputc);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = call i32 @AESL_WRAP_crypto_kem_dec(i8* %%38, i8* %%36, i8* %%35) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__43 = (unsigned int )AESL_WRAP_crypto_kem_dec(( char *)llvm_cbe_tmp__32, ( char *)llvm_cbe_tmp__30, ( char *)llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__43);
}
  if (((llvm_cbe_tmp__43&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__59;
  } else {
    goto llvm_cbe_tmp__62;
  }

llvm_cbe_tmp__63:
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str18, i64 0, i64 0), i8* %%34, i64 930), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_156_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str18[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__28, 930ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",930ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([6 x i8]* @aesl_internal_.str19, i64 0, i64 0), i8* %%35, i64 1234), !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_157_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str19[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 6
#endif
])), ( char *)llvm_cbe_tmp__29, 1234ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",1234ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = call i32 @crypto_kem_enc(i8* %%36, i8* %%37, i8* %%34) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__41 = (unsigned int )crypto_kem_enc(( char *)llvm_cbe_tmp__30, ( char *)llvm_cbe_tmp__31, ( char *)llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__41);
}
  if (((llvm_cbe_tmp__41&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__61;
  } else {
    goto llvm_cbe_tmp__64;
  }

llvm_cbe_tmp__65:
if (AESL_DEBUG_TRACE)
printf("\n  call void @fprintBstr(%%struct._iobuf* %%10, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0), i8* %%20, i64 48), !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_145_count);
  fprintBstr((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])), ( char *)llvm_cbe_tmp__17, 48ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",48ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @randombytes_init(i8* %%20, i8* null, i32 256) nounwind, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_146_count);
  randombytes_init(( char *)llvm_cbe_tmp__17, ( char *)(( char *)/*NULL*/0), 256u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",256u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = call i32 @crypto_kem_keypair(i8* %%34, i8* %%35) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__39 = (unsigned int )crypto_kem_keypair(( char *)llvm_cbe_tmp__28, ( char *)llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__39);
}
  if (((llvm_cbe_tmp__39&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__63;
  } else {
    goto llvm_cbe_tmp__66;
  }

llvm_cbe_tmp__58:
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%28, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str15, i64 0, i64 0), i32* %%count) nounwind, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_131_count);
  fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__25, ( char *)((&aesl_internal__OC_str15[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (signed int *)(&llvm_cbe_count));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i32* %%count, align 4, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_138_count);
  llvm_cbe_tmp__35 = (unsigned int )*(&llvm_cbe_count);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%10, i8* getelementptr inbounds ([12 x i8]* @aesl_internal_.str4, i64 0, i64 0), i32 %%44) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_139_count);
  fprintf((l_struct_OC__iobuf *)llvm_cbe_tmp__10, ( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 12
#endif
])), llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__35);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__36);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = call i32 @ReadHex(%%struct._iobuf* %%28, i8* %%20, i32 48, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_.str5, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__37 = (unsigned int )ReadHex((l_struct_OC__iobuf *)llvm_cbe_tmp__25, ( char *)llvm_cbe_tmp__17, 48u, ( char *)((&aesl_internal__OC_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",48u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__37);
}
  if (((llvm_cbe_tmp__37&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__67;
  } else {
    goto llvm_cbe_tmp__65;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__67:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([40 x i8]* @aesl_internal_.str16, i64 0, i64 0), i8* %%1) nounwind, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_143_count);
  printf(( char *)((&aesl_internal__OC_str16[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 40
#endif
])), ( char *)llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__38);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967293u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__66:
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([34 x i8]* @aesl_internal_.str17, i64 0, i64 0), i32 %%51) nounwind, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_154_count);
  printf(( char *)((&aesl_internal__OC_str17[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 34
#endif
])), llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__39);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__40);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__64:
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str20, i64 0, i64 0), i32 %%56) nounwind, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_165_count);
  printf(( char *)((&aesl_internal__OC_str20[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__41);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__42);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_.str24, i64 0, i64 0), i32 %%61) nounwind, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_176_count);
  printf(( char *)((&aesl_internal__OC_str24[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])), llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__43);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__44);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__60:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts = call i32 @puts(i8* getelementptr inbounds ([39 x i8]* @aesl_internal_str, i64 0, i64 0)), !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts_count);
  puts(( char *)((&aesl_internal_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 39
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts = 0x%X",llvm_cbe_puts);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )4294967292u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__57:
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = call i32 @fclose(%%struct._iobuf* %%28) nounwind, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_182_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__46);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = call i32 @fclose(%%struct._iobuf* %%10) nounwind, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_183_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__47);
}
  llvm_cbe_tmp__48__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = phi i32 [ 0, %%69 ], [ -4, %%68 ], [ -4, %%63 ], [ -4, %%58 ], [ -4, %%53 ], [ -3, %%48 ], [ -1, %%30 ], [ -1, %%12 ], [ -1, %%5  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__48 = (unsigned int )llvm_cbe_tmp__48__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__48);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967292u);
printf("\n = 0x%X",4294967293u);
printf("\n = 0x%X",4294967295u);
printf("\n = 0x%X",4294967295u);
printf("\n = 0x%X",4294967295u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return llvm_cbe_tmp__48;
}


void fprintBstr(l_struct_OC__iobuf *llvm_cbe_fp,  char *llvm_cbe_S,  char *llvm_cbe_A, signed long long llvm_cbe_L) {
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
  static  unsigned long long aesl_llvm_cbe_fputs_count = 0;
  unsigned int llvm_cbe_fputs;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
   char *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned char llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned long long llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  unsigned long long llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_fputc_count = 0;
  unsigned int llvm_cbe_fputc;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @fprintBstr\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%fputs = tail call i32 @fputs(i8* %%S, %%struct._iobuf* %%fp), !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_fputs_count);
   /*tail*/ fputs(( char *)llvm_cbe_S, (l_struct_OC__iobuf *)llvm_cbe_fp);
if (AESL_DEBUG_TRACE) {
printf("\nReturn fputs = 0x%X",llvm_cbe_fputs);
}
  if (((llvm_cbe_L&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge_2e_thread;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%6, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__72);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i8* %%A, i64 %%storemerge1, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__68 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i8* %%2, align 1, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__69 = (unsigned char )*llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = zext i8 %%3 to i32, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__70 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_tmp__69&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = tail call i32 (%%struct._iobuf*, i8*, ...)* @fprintf(%%struct._iobuf* %%fp, i8* getelementptr inbounds ([5 x i8]* @aesl_internal_.str27, i64 0, i64 0), i32 %%4) nounwind, !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_208_count);
   /*tail*/ fprintf((l_struct_OC__iobuf *)llvm_cbe_fp, ( char *)((&aesl_internal__OC_str27[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__70);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__71);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i64 %%storemerge1, 1, !dbg !16 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__72 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__72&18446744073709551615ull)));
  if (((llvm_cbe_tmp__72&18446744073709551615ULL) == (llvm_cbe_L&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__72;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
  if (((llvm_cbe_L&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    goto llvm_cbe__2e__crit_edge_2e_thread;
  } else {
    goto llvm_cbe_tmp__74;
  }

llvm_cbe__2e__crit_edge_2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = tail call i64 @fwrite(i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str28, i64 0, i64 0), i64 2, i64 1, %%struct._iobuf* %%fp), !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_216_count);
   /*tail*/ fwrite(( char *)((&aesl_internal__OC_str28[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), 2ull, 1ull, (l_struct_OC__iobuf *)llvm_cbe_fp);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",2ull);
printf("\nArgument  = 0x%I64X",1ull);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__73);
}
  goto llvm_cbe_tmp__74;

llvm_cbe_tmp__74:
if (AESL_DEBUG_TRACE)
printf("\n  %%fputc = tail call i32 @fputc(i32 10, %%struct._iobuf* %%fp), !dbg !15 for 0x%I64xth hint within @fprintBstr  --> \n", ++aesl_llvm_cbe_fputc_count);
   /*tail*/ fputc(10u, (l_struct_OC__iobuf *)llvm_cbe_fp);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",10u);
printf("\nReturn fputc = 0x%X",llvm_cbe_fputc);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @fprintBstr}\n");
  return;
}


signed int FindMarker(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_marker) {
  static  unsigned long long aesl_llvm_cbe_line_count = 0;
   char llvm_cbe_line[50];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  unsigned long long llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge_count = 0;
  unsigned int llvm_cbe_storemerge;
  unsigned int llvm_cbe_storemerge__PHI_TEMPORARY;
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
  unsigned int llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned char llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
   char *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
   char *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
   char *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_op_count = 0;
  unsigned int llvm_cbe__2e_op;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  unsigned int llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  unsigned char llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
   char *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge13_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge13_2e_us;
  unsigned int llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  unsigned long long llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
   char *llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  unsigned char llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  unsigned long long llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
   char *llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  unsigned char llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned long long llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
   char *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  unsigned int llvm_cbe_tmp__103;
  unsigned int llvm_cbe_tmp__103__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @FindMarker\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = call i64 @strlen(i8* %%marker) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_226_count);
  llvm_cbe_tmp__75 = (unsigned long long )strlen(( char *)llvm_cbe_marker);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__75);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = trunc i64 %%1 to i32, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__76 = (unsigned int )((unsigned int )llvm_cbe_tmp__75&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%3, i32 49, i32 %%2, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )(((((signed int )llvm_cbe_tmp__76) > ((signed int )49u))) ? ((unsigned int )49u) : ((unsigned int )llvm_cbe_tmp__76));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
  llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__104;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__104:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge = phi i32 [ 0, %%0 ], [ %%12, %%6  for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_storemerge_count);
  llvm_cbe_storemerge = (unsigned int )llvm_cbe_storemerge__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge = 0x%X",llvm_cbe_storemerge);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__81);
}
  if ((((signed int )llvm_cbe_storemerge) < ((signed int )llvm_cbe__2e_))) {
    goto llvm_cbe_tmp__105;
  } else {
    goto llvm_cbe_tmp__106;
  }

llvm_cbe_tmp__105:
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__77 = (unsigned int )fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__77);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = trunc i32 %%7 to i8, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__78 = (unsigned char )((unsigned char )llvm_cbe_tmp__77&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__79 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%9, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__80 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__79))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__79) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%8, i8* %%10, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_257_count);
  *llvm_cbe_tmp__80 = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add nsw i32 %%storemerge, 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__81 = (unsigned int )((unsigned int )(llvm_cbe_storemerge&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__81&4294967295ull)));
  if (((llvm_cbe_tmp__77&4294967295U) == (4294967295u&4294967295U))) {
    llvm_cbe_tmp__103__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__81;   /* for PHI node */
    goto llvm_cbe_tmp__104;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__106:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%. to i64, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__82 = (unsigned long long )((signed long long )(signed int )llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%14, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__83 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__82))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__82));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 0, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__84 = ( char *)(&llvm_cbe_line[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add nsw i32 %%., -1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__85 = (unsigned int )((unsigned int )(llvm_cbe__2e_&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__85&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__85) > ((signed int )0u))) {
    goto llvm_cbe__2e_split_2e_us;
  } else {
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

llvm_cbe__2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%.op = add i32 %%2, -1, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe__2e_op_count);
  llvm_cbe__2e_op = (unsigned int )((unsigned int )(llvm_cbe_tmp__76&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n.op = 0x%X\n", ((unsigned int )(llvm_cbe__2e_op&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = select i1 %%19, i32 %%.op, i32 48, !dbg !18 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__86 = (unsigned int )(((((signed int )llvm_cbe_tmp__76) < ((signed int )49u))) ? ((unsigned int )llvm_cbe__2e_op) : ((unsigned int )48u));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__86);
  goto llvm_cbe_tmp__107;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__107:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__82) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%15, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_271_count);
  *llvm_cbe_tmp__83 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = call i32 @strncmp(i8* %%16, i8* %%marker, i64 %%14) nounwind, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__87 = (unsigned int )strncmp(( char *)llvm_cbe_tmp__84, ( char *)llvm_cbe_marker, llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__82);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__87);
}
  if (((llvm_cbe_tmp__87&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__103__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

llvm_cbe__2e__crit_edge_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_275_count);
  llvm_cbe_tmp__88 = (unsigned int )fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__88);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = trunc i32 %%24 to i8, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__89 = (unsigned char )((unsigned char )llvm_cbe_tmp__88&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%17 to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_282_count);
  llvm_cbe_tmp__90 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%26, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__91 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__90))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__90) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%25, i8* %%27, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_284_count);
  *llvm_cbe_tmp__91 = llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
  if (((llvm_cbe_tmp__88&4294967295U) == (4294967295u&4294967295U))) {
    llvm_cbe_tmp__103__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe_tmp__107;
  }

  do {     /* Syntactic loop '.lr.ph.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge13.us = phi i32 [ %%29, %%.lr.ph.us ], [ 0, %%21  for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_storemerge13_2e_us_count);
  llvm_cbe_storemerge13_2e_us = (unsigned int )llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge13.us = 0x%X",llvm_cbe_storemerge13_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__92);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add nsw i32 %%storemerge13.us, 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__92 = (unsigned int )((unsigned int )(llvm_cbe_storemerge13_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__92&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%29 to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__93 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%30, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_289_count);
  llvm_cbe_tmp__94 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__93))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__93));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__93) < 50)) fprintf(stderr, "%s:%d: warning: Read access out of array 'line' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%31, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__95 = (unsigned char )*llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = sext i32 %%storemerge13.us to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_291_count);
  llvm_cbe_tmp__96 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge13_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%33, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__97 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__96))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__96));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__96) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%32, i8* %%34, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_293_count);
  *llvm_cbe_tmp__97 = llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__95);
  if (((llvm_cbe_tmp__92&4294967295U) == (llvm_cbe_tmp__86&4294967295U))) {
    goto llvm_cbe__2e__crit_edge_2e_us;
  } else {
    llvm_cbe_storemerge13_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__92;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

  } while (1); /* end of syntactic loop '.lr.ph.us' */
  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '..split_crit_edge' to make GCC happy */
llvm_cbe__2e__2e_split_crit_edge:

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__82) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%15, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_303_count);
  *llvm_cbe_tmp__83 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = call i32 @strncmp(i8* %%16, i8* %%marker, i64 %%14) nounwind, !dbg !16 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__98 = (unsigned int )strncmp(( char *)llvm_cbe_tmp__84, ( char *)llvm_cbe_marker, llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__82);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__98);
}
  if (((llvm_cbe_tmp__98&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__103__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__99 = (unsigned int )fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__99);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = trunc i32 %%37 to i8, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__100 = (unsigned char )((unsigned char )llvm_cbe_tmp__99&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i32 %%17 to i64, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__101 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [50 x i8]* %%line, i64 0, i64 %%39, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__102 = ( char *)(&llvm_cbe_line[(((signed long long )llvm_cbe_tmp__101))
#ifdef AESL_BC_SIM
 % 50
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__101));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__101) < 50 && "Write access out of array 'line' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%38, i8* %%40, align 1, !dbg !17 for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_316_count);
  *llvm_cbe_tmp__102 = llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
  if (((llvm_cbe_tmp__99&4294967295U) == (4294967295u&4294967295U))) {
    llvm_cbe_tmp__103__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_loopexit;
  } else {
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

  } while (1); /* end of syntactic loop '..split_crit_edge' */
llvm_cbe__2e_loopexit:
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = phi i32 [ 1, %%21 ], [ 0, %%._crit_edge.us ], [ 1, %%..split_crit_edge ], [ 0, %%.preheader ], [ 0, %%6  for 0x%I64xth hint within @FindMarker  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__103 = (unsigned int )llvm_cbe_tmp__103__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__103);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @FindMarker}\n");
  return llvm_cbe_tmp__103;
}


signed int ReadHex(l_struct_OC__iobuf *llvm_cbe_infile,  char *llvm_cbe_A, signed int llvm_cbe_Length,  char *llvm_cbe_str) {
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
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  unsigned long long llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
   char *llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  unsigned int llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  unsigned int llvm_cbe_tmp__112;
  unsigned int llvm_cbe_tmp__112__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  unsigned int llvm_cbe_tmp__113;
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
  unsigned long long llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
   char *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  unsigned char llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  unsigned char llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  unsigned char llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  unsigned char llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  unsigned char llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond_2e_us;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  unsigned int llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  unsigned char llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  unsigned char llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond8_2e_us;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond6_2e_us;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  unsigned char llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  unsigned char llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge310_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge310_2e_us;
  unsigned int llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
   char *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  unsigned char llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  unsigned char llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
   char *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  unsigned char llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  unsigned char llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  unsigned char llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond9_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond9_2e_us;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_2e_us_count = 0;
  unsigned char llvm_cbe_storemerge2_2e_us;
  unsigned char llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  unsigned int llvm_cbe_tmp__136;
  unsigned int llvm_cbe_tmp__136__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  unsigned int llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond9_count = 0;
  bool llvm_cbe_or_2e_cond9;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  unsigned char llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  unsigned char llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_count = 0;
  bool llvm_cbe_or_2e_cond6;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  unsigned char llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  unsigned char llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_count = 0;
  bool llvm_cbe_or_2e_cond8;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  unsigned char llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  unsigned char llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned char llvm_cbe_storemerge2;
  unsigned char llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
   char *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  unsigned char llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  unsigned char llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  unsigned char llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  unsigned int llvm_cbe_tmp__150;
  unsigned int llvm_cbe_tmp__150__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @ReadHex\n");
  if (((llvm_cbe_Length&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__151;
  } else {
    goto llvm_cbe_tmp__152;
  }

llvm_cbe_tmp__151:
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%A, align 1, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_342_count);
  *llvm_cbe_A = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
  llvm_cbe_tmp__150__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__153;

llvm_cbe_tmp__152:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i32 %%Length to i64, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__108 = (unsigned long long )((signed long long )(signed int )llvm_cbe_Length);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = call i8* @memset(i8* %%A, i32 0, i64 %%4 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_345_count);
  ( char *)memset(( char *)llvm_cbe_A, 0u, llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__108);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__109);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = tail call i32 @FindMarker(%%struct._iobuf* %%infile, i8* %%str), !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_348_count);
  llvm_cbe_tmp__110 = (unsigned int ) /*tail*/ FindMarker((l_struct_OC__iobuf *)llvm_cbe_infile, ( char *)llvm_cbe_str);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__110);
}
  if (((llvm_cbe_tmp__110&4294967295U) == (0u&4294967295U))) {
    llvm_cbe_tmp__150__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__153;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%Length, -1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__111 = (unsigned int )((unsigned int )(llvm_cbe_Length&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__111&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__111) > ((signed int )0u))) {
    llvm_cbe_tmp__112__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_split_2e_us;
  } else {
    llvm_cbe_tmp__136__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;
  }

  do {     /* Syntactic loop '.preheader.split.us' to make GCC happy */
llvm_cbe__2e_preheader_2e_split_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = phi i32 [ 0, %%.preheader ], [ 1, %%._crit_edge.us ], [ 0, %%50  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_354_count);
  llvm_cbe_tmp__112 = (unsigned int )llvm_cbe_tmp__112__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__112);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_355_count);
  llvm_cbe_tmp__113 = (unsigned int ) /*tail*/ fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__113);
}
  if (((llvm_cbe_tmp__113&4294967295U) == (4294967295u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    goto llvm_cbe_tmp__154;
  }

llvm_cbe__2e__crit_edge_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%8 to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__114 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%A, i64 %%13, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__115 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__114))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__114));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%14, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_372_count);
  llvm_cbe_tmp__116 = (unsigned char )*llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = shl i8 %%15, 4, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_373_count);
  llvm_cbe_tmp__117 = (unsigned char )((unsigned char )(llvm_cbe_tmp__116 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i8 %%16, %%storemerge2.us, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_374_count);
  llvm_cbe_tmp__118 = (unsigned char )((unsigned char )(llvm_cbe_tmp__117 | llvm_cbe_storemerge2_2e_us));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%17, i8* %%14, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_375_count);
  *llvm_cbe_tmp__115 = llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__118);
  llvm_cbe_tmp__112__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e_split_2e_us;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__155:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge310.us = phi i32 [ 0, %%.lr.ph.us ], [ %%44, %%39  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_storemerge310_2e_us_count);
  llvm_cbe_storemerge310_2e_us = (unsigned int )llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge310.us = 0x%X",llvm_cbe_storemerge310_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__130);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = sext i32 %%storemerge310.us to i64, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_403_count);
  llvm_cbe_tmp__126 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge310_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds i8* %%A, i64 %%40, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__127 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__126))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load i8* %%41, align 1, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_405_count);
  llvm_cbe_tmp__128 = (unsigned char )*llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = shl i8 %%42, 4, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__129 = (unsigned char )((unsigned char )(llvm_cbe_tmp__128 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = add nsw i32 %%storemerge310.us, 1, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_407_count);
  llvm_cbe_tmp__130 = (unsigned int )((unsigned int )(llvm_cbe_storemerge310_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__130&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = sext i32 %%44 to i64, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__131 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds i8* %%A, i64 %%45, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__132 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__131))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__131));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load i8* %%46, align 1, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__133 = (unsigned char )*llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = lshr i8 %%47, 4, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_411_count);
  llvm_cbe_tmp__134 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )(llvm_cbe_tmp__133&255ull)) >> ((unsigned char )(((unsigned char )4)&255ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__134&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = or i8 %%48, %%43, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_412_count);
  llvm_cbe_tmp__135 = (unsigned char )((unsigned char )(llvm_cbe_tmp__134 | llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%49, i8* %%41, align 1, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_413_count);
  *llvm_cbe_tmp__127 = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__135);
  if (((llvm_cbe_tmp__130&4294967295U) == (llvm_cbe_tmp__111&4294967295U))) {
    goto llvm_cbe__2e__crit_edge_2e_us;
  } else {
    llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__130;   /* for PHI node */
    goto llvm_cbe_tmp__155;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2.us = phi i8 [ %%20, %%18 ], [ %%38, %%36 ], [ %%29, %%27 ], [ 0, %%30  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_storemerge2_2e_us_count);
  llvm_cbe_storemerge2_2e_us = (unsigned char )llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2.us = 0x%X",llvm_cbe_storemerge2_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__120);
printf("\n = 0x%X",llvm_cbe_tmp__125);
printf("\n = 0x%X",llvm_cbe_tmp__123);
printf("\n = 0x%X",((unsigned char )0));
}
  llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__155;

llvm_cbe_tmp__156:
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = trunc i32 %%11 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_377_count);
  llvm_cbe_tmp__119 = (unsigned char )((unsigned char )llvm_cbe_tmp__113&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add i8 %%19, -48, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_378_count);
  llvm_cbe_tmp__120 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__119&255ull)) + ((unsigned char )(((unsigned char )-48)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__120&255ull)));
  llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__120;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph_2e_us;

llvm_cbe_tmp__157:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond.us = and i1 %%22, %%23, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond_2e_us_count);
  llvm_cbe_or_2e_cond_2e_us = (bool )(((((signed int )llvm_cbe_tmp__113) > ((signed int )47u)) & (((signed int )llvm_cbe_tmp__113) < ((signed int )58u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond.us = 0x%X\n", llvm_cbe_or_2e_cond_2e_us);
  if (llvm_cbe_or_2e_cond_2e_us) {
    goto llvm_cbe_tmp__156;
  } else {
    goto llvm_cbe_tmp__158;
  }

llvm_cbe_tmp__154:
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = tail call i32 @isxdigit2(i32 %%11), !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__121 = (unsigned int ) /*tail*/ isxdigit2(llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__113);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__121);
}
  if (((llvm_cbe_tmp__121&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__159;
  } else {
    goto llvm_cbe_tmp__157;
  }

llvm_cbe_tmp__160:
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = trunc i32 %%11 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_389_count);
  llvm_cbe_tmp__122 = (unsigned char )((unsigned char )llvm_cbe_tmp__113&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i8 %%28, -87, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__123 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__122&255ull)) + ((unsigned char )(((unsigned char )-87)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__123&255ull)));
  llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__123;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph_2e_us;

llvm_cbe_tmp__161:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8.us = and i1 %%31, %%32, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond8_2e_us_count);
  llvm_cbe_or_2e_cond8_2e_us = (bool )(((((signed int )llvm_cbe_tmp__113) > ((signed int )96u)) & (((signed int )llvm_cbe_tmp__113) < ((signed int )103u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8.us = 0x%X\n", llvm_cbe_or_2e_cond8_2e_us);
  if (llvm_cbe_or_2e_cond8_2e_us) {
    goto llvm_cbe_tmp__160;
  } else {
    llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

llvm_cbe_tmp__158:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6.us = and i1 %%34, %%35, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond6_2e_us_count);
  llvm_cbe_or_2e_cond6_2e_us = (bool )(((((signed int )llvm_cbe_tmp__113) > ((signed int )64u)) & (((signed int )llvm_cbe_tmp__113) < ((signed int )71u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6.us = 0x%X\n", llvm_cbe_or_2e_cond6_2e_us);
  if (llvm_cbe_or_2e_cond6_2e_us) {
    goto llvm_cbe_tmp__162;
  } else {
    goto llvm_cbe_tmp__161;
  }

llvm_cbe_tmp__162:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = trunc i32 %%11 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_399_count);
  llvm_cbe_tmp__124 = (unsigned char )((unsigned char )llvm_cbe_tmp__113&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add i8 %%37, -55, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__125 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__124&255ull)) + ((unsigned char )(((unsigned char )-55)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__125&255ull)));
  llvm_cbe_storemerge2_2e_us__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__125;   /* for PHI node */
  goto llvm_cbe__2e_lr_2e_ph_2e_us;

llvm_cbe_tmp__159:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond9.us = or i1 %%51, %%52, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond9_2e_us_count);
  llvm_cbe_or_2e_cond9_2e_us = (bool )((((llvm_cbe_tmp__112&4294967295U) != (0u&4294967295U)) | ((llvm_cbe_tmp__113&4294967295U) == (10u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond9.us = 0x%X\n", llvm_cbe_or_2e_cond9_2e_us);
  if (llvm_cbe_or_2e_cond9_2e_us) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_tmp__112__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e_split_2e_us;
  }

  } while (1); /* end of syntactic loop '.preheader.split.us' */
llvm_cbe__2e_us_2d_lcssa_2e_us:
  goto llvm_cbe_tmp__163;

  do {     /* Syntactic loop '.preheader..preheader.split_crit_edge' to make GCC happy */
llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = phi i32 [ 0, %%.preheader ], [ 1, %%80 ], [ 0, %%59  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__136 = (unsigned int )llvm_cbe_tmp__136__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__136);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = tail call i32 @fgetc(%%struct._iobuf* %%infile) nounwind, !dbg !15 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__137 = (unsigned int ) /*tail*/ fgetc((l_struct_OC__iobuf *)llvm_cbe_infile);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__137);
}
  if (((llvm_cbe_tmp__137&4294967295U) == (4294967295u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa;
  } else {
    goto llvm_cbe_tmp__164;
  }

llvm_cbe_tmp__165:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond9 = or i1 %%60, %%61, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond9_count);
  llvm_cbe_or_2e_cond9 = (bool )((((llvm_cbe_tmp__136&4294967295U) != (0u&4294967295U)) | ((llvm_cbe_tmp__137&4294967295U) == (10u&4294967295U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond9 = 0x%X\n", llvm_cbe_or_2e_cond9);
  if (llvm_cbe_or_2e_cond9) {
    goto llvm_cbe__2e_us_2d_lcssa;
  } else {
    llvm_cbe_tmp__136__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;
  }

llvm_cbe_tmp__164:
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = tail call i32 @isxdigit2(i32 %%54), !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_449_count);
  llvm_cbe_tmp__138 = (unsigned int ) /*tail*/ isxdigit2(llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__137);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__138);
}
  if (((llvm_cbe_tmp__138&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe_tmp__165;
  } else {
    goto llvm_cbe_tmp__166;
  }

llvm_cbe_tmp__167:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i8 [ %%67, %%65 ], [ %%73, %%71 ], [ %%79, %%77 ], [ 0, %%74  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned char )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",llvm_cbe_tmp__140);
printf("\n = 0x%X",llvm_cbe_tmp__142);
printf("\n = 0x%X",llvm_cbe_tmp__144);
printf("\n = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = sext i32 %%8 to i64, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__145 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = getelementptr inbounds i8* %%A, i64 %%81, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_486_count);
  llvm_cbe_tmp__146 = ( char *)(&llvm_cbe_A[(((signed long long )llvm_cbe_tmp__145))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load i8* %%82, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_487_count);
  llvm_cbe_tmp__147 = (unsigned char )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = shl i8 %%83, 4, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_488_count);
  llvm_cbe_tmp__148 = (unsigned char )((unsigned char )(llvm_cbe_tmp__147 << ((unsigned char )4)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = or i8 %%84, %%storemerge2, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_489_count);
  llvm_cbe_tmp__149 = (unsigned char )((unsigned char )(llvm_cbe_tmp__148 | llvm_cbe_storemerge2));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%85, i8* %%82, align 1, !dbg !16 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_490_count);
  *llvm_cbe_tmp__146 = llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__149);
  llvm_cbe_tmp__136__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe__2e_preheader_2e__2e_preheader_2e_split_crit_edge;

llvm_cbe_tmp__168:
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = trunc i32 %%54 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__139 = (unsigned char )((unsigned char )llvm_cbe_tmp__137&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add i8 %%66, -48, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_461_count);
  llvm_cbe_tmp__140 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__139&255ull)) + ((unsigned char )(((unsigned char )-48)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__140&255ull)));
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__140;   /* for PHI node */
  goto llvm_cbe_tmp__167;

llvm_cbe_tmp__166:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = and i1 %%63, %%64, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )(((((signed int )llvm_cbe_tmp__137) > ((signed int )47u)) & (((signed int )llvm_cbe_tmp__137) < ((signed int )58u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe_tmp__168;
  } else {
    goto llvm_cbe_tmp__169;
  }

llvm_cbe_tmp__170:
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = trunc i32 %%54 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_467_count);
  llvm_cbe_tmp__141 = (unsigned char )((unsigned char )llvm_cbe_tmp__137&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = add i8 %%72, -55, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__142 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__141&255ull)) + ((unsigned char )(((unsigned char )-55)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__142&255ull)));
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__142;   /* for PHI node */
  goto llvm_cbe_tmp__167;

llvm_cbe_tmp__169:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6 = and i1 %%69, %%70, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond6_count);
  llvm_cbe_or_2e_cond6 = (bool )(((((signed int )llvm_cbe_tmp__137) > ((signed int )64u)) & (((signed int )llvm_cbe_tmp__137) < ((signed int )71u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6 = 0x%X\n", llvm_cbe_or_2e_cond6);
  if (llvm_cbe_or_2e_cond6) {
    goto llvm_cbe_tmp__170;
  } else {
    goto llvm_cbe_tmp__171;
  }

llvm_cbe_tmp__171:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8 = and i1 %%75, %%76, !dbg !17 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_or_2e_cond8_count);
  llvm_cbe_or_2e_cond8 = (bool )(((((signed int )llvm_cbe_tmp__137) > ((signed int )96u)) & (((signed int )llvm_cbe_tmp__137) < ((signed int )103u)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8 = 0x%X\n", llvm_cbe_or_2e_cond8);
  if (llvm_cbe_or_2e_cond8) {
    goto llvm_cbe_tmp__172;
  } else {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    goto llvm_cbe_tmp__167;
  }

llvm_cbe_tmp__172:
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = trunc i32 %%54 to i8, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__143 = (unsigned char )((unsigned char )llvm_cbe_tmp__137&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = add i8 %%78, -87, !dbg !18 for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__144 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__143&255ull)) + ((unsigned char )(((unsigned char )-87)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__144&255ull)));
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__144;   /* for PHI node */
  goto llvm_cbe_tmp__167;

  } while (1); /* end of syntactic loop '.preheader..preheader.split_crit_edge' */
llvm_cbe__2e_us_2d_lcssa:
  goto llvm_cbe_tmp__163;

llvm_cbe_tmp__163:
  llvm_cbe_tmp__150__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  goto llvm_cbe_tmp__153;

llvm_cbe_tmp__153:
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = phi i32 [ 1, %%86 ], [ 1, %%2 ], [ 0, %%3  for 0x%I64xth hint within @ReadHex  --> \n", ++aesl_llvm_cbe_494_count);
  llvm_cbe_tmp__150 = (unsigned int )llvm_cbe_tmp__150__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__150);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @ReadHex}\n");
  return llvm_cbe_tmp__150;
}

