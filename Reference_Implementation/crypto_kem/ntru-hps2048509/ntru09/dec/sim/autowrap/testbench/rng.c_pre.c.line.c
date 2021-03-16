#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c"
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/string.h" 1 3 4
#pragma line 25 "/usr/include/string.h" 3 4
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
#pragma line 26 "/usr/include/string.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
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
#pragma line 9 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.h" 1
#pragma line 11 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.h"
#pragma line 1 "/usr/include/stdio.h" 1 3 4
#pragma line 33 "/usr/include/stdio.h" 3 4
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
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
#pragma line 12 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.h" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct {
    unsigned char buffer[16];
    int buffer_pos;
    unsigned long length_remaining;
    unsigned char key[32];
    unsigned char ctr[16];
} AES_XOF_struct;
#pragma empty_line
typedef struct {
    unsigned char Key[32];
    unsigned char V[16];
    int reseed_counter;
} AES256_CTR_DRBG_struct;
#pragma empty_line
#pragma empty_line
void
AES256_CTR_DRBG_Update(unsigned char *provided_data,
                       unsigned char *Key,
                       unsigned char *V);
#pragma empty_line
int
seedexpander_init(AES_XOF_struct *ctx,
                  unsigned char *seed,
                  unsigned char *diversifier,
                  unsigned long maxlen);
#pragma empty_line
int
seedexpander(AES_XOF_struct *ctx, unsigned char *x, unsigned long xlen);
#pragma empty_line
void
randombytes_init(unsigned char *entropy_input,
                 unsigned char *personalization_string,
                 int security_strength);
#pragma empty_line
int
randombytes(unsigned char *x, unsigned long long xlen);
#pragma line 10 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/aes.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
#pragma line 33 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
#pragma line 1 "/usr/include/stdint.h" 1 3 4
#pragma line 26 "/usr/include/stdint.h" 3 4
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
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/aes.h" 2
#pragma line 43 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/aes.h"
struct AES_ctx
{
  uint8_t RoundKey[240];
#pragma empty_line
  uint8_t Iv[16];
#pragma empty_line
};
#pragma empty_line
typedef uint8_t state_t[4][4];
#pragma empty_line
void AES_init_ctx(struct AES_ctx* ctx, const uint8_t* key);
#pragma empty_line
void AES_init_ctx_iv(struct AES_ctx* ctx, const uint8_t* key, const uint8_t* iv);
void AES_ctx_set_iv(struct AES_ctx* ctx, const uint8_t* iv);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
void AES_ECB_encrypt(struct AES_ctx* ctx, state_t* buf);
void AES_ECB_decrypt(struct AES_ctx* ctx, uint8_t* buf);
#pragma line 74 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/aes.h"
void AES_CBC_encrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
void AES_CBC_decrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
#pragma line 87 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/aes.h"
void AES_CTR_xcrypt_buffer(struct AES_ctx* ctx, uint8_t* buf, uint32_t length);
#pragma line 11 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
AES256_CTR_DRBG_struct DRBG_ctx;
#pragma empty_line
void print_aes256_struct() {
 int loop;
 for(loop=0;loop<32;loop++)
  printf("Key[%d]=%d;\n",loop,DRBG_ctx.Key[loop]);
 for(loop=0;loop<16;loop++)
  printf("V[%d]=%d;\n",loop,DRBG_ctx.V[loop]);
 printf("reseed_counter=%d\n",DRBG_ctx.reseed_counter);
}
#pragma empty_line
void write_aes256_struct(unsigned char Key1[32], unsigned char V1[16], int reseed_counter1) {
 int loop;
 for(loop=0;loop<32;loop++)
  DRBG_ctx.Key[loop]=Key1[loop];
 for(loop=0;loop<16;loop++)
  DRBG_ctx.V[loop]=V1[loop];
 DRBG_ctx.reseed_counter=reseed_counter1;
}
#pragma empty_line
void AES256_ECB(unsigned char *key, unsigned char *ctr, unsigned char *buffer);
#pragma line 45 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c"
int
seedexpander_init(AES_XOF_struct *ctx,
                  unsigned char *seed,
                  unsigned char *diversifier,
                  unsigned long maxlen)
{
    if ( maxlen >= 0x100000000 )
        return -1;
#pragma empty_line
    ctx->length_remaining = maxlen;
#pragma empty_line
    memcpy(ctx->key, seed, 32);
#pragma empty_line
    memcpy(ctx->ctr, diversifier, 8);
    ctx->ctr[11] = maxlen % 256;
    maxlen >>= 8;
    ctx->ctr[10] = maxlen % 256;
    maxlen >>= 8;
    ctx->ctr[9] = maxlen % 256;
    maxlen >>= 8;
    ctx->ctr[8] = maxlen % 256;
    memset(ctx->ctr+12, 0x00, 4);
#pragma empty_line
    ctx->buffer_pos = 16;
    memset(ctx->buffer, 0x00, 16);
#pragma empty_line
    return 0;
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
int
seedexpander(AES_XOF_struct *ctx, unsigned char *x, unsigned long xlen)
{
    unsigned long offset;
#pragma empty_line
    if ( x == ((void*)0) )
        return -2;
    if ( xlen >= ctx->length_remaining )
        return -3;
#pragma empty_line
    ctx->length_remaining -= xlen;
#pragma empty_line
    offset = 0;
    while ( xlen > 0 ) {
        if ( xlen <= (16-ctx->buffer_pos) ) {
            memcpy(x+offset, ctx->buffer+ctx->buffer_pos, xlen);
            ctx->buffer_pos += xlen;
#pragma empty_line
            return 0;
        }
#pragma empty_line
#pragma empty_line
        memcpy(x+offset, ctx->buffer+ctx->buffer_pos, 16-ctx->buffer_pos);
        xlen -= 16-ctx->buffer_pos;
        offset += 16-ctx->buffer_pos;
#pragma empty_line
        AES256_ECB(ctx->key, ctx->ctr, ctx->buffer);
        ctx->buffer_pos = 0;
#pragma empty_line
#pragma empty_line
        for (int i=15; i>=12; i--) {
            if ( ctx->ctr[i] == 0xff )
                ctx->ctr[i] = 0x00;
            else {
                ctx->ctr[i]++;
                break;
            }
        }
#pragma empty_line
    }
#pragma empty_line
    return 0;
}
#pragma empty_line
#pragma empty_line
void handleErrors(void)
{
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
void
AES256_ECB(unsigned char *key, unsigned char *ctr, unsigned char *buffer)
{
#pragma empty_line
#pragma empty_line
    struct AES_ctx ctx;
#pragma empty_line
    int len = 16;
#pragma empty_line
    int ciphertext_len;
#pragma empty_line
#pragma empty_line
    AES_init_ctx(&ctx, key);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    uint8_t test[4][4];
#pragma empty_line
    test[0][0] = ctr[0];
    test[0][1] = ctr[1];
    test[0][2] = ctr[2];
    test[0][3] = ctr[3];
    test[1][0] = ctr[4];
    test[1][1] = ctr[5];
    test[1][2] = ctr[6];
    test[1][3] = ctr[7];
    test[2][0] = ctr[8];
    test[2][1] = ctr[9];
    test[2][2] = ctr[10];
    test[2][3] = ctr[11];
    test[3][0] = ctr[12];
    test[3][1] = ctr[13];
    test[3][2] = ctr[14];
    test[3][3] = ctr[15];
#pragma empty_line
#pragma empty_line
    AES_ECB_encrypt(&ctx,(state_t*)test);
#pragma empty_line
    buffer[0] = test[0][0];
    buffer[1] = test[0][1];
    buffer[2] = test[0][2];
    buffer[3] = test[0][3];
    buffer[4] = test[1][0];
    buffer[5] = test[1][1];
    buffer[6] = test[1][2];
    buffer[7] = test[1][3];
    buffer[8] = test[2][0];
    buffer[9] = test[2][1];
    buffer[10] = test[2][2];
    buffer[11] = test[2][3];
    buffer[12] = test[3][0];
    buffer[13] = test[3][1];
    buffer[14] = test[3][2];
    buffer[15] = test[3][3];
#pragma empty_line
#pragma empty_line
    ciphertext_len = len;
#pragma empty_line
}
#pragma empty_line
void
randombytes_init(unsigned char *entropy_input,
                 unsigned char *personalization_string,
                 int security_strength)
{
    unsigned char seed_material[48];
#pragma empty_line
    memcpy(seed_material, entropy_input, 48);
    if (personalization_string)
        for (int i=0; i<48; i++)
            seed_material[i] ^= personalization_string[i];
    memset(DRBG_ctx.Key, 0x00, 32);
    memset(DRBG_ctx.V, 0x00, 16);
    AES256_CTR_DRBG_Update(seed_material, DRBG_ctx.Key, DRBG_ctx.V);
    DRBG_ctx.reseed_counter = 1;
}
#pragma empty_line
int
randombytes(unsigned char *x, unsigned long long xlen)
{
    unsigned char block[16];
    int i = 0;
#pragma empty_line
    while ( xlen > 0 ) {
#pragma empty_line
        for (int j=15; j>=0; j--) {
            if ( DRBG_ctx.V[j] == 0xff )
                DRBG_ctx.V[j] = 0x00;
            else {
                DRBG_ctx.V[j]++;
                break;
            }
        }
        AES256_ECB(DRBG_ctx.Key, DRBG_ctx.V, block);
#pragma line 242 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hps2048509/rng.c"
        if ( xlen > 15 ) {
#pragma empty_line
         int loop;
         for (loop=0;loop<16;loop++)
          x[i+loop] = block[loop];
            i += 16;
            xlen -= 16;
        }
        else {
         int loop;
         for (loop=0;loop<xlen;loop++)
               x[i+loop] = block[loop];
#pragma empty_line
            xlen = 0;
        }
    }
    AES256_CTR_DRBG_Update(((void*)0), DRBG_ctx.Key, DRBG_ctx.V);
    DRBG_ctx.reseed_counter++;
#pragma empty_line
    return 0;
}
#pragma empty_line
void
AES256_CTR_DRBG_Update(unsigned char *provided_data,
                       unsigned char *Key,
                       unsigned char *V)
{
    unsigned char temp[48];
    int i=0;
    for (i=0; i<3; i++) {
#pragma empty_line
        for (int j=15; j>=0; j--) {
            if ( V[j] == 0xff )
                V[j] = 0x00;
            else {
                V[j]++;
                break;
            }
        }
#pragma empty_line
        AES256_ECB(Key, V, temp+16*i);
    }
    if ( provided_data != ((void*)0) )
        for (i=0; i<48; i++)
            temp[i] ^= provided_data[i];
#pragma empty_line
#pragma empty_line
    for (i=0;i<32;i++)
     Key[i] = temp[i];
    for (i=0;i<16;i++)
     V[i]=temp[32+i];;
}
