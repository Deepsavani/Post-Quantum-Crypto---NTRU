#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c"
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 149 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma line 1 "<built-in>" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/params.h" 1
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.h" 2
#pragma empty_line
void owcpa_samplemsg(unsigned char msg[(2*(((701 -1)+4)/5))],
                     const unsigned char seed[32]);
#pragma empty_line
void owcpa_keypair(unsigned char *pk,
                   unsigned char *sk,
                   const unsigned char seed[32]);
#pragma empty_line
void owcpa_enc(unsigned char *c,
               const unsigned char *rm,
               const unsigned char *pk);
#pragma empty_line
int owcpa_dec(unsigned char *rm,
              const unsigned char *c,
              const unsigned char *sk);
#pragma line 2 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c" 2
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/sample.h" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/stdlib.h" 1 3 4
#pragma line 24 "/usr/include/stdlib.h" 3 4
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
#pragma line 25 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
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
#pragma line 33 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/waitflags.h" 1 3 4
#pragma line 42 "/usr/include/stdlib.h" 2 3 4
#pragma line 1 "/usr/include/bits/waitstatus.h" 1 3 4
#pragma line 64 "/usr/include/bits/waitstatus.h" 3 4
#pragma line 1 "/usr/include/endian.h" 1 3 4
#pragma line 36 "/usr/include/endian.h" 3 4
#pragma line 1 "/usr/include/bits/endian.h" 1 3 4
#pragma line 37 "/usr/include/endian.h" 2 3 4
#pragma line 60 "/usr/include/endian.h" 3 4
#pragma line 1 "/usr/include/bits/byteswap.h" 1 3 4
#pragma line 27 "/usr/include/bits/byteswap.h" 3 4
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
#pragma line 28 "/usr/include/bits/byteswap.h" 2 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 29 "/usr/include/bits/byteswap.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/byteswap-16.h" 1 3 4
#pragma line 36 "/usr/include/bits/byteswap.h" 2 3 4
#pragma line 61 "/usr/include/endian.h" 2 3 4
#pragma line 65 "/usr/include/bits/waitstatus.h" 2 3 4
#pragma empty_line
union wait
  {
    int w_status;
    struct
      {
#pragma empty_line
 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      } __wait_terminated;
    struct
      {
#pragma empty_line
 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      } __wait_stopped;
  };
#pragma line 43 "/usr/include/stdlib.h" 2 3 4
#pragma line 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
#pragma line 97 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
#pragma line 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma line 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/sys/types.h" 1 3 4
#pragma line 33 "/usr/include/sys/types.h" 3 4
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __loff_t loff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __ino_t ino_t;
#pragma line 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __gid_t gid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __mode_t mode_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __nlink_t nlink_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __uid_t uid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __off_t off_t;
#pragma line 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __id_t id_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __ssize_t ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __key_t key_t;
#pragma line 132 "/usr/include/sys/types.h" 3 4
#pragma line 1 "/usr/include/time.h" 1 3 4
#pragma line 59 "/usr/include/time.h" 3 4
typedef __clock_t clock_t;
#pragma line 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
#pragma line 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
#pragma line 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
#pragma line 133 "/usr/include/sys/types.h" 2 3 4
#pragma line 146 "/usr/include/sys/types.h" 3 4
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
#pragma line 147 "/usr/include/sys/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#pragma line 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));
#pragma empty_line
#pragma empty_line
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));
#pragma empty_line
typedef int register_t __attribute__ ((__mode__ (__word__)));
#pragma line 219 "/usr/include/sys/types.h" 3 4
#pragma line 1 "/usr/include/sys/select.h" 1 3 4
#pragma line 30 "/usr/include/sys/select.h" 3 4
#pragma line 1 "/usr/include/bits/select.h" 1 3 4
#pragma line 22 "/usr/include/bits/select.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 23 "/usr/include/bits/select.h" 2 3 4
#pragma line 31 "/usr/include/sys/select.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/sigset.h" 1 3 4
#pragma line 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
#pragma line 34 "/usr/include/sys/select.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __sigset_t sigset_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/time.h" 1 3 4
#pragma line 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
#pragma line 44 "/usr/include/sys/select.h" 2 3 4
#pragma empty_line
#pragma line 1 "/usr/include/bits/time.h" 1 3 4
#pragma line 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
#pragma line 46 "/usr/include/sys/select.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef __suseconds_t suseconds_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long int __fd_mask;
#pragma line 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
#pragma empty_line
#pragma empty_line
  } fd_set;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __fd_mask fd_mask;
#pragma line 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
#pragma line 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
#pragma line 220 "/usr/include/sys/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/sys/sysmacros.h" 1 3 4
#pragma line 31 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
#pragma line 223 "/usr/include/sys/types.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __blksize_t blksize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __blkcnt_t blkcnt_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __fsblkcnt_t fsblkcnt_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __fsfilcnt_t fsfilcnt_t;
#pragma line 270 "/usr/include/sys/types.h" 3 4
#pragma line 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
#pragma line 21 "/usr/include/bits/pthreadtypes.h" 3 4
#pragma line 1 "/usr/include/bits/wordsize.h" 1 3 4
#pragma line 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
#pragma line 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;
#pragma empty_line
#pragma empty_line
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
#pragma empty_line
typedef union pthread_attr_t pthread_attr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#pragma line 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
#pragma empty_line
    unsigned int __nusers;
#pragma empty_line
#pragma empty_line
#pragma empty_line
    int __kind;
#pragma empty_line
    short __spins;
    short __elision;
    __pthread_list_t __list;
#pragma line 125 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
#pragma empty_line
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
#pragma empty_line
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned int pthread_key_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int pthread_once_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef union
{
#pragma empty_line
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
#pragma empty_line
#pragma empty_line
    unsigned int __flags;
#pragma empty_line
  } __data;
#pragma line 212 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;
#pragma empty_line
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef volatile int pthread_spinlock_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
#pragma empty_line
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
#pragma line 271 "/usr/include/sys/types.h" 2 3 4
#pragma line 315 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long int random (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
#pragma empty_line
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
#pragma empty_line
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int rand (void) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
#pragma empty_line
#pragma empty_line
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
#pragma empty_line
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma empty_line
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
#pragma line 465 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
#pragma empty_line
extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
#pragma line 479 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__));
#pragma empty_line
extern void free (void *__ptr) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void cfree (void *__ptr) __attribute__ ((__nothrow__ ));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/alloca.h" 1 3 4
#pragma line 24 "/usr/include/alloca.h" 3 4
#pragma line 1 "/opt/Xilinx2018/Vivado/2018.3/lnx64/tools/clang/bin/../lib/clang/3.1/include/stddef.h" 1 3 4
#pragma line 25 "/usr/include/alloca.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));
#pragma line 492 "/usr/include/stdlib.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
#pragma line 514 "/usr/include/stdlib.h" 3 4
extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma line 534 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma line 556 "/usr/include/stdlib.h" 3 4
extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
#pragma line 577 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
#pragma empty_line
#pragma empty_line
extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int clearenv (void) __attribute__ ((__nothrow__ ));
#pragma line 605 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma line 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
#pragma line 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
#pragma line 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
#pragma line 716 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
#pragma line 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int (*__compar_fn_t) (const void *, const void *);
#pragma line 754 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
#pragma line 770 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
#pragma line 807 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
#pragma empty_line
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ )) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));
#pragma empty_line
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ));
#pragma line 884 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
#pragma line 895 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) ;
#pragma line 947 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "/usr/include/bits/stdlib-float.h" 1 3 4
#pragma line 952 "/usr/include/stdlib.h" 2 3 4
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/sample.h" 2
#pragma empty_line
#pragma line 1 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/poly.h" 1
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
#pragma line 48 "/usr/include/stdint.h" 3 4
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
#pragma line 5 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/poly.h" 2
#pragma empty_line
#pragma empty_line
#pragma empty_line
uint16_t mod3(uint16_t a);
#pragma empty_line
typedef struct{
  uint16_t coeffs[701];
} poly;
#pragma empty_line
#pragma empty_line
void poly_Sq_tobytes(unsigned char *r, const poly *a);
void poly_Sq_frombytes(poly *r, const unsigned char *a);
#pragma empty_line
void poly_Rq_sum_zero_tobytes(unsigned char *r, const poly *a);
void poly_Rq_sum_zero_frombytes(poly *r, const unsigned char *a);
#pragma empty_line
void poly_S3_tobytes(unsigned char msg[(((701 -1)+4)/5)], const poly *r);
void poly_S3_frombytes(poly *r, const unsigned char msg[(((701 -1)+4)/5)]);
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
#pragma line 7 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/sample.h" 2
#pragma empty_line
void sample_fg(poly *f, poly *g, const unsigned char uniformbytes[(2*(701 -1))]);
void sample_rm(poly *r, poly *m, const unsigned char uniformbytes[(2*(701 -1))]);
#pragma empty_line
void sample_iid(poly *r, const unsigned char uniformbytes[(701 -1)]);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
void sample_iid_plus(poly *r, const unsigned char uniformbytes[(701 -1)]);
#pragma line 3 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c" 2
#pragma empty_line
#pragma empty_line
static int owcpa_check_r(const poly *r)
{
#pragma empty_line
#pragma empty_line
  int i;
  uint64_t t = 0;
  uint16_t c;
  for(i=0; i<701; i++)
  {
    c = ((r->coeffs[i]+1) & ((1 << 13)-1));
    t |= c & ((1 << 13)-4);
    t |= (c + 1) & 0x4;
  }
  t |= r->coeffs[701 -1];
  t = (-t) >> 63;
  return t;
}
#pragma line 45 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c"
void owcpa_samplemsg(unsigned char msg[(2*(((701 -1)+4)/5))],
                     const unsigned char seed[(2*(701 -1))])
{
  poly r, m;
#pragma empty_line
  sample_rm(&r, &m, seed);
#pragma empty_line
  poly_S3_tobytes(msg, &r);
  poly_S3_tobytes(msg+(((701 -1)+4)/5), &m);
}
#pragma empty_line
void owcpa_keypair(unsigned char *pk,
                   unsigned char *sk,
                   const unsigned char seed[(2*(701 -1))])
{
  int i;
#pragma empty_line
  poly x1, x2, x3, x4, x5;
#pragma empty_line
  poly *f=&x1, *invf_mod3=&x2;
  poly *g=&x3, *G=&x2;
  poly *Gf=&x3, *invGf=&x4, *tmp=&x5;
  poly *invh=&x3, *h=&x3;
#pragma empty_line
  sample_fg(f,g,seed);
#pragma empty_line
  poly_S3_inv(invf_mod3, f);
  poly_S3_tobytes(sk, f);
  poly_S3_tobytes(sk+(((701 -1)+4)/5), invf_mod3);
#pragma empty_line
#pragma empty_line
  poly_Z3_to_Zq(f);
  poly_Z3_to_Zq(g);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  poly_Rq_mul_x_minus_1(G, g);
  for(i=0; i<701; i++)
    G->coeffs[i] = ((3 * G->coeffs[i]) & ((1 << 13)-1));
#pragma line 92 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c"
  poly_Rq_mul(Gf, G, f);
#pragma empty_line
  poly_Rq_inv(invGf, Gf);
#pragma empty_line
  poly_Rq_mul(tmp, invGf, f);
  poly_Sq_mul(invh, tmp, f);
  poly_Sq_tobytes(sk+2*(((701 -1)+4)/5), invh);
#pragma empty_line
  poly_Rq_mul(tmp, invGf, G);
  poly_Rq_mul(h, tmp, G);
  poly_Rq_sum_zero_tobytes(pk, h);
}
#pragma empty_line
#pragma empty_line
void owcpa_enc(unsigned char *c,
               const unsigned char *rm,
               const unsigned char *pk)
{
  int i;
  poly x1, x2, x3;
  poly *h = &x1, *liftm = &x1;
  poly *r = &x2, *m = &x2;
  poly *ct = &x3;
#pragma empty_line
  poly_Rq_sum_zero_frombytes(h, pk);
#pragma empty_line
  poly_S3_frombytes(r, rm);
  poly_Z3_to_Zq(r);
#pragma empty_line
  poly_Rq_mul(ct, r, h);
#pragma empty_line
  poly_S3_frombytes(m, rm+(((701 -1)+4)/5));
  poly_lift(liftm, m);
  for(i=0; i<701; i++)
    ct->coeffs[i] = ((ct->coeffs[i] + liftm->coeffs[i]) & ((1 << 13)-1));
#pragma empty_line
  poly_Rq_sum_zero_tobytes(c, ct);
}
#pragma empty_line
int owcpa_dec(unsigned char *rm,
              const unsigned char *ciphertext,
              const unsigned char *secretkey)
{
  int i;
  int fail;
  poly x1, x2, x3, x4;
#pragma empty_line
  poly *c = &x1, *f = &x2, *cf = &x3;
  poly *mf = &x2, *finv3 = &x3, *m = &x4;
  poly *liftm = &x2, *invh = &x3, *r = &x4;
  poly *b = &x1;
#pragma empty_line
  poly_Rq_sum_zero_frombytes(c, ciphertext);
  poly_S3_frombytes(f, secretkey);
  poly_Z3_to_Zq(f);
#pragma empty_line
  poly_Rq_mul(cf, c, f);
  poly_Rq_to_S3(mf, cf);
#pragma empty_line
  poly_S3_frombytes(finv3, secretkey+(((701 -1)+4)/5));
  poly_S3_mul(m, mf, finv3);
  poly_S3_tobytes(rm+(((701 -1)+4)/5), m);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  fail = 0;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  poly_lift(liftm, m);
  for(i=0; i<701; i++)
    b->coeffs[i] = ((c->coeffs[i] - liftm->coeffs[i]) & ((1 << 13)-1));
#pragma empty_line
#pragma empty_line
  poly_Sq_frombytes(invh, secretkey+2*(((701 -1)+4)/5));
  poly_Sq_mul(r, b, invh);
#pragma line 184 "/home/dss545/KEM/NTRU/Reference_Implementation/crypto_kem/ntru-hrss701/owcpa.c"
  fail |= owcpa_check_r(r);
#pragma empty_line
  poly_trinary_Zq_to_Z3(r);
  poly_S3_tobytes(rm, r);
#pragma empty_line
  return fail;
}
