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
typedef struct l_struct_OC_AES_ctx l_struct_OC_AES_ctx;

/* Structure contents */
struct l_struct_OC_AES_ctx {
   char field0[240];
   char field1[16];
};


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void AES_init_ctx(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_key);
static void aesl_internal_KeyExpansion( char *llvm_cbe_RoundKey,  char *llvm_cbe_Key);
void AES_init_ctx_iv(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_key,  char *llvm_cbe_iv);
void AES_ctx_set_iv(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_iv);
void AES_ECB_encrypt(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char (*llvm_cbe_buf)[4][4]);
static void aesl_internal_Cipher( char (*llvm_cbe_state)[4][4],  char *llvm_cbe_RoundKey);
void AES_ECB_decrypt(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf);
static void aesl_internal_InvCipher( char (*llvm_cbe_state)[4][4],  char *llvm_cbe_RoundKey);
void AES_CBC_encrypt_buffer(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf, signed int llvm_cbe_length);
static void aesl_internal_XorWithIv( char *llvm_cbe_buf,  char *llvm_cbe_Iv);
void AES_CBC_decrypt_buffer(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf, signed int llvm_cbe_length);
void AES_CTR_xcrypt_buffer(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf, signed int llvm_cbe_length);
static void aesl_internal_AddRoundKey( char llvm_cbe_round,  char (*llvm_cbe_state)[4][4],  char *llvm_cbe_RoundKey);
static void aesl_internal_InvShiftRows( char (*llvm_cbe_state)[4][4]);
static void aesl_internal_InvSubBytes( char (*llvm_cbe_state)[4][4]);
static void aesl_internal_InvMixColumns( char (*llvm_cbe_state)[4][4]);
static unsigned char aesl_internal_xtime( char llvm_cbe_x);
static void aesl_internal_SubBytes( char (*llvm_cbe_state)[4][4]);
static void aesl_internal_ShiftRows( char (*llvm_cbe_state)[4][4]);
static void aesl_internal_MixColumns( char (*llvm_cbe_state)[4][4]);


/* Global Variable Definitions and Initialization */
static  char aesl_internal_rsbox[256] = { ((unsigned char )82), ((unsigned char )9), ((unsigned char )106), ((unsigned char )-43), ((unsigned char )48), ((unsigned char )54), ((unsigned char )-91), ((unsigned char )56), ((unsigned char )-65), ((unsigned char )64), ((unsigned char )-93), ((unsigned char )-98), ((unsigned char )-127), ((unsigned char )-13), ((unsigned char )-41), ((unsigned char )-5), ((unsigned char )124), ((unsigned char )-29), ((unsigned char )57), ((unsigned char )-126), ((unsigned char )-101), ((unsigned char )47), ((unsigned char )-1), ((unsigned char )-121), ((unsigned char )52), ((unsigned char )-114), ((unsigned char )67), ((unsigned char )68), ((unsigned char )-60), ((unsigned char )-34), ((unsigned char )-23), ((unsigned char )-53), ((unsigned char )84), ((unsigned char )123), ((unsigned char )-108), ((unsigned char )50), ((unsigned char )-90), ((unsigned char )-62), ((unsigned char )35), ((unsigned char )61), ((unsigned char )-18), ((unsigned char )76), ((unsigned char )-107), ((unsigned char )11), ((unsigned char )66), ((unsigned char )-6), ((unsigned char )-61), ((unsigned char )78), ((unsigned char )8), ((unsigned char )46), ((unsigned char )-95), ((unsigned char )102), ((unsigned char )40), ((unsigned char )-39), ((unsigned char )36), ((unsigned char )-78), ((unsigned char )118), ((unsigned char )91), ((unsigned char )-94), ((unsigned char )73), ((unsigned char )109), ((unsigned char )-117), ((unsigned char )-47), ((unsigned char )37), ((unsigned char )114), ((unsigned char )-8), ((unsigned char )-10), ((unsigned char )100), ((unsigned char )-122), ((unsigned char )104), ((unsigned char )-104), ((unsigned char )22), ((unsigned char )-44), ((unsigned char )-92), ((unsigned char )92), ((unsigned char )-52), ((unsigned char )93), ((unsigned char )101), ((unsigned char )-74), ((unsigned char )-110), ((unsigned char )108), ((unsigned char )112), ((unsigned char )72), ((unsigned char )80), ((unsigned char )-3), ((unsigned char )-19), ((unsigned char )-71), ((unsigned char )-38), ((unsigned char )94), ((unsigned char )21), ((unsigned char )70), ((unsigned char )87), ((unsigned char )-89), ((unsigned char )-115), ((unsigned char )-99), ((unsigned char )-124), ((unsigned char )-112), ((unsigned char )-40), ((unsigned char )-85), ((unsigned char )0), ((unsigned char )-116), ((unsigned char )-68), ((unsigned char )-45), ((unsigned char )10), ((unsigned char )-9), ((unsigned char )-28), ((unsigned char )88), ((unsigned char )5), ((unsigned char )-72), ((unsigned char )-77), ((unsigned char )69), ((unsigned char )6), ((unsigned char )-48), ((unsigned char )44), ((unsigned char )30), ((unsigned char )-113), ((unsigned char )-54), ((unsigned char )63), ((unsigned char )15), ((unsigned char )2), ((unsigned char )-63), ((unsigned char )-81), ((unsigned char )-67), ((unsigned char )3), ((unsigned char )1), ((unsigned char )19), ((unsigned char )-118), ((unsigned char )107), ((unsigned char )58), ((unsigned char )-111), ((unsigned char )17), ((unsigned char )65), ((unsigned char )79), ((unsigned char )103), ((unsigned char )-36), ((unsigned char )-22), ((unsigned char )-105), ((unsigned char )-14), ((unsigned char )-49), ((unsigned char )-50), ((unsigned char )-16), ((unsigned char )-76), ((unsigned char )-26), ((unsigned char )115), ((unsigned char )-106), ((unsigned char )-84), ((unsigned char )116), ((unsigned char )34), ((unsigned char )-25), ((unsigned char )-83), ((unsigned char )53), ((unsigned char )-123), ((unsigned char )-30), ((unsigned char )-7), ((unsigned char )55), ((unsigned char )-24), ((unsigned char )28), ((unsigned char )117), ((unsigned char )-33), ((unsigned char )110), ((unsigned char )71), ((unsigned char )-15), ((unsigned char )26), ((unsigned char )113), ((unsigned char )29), ((unsigned char )41), ((unsigned char )-59), ((unsigned char )-119), ((unsigned char )111), ((unsigned char )-73), ((unsigned char )98), ((unsigned char )14), ((unsigned char )-86), ((unsigned char )24), ((unsigned char )-66), ((unsigned char )27), ((unsigned char )-4), ((unsigned char )86), ((unsigned char )62), ((unsigned char )75), ((unsigned char )-58), ((unsigned char )-46), ((unsigned char )121), ((unsigned char )32), ((unsigned char )-102), ((unsigned char )-37), ((unsigned char )-64), ((unsigned char )-2), ((unsigned char )120), ((unsigned char )-51), ((unsigned char )90), ((unsigned char )-12), ((unsigned char )31), ((unsigned char )-35), ((unsigned char )-88), ((unsigned char )51), ((unsigned char )-120), ((unsigned char )7), ((unsigned char )-57), ((unsigned char )49), ((unsigned char )-79), ((unsigned char )18), ((unsigned char )16), ((unsigned char )89), ((unsigned char )39), ((unsigned char )128u), ((unsigned char )-20), ((unsigned char )95), ((unsigned char )96), ((unsigned char )81), ((unsigned char )127), ((unsigned char )-87), ((unsigned char )25), ((unsigned char )-75), ((unsigned char )74), ((unsigned char )13), ((unsigned char )45), ((unsigned char )-27), ((unsigned char )122), ((unsigned char )-97), ((unsigned char )-109), ((unsigned char )-55), ((unsigned char )-100), ((unsigned char )-17), ((unsigned char )-96), ((unsigned char )-32), ((unsigned char )59), ((unsigned char )77), ((unsigned char )-82), ((unsigned char )42), ((unsigned char )-11), ((unsigned char )-80), ((unsigned char )-56), ((unsigned char )-21), ((unsigned char )-69), ((unsigned char )60), ((unsigned char )-125), ((unsigned char )83), ((unsigned char )-103), ((unsigned char )97), ((unsigned char )23), ((unsigned char )43), ((unsigned char )4), ((unsigned char )126), ((unsigned char )-70), ((unsigned char )119), ((unsigned char )-42), ((unsigned char )38), ((unsigned char )-31), ((unsigned char )105), ((unsigned char )20), ((unsigned char )99), ((unsigned char )85), ((unsigned char )33), ((unsigned char )12), ((unsigned char )125) };
static  char aesl_internal_sbox[256] = { ((unsigned char )99), ((unsigned char )124), ((unsigned char )119), ((unsigned char )123), ((unsigned char )-14), ((unsigned char )107), ((unsigned char )111), ((unsigned char )-59), ((unsigned char )48), ((unsigned char )1), ((unsigned char )103), ((unsigned char )43), ((unsigned char )-2), ((unsigned char )-41), ((unsigned char )-85), ((unsigned char )118), ((unsigned char )-54), ((unsigned char )-126), ((unsigned char )-55), ((unsigned char )125), ((unsigned char )-6), ((unsigned char )89), ((unsigned char )71), ((unsigned char )-16), ((unsigned char )-83), ((unsigned char )-44), ((unsigned char )-94), ((unsigned char )-81), ((unsigned char )-100), ((unsigned char )-92), ((unsigned char )114), ((unsigned char )-64), ((unsigned char )-73), ((unsigned char )-3), ((unsigned char )-109), ((unsigned char )38), ((unsigned char )54), ((unsigned char )63), ((unsigned char )-9), ((unsigned char )-52), ((unsigned char )52), ((unsigned char )-91), ((unsigned char )-27), ((unsigned char )-15), ((unsigned char )113), ((unsigned char )-40), ((unsigned char )49), ((unsigned char )21), ((unsigned char )4), ((unsigned char )-57), ((unsigned char )35), ((unsigned char )-61), ((unsigned char )24), ((unsigned char )-106), ((unsigned char )5), ((unsigned char )-102), ((unsigned char )7), ((unsigned char )18), ((unsigned char )128u), ((unsigned char )-30), ((unsigned char )-21), ((unsigned char )39), ((unsigned char )-78), ((unsigned char )117), ((unsigned char )9), ((unsigned char )-125), ((unsigned char )44), ((unsigned char )26), ((unsigned char )27), ((unsigned char )110), ((unsigned char )90), ((unsigned char )-96), ((unsigned char )82), ((unsigned char )59), ((unsigned char )-42), ((unsigned char )-77), ((unsigned char )41), ((unsigned char )-29), ((unsigned char )47), ((unsigned char )-124), ((unsigned char )83), ((unsigned char )-47), ((unsigned char )0), ((unsigned char )-19), ((unsigned char )32), ((unsigned char )-4), ((unsigned char )-79), ((unsigned char )91), ((unsigned char )106), ((unsigned char )-53), ((unsigned char )-66), ((unsigned char )57), ((unsigned char )74), ((unsigned char )76), ((unsigned char )88), ((unsigned char )-49), ((unsigned char )-48), ((unsigned char )-17), ((unsigned char )-86), ((unsigned char )-5), ((unsigned char )67), ((unsigned char )77), ((unsigned char )51), ((unsigned char )-123), ((unsigned char )69), ((unsigned char )-7), ((unsigned char )2), ((unsigned char )127), ((unsigned char )80), ((unsigned char )60), ((unsigned char )-97), ((unsigned char )-88), ((unsigned char )81), ((unsigned char )-93), ((unsigned char )64), ((unsigned char )-113), ((unsigned char )-110), ((unsigned char )-99), ((unsigned char )56), ((unsigned char )-11), ((unsigned char )-68), ((unsigned char )-74), ((unsigned char )-38), ((unsigned char )33), ((unsigned char )16), ((unsigned char )-1), ((unsigned char )-13), ((unsigned char )-46), ((unsigned char )-51), ((unsigned char )12), ((unsigned char )19), ((unsigned char )-20), ((unsigned char )95), ((unsigned char )-105), ((unsigned char )68), ((unsigned char )23), ((unsigned char )-60), ((unsigned char )-89), ((unsigned char )126), ((unsigned char )61), ((unsigned char )100), ((unsigned char )93), ((unsigned char )25), ((unsigned char )115), ((unsigned char )96), ((unsigned char )-127), ((unsigned char )79), ((unsigned char )-36), ((unsigned char )34), ((unsigned char )42), ((unsigned char )-112), ((unsigned char )-120), ((unsigned char )70), ((unsigned char )-18), ((unsigned char )-72), ((unsigned char )20), ((unsigned char )-34), ((unsigned char )94), ((unsigned char )11), ((unsigned char )-37), ((unsigned char )-32), ((unsigned char )50), ((unsigned char )58), ((unsigned char )10), ((unsigned char )73), ((unsigned char )6), ((unsigned char )36), ((unsigned char )92), ((unsigned char )-62), ((unsigned char )-45), ((unsigned char )-84), ((unsigned char )98), ((unsigned char )-111), ((unsigned char )-107), ((unsigned char )-28), ((unsigned char )121), ((unsigned char )-25), ((unsigned char )-56), ((unsigned char )55), ((unsigned char )109), ((unsigned char )-115), ((unsigned char )-43), ((unsigned char )78), ((unsigned char )-87), ((unsigned char )108), ((unsigned char )86), ((unsigned char )-12), ((unsigned char )-22), ((unsigned char )101), ((unsigned char )122), ((unsigned char )-82), ((unsigned char )8), ((unsigned char )-70), ((unsigned char )120), ((unsigned char )37), ((unsigned char )46), ((unsigned char )28), ((unsigned char )-90), ((unsigned char )-76), ((unsigned char )-58), ((unsigned char )-24), ((unsigned char )-35), ((unsigned char )116), ((unsigned char )31), ((unsigned char )75), ((unsigned char )-67), ((unsigned char )-117), ((unsigned char )-118), ((unsigned char )112), ((unsigned char )62), ((unsigned char )-75), ((unsigned char )102), ((unsigned char )72), ((unsigned char )3), ((unsigned char )-10), ((unsigned char )14), ((unsigned char )97), ((unsigned char )53), ((unsigned char )87), ((unsigned char )-71), ((unsigned char )-122), ((unsigned char )-63), ((unsigned char )29), ((unsigned char )-98), ((unsigned char )-31), ((unsigned char )-8), ((unsigned char )-104), ((unsigned char )17), ((unsigned char )105), ((unsigned char )-39), ((unsigned char )-114), ((unsigned char )-108), ((unsigned char )-101), ((unsigned char )30), ((unsigned char )-121), ((unsigned char )-23), ((unsigned char )-50), ((unsigned char )85), ((unsigned char )40), ((unsigned char )-33), ((unsigned char )-116), ((unsigned char )-95), ((unsigned char )-119), ((unsigned char )13), ((unsigned char )-65), ((unsigned char )-26), ((unsigned char )66), ((unsigned char )104), ((unsigned char )65), ((unsigned char )-103), ((unsigned char )45), ((unsigned char )15), ((unsigned char )-80), ((unsigned char )84), ((unsigned char )-69), ((unsigned char )22) };
static  char aesl_internal_Rcon[11] = { ((unsigned char )-115), ((unsigned char )1), ((unsigned char )2), ((unsigned char )4), ((unsigned char )8), ((unsigned char )16), ((unsigned char )32), ((unsigned char )64), ((unsigned char )128u), ((unsigned char )27), ((unsigned char )54) };


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

void AES_init_ctx(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_key) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_init_ctx\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_init_ctx  --> \n", ++aesl_llvm_cbe_4_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_KeyExpansion(i8* %%1, i8* %%key), !dbg !14 for 0x%I64xth hint within @AES_init_ctx  --> \n", ++aesl_llvm_cbe_6_count);
   /*tail*/ aesl_internal_KeyExpansion(( char *)llvm_cbe_tmp__1, ( char *)llvm_cbe_key);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_init_ctx}\n");
  return;
}


static void aesl_internal_KeyExpansion( char *llvm_cbe_RoundKey,  char *llvm_cbe_Key) {
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
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge6_count = 0;
  unsigned int llvm_cbe_storemerge6;
  unsigned int llvm_cbe_storemerge6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned char llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
   char *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
   char *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned char llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
   char *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
   char *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned char llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
   char *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
   char *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  unsigned char llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned int llvm_cbe_tmp__22;
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
  static  unsigned long long aesl_llvm_cbe_exitcond7_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  unsigned int llvm_cbe_tmp__24;
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
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
   char *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned char llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
   char *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  unsigned char llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
   char *llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  unsigned char llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
   char *llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  unsigned char llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  unsigned long long llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
   char *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  unsigned char llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
   char *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  unsigned char llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  unsigned long long llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
   char *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  unsigned char llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  unsigned long long llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
   char *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  unsigned char llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  unsigned int llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
   char *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned char llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  unsigned char llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  unsigned long long llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
   char *llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned char llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  unsigned long long llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
   char *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned char llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned long long llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
   char *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned char llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
   char *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned char llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  unsigned char llvm_cbe_tmp__70;
  unsigned char llvm_cbe_tmp__70__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  unsigned char llvm_cbe_tmp__71;
  unsigned char llvm_cbe_tmp__71__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  unsigned char llvm_cbe_tmp__72;
  unsigned char llvm_cbe_tmp__72__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  unsigned char llvm_cbe_tmp__73;
  unsigned char llvm_cbe_tmp__73__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned int llvm_cbe_tmp__74;
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
  unsigned long long llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
   char *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned char llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned char llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
   char *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  unsigned long long llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
   char *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  unsigned char llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  unsigned char llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned long long llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
   char *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned int llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  unsigned long long llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
   char *llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  unsigned char llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned char llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned int llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  unsigned long long llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
   char *llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  unsigned long long llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
   char *llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  unsigned char llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  unsigned char llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned int llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  unsigned long long llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
   char *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  unsigned int llvm_cbe_tmp__105;
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
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_KeyExpansion\n");
  llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__106;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__106:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge6 = phi i32 [ 0, %%0 ], [ %%22, %%1  for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_storemerge6_count);
  llvm_cbe_storemerge6 = (unsigned int )llvm_cbe_storemerge6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge6 = 0x%X",llvm_cbe_storemerge6);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl i32 %%storemerge6, 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__2 = (unsigned int )llvm_cbe_storemerge6 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i32 %%2 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__3 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__2&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds i8* %%Key, i64 %%3, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_Key[(((signed long long )llvm_cbe_tmp__3))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load i8* %%4, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__5 = (unsigned char )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%RoundKey, i64 %%3, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__6 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__3))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%5, i8* %%6, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_56_count);
  *llvm_cbe_tmp__6 = llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = or i32 %%2, 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__7 = (unsigned int )llvm_cbe_tmp__2 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i32 %%7 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__8 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__7&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i8* %%Key, i64 %%8, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__9 = ( char *)(&llvm_cbe_Key[(((signed long long )llvm_cbe_tmp__8))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__10 = (unsigned char )*llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds i8* %%RoundKey, i64 %%8, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__11 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__8))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__8));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%10, i8* %%11, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_62_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = or i32 %%2, 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__12 = (unsigned int )llvm_cbe_tmp__2 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i32 %%12 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__13 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__12&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i8* %%Key, i64 %%13, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__14 = ( char *)(&llvm_cbe_Key[(((signed long long )llvm_cbe_tmp__13))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i8* %%14, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__15 = (unsigned char )*llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds i8* %%RoundKey, i64 %%13, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__16 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__13))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%15, i8* %%16, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_68_count);
  *llvm_cbe_tmp__16 = llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = or i32 %%2, 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__17 = (unsigned int )llvm_cbe_tmp__2 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = zext i32 %%17 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__18 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__17&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds i8* %%Key, i64 %%18, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__19 = ( char *)(&llvm_cbe_Key[(((signed long long )llvm_cbe_tmp__18))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i8* %%19, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__20 = (unsigned char )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds i8* %%RoundKey, i64 %%18, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__21 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__18))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%20, i8* %%21, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_74_count);
  *llvm_cbe_tmp__21 = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = add i32 %%storemerge6, 1, !dbg !16 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__22 = (unsigned int )((unsigned int )(llvm_cbe_storemerge6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__22&4294967295ull)));
  if (((llvm_cbe_tmp__22&4294967295U) == (8u&4294967295U))) {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )8u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__22;   /* for PHI node */
    goto llvm_cbe_tmp__106;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ %%110, %%74 ], [ 8, %%1  for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",llvm_cbe_tmp__105);
printf("\n = 0x%X",8u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = shl i32 %%storemerge12, 2, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__23 = (unsigned int )llvm_cbe_storemerge12 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add i32 %%23, -4, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967292u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__24&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i32 %%24 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__25 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__24&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i8* %%RoundKey, i64 %%25, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__26 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__25))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i8* %%26, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__27 = (unsigned char )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add i32 %%23, -3, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__28 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967293u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__28&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i32 %%28 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__29 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__28&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds i8* %%RoundKey, i64 %%29, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__30 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__29))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__29));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i8* %%30, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__31 = (unsigned char )*llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i32 %%23, -2, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__32&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i32 %%32 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__33 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__32&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = getelementptr inbounds i8* %%RoundKey, i64 %%33, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__34 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__33))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i8* %%34, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__35 = (unsigned char )*llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add i32 %%23, -1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__36&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i32 %%36 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__37 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__36&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds i8* %%RoundKey, i64 %%37, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__38 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__37))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i8* %%38, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__39 = (unsigned char )*llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = and i32 %%storemerge12, 7, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__40 = (unsigned int )llvm_cbe_storemerge12 & 7u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
  if (((llvm_cbe_tmp__40&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e_thread;
  } else {
    goto llvm_cbe_tmp__107;
  }

llvm_cbe_tmp__108:
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = phi i8 [ %%53, %%.thread ], [ %%73, %%61 ], [ %%39, %%59  for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__70 = (unsigned char )llvm_cbe_tmp__70__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__70);
printf("\n = 0x%X",llvm_cbe_tmp__52);
printf("\n = 0x%X",llvm_cbe_tmp__69);
printf("\n = 0x%X",llvm_cbe_tmp__39);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = phi i8 [ %%50, %%.thread ], [ %%70, %%61 ], [ %%35, %%59  for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_161_count);
  llvm_cbe_tmp__71 = (unsigned char )llvm_cbe_tmp__71__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__71);
printf("\n = 0x%X",llvm_cbe_tmp__49);
printf("\n = 0x%X",llvm_cbe_tmp__66);
printf("\n = 0x%X",llvm_cbe_tmp__35);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = phi i8 [ %%47, %%.thread ], [ %%67, %%61 ], [ %%31, %%59  for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__72 = (unsigned char )llvm_cbe_tmp__72__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__72);
printf("\n = 0x%X",llvm_cbe_tmp__46);
printf("\n = 0x%X",llvm_cbe_tmp__63);
printf("\n = 0x%X",llvm_cbe_tmp__31);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = phi i8 [ %%58, %%.thread ], [ %%64, %%61 ], [ %%27, %%59  for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_163_count);
  llvm_cbe_tmp__73 = (unsigned char )llvm_cbe_tmp__73__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__73);
printf("\n = 0x%X",llvm_cbe_tmp__57);
printf("\n = 0x%X",llvm_cbe_tmp__60);
printf("\n = 0x%X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = add i32 %%23, -32, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__74 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967264u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__74&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = zext i32 %%79 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__75 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__74&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = getelementptr inbounds i8* %%RoundKey, i64 %%80, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__76 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__75))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__75));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load i8* %%81, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__77 = (unsigned char )*llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = xor i8 %%78, %%82, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__78 = (unsigned char )((unsigned char )(llvm_cbe_tmp__73 ^ llvm_cbe_tmp__77));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = zext i32 %%23 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__79 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__23&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = getelementptr inbounds i8* %%RoundKey, i64 %%84, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__80 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%83, i8* %%85, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_185_count);
  *llvm_cbe_tmp__80 = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = add i32 %%23, -31, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__81 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967265u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__81&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = zext i32 %%86 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__82 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__81&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = getelementptr inbounds i8* %%RoundKey, i64 %%87, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__83 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__82))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__82));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load i8* %%88, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__84 = (unsigned char )*llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = xor i8 %%77, %%89, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__85 = (unsigned char )((unsigned char )(llvm_cbe_tmp__72 ^ llvm_cbe_tmp__84));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = or i32 %%23, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__86 = (unsigned int )llvm_cbe_tmp__23 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = zext i32 %%91 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__87 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__86&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = getelementptr inbounds i8* %%RoundKey, i64 %%92, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__88 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__87))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__87));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%90, i8* %%93, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_194_count);
  *llvm_cbe_tmp__88 = llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = add i32 %%23, -30, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__89 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967266u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__89&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = zext i32 %%94 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__90 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__89&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = getelementptr inbounds i8* %%RoundKey, i64 %%95, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__91 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__90))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__90));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = load i8* %%96, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__92 = (unsigned char )*llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = xor i8 %%76, %%97, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__93 = (unsigned char )((unsigned char )(llvm_cbe_tmp__71 ^ llvm_cbe_tmp__92));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = or i32 %%23, 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__94 = (unsigned int )llvm_cbe_tmp__23 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = zext i32 %%99 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__95 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__94&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = getelementptr inbounds i8* %%RoundKey, i64 %%100, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__96 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__95))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__95));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%98, i8* %%101, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_203_count);
  *llvm_cbe_tmp__96 = llvm_cbe_tmp__93;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = add i32 %%23, -29, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__97 = (unsigned int )((unsigned int )(llvm_cbe_tmp__23&4294967295ull)) + ((unsigned int )(4294967267u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__97&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = zext i32 %%102 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__98 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__97&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = getelementptr inbounds i8* %%RoundKey, i64 %%103, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__99 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__98))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__98));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = load i8* %%104, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__100 = (unsigned char )*llvm_cbe_tmp__99;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = xor i8 %%75, %%105, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__101 = (unsigned char )((unsigned char )(llvm_cbe_tmp__70 ^ llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = or i32 %%23, 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__102 = (unsigned int )llvm_cbe_tmp__23 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = zext i32 %%107 to i64, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__103 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__102&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = getelementptr inbounds i8* %%RoundKey, i64 %%108, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__104 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__103))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__103));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%106, i8* %%109, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_212_count);
  *llvm_cbe_tmp__104 = llvm_cbe_tmp__101;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = add i32 %%storemerge12, 1, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__105 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__105&4294967295ull)));
  if (((llvm_cbe_tmp__105&4294967295U) == (60u&4294967295U))) {
    goto llvm_cbe_tmp__109;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__105;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i8 %%31 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_127_count);
  llvm_cbe_tmp__41 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__31&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%42, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__42 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__41))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__41));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__41) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i8* %%43, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_129_count);
  llvm_cbe_tmp__43 = (unsigned char )*llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = zext i8 %%35 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__44 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__35&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%45, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__45 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__44))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__44) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load i8* %%46, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__46 = (unsigned char )*llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = zext i8 %%39 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__47 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__39&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%48, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__48 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__47))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__47));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__47) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load i8* %%49, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__49 = (unsigned char )*llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = zext i8 %%27 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__50 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__27&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%51, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__51 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__50))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__50));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__50) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i8* %%52, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_138_count);
  llvm_cbe_tmp__52 = (unsigned char )*llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = lshr i32 %%storemerge12, 3, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__53 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) >> ((unsigned int )(3u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__53&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = zext i32 %%54 to i64, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__54 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__53&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = getelementptr inbounds [11 x i8]* @aesl_internal_Rcon, i64 0, i64 %%55, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__55 = ( char *)(&aesl_internal_Rcon[(((signed long long )llvm_cbe_tmp__54))
#ifdef AESL_BC_SIM
 % 11
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__54));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__54) < 11)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_Rcon' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load i8* %%56, align 1, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__56 = (unsigned char )*llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = xor i8 %%57, %%44, !dbg !17 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__57 = (unsigned char )((unsigned char )(llvm_cbe_tmp__56 ^ llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__57);
  llvm_cbe_tmp__70__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__52;   /* for PHI node */
  llvm_cbe_tmp__71__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__49;   /* for PHI node */
  llvm_cbe_tmp__72__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__46;   /* for PHI node */
  llvm_cbe_tmp__73__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__57;   /* for PHI node */
  goto llvm_cbe_tmp__108;

llvm_cbe_tmp__107:
  if (((llvm_cbe_tmp__40&4294967295U) == (4u&4294967295U))) {
    goto llvm_cbe_tmp__110;
  } else {
    llvm_cbe_tmp__70__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__39;   /* for PHI node */
    llvm_cbe_tmp__71__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__35;   /* for PHI node */
    llvm_cbe_tmp__72__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__31;   /* for PHI node */
    llvm_cbe_tmp__73__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe_tmp__108;
  }

llvm_cbe_tmp__110:
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = zext i8 %%27 to i64, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__58 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__27&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%62, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__59 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__58))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__58));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__58) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i8* %%63, align 1, !dbg !18 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__60 = (unsigned char )*llvm_cbe_tmp__59;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = zext i8 %%31 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__61 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__31&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%65, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__62 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__61))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__61));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__61) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i8* %%66, align 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__63 = (unsigned char )*llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = zext i8 %%35 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__64 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__35&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%68, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__65 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__64))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__64));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__64) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load i8* %%69, align 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__66 = (unsigned char )*llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = zext i8 %%39 to i64, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__67 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__39&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%71, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__68 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__67))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__67));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__67) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = load i8* %%72, align 1, !dbg !19 for 0x%I64xth hint within @aesl_internal_KeyExpansion  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__69 = (unsigned char )*llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
  llvm_cbe_tmp__70__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__69;   /* for PHI node */
  llvm_cbe_tmp__71__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__66;   /* for PHI node */
  llvm_cbe_tmp__72__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__63;   /* for PHI node */
  llvm_cbe_tmp__73__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__60;   /* for PHI node */
  goto llvm_cbe_tmp__108;

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__109:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_KeyExpansion}\n");
  return;
}


void AES_init_ctx_iv(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_key,  char *llvm_cbe_iv) {
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
   char *llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
   char *llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
   char *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_init_ctx_iv\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_init_ctx_iv  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__111 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_KeyExpansion(i8* %%1, i8* %%key), !dbg !14 for 0x%I64xth hint within @AES_init_ctx_iv  --> \n", ++aesl_llvm_cbe_243_count);
   /*tail*/ aesl_internal_KeyExpansion(( char *)llvm_cbe_tmp__111, ( char *)llvm_cbe_key);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 1, i64 0, !dbg !14 for 0x%I64xth hint within @AES_init_ctx_iv  --> \n", ++aesl_llvm_cbe_244_count);
  llvm_cbe_tmp__112 = ( char *)(&llvm_cbe_ctx->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call i8* @memcpy(i8* %%2, i8* %%iv, i64 16 for 0x%I64xth hint within @AES_init_ctx_iv  --> \n", ++aesl_llvm_cbe_245_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__112, ( char *)llvm_cbe_iv, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__113);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_init_ctx_iv}\n");
  return;
}


void AES_ctx_set_iv(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_iv) {
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
   char *llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
   char *llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_ctx_set_iv\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 1, i64 0, !dbg !14 for 0x%I64xth hint within @AES_ctx_set_iv  --> \n", ++aesl_llvm_cbe_250_count);
  llvm_cbe_tmp__114 = ( char *)(&llvm_cbe_ctx->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memcpy(i8* %%1, i8* %%iv, i64 16 for 0x%I64xth hint within @AES_ctx_set_iv  --> \n", ++aesl_llvm_cbe_252_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__114, ( char *)llvm_cbe_iv, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__115);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_ctx_set_iv}\n");
  return;
}


void AES_ECB_encrypt(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char (*llvm_cbe_buf)[4][4]) {
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
   char *llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_ECB_encrypt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_ECB_encrypt  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__116 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_Cipher([4 x [4 x i8]]* %%buf, i8* %%1), !dbg !14 for 0x%I64xth hint within @AES_ECB_encrypt  --> \n", ++aesl_llvm_cbe_259_count);
   /*tail*/ aesl_internal_Cipher(llvm_cbe_buf, ( char *)llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_ECB_encrypt}\n");
  return;
}


static void aesl_internal_Cipher( char (*llvm_cbe_state)[4][4],  char *llvm_cbe_RoundKey) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned char llvm_cbe_storemerge1;
  unsigned char llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  unsigned char llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_Cipher\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_AddRoundKey(i8 zeroext 0, [4 x [4 x i8]]* %%state, i8* %%RoundKey), !dbg !14 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_278_count);
   /*tail*/ aesl_internal_AddRoundKey(((unsigned char )0), llvm_cbe_state, ( char *)llvm_cbe_RoundKey);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned char )0));
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )((unsigned char )1);   /* for PHI node */
  goto llvm_cbe_tmp__118;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__118:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i8 [ 1, %%0 ], [ %%2, %%1  for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned char )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",((unsigned char )1));
printf("\n = 0x%X",llvm_cbe_tmp__117);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_SubBytes([4 x [4 x i8]]* %%state), !dbg !14 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_284_count);
   /*tail*/ aesl_internal_SubBytes(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_ShiftRows([4 x [4 x i8]]* %%state), !dbg !14 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_285_count);
   /*tail*/ aesl_internal_ShiftRows(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_MixColumns([4 x [4 x i8]]* %%state), !dbg !14 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_286_count);
   /*tail*/ aesl_internal_MixColumns(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_AddRoundKey(i8 zeroext %%storemerge1, [4 x [4 x i8]]* %%state, i8* %%RoundKey), !dbg !14 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_287_count);
   /*tail*/ aesl_internal_AddRoundKey(llvm_cbe_storemerge1, llvm_cbe_state, ( char *)llvm_cbe_RoundKey);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1 = 0x%X",llvm_cbe_storemerge1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i8 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__117 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1&255ull)) + ((unsigned char )(((unsigned char )1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__117&255ull)));
  if (((llvm_cbe_tmp__117&255U) == (((unsigned char )14)&255U))) {
    goto llvm_cbe_tmp__119;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__117;   /* for PHI node */
    goto llvm_cbe_tmp__118;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__119:
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_SubBytes([4 x [4 x i8]]* %%state), !dbg !15 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_294_count);
   /*tail*/ aesl_internal_SubBytes(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_ShiftRows([4 x [4 x i8]]* %%state), !dbg !15 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_295_count);
   /*tail*/ aesl_internal_ShiftRows(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_AddRoundKey(i8 zeroext 14, [4 x [4 x i8]]* %%state, i8* %%RoundKey), !dbg !15 for 0x%I64xth hint within @aesl_internal_Cipher  --> \n", ++aesl_llvm_cbe_296_count);
   /*tail*/ aesl_internal_AddRoundKey(((unsigned char )14), llvm_cbe_state, ( char *)llvm_cbe_RoundKey);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned char )14));
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_Cipher}\n");
  return;
}


void AES_ECB_decrypt(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf) {
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
   char (*llvm_cbe_tmp__120)[4][4];
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
   char *llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_ECB_decrypt\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast i8* %%buf to [4 x [4 x i8]]*, !dbg !14 for 0x%I64xth hint within @AES_ECB_decrypt  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__120 = ( char (*)[4][4])(( char (*)[4][4])llvm_cbe_buf);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_ECB_decrypt  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__121 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_InvCipher([4 x [4 x i8]]* %%1, i8* %%2), !dbg !14 for 0x%I64xth hint within @AES_ECB_decrypt  --> \n", ++aesl_llvm_cbe_304_count);
   /*tail*/ aesl_internal_InvCipher(llvm_cbe_tmp__120, ( char *)llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_ECB_decrypt}\n");
  return;
}


static void aesl_internal_InvCipher( char (*llvm_cbe_state)[4][4],  char *llvm_cbe_RoundKey) {
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned char llvm_cbe_storemerge1;
  unsigned char llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  unsigned char llvm_cbe_tmp__122;
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

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_InvCipher\n");
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_AddRoundKey(i8 zeroext 14, [4 x [4 x i8]]* %%state, i8* %%RoundKey), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_323_count);
   /*tail*/ aesl_internal_AddRoundKey(((unsigned char )14), llvm_cbe_state, ( char *)llvm_cbe_RoundKey);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned char )14));
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )((unsigned char )13);   /* for PHI node */
  goto llvm_cbe_tmp__123;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__123:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i8 [ 13, %%0 ], [ %%2, %%1  for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned char )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",((unsigned char )13));
printf("\n = 0x%X",llvm_cbe_tmp__122);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_InvShiftRows([4 x [4 x i8]]* %%state), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_329_count);
   /*tail*/ aesl_internal_InvShiftRows(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_InvSubBytes([4 x [4 x i8]]* %%state), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_330_count);
   /*tail*/ aesl_internal_InvSubBytes(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_AddRoundKey(i8 zeroext %%storemerge1, [4 x [4 x i8]]* %%state, i8* %%RoundKey), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_331_count);
   /*tail*/ aesl_internal_AddRoundKey(llvm_cbe_storemerge1, llvm_cbe_state, ( char *)llvm_cbe_RoundKey);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1 = 0x%X",llvm_cbe_storemerge1);
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_InvMixColumns([4 x [4 x i8]]* %%state), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_332_count);
   /*tail*/ aesl_internal_InvMixColumns(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i8 %%storemerge1, -1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_333_count);
  llvm_cbe_tmp__122 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__122&255ull)));
  if (((llvm_cbe_tmp__122&255U) == (((unsigned char )0)&255U))) {
    goto llvm_cbe_tmp__124;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__122;   /* for PHI node */
    goto llvm_cbe_tmp__123;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__124:
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_InvShiftRows([4 x [4 x i8]]* %%state), !dbg !15 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_340_count);
   /*tail*/ aesl_internal_InvShiftRows(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_InvSubBytes([4 x [4 x i8]]* %%state), !dbg !15 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_341_count);
   /*tail*/ aesl_internal_InvSubBytes(llvm_cbe_state);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_AddRoundKey(i8 zeroext 0, [4 x [4 x i8]]* %%state, i8* %%RoundKey), !dbg !15 for 0x%I64xth hint within @aesl_internal_InvCipher  --> \n", ++aesl_llvm_cbe_342_count);
   /*tail*/ aesl_internal_AddRoundKey(((unsigned char )0), llvm_cbe_state, ( char *)llvm_cbe_RoundKey);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",((unsigned char )0));
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_InvCipher}\n");
  return;
}


void AES_CBC_encrypt_buffer(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf, signed int llvm_cbe_length) {
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
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
   char *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
   char *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
   char *llvm_cbe_tmp__128;
   char *llvm_cbe_tmp__128__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
   char *llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
   char (*llvm_cbe_tmp__130)[4][4];
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
   char *llvm_cbe__2e_lcssa;
   char *llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
   char *llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_CBC_encrypt_buffer\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 1, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_355_count);
  llvm_cbe_tmp__125 = ( char *)(&llvm_cbe_ctx->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i32 %%length to i64, !dbg !15 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_362_count);
  llvm_cbe_tmp__126 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_length&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
  if (((llvm_cbe_length&4294967295U) == (0u&4294967295U))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = ( char *)llvm_cbe_tmp__125;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__127 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__128__PHI_TEMPORARY = ( char *)llvm_cbe_tmp__125;   /* for PHI node */
  goto llvm_cbe_tmp__133;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__133:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ 0, %%.lr.ph ], [ %%9, %%5  for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__131);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = phi i8* [ %%1, %%.lr.ph ], [ %%7, %%5  for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__128 = ( char *)llvm_cbe_tmp__128__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr i8* %%buf, i64 %%storemerge for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_368_count);
  llvm_cbe_tmp__129 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_XorWithIv(i8* %%7, i8* %%6), !dbg !15 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_369_count);
   /*tail*/ aesl_internal_XorWithIv(( char *)llvm_cbe_tmp__129, ( char *)llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = bitcast i8* %%7 to [4 x [4 x i8]]*, !dbg !14 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_370_count);
  llvm_cbe_tmp__130 = ( char (*)[4][4])(( char (*)[4][4])llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  tail call fastcc void @aesl_internal_Cipher([4 x [4 x i8]]* %%8, i8* %%4), !dbg !14 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_371_count);
   /*tail*/ aesl_internal_Cipher(llvm_cbe_tmp__130, ( char *)llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i64 %%storemerge1, 16, !dbg !16 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_372_count);
  llvm_cbe_tmp__131 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(16ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__131&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__131&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__126&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__131;   /* for PHI node */
    llvm_cbe_tmp__128__PHI_TEMPORARY = ( char *)llvm_cbe_tmp__129;   /* for PHI node */
    goto llvm_cbe_tmp__133;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = ( char *)llvm_cbe_tmp__129;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i8* [ %%1, %%0 ], [ %%7, %%5  for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = ( char *)llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i8* @memcpy(i8* %%1, i8* %%.lcssa, i64 16 for 0x%I64xth hint within @AES_CBC_encrypt_buffer  --> \n", ++aesl_llvm_cbe_378_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__125, ( char *)llvm_cbe__2e_lcssa, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__132);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_CBC_encrypt_buffer}\n");
  return;
}


static void aesl_internal_XorWithIv( char *llvm_cbe_buf,  char *llvm_cbe_Iv) {
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned char llvm_cbe_storemerge1;
  unsigned char llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  unsigned long long llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
   char *llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  unsigned char llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
   char *llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  unsigned char llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  unsigned char llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  unsigned char llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_XorWithIv\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
  goto llvm_cbe_tmp__141;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__141:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i8 [ 0, %%0 ], [ %%8, %%1  for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned char )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",((unsigned char )0));
printf("\n = 0x%X",llvm_cbe_tmp__140);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__134 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_storemerge1&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds i8* %%Iv, i64 %%2, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__135 = ( char *)(&llvm_cbe_Iv[(((signed long long )llvm_cbe_tmp__134))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__134));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_392_count);
  llvm_cbe_tmp__136 = (unsigned char )*llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds i8* %%buf, i64 %%2, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_393_count);
  llvm_cbe_tmp__137 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__134))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__134));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_394_count);
  llvm_cbe_tmp__138 = (unsigned char )*llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = xor i8 %%6, %%4, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_395_count);
  llvm_cbe_tmp__139 = (unsigned char )((unsigned char )(llvm_cbe_tmp__138 ^ llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%7, i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_396_count);
  *llvm_cbe_tmp__137 = llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add i8 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_XorWithIv  --> \n", ++aesl_llvm_cbe_397_count);
  llvm_cbe_tmp__140 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1&255ull)) + ((unsigned char )(((unsigned char )1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__140&255ull)));
  if (((llvm_cbe_tmp__140&255U) == (((unsigned char )16)&255U))) {
    goto llvm_cbe_tmp__142;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__140;   /* for PHI node */
    goto llvm_cbe_tmp__141;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__142:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_XorWithIv}\n");
  return;
}


void AES_CBC_decrypt_buffer(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf, signed int llvm_cbe_length) {
  static  unsigned long long aesl_llvm_cbe_storeNextIv_count = 0;
   char llvm_cbe_storeNextIv[16];    /* Address-exposed local */
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
  unsigned long long llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
   char *llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
   char *llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
   char *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
   char *llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
   char *llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
   char (*llvm_cbe_tmp__149)[4][4];
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
   char *llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  unsigned long long llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AES_CBC_decrypt_buffer\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = zext i32 %%length to i64, !dbg !15 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__143 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_length&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__143);
  if (((llvm_cbe_length&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [16 x i8]* %%storeNextIv, i64 0, i64 0, !dbg !15 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__144 = ( char *)(&llvm_cbe_storeNextIv[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__145 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 1, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_425_count);
  llvm_cbe_tmp__146 = ( char *)(&llvm_cbe_ctx->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  goto llvm_cbe_tmp__152;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__152:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ 0, %%.lr.ph ], [ %%11, %%6  for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__151);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr i8* %%buf, i64 %%storemerge for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_427_count);
  llvm_cbe_tmp__147 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = call i8* @memcpy(i8* %%3, i8* %%7, i64 16 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_428_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__144, ( char *)llvm_cbe_tmp__147, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__148);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = bitcast i8* %%7 to [4 x [4 x i8]]*, !dbg !14 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_429_count);
  llvm_cbe_tmp__149 = ( char (*)[4][4])(( char (*)[4][4])llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_InvCipher([4 x [4 x i8]]* %%9, i8* %%4), !dbg !14 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_430_count);
  aesl_internal_InvCipher(llvm_cbe_tmp__149, ( char *)llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_XorWithIv(i8* %%7, i8* %%5), !dbg !14 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_431_count);
  aesl_internal_XorWithIv(( char *)llvm_cbe_tmp__147, ( char *)llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call i8* @memcpy(i8* %%5, i8* %%3, i64 16 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_432_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__146, ( char *)llvm_cbe_tmp__144, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__150);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add i64 %%storemerge1, 16, !dbg !16 for 0x%I64xth hint within @AES_CBC_decrypt_buffer  --> \n", ++aesl_llvm_cbe_433_count);
  llvm_cbe_tmp__151 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(16ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__151&18446744073709551615ull)));
  if ((((unsigned long long )llvm_cbe_tmp__151&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__143&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__151;   /* for PHI node */
    goto llvm_cbe_tmp__152;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_CBC_decrypt_buffer}\n");
  return;
}


void AES_CTR_xcrypt_buffer(l_struct_OC_AES_ctx *llvm_cbe_ctx,  char *llvm_cbe_buf, signed int llvm_cbe_length) {
  static  unsigned long long aesl_llvm_cbe_buffer_count = 0;
   char llvm_cbe_buffer[16];    /* Address-exposed local */
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
   char *llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
   char *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
   char (*llvm_cbe_tmp__155)[4][4];
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
   char *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge4_count = 0;
  unsigned int llvm_cbe_storemerge4;
  unsigned int llvm_cbe_storemerge4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  unsigned int llvm_cbe_tmp__157;
  unsigned int llvm_cbe_tmp__157__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
   char *llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
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
  unsigned long long llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
   char *llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  unsigned char llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  unsigned int llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  unsigned char llvm_cbe_tmp__163;
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
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  unsigned long long llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
   char *llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  unsigned char llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  unsigned long long llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
   char *llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  unsigned char llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  unsigned char llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  unsigned int llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  unsigned int llvm_cbe_tmp__172;
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
printf("\n\{ BEGIN @AES_CTR_xcrypt_buffer\n");
  if (((llvm_cbe_length&4294967295U) == (0u&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    goto llvm_cbe__2e_lr_2e_ph;
  }

llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [16 x i8]* %%buffer, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__153 = ( char *)(&llvm_cbe_buffer[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 1, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_469_count);
  llvm_cbe_tmp__154 = ( char *)(&llvm_cbe_ctx->field1[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = bitcast [16 x i8]* %%buffer to [4 x [4 x i8]]*, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_470_count);
  llvm_cbe_tmp__155 = ( char (*)[4][4])(( char (*)[4][4])(&llvm_cbe_buffer));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 0, i64 0, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__156 = ( char *)(&llvm_cbe_ctx->field0[(((signed long long )0ull))]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )16u;   /* for PHI node */
  llvm_cbe_tmp__157__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__173;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__173:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge4 = phi i32 [ 16, %%.lr.ph ], [ %%31, %%22  for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_storemerge4_count);
  llvm_cbe_storemerge4 = (unsigned int )llvm_cbe_storemerge4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge4 = 0x%X",llvm_cbe_storemerge4);
printf("\n = 0x%X",16u);
printf("\n = 0x%X",llvm_cbe_tmp__172);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = phi i32 [ 0, %%.lr.ph ], [ %%30, %%22  for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_473_count);
  llvm_cbe_tmp__157 = (unsigned int )llvm_cbe_tmp__157__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__157);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__171);
}
  if (((llvm_cbe_storemerge4&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__174;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge4;   /* for PHI node */
    goto llvm_cbe_tmp__175;
  }

llvm_cbe_tmp__175:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.loopexit ], [ %%storemerge4, %%6  for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\nstoremerge4 = 0x%X",llvm_cbe_storemerge4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = zext i32 %%7 to i64, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_512_count);
  llvm_cbe_tmp__164 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__157&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds i8* %%buf, i64 %%23, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_513_count);
  llvm_cbe_tmp__165 = ( char *)(&llvm_cbe_buf[(((signed long long )llvm_cbe_tmp__164))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__164));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i8* %%24, align 1, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_514_count);
  llvm_cbe_tmp__166 = (unsigned char )*llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%storemerge12 to i64, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_515_count);
  llvm_cbe_tmp__167 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [16 x i8]* %%buffer, i64 0, i64 %%26, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_516_count);
  llvm_cbe_tmp__168 = ( char *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__167))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__167));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__167) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'buffer' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i8* %%27, align 1, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_517_count);
  llvm_cbe_tmp__169 = (unsigned char )*llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = xor i8 %%28, %%25, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_518_count);
  llvm_cbe_tmp__170 = (unsigned char )((unsigned char )(llvm_cbe_tmp__169 ^ llvm_cbe_tmp__166));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%29, i8* %%24, align 1, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_519_count);
  *llvm_cbe_tmp__165 = llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i32 %%7, 1, !dbg !16 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_520_count);
  llvm_cbe_tmp__171 = (unsigned int )((unsigned int )(llvm_cbe_tmp__157&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__171&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = add nsw i32 %%storemerge12, 1, !dbg !16 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__172 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__172&4294967295ull)));
  if (((llvm_cbe_tmp__171&4294967295U) == (llvm_cbe_length&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__172;   /* for PHI node */
    llvm_cbe_tmp__157__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__171;   /* for PHI node */
    goto llvm_cbe_tmp__173;
  }

llvm_cbe__2e_loopexit:
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__175;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__176:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 15, %%9 ], [ %%19, %%18  for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",15u);
printf("\n = 0x%X",llvm_cbe_tmp__162);
}
  if ((((signed int )llvm_cbe_storemerge1) > ((signed int )4294967295u))) {
    goto llvm_cbe_tmp__177;
  } else {
    goto llvm_cbe__2e_loopexit;
  }

llvm_cbe_tmp__178:
if (AESL_DEBUG_TRACE)
printf("\n  store i8 0, i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_495_count);
  *llvm_cbe_tmp__160 = ((unsigned char )0);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )0));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = add nsw i32 %%storemerge1, -1, !dbg !16 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_496_count);
  llvm_cbe_tmp__162 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__162&4294967295ull)));
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__162;   /* for PHI node */
  goto llvm_cbe_tmp__176;

llvm_cbe_tmp__177:
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_490_count);
  llvm_cbe_tmp__159 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds %%struct.AES_ctx* %%ctx, i64 0, i32 1, i64 %%14, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_491_count);
  llvm_cbe_tmp__160 = ( char *)(&llvm_cbe_ctx->field1[(((signed long long )llvm_cbe_tmp__159))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__159));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_492_count);
  llvm_cbe_tmp__161 = (unsigned char )*llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__161);
  if (((llvm_cbe_tmp__161&255U) == (((unsigned char )-1)&255U))) {
    goto llvm_cbe_tmp__178;
  } else {
    goto llvm_cbe_tmp__179;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__174:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call i8* @memcpy(i8* %%2, i8* %%3, i64 16 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_476_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__153, ( char *)llvm_cbe_tmp__154, 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__158);
}
if (AESL_DEBUG_TRACE)
printf("\n  call fastcc void @aesl_internal_Cipher([4 x [4 x i8]]* %%4, i8* %%5), !dbg !14 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_477_count);
  aesl_internal_Cipher(llvm_cbe_tmp__155, ( char *)llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )15u;   /* for PHI node */
  goto llvm_cbe_tmp__176;

llvm_cbe_tmp__179:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add i8 %%16, 1, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_499_count);
  llvm_cbe_tmp__163 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__161&255ull)) + ((unsigned char )(((unsigned char )1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__163&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%21, i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @AES_CTR_xcrypt_buffer  --> \n", ++aesl_llvm_cbe_500_count);
  *llvm_cbe_tmp__160 = llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__163);
  goto llvm_cbe__2e_loopexit;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AES_CTR_xcrypt_buffer}\n");
  return;
}


static void aesl_internal_AddRoundKey( char llvm_cbe_round,  char (*llvm_cbe_state)[4][4],  char *llvm_cbe_RoundKey) {
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  unsigned int llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  unsigned int llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned char llvm_cbe_storemerge3;
  unsigned char llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  unsigned int llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  unsigned int llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  unsigned int llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  unsigned long long llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  unsigned long long llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
   char *llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  unsigned char llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
   char *llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  unsigned char llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  unsigned char llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  unsigned int llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  unsigned long long llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
   char *llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  unsigned char llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
   char *llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  unsigned char llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  unsigned char llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  unsigned int llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  unsigned long long llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
   char *llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  unsigned char llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
   char *llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  unsigned char llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  unsigned char llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  unsigned int llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  unsigned long long llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
   char *llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  unsigned char llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
   char *llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  unsigned char llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  unsigned char llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  unsigned char llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_AddRoundKey\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = zext i8 %%round to i32, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__180 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_round&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__180);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = shl nuw nsw i32 %%1, 4, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_550_count);
  llvm_cbe_tmp__181 = (unsigned int )llvm_cbe_tmp__180 << 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__181);
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
  goto llvm_cbe__2e_preheader;

  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i8 [ 0, %%0 ], [ %%34, %%.preheader  for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned char )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",((unsigned char )0));
printf("\n = 0x%X",llvm_cbe_tmp__213);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = zext i8 %%storemerge3 to i32, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_556_count);
  llvm_cbe_tmp__182 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_storemerge3&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = shl nuw nsw i32 %%3, 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_557_count);
  llvm_cbe_tmp__183 = (unsigned int )llvm_cbe_tmp__182 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i32 %%4, %%2, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_558_count);
  llvm_cbe_tmp__184 = (unsigned int )((unsigned int )(llvm_cbe_tmp__183&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__181&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__184&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i8 %%storemerge3 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_559_count);
  llvm_cbe_tmp__185 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_storemerge3&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%5 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_560_count);
  llvm_cbe_tmp__186 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i8* %%RoundKey, i64 %%7, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_561_count);
  llvm_cbe_tmp__187 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__186))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__186));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_562_count);
  llvm_cbe_tmp__188 = (unsigned char )*llvm_cbe_tmp__187;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%6, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_563_count);
  llvm_cbe_tmp__189 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__185))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__185));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__185) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_564_count);
  llvm_cbe_tmp__190 = (unsigned char )*llvm_cbe_tmp__189;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = xor i8 %%11, %%9, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_565_count);
  llvm_cbe_tmp__191 = (unsigned char )((unsigned char )(llvm_cbe_tmp__190 ^ llvm_cbe_tmp__188));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__191);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__185) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%12, i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_566_count);
  *llvm_cbe_tmp__189 = llvm_cbe_tmp__191;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = or i32 %%5, 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_572_count);
  llvm_cbe_tmp__192 = (unsigned int )llvm_cbe_tmp__184 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i32 %%13 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_573_count);
  llvm_cbe_tmp__193 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds i8* %%RoundKey, i64 %%14, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_574_count);
  llvm_cbe_tmp__194 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__193))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__193));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__195 = (unsigned char )*llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%6, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__196 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__185))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__185));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__185) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%17, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__197 = (unsigned char )*llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = xor i8 %%18, %%16, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_578_count);
  llvm_cbe_tmp__198 = (unsigned char )((unsigned char )(llvm_cbe_tmp__197 ^ llvm_cbe_tmp__195));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__198);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__185) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%19, i8* %%17, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_579_count);
  *llvm_cbe_tmp__196 = llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = or i32 %%5, 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_585_count);
  llvm_cbe_tmp__199 = (unsigned int )llvm_cbe_tmp__184 | 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i32 %%20 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_586_count);
  llvm_cbe_tmp__200 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i8* %%RoundKey, i64 %%21, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_587_count);
  llvm_cbe_tmp__201 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__200))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__200));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i8* %%22, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_588_count);
  llvm_cbe_tmp__202 = (unsigned char )*llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%6, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_589_count);
  llvm_cbe_tmp__203 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__185))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__185));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__185) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i8* %%24, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_590_count);
  llvm_cbe_tmp__204 = (unsigned char )*llvm_cbe_tmp__203;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = xor i8 %%25, %%23, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_591_count);
  llvm_cbe_tmp__205 = (unsigned char )((unsigned char )(llvm_cbe_tmp__204 ^ llvm_cbe_tmp__202));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__205);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__185) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%26, i8* %%24, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_592_count);
  *llvm_cbe_tmp__203 = llvm_cbe_tmp__205;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = or i32 %%5, 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_598_count);
  llvm_cbe_tmp__206 = (unsigned int )llvm_cbe_tmp__184 | 3u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sext i32 %%27 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_599_count);
  llvm_cbe_tmp__207 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds i8* %%RoundKey, i64 %%28, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_600_count);
  llvm_cbe_tmp__208 = ( char *)(&llvm_cbe_RoundKey[(((signed long long )llvm_cbe_tmp__207))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__207));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i8* %%29, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_601_count);
  llvm_cbe_tmp__209 = (unsigned char )*llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%6, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_602_count);
  llvm_cbe_tmp__210 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__185))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__185));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__185) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i8* %%31, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_603_count);
  llvm_cbe_tmp__211 = (unsigned char )*llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = xor i8 %%32, %%30, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_604_count);
  llvm_cbe_tmp__212 = (unsigned char )((unsigned char )(llvm_cbe_tmp__211 ^ llvm_cbe_tmp__209));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__185) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%33, i8* %%31, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_605_count);
  *llvm_cbe_tmp__210 = llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add i8 %%storemerge3, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_AddRoundKey  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__213 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge3&255ull)) + ((unsigned char )(((unsigned char )1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__213&255ull)));
  if (((llvm_cbe_tmp__213&255U) == (((unsigned char )4)&255U))) {
    goto llvm_cbe_tmp__214;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__213;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__214:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_AddRoundKey}\n");
  return;
}


static void aesl_internal_InvShiftRows( char (*llvm_cbe_state)[4][4]) {
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
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
   char *llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  unsigned char llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
   char *llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  unsigned char llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
   char *llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  unsigned char llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
   char *llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  unsigned char llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
   char *llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  unsigned char llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
   char *llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  unsigned char llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
   char *llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  unsigned char llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
   char *llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  unsigned char llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
   char *llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  unsigned char llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
   char *llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  unsigned char llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
   char *llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  unsigned char llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
   char *llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  unsigned char llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_InvShiftRows\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_644_count);
  llvm_cbe_tmp__215 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i8* %%1, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_645_count);
  llvm_cbe_tmp__216 = (unsigned char )*llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_651_count);
  llvm_cbe_tmp__217 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_652_count);
  llvm_cbe_tmp__218 = (unsigned char )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__218);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* %%1, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_653_count);
  *llvm_cbe_tmp__215 = llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__218);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__219 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_655_count);
  llvm_cbe_tmp__220 = (unsigned char )*llvm_cbe_tmp__219;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__220);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%6, i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_656_count);
  *llvm_cbe_tmp__217 = llvm_cbe_tmp__220;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_657_count);
  llvm_cbe_tmp__221 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i8* %%7, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_658_count);
  llvm_cbe_tmp__222 = (unsigned char )*llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%8, i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_659_count);
  *llvm_cbe_tmp__219 = llvm_cbe_tmp__222;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__222);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%2, i8* %%7, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_660_count);
  *llvm_cbe_tmp__221 = llvm_cbe_tmp__216;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_661_count);
  llvm_cbe_tmp__223 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_662_count);
  llvm_cbe_tmp__224 = (unsigned char )*llvm_cbe_tmp__223;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_668_count);
  llvm_cbe_tmp__225 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_669_count);
  llvm_cbe_tmp__226 = (unsigned char )*llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%12, i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_670_count);
  *llvm_cbe_tmp__223 = llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__226);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%10, i8* %%11, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_671_count);
  *llvm_cbe_tmp__225 = llvm_cbe_tmp__224;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_672_count);
  llvm_cbe_tmp__227 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_673_count);
  llvm_cbe_tmp__228 = (unsigned char )*llvm_cbe_tmp__227;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_679_count);
  llvm_cbe_tmp__229 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_680_count);
  llvm_cbe_tmp__230 = (unsigned char )*llvm_cbe_tmp__229;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__230);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%16, i8* %%13, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_681_count);
  *llvm_cbe_tmp__227 = llvm_cbe_tmp__230;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__230);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_682_count);
  *llvm_cbe_tmp__229 = llvm_cbe_tmp__228;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_683_count);
  llvm_cbe_tmp__231 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%17, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_684_count);
  llvm_cbe_tmp__232 = (unsigned char )*llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__232);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_690_count);
  llvm_cbe_tmp__233 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i8* %%19, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_691_count);
  llvm_cbe_tmp__234 = (unsigned char )*llvm_cbe_tmp__233;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__234);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%20, i8* %%17, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_692_count);
  *llvm_cbe_tmp__231 = llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_693_count);
  llvm_cbe_tmp__235 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i8* %%21, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_694_count);
  llvm_cbe_tmp__236 = (unsigned char )*llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__236);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%22, i8* %%19, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_695_count);
  *llvm_cbe_tmp__233 = llvm_cbe_tmp__236;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_696_count);
  llvm_cbe_tmp__237 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_697_count);
  llvm_cbe_tmp__238 = (unsigned char )*llvm_cbe_tmp__237;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__238);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%24, i8* %%21, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_698_count);
  *llvm_cbe_tmp__235 = llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__238);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%18, i8* %%23, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvShiftRows  --> \n", ++aesl_llvm_cbe_699_count);
  *llvm_cbe_tmp__237 = llvm_cbe_tmp__232;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__232);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_InvShiftRows}\n");
  return;
}


static void aesl_internal_InvSubBytes( char (*llvm_cbe_state)[4][4]) {
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
   char *llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  unsigned char llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  unsigned long long llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
   char *llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  unsigned char llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
   char *llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  unsigned char llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  unsigned long long llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
   char *llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  unsigned char llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
   char *llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  unsigned char llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  unsigned long long llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
   char *llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  unsigned char llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
   char *llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  unsigned char llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  unsigned long long llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
   char *llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  unsigned char llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
   char *llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  unsigned char llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  unsigned long long llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
   char *llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  unsigned char llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
   char *llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  unsigned char llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  unsigned long long llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
   char *llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  unsigned char llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
   char *llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  unsigned char llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  unsigned long long llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
   char *llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  unsigned char llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
   char *llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  unsigned char llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  unsigned long long llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
   char *llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  unsigned char llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
   char *llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  unsigned char llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  unsigned long long llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
   char *llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  unsigned char llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
   char *llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  unsigned char llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  unsigned long long llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
   char *llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  unsigned char llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
   char *llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  unsigned char llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  unsigned long long llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
   char *llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  unsigned char llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
   char *llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  unsigned char llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  unsigned long long llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
   char *llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  unsigned char llvm_cbe_tmp__298;
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
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
   char *llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  unsigned char llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  unsigned long long llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
   char *llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  unsigned char llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
   char *llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  unsigned char llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  unsigned long long llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
   char *llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  unsigned char llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
   char *llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  unsigned char llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  unsigned long long llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
   char *llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  unsigned char llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
   char *llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  unsigned char llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  unsigned long long llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
   char *llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  unsigned char llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_InvSubBytes\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_713_count);
  llvm_cbe_tmp__239 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i8* %%0, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_714_count);
  llvm_cbe_tmp__240 = (unsigned char )*llvm_cbe_tmp__239;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%1 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_715_count);
  llvm_cbe_tmp__241 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__240&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_716_count);
  llvm_cbe_tmp__242 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__241))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__241));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__241) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_717_count);
  llvm_cbe_tmp__243 = (unsigned char )*llvm_cbe_tmp__242;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__243);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* %%0, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_718_count);
  *llvm_cbe_tmp__239 = llvm_cbe_tmp__243;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__243);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_724_count);
  llvm_cbe_tmp__244 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_725_count);
  llvm_cbe_tmp__245 = (unsigned char )*llvm_cbe_tmp__244;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i8 %%6 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_726_count);
  llvm_cbe_tmp__246 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__245&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%7, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_727_count);
  llvm_cbe_tmp__247 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__246))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__246));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__246) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_728_count);
  llvm_cbe_tmp__248 = (unsigned char )*llvm_cbe_tmp__247;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__248);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%9, i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_729_count);
  *llvm_cbe_tmp__244 = llvm_cbe_tmp__248;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__248);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_735_count);
  llvm_cbe_tmp__249 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__250 = (unsigned char )*llvm_cbe_tmp__249;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__250);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = zext i8 %%11 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_737_count);
  llvm_cbe_tmp__251 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__250&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__251);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%12, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_738_count);
  llvm_cbe_tmp__252 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__251))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__251));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__251) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_739_count);
  llvm_cbe_tmp__253 = (unsigned char )*llvm_cbe_tmp__252;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__253);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_740_count);
  *llvm_cbe_tmp__249 = llvm_cbe_tmp__253;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__253);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_746_count);
  llvm_cbe_tmp__254 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_747_count);
  llvm_cbe_tmp__255 = (unsigned char )*llvm_cbe_tmp__254;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__255);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i8 %%16 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_748_count);
  llvm_cbe_tmp__256 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__255&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%17, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_749_count);
  llvm_cbe_tmp__257 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__256))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__256));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__256) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i8* %%18, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_750_count);
  llvm_cbe_tmp__258 = (unsigned char )*llvm_cbe_tmp__257;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__258);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%19, i8* %%15, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_751_count);
  *llvm_cbe_tmp__254 = llvm_cbe_tmp__258;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__258);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__259 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i8* %%20, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__260 = (unsigned char )*llvm_cbe_tmp__259;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i8 %%21 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__261 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__260&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__261);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%22, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_769_count);
  llvm_cbe_tmp__262 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__261))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__261));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__261) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_770_count);
  llvm_cbe_tmp__263 = (unsigned char )*llvm_cbe_tmp__262;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__263);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%24, i8* %%20, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_771_count);
  *llvm_cbe_tmp__259 = llvm_cbe_tmp__263;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__263);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_777_count);
  llvm_cbe_tmp__264 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i8* %%25, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_778_count);
  llvm_cbe_tmp__265 = (unsigned char )*llvm_cbe_tmp__264;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__265);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = zext i8 %%26 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_779_count);
  llvm_cbe_tmp__266 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__265&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%27, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_780_count);
  llvm_cbe_tmp__267 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__266))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__266));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__266) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i8* %%28, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_781_count);
  llvm_cbe_tmp__268 = (unsigned char )*llvm_cbe_tmp__267;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__268);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%29, i8* %%25, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_782_count);
  *llvm_cbe_tmp__264 = llvm_cbe_tmp__268;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_788_count);
  llvm_cbe_tmp__269 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i8* %%30, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_789_count);
  llvm_cbe_tmp__270 = (unsigned char )*llvm_cbe_tmp__269;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__270);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i8 %%31 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__271 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__270&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__271);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%32, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__272 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__271))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__271));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__271) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i8* %%33, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_792_count);
  llvm_cbe_tmp__273 = (unsigned char )*llvm_cbe_tmp__272;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__273);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%34, i8* %%30, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_793_count);
  *llvm_cbe_tmp__269 = llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__273);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__274 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i8* %%35, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__275 = (unsigned char )*llvm_cbe_tmp__274;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__275);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i8 %%36 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_801_count);
  llvm_cbe_tmp__276 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__275&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%37, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_802_count);
  llvm_cbe_tmp__277 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__276))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__276));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__276) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i8* %%38, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_803_count);
  llvm_cbe_tmp__278 = (unsigned char )*llvm_cbe_tmp__277;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__278);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%39, i8* %%35, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_804_count);
  *llvm_cbe_tmp__274 = llvm_cbe_tmp__278;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__278);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_819_count);
  llvm_cbe_tmp__279 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i8* %%40, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_820_count);
  llvm_cbe_tmp__280 = (unsigned char )*llvm_cbe_tmp__279;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__280);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i8 %%41 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_821_count);
  llvm_cbe_tmp__281 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__280&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__281);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%42, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_822_count);
  llvm_cbe_tmp__282 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__281))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__281));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__281) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i8* %%43, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_823_count);
  llvm_cbe_tmp__283 = (unsigned char )*llvm_cbe_tmp__282;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__283);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%44, i8* %%40, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_824_count);
  *llvm_cbe_tmp__279 = llvm_cbe_tmp__283;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__283);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_830_count);
  llvm_cbe_tmp__284 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i8* %%45, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_831_count);
  llvm_cbe_tmp__285 = (unsigned char )*llvm_cbe_tmp__284;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i8 %%46 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_832_count);
  llvm_cbe_tmp__286 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__285&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__286);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%47, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_833_count);
  llvm_cbe_tmp__287 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__286))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__286));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__286) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i8* %%48, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_834_count);
  llvm_cbe_tmp__288 = (unsigned char )*llvm_cbe_tmp__287;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%49, i8* %%45, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_835_count);
  *llvm_cbe_tmp__284 = llvm_cbe_tmp__288;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__288);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_841_count);
  llvm_cbe_tmp__289 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i8* %%50, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_842_count);
  llvm_cbe_tmp__290 = (unsigned char )*llvm_cbe_tmp__289;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__290);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = zext i8 %%51 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_843_count);
  llvm_cbe_tmp__291 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__290&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%52, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_844_count);
  llvm_cbe_tmp__292 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__291))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__291));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__291) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load i8* %%53, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_845_count);
  llvm_cbe_tmp__293 = (unsigned char )*llvm_cbe_tmp__292;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__293);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%54, i8* %%50, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_846_count);
  *llvm_cbe_tmp__289 = llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_852_count);
  llvm_cbe_tmp__294 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i8* %%55, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_853_count);
  llvm_cbe_tmp__295 = (unsigned char )*llvm_cbe_tmp__294;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i8 %%56 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_854_count);
  llvm_cbe_tmp__296 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__295&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__296);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%57, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_855_count);
  llvm_cbe_tmp__297 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__296))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__296));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__296) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i8* %%58, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_856_count);
  llvm_cbe_tmp__298 = (unsigned char )*llvm_cbe_tmp__297;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__298);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%59, i8* %%55, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_857_count);
  *llvm_cbe_tmp__294 = llvm_cbe_tmp__298;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__298);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_872_count);
  llvm_cbe_tmp__299 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = load i8* %%60, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_873_count);
  llvm_cbe_tmp__300 = (unsigned char )*llvm_cbe_tmp__299;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__300);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = zext i8 %%61 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_874_count);
  llvm_cbe_tmp__301 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__300&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__301);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%62, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_875_count);
  llvm_cbe_tmp__302 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__301))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__301));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__301) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i8* %%63, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__303 = (unsigned char )*llvm_cbe_tmp__302;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__303);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%64, i8* %%60, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_877_count);
  *llvm_cbe_tmp__299 = llvm_cbe_tmp__303;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__303);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_883_count);
  llvm_cbe_tmp__304 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load i8* %%65, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_884_count);
  llvm_cbe_tmp__305 = (unsigned char )*llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__305);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = zext i8 %%66 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_885_count);
  llvm_cbe_tmp__306 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__305&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%67, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_886_count);
  llvm_cbe_tmp__307 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__306))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__306));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__306) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load i8* %%68, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_887_count);
  llvm_cbe_tmp__308 = (unsigned char )*llvm_cbe_tmp__307;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__308);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%69, i8* %%65, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_888_count);
  *llvm_cbe_tmp__304 = llvm_cbe_tmp__308;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__308);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_894_count);
  llvm_cbe_tmp__309 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load i8* %%70, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_895_count);
  llvm_cbe_tmp__310 = (unsigned char )*llvm_cbe_tmp__309;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = zext i8 %%71 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_896_count);
  llvm_cbe_tmp__311 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__310&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%72, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__312 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__311))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__311));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__311) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i8* %%73, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_898_count);
  llvm_cbe_tmp__313 = (unsigned char )*llvm_cbe_tmp__312;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__313);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%74, i8* %%70, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_899_count);
  *llvm_cbe_tmp__309 = llvm_cbe_tmp__313;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__313);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_905_count);
  llvm_cbe_tmp__314 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load i8* %%75, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_906_count);
  llvm_cbe_tmp__315 = (unsigned char )*llvm_cbe_tmp__314;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__315);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = zext i8 %%76 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_907_count);
  llvm_cbe_tmp__316 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__315&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [256 x i8]* @aesl_internal_rsbox, i64 0, i64 %%77, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_908_count);
  llvm_cbe_tmp__317 = ( char *)(&aesl_internal_rsbox[(((signed long long )llvm_cbe_tmp__316))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__316));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__316) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_rsbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load i8* %%78, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_909_count);
  llvm_cbe_tmp__318 = (unsigned char )*llvm_cbe_tmp__317;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__318);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%79, i8* %%75, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvSubBytes  --> \n", ++aesl_llvm_cbe_910_count);
  *llvm_cbe_tmp__314 = llvm_cbe_tmp__318;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__318);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_InvSubBytes}\n");
  return;
}


static void aesl_internal_InvMixColumns( char (*llvm_cbe_state)[4][4]) {
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
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  unsigned long long llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
   char *llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  unsigned char llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
   char *llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  unsigned char llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
   char *llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  unsigned char llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
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
   char *llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  unsigned char llvm_cbe_tmp__327;
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
  unsigned char llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  unsigned char llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  unsigned char llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  unsigned char llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  unsigned char llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  unsigned char llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  unsigned char llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  unsigned char llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  unsigned char llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  unsigned char llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  unsigned char llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  unsigned char llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  unsigned char llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  unsigned char llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  unsigned char llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  unsigned char llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  unsigned char llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  unsigned char llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  unsigned char llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  unsigned char llvm_cbe_tmp__347;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  unsigned char llvm_cbe_tmp__348;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  unsigned char llvm_cbe_tmp__349;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  unsigned char llvm_cbe_tmp__350;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  unsigned char llvm_cbe_tmp__351;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  unsigned char llvm_cbe_tmp__352;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  unsigned char llvm_cbe_tmp__353;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  unsigned char llvm_cbe_tmp__354;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  unsigned char llvm_cbe_tmp__355;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  unsigned char llvm_cbe_tmp__356;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  unsigned char llvm_cbe_tmp__357;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  unsigned char llvm_cbe_tmp__358;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  unsigned char llvm_cbe_tmp__359;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  unsigned char llvm_cbe_tmp__360;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  unsigned char llvm_cbe_tmp__361;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  unsigned char llvm_cbe_tmp__362;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  unsigned char llvm_cbe_tmp__363;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  unsigned char llvm_cbe_tmp__364;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  unsigned char llvm_cbe_tmp__365;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  unsigned char llvm_cbe_tmp__366;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  unsigned char llvm_cbe_tmp__367;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  unsigned char llvm_cbe_tmp__368;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  unsigned char llvm_cbe_tmp__369;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  unsigned char llvm_cbe_tmp__370;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  unsigned char llvm_cbe_tmp__371;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  unsigned char llvm_cbe_tmp__372;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  unsigned char llvm_cbe_tmp__373;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  unsigned char llvm_cbe_tmp__374;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  unsigned char llvm_cbe_tmp__375;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  unsigned char llvm_cbe_tmp__376;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  unsigned char llvm_cbe_tmp__377;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  unsigned char llvm_cbe_tmp__378;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  unsigned int llvm_cbe_tmp__379;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_InvMixColumns\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__380;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__380:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 0, %%0 ], [ %%62, %%1  for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__379);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_943_count);
  llvm_cbe_tmp__319 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__319);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_944_count);
  llvm_cbe_tmp__320 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__319))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__319));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__319) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_945_count);
  llvm_cbe_tmp__321 = (unsigned char )*llvm_cbe_tmp__320;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_967_count);
  llvm_cbe_tmp__322 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__319))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__319));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__319) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_968_count);
  llvm_cbe_tmp__323 = (unsigned char )*llvm_cbe_tmp__322;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_990_count);
  llvm_cbe_tmp__324 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__319))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__319));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__319) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i8* %%7, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_991_count);
  llvm_cbe_tmp__325 = (unsigned char )*llvm_cbe_tmp__324;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1013_count);
  llvm_cbe_tmp__326 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__319))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__319));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__319) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1014_count);
  llvm_cbe_tmp__327 = (unsigned char )*llvm_cbe_tmp__326;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%4), !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1036_count);
  llvm_cbe_tmp__328 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__321);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__321);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__328);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%11), !dbg !16 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1037_count);
  llvm_cbe_tmp__329 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__328);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__328);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__329);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%12), !dbg !16 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1038_count);
  llvm_cbe_tmp__330 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__329);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__329);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__330);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%6), !dbg !17 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1039_count);
  llvm_cbe_tmp__331 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__323);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__331);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%14), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1040_count);
  llvm_cbe_tmp__332 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__331);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__332);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%15), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1041_count);
  llvm_cbe_tmp__333 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__332);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__332);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__333);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%8), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1042_count);
  llvm_cbe_tmp__334 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__325);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__325);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__334);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%17), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1043_count);
  llvm_cbe_tmp__335 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__334);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__334);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__335);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%18), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1044_count);
  llvm_cbe_tmp__336 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__335);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__336);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%10), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1045_count);
  llvm_cbe_tmp__337 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__327);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__327);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__337);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%20), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1046_count);
  llvm_cbe_tmp__338 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__337);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__337);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__338);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%21), !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1047_count);
  llvm_cbe_tmp__339 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__338);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__338);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__339);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = xor i8 %%8, %%6, !dbg !16 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1048_count);
  llvm_cbe_tmp__340 = (unsigned char )((unsigned char )(llvm_cbe_tmp__325 ^ llvm_cbe_tmp__323));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__340);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = xor i8 %%23, %%10, !dbg !16 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1049_count);
  llvm_cbe_tmp__341 = (unsigned char )((unsigned char )(llvm_cbe_tmp__340 ^ llvm_cbe_tmp__327));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__341);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = xor i8 %%24, %%11, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1050_count);
  llvm_cbe_tmp__342 = (unsigned char )((unsigned char )(llvm_cbe_tmp__341 ^ llvm_cbe_tmp__328));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__342);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = xor i8 %%25, %%12, !dbg !17 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1051_count);
  llvm_cbe_tmp__343 = (unsigned char )((unsigned char )(llvm_cbe_tmp__342 ^ llvm_cbe_tmp__329));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__343);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = xor i8 %%26, %%13, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1052_count);
  llvm_cbe_tmp__344 = (unsigned char )((unsigned char )(llvm_cbe_tmp__343 ^ llvm_cbe_tmp__330));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = xor i8 %%27, %%14, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1053_count);
  llvm_cbe_tmp__345 = (unsigned char )((unsigned char )(llvm_cbe_tmp__344 ^ llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__345);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = xor i8 %%28, %%16, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1054_count);
  llvm_cbe_tmp__346 = (unsigned char )((unsigned char )(llvm_cbe_tmp__345 ^ llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__346);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = xor i8 %%29, %%18, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1055_count);
  llvm_cbe_tmp__347 = (unsigned char )((unsigned char )(llvm_cbe_tmp__346 ^ llvm_cbe_tmp__335));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__347);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = xor i8 %%30, %%19, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1056_count);
  llvm_cbe_tmp__348 = (unsigned char )((unsigned char )(llvm_cbe_tmp__347 ^ llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__348);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = xor i8 %%31, %%22, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1057_count);
  llvm_cbe_tmp__349 = (unsigned char )((unsigned char )(llvm_cbe_tmp__348 ^ llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__349);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__319) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%32, i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1058_count);
  *llvm_cbe_tmp__320 = llvm_cbe_tmp__349;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__349);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = xor i8 %%8, %%4, !dbg !16 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1059_count);
  llvm_cbe_tmp__350 = (unsigned char )((unsigned char )(llvm_cbe_tmp__325 ^ llvm_cbe_tmp__321));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__350);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = xor i8 %%33, %%10, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1060_count);
  llvm_cbe_tmp__351 = (unsigned char )((unsigned char )(llvm_cbe_tmp__350 ^ llvm_cbe_tmp__327));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__351);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = xor i8 %%34, %%13, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1061_count);
  llvm_cbe_tmp__352 = (unsigned char )((unsigned char )(llvm_cbe_tmp__351 ^ llvm_cbe_tmp__330));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__352);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = xor i8 %%35, %%14, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1062_count);
  llvm_cbe_tmp__353 = (unsigned char )((unsigned char )(llvm_cbe_tmp__352 ^ llvm_cbe_tmp__331));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__353);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = xor i8 %%36, %%15, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1063_count);
  llvm_cbe_tmp__354 = (unsigned char )((unsigned char )(llvm_cbe_tmp__353 ^ llvm_cbe_tmp__332));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__354);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = xor i8 %%37, %%16, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1064_count);
  llvm_cbe_tmp__355 = (unsigned char )((unsigned char )(llvm_cbe_tmp__354 ^ llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__355);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = xor i8 %%38, %%17, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1065_count);
  llvm_cbe_tmp__356 = (unsigned char )((unsigned char )(llvm_cbe_tmp__355 ^ llvm_cbe_tmp__334));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__356);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = xor i8 %%39, %%19, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1066_count);
  llvm_cbe_tmp__357 = (unsigned char )((unsigned char )(llvm_cbe_tmp__356 ^ llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__357);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = xor i8 %%40, %%21, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1067_count);
  llvm_cbe_tmp__358 = (unsigned char )((unsigned char )(llvm_cbe_tmp__357 ^ llvm_cbe_tmp__338));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__358);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = xor i8 %%41, %%22, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1068_count);
  llvm_cbe_tmp__359 = (unsigned char )((unsigned char )(llvm_cbe_tmp__358 ^ llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__359);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__319) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%42, i8* %%5, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1069_count);
  *llvm_cbe_tmp__322 = llvm_cbe_tmp__359;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__359);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = xor i8 %%6, %%4, !dbg !17 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1070_count);
  llvm_cbe_tmp__360 = (unsigned char )((unsigned char )(llvm_cbe_tmp__323 ^ llvm_cbe_tmp__321));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__360);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = xor i8 %%43, %%10, !dbg !17 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1071_count);
  llvm_cbe_tmp__361 = (unsigned char )((unsigned char )(llvm_cbe_tmp__360 ^ llvm_cbe_tmp__327));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__361);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = xor i8 %%44, %%12, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1072_count);
  llvm_cbe_tmp__362 = (unsigned char )((unsigned char )(llvm_cbe_tmp__361 ^ llvm_cbe_tmp__329));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__362);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = xor i8 %%45, %%13, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1073_count);
  llvm_cbe_tmp__363 = (unsigned char )((unsigned char )(llvm_cbe_tmp__362 ^ llvm_cbe_tmp__330));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__363);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = xor i8 %%46, %%16, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1074_count);
  llvm_cbe_tmp__364 = (unsigned char )((unsigned char )(llvm_cbe_tmp__363 ^ llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__364);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = xor i8 %%47, %%17, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1075_count);
  llvm_cbe_tmp__365 = (unsigned char )((unsigned char )(llvm_cbe_tmp__364 ^ llvm_cbe_tmp__334));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__365);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = xor i8 %%48, %%18, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1076_count);
  llvm_cbe_tmp__366 = (unsigned char )((unsigned char )(llvm_cbe_tmp__365 ^ llvm_cbe_tmp__335));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__366);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = xor i8 %%49, %%19, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1077_count);
  llvm_cbe_tmp__367 = (unsigned char )((unsigned char )(llvm_cbe_tmp__366 ^ llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__367);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = xor i8 %%50, %%20, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1078_count);
  llvm_cbe_tmp__368 = (unsigned char )((unsigned char )(llvm_cbe_tmp__367 ^ llvm_cbe_tmp__337));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__368);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = xor i8 %%51, %%22, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1079_count);
  llvm_cbe_tmp__369 = (unsigned char )((unsigned char )(llvm_cbe_tmp__368 ^ llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__369);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__319) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%52, i8* %%7, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1080_count);
  *llvm_cbe_tmp__324 = llvm_cbe_tmp__369;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__369);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = xor i8 %%43, %%8, !dbg !17 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1081_count);
  llvm_cbe_tmp__370 = (unsigned char )((unsigned char )(llvm_cbe_tmp__360 ^ llvm_cbe_tmp__325));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__370);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = xor i8 %%53, %%11, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1082_count);
  llvm_cbe_tmp__371 = (unsigned char )((unsigned char )(llvm_cbe_tmp__370 ^ llvm_cbe_tmp__328));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__371);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = xor i8 %%54, %%13, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1083_count);
  llvm_cbe_tmp__372 = (unsigned char )((unsigned char )(llvm_cbe_tmp__371 ^ llvm_cbe_tmp__330));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__372);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = xor i8 %%55, %%15, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1084_count);
  llvm_cbe_tmp__373 = (unsigned char )((unsigned char )(llvm_cbe_tmp__372 ^ llvm_cbe_tmp__332));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__373);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = xor i8 %%56, %%16, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1085_count);
  llvm_cbe_tmp__374 = (unsigned char )((unsigned char )(llvm_cbe_tmp__373 ^ llvm_cbe_tmp__333));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__374);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = xor i8 %%57, %%19, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1086_count);
  llvm_cbe_tmp__375 = (unsigned char )((unsigned char )(llvm_cbe_tmp__374 ^ llvm_cbe_tmp__336));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__375);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = xor i8 %%58, %%20, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1087_count);
  llvm_cbe_tmp__376 = (unsigned char )((unsigned char )(llvm_cbe_tmp__375 ^ llvm_cbe_tmp__337));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__376);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = xor i8 %%59, %%21, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1088_count);
  llvm_cbe_tmp__377 = (unsigned char )((unsigned char )(llvm_cbe_tmp__376 ^ llvm_cbe_tmp__338));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__377);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = xor i8 %%60, %%22, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1089_count);
  llvm_cbe_tmp__378 = (unsigned char )((unsigned char )(llvm_cbe_tmp__377 ^ llvm_cbe_tmp__339));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__378);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__319) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%61, i8* %%9, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1090_count);
  *llvm_cbe_tmp__326 = llvm_cbe_tmp__378;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__378);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = add nsw i32 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_InvMixColumns  --> \n", ++aesl_llvm_cbe_1091_count);
  llvm_cbe_tmp__379 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__379&4294967295ull)));
  if (((llvm_cbe_tmp__379&4294967295U) == (4u&4294967295U))) {
    goto llvm_cbe_tmp__381;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__379;   /* for PHI node */
    goto llvm_cbe_tmp__380;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__381:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_InvMixColumns}\n");
  return;
}


static unsigned char aesl_internal_xtime( char llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  unsigned char llvm_cbe_tmp__382;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  unsigned char llvm_cbe_tmp__383;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  unsigned char llvm_cbe_tmp__384;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  unsigned char llvm_cbe_tmp__385;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_xtime\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = shl i8 %%x, 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_xtime  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__382 = (unsigned char )((unsigned char )(llvm_cbe_x << ((unsigned char )1)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__382);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = ashr i8 %%x, 7, !dbg !14 for 0x%I64xth hint within @aesl_internal_xtime  --> \n", ++aesl_llvm_cbe_1109_count);
  llvm_cbe_tmp__383 = (unsigned char )((unsigned char )((( char )((( char )llvm_cbe_x) >> (( char )((unsigned char )7))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", (( char )llvm_cbe_tmp__383));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = and i8 %%2, 27, !dbg !14 for 0x%I64xth hint within @aesl_internal_xtime  --> \n", ++aesl_llvm_cbe_1110_count);
  llvm_cbe_tmp__384 = (unsigned char )((unsigned char )(llvm_cbe_tmp__383 & ((unsigned char )27)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__384);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = xor i8 %%3, %%1, !dbg !14 for 0x%I64xth hint within @aesl_internal_xtime  --> \n", ++aesl_llvm_cbe_1111_count);
  llvm_cbe_tmp__385 = (unsigned char )((unsigned char )(llvm_cbe_tmp__384 ^ llvm_cbe_tmp__382));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__385);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_xtime}\n");
  return llvm_cbe_tmp__385;
}


static void aesl_internal_SubBytes( char (*llvm_cbe_state)[4][4]) {
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
   char *llvm_cbe_tmp__386;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  unsigned char llvm_cbe_tmp__387;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  unsigned long long llvm_cbe_tmp__388;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
   char *llvm_cbe_tmp__389;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  unsigned char llvm_cbe_tmp__390;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
   char *llvm_cbe_tmp__391;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  unsigned char llvm_cbe_tmp__392;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  unsigned long long llvm_cbe_tmp__393;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
   char *llvm_cbe_tmp__394;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  unsigned char llvm_cbe_tmp__395;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
   char *llvm_cbe_tmp__396;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  unsigned char llvm_cbe_tmp__397;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  unsigned long long llvm_cbe_tmp__398;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
   char *llvm_cbe_tmp__399;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  unsigned char llvm_cbe_tmp__400;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
   char *llvm_cbe_tmp__401;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  unsigned char llvm_cbe_tmp__402;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  unsigned long long llvm_cbe_tmp__403;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
   char *llvm_cbe_tmp__404;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  unsigned char llvm_cbe_tmp__405;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
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
   char *llvm_cbe_tmp__406;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  unsigned char llvm_cbe_tmp__407;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  unsigned long long llvm_cbe_tmp__408;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
   char *llvm_cbe_tmp__409;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  unsigned char llvm_cbe_tmp__410;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
   char *llvm_cbe_tmp__411;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  unsigned char llvm_cbe_tmp__412;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  unsigned long long llvm_cbe_tmp__413;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
   char *llvm_cbe_tmp__414;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  unsigned char llvm_cbe_tmp__415;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
   char *llvm_cbe_tmp__416;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  unsigned char llvm_cbe_tmp__417;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  unsigned long long llvm_cbe_tmp__418;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
   char *llvm_cbe_tmp__419;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  unsigned char llvm_cbe_tmp__420;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
   char *llvm_cbe_tmp__421;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  unsigned char llvm_cbe_tmp__422;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  unsigned long long llvm_cbe_tmp__423;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
   char *llvm_cbe_tmp__424;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  unsigned char llvm_cbe_tmp__425;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
   char *llvm_cbe_tmp__426;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  unsigned char llvm_cbe_tmp__427;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  unsigned long long llvm_cbe_tmp__428;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
   char *llvm_cbe_tmp__429;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  unsigned char llvm_cbe_tmp__430;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
   char *llvm_cbe_tmp__431;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  unsigned char llvm_cbe_tmp__432;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  unsigned long long llvm_cbe_tmp__433;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
   char *llvm_cbe_tmp__434;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  unsigned char llvm_cbe_tmp__435;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
   char *llvm_cbe_tmp__436;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  unsigned char llvm_cbe_tmp__437;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  unsigned long long llvm_cbe_tmp__438;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
   char *llvm_cbe_tmp__439;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  unsigned char llvm_cbe_tmp__440;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
   char *llvm_cbe_tmp__441;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  unsigned char llvm_cbe_tmp__442;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  unsigned long long llvm_cbe_tmp__443;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
   char *llvm_cbe_tmp__444;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  unsigned char llvm_cbe_tmp__445;
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
   char *llvm_cbe_tmp__446;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  unsigned char llvm_cbe_tmp__447;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  unsigned long long llvm_cbe_tmp__448;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
   char *llvm_cbe_tmp__449;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  unsigned char llvm_cbe_tmp__450;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
   char *llvm_cbe_tmp__451;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  unsigned char llvm_cbe_tmp__452;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  unsigned long long llvm_cbe_tmp__453;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
   char *llvm_cbe_tmp__454;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  unsigned char llvm_cbe_tmp__455;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
   char *llvm_cbe_tmp__456;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  unsigned char llvm_cbe_tmp__457;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  unsigned long long llvm_cbe_tmp__458;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
   char *llvm_cbe_tmp__459;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  unsigned char llvm_cbe_tmp__460;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
   char *llvm_cbe_tmp__461;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  unsigned char llvm_cbe_tmp__462;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  unsigned long long llvm_cbe_tmp__463;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
   char *llvm_cbe_tmp__464;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  unsigned char llvm_cbe_tmp__465;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_SubBytes\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1125_count);
  llvm_cbe_tmp__386 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i8* %%0, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1126_count);
  llvm_cbe_tmp__387 = (unsigned char )*llvm_cbe_tmp__386;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__387);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%1 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1127_count);
  llvm_cbe_tmp__388 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__387&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__388);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%2, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1128_count);
  llvm_cbe_tmp__389 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__388))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__388));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__388) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1129_count);
  llvm_cbe_tmp__390 = (unsigned char )*llvm_cbe_tmp__389;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__390);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* %%0, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1130_count);
  *llvm_cbe_tmp__386 = llvm_cbe_tmp__390;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__390);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1136_count);
  llvm_cbe_tmp__391 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1137_count);
  llvm_cbe_tmp__392 = (unsigned char )*llvm_cbe_tmp__391;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__392);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i8 %%6 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1138_count);
  llvm_cbe_tmp__393 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__392&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__393);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%7, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1139_count);
  llvm_cbe_tmp__394 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__393))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__393));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__393) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1140_count);
  llvm_cbe_tmp__395 = (unsigned char )*llvm_cbe_tmp__394;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__395);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%9, i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1141_count);
  *llvm_cbe_tmp__391 = llvm_cbe_tmp__395;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__395);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1147_count);
  llvm_cbe_tmp__396 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1148_count);
  llvm_cbe_tmp__397 = (unsigned char )*llvm_cbe_tmp__396;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__397);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = zext i8 %%11 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1149_count);
  llvm_cbe_tmp__398 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__397&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__398);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%12, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1150_count);
  llvm_cbe_tmp__399 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__398))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__398));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__398) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1151_count);
  llvm_cbe_tmp__400 = (unsigned char )*llvm_cbe_tmp__399;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__400);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1152_count);
  *llvm_cbe_tmp__396 = llvm_cbe_tmp__400;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__400);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1158_count);
  llvm_cbe_tmp__401 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1159_count);
  llvm_cbe_tmp__402 = (unsigned char )*llvm_cbe_tmp__401;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__402);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i8 %%16 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1160_count);
  llvm_cbe_tmp__403 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__402&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__403);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%17, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1161_count);
  llvm_cbe_tmp__404 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__403))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__403));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__403) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i8* %%18, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1162_count);
  llvm_cbe_tmp__405 = (unsigned char )*llvm_cbe_tmp__404;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__405);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%19, i8* %%15, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1163_count);
  *llvm_cbe_tmp__401 = llvm_cbe_tmp__405;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__405);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1178_count);
  llvm_cbe_tmp__406 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i8* %%20, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1179_count);
  llvm_cbe_tmp__407 = (unsigned char )*llvm_cbe_tmp__406;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__407);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = zext i8 %%21 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1180_count);
  llvm_cbe_tmp__408 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__407&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__408);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%22, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1181_count);
  llvm_cbe_tmp__409 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__408))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__408));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__408) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1182_count);
  llvm_cbe_tmp__410 = (unsigned char )*llvm_cbe_tmp__409;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__410);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%24, i8* %%20, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1183_count);
  *llvm_cbe_tmp__406 = llvm_cbe_tmp__410;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__410);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1189_count);
  llvm_cbe_tmp__411 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i8* %%25, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1190_count);
  llvm_cbe_tmp__412 = (unsigned char )*llvm_cbe_tmp__411;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__412);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = zext i8 %%26 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1191_count);
  llvm_cbe_tmp__413 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__412&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__413);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%27, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1192_count);
  llvm_cbe_tmp__414 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__413))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__413));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__413) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i8* %%28, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1193_count);
  llvm_cbe_tmp__415 = (unsigned char )*llvm_cbe_tmp__414;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__415);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%29, i8* %%25, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1194_count);
  *llvm_cbe_tmp__411 = llvm_cbe_tmp__415;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__415);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1200_count);
  llvm_cbe_tmp__416 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load i8* %%30, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1201_count);
  llvm_cbe_tmp__417 = (unsigned char )*llvm_cbe_tmp__416;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__417);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i8 %%31 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1202_count);
  llvm_cbe_tmp__418 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__417&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__418);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%32, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1203_count);
  llvm_cbe_tmp__419 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__418))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__418));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__418) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i8* %%33, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1204_count);
  llvm_cbe_tmp__420 = (unsigned char )*llvm_cbe_tmp__419;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__420);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%34, i8* %%30, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1205_count);
  *llvm_cbe_tmp__416 = llvm_cbe_tmp__420;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__420);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1211_count);
  llvm_cbe_tmp__421 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i8* %%35, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1212_count);
  llvm_cbe_tmp__422 = (unsigned char )*llvm_cbe_tmp__421;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__422);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i8 %%36 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1213_count);
  llvm_cbe_tmp__423 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__422&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__423);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%37, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1214_count);
  llvm_cbe_tmp__424 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__423))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__423));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__423) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i8* %%38, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1215_count);
  llvm_cbe_tmp__425 = (unsigned char )*llvm_cbe_tmp__424;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__425);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%39, i8* %%35, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1216_count);
  *llvm_cbe_tmp__421 = llvm_cbe_tmp__425;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__425);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1231_count);
  llvm_cbe_tmp__426 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i8* %%40, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1232_count);
  llvm_cbe_tmp__427 = (unsigned char )*llvm_cbe_tmp__426;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__427);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i8 %%41 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1233_count);
  llvm_cbe_tmp__428 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__427&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__428);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%42, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1234_count);
  llvm_cbe_tmp__429 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__428))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__428));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__428) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load i8* %%43, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1235_count);
  llvm_cbe_tmp__430 = (unsigned char )*llvm_cbe_tmp__429;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__430);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%44, i8* %%40, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1236_count);
  *llvm_cbe_tmp__426 = llvm_cbe_tmp__430;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__430);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1242_count);
  llvm_cbe_tmp__431 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i8* %%45, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1243_count);
  llvm_cbe_tmp__432 = (unsigned char )*llvm_cbe_tmp__431;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__432);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = zext i8 %%46 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1244_count);
  llvm_cbe_tmp__433 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__432&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__433);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%47, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1245_count);
  llvm_cbe_tmp__434 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__433))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__433));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__433) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i8* %%48, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1246_count);
  llvm_cbe_tmp__435 = (unsigned char )*llvm_cbe_tmp__434;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__435);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%49, i8* %%45, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1247_count);
  *llvm_cbe_tmp__431 = llvm_cbe_tmp__435;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__435);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1253_count);
  llvm_cbe_tmp__436 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i8* %%50, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1254_count);
  llvm_cbe_tmp__437 = (unsigned char )*llvm_cbe_tmp__436;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__437);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = zext i8 %%51 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1255_count);
  llvm_cbe_tmp__438 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__437&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__438);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%52, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1256_count);
  llvm_cbe_tmp__439 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__438))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__438));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__438) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load i8* %%53, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1257_count);
  llvm_cbe_tmp__440 = (unsigned char )*llvm_cbe_tmp__439;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__440);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%54, i8* %%50, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1258_count);
  *llvm_cbe_tmp__436 = llvm_cbe_tmp__440;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__440);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1264_count);
  llvm_cbe_tmp__441 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i8* %%55, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1265_count);
  llvm_cbe_tmp__442 = (unsigned char )*llvm_cbe_tmp__441;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__442);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = zext i8 %%56 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1266_count);
  llvm_cbe_tmp__443 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__442&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__443);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%57, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1267_count);
  llvm_cbe_tmp__444 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__443))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__443));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__443) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i8* %%58, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1268_count);
  llvm_cbe_tmp__445 = (unsigned char )*llvm_cbe_tmp__444;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__445);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%59, i8* %%55, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1269_count);
  *llvm_cbe_tmp__441 = llvm_cbe_tmp__445;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__445);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1284_count);
  llvm_cbe_tmp__446 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = load i8* %%60, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1285_count);
  llvm_cbe_tmp__447 = (unsigned char )*llvm_cbe_tmp__446;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__447);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = zext i8 %%61 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1286_count);
  llvm_cbe_tmp__448 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__447&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__448);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%62, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1287_count);
  llvm_cbe_tmp__449 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__448))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__448));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__448) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load i8* %%63, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1288_count);
  llvm_cbe_tmp__450 = (unsigned char )*llvm_cbe_tmp__449;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__450);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%64, i8* %%60, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1289_count);
  *llvm_cbe_tmp__446 = llvm_cbe_tmp__450;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__450);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1295_count);
  llvm_cbe_tmp__451 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load i8* %%65, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1296_count);
  llvm_cbe_tmp__452 = (unsigned char )*llvm_cbe_tmp__451;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__452);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = zext i8 %%66 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1297_count);
  llvm_cbe_tmp__453 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__452&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__453);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%67, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1298_count);
  llvm_cbe_tmp__454 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__453))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__453));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__453) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load i8* %%68, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1299_count);
  llvm_cbe_tmp__455 = (unsigned char )*llvm_cbe_tmp__454;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__455);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%69, i8* %%65, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1300_count);
  *llvm_cbe_tmp__451 = llvm_cbe_tmp__455;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__455);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1306_count);
  llvm_cbe_tmp__456 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load i8* %%70, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1307_count);
  llvm_cbe_tmp__457 = (unsigned char )*llvm_cbe_tmp__456;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__457);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = zext i8 %%71 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1308_count);
  llvm_cbe_tmp__458 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__457&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__458);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%72, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1309_count);
  llvm_cbe_tmp__459 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__458))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__458));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__458) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load i8* %%73, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1310_count);
  llvm_cbe_tmp__460 = (unsigned char )*llvm_cbe_tmp__459;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__460);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%74, i8* %%70, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1311_count);
  *llvm_cbe_tmp__456 = llvm_cbe_tmp__460;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__460);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1317_count);
  llvm_cbe_tmp__461 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load i8* %%75, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1318_count);
  llvm_cbe_tmp__462 = (unsigned char )*llvm_cbe_tmp__461;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__462);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = zext i8 %%76 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1319_count);
  llvm_cbe_tmp__463 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__462&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__463);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = getelementptr inbounds [256 x i8]* @aesl_internal_sbox, i64 0, i64 %%77, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1320_count);
  llvm_cbe_tmp__464 = ( char *)(&aesl_internal_sbox[(((signed long long )llvm_cbe_tmp__463))
#ifdef AESL_BC_SIM
 % 256
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__463));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__463) < 256)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_sbox' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load i8* %%78, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1321_count);
  llvm_cbe_tmp__465 = (unsigned char )*llvm_cbe_tmp__464;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__465);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%79, i8* %%75, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_SubBytes  --> \n", ++aesl_llvm_cbe_1322_count);
  *llvm_cbe_tmp__461 = llvm_cbe_tmp__465;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__465);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_SubBytes}\n");
  return;
}


static void aesl_internal_ShiftRows( char (*llvm_cbe_state)[4][4]) {
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
   char *llvm_cbe_tmp__466;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  unsigned char llvm_cbe_tmp__467;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
   char *llvm_cbe_tmp__468;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  unsigned char llvm_cbe_tmp__469;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
   char *llvm_cbe_tmp__470;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  unsigned char llvm_cbe_tmp__471;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
   char *llvm_cbe_tmp__472;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  unsigned char llvm_cbe_tmp__473;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
   char *llvm_cbe_tmp__474;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  unsigned char llvm_cbe_tmp__475;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
   char *llvm_cbe_tmp__476;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  unsigned char llvm_cbe_tmp__477;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
   char *llvm_cbe_tmp__478;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  unsigned char llvm_cbe_tmp__479;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
   char *llvm_cbe_tmp__480;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  unsigned char llvm_cbe_tmp__481;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
   char *llvm_cbe_tmp__482;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  unsigned char llvm_cbe_tmp__483;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
   char *llvm_cbe_tmp__484;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  unsigned char llvm_cbe_tmp__485;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
   char *llvm_cbe_tmp__486;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  unsigned char llvm_cbe_tmp__487;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
   char *llvm_cbe_tmp__488;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  unsigned char llvm_cbe_tmp__489;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_ShiftRows\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1359_count);
  llvm_cbe_tmp__466 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i8* %%1, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1360_count);
  llvm_cbe_tmp__467 = (unsigned char )*llvm_cbe_tmp__466;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__467);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1366_count);
  llvm_cbe_tmp__468 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1367_count);
  llvm_cbe_tmp__469 = (unsigned char )*llvm_cbe_tmp__468;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__469);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* %%1, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1368_count);
  *llvm_cbe_tmp__466 = llvm_cbe_tmp__469;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__469);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1369_count);
  llvm_cbe_tmp__470 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1370_count);
  llvm_cbe_tmp__471 = (unsigned char )*llvm_cbe_tmp__470;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__471);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%6, i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1371_count);
  *llvm_cbe_tmp__468 = llvm_cbe_tmp__471;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__471);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1372_count);
  llvm_cbe_tmp__472 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i8* %%7, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1373_count);
  llvm_cbe_tmp__473 = (unsigned char )*llvm_cbe_tmp__472;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__473);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%8, i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1374_count);
  *llvm_cbe_tmp__470 = llvm_cbe_tmp__473;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__473);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%2, i8* %%7, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1375_count);
  *llvm_cbe_tmp__472 = llvm_cbe_tmp__467;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__467);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1376_count);
  llvm_cbe_tmp__474 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1377_count);
  llvm_cbe_tmp__475 = (unsigned char )*llvm_cbe_tmp__474;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__475);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1383_count);
  llvm_cbe_tmp__476 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i8* %%11, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1384_count);
  llvm_cbe_tmp__477 = (unsigned char )*llvm_cbe_tmp__476;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__477);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%12, i8* %%9, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1385_count);
  *llvm_cbe_tmp__474 = llvm_cbe_tmp__477;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__477);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%10, i8* %%11, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1386_count);
  *llvm_cbe_tmp__476 = llvm_cbe_tmp__475;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__475);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1387_count);
  llvm_cbe_tmp__478 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i8* %%13, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1388_count);
  llvm_cbe_tmp__479 = (unsigned char )*llvm_cbe_tmp__478;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__479);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 2, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1394_count);
  llvm_cbe_tmp__480 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1395_count);
  llvm_cbe_tmp__481 = (unsigned char )*llvm_cbe_tmp__480;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__481);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%16, i8* %%13, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1396_count);
  *llvm_cbe_tmp__478 = llvm_cbe_tmp__481;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__481);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%14, i8* %%15, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1397_count);
  *llvm_cbe_tmp__480 = llvm_cbe_tmp__479;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__479);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 0, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1398_count);
  llvm_cbe_tmp__482 = ( char *)(&(*llvm_cbe_state)[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i8* %%17, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1399_count);
  llvm_cbe_tmp__483 = (unsigned char )*llvm_cbe_tmp__482;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__483);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 3, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1405_count);
  llvm_cbe_tmp__484 = ( char *)(&(*llvm_cbe_state)[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i8* %%19, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1406_count);
  llvm_cbe_tmp__485 = (unsigned char )*llvm_cbe_tmp__484;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__485);

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%20, i8* %%17, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1407_count);
  *llvm_cbe_tmp__482 = llvm_cbe_tmp__485;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__485);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 2, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1408_count);
  llvm_cbe_tmp__486 = ( char *)(&(*llvm_cbe_state)[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i8* %%21, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1409_count);
  llvm_cbe_tmp__487 = (unsigned char )*llvm_cbe_tmp__486;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__487);

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%22, i8* %%19, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1410_count);
  *llvm_cbe_tmp__484 = llvm_cbe_tmp__487;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__487);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 1, i64 3, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1411_count);
  llvm_cbe_tmp__488 = ( char *)(&(*llvm_cbe_state)[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%23, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1412_count);
  llvm_cbe_tmp__489 = (unsigned char )*llvm_cbe_tmp__488;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__489);

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%24, i8* %%21, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1413_count);
  *llvm_cbe_tmp__486 = llvm_cbe_tmp__489;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__489);

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%18, i8* %%23, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_ShiftRows  --> \n", ++aesl_llvm_cbe_1414_count);
  *llvm_cbe_tmp__488 = llvm_cbe_tmp__483;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__483);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_ShiftRows}\n");
  return;
}


static void aesl_internal_MixColumns( char (*llvm_cbe_state)[4][4]) {
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
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned char llvm_cbe_storemerge1;
  unsigned char llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  unsigned long long llvm_cbe_tmp__490;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
   char *llvm_cbe_tmp__491;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  unsigned char llvm_cbe_tmp__492;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
   char *llvm_cbe_tmp__493;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  unsigned char llvm_cbe_tmp__494;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  unsigned char llvm_cbe_tmp__495;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
   char *llvm_cbe_tmp__496;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  unsigned char llvm_cbe_tmp__497;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
   char *llvm_cbe_tmp__498;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  unsigned char llvm_cbe_tmp__499;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  unsigned char llvm_cbe_tmp__500;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  unsigned char llvm_cbe_tmp__501;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  unsigned char llvm_cbe_tmp__502;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  unsigned char llvm_cbe_tmp__503;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  unsigned char llvm_cbe_tmp__504;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  unsigned char llvm_cbe_tmp__505;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  unsigned char llvm_cbe_tmp__506;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  unsigned char llvm_cbe_tmp__507;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  unsigned char llvm_cbe_tmp__508;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  unsigned char llvm_cbe_tmp__509;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  unsigned char llvm_cbe_tmp__510;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  unsigned char llvm_cbe_tmp__511;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  unsigned char llvm_cbe_tmp__512;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  unsigned char llvm_cbe_tmp__513;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  unsigned char llvm_cbe_tmp__514;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  unsigned char llvm_cbe_tmp__515;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  unsigned char llvm_cbe_tmp__516;
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
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @aesl_internal_MixColumns\n");
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
  goto llvm_cbe_tmp__517;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__517:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i8 [ 0, %%0 ], [ %%28, %%1  for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned char )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",((unsigned char )0));
printf("\n = 0x%X",llvm_cbe_tmp__516);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%storemerge1 to i64, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1453_count);
  llvm_cbe_tmp__490 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_storemerge1&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__490);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 0, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1454_count);
  llvm_cbe_tmp__491 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__490))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__490));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__490) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1455_count);
  llvm_cbe_tmp__492 = (unsigned char )*llvm_cbe_tmp__491;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__492);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1458_count);
  llvm_cbe_tmp__493 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__490))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__490));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__490) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i8* %%5, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1459_count);
  llvm_cbe_tmp__494 = (unsigned char )*llvm_cbe_tmp__493;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__494);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = xor i8 %%6, %%4, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1460_count);
  llvm_cbe_tmp__495 = (unsigned char )((unsigned char )(llvm_cbe_tmp__494 ^ llvm_cbe_tmp__492));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__495);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 2, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1461_count);
  llvm_cbe_tmp__496 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__490))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__490));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__490) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i8* %%8, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1462_count);
  llvm_cbe_tmp__497 = (unsigned char )*llvm_cbe_tmp__496;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__497);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [4 x [4 x i8]]* %%state, i64 0, i64 %%2, i64 3, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1463_count);
  llvm_cbe_tmp__498 = ( char *)(&(*llvm_cbe_state)[(((signed long long )llvm_cbe_tmp__490))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__490));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__490) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i8* %%10, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1464_count);
  llvm_cbe_tmp__499 = (unsigned char )*llvm_cbe_tmp__498;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__499);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = xor i8 %%7, %%9, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1465_count);
  llvm_cbe_tmp__500 = (unsigned char )((unsigned char )(llvm_cbe_tmp__495 ^ llvm_cbe_tmp__497));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__500);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = xor i8 %%12, %%11, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1466_count);
  llvm_cbe_tmp__501 = (unsigned char )((unsigned char )(llvm_cbe_tmp__500 ^ llvm_cbe_tmp__499));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__501);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%7), !dbg !16 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1474_count);
  llvm_cbe_tmp__502 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__495);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__495);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__502);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = xor i8 %%13, %%4, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1477_count);
  llvm_cbe_tmp__503 = (unsigned char )((unsigned char )(llvm_cbe_tmp__501 ^ llvm_cbe_tmp__492));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__503);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = xor i8 %%15, %%14, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1478_count);
  llvm_cbe_tmp__504 = (unsigned char )((unsigned char )(llvm_cbe_tmp__503 ^ llvm_cbe_tmp__502));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__504);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__490) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%16, i8* %%3, align 1, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1479_count);
  *llvm_cbe_tmp__491 = llvm_cbe_tmp__504;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__504);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = xor i8 %%9, %%6, !dbg !14 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1480_count);
  llvm_cbe_tmp__505 = (unsigned char )((unsigned char )(llvm_cbe_tmp__497 ^ llvm_cbe_tmp__494));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__505);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%17), !dbg !16 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1483_count);
  llvm_cbe_tmp__506 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__505);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__505);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__506);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = xor i8 %%6, %%13, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1486_count);
  llvm_cbe_tmp__507 = (unsigned char )((unsigned char )(llvm_cbe_tmp__494 ^ llvm_cbe_tmp__501));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__507);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = xor i8 %%19, %%18, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1487_count);
  llvm_cbe_tmp__508 = (unsigned char )((unsigned char )(llvm_cbe_tmp__507 ^ llvm_cbe_tmp__506));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__508);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__490) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%20, i8* %%5, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1488_count);
  *llvm_cbe_tmp__493 = llvm_cbe_tmp__508;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__508);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = xor i8 %%11, %%9, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1489_count);
  llvm_cbe_tmp__509 = (unsigned char )((unsigned char )(llvm_cbe_tmp__499 ^ llvm_cbe_tmp__497));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__509);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%21), !dbg !16 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1492_count);
  llvm_cbe_tmp__510 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__509);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__509);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__510);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = xor i8 %%7, %%11, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1495_count);
  llvm_cbe_tmp__511 = (unsigned char )((unsigned char )(llvm_cbe_tmp__495 ^ llvm_cbe_tmp__499));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__511);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = xor i8 %%23, %%22, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1496_count);
  llvm_cbe_tmp__512 = (unsigned char )((unsigned char )(llvm_cbe_tmp__511 ^ llvm_cbe_tmp__510));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__512);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__490) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%24, i8* %%8, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1497_count);
  *llvm_cbe_tmp__496 = llvm_cbe_tmp__512;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__512);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = xor i8 %%11, %%4, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1498_count);
  llvm_cbe_tmp__513 = (unsigned char )((unsigned char )(llvm_cbe_tmp__499 ^ llvm_cbe_tmp__492));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__513);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = tail call fastcc zeroext i8 @aesl_internal_xtime(i8 zeroext %%25), !dbg !16 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1501_count);
  llvm_cbe_tmp__514 = (unsigned char ) /*tail*/ aesl_internal_xtime(llvm_cbe_tmp__513);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__513);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__514);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = xor i8 %%12, %%26, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1504_count);
  llvm_cbe_tmp__515 = (unsigned char )((unsigned char )(llvm_cbe_tmp__500 ^ llvm_cbe_tmp__514));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__515);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__490) < 4 && "Write access out of array 'state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%27, i8* %%10, align 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1505_count);
  *llvm_cbe_tmp__498 = llvm_cbe_tmp__515;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__515);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = add i8 %%storemerge1, 1, !dbg !15 for 0x%I64xth hint within @aesl_internal_MixColumns  --> \n", ++aesl_llvm_cbe_1506_count);
  llvm_cbe_tmp__516 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1&255ull)) + ((unsigned char )(((unsigned char )1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__516&255ull)));
  if (((llvm_cbe_tmp__516&255U) == (((unsigned char )4)&255U))) {
    goto llvm_cbe_tmp__518;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__516;   /* for PHI node */
    goto llvm_cbe_tmp__517;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__518:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @aesl_internal_MixColumns}\n");
  return;
}

