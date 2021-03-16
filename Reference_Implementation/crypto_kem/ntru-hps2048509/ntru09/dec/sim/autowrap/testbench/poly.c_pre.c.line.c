#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c"
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.h" 1
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
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.h" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/params.h" 1
#pragma line 6 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.h" 2
#pragma empty_line
#pragma empty_line
uint16_t mod3(uint16_t a);
#pragma empty_line
typedef struct{
  uint16_t coeffs[509];
} poly;
#pragma empty_line
#pragma empty_line
void poly_Sq_tobytes(unsigned char *r, const poly *a);
void poly_Sq_frombytes(poly *r, const unsigned char *a);
#pragma empty_line
void poly_Rq_sum_zero_tobytes(unsigned char *r, const poly *a);
void poly_Rq_sum_zero_frombytes(poly *r, const unsigned char *a);
#pragma empty_line
void poly_S3_tobytes(unsigned char msg[(((509 -1)+4)/5)], const poly *r);
void poly_S3_frombytes(poly *r, const unsigned char msg[(((509 -1)+4)/5)]);
#pragma empty_line
void poly_Sq_mul(poly *r, const poly *a, const poly *b);
void poly_Rq_mul(poly *r, const poly *a, const poly *b);
void poly_Rq_mul_x_minus_1(poly *r, const poly *a);
void poly_S3_mul(poly *r, const poly *a, const poly *b);
void poly_lift(poly *r, const poly *a);
void poly_Rq_to_S3(poly *r, const poly *a);
#pragma empty_line
void poly_Rq_inv(poly *r, const poly *a);
void poly_S3_inv(poly *r, const poly *a);
#pragma empty_line
void poly_Z3_to_Zq(poly *r);
void poly_trinary_Zq_to_Z3(poly *r);
#pragma line 2 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/fips202.h" 1
#pragma line 11 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/fips202.h"
void shake128_absorb(uint64_t *s, const unsigned char *input, unsigned int inputByteLen);
void shake128_squeezeblocks(unsigned char *output, unsigned long long nblocks, uint64_t *s);
#pragma empty_line
void shake256(unsigned char *output, unsigned long long outlen, const unsigned char *input, unsigned long long inlen);
void sha3_256(unsigned char *output, const unsigned char *input, unsigned long long inlen);
void sha3_512(unsigned char *output, const unsigned char *input, unsigned long long inlen);
#pragma line 3 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/verify.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/stdio.h" 1 3 4
#pragma line 33 "/usr/include/stdio.h" 3 4
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
#pragma line 34 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma line 1 "/usr/include/bits/types.h" 1 3 4
#pragma line 27 "/usr/include/bits/types.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 28 "/usr/include/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
#pragma empty_line
#pragma empty_line
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#pragma empty_line
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#pragma line 130 "/usr/include/bits/types.h" 3 4
#pragma line 1 "/usr/include/bits/typesizes.h" 1 3 4
#pragma line 131 "/usr/include/bits/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
#pragma empty_line
typedef int __daddr_t;
typedef int __key_t;
#pragma empty_line
#pragma empty_line
typedef int __clockid_t;
#pragma empty_line
#pragma empty_line
typedef void * __timer_t;
#pragma empty_line
#pragma empty_line
typedef long int __blksize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#pragma empty_line
#pragma empty_line
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#pragma empty_line
#pragma empty_line
typedef long int __fsword_t;
#pragma empty_line
typedef long int __ssize_t;
#pragma empty_line
#pragma empty_line
typedef long int __syscall_slong_t;
#pragma empty_line
typedef unsigned long int __syscall_ulong_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
#pragma empty_line
#pragma empty_line
typedef long int __intptr_t;
#pragma empty_line
#pragma empty_line
typedef unsigned int __socklen_t;
#pragma line 36 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct _IO_FILE;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct _IO_FILE FILE;
#pragma line 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
#pragma line 74 "/usr/include/stdio.h" 3 4
#pragma line 1 "/usr/include/libio.h" 1 3 4
#pragma line 32 "/usr/include/libio.h" 3 4
#pragma line 1 "/usr/include/_G_config.h" 1 3 4
#pragma line 15 "/usr/include/_G_config.h" 3 4
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
#pragma line 16 "/usr/include/_G_config.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/wchar.h" 1 3 4
#pragma line 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
#pragma empty_line
    unsigned int __wch;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    char __wchb[4];
  } __value;
} __mbstate_t;
#pragma line 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#pragma line 33 "/usr/include/libio.h" 2 3 4
#pragma line 50 "/usr/include/libio.h" 3 4
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 1 3 4
#pragma line 30 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
#pragma line 48 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
#pragma line 51 "/usr/include/libio.h" 2 3 4
#pragma line 145 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
#pragma line 155 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int _pos;
#pragma line 178 "/usr/include/libio.h" 3 4
};
#pragma empty_line
#pragma empty_line
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
#pragma line 246 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
#pragma empty_line
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
#pragma empty_line
  struct _IO_marker *_markers;
#pragma empty_line
  struct _IO_FILE *_chain;
#pragma empty_line
  int _fileno;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int _flags2;
#pragma empty_line
  __off_t _old_offset;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
#pragma empty_line
#pragma empty_line
#pragma empty_line
  _IO_lock_t *_lock;
#pragma line 294 "/usr/include/libio.h" 3 4
  __off64_t _offset;
#pragma line 303 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
#pragma empty_line
  int _mode;
#pragma empty_line
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
#pragma empty_line
};
#pragma empty_line
#pragma empty_line
typedef struct _IO_FILE _IO_FILE;
#pragma empty_line
#pragma empty_line
struct _IO_FILE_plus;
#pragma empty_line
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
#pragma line 339 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
#pragma empty_line
#pragma empty_line
typedef int __io_close_fn (void *__cookie);
#pragma line 391 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
#pragma line 435 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern int _IO_peekc_locked (_IO_FILE *__fp);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
#pragma line 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
#pragma empty_line
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
#pragma empty_line
extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ ));
#pragma line 75 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __gnuc_va_list va_list;
#pragma line 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
#pragma line 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef _G_fpos_t fpos_t;
#pragma line 164 "/usr/include/stdio.h" 3 4
#pragma line 1 "/usr/include/bits/stdio_lim.h" 1 3 4
#pragma line 165 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
#pragma line 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
#pragma line 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) ;
#pragma line 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
#pragma line 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fflush (FILE *__stream);
#pragma line 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
#pragma line 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
#pragma line 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) ;
#pragma line 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma line 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int printf (const char *__restrict __format, ...);
#pragma empty_line
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
#pragma empty_line
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));
#pragma empty_line
extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
#pragma line 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
#pragma line 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int scanf (const char *__restrict __format, ...) ;
#pragma empty_line
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
#pragma line 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
#pragma empty_line
#pragma empty_line
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
#pragma empty_line
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
#pragma line 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
#pragma empty_line
#pragma empty_line
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
#pragma line 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
#pragma empty_line
#pragma empty_line
#pragma empty_line
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
#pragma empty_line
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))
#pragma empty_line
#pragma empty_line
#pragma empty_line
     __attribute__ ((__format__ (__scanf__, 2, 0)));
#pragma line 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getchar (void);
#pragma line 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
#pragma line 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
#pragma line 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int putchar (int __c);
#pragma line 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int getw (FILE *__stream);
#pragma empty_line
#pragma empty_line
extern int putw (int __w, FILE *__stream);
#pragma line 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;
#pragma line 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
#pragma line 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
#pragma line 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int puts (const char *__s);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ungetc (int __c, FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
#pragma line 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
#pragma line 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int ftell (FILE *__stream) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void rewind (FILE *__stream);
#pragma line 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __off_t ftello (FILE *__stream) ;
#pragma line 798 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
#pragma line 826 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
#pragma line 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/sys_errlist.h" 1 3 4
#pragma line 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
#pragma line 854 "/usr/include/stdio.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
#pragma line 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int pclose (FILE *__stream);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));
#pragma line 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/verify.h" 2
#pragma empty_line
#pragma empty_line
int verify(const unsigned char *a, const unsigned char *b, size_t len);
#pragma empty_line
#pragma empty_line
void cmov(unsigned char *r, const unsigned char *x, size_t len, unsigned char b);
#pragma line 4 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c" 2
#pragma empty_line
uint16_t mod3(uint16_t a)
{
  uint16_t r;
  int16_t t, c;
#pragma empty_line
  r = (a >> 8) + (a & 0xff);
  r = (r >> 4) + (r & 0xf);
  r = (r >> 2) + (r & 0x3);
  r = (r >> 2) + (r & 0x3);
#pragma empty_line
  t = r - 3;
  c = t >> 15;
#pragma empty_line
  return (c&r) ^ (~c&t);
}
#pragma empty_line
#pragma empty_line
void poly_Z3_to_Zq(poly *r)
{
  int i;
  for(i=0; i<509; i++)
    r->coeffs[i] = r->coeffs[i] | ((-(r->coeffs[i]>>1)) & ((1 << 11)-1));
}
#pragma empty_line
#pragma empty_line
void poly_trinary_Zq_to_Z3(poly *r)
{
  int i;
  for(i=0; i<509; i++)
    r->coeffs[i] = 3 & (r->coeffs[i] ^ (r->coeffs[i]>>(11 -1)));
}
#pragma empty_line
void poly_Rq_mul(poly *r, const poly *a, const poly *b)
{
  int k,i;
#pragma empty_line
  for(k=0; k<509; k++)
  {
    r->coeffs[k] = 0;
    for(i=1; i<509 -k; i++)
      r->coeffs[k] += a->coeffs[k+i] * b->coeffs[509 -i];
    for(i=0; i<k+1; i++)
      r->coeffs[k] += a->coeffs[k-i] * b->coeffs[i];
    r->coeffs[k] = ((r->coeffs[k]) & ((1 << 11)-1));
  }
}
#pragma empty_line
void poly_Sq_mul(poly *r, const poly *a, const poly *b)
{
  int i;
  poly_Rq_mul(r, a, b);
  for(i=0; i<509; i++)
    r->coeffs[i] = ((r->coeffs[i] - r->coeffs[509 -1]) & ((1 << 11)-1));
}
#pragma empty_line
void poly_S3_mul(poly *r, const poly *a, const poly *b)
{
  int k,i;
#pragma empty_line
  for(k=0; k<509; k++)
  {
    r->coeffs[k] = 0;
    for(i=1; i<509 -k; i++)
      r->coeffs[k] += a->coeffs[k+i] * b->coeffs[509 -i];
    for(i=0; i<k+1; i++)
      r->coeffs[k] += a->coeffs[k-i] * b->coeffs[i];
  }
  for(k=0; k<509; k++)
    r->coeffs[k] = mod3(r->coeffs[k] + 2*r->coeffs[509 -1]);
}
#pragma empty_line
void poly_Rq_mul_x_minus_1(poly *r, const poly *a)
{
  int i;
  uint16_t last_coeff = a->coeffs[509 -1];
#pragma empty_line
  for (i = 509 - 1; i > 0; i--) {
    r->coeffs[i] = ((a->coeffs[i-1] + ((1 << 11) - a->coeffs[i])) & ((1 << 11)-1));
  }
  r->coeffs[0] = ((last_coeff + ((1 << 11) - a->coeffs[0])) & ((1 << 11)-1));
}
#pragma empty_line
#pragma empty_line
void poly_lift(poly *r, const poly *a)
{
  int i;
  for(i=0; i<509; i++)
    r->coeffs[i] = a->coeffs[i];
  poly_Z3_to_Zq(r);
}
#pragma line 150 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c"
void poly_Rq_to_S3(poly *r, const poly *a)
{
#pragma empty_line
#pragma empty_line
  int i;
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
  {
    r->coeffs[i] = ((a->coeffs[i] >> (11 -1)) ^ 3) << 11;
    r->coeffs[i] += a->coeffs[i];
  }
#pragma empty_line
  r->coeffs[509 -1] = mod3(r->coeffs[509 -1]);
  for(i=0; i<509; i++)
    r->coeffs[i] = mod3(r->coeffs[i] + 2*r->coeffs[509 -1]);
}
#pragma line 176 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/poly.c"
static void cswappoly(poly *a, poly *b, int swap)
{
  int i;
  uint16_t t;
  swap = -swap;
  for(i=0;i<509;i++)
  {
    t = (a->coeffs[i] ^ b->coeffs[i]) & swap;
    a->coeffs[i] ^= t;
    b->coeffs[i] ^= t;
  }
}
#pragma empty_line
static inline void poly_divx(poly *a, int s)
{
  int i;
#pragma empty_line
  for(i=1; i<509; i++)
    a->coeffs[i-1] = (s * a->coeffs[i]) | (!s * a->coeffs[i-1]);
  a->coeffs[509 -1] = (!s * a->coeffs[509 -1]);
}
#pragma empty_line
static inline void poly_mulx(poly *a, int s)
{
  int i;
#pragma empty_line
  for(i=1; i<509; i++)
    a->coeffs[509 -i] = (s * a->coeffs[509 -i-1]) | (!s * a->coeffs[509 -i]);
  a->coeffs[0] = (!s * a->coeffs[0]);
}
#pragma empty_line
static void poly_R2_inv(poly *r, const poly *a)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int i, j;
  int k = 0;
  uint16_t degf = 509 -1;
  uint16_t degg = 509 -1;
  int sign, t, swap;
  int done = 0;
  poly b, f, g;
  poly *c = r;
  poly *temp_r = &f;
#pragma empty_line
#pragma empty_line
  for(i=1; i<509; i++)
    b.coeffs[i] = 0;
  b.coeffs[0] = 1;
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    c->coeffs[i] = 0;
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    f.coeffs[i] = a->coeffs[i] & 1;
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    g.coeffs[i] = 1;
#pragma empty_line
  for(j=0;j<2*(509 -1)-1;j++)
  {
    sign = f.coeffs[0];
    swap = sign & !done & ((degf - degg) >> 15);
#pragma empty_line
    cswappoly(&f, &g, swap);
    cswappoly(&b, c, swap);
    t = (degf ^ degg) & (-swap);
    degf ^= t;
    degg ^= t;
#pragma empty_line
    for(i=0; i<509; i++) { f.coeffs[i] ^= g.coeffs[i] * sign*(!done); };
    for(i=0; i<509; i++) { b.coeffs[i] ^= (*c).coeffs[i] * sign*(!done); };
#pragma empty_line
    poly_divx(&f, !done);
    poly_mulx(c, !done);
    degf -= !done;
    k += !done;
#pragma empty_line
    done = 1 - (((uint16_t)-degf) >> 15);
  }
#pragma empty_line
  k = k - 509*((uint16_t)(509 - k - 1) >> 15);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  for (i = 0; i < 509; i++)
    r->coeffs[i] = b.coeffs[i];
#pragma empty_line
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 509; j++) {
      temp_r->coeffs[j] = r->coeffs[(j + (1 << i)) % 509];
    }
    cmov((unsigned char *)&(r->coeffs),
         (unsigned char *)&(temp_r->coeffs), sizeof(uint16_t) * 509, k & 1);
    k >>= 1;
  }
}
#pragma empty_line
static void poly_R2_inv_to_Rq_inv(poly *r, const poly *ai, const poly *a)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int i;
  poly b, c;
  poly s;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    b.coeffs[i] = (((1 << 11) - a->coeffs[i]) & ((1 << 11)-1));
#pragma empty_line
  for(i=0; i<509; i++)
    r->coeffs[i] = ai->coeffs[i];
#pragma empty_line
  poly_Rq_mul(&c, r, &b);
  c.coeffs[0] += 2;
  poly_Rq_mul(&s, &c, r);
#pragma empty_line
  poly_Rq_mul(&c, &s, &b);
  c.coeffs[0] += 2;
  poly_Rq_mul(r, &c, &s);
#pragma empty_line
  poly_Rq_mul(&c, r, &b);
  c.coeffs[0] += 2;
  poly_Rq_mul(&s, &c, r);
#pragma empty_line
  poly_Rq_mul(&c, &s, &b);
  c.coeffs[0] += 2;
  poly_Rq_mul(r, &c, &s);
}
#pragma empty_line
void poly_Rq_inv(poly *r, const poly *a)
{
  poly ai2;
  poly_R2_inv(&ai2, a);
  poly_R2_inv_to_Rq_inv(r, &ai2, a);
}
#pragma empty_line
void poly_S3_inv(poly *r, const poly *a)
{
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int i, j;
  uint16_t k = 0;
  uint16_t degf = 509 -1;
  uint16_t degg = 509 -1;
  int sign, fsign = 0, t, swap;
  int done = 0;
  poly b, c, f, g;
  poly *temp_r = &f;
#pragma empty_line
#pragma empty_line
  for(i=1; i<509; i++)
    b.coeffs[i] = 0;
  b.coeffs[0] = 1;
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    c.coeffs[i] = 0;
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    f.coeffs[i] = a->coeffs[i];
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    g.coeffs[i] = 1;
#pragma empty_line
  for(j=0; j<2*(509 -1)-1; j++)
  {
    sign = mod3(2 * g.coeffs[0] * f.coeffs[0]);
    swap = (((sign & 2) >> 1) | sign) & !done & ((degf - degg) >> 15);
#pragma empty_line
    cswappoly(&f, &g, swap);
    cswappoly(&b, &c, swap);
    t = (degf ^ degg) & (-swap);
    degf ^= t;
    degg ^= t;
#pragma empty_line
    for(i=0; i<509; i++) { f.coeffs[i] = mod3(f.coeffs[i] + sign*(!done) * g.coeffs[i]); };
    for(i=0; i<509; i++) { b.coeffs[i] = mod3(b.coeffs[i] + sign*(!done) * c.coeffs[i]); };
#pragma empty_line
    poly_divx(&f, !done);
    poly_mulx(&c, !done);
    degf -= !done;
    k += !done;
#pragma empty_line
    done = 1 - (((uint16_t)-degf) >> 15);
  }
#pragma empty_line
  fsign = f.coeffs[0];
  k = k - 509*((uint16_t)(509 - k - 1) >> 15);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  for (i = 0; i < 509; i++)
    r->coeffs[i] = mod3(fsign * b.coeffs[i]);
#pragma empty_line
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 509; j++) {
      temp_r->coeffs[j] = r->coeffs[(j + (1 << i)) % 509];
    }
    cmov((unsigned char *)&(r->coeffs),
         (unsigned char *)&(temp_r->coeffs), sizeof(uint16_t) * 509, k & 1);
    k >>= 1;
  }
#pragma empty_line
#pragma empty_line
  for(i=0; i<509; i++)
    r->coeffs[i] = mod3(r->coeffs[i] + 2*r->coeffs[509 -1]);
}
