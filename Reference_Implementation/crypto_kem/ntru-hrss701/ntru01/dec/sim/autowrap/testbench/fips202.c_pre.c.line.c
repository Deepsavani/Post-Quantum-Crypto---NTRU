#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
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
#pragma line 9 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c" 2
#pragma line 1 "/usr/include/assert.h" 1 3 4
#pragma line 68 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma line 10 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.h" 1
#pragma line 11 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.h"
void shake128_absorb(uint64_t *s, const unsigned char *input, unsigned int inputByteLen);
void shake128_squeezeblocks(unsigned char *output, unsigned long long nblocks, uint64_t *s);
#pragma empty_line
void shake256(unsigned char *output, unsigned long long outlen, const unsigned char *input, unsigned long long inlen);
void sha3_256(unsigned char *output, const unsigned char *input, unsigned long long inlen);
void sha3_512(unsigned char *output, const unsigned char *input, unsigned long long inlen);
#pragma line 11 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c" 2
#pragma line 24 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
static uint64_t load64(const unsigned char *x)
{
  unsigned long long r = 0, i;
#pragma empty_line
  for (i = 0; i < 8; ++i) {
    r |= (unsigned long long)x[i] << 8 * i;
  }
  return r;
}
#pragma line 42 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
static void store64(uint8_t *x, uint64_t u)
{
  unsigned int i;
#pragma empty_line
  for(i=0; i<8; ++i) {
    x[i] = u;
    u >>= 8;
  }
}
#pragma empty_line
#pragma empty_line
static const uint64_t KeccakF_RoundConstants[24] =
{
    (uint64_t)0x0000000000000001ULL,
    (uint64_t)0x0000000000008082ULL,
    (uint64_t)0x800000000000808aULL,
    (uint64_t)0x8000000080008000ULL,
    (uint64_t)0x000000000000808bULL,
    (uint64_t)0x0000000080000001ULL,
    (uint64_t)0x8000000080008081ULL,
    (uint64_t)0x8000000000008009ULL,
    (uint64_t)0x000000000000008aULL,
    (uint64_t)0x0000000000000088ULL,
    (uint64_t)0x0000000080008009ULL,
    (uint64_t)0x000000008000000aULL,
    (uint64_t)0x000000008000808bULL,
    (uint64_t)0x800000000000008bULL,
    (uint64_t)0x8000000000008089ULL,
    (uint64_t)0x8000000000008003ULL,
    (uint64_t)0x8000000000008002ULL,
    (uint64_t)0x8000000000000080ULL,
    (uint64_t)0x000000000000800aULL,
    (uint64_t)0x800000008000000aULL,
    (uint64_t)0x8000000080008081ULL,
    (uint64_t)0x8000000000008080ULL,
    (uint64_t)0x0000000080000001ULL,
    (uint64_t)0x8000000080008008ULL
};
#pragma line 88 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
void KeccakF1600_StatePermute(uint64_t * state)
{
  int round;
#pragma empty_line
        uint64_t Aba, Abe, Abi, Abo, Abu;
        uint64_t Aga, Age, Agi, Ago, Agu;
        uint64_t Aka, Ake, Aki, Ako, Aku;
        uint64_t Ama, Ame, Ami, Amo, Amu;
        uint64_t Asa, Ase, Asi, Aso, Asu;
        uint64_t BCa, BCe, BCi, BCo, BCu;
        uint64_t Da, De, Di, Do, Du;
        uint64_t Eba, Ebe, Ebi, Ebo, Ebu;
        uint64_t Ega, Ege, Egi, Ego, Egu;
        uint64_t Eka, Eke, Eki, Eko, Eku;
        uint64_t Ema, Eme, Emi, Emo, Emu;
        uint64_t Esa, Ese, Esi, Eso, Esu;
#pragma empty_line
#pragma empty_line
        Aba = state[ 0];
        Abe = state[ 1];
        Abi = state[ 2];
        Abo = state[ 3];
        Abu = state[ 4];
        Aga = state[ 5];
        Age = state[ 6];
        Agi = state[ 7];
        Ago = state[ 8];
        Agu = state[ 9];
        Aka = state[10];
        Ake = state[11];
        Aki = state[12];
        Ako = state[13];
        Aku = state[14];
        Ama = state[15];
        Ame = state[16];
        Ami = state[17];
        Amo = state[18];
        Amu = state[19];
        Asa = state[20];
        Ase = state[21];
        Asi = state[22];
        Aso = state[23];
        Asu = state[24];
#pragma empty_line
        for( round = 0; round < 24; round += 2 )
        {
#pragma empty_line
            BCa = Aba^Aga^Aka^Ama^Asa;
            BCe = Abe^Age^Ake^Ame^Ase;
            BCi = Abi^Agi^Aki^Ami^Asi;
            BCo = Abo^Ago^Ako^Amo^Aso;
            BCu = Abu^Agu^Aku^Amu^Asu;
#pragma empty_line
#pragma empty_line
            Da = BCu^((BCe << 1) ^ (BCe >> (64 -1)));
            De = BCa^((BCi << 1) ^ (BCi >> (64 -1)));
            Di = BCe^((BCo << 1) ^ (BCo >> (64 -1)));
            Do = BCi^((BCu << 1) ^ (BCu >> (64 -1)));
            Du = BCo^((BCa << 1) ^ (BCa >> (64 -1)));
#pragma empty_line
            Aba ^= Da;
            BCa = Aba;
            Age ^= De;
            BCe = ((Age << 44) ^ (Age >> (64 -44)));
            Aki ^= Di;
            BCi = ((Aki << 43) ^ (Aki >> (64 -43)));
            Amo ^= Do;
            BCo = ((Amo << 21) ^ (Amo >> (64 -21)));
            Asu ^= Du;
            BCu = ((Asu << 14) ^ (Asu >> (64 -14)));
            Eba = BCa ^((~BCe)& BCi );
            Eba ^= (uint64_t)KeccakF_RoundConstants[round];
            Ebe = BCe ^((~BCi)& BCo );
            Ebi = BCi ^((~BCo)& BCu );
            Ebo = BCo ^((~BCu)& BCa );
            Ebu = BCu ^((~BCa)& BCe );
#pragma empty_line
            Abo ^= Do;
            BCa = ((Abo << 28) ^ (Abo >> (64 -28)));
            Agu ^= Du;
            BCe = ((Agu << 20) ^ (Agu >> (64 -20)));
            Aka ^= Da;
            BCi = ((Aka << 3) ^ (Aka >> (64 -3)));
            Ame ^= De;
            BCo = ((Ame << 45) ^ (Ame >> (64 -45)));
            Asi ^= Di;
            BCu = ((Asi << 61) ^ (Asi >> (64 -61)));
            Ega = BCa ^((~BCe)& BCi );
            Ege = BCe ^((~BCi)& BCo );
            Egi = BCi ^((~BCo)& BCu );
            Ego = BCo ^((~BCu)& BCa );
            Egu = BCu ^((~BCa)& BCe );
#pragma empty_line
            Abe ^= De;
            BCa = ((Abe << 1) ^ (Abe >> (64 -1)));
            Agi ^= Di;
            BCe = ((Agi << 6) ^ (Agi >> (64 -6)));
            Ako ^= Do;
            BCi = ((Ako << 25) ^ (Ako >> (64 -25)));
            Amu ^= Du;
            BCo = ((Amu << 8) ^ (Amu >> (64 -8)));
            Asa ^= Da;
            BCu = ((Asa << 18) ^ (Asa >> (64 -18)));
            Eka = BCa ^((~BCe)& BCi );
            Eke = BCe ^((~BCi)& BCo );
            Eki = BCi ^((~BCo)& BCu );
            Eko = BCo ^((~BCu)& BCa );
            Eku = BCu ^((~BCa)& BCe );
#pragma empty_line
            Abu ^= Du;
            BCa = ((Abu << 27) ^ (Abu >> (64 -27)));
            Aga ^= Da;
            BCe = ((Aga << 36) ^ (Aga >> (64 -36)));
            Ake ^= De;
            BCi = ((Ake << 10) ^ (Ake >> (64 -10)));
            Ami ^= Di;
            BCo = ((Ami << 15) ^ (Ami >> (64 -15)));
            Aso ^= Do;
            BCu = ((Aso << 56) ^ (Aso >> (64 -56)));
            Ema = BCa ^((~BCe)& BCi );
            Eme = BCe ^((~BCi)& BCo );
            Emi = BCi ^((~BCo)& BCu );
            Emo = BCo ^((~BCu)& BCa );
            Emu = BCu ^((~BCa)& BCe );
#pragma empty_line
            Abi ^= Di;
            BCa = ((Abi << 62) ^ (Abi >> (64 -62)));
            Ago ^= Do;
            BCe = ((Ago << 55) ^ (Ago >> (64 -55)));
            Aku ^= Du;
            BCi = ((Aku << 39) ^ (Aku >> (64 -39)));
            Ama ^= Da;
            BCo = ((Ama << 41) ^ (Ama >> (64 -41)));
            Ase ^= De;
            BCu = ((Ase << 2) ^ (Ase >> (64 -2)));
            Esa = BCa ^((~BCe)& BCi );
            Ese = BCe ^((~BCi)& BCo );
            Esi = BCi ^((~BCo)& BCu );
            Eso = BCo ^((~BCu)& BCa );
            Esu = BCu ^((~BCa)& BCe );
#pragma empty_line
#pragma empty_line
            BCa = Eba^Ega^Eka^Ema^Esa;
            BCe = Ebe^Ege^Eke^Eme^Ese;
            BCi = Ebi^Egi^Eki^Emi^Esi;
            BCo = Ebo^Ego^Eko^Emo^Eso;
            BCu = Ebu^Egu^Eku^Emu^Esu;
#pragma empty_line
#pragma empty_line
            Da = BCu^((BCe << 1) ^ (BCe >> (64 -1)));
            De = BCa^((BCi << 1) ^ (BCi >> (64 -1)));
            Di = BCe^((BCo << 1) ^ (BCo >> (64 -1)));
            Do = BCi^((BCu << 1) ^ (BCu >> (64 -1)));
            Du = BCo^((BCa << 1) ^ (BCa >> (64 -1)));
#pragma empty_line
            Eba ^= Da;
            BCa = Eba;
            Ege ^= De;
            BCe = ((Ege << 44) ^ (Ege >> (64 -44)));
            Eki ^= Di;
            BCi = ((Eki << 43) ^ (Eki >> (64 -43)));
            Emo ^= Do;
            BCo = ((Emo << 21) ^ (Emo >> (64 -21)));
            Esu ^= Du;
            BCu = ((Esu << 14) ^ (Esu >> (64 -14)));
            Aba = BCa ^((~BCe)& BCi );
            Aba ^= (uint64_t)KeccakF_RoundConstants[round+1];
            Abe = BCe ^((~BCi)& BCo );
            Abi = BCi ^((~BCo)& BCu );
            Abo = BCo ^((~BCu)& BCa );
            Abu = BCu ^((~BCa)& BCe );
#pragma empty_line
            Ebo ^= Do;
            BCa = ((Ebo << 28) ^ (Ebo >> (64 -28)));
            Egu ^= Du;
            BCe = ((Egu << 20) ^ (Egu >> (64 -20)));
            Eka ^= Da;
            BCi = ((Eka << 3) ^ (Eka >> (64 -3)));
            Eme ^= De;
            BCo = ((Eme << 45) ^ (Eme >> (64 -45)));
            Esi ^= Di;
            BCu = ((Esi << 61) ^ (Esi >> (64 -61)));
            Aga = BCa ^((~BCe)& BCi );
            Age = BCe ^((~BCi)& BCo );
            Agi = BCi ^((~BCo)& BCu );
            Ago = BCo ^((~BCu)& BCa );
            Agu = BCu ^((~BCa)& BCe );
#pragma empty_line
            Ebe ^= De;
            BCa = ((Ebe << 1) ^ (Ebe >> (64 -1)));
            Egi ^= Di;
            BCe = ((Egi << 6) ^ (Egi >> (64 -6)));
            Eko ^= Do;
            BCi = ((Eko << 25) ^ (Eko >> (64 -25)));
            Emu ^= Du;
            BCo = ((Emu << 8) ^ (Emu >> (64 -8)));
            Esa ^= Da;
            BCu = ((Esa << 18) ^ (Esa >> (64 -18)));
            Aka = BCa ^((~BCe)& BCi );
            Ake = BCe ^((~BCi)& BCo );
            Aki = BCi ^((~BCo)& BCu );
            Ako = BCo ^((~BCu)& BCa );
            Aku = BCu ^((~BCa)& BCe );
#pragma empty_line
            Ebu ^= Du;
            BCa = ((Ebu << 27) ^ (Ebu >> (64 -27)));
            Ega ^= Da;
            BCe = ((Ega << 36) ^ (Ega >> (64 -36)));
            Eke ^= De;
            BCi = ((Eke << 10) ^ (Eke >> (64 -10)));
            Emi ^= Di;
            BCo = ((Emi << 15) ^ (Emi >> (64 -15)));
            Eso ^= Do;
            BCu = ((Eso << 56) ^ (Eso >> (64 -56)));
            Ama = BCa ^((~BCe)& BCi );
            Ame = BCe ^((~BCi)& BCo );
            Ami = BCi ^((~BCo)& BCu );
            Amo = BCo ^((~BCu)& BCa );
            Amu = BCu ^((~BCa)& BCe );
#pragma empty_line
            Ebi ^= Di;
            BCa = ((Ebi << 62) ^ (Ebi >> (64 -62)));
            Ego ^= Do;
            BCe = ((Ego << 55) ^ (Ego >> (64 -55)));
            Eku ^= Du;
            BCi = ((Eku << 39) ^ (Eku >> (64 -39)));
            Ema ^= Da;
            BCo = ((Ema << 41) ^ (Ema >> (64 -41)));
            Ese ^= De;
            BCu = ((Ese << 2) ^ (Ese >> (64 -2)));
            Asa = BCa ^((~BCe)& BCi );
            Ase = BCe ^((~BCi)& BCo );
            Asi = BCi ^((~BCo)& BCu );
            Aso = BCo ^((~BCu)& BCa );
            Asu = BCu ^((~BCa)& BCe );
        }
#pragma empty_line
#pragma empty_line
        state[ 0] = Aba;
        state[ 1] = Abe;
        state[ 2] = Abi;
        state[ 3] = Abo;
        state[ 4] = Abu;
        state[ 5] = Aga;
        state[ 6] = Age;
        state[ 7] = Agi;
        state[ 8] = Ago;
        state[ 9] = Agu;
        state[10] = Aka;
        state[11] = Ake;
        state[12] = Aki;
        state[13] = Ako;
        state[14] = Aku;
        state[15] = Ama;
        state[16] = Ame;
        state[17] = Ami;
        state[18] = Amo;
        state[19] = Amu;
        state[20] = Asa;
        state[21] = Ase;
        state[22] = Asi;
        state[23] = Aso;
        state[24] = Asu;
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/string.h" 1 3 4
#pragma line 32 "/usr/include/string.h" 3 4
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
#pragma line 31 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(sizeof(int)) size_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int wchar_t;
#pragma line 33 "/usr/include/string.h" 2 3 4
#pragma line 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma line 125 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/xlocale.h" 1 3 4
#pragma line 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{
#pragma empty_line
  struct __locale_data *__locales[13];
#pragma empty_line
#pragma empty_line
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
#pragma empty_line
#pragma empty_line
  const char *__names[13];
} *__locale_t;
#pragma empty_line
#pragma empty_line
typedef __locale_t locale_t;
#pragma line 160 "/usr/include/string.h" 2 3 4
#pragma empty_line
#pragma empty_line
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
#pragma empty_line
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
#pragma line 232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma line 259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma line 281 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
#pragma empty_line
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
#pragma line 395 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
#pragma line 423 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma line 441 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 485 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma line 513 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma line 532 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 555 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 356 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c" 2
#pragma line 371 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
static void keccak_absorb(uint64_t *s,
                          unsigned int r,
                          const unsigned char *m, unsigned long long int mlen,
                          unsigned char p)
{
  unsigned long long i;
  unsigned char t[200];
#pragma empty_line
#pragma empty_line
  for (i = 0; i < 25; ++i)
    s[i] = 0;
#pragma empty_line
  while (mlen >= r)
  {
    for (i = 0; i < r / 8; ++i)
      s[i] ^= load64(m + 8 * i);
#pragma empty_line
    KeccakF1600_StatePermute(s);
    mlen -= r;
    m += r;
  }
#pragma empty_line
  for (i = 0; i < r; ++i)
    t[i] = 0;
  for (i = 0; i < mlen; ++i)
    t[i] = m[i];
  t[i] = p;
  t[r - 1] |= 128;
  for (i = 0; i < r / 8; ++i)
    s[i] ^= load64(t + 8 * i);
}
#pragma line 416 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
static void keccak_squeezeblocks(unsigned char *h, unsigned long long int nblocks,
                                 uint64_t *s,
                                 unsigned int r)
{
  unsigned int i;
  while(nblocks > 0)
  {
    KeccakF1600_StatePermute(s);
    for(i=0;i<(r>>3);i++)
    {
      store64(h+8*i, s[i]);
    }
    h += r;
    nblocks--;
  }
}
#pragma line 444 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
void shake128_absorb(uint64_t *s, const unsigned char *input, unsigned int inputByteLen)
{
  keccak_absorb(s, 168, input, inputByteLen, 0x1F);
}
#pragma line 460 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
void shake128_squeezeblocks(unsigned char *output, unsigned long long nblocks, uint64_t *s)
{
  keccak_squeezeblocks(output, nblocks, s, 168);
}
#pragma line 475 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
void shake256(unsigned char *output, unsigned long long outlen,
              const unsigned char *input, unsigned long long inlen)
{
  uint64_t s[25];
  unsigned char t[136];
  unsigned long long nblocks = outlen/136;
  size_t i;
#pragma empty_line
#pragma empty_line
  keccak_absorb(s, 136, input, inlen, 0x1F);
#pragma empty_line
#pragma empty_line
  keccak_squeezeblocks(output, nblocks, s, 136);
#pragma empty_line
  output+=nblocks*136;
  outlen-=nblocks*136;
#pragma empty_line
  if(outlen)
  {
    keccak_squeezeblocks(t, 1, s, 136);
    for(i=0;i<outlen;i++)
      output[i] = t[i];
  }
}
#pragma line 509 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
void sha3_256(unsigned char *output, const unsigned char *input, unsigned long long inlen)
{
  uint64_t s[25];
  unsigned char t[136];
  size_t i;
#pragma empty_line
#pragma empty_line
  keccak_absorb(s, 136, input, inlen, 0x06);
#pragma empty_line
#pragma empty_line
  keccak_squeezeblocks(t, 1, s, 136);
#pragma empty_line
  for(i=0;i<32;i++)
      output[i] = t[i];
}
#pragma line 534 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/fips202.c"
void sha3_512(unsigned char *output, const unsigned char *input, unsigned long long inlen)
{
  uint64_t s[25];
  unsigned char t[72];
  size_t i;
#pragma empty_line
#pragma empty_line
  keccak_absorb(s, 72, input, inlen, 0x06);
#pragma empty_line
#pragma empty_line
  keccak_squeezeblocks(t, 1, s, 72);
#pragma empty_line
  for(i=0;i<64;i++)
      output[i] = t[i];
}
