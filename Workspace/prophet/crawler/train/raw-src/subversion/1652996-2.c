# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 311 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 1 3
# 30 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 3
typedef __builtin_va_list va_list;
# 50 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2

# 1 "./subversion/svn_private_config.h" 1
# 249 "./subversion/svn_private_config.h"
# 1 "/usr/include/locale.h" 1 3 4
# 25 "/usr/include/locale.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 353 "/usr/include/features.h" 2 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/locale.h" 2 3 4


# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4
# 53 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ ));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ ));
# 145 "/usr/include/locale.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 146 "/usr/include/locale.h" 2 3 4





extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ ));
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));
# 250 "./subversion/svn_private_config.h" 2
# 1 "/usr/include/libintl.h" 1 3 4
# 39 "/usr/include/libintl.h" 3 4
extern char *gettext (const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (1)));



extern char *dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));
extern char *__dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (const char *__domainname,
   const char *__msgid, int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (const char *__domainname,
     const char *__msgid, int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));




extern char *ngettext (const char *__msgid1, const char *__msgid2,
         unsigned long int __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (const char *__domainname, const char *__msgid1,
   const char *__msgid2, unsigned long int __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (const char *__domainname, const char *__msgid1,
    const char *__msgid2, unsigned long int __n,
    int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (const char *__domainname) __attribute__ ((__nothrow__ ));



extern char *bindtextdomain (const char *__domainname,
        const char *__dirname) __attribute__ ((__nothrow__ ));



extern char *bind_textdomain_codeset (const char *__domainname,
          const char *__codeset) __attribute__ ((__nothrow__ ));








# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 101 "/usr/include/libintl.h" 2 3 4
# 251 "./subversion/svn_private_config.h" 2
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_pools.h" 1
# 33 "./subversion/include/svn_pools.h"
# 1 "./subversion/include/svn_types.h" 1
# 31 "./subversion/include/svn_types.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 58 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 86 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 97 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 239 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) atoi (const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void*)0), 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__nothrow__ )) atol (const char *__nptr)
{
  return strtol (__nptr, (char **) ((void*)0), 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__nothrow__ )) atoll (const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void*)0), 10);
}
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef __clock_t clock_t;
# 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;






# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;






# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4








typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
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


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ )) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__nothrow__ )) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__nothrow__ )) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;






# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




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

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

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


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ ));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







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

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ ));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));







extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ ));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ ));




# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;




extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return ((void*)0);
}
# 761 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ ));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ ));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ));
# 888 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ ));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ ));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ )) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__nothrow__ )) atof (const char *__nptr)
{
  return strtod (__nptr, (char **) ((void*)0));
}
# 956 "/usr/include/stdlib.h" 2 3 4
# 32 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/limits.h" 1 3
# 37 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/limits.h" 3
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 38 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/limits.h" 2 3
# 33 "./subversion/include/svn_types.h" 2

# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 1
# 168 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/socket.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/uio.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio.h" 1 3 4
# 43 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 59 "/usr/include/x86_64-linux-gnu/bits/uio.h" 3 4
extern ssize_t process_vm_readv (pid_t __pid, const struct iovec *__lvec,
     unsigned long int __liovcnt,
     const struct iovec *__rvec,
     unsigned long int __riovcnt,
     unsigned long int __flags)
  __attribute__ ((__nothrow__ ));


extern ssize_t process_vm_writev (pid_t __pid, const struct iovec *__lvec,
      unsigned long int __liovcnt,
      const struct iovec *__rvec,
      unsigned long int __riovcnt,
      unsigned long int __flags)
  __attribute__ ((__nothrow__ ));
# 29 "/usr/include/x86_64-linux-gnu/sys/uio.h" 2 3 4
# 39 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
       ;
# 50 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
       ;
# 65 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
# 77 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;
# 103 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t preadv64 (int __fd, const struct iovec *__iovec, int __count,
    __off64_t __offset) ;
# 115 "/usr/include/x86_64-linux-gnu/sys/uio.h" 3 4
extern ssize_t pwritev64 (int __fd, const struct iovec *__iovec, int __count,
     __off64_t __offset) ;
# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4





typedef __socklen_t socklen_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/socket_type.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
# 39 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 147 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 162 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    unsigned long int __ss_align;
    char __ss_padding[(128 - (2 * sizeof (unsigned long int)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,



    MSG_TRYHARD = MSG_DONTROUTE,


    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;



  };
# 272 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__ ));




extern __inline __attribute__ ((__gnu_inline__)) struct cmsghdr *
__attribute__ ((__nothrow__ )) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return (struct cmsghdr *) 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return (struct cmsghdr *) 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};
# 345 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/socket.h" 2 3 4
# 346 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 379 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 39 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 90 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG __attribute__ ((__transparent_union__));


typedef union { const struct sockaddr *__restrict __sockaddr__; const struct sockaddr_at *__restrict __sockaddr_at__; const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; const struct sockaddr_dl *__restrict __sockaddr_dl__; const struct sockaddr_eon *__restrict __sockaddr_eon__; const struct sockaddr_in *__restrict __sockaddr_in__; const struct sockaddr_in6 *__restrict __sockaddr_in6__; const struct sockaddr_inarp *__restrict __sockaddr_inarp__; const struct sockaddr_ipx *__restrict __sockaddr_ipx__; const struct sockaddr_iso *__restrict __sockaddr_iso__; const struct sockaddr_ns *__restrict __sockaddr_ns__; const struct sockaddr_un *__restrict __sockaddr_un__; const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG __attribute__ ((__transparent_union__));





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ ));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ ));


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     __attribute__ ((__nothrow__ ));


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 174 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);







extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);







extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);







extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       const struct timespec *__tmo);






extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ ));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ ));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ ));
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ ));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ ));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ ));
# 169 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 2
# 178 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h"
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 1 3
# 33 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 3
// C99 7.18.3 Limits of other integer types
//
// Footnote 219, 220: C++ implementations should define these macros only when
// __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
//
// Footnote 222: C++ implementations should define these macros only when
// __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.
//
// C++11 [cstdint.syn]p2:
//
// The macros defined by <cstdint> are provided unconditionally. In particular,
// the symbols __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS (mentioned in
// footnotes 219, 220, and 222 in the C standard) play no role in C++.
//
// C11 removed the problematic footnotes.
//
// Work around this inconsistency by always defining those macros in C++ mode,
// so that a C library implementation which follows the C99 standard can be
// used in C++.
# 63 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 64 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 2 3
# 179 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 2



# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 32 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 116 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int __sigismember (const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline __attribute__ ((__gnu_inline__)) int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline __attribute__ ((__gnu_inline__)) int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 76 "/usr/include/signal.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 153 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 307 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
# 119 "/usr/include/signal.h" 3 4
extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));






extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ ));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ ));




extern int raise (int __sig) __attribute__ ((__nothrow__ ));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ ));




extern void psignal (int __sig, const char *__s);




extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 167 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);



extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
# 204 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3)));





# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 246 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ ));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ ));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ ));
# 303 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 327 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__ ));




# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 333 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ ));







# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 343 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ ));


# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 350 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4








__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 353 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ ));







extern int sighold (int __sig) __attribute__ ((__nothrow__ ));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__ ));


extern int sigignore (int __sig) __attribute__ ((__nothrow__ ));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ ));







# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ ));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ ));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ ));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ ));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ ));
# 30 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 102 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait (__WAIT_STATUS __stat_loc);
# 125 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 135 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
# 136 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 148 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (__WAIT_STATUS __stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));




extern __pid_t wait4 (__pid_t __pid, __WAIT_STATUS __stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));
# 183 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 2
# 309 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h"
typedef unsigned char apr_byte_t;

typedef short apr_int16_t;
typedef unsigned short apr_uint16_t;

typedef int apr_int32_t;
typedef unsigned int apr_uint32_t;
# 352 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h"
 typedef long apr_int64_t;
 typedef unsigned long apr_uint64_t;


typedef size_t apr_size_t;
typedef ssize_t apr_ssize_t;
typedef off_t apr_off_t;
typedef socklen_t apr_socklen_t;
typedef ino_t apr_ino_t;


typedef apr_uint64_t apr_uintptr_t;
# 35 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_version.h" 1
# 140 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_version.h"
typedef struct {
    int major;
    int minor;
    int patch;
    int is_dev;
} apr_version_t;







void apr_version(apr_version_t *pvsn);


const char * apr_version_string(void);
# 36 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_errno.h" 1
# 28 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_errno.h"
# 1 "/usr/include/errno.h" 1 3 4
# 35 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;
# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_errno.h" 2
# 44 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_errno.h"
typedef int apr_status_t;







char * apr_strerror(apr_status_t statcode, char *buf,
                                 apr_size_t bufsize);
# 37 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 1
# 45 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h" 1
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 1
# 30 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h" 2
# 68 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
typedef int apr_signum_t;
# 177 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
apr_status_t apr_initialize(void);
# 191 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
apr_status_t apr_app_initialize(int *argc,
                                             char const * const * *argv,
                                             char const * const * *env);
# 205 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
void apr_terminate(void);
# 216 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
void apr_terminate2(void);
# 233 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_general.h"
apr_status_t apr_generate_random_bytes(unsigned char * buf,
                                                    apr_size_t length);
# 46 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 2

# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 63 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h"
# 1 "/usr/include/string.h" 1 3 4
# 32 "/usr/include/string.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 46 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 110 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 277 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 373 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ ));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 604 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 632 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/string.h" 1 3 4
# 633 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/string2.h" 1 3 4
# 393 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 945 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (const char *__s, int __reject)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (const char *__s, int __reject1, int __reject2)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1021 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (const char *__s, int __accept)
{
  size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (const char *__s, int __accept1, int __accept2)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1097 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void*)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void*)0) : (char *) (size_t) __s;
}
# 1147 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void*)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void*)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1179 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, const char *__delim);
# 1197 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  char *__retval = *__s;
  if (__retval != ((void*)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void*)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  if (__retval != ((void*)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void*)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  if (__retval != ((void*)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void*)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1278 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 1297 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 636 "/usr/include/string.h" 2 3 4
# 64 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 2
# 48 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 2
# 60 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
typedef struct apr_pool_t apr_pool_t;
# 148 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
typedef int (*apr_abortfunc_t)(int retcode);
# 164 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_initialize(void);







void apr_pool_terminate(void);







# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h" 1
# 28 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h" 2
# 41 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h"
typedef struct apr_allocator_t apr_allocator_t;

typedef struct apr_memnode_t apr_memnode_t;
# 54 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h"
struct apr_memnode_t {
    apr_memnode_t *next;
    apr_memnode_t **ref;
    apr_uint32_t index;
    apr_uint32_t free_index;
    char *first_avail;
    char *endp;
};
# 74 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h"
apr_status_t apr_allocator_create(apr_allocator_t **allocator)
                          __attribute__((nonnull(1)));







void apr_allocator_destroy(apr_allocator_t *allocator)
                  __attribute__((nonnull(1)));







apr_memnode_t * apr_allocator_alloc(apr_allocator_t *allocator,
                                                 apr_size_t size)
                             __attribute__((nonnull(1)));
# 103 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h"
void apr_allocator_free(apr_allocator_t *allocator,
                                     apr_memnode_t *memnode)
                  __attribute__((nonnull(1,2)));


# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 1
# 108 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h" 2
# 120 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h"
void apr_allocator_owner_set(apr_allocator_t *allocator,
                                          apr_pool_t *pool)
                  __attribute__((nonnull(1)));





apr_pool_t * apr_allocator_owner_get(apr_allocator_t *allocator)
                          __attribute__((nonnull(1)));







void apr_allocator_max_free_set(apr_allocator_t *allocator,
                                             apr_size_t size)
                  __attribute__((nonnull(1)));


# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_mutex.h" 1
# 41 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_mutex.h"
typedef struct apr_thread_mutex_t apr_thread_mutex_t;







# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 1
# 49 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_mutex.h" 2
# 65 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_mutex.h"
apr_status_t apr_thread_mutex_create(apr_thread_mutex_t **mutex,
                                                  unsigned int flags,
                                                  apr_pool_t *pool);





apr_status_t apr_thread_mutex_lock(apr_thread_mutex_t *mutex);
# 82 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_mutex.h"
apr_status_t apr_thread_mutex_trylock(apr_thread_mutex_t *mutex);





apr_status_t apr_thread_mutex_unlock(apr_thread_mutex_t *mutex);





apr_status_t apr_thread_mutex_destroy(apr_thread_mutex_t *mutex);





apr_pool_t * apr_thread_mutex_pool_get (const apr_thread_mutex_t *thethread_mutex);
# 142 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_allocator.h" 2







void apr_allocator_mutex_set(apr_allocator_t *allocator,
                                          apr_thread_mutex_t *mutex)
                  __attribute__((nonnull(1)));





apr_thread_mutex_t * apr_allocator_mutex_get(
                                          apr_allocator_t *allocator)
                                  __attribute__((nonnull(1)));
# 180 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 2
# 196 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_create_ex(apr_pool_t **newpool,
                                             apr_pool_t *parent,
                                             apr_abortfunc_t abort_fn,
                                             apr_allocator_t *allocator)
                          __attribute__((nonnull(1)));





apr_status_t apr_pool_create_core_ex(apr_pool_t **newpool,
                                                  apr_abortfunc_t abort_fn,
                                                  apr_allocator_t *allocator);
# 226 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_create_unmanaged_ex(apr_pool_t **newpool,
                                                   apr_abortfunc_t abort_fn,
                                                   apr_allocator_t *allocator)
                          __attribute__((nonnull(1)));
# 247 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_create_ex_debug(apr_pool_t **newpool,
                                                   apr_pool_t *parent,
                                                   apr_abortfunc_t abort_fn,
                                                   apr_allocator_t *allocator,
                                                   const char *file_line)
                          __attribute__((nonnull(1)));
# 264 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_create_core_ex_debug(apr_pool_t **newpool,
                                                   apr_abortfunc_t abort_fn,
                                                   apr_allocator_t *allocator,
                                                   const char *file_line);
# 284 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_create_unmanaged_ex_debug(apr_pool_t **newpool,
                                                   apr_abortfunc_t abort_fn,
                                                   apr_allocator_t *allocator,
                                                   const char *file_line)
                          __attribute__((nonnull(1)));
# 354 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_allocator_t * apr_pool_allocator_get(apr_pool_t *pool)
                               __attribute__((nonnull(1)));
# 365 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_clear(apr_pool_t *p) __attribute__((nonnull(1)));
# 380 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_clear_debug(apr_pool_t *p,
                                       const char *file_line)
                  __attribute__((nonnull(1)));
# 395 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_destroy(apr_pool_t *p) __attribute__((nonnull(1)));
# 410 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_destroy_debug(apr_pool_t *p,
                                         const char *file_line)
                  __attribute__((nonnull(1)));
# 430 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void * apr_palloc(apr_pool_t *p, apr_size_t size)



                    __attribute__((nonnull(1)));
# 444 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void * apr_palloc_debug(apr_pool_t *p, apr_size_t size,
                                     const char *file_line)



                    __attribute__((nonnull(1)));
# 476 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void * apr_pcalloc_debug(apr_pool_t *p, apr_size_t size,
                                      const char *file_line)
                    __attribute__((nonnull(1)));
# 498 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_abort_set(apr_abortfunc_t abortfunc,
                                     apr_pool_t *pool)
                  __attribute__((nonnull(2)));






apr_abortfunc_t apr_pool_abort_get(apr_pool_t *pool)
                             __attribute__((nonnull(1)));






apr_pool_t * apr_pool_parent_get(apr_pool_t *pool)
                          __attribute__((nonnull(1)));
# 529 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
int apr_pool_is_ancestor(apr_pool_t *a, apr_pool_t *b);






void apr_pool_tag(apr_pool_t *pool, const char *tag)
                  __attribute__((nonnull(1)));
# 563 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_userdata_set(const void *data,
                                                const char *key,
                                                apr_status_t (*cleanup)(void *),
                                                apr_pool_t *pool)
                          __attribute__((nonnull(2,4)));
# 588 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_userdata_setn(
                                const void *data, const char *key,
                                apr_status_t (*cleanup)(void *),
                                apr_pool_t *pool)
                          __attribute__((nonnull(2,4)));







apr_status_t apr_pool_userdata_get(void **data, const char *key,
                                                apr_pool_t *pool)
                          __attribute__((nonnull(1,2,3)));
# 628 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_cleanup_register(
                            apr_pool_t *p, const void *data,
                            apr_status_t (*plain_cleanup)(void *),
                            apr_status_t (*child_cleanup)(void *))
                  __attribute__((nonnull(3,4)));
# 646 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_pre_cleanup_register(
                            apr_pool_t *p, const void *data,
                            apr_status_t (*plain_cleanup)(void *))
                  __attribute__((nonnull(3)));
# 663 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_cleanup_kill(apr_pool_t *p, const void *data,
                                        apr_status_t (*cleanup)(void *))
                  __attribute__((nonnull(3)));
# 679 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
void apr_pool_child_cleanup_set(
                        apr_pool_t *p, const void *data,
                        apr_status_t (*plain_cleanup)(void *),
                        apr_status_t (*child_cleanup)(void *))
                  __attribute__((nonnull(3,4)));
# 696 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_cleanup_run(apr_pool_t *p, void *data,
                                               apr_status_t (*cleanup)(void *))
                          __attribute__((nonnull(3)));
# 707 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
apr_status_t apr_pool_cleanup_null(void *data);







void apr_pool_cleanup_for_exec(void);
# 38 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h" 1
# 52 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
typedef struct apr_hash_t apr_hash_t;




typedef struct apr_hash_index_t apr_hash_index_t;







typedef unsigned int (*apr_hashfunc_t)(const char *key, apr_ssize_t *klen);




unsigned int apr_hashfunc_default(const char *key,
                                                      apr_ssize_t *klen);






apr_hash_t * apr_hash_make(apr_pool_t *pool);







apr_hash_t * apr_hash_make_custom(apr_pool_t *pool,
                                               apr_hashfunc_t hash_func);
# 96 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
apr_hash_t * apr_hash_copy(apr_pool_t *pool,
                                        const apr_hash_t *h);
# 107 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
void apr_hash_set(apr_hash_t *ht, const void *key,
                               apr_ssize_t klen, const void *val);
# 117 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
void * apr_hash_get(apr_hash_t *ht, const void *key,
                                 apr_ssize_t klen);
# 147 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
apr_hash_index_t * apr_hash_first(apr_pool_t *p, apr_hash_t *ht);







apr_hash_index_t * apr_hash_next(apr_hash_index_t *hi);
# 166 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
void apr_hash_this(apr_hash_index_t *hi, const void **key,
                                apr_ssize_t *klen, void **val);






const void* apr_hash_this_key(apr_hash_index_t *hi);






apr_ssize_t apr_hash_this_key_len(apr_hash_index_t *hi);






void* apr_hash_this_val(apr_hash_index_t *hi);






unsigned int apr_hash_count(apr_hash_t *ht);





void apr_hash_clear(apr_hash_t *ht);
# 212 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
apr_hash_t * apr_hash_overlay(apr_pool_t *p,
                                           const apr_hash_t *overlay,
                                           const apr_hash_t *base);
# 230 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
apr_hash_t * apr_hash_merge(apr_pool_t *p,
                                         const apr_hash_t *h1,
                                         const apr_hash_t *h2,
                                         void * (*merger)(apr_pool_t *p,
                                                     const void *key,
                                                     apr_ssize_t klen,
                                                     const void *h1_val,
                                                     const void *h2_val,
                                                     const void *data),
                                         const void *data);
# 252 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
typedef int (apr_hash_do_callback_fn_t)(void *rec, const void *key,
                                                   apr_ssize_t klen,
                                                   const void *value);
# 268 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_hash.h"
int apr_hash_do(apr_hash_do_callback_fn_t *comp,
                             void *rec, const apr_hash_t *ht);




apr_pool_t * apr_hash_pool_get (const apr_hash_t *thehash);
# 39 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h" 1
# 56 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
typedef struct apr_table_t apr_table_t;


typedef struct apr_array_header_t apr_array_header_t;


struct apr_array_header_t {

    apr_pool_t *pool;

    int elt_size;

    int nelts;

    int nalloc;

    char *elts;
};




typedef struct apr_table_entry_t apr_table_entry_t;


struct apr_table_entry_t {

    char *key;



    char *val;


    apr_uint32_t key_checksum;
};






const apr_array_header_t * apr_table_elts(const apr_table_t *t);






int apr_is_empty_table(const apr_table_t *t);






int apr_is_empty_array(const apr_array_header_t *a);
# 121 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_array_header_t * apr_array_make(apr_pool_t *p,
                                                 int nelts, int elt_size);
# 131 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void * apr_array_push(apr_array_header_t *arr);
# 158 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void * apr_array_pop(apr_array_header_t *arr);







void apr_array_clear(apr_array_header_t *arr);







void apr_array_cat(apr_array_header_t *dst,
           const apr_array_header_t *src);
# 186 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_array_header_t * apr_array_copy(apr_pool_t *p,
                                      const apr_array_header_t *arr);
# 196 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_array_header_t * apr_array_copy_hdr(apr_pool_t *p,
                                      const apr_array_header_t *arr);
# 206 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_array_header_t * apr_array_append(apr_pool_t *p,
                                      const apr_array_header_t *first,
                                      const apr_array_header_t *second);
# 221 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
char * apr_array_pstrcat(apr_pool_t *p,
          const apr_array_header_t *arr,
          const char sep);
# 232 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_table_t * apr_table_make(apr_pool_t *p, int nelts);
# 241 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_table_t * apr_table_copy(apr_pool_t *p,
                                          const apr_table_t *t);
# 252 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_table_t * apr_table_clone(apr_pool_t *p,
                                           const apr_table_t *t);





void apr_table_clear(apr_table_t *t);
# 268 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
const char * apr_table_get(const apr_table_t *t, const char *key);
# 279 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
const char * apr_table_getm(apr_pool_t *p, const apr_table_t *t,
                                         const char *key);
# 291 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_set(apr_table_t *t, const char *key,
                                const char *val);
# 304 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_setn(apr_table_t *t, const char *key,
                                 const char *val);






void apr_table_unset(apr_table_t *t, const char *key);
# 323 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_merge(apr_table_t *t, const char *key,
                                  const char *val);
# 335 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_mergen(apr_table_t *t, const char *key,
                                   const char *val);
# 347 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_add(apr_table_t *t, const char *key,
                                const char *val);
# 360 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_addn(apr_table_t *t, const char *key,
                                 const char *val);
# 370 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
apr_table_t * apr_table_overlay(apr_pool_t *p,
                                             const apr_table_t *overlay,
                                             const apr_table_t *base);
# 384 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
typedef int (apr_table_do_callback_fn_t)(void *rec, const char *key,
                                                    const char *value);
# 406 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
int apr_table_do(apr_table_do_callback_fn_t *comp,
                                     void *rec, const apr_table_t *t, ...)

    __attribute__((sentinel))

    ;
# 432 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
int apr_table_vdo(apr_table_do_callback_fn_t *comp,
                               void *rec, const apr_table_t *t, va_list vp);
# 478 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_overlap(apr_table_t *a, const apr_table_t *b,
                                     unsigned flags);
# 491 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
void apr_table_compress(apr_table_t *t, unsigned flags);
# 40 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h" 1
# 40 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
                 extern const char apr_month_snames[12][4];

                 extern const char apr_day_snames[7][4];



typedef apr_int64_t apr_time_t;
# 56 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
typedef apr_int64_t apr_interval_time_t;

typedef apr_int32_t apr_short_interval_time_t;
# 88 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
apr_time_t apr_time_now(void);


typedef struct apr_time_exp_t apr_time_exp_t;






struct apr_time_exp_t {

    apr_int32_t tm_usec;

    apr_int32_t tm_sec;

    apr_int32_t tm_min;

    apr_int32_t tm_hour;

    apr_int32_t tm_mday;

    apr_int32_t tm_mon;

    apr_int32_t tm_year;

    apr_int32_t tm_wday;

    apr_int32_t tm_yday;

    apr_int32_t tm_isdst;

    apr_int32_t tm_gmtoff;
};






apr_status_t apr_time_ansi_put(apr_time_t *result,
                                                    time_t input);
# 138 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
apr_status_t apr_time_exp_tz(apr_time_exp_t *result,
                                          apr_time_t input,
                                          apr_int32_t offs);






apr_status_t apr_time_exp_gmt(apr_time_exp_t *result,
                                           apr_time_t input);






apr_status_t apr_time_exp_lt(apr_time_exp_t *result,
                                          apr_time_t input);







apr_status_t apr_time_exp_get(apr_time_t *result,
                                           apr_time_exp_t *input);







apr_status_t apr_time_exp_gmt_get(apr_time_t *result,
                                               apr_time_exp_t *input);






void apr_sleep(apr_interval_time_t t);
# 193 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
apr_status_t apr_rfc822_date(char *date_str, apr_time_t t);
# 207 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
apr_status_t apr_ctime(char *date_str, apr_time_t t);
# 217 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_time.h"
apr_status_t apr_strftime(char *s, apr_size_t *retsize,
                                       apr_size_t max, const char *format,
                                       apr_time_exp_t *tm);







void apr_time_clock_hires(apr_pool_t *p);
# 41 "./subversion/include/svn_types.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h" 1
# 52 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 53 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h" 2
# 76 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
int apr_strnatcmp(char const *a, char const *b);
# 87 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
int apr_strnatcasecmp(char const *a, char const *b);







char * apr_pstrdup(apr_pool_t *p, const char *s);
# 109 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_pstrmemdup(apr_pool_t *p, const char *s, apr_size_t n)



    ;
# 125 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_pstrndup(apr_pool_t *p, const char *s, apr_size_t n);
# 135 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
void * apr_pmemdup(apr_pool_t *p, const void *m, apr_size_t n)



    ;







char * apr_pstrcat(apr_pool_t *p, ...)

    __attribute__((sentinel))

    ;
# 161 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_pstrcatv(apr_pool_t *p, const struct iovec *vec,
                                 apr_size_t nvec, apr_size_t *nbytes);
# 172 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_pvsprintf(apr_pool_t *p, const char *fmt, va_list ap);
# 182 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_psprintf(apr_pool_t *p, const char *fmt, ...)
        __attribute__((format(printf,2,3)));
# 207 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_cpystrn(char *dst, const char *src,
                                apr_size_t dst_size);
# 217 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_collapse_spaces(char *dest, const char *src);
# 226 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
apr_status_t apr_tokenize_to_argv(const char *arg_str,
                                               char ***argv_out,
                                               apr_pool_t *token_context);
# 247 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_strtok(char *str, const char *sep, char **last);
# 279 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
int apr_snprintf(char *buf, apr_size_t len,
                                     const char *format, ...)
        __attribute__((format(printf,3,4)));
# 291 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
int apr_vsnprintf(char *buf, apr_size_t len, const char *format,
                               va_list ap);
# 301 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_itoa(apr_pool_t *p, int n);







char * apr_ltoa(apr_pool_t *p, long n);







char * apr_off_t_toa(apr_pool_t *p, apr_off_t n);
# 335 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
apr_status_t apr_strtoff(apr_off_t *offset, const char *buf,
                                      char **end, int base);
# 353 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
apr_int64_t apr_strtoi64(const char *buf, char **end, int base);
# 362 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
apr_int64_t apr_atoi64(const char *buf);
# 372 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_strings.h"
char * apr_strfsize(apr_off_t size, char *buf);
# 42 "./subversion/include/svn_types.h" 2
# 139 "./subversion/include/svn_types.h"
typedef int svn_boolean_t;
# 157 "./subversion/include/svn_types.h"
struct svn_null_pointer_constant_stdarg_sentinel_t;
# 173 "./subversion/include/svn_types.h"
typedef struct svn_error_t
{



  apr_status_t apr_err;
# 191 "./subversion/include/svn_types.h"
  const char *message;





  struct svn_error_t *child;





  apr_pool_t *pool;




  const char *file;




  long line;

} svn_error_t;





typedef struct svn_version_t svn_version_t;
# 302 "./subversion/include/svn_types.h"
typedef enum svn_node_kind_t
{

  svn_node_none,


  svn_node_file,


  svn_node_dir,


  svn_node_unknown,






  svn_node_symlink
} svn_node_kind_t;
# 331 "./subversion/include/svn_types.h"
const char *
svn_node_kind_to_word(svn_node_kind_t kind);







svn_node_kind_t
svn_node_kind_from_word(const char *word);
# 352 "./subversion/include/svn_types.h"
typedef enum svn_tristate_t
{

  svn_tristate_false = 2,

  svn_tristate_true,

  svn_tristate_unknown
} svn_tristate_t;






const char *
svn_tristate__to_word(svn_tristate_t tristate);







svn_tristate_t
svn_tristate__from_word(const char * word);
# 421 "./subversion/include/svn_types.h"
typedef long int svn_revnum_t;
# 449 "./subversion/include/svn_types.h"
svn_error_t *
svn_revnum_parse(svn_revnum_t *rev,
                 const char *str,
                 const char **endptr);
# 468 "./subversion/include/svn_types.h"
typedef apr_int64_t svn_filesize_t;
# 486 "./subversion/include/svn_types.h"
enum svn_recurse_kind
{
  svn_nonrecursive = 1,
  svn_recursive
};
# 499 "./subversion/include/svn_types.h"
typedef enum svn_depth_t
{







  svn_depth_unknown = -2,
# 519 "./subversion/include/svn_types.h"
  svn_depth_exclude = -1,



  svn_depth_empty = 0,



  svn_depth_files = 1,




  svn_depth_immediates = 2,





  svn_depth_infinity = 3

} svn_depth_t;







const char *
svn_depth_to_word(svn_depth_t depth);







svn_depth_t
svn_depth_from_word(const char *word);
# 645 "./subversion/include/svn_types.h"
typedef struct svn_dirent_t
{

  svn_node_kind_t kind;


  svn_filesize_t size;


  svn_boolean_t has_props;


  svn_revnum_t created_rev;


  apr_time_t time;


  const char *last_author;


} svn_dirent_t;





svn_dirent_t *
svn_dirent_dup(const svn_dirent_t *dirent,
               apr_pool_t *pool);







svn_dirent_t *
svn_dirent_create(apr_pool_t *result_pool);
# 771 "./subversion/include/svn_types.h"
typedef struct svn_commit_info_t
{

  svn_revnum_t revision;


  const char *date;


  const char *author;


  const char *post_commit_err;



  const char *repos_root;

} svn_commit_info_t;
# 805 "./subversion/include/svn_types.h"
svn_commit_info_t *
svn_create_commit_info(apr_pool_t *pool);






svn_commit_info_t *
svn_commit_info_dup(const svn_commit_info_t *src_commit_info,
                    apr_pool_t *pool);
# 828 "./subversion/include/svn_types.h"
typedef struct svn_log_changed_path2_t
{

  char action;


  const char *copyfrom_path;


  svn_revnum_t copyfrom_rev;


  svn_node_kind_t node_kind;



  svn_tristate_t text_modified;



  svn_tristate_t props_modified;




} svn_log_changed_path2_t;
# 865 "./subversion/include/svn_types.h"
svn_log_changed_path2_t *
svn_log_changed_path2_create(apr_pool_t *pool);






svn_log_changed_path2_t *
svn_log_changed_path2_dup(const svn_log_changed_path2_t *changed_path,
                          apr_pool_t *pool);







typedef struct svn_log_changed_path_t
{

  char action;


  const char *copyfrom_path;


  svn_revnum_t copyfrom_rev;

} svn_log_changed_path_t;







__attribute__((deprecated))
svn_log_changed_path_t *
svn_log_changed_path_dup(const svn_log_changed_path_t *changed_path,
                         apr_pool_t *pool);
# 915 "./subversion/include/svn_types.h"
typedef struct svn_log_entry_t
{
# 925 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths;


  svn_revnum_t revision;




  apr_hash_t *revprops;
# 951 "./subversion/include/svn_types.h"
  svn_boolean_t has_children;
# 968 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths2;
# 980 "./subversion/include/svn_types.h"
  svn_boolean_t non_inheritable;






  svn_boolean_t subtractive_merge;




} svn_log_entry_t;
# 1003 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_create(apr_pool_t *pool);
# 1014 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_dup(const svn_log_entry_t *log_entry, apr_pool_t *pool);
# 1049 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_log_entry_receiver_t)(
  void *baton,
  svn_log_entry_t *log_entry,
  apr_pool_t *pool);







typedef svn_error_t *(*svn_log_message_receiver_t)(
  void *baton,
  apr_hash_t *changed_paths,
  svn_revnum_t revision,
  const char *author,
  const char *date,
  const char *message,
  apr_pool_t *pool);
# 1078 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_commit_callback2_t)(
  const svn_commit_info_t *commit_info,
  void *baton,
  apr_pool_t *pool);






typedef svn_error_t *(*svn_commit_callback_t)(
  svn_revnum_t new_revision,
  const char *date,
  const char *author,
  void *baton);
# 1143 "./subversion/include/svn_types.h"
svn_error_t *
svn_mime_type_validate(const char *mime_type,
                       apr_pool_t *pool);






svn_boolean_t
svn_mime_type_is_binary(const char *mime_type);
# 1162 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_cancel_func_t)(void *cancel_baton);
# 1185 "./subversion/include/svn_types.h"
typedef struct svn_lock_t
{
  const char *path;
  const char *token;
  const char *owner;
  const char *comment;
  svn_boolean_t is_dav_comment;
  apr_time_t creation_date;
  apr_time_t expiration_date;

} svn_lock_t;
# 1206 "./subversion/include/svn_types.h"
svn_lock_t *
svn_lock_create(apr_pool_t *pool);






svn_lock_t *
svn_lock_dup(const svn_lock_t *lock, apr_pool_t *pool);
# 1224 "./subversion/include/svn_types.h"
const char *
svn_uuid_generate(apr_pool_t *pool);
# 1234 "./subversion/include/svn_types.h"
typedef struct svn_merge_range_t
{







  svn_revnum_t start;
  svn_revnum_t end;




  svn_boolean_t inheritable;
} svn_merge_range_t;






svn_merge_range_t *
svn_merge_range_dup(const svn_merge_range_t *range, apr_pool_t *pool);







svn_boolean_t
svn_merge_range_contains_rev(const svn_merge_range_t *range, svn_revnum_t rev);
# 1281 "./subversion/include/svn_types.h"
typedef struct svn_location_segment_t
{


  svn_revnum_t range_start;
  svn_revnum_t range_end;



  const char *path;

} svn_location_segment_t;







typedef svn_error_t *(*svn_location_segment_receiver_t)(
  svn_location_segment_t *segment,
  void *baton,
  apr_pool_t *pool);






svn_location_segment_t *
svn_location_segment_dup(const svn_location_segment_t *segment,
                         apr_pool_t *pool);
# 1322 "./subversion/include/svn_types.h"
typedef unsigned long svn_linenum_t;
# 1348 "./subversion/include/svn_types.h"
# 1 "./subversion/include/svn_error.h" 1
# 37 "./subversion/include/svn_error.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 74 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 33 "/usr/include/stdio.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
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
# 32 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ ));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 110 "/usr/include/stdio.h" 3 4
typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 297 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ )) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
          ;
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 818 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);







# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 935 "/usr/include/stdio.h" 2 3 4
# 75 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 2
# 38 "./subversion/include/svn_error.h" 2

# 1 "./subversion/include/svn_types.h" 1
# 40 "./subversion/include/svn_error.h" 2
# 58 "./subversion/include/svn_error.h"
# 1 "./subversion/include/svn_error_codes.h" 1
# 158 "./subversion/include/svn_error_codes.h"
typedef enum svn_errno_t { SVN_WARNING = ((20000 + 50000) + 50000) + 1,



  SVN_ERR_BAD_CONTAINING_POOL = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 0,



  SVN_ERR_BAD_FILENAME = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 1,



  SVN_ERR_BAD_URL = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 2,



  SVN_ERR_BAD_DATE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 3,



  SVN_ERR_BAD_MIME_TYPE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 4,
# 188 "./subversion/include/svn_error_codes.h"
  SVN_ERR_BAD_PROPERTY_VALUE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 5,



  SVN_ERR_BAD_VERSION_FILE_FORMAT = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 6,



  SVN_ERR_BAD_RELATIVE_PATH = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 7,



  SVN_ERR_BAD_UUID = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 8,




  SVN_ERR_BAD_CONFIG_VALUE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 9,



  SVN_ERR_BAD_SERVER_SPECIFICATION = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 10,



  SVN_ERR_BAD_CHECKSUM_KIND = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 11,



  SVN_ERR_BAD_CHECKSUM_PARSE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 12,




  SVN_ERR_BAD_TOKEN = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 13,




  SVN_ERR_BAD_CHANGELIST_NAME = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 14,




  SVN_ERR_BAD_ATOMIC = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 15,




  SVN_ERR_BAD_COMPRESSION_METHOD = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 16,





  SVN_ERR_XML_ATTRIB_NOT_FOUND = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 0,



  SVN_ERR_XML_MISSING_ANCESTRY = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 1,



  SVN_ERR_XML_UNKNOWN_ENCODING = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 2,



  SVN_ERR_XML_MALFORMED = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 3,



  SVN_ERR_XML_UNESCAPABLE_DATA = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 4,




  SVN_ERR_XML_UNEXPECTED_ELEMENT = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 5,





  SVN_ERR_IO_INCONSISTENT_EOL = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 0,



  SVN_ERR_IO_UNKNOWN_EOL = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 1,




  SVN_ERR_IO_CORRUPT_EOL = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 2,



  SVN_ERR_IO_UNIQUE_NAMES_EXHAUSTED = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 3,




  SVN_ERR_IO_PIPE_FRAME_ERROR = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 4,




  SVN_ERR_IO_PIPE_READ_ERROR = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 5,



  SVN_ERR_IO_WRITE_ERROR = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 6,




  SVN_ERR_IO_PIPE_WRITE_ERROR = (((20000 + 50000) + 50000) + ( 3 * 5000)) + 7,





  SVN_ERR_STREAM_UNEXPECTED_EOF = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 0,



  SVN_ERR_STREAM_MALFORMED_DATA = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 1,



  SVN_ERR_STREAM_UNRECOGNIZED_DATA = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 2,




  SVN_ERR_STREAM_SEEK_NOT_SUPPORTED = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 3,




  SVN_ERR_STREAM_NOT_SUPPORTED = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 4,





  SVN_ERR_NODE_UNKNOWN_KIND = (((20000 + 50000) + 50000) + ( 5 * 5000)) + 0,



  SVN_ERR_NODE_UNEXPECTED_KIND = (((20000 + 50000) + 50000) + ( 5 * 5000)) + 1,





  SVN_ERR_ENTRY_NOT_FOUND = (((20000 + 50000) + 50000) + ( 6 * 5000)) + 0,





  SVN_ERR_ENTRY_EXISTS = (((20000 + 50000) + 50000) + ( 6 * 5000)) + 2,



  SVN_ERR_ENTRY_MISSING_REVISION = (((20000 + 50000) + 50000) + ( 6 * 5000)) + 3,



  SVN_ERR_ENTRY_MISSING_URL = (((20000 + 50000) + 50000) + ( 6 * 5000)) + 4,



  SVN_ERR_ENTRY_ATTRIBUTE_INVALID = (((20000 + 50000) + 50000) + ( 6 * 5000)) + 5,



  SVN_ERR_ENTRY_FORBIDDEN = (((20000 + 50000) + 50000) + ( 6 * 5000)) + 6,





  SVN_ERR_WC_OBSTRUCTED_UPDATE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 0,




  SVN_ERR_WC_UNWIND_MISMATCH = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 1,




  SVN_ERR_WC_UNWIND_EMPTY = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 2,




  SVN_ERR_WC_UNWIND_NOT_EMPTY = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 3,



  SVN_ERR_WC_LOCKED = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 4,



  SVN_ERR_WC_NOT_LOCKED = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 5,




  SVN_ERR_WC_INVALID_LOCK = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 6,





  SVN_ERR_WC_NOT_WORKING_COPY = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 7,





  SVN_ERR_WC_NOT_DIRECTORY = SVN_ERR_WC_NOT_WORKING_COPY,



  SVN_ERR_WC_NOT_FILE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 8,



  SVN_ERR_WC_BAD_ADM_LOG = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 9,



  SVN_ERR_WC_PATH_NOT_FOUND = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 10,



  SVN_ERR_WC_NOT_UP_TO_DATE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 11,



  SVN_ERR_WC_LEFT_LOCAL_MOD = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 12,



  SVN_ERR_WC_SCHEDULE_CONFLICT = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 13,



  SVN_ERR_WC_PATH_FOUND = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 14,



  SVN_ERR_WC_FOUND_CONFLICT = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 15,



  SVN_ERR_WC_CORRUPT = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 16,



  SVN_ERR_WC_CORRUPT_TEXT_BASE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 17,



  SVN_ERR_WC_NODE_KIND_CHANGE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 18,



  SVN_ERR_WC_INVALID_OP_ON_CWD = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 19,



  SVN_ERR_WC_BAD_ADM_LOG_START = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 20,



  SVN_ERR_WC_UNSUPPORTED_FORMAT = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 21,



  SVN_ERR_WC_BAD_PATH = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 22,




  SVN_ERR_WC_INVALID_SCHEDULE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 23,




  SVN_ERR_WC_INVALID_RELOCATION = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 24,




  SVN_ERR_WC_INVALID_SWITCH = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 25,




  SVN_ERR_WC_MISMATCHED_CHANGELIST = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 26,




  SVN_ERR_WC_CONFLICT_RESOLVER_FAILURE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 27,



  SVN_ERR_WC_COPYFROM_PATH_NOT_FOUND = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 28,







  SVN_ERR_WC_CHANGELIST_MOVE = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 29,




  SVN_ERR_WC_CANNOT_DELETE_FILE_EXTERNAL = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 30,




  SVN_ERR_WC_CANNOT_MOVE_FILE_EXTERNAL = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 31,




  SVN_ERR_WC_DB_ERROR = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 32,




  SVN_ERR_WC_MISSING = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 33,




  SVN_ERR_WC_NOT_SYMLINK = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 34,




  SVN_ERR_WC_PATH_UNEXPECTED_STATUS = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 35,




  SVN_ERR_WC_UPGRADE_REQUIRED = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 36,




  SVN_ERR_WC_CLEANUP_REQUIRED = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 37,





  SVN_ERR_WC_INVALID_OPERATION_DEPTH = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 38,




  SVN_ERR_WC_PATH_ACCESS_DENIED = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 39,




  SVN_ERR_WC_MIXED_REVISIONS = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 40,




  SVN_ERR_WC_DUPLICATE_EXTERNALS_TARGET = (((20000 + 50000) + 50000) + ( 7 * 5000)) + 41,





  SVN_ERR_FS_GENERAL = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 0,



  SVN_ERR_FS_CLEANUP = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 1,



  SVN_ERR_FS_ALREADY_OPEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 2,



  SVN_ERR_FS_NOT_OPEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 3,



  SVN_ERR_FS_CORRUPT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 4,



  SVN_ERR_FS_PATH_SYNTAX = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 5,



  SVN_ERR_FS_NO_SUCH_REVISION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 6,



  SVN_ERR_FS_NO_SUCH_TRANSACTION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 7,



  SVN_ERR_FS_NO_SUCH_ENTRY = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 8,



  SVN_ERR_FS_NO_SUCH_REPRESENTATION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 9,



  SVN_ERR_FS_NO_SUCH_STRING = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 10,



  SVN_ERR_FS_NO_SUCH_COPY = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 11,



  SVN_ERR_FS_TRANSACTION_NOT_MUTABLE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 12,



  SVN_ERR_FS_NOT_FOUND = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 13,



  SVN_ERR_FS_ID_NOT_FOUND = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 14,



  SVN_ERR_FS_NOT_ID = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 15,



  SVN_ERR_FS_NOT_DIRECTORY = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 16,



  SVN_ERR_FS_NOT_FILE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 17,



  SVN_ERR_FS_NOT_SINGLE_PATH_COMPONENT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 18,



  SVN_ERR_FS_NOT_MUTABLE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 19,



  SVN_ERR_FS_ALREADY_EXISTS = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 20,



  SVN_ERR_FS_ROOT_DIR = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 21,



  SVN_ERR_FS_NOT_TXN_ROOT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 22,



  SVN_ERR_FS_NOT_REVISION_ROOT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 23,



  SVN_ERR_FS_CONFLICT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 24,



  SVN_ERR_FS_REP_CHANGED = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 25,



  SVN_ERR_FS_REP_NOT_MUTABLE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 26,



  SVN_ERR_FS_MALFORMED_SKEL = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 27,



  SVN_ERR_FS_TXN_OUT_OF_DATE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 28,



  SVN_ERR_FS_BERKELEY_DB = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 29,



  SVN_ERR_FS_BERKELEY_DB_DEADLOCK = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 30,



  SVN_ERR_FS_TRANSACTION_DEAD = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 31,



  SVN_ERR_FS_TRANSACTION_NOT_DEAD = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 32,




  SVN_ERR_FS_UNKNOWN_FS_TYPE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 33,




  SVN_ERR_FS_NO_USER = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 34,




  SVN_ERR_FS_PATH_ALREADY_LOCKED = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 35,




  SVN_ERR_FS_PATH_NOT_LOCKED = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 36,




  SVN_ERR_FS_BAD_LOCK_TOKEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 37,




  SVN_ERR_FS_NO_LOCK_TOKEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 38,




  SVN_ERR_FS_LOCK_OWNER_MISMATCH = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 39,




  SVN_ERR_FS_NO_SUCH_LOCK = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 40,




  SVN_ERR_FS_LOCK_EXPIRED = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 41,




  SVN_ERR_FS_OUT_OF_DATE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 42,
# 764 "./subversion/include/svn_error_codes.h"
  SVN_ERR_FS_UNSUPPORTED_FORMAT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 43,




  SVN_ERR_FS_REP_BEING_WRITTEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 44,




  SVN_ERR_FS_TXN_NAME_TOO_LONG = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 45,




  SVN_ERR_FS_NO_SUCH_NODE_ORIGIN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 46,




  SVN_ERR_FS_UNSUPPORTED_UPGRADE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 47,




  SVN_ERR_FS_NO_SUCH_CHECKSUM_REP = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 48,




  SVN_ERR_FS_PROP_BASEVALUE_MISMATCH = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 49,





  SVN_ERR_FS_INCORRECT_EDITOR_COMPLETION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 50,




  SVN_ERR_FS_PACKED_REVPROP_READ_FAILURE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 51,




  SVN_ERR_FS_REVPROP_CACHE_INIT_FAILURE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 52,




  SVN_ERR_FS_MALFORMED_TXN_ID = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 53,




  SVN_ERR_FS_INDEX_CORRUPTION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 54,




  SVN_ERR_FS_INDEX_REVISION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 55,




  SVN_ERR_FS_INDEX_OVERFLOW = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 56,




  SVN_ERR_FS_CONTAINER_INDEX = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 57,




  SVN_ERR_FS_INDEX_INCONSISTENT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 58,




  SVN_ERR_FS_LOCK_OPERATION_FAILED = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 59,




  SVN_ERR_FS_UNSUPPORTED_TYPE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 60,




  SVN_ERR_FS_CONTAINER_SIZE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 61,




  SVN_ERR_FS_MALFORMED_NODEREV_ID = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 62,




  SVN_ERR_FS_INVALID_GENERATION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 63,





  SVN_ERR_REPOS_LOCKED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 0,



  SVN_ERR_REPOS_HOOK_FAILURE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 1,



  SVN_ERR_REPOS_BAD_ARGS = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 2,



  SVN_ERR_REPOS_NO_DATA_FOR_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 3,



  SVN_ERR_REPOS_BAD_REVISION_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 4,
# 896 "./subversion/include/svn_error_codes.h"
  SVN_ERR_REPOS_UNSUPPORTED_VERSION = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 5,



  SVN_ERR_REPOS_DISABLED_FEATURE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 6,



  SVN_ERR_REPOS_POST_COMMIT_HOOK_FAILED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 7,




  SVN_ERR_REPOS_POST_LOCK_HOOK_FAILED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 8,




  SVN_ERR_REPOS_POST_UNLOCK_HOOK_FAILED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 9,




  SVN_ERR_REPOS_UNSUPPORTED_UPGRADE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 10,




  SVN_ERR_REPOS_CORRUPTED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 11,





  SVN_ERR_RA_ILLEGAL_URL = (((20000 + 50000) + 50000) + (10 * 5000)) + 0,



  SVN_ERR_RA_NOT_AUTHORIZED = (((20000 + 50000) + 50000) + (10 * 5000)) + 1,



  SVN_ERR_RA_UNKNOWN_AUTH = (((20000 + 50000) + 50000) + (10 * 5000)) + 2,



  SVN_ERR_RA_NOT_IMPLEMENTED = (((20000 + 50000) + 50000) + (10 * 5000)) + 3,



  SVN_ERR_RA_OUT_OF_DATE = (((20000 + 50000) + 50000) + (10 * 5000)) + 4,



  SVN_ERR_RA_NO_REPOS_UUID = (((20000 + 50000) + 50000) + (10 * 5000)) + 5,



  SVN_ERR_RA_UNSUPPORTED_ABI_VERSION = (((20000 + 50000) + 50000) + (10 * 5000)) + 6,




  SVN_ERR_RA_NOT_LOCKED = (((20000 + 50000) + 50000) + (10 * 5000)) + 7,




  SVN_ERR_RA_PARTIAL_REPLAY_NOT_SUPPORTED = (((20000 + 50000) + 50000) + (10 * 5000)) + 8,




  SVN_ERR_RA_UUID_MISMATCH = (((20000 + 50000) + 50000) + (10 * 5000)) + 9,




  SVN_ERR_RA_REPOS_ROOT_URL_MISMATCH = (((20000 + 50000) + 50000) + (10 * 5000)) + 10,




  SVN_ERR_RA_SESSION_URL_MISMATCH = (((20000 + 50000) + 50000) + (10 * 5000)) + 11,




  SVN_ERR_RA_CANNOT_CREATE_TUNNEL = (((20000 + 50000) + 50000) + (10 * 5000)) + 12,




  SVN_ERR_RA_CANNOT_CREATE_SESSION = (((20000 + 50000) + 50000) + (10 * 5000)) + 13,





  SVN_ERR_RA_DAV_SOCK_INIT = (((20000 + 50000) + 50000) + (11 * 5000)) + 0,



  SVN_ERR_RA_DAV_CREATING_REQUEST = (((20000 + 50000) + 50000) + (11 * 5000)) + 1,



  SVN_ERR_RA_DAV_REQUEST_FAILED = (((20000 + 50000) + 50000) + (11 * 5000)) + 2,



  SVN_ERR_RA_DAV_OPTIONS_REQ_FAILED = (((20000 + 50000) + 50000) + (11 * 5000)) + 3,



  SVN_ERR_RA_DAV_PROPS_NOT_FOUND = (((20000 + 50000) + 50000) + (11 * 5000)) + 4,



  SVN_ERR_RA_DAV_ALREADY_EXISTS = (((20000 + 50000) + 50000) + (11 * 5000)) + 5,






  SVN_ERR_RA_DAV_INVALID_CONFIG_VALUE = (((20000 + 50000) + 50000) + (11 * 5000)) + 6,






  SVN_ERR_RA_DAV_PATH_NOT_FOUND = (((20000 + 50000) + 50000) + (11 * 5000)) + 7,



  SVN_ERR_RA_DAV_PROPPATCH_FAILED = (((20000 + 50000) + 50000) + (11 * 5000)) + 8,




  SVN_ERR_RA_DAV_MALFORMED_DATA = (((20000 + 50000) + 50000) + (11 * 5000)) + 9,




  SVN_ERR_RA_DAV_RESPONSE_HEADER_BADNESS = (((20000 + 50000) + 50000) + (11 * 5000)) + 10,




  SVN_ERR_RA_DAV_RELOCATED = (((20000 + 50000) + 50000) + (11 * 5000)) + 11,




  SVN_ERR_RA_DAV_CONN_TIMEOUT = (((20000 + 50000) + 50000) + (11 * 5000)) + 12,




  SVN_ERR_RA_DAV_FORBIDDEN = (((20000 + 50000) + 50000) + (11 * 5000)) + 13,




  SVN_ERR_RA_DAV_PRECONDITION_FAILED = (((20000 + 50000) + 50000) + (11 * 5000)) + 14,





  SVN_ERR_RA_LOCAL_REPOS_NOT_FOUND = (((20000 + 50000) + 50000) + (12 * 5000)) + 0,



  SVN_ERR_RA_LOCAL_REPOS_OPEN_FAILED = (((20000 + 50000) + 50000) + (12 * 5000)) + 1,





  SVN_ERR_SVNDIFF_INVALID_HEADER = (((20000 + 50000) + 50000) + (13 * 5000)) + 0,



  SVN_ERR_SVNDIFF_CORRUPT_WINDOW = (((20000 + 50000) + 50000) + (13 * 5000)) + 1,



  SVN_ERR_SVNDIFF_BACKWARD_VIEW = (((20000 + 50000) + 50000) + (13 * 5000)) + 2,



  SVN_ERR_SVNDIFF_INVALID_OPS = (((20000 + 50000) + 50000) + (13 * 5000)) + 3,



  SVN_ERR_SVNDIFF_UNEXPECTED_END = (((20000 + 50000) + 50000) + (13 * 5000)) + 4,



  SVN_ERR_SVNDIFF_INVALID_COMPRESSED_DATA = (((20000 + 50000) + 50000) + (13 * 5000)) + 5,





  SVN_ERR_APMOD_MISSING_PATH_TO_FS = (((20000 + 50000) + 50000) + (14 * 5000)) + 0,



  SVN_ERR_APMOD_MALFORMED_URI = (((20000 + 50000) + 50000) + (14 * 5000)) + 1,



  SVN_ERR_APMOD_ACTIVITY_NOT_FOUND = (((20000 + 50000) + 50000) + (14 * 5000)) + 2,



  SVN_ERR_APMOD_BAD_BASELINE = (((20000 + 50000) + 50000) + (14 * 5000)) + 3,



  SVN_ERR_APMOD_CONNECTION_ABORTED = (((20000 + 50000) + 50000) + (14 * 5000)) + 4,





  SVN_ERR_CLIENT_VERSIONED_PATH_REQUIRED = (((20000 + 50000) + 50000) + (15 * 5000)) + 0,



  SVN_ERR_CLIENT_RA_ACCESS_REQUIRED = (((20000 + 50000) + 50000) + (15 * 5000)) + 1,



  SVN_ERR_CLIENT_BAD_REVISION = (((20000 + 50000) + 50000) + (15 * 5000)) + 2,



  SVN_ERR_CLIENT_DUPLICATE_COMMIT_URL = (((20000 + 50000) + 50000) + (15 * 5000)) + 3,



  SVN_ERR_CLIENT_IS_BINARY_FILE = (((20000 + 50000) + 50000) + (15 * 5000)) + 4,





  SVN_ERR_CLIENT_INVALID_EXTERNALS_DESCRIPTION = (((20000 + 50000) + 50000) + (15 * 5000)) + 5,



  SVN_ERR_CLIENT_MODIFIED = (((20000 + 50000) + 50000) + (15 * 5000)) + 6,



  SVN_ERR_CLIENT_IS_DIRECTORY = (((20000 + 50000) + 50000) + (15 * 5000)) + 7,



  SVN_ERR_CLIENT_REVISION_RANGE = (((20000 + 50000) + 50000) + (15 * 5000)) + 8,



  SVN_ERR_CLIENT_INVALID_RELOCATION = (((20000 + 50000) + 50000) + (15 * 5000)) + 9,



  SVN_ERR_CLIENT_REVISION_AUTHOR_CONTAINS_NEWLINE = (((20000 + 50000) + 50000) + (15 * 5000)) + 10,



  SVN_ERR_CLIENT_PROPERTY_NAME = (((20000 + 50000) + 50000) + (15 * 5000)) + 11,




  SVN_ERR_CLIENT_UNRELATED_RESOURCES = (((20000 + 50000) + 50000) + (15 * 5000)) + 12,




  SVN_ERR_CLIENT_MISSING_LOCK_TOKEN = (((20000 + 50000) + 50000) + (15 * 5000)) + 13,




  SVN_ERR_CLIENT_MULTIPLE_SOURCES_DISALLOWED = (((20000 + 50000) + 50000) + (15 * 5000)) + 14,




  SVN_ERR_CLIENT_NO_VERSIONED_PARENT = (((20000 + 50000) + 50000) + (15 * 5000)) + 15,




  SVN_ERR_CLIENT_NOT_READY_TO_MERGE = (((20000 + 50000) + 50000) + (15 * 5000)) + 16,




  SVN_ERR_CLIENT_FILE_EXTERNAL_OVERWRITE_VERSIONED = (((20000 + 50000) + 50000) + (15 * 5000)) + 17,




  SVN_ERR_CLIENT_PATCH_BAD_STRIP_COUNT = (((20000 + 50000) + 50000) + (15 * 5000)) + 18,




  SVN_ERR_CLIENT_CYCLE_DETECTED = (((20000 + 50000) + 50000) + (15 * 5000)) + 19,




  SVN_ERR_CLIENT_MERGE_UPDATE_REQUIRED = (((20000 + 50000) + 50000) + (15 * 5000)) + 20,




  SVN_ERR_CLIENT_INVALID_MERGEINFO_NO_MERGETRACKING = (((20000 + 50000) + 50000) + (15 * 5000)) + 21,




  SVN_ERR_CLIENT_NO_LOCK_TOKEN = (((20000 + 50000) + 50000) + (15 * 5000)) + 22,




  SVN_ERR_CLIENT_FORBIDDEN_BY_SERVER = (((20000 + 50000) + 50000) + (15 * 5000)) + 23,





  SVN_ERR_BASE = (((20000 + 50000) + 50000) + (16 * 5000)) + 0,



  SVN_ERR_PLUGIN_LOAD_FAILURE = (((20000 + 50000) + 50000) + (16 * 5000)) + 1,



  SVN_ERR_MALFORMED_FILE = (((20000 + 50000) + 50000) + (16 * 5000)) + 2,



  SVN_ERR_INCOMPLETE_DATA = (((20000 + 50000) + 50000) + (16 * 5000)) + 3,



  SVN_ERR_INCORRECT_PARAMS = (((20000 + 50000) + 50000) + (16 * 5000)) + 4,



  SVN_ERR_UNVERSIONED_RESOURCE = (((20000 + 50000) + 50000) + (16 * 5000)) + 5,



  SVN_ERR_TEST_FAILED = (((20000 + 50000) + 50000) + (16 * 5000)) + 6,



  SVN_ERR_UNSUPPORTED_FEATURE = (((20000 + 50000) + 50000) + (16 * 5000)) + 7,



  SVN_ERR_BAD_PROP_KIND = (((20000 + 50000) + 50000) + (16 * 5000)) + 8,



  SVN_ERR_ILLEGAL_TARGET = (((20000 + 50000) + 50000) + (16 * 5000)) + 9,



  SVN_ERR_DELTA_MD5_CHECKSUM_ABSENT = (((20000 + 50000) + 50000) + (16 * 5000)) + 10,



  SVN_ERR_DIR_NOT_EMPTY = (((20000 + 50000) + 50000) + (16 * 5000)) + 11,



  SVN_ERR_EXTERNAL_PROGRAM = (((20000 + 50000) + 50000) + (16 * 5000)) + 12,



  SVN_ERR_SWIG_PY_EXCEPTION_SET = (((20000 + 50000) + 50000) + (16 * 5000)) + 13,



  SVN_ERR_CHECKSUM_MISMATCH = (((20000 + 50000) + 50000) + (16 * 5000)) + 14,



  SVN_ERR_CANCELLED = (((20000 + 50000) + 50000) + (16 * 5000)) + 15,



  SVN_ERR_INVALID_DIFF_OPTION = (((20000 + 50000) + 50000) + (16 * 5000)) + 16,



  SVN_ERR_PROPERTY_NOT_FOUND = (((20000 + 50000) + 50000) + (16 * 5000)) + 17,



  SVN_ERR_NO_AUTH_FILE_PATH = (((20000 + 50000) + 50000) + (16 * 5000)) + 18,




  SVN_ERR_VERSION_MISMATCH = (((20000 + 50000) + 50000) + (16 * 5000)) + 19,




  SVN_ERR_MERGEINFO_PARSE_ERROR = (((20000 + 50000) + 50000) + (16 * 5000)) + 20,




  SVN_ERR_CEASE_INVOCATION = (((20000 + 50000) + 50000) + (16 * 5000)) + 21,




  SVN_ERR_REVNUM_PARSE_FAILURE = (((20000 + 50000) + 50000) + (16 * 5000)) + 22,




  SVN_ERR_ITER_BREAK = (((20000 + 50000) + 50000) + (16 * 5000)) + 23,




  SVN_ERR_UNKNOWN_CHANGELIST = (((20000 + 50000) + 50000) + (16 * 5000)) + 24,




  SVN_ERR_RESERVED_FILENAME_SPECIFIED = (((20000 + 50000) + 50000) + (16 * 5000)) + 25,




  SVN_ERR_UNKNOWN_CAPABILITY = (((20000 + 50000) + 50000) + (16 * 5000)) + 26,




  SVN_ERR_TEST_SKIPPED = (((20000 + 50000) + 50000) + (16 * 5000)) + 27,




  SVN_ERR_NO_APR_MEMCACHE = (((20000 + 50000) + 50000) + (16 * 5000)) + 28,




  SVN_ERR_ATOMIC_INIT_FAILURE = (((20000 + 50000) + 50000) + (16 * 5000)) + 29,




  SVN_ERR_SQLITE_ERROR = (((20000 + 50000) + 50000) + (16 * 5000)) + 30,




  SVN_ERR_SQLITE_READONLY = (((20000 + 50000) + 50000) + (16 * 5000)) + 31,






  SVN_ERR_SQLITE_UNSUPPORTED_SCHEMA = (((20000 + 50000) + 50000) + (16 * 5000)) + 32,




  SVN_ERR_SQLITE_BUSY = (((20000 + 50000) + 50000) + (16 * 5000)) + 33,




  SVN_ERR_SQLITE_RESETTING_FOR_ROLLBACK = (((20000 + 50000) + 50000) + (16 * 5000)) + 34,





  SVN_ERR_SQLITE_CONSTRAINT = (((20000 + 50000) + 50000) + (16 * 5000)) + 35,




  SVN_ERR_TOO_MANY_MEMCACHED_SERVERS = (((20000 + 50000) + 50000) + (16 * 5000)) + 36,




  SVN_ERR_MALFORMED_VERSION_STRING = (((20000 + 50000) + 50000) + (16 * 5000)) + 37,




  SVN_ERR_CORRUPTED_ATOMIC_STORAGE = (((20000 + 50000) + 50000) + (16 * 5000)) + 38,




  SVN_ERR_UTF8PROC_ERROR = (((20000 + 50000) + 50000) + (16 * 5000)) + 39,




  SVN_ERR_UTF8_GLOB = (((20000 + 50000) + 50000) + (16 * 5000)) + 40,




  SVN_ERR_CORRUPT_PACKED_DATA = (((20000 + 50000) + 50000) + (16 * 5000)) + 41,




  SVN_ERR_COMPOSED_ERROR = (((20000 + 50000) + 50000) + (16 * 5000)) + 42,




  SVN_ERR_INVALID_INPUT = (((20000 + 50000) + 50000) + (16 * 5000)) + 43,





  SVN_ERR_CL_ARG_PARSING_ERROR = (((20000 + 50000) + 50000) + (17 * 5000)) + 0,



  SVN_ERR_CL_INSUFFICIENT_ARGS = (((20000 + 50000) + 50000) + (17 * 5000)) + 1,



  SVN_ERR_CL_MUTUALLY_EXCLUSIVE_ARGS = (((20000 + 50000) + 50000) + (17 * 5000)) + 2,



  SVN_ERR_CL_ADM_DIR_RESERVED = (((20000 + 50000) + 50000) + (17 * 5000)) + 3,



  SVN_ERR_CL_LOG_MESSAGE_IS_VERSIONED_FILE = (((20000 + 50000) + 50000) + (17 * 5000)) + 4,



  SVN_ERR_CL_LOG_MESSAGE_IS_PATHNAME = (((20000 + 50000) + 50000) + (17 * 5000)) + 5,



  SVN_ERR_CL_COMMIT_IN_ADDED_DIR = (((20000 + 50000) + 50000) + (17 * 5000)) + 6,



  SVN_ERR_CL_NO_EXTERNAL_EDITOR = (((20000 + 50000) + 50000) + (17 * 5000)) + 7,



  SVN_ERR_CL_BAD_LOG_MESSAGE = (((20000 + 50000) + 50000) + (17 * 5000)) + 8,



  SVN_ERR_CL_UNNECESSARY_LOG_MESSAGE = (((20000 + 50000) + 50000) + (17 * 5000)) + 9,



  SVN_ERR_CL_NO_EXTERNAL_MERGE_TOOL = (((20000 + 50000) + 50000) + (17 * 5000)) + 10,



  SVN_ERR_CL_ERROR_PROCESSING_EXTERNALS = (((20000 + 50000) + 50000) + (17 * 5000)) + 11,





  SVN_ERR_RA_SVN_CMD_ERR = (((20000 + 50000) + 50000) + (18 * 5000)) + 0,



  SVN_ERR_RA_SVN_UNKNOWN_CMD = (((20000 + 50000) + 50000) + (18 * 5000)) + 1,



  SVN_ERR_RA_SVN_CONNECTION_CLOSED = (((20000 + 50000) + 50000) + (18 * 5000)) + 2,



  SVN_ERR_RA_SVN_IO_ERROR = (((20000 + 50000) + 50000) + (18 * 5000)) + 3,



  SVN_ERR_RA_SVN_MALFORMED_DATA = (((20000 + 50000) + 50000) + (18 * 5000)) + 4,



  SVN_ERR_RA_SVN_REPOS_NOT_FOUND = (((20000 + 50000) + 50000) + (18 * 5000)) + 5,



  SVN_ERR_RA_SVN_BAD_VERSION = (((20000 + 50000) + 50000) + (18 * 5000)) + 6,




  SVN_ERR_RA_SVN_NO_MECHANISMS = (((20000 + 50000) + 50000) + (18 * 5000)) + 7,




  SVN_ERR_RA_SVN_EDIT_ABORTED = (((20000 + 50000) + 50000) + (18 * 5000)) + 8,







  SVN_ERR_AUTHN_CREDS_UNAVAILABLE = (((20000 + 50000) + 50000) + (19 * 5000)) + 0,



  SVN_ERR_AUTHN_NO_PROVIDER = (((20000 + 50000) + 50000) + (19 * 5000)) + 1,



  SVN_ERR_AUTHN_PROVIDERS_EXHAUSTED = (((20000 + 50000) + 50000) + (19 * 5000)) + 2,



  SVN_ERR_AUTHN_CREDS_NOT_SAVED = (((20000 + 50000) + 50000) + (19 * 5000)) + 3,




  SVN_ERR_AUTHN_FAILED = (((20000 + 50000) + 50000) + (19 * 5000)) + 4,





  SVN_ERR_AUTHZ_ROOT_UNREADABLE = (((20000 + 50000) + 50000) + (20 * 5000)) + 0,




  SVN_ERR_AUTHZ_UNREADABLE = (((20000 + 50000) + 50000) + (20 * 5000)) + 1,




  SVN_ERR_AUTHZ_PARTIALLY_READABLE = (((20000 + 50000) + 50000) + (20 * 5000)) + 2,



  SVN_ERR_AUTHZ_INVALID_CONFIG = (((20000 + 50000) + 50000) + (20 * 5000)) + 3,




  SVN_ERR_AUTHZ_UNWRITABLE = (((20000 + 50000) + 50000) + (20 * 5000)) + 4,






  SVN_ERR_DIFF_DATASOURCE_MODIFIED = (((20000 + 50000) + 50000) + (21 * 5000)) + 0,





  SVN_ERR_RA_SERF_SSPI_INITIALISATION_FAILED = (((20000 + 50000) + 50000) + (22 * 5000)) + 0,



  SVN_ERR_RA_SERF_SSL_CERT_UNTRUSTED = (((20000 + 50000) + 50000) + (22 * 5000)) + 1,




  SVN_ERR_RA_SERF_GSSAPI_INITIALISATION_FAILED = (((20000 + 50000) + 50000) + (22 * 5000)) + 2,




  SVN_ERR_RA_SERF_WRAPPED_ERROR = (((20000 + 50000) + 50000) + (22 * 5000)) + 3,





  SVN_ERR_ASSERTION_FAIL = (((20000 + 50000) + 50000) + (23 * 5000)) + 0,



  SVN_ERR_ASSERTION_ONLY_TRACING_LINKS = (((20000 + 50000) + 50000) + (23 * 5000)) + 1,



SVN_ERR_LAST } svn_errno_t;
# 59 "./subversion/include/svn_error.h" 2




char *
svn_strerror(apr_status_t statcode,
             char *buf,
             apr_size_t bufsize);
# 95 "./subversion/include/svn_error.h"
const char *
svn_error_symbolic_name(apr_status_t statcode);
# 108 "./subversion/include/svn_error.h"
const char *svn_err_best_message(const svn_error_t *err,
                                 char *buf,
                                 apr_size_t bufsize);
# 138 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_create(apr_status_t apr_err,
                 svn_error_t *child,
                 const char *message);





svn_error_t *
svn_error_createf(apr_status_t apr_err,
                  svn_error_t *child,
                  const char *fmt,
                  ...)
  __attribute__ ((format(printf, 3, 4)));
# 162 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_wrap_apr(apr_status_t status,
                   const char *fmt,
                   ...)
       __attribute__((format(printf, 2, 3)));





svn_error_t *
svn_error_quick_wrap(svn_error_t *child,
                     const char *new_msg);
# 187 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_compose_create(svn_error_t *err1,
                         svn_error_t *err2);
# 199 "./subversion/include/svn_error.h"
void
svn_error_compose(svn_error_t *chain,
                  svn_error_t *new_err);
# 210 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_root_cause(svn_error_t *err);
# 221 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_find_cause(svn_error_t *err, apr_status_t apr_err);





svn_error_t *
svn_error_dup(const svn_error_t *err);
# 240 "./subversion/include/svn_error.h"
void
svn_error_clear(svn_error_t *error);
# 278 "./subversion/include/svn_error.h"
void
svn_handle_error2(svn_error_t *error,
                  FILE *stream,
                  svn_boolean_t fatal,
                  const char *prefix);





__attribute__((deprecated))
void
svn_handle_error(svn_error_t *error,
                 FILE *stream,
                 svn_boolean_t fatal);
# 305 "./subversion/include/svn_error.h"
void
svn_handle_warning2(FILE *stream,
                    const svn_error_t *error,
                    const char *prefix);





__attribute__((deprecated))
void
svn_handle_warning(FILE *stream,
                   svn_error_t *error);
# 381 "./subversion/include/svn_error.h"
svn_error_t *svn_error_purge_tracing(svn_error_t *err);
# 605 "./subversion/include/svn_error.h"
svn_error_t *
svn_error__malfunction(svn_boolean_t can_return,
                       const char *file,
                       int line,
                       const char *expr);
# 632 "./subversion/include/svn_error.h"
typedef svn_error_t *(*svn_error_malfunction_handler_t)
  (svn_boolean_t can_return, const char *file, int line, const char *expr);
# 646 "./subversion/include/svn_error.h"
svn_error_malfunction_handler_t
svn_error_set_malfunction_handler(svn_error_malfunction_handler_t func);



svn_error_malfunction_handler_t
svn_error_get_malfunction_handler(void);
# 662 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_raise_on_malfunction(svn_boolean_t can_return,
                               const char *file,
                               int line,
                               const char *expr);







svn_error_t *
svn_error_abort_on_malfunction(svn_boolean_t can_return,
                               const char *file,
                               int line,
                               const char *expr);
# 1349 "./subversion/include/svn_types.h" 2
# 34 "./subversion/include/svn_pools.h" 2
# 54 "./subversion/include/svn_pools.h"
apr_pool_t *
svn_pool_create_ex(apr_pool_t *parent_pool,
                   apr_allocator_t *allocator);


apr_pool_t *
svn_pool_create_ex_debug(apr_pool_t *parent_pool,
                         apr_allocator_t *allocator,
                         const char *file_line);
# 107 "./subversion/include/svn_pools.h"
apr_allocator_t *
svn_pool_create_allocator(svn_boolean_t thread_safe);
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2

# 1 "./subversion/include/svn_fs.h" 1
# 37 "./subversion/include/svn_fs.h"
# 1 "./subversion/include/svn_string.h" 1
# 96 "./subversion/include/svn_string.h"
typedef struct svn_string_t
{
  const char *data;
  apr_size_t len;
} svn_string_t;



typedef struct svn_stringbuf_t
{




  apr_pool_t *pool;


  char *data;


  apr_size_t len;


  apr_size_t blocksize;
} svn_stringbuf_t;
# 130 "./subversion/include/svn_string.h"
svn_string_t *
svn_string_create(const char *cstring, apr_pool_t *pool);





svn_string_t *
svn_string_create_empty(apr_pool_t *pool);







svn_string_t *
svn_string_ncreate(const char *bytes, apr_size_t size, apr_pool_t *pool);



svn_string_t *
svn_string_create_from_buf(const svn_stringbuf_t *strbuf, apr_pool_t *pool);




svn_string_t *
svn_string_createf(apr_pool_t *pool, const char *fmt, ...)
  __attribute__((format(printf, 2, 3)));





svn_string_t *
svn_string_createv(apr_pool_t *pool, const char *fmt, va_list ap)
  __attribute__((format(printf, 2, 0)));


svn_boolean_t
svn_string_isempty(const svn_string_t *str);


svn_string_t *
svn_string_dup(const svn_string_t *original_string, apr_pool_t *pool);


svn_boolean_t
svn_string_compare(const svn_string_t *str1, const svn_string_t *str2);




apr_size_t
svn_string_first_non_whitespace(const svn_string_t *str);




apr_size_t
svn_string_find_char_backward(const svn_string_t *str, char ch);
# 204 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create(const char *cstring, apr_pool_t *pool);







svn_stringbuf_t *
svn_stringbuf_ncreate(const char *bytes, apr_size_t size, apr_pool_t *pool);





svn_stringbuf_t *
svn_stringbuf_create_empty(apr_pool_t *pool);
# 231 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create_ensure(apr_size_t minimum_size, apr_pool_t *pool);



svn_stringbuf_t *
svn_stringbuf_create_from_string(const svn_string_t *str, apr_pool_t *pool);







svn_stringbuf_t *
svn_stringbuf_create_wrap(char *str, apr_pool_t *pool);




svn_stringbuf_t *
svn_stringbuf_createf(apr_pool_t *pool, const char *fmt, ...)
  __attribute__((format(printf, 2, 3)));





svn_stringbuf_t *
svn_stringbuf_createv(apr_pool_t *pool, const char *fmt, va_list ap)
  __attribute__((format(printf, 2, 0)));
# 274 "./subversion/include/svn_string.h"
void
svn_stringbuf_ensure(svn_stringbuf_t *str, apr_size_t minimum_size);


void
svn_stringbuf_set(svn_stringbuf_t *str, const char *value);


void
svn_stringbuf_setempty(svn_stringbuf_t *str);


svn_boolean_t
svn_stringbuf_isempty(const svn_stringbuf_t *str);


void
svn_stringbuf_chop(svn_stringbuf_t *str, apr_size_t nbytes);


void
svn_stringbuf_fillchar(svn_stringbuf_t *str, unsigned char c);
# 307 "./subversion/include/svn_string.h"
void
svn_stringbuf_appendbyte(svn_stringbuf_t *targetstr,
                         char byte);







void
svn_stringbuf_appendbytes(svn_stringbuf_t *targetstr,
                          const char *bytes,
                          apr_size_t count);






void
svn_stringbuf_appendfill(svn_stringbuf_t *targetstr,
                         char byte,
                         apr_size_t count);





void
svn_stringbuf_appendstr(svn_stringbuf_t *targetstr,
                        const svn_stringbuf_t *appendstr);





void
svn_stringbuf_appendcstr(svn_stringbuf_t *targetstr,
                         const char *cstr);
# 362 "./subversion/include/svn_string.h"
void
svn_stringbuf_insert(svn_stringbuf_t *str,
                     apr_size_t pos,
                     const char *bytes,
                     apr_size_t count);
# 377 "./subversion/include/svn_string.h"
void
svn_stringbuf_remove(svn_stringbuf_t *str,
                     apr_size_t pos,
                     apr_size_t count);
# 396 "./subversion/include/svn_string.h"
void
svn_stringbuf_replace(svn_stringbuf_t *str,
                      apr_size_t pos,
                      apr_size_t old_count,
                      const char *bytes,
                      apr_size_t new_count);


svn_stringbuf_t *
svn_stringbuf_dup(const svn_stringbuf_t *original_string, apr_pool_t *pool);


svn_boolean_t
svn_stringbuf_compare(const svn_stringbuf_t *str1,
                      const svn_stringbuf_t *str2);




apr_size_t
svn_stringbuf_first_non_whitespace(const svn_stringbuf_t *str);


void
svn_stringbuf_strip_whitespace(svn_stringbuf_t *str);




apr_size_t
svn_stringbuf_find_char_backward(const svn_stringbuf_t *str, char ch);


svn_boolean_t
svn_string_compare_stringbuf(const svn_string_t *str1,
                             const svn_stringbuf_t *str2);
# 455 "./subversion/include/svn_string.h"
apr_array_header_t *
svn_cstring_split(const char *input,
                  const char *sep_chars,
                  svn_boolean_t chop_whitespace,
                  apr_pool_t *pool);





void
svn_cstring_split_append(apr_array_header_t *array,
                         const char *input,
                         const char *sep_chars,
                         svn_boolean_t chop_whitespace,
                         apr_pool_t *pool);





svn_boolean_t
svn_cstring_match_glob_list(const char *str, const apr_array_header_t *list);





svn_boolean_t
svn_cstring_match_list(const char *str, const apr_array_header_t *list);
# 497 "./subversion/include/svn_string.h"
char *
svn_cstring_tokenize(const char *sep, char **str);







int
svn_cstring_count_newlines(const char *msg);
# 517 "./subversion/include/svn_string.h"
char *
svn_cstring_join(const apr_array_header_t *strings,
                 const char *separator,
                 apr_pool_t *pool);
# 532 "./subversion/include/svn_string.h"
int
svn_cstring_casecmp(const char *str1, const char *str2);
# 544 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoi64(apr_int64_t *n, const char *str,
                     apr_int64_t minval, apr_int64_t maxval,
                     int base);
# 557 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi64(apr_int64_t *n, const char *str);
# 568 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi(int *n, const char *str);
# 580 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoui64(apr_uint64_t *n, const char *str,
                      apr_uint64_t minval, apr_uint64_t maxval,
                      int base);
# 593 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui64(apr_uint64_t *n, const char *str);
# 604 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui(unsigned int *n, const char *str);
# 614 "./subversion/include/svn_string.h"
const char *
svn_cstring_skip_prefix(const char *str, const char *prefix);
# 38 "./subversion/include/svn_fs.h" 2
# 1 "./subversion/include/svn_delta.h" 1
# 38 "./subversion/include/svn_delta.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h" 1
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h" 1
# 26 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h" 1
# 45 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
typedef uid_t apr_uid_t;
# 54 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
typedef gid_t apr_gid_t;
# 66 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
apr_status_t apr_uid_current(apr_uid_t *userid,
                                          apr_gid_t *groupid,
                                          apr_pool_t *p);
# 77 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
apr_status_t apr_uid_name_get(char **username, apr_uid_t userid,
                                           apr_pool_t *p);
# 88 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
apr_status_t apr_uid_get(apr_uid_t *userid, apr_gid_t *groupid,
                                      const char *username, apr_pool_t *p);
# 98 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
apr_status_t apr_uid_homepath_get(char **dirname,
                                               const char *username,
                                               apr_pool_t *p);
# 123 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
apr_status_t apr_gid_name_get(char **groupname,
                                             apr_gid_t groupid, apr_pool_t *p);
# 133 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_user.h"
apr_status_t apr_gid_get(apr_gid_t *groupid,
                                      const char *groupname, apr_pool_t *p);
# 27 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h" 2
# 62 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
typedef enum {
    APR_NOFILE = 0,
    APR_REG,
    APR_DIR,
    APR_CHR,
    APR_BLK,
    APR_PIPE,
    APR_LNK,
    APR_SOCK,
    APR_UNKFILE = 127
} apr_filetype_e;
# 121 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
typedef struct apr_dir_t apr_dir_t;



typedef apr_int32_t apr_fileperms_t;
# 135 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
typedef dev_t apr_dev_t;







typedef struct apr_finfo_t apr_finfo_t;
# 174 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
struct apr_finfo_t {

    apr_pool_t *pool;


    apr_int32_t valid;

    apr_fileperms_t protection;




    apr_filetype_e filetype;

    apr_uid_t user;

    apr_gid_t group;

    apr_ino_t inode;

    apr_dev_t device;

    apr_int32_t nlink;

    apr_off_t size;

    apr_off_t csize;

    apr_time_t atime;

    apr_time_t mtime;

    apr_time_t ctime;

    const char *fname;

    const char *name;

    struct apr_file_t *filehand;
};
# 229 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_stat(apr_finfo_t *finfo, const char *fname,
                                   apr_int32_t wanted, apr_pool_t *pool);
# 244 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_dir_open(apr_dir_t **new_dir,
                                       const char *dirname,
                                       apr_pool_t *pool);





apr_status_t apr_dir_close(apr_dir_t *thedir);
# 267 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_dir_read(apr_finfo_t *finfo, apr_int32_t wanted,
                                       apr_dir_t *thedir);





apr_status_t apr_dir_rewind(apr_dir_t *thedir);
# 336 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_filepath_root(const char **rootpath,
                                            const char **filepath,
                                            apr_int32_t flags,
                                            apr_pool_t *p);
# 354 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_filepath_merge(char **newpath,
                                             const char *rootpath,
                                             const char *addpath,
                                             apr_int32_t flags,
                                             apr_pool_t *p);
# 369 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_filepath_list_split(apr_array_header_t **pathelts,
                                                  const char *liststr,
                                                  apr_pool_t *p);
# 382 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_filepath_list_merge(char **liststr,
                                                  apr_array_header_t *pathelts,
                                                  apr_pool_t *p);
# 393 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_filepath_get(char **path, apr_int32_t flags,
                                           apr_pool_t *p);






apr_status_t apr_filepath_set(const char *path, apr_pool_t *p);
# 419 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h"
apr_status_t apr_filepath_encoding(int *style, apr_pool_t *p);
# 30 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_inherit.h" 1
# 31 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h" 2



# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 35 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h" 2
# 180 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
typedef apr_uint32_t apr_fileattrs_t;


typedef int apr_seek_where_t;




typedef struct apr_file_t apr_file_t;
# 250 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open(apr_file_t **newf, const char *fname,
                                        apr_int32_t flag, apr_fileperms_t perm,
                                        apr_pool_t *pool);





apr_status_t apr_file_close(apr_file_t *file);
# 267 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_remove(const char *path, apr_pool_t *pool);
# 278 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_rename(const char *from_path,
                                          const char *to_path,
                                          apr_pool_t *pool);







apr_status_t apr_file_link(const char *from_path,
                                          const char *to_path);
# 303 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_copy(const char *from_path,
                                        const char *to_path,
                                        apr_fileperms_t perms,
                                        apr_pool_t *pool);
# 319 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_append(const char *from_path,
                                          const char *to_path,
                                          apr_fileperms_t perms,
                                          apr_pool_t *pool);






apr_status_t apr_file_eof(apr_file_t *fptr);
# 346 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open_stderr(apr_file_t **thefile,
                                               apr_pool_t *pool);
# 356 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open_stdout(apr_file_t **thefile,
                                               apr_pool_t *pool);
# 366 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open_stdin(apr_file_t **thefile,
                                              apr_pool_t *pool);
# 386 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open_flags_stderr(apr_file_t **thefile,
                                                     apr_int32_t flags,
                                                     apr_pool_t *pool);
# 407 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open_flags_stdout(apr_file_t **thefile,
                                                     apr_int32_t flags,
                                                     apr_pool_t *pool);
# 428 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_open_flags_stdin(apr_file_t **thefile,
                                                     apr_int32_t flags,
                                                     apr_pool_t *pool);
# 449 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_read(apr_file_t *thefile, void *buf,
                                        apr_size_t *nbytes);
# 467 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_write(apr_file_t *thefile, const void *buf,
                                         apr_size_t *nbytes);
# 485 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_writev(apr_file_t *thefile,
                                          const struct iovec *vec,
                                          apr_size_t nvec, apr_size_t *nbytes);
# 509 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_read_full(apr_file_t *thefile, void *buf,
                                             apr_size_t nbytes,
                                             apr_size_t *bytes_read);
# 533 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_write_full(apr_file_t *thefile,
                                              const void *buf,
                                              apr_size_t nbytes,
                                              apr_size_t *bytes_written);
# 552 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_writev_full(apr_file_t *thefile,
                                               const struct iovec *vec,
                                               apr_size_t nvec,
                                               apr_size_t *nbytes);





apr_status_t apr_file_putc(char ch, apr_file_t *thefile);






apr_status_t apr_file_getc(char *ch, apr_file_t *thefile);






apr_status_t apr_file_ungetc(char ch, apr_file_t *thefile);
# 585 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_gets(char *str, int len,
                                        apr_file_t *thefile);






apr_status_t apr_file_puts(const char *str, apr_file_t *thefile);





apr_status_t apr_file_flush(apr_file_t *thefile);





apr_status_t apr_file_sync(apr_file_t *thefile);





apr_status_t apr_file_datasync(apr_file_t *thefile);
# 620 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_dup(apr_file_t **new_file,
                                       apr_file_t *old_file,
                                       apr_pool_t *p);
# 632 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_dup2(apr_file_t *new_file,
                                        apr_file_t *old_file,
                                        apr_pool_t *p);
# 647 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_setaside(apr_file_t **new_file,
                                            apr_file_t *old_file,
                                            apr_pool_t *p);
# 662 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_buffer_set(apr_file_t *thefile,
                                              char * buffer,
                                              apr_size_t bufsize);





apr_size_t apr_file_buffer_size_get(apr_file_t *thefile);
# 683 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_seek(apr_file_t *thefile,
                                   apr_seek_where_t where,
                                   apr_off_t *offset);
# 700 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_pipe_create(apr_file_t **in,
                                               apr_file_t **out,
                                               apr_pool_t *pool);
# 723 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_pipe_create_ex(apr_file_t **in,
                                                  apr_file_t **out,
                                                  apr_int32_t blocking,
                                                  apr_pool_t *pool);







apr_status_t apr_file_namedpipe_create(const char *filename,
                                                    apr_fileperms_t perm,
                                                    apr_pool_t *pool);






apr_status_t apr_file_pipe_timeout_get(apr_file_t *thepipe,
                                               apr_interval_time_t *timeout);







apr_status_t apr_file_pipe_timeout_set(apr_file_t *thepipe,
                                                  apr_interval_time_t timeout);
# 766 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_lock(apr_file_t *thefile, int type);





apr_status_t apr_file_unlock(apr_file_t *thefile);
# 781 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_name_get(const char **new_path,
                                            apr_file_t *thefile);







apr_status_t apr_file_data_get(void **data, const char *key,
                                            apr_file_t *file);
# 800 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_data_set(apr_file_t *file, void *data,
                                            const char *key,
                                            apr_status_t (*cleanup)(void *));
# 811 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
int apr_file_printf(apr_file_t *fptr,
                                        const char *format, ...)
        __attribute__((format(printf,2,3)));
# 827 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_perms_set(const char *fname,
                                             apr_fileperms_t perms);
# 846 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_attrs_set(const char *fname,
                                             apr_fileattrs_t attributes,
                                             apr_fileattrs_t attr_mask,
                                             apr_pool_t *pool);
# 859 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_mtime_set(const char *fname,
                                             apr_time_t mtime,
                                             apr_pool_t *pool);







apr_status_t apr_dir_make(const char *path, apr_fileperms_t perm,
                                       apr_pool_t *pool);
# 879 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_dir_make_recursive(const char *path,
                                                 apr_fileperms_t perm,
                                                 apr_pool_t *pool);
# 890 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_dir_remove(const char *path, apr_pool_t *pool);







apr_status_t apr_file_info_get(apr_finfo_t *finfo,
                                            apr_int32_t wanted,
                                            apr_file_t *thefile);
# 909 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_trunc(apr_file_t *fp, apr_off_t offset);






apr_int32_t apr_file_flags_get(apr_file_t *f);




apr_pool_t * apr_file_pool_get (const apr_file_t *thefile);





apr_status_t apr_file_inherit_set( apr_file_t *thefile);




apr_status_t apr_file_inherit_unset( apr_file_t *thefile);
# 951 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_file_mktemp(apr_file_t **fp, char *templ,
                                          apr_int32_t flags, apr_pool_t *p);
# 964 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
apr_status_t apr_temp_dir_get(const char **temp_dir,
                                           apr_pool_t *p);
# 39 "./subversion/include/svn_delta.h" 2



# 1 "./subversion/include/svn_io.h" 1
# 40 "./subversion/include/svn_io.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h" 1
# 31 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ ));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ ));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ ));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ ));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ ));






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) __attribute__ ((__nothrow__ ));
# 32 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/resource.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/resource.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 131 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 180 "/usr/include/x86_64-linux-gnu/bits/resource.h" 2 3 4







struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    __extension__ union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };



    __extension__ union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

    __extension__ union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

    __extension__ union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


    __extension__ union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

    __extension__ union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

    __extension__ union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


    __extension__ union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

    __extension__ union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

    __extension__ union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

    __extension__ union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

    __extension__ union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



    __extension__ union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


    __extension__ union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};







extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource,
      const struct rlimit *__new_limit,
      struct rlimit *__old_limit) __attribute__ ((__nothrow__ ));
# 322 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) __attribute__ ((__nothrow__ ));
# 25 "/usr/include/x86_64-linux-gnu/sys/resource.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
typedef enum __rlimit_resource __rlimit_resource_t;
typedef enum __rusage_who __rusage_who_t;
typedef enum __priority_which __priority_which_t;
# 50 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) __attribute__ ((__nothrow__ ));
# 61 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) __attribute__ ((__nothrow__ ));






extern int setrlimit (__rlimit_resource_t __resource,
        const struct rlimit *__rlimits) __attribute__ ((__nothrow__ ));
# 81 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int setrlimit64 (__rlimit_resource_t __resource,
   const struct rlimit64 *__rlimits) __attribute__ ((__nothrow__ ));




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) __attribute__ ((__nothrow__ ));





extern int getpriority (__priority_which_t __which, id_t __who) __attribute__ ((__nothrow__ ));



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     __attribute__ ((__nothrow__ ));
# 33 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h" 2
# 45 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
typedef enum {
    APR_SHELLCMD,
    APR_PROGRAM,
    APR_PROGRAM_ENV,
    APR_PROGRAM_PATH,
    APR_SHELLCMD_ENV


} apr_cmdtype_e;

typedef enum {
    APR_WAIT,
    APR_NOWAIT
} apr_wait_how_e;






typedef enum {
    APR_PROC_EXIT = 1,
    APR_PROC_SIGNAL = 2,
    APR_PROC_SIGNAL_CORE = 4
} apr_exit_why_e;
# 133 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
typedef struct apr_proc_t {

    pid_t pid;

    apr_file_t *in;

    apr_file_t *out;

    apr_file_t *err;
# 161 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
} apr_proc_t;
# 173 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
typedef void (apr_child_errfn_t)(apr_pool_t *proc, apr_status_t err,
                                 const char *description);


typedef struct apr_thread_t apr_thread_t;


typedef struct apr_threadattr_t apr_threadattr_t;


typedef struct apr_procattr_t apr_procattr_t;


typedef struct apr_thread_once_t apr_thread_once_t;


typedef struct apr_threadkey_t apr_threadkey_t;


typedef struct apr_other_child_rec_t apr_other_child_rec_t;




typedef void *( *apr_thread_start_t)(apr_thread_t*, void*);

typedef enum {
    APR_KILL_NEVER,


    APR_KILL_ALWAYS,
    APR_KILL_AFTER_TIMEOUT,
    APR_JUST_WAIT,
    APR_KILL_ONLY_ONCE
} apr_kill_conditions_e;
# 218 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_threadattr_create(apr_threadattr_t **new_attr,
                                                apr_pool_t *cont);






apr_status_t apr_threadattr_detach_set(apr_threadattr_t *attr,
                                                    apr_int32_t on);







apr_status_t apr_threadattr_detach_get(apr_threadattr_t *attr);






apr_status_t apr_threadattr_stacksize_set(apr_threadattr_t *attr,
                                                       apr_size_t stacksize);
# 255 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_threadattr_guardsize_set(apr_threadattr_t *attr,
                                                       apr_size_t guardsize);
# 266 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_thread_create(apr_thread_t **new_thread,
                                            apr_threadattr_t *attr,
                                            apr_thread_start_t func,
                                            void *data, apr_pool_t *cont);






apr_status_t apr_thread_exit(apr_thread_t *thd,
                                          apr_status_t retval);






apr_status_t apr_thread_join(apr_status_t *retval,
                                          apr_thread_t *thd);




void apr_thread_yield(void);







apr_status_t apr_thread_once_init(apr_thread_once_t **control,
                                               apr_pool_t *p);
# 310 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_thread_once(apr_thread_once_t *control,
                                          void (*func)(void));





apr_status_t apr_thread_detach(apr_thread_t *thd);







apr_status_t apr_thread_data_get(void **data, const char *key,
                                             apr_thread_t *thread);
# 335 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_thread_data_set(void *data, const char *key,
                                             apr_status_t (*cleanup) (void *),
                                             apr_thread_t *thread);







apr_status_t apr_threadkey_private_create(apr_threadkey_t **key,
                                                    void (*dest)(void *),
                                                    apr_pool_t *cont);






apr_status_t apr_threadkey_private_get(void **new_mem,
                                                 apr_threadkey_t *key);






apr_status_t apr_threadkey_private_set(void *priv,
                                                 apr_threadkey_t *key);





apr_status_t apr_threadkey_private_delete(apr_threadkey_t *key);







apr_status_t apr_threadkey_data_get(void **data, const char *key,
                                                apr_threadkey_t *threadkey);
# 387 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_threadkey_data_set(void *data, const char *key,
                                                apr_status_t (*cleanup) (void *),
                                                apr_threadkey_t *threadkey);
# 398 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_create(apr_procattr_t **new_attr,
                                                  apr_pool_t *cont);
# 415 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_io_set(apr_procattr_t *attr,
                                             apr_int32_t in, apr_int32_t out,
                                             apr_int32_t err);
# 434 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_child_in_set(struct apr_procattr_t *attr,
                                                  apr_file_t *child_in,
                                                  apr_file_t *parent_in);
# 451 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_child_out_set(struct apr_procattr_t *attr,
                                                   apr_file_t *child_out,
                                                   apr_file_t *parent_out);
# 468 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_child_err_set(struct apr_procattr_t *attr,
                                                   apr_file_t *child_err,
                                                   apr_file_t *parent_err);
# 479 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_dir_set(apr_procattr_t *attr,
                                              const char *dir);
# 493 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_cmdtype_set(apr_procattr_t *attr,
                                                  apr_cmdtype_e cmd);






apr_status_t apr_procattr_detach_set(apr_procattr_t *attr,
                                                 apr_int32_t detach);
# 517 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_limit_set(apr_procattr_t *attr,
                                                apr_int32_t what,
                                                struct rlimit *limit);
# 533 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_child_errfn_set(apr_procattr_t *attr,
                                                       apr_child_errfn_t *errfn);
# 548 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_error_check_set(apr_procattr_t *attr,
                                                       apr_int32_t chk);
# 558 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_addrspace_set(apr_procattr_t *attr,
                                                       apr_int32_t addrspace);
# 569 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_procattr_user_set(apr_procattr_t *attr,
                                                const char *username,
                                                const char *password);






apr_status_t apr_procattr_group_set(apr_procattr_t *attr,
                                                 const char *groupname);
# 591 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_proc_fork(apr_proc_t *proc, apr_pool_t *cont);
# 610 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_proc_create(apr_proc_t *new_proc,
                                          const char *progname,
                                          const char * const *args,
                                          const char * const *env,
                                          apr_procattr_t *attr,
                                          apr_pool_t *pool);
# 643 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_proc_wait(apr_proc_t *proc,
                                        int *exitcode, apr_exit_why_e *exitwhy,
                                        apr_wait_how_e waithow);
# 673 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_proc_wait_all_procs(apr_proc_t *proc,
                                                  int *exitcode,
                                                  apr_exit_why_e *exitwhy,
                                                  apr_wait_how_e waithow,
                                                  apr_pool_t *p);
# 688 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_proc_detach(int daemonize);
# 707 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
void apr_proc_other_child_register(apr_proc_t *proc,
                                           void (*maintenance) (int reason,
                                                                void *,
                                                                int status),
                                           void *data, apr_file_t *write_fd,
                                           apr_pool_t *p);
# 723 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
void apr_proc_other_child_unregister(void *data);
# 745 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_proc_other_child_alert(apr_proc_t *proc,
                                                     int reason,
                                                     int status);
# 756 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
void apr_proc_other_child_refresh(apr_other_child_rec_t *ocr,
                                               int reason);







void apr_proc_other_child_refresh_all(int reason);






apr_status_t apr_proc_kill(apr_proc_t *proc, int sig);
# 787 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
void apr_pool_note_subprocess(apr_pool_t *a, apr_proc_t *proc,
                                           apr_kill_conditions_e how);
# 798 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_setup_signal_thread(void);
# 807 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_thread_proc.h"
apr_status_t apr_signal_thread(int(*signal_handler)(int signum));







apr_pool_t * apr_thread_pool_get (const apr_thread_t *thethread);
# 41 "./subversion/include/svn_io.h" 2



# 1 "./subversion/include/svn_checksum.h" 1
# 45 "./subversion/include/svn_checksum.h"
typedef enum svn_checksum_kind_t
{

  svn_checksum_md5,


  svn_checksum_sha1,




  svn_checksum_fnv1a_32,




  svn_checksum_fnv1a_32x4
} svn_checksum_kind_t;






typedef struct svn_checksum_t
{

  const unsigned char *digest;



  svn_checksum_kind_t kind;
} svn_checksum_t;




typedef struct svn_checksum_ctx_t svn_checksum_ctx_t;






svn_checksum_t *
svn_checksum_create(svn_checksum_kind_t kind,
                    apr_pool_t *pool);






svn_error_t *
svn_checksum_clear(svn_checksum_t *checksum);







svn_boolean_t
svn_checksum_match(const svn_checksum_t *checksum1,
                   const svn_checksum_t *checksum2);
# 118 "./subversion/include/svn_checksum.h"
svn_checksum_t *
svn_checksum_dup(const svn_checksum_t *checksum,
                 apr_pool_t *pool);







const char *
svn_checksum_to_cstring_display(const svn_checksum_t *checksum,
                                apr_pool_t *pool);
# 141 "./subversion/include/svn_checksum.h"
const char *
svn_checksum_to_cstring(const svn_checksum_t *checksum,
                        apr_pool_t *pool);
# 153 "./subversion/include/svn_checksum.h"
const char *
svn_checksum_serialize(const svn_checksum_t *checksum,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 165 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_deserialize(const svn_checksum_t **checksum,
                         const char *data,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 180 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_parse_hex(svn_checksum_t **checksum,
                       svn_checksum_kind_t kind,
                       const char *hex,
                       apr_pool_t *pool);







svn_error_t *
svn_checksum(svn_checksum_t **checksum,
             svn_checksum_kind_t kind,
             const void *data,
             apr_size_t len,
             apr_pool_t *pool);
# 206 "./subversion/include/svn_checksum.h"
svn_checksum_t *
svn_checksum_empty_checksum(svn_checksum_kind_t kind,
                            apr_pool_t *pool);
# 217 "./subversion/include/svn_checksum.h"
svn_checksum_ctx_t *
svn_checksum_ctx_create(svn_checksum_kind_t kind,
                        apr_pool_t *pool);







svn_error_t *
svn_checksum_update(svn_checksum_ctx_t *ctx,
                    const void *data,
                    apr_size_t len);
# 239 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_final(svn_checksum_t **checksum,
                   const svn_checksum_ctx_t *ctx,
                   apr_pool_t *pool);







apr_size_t
svn_checksum_size(const svn_checksum_t *checksum);







svn_boolean_t
svn_checksum_is_empty_checksum(svn_checksum_t *checksum);
# 276 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_mismatch_err(const svn_checksum_t *expected,
                          const svn_checksum_t *actual,
                          apr_pool_t *scratch_pool,
                          const char *fmt,
                          ...)
  __attribute__ ((format(printf, 4, 5)));
# 45 "./subversion/include/svn_io.h" 2
# 58 "./subversion/include/svn_io.h"
typedef enum svn_io_file_del_t
{

  svn_io_file_del_none = 0,

  svn_io_file_del_on_close,

  svn_io_file_del_on_pool_cleanup
} svn_io_file_del_t;
# 78 "./subversion/include/svn_io.h"
typedef struct svn_io_dirent2_t {



  svn_node_kind_t kind;






  svn_boolean_t special;


  svn_filesize_t filesize;


  apr_time_t mtime;


} svn_io_dirent2_t;






svn_io_dirent2_t *
svn_io_dirent2_create(apr_pool_t *result_pool);





svn_io_dirent2_t *
svn_io_dirent2_dup(const svn_io_dirent2_t *item,
                   apr_pool_t *result_pool);
# 123 "./subversion/include/svn_io.h"
typedef struct svn_io_dirent_t {

  svn_node_kind_t kind;





  svn_boolean_t special;
} svn_io_dirent_t;
# 153 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_check_path(const char *path,
                  svn_node_kind_t *kind,
                  apr_pool_t *pool);







svn_error_t *
svn_io_check_special_path(const char *path,
                          svn_node_kind_t *kind,
                          svn_boolean_t *is_special,
                          apr_pool_t *pool);



svn_error_t *
svn_io_check_resolved_path(const char *path,
                           svn_node_kind_t *kind,
                           apr_pool_t *pool);
# 230 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_open_uniquely_named(apr_file_t **file,
                           const char **unique_name,
                           const char *dirpath,
                           const char *filename,
                           const char *suffix,
                           svn_io_file_del_t delete_when,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 267 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_open_unique_file3(apr_file_t **file,
                         const char **temp_path,
                         const char *dirpath,
                         svn_io_file_del_t delete_when,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 283 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_open_unique_file2(apr_file_t **f,
                         const char **unique_name_p,
                         const char *path,
                         const char *suffix,
                         svn_io_file_del_t delete_when,
                         apr_pool_t *pool);
# 300 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_open_unique_file(apr_file_t **f,
                        const char **unique_name_p,
                        const char *path,
                        const char *suffix,
                        svn_boolean_t delete_on_close,
                        apr_pool_t *pool);
# 316 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_create_unique_link(const char **unique_name_p,
                          const char *path,
                          const char *dest,
                          const char *suffix,
                          apr_pool_t *pool);
# 330 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_link(svn_string_t **dest,
                 const char *path,
                 apr_pool_t *pool);





svn_error_t *
svn_io_temp_dir(const char **dir,
                apr_pool_t *pool);







svn_error_t *
svn_io_copy_file(const char *src,
                 const char *dst,
                 svn_boolean_t copy_perms,
                 apr_pool_t *pool);







svn_error_t *
svn_io_copy_perms(const char *src,
                  const char *dst,
                  apr_pool_t *pool);
# 375 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_copy_link(const char *src,
                 const char *dst,
                 apr_pool_t *pool);
# 391 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_copy_dir_recursively(const char *src,
                            const char *dst_parent,
                            const char *dst_basename,
                            svn_boolean_t copy_perms,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *pool);
# 408 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_make_dir_recursively(const char *path,
                            apr_pool_t *pool);






svn_error_t *
svn_io_dir_empty(svn_boolean_t *is_empty_p,
                 const char *path,
                 apr_pool_t *pool);





svn_error_t *
svn_io_append_file(const char *src,
                   const char *dst,
                   apr_pool_t *pool);
# 444 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_read_only(const char *path,
                          svn_boolean_t ignore_enoent,
                          apr_pool_t *pool);
# 465 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_read_write(const char *path,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *pool);
# 493 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_set_file_read_write_carefully(const char *path,
                                     svn_boolean_t enable_write,
                                     svn_boolean_t ignore_enoent,
                                     apr_pool_t *pool);
# 525 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_executable(const char *path,
                           svn_boolean_t executable,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *pool);







svn_error_t *
svn_io_is_file_executable(svn_boolean_t *executable,
                          const char *path,
                          apr_pool_t *pool);
# 551 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_length_line(apr_file_t *file,
                        char *buf,
                        apr_size_t *limit,
                        apr_pool_t *pool);
# 564 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_affected_time(apr_time_t *apr_time,
                          const char *path,
                          apr_pool_t *pool);







svn_error_t *
svn_io_set_file_affected_time(apr_time_t apr_time,
                              const char *path,
                              apr_pool_t *pool);
# 594 "./subversion/include/svn_io.h"
void
svn_io_sleep_for_timestamps(const char *path, apr_pool_t *pool);
# 606 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_filesizes_different_p(svn_boolean_t *different_p,
                             const char *file1,
                             const char *file2,
                             apr_pool_t *pool);
# 625 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_filesizes_three_different_p(svn_boolean_t *different_p12,
                                   svn_boolean_t *different_p23,
                                   svn_boolean_t *different_p13,
                                   const char *file1,
                                   const char *file2,
                                   const char *file3,
                                   apr_pool_t *scratch_pool);






svn_error_t *
svn_io_file_checksum2(svn_checksum_t **checksum,
                      const char *file,
                      svn_checksum_kind_t kind,
                      apr_pool_t *pool);
# 652 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_file_checksum(unsigned char digest[],
                     const char *file,
                     apr_pool_t *pool);





svn_error_t *
svn_io_files_contents_same_p(svn_boolean_t *same,
                             const char *file1,
                             const char *file2,
                             apr_pool_t *pool);
# 676 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_files_contents_three_same_p(svn_boolean_t *same12,
                                   svn_boolean_t *same23,
                                   svn_boolean_t *same13,
                                   const char *file1,
                                   const char *file2,
                                   const char *file3,
                                   apr_pool_t *scratch_pool);
# 698 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_create(const char *file,
                   const char *contents,
                   apr_pool_t *pool);
# 716 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_create_bytes(const char *file,
                         const void *contents,
                         apr_size_t length,
                         apr_pool_t *pool);
# 731 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_create_empty(const char *file,
                         apr_pool_t *pool);
# 743 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_file_lock(const char *lock_file,
                 svn_boolean_t exclusive,
                 apr_pool_t *pool);
# 761 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_lock2(const char *lock_file,
                  svn_boolean_t exclusive,
                  svn_boolean_t nonblocking,
                  apr_pool_t *pool);
# 781 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_lock_open_file(apr_file_t *lockfile_handle,
                      svn_boolean_t exclusive,
                      svn_boolean_t nonblocking,
                      apr_pool_t *pool);
# 795 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_unlock_open_file(apr_file_t *lockfile_handle,
                        apr_pool_t *pool);
# 811 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_flush_to_disk(apr_file_t *file,
                          apr_pool_t *pool);
# 823 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_dir_file_copy(const char *src_path,
                     const char *dest_path,
                     const char *file,
                     apr_pool_t *pool);
# 865 "./subversion/include/svn_io.h"
typedef struct svn_stream_t svn_stream_t;




typedef svn_error_t *(*svn_read_fn_t)(void *baton,
                                      char *buffer,
                                      apr_size_t *len);





typedef svn_error_t *(*svn_stream_skip_fn_t)(void *baton,
                                             apr_size_t len);


typedef svn_error_t *(*svn_write_fn_t)(void *baton,
                                       const char *data,
                                       apr_size_t *len);


typedef svn_error_t *(*svn_close_fn_t)(void *baton);
# 896 "./subversion/include/svn_io.h"
typedef struct svn_stream_mark_t svn_stream_mark_t;






typedef svn_error_t *(*svn_stream_mark_fn_t)(void *baton,
                                         svn_stream_mark_t **mark,
                                         apr_pool_t *pool);






typedef svn_error_t *(*svn_stream_seek_fn_t)(void *baton,
                                             const svn_stream_mark_t *mark);






typedef svn_error_t *(*svn_stream_data_available_fn_t)(void *baton,
                                              svn_boolean_t *data_available);


svn_stream_t *
svn_stream_create(void *baton,
                  apr_pool_t *pool);


void
svn_stream_set_baton(svn_stream_t *stream,
                     void *baton);







void
svn_stream_set_read2(svn_stream_t *stream,
                     svn_read_fn_t read_fn,
                     svn_read_fn_t read_full_fn);







__attribute__((deprecated))
void
svn_stream_set_read(svn_stream_t *stream,
                    svn_read_fn_t read_fn);





void
svn_stream_set_skip(svn_stream_t *stream,
                    svn_stream_skip_fn_t skip_fn);


void
svn_stream_set_write(svn_stream_t *stream,
                     svn_write_fn_t write_fn);


void
svn_stream_set_close(svn_stream_t *stream,
                     svn_close_fn_t close_fn);





void
svn_stream_set_mark(svn_stream_t *stream,
                    svn_stream_mark_fn_t mark_fn);





void
svn_stream_set_seek(svn_stream_t *stream,
                    svn_stream_seek_fn_t seek_fn);





void
svn_stream_set_data_available(svn_stream_t *stream,
                              svn_stream_data_available_fn_t data_available);


svn_stream_t *
svn_stream_empty(apr_pool_t *pool);
# 1008 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_disown(svn_stream_t *stream,
                  apr_pool_t *pool);
# 1023 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_readonly(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 1042 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_writable(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 1067 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_unique(svn_stream_t **stream,
                       const char **temp_path,
                       const char *dirpath,
                       svn_io_file_del_t delete_when,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 1087 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_from_aprfile2(apr_file_t *file,
                         svn_boolean_t disown,
                         apr_pool_t *pool);
# 1101 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_stream_t *
svn_stream_from_aprfile(apr_file_t *file,
                        apr_pool_t *pool);







svn_error_t *
svn_stream_for_stdin(svn_stream_t **in,
                     apr_pool_t *pool);







svn_error_t *
svn_stream_for_stderr(svn_stream_t **err,
                      apr_pool_t *pool);





svn_error_t *
svn_stream_for_stdout(svn_stream_t **out,
                      apr_pool_t *pool);
# 1142 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_stream(svn_stringbuf_t **str,
                          svn_stream_t *stream,
                          apr_size_t len_hint,
                          apr_pool_t *pool);




svn_stream_t *
svn_stream_from_stringbuf(svn_stringbuf_t *str,
                          apr_pool_t *pool);




svn_stream_t *
svn_stream_from_string(const svn_string_t *str,
                       apr_pool_t *pool);
# 1169 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_buffered(apr_pool_t *result_pool);
# 1182 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_compressed(svn_stream_t *stream,
                      apr_pool_t *pool);
# 1207 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_checksummed2(svn_stream_t *stream,
                        svn_checksum_t **read_checksum,
                        svn_checksum_t **write_checksum,
                        svn_checksum_kind_t checksum_kind,
                        svn_boolean_t read_all,
                        apr_pool_t *pool);
# 1222 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_stream_t *
svn_stream_checksummed(svn_stream_t *stream,
                       const unsigned char **read_digest,
                       const unsigned char **write_digest,
                       svn_boolean_t read_all,
                       apr_pool_t *pool);






svn_error_t *
svn_stream_read_full(svn_stream_t *stream,
                     char *buffer,
                     apr_size_t *len);






svn_boolean_t
svn_stream_supports_partial_read(svn_stream_t *stream);
# 1257 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_read2(svn_stream_t *stream,
                 char *buffer,
                 apr_size_t *len);
# 1271 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_read(svn_stream_t *stream,
                char *buffer,
                apr_size_t *len);
# 1291 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_skip(svn_stream_t *stream,
                apr_size_t len);


svn_error_t *
svn_stream_write(svn_stream_t *stream,
                 const char *data,
                 apr_size_t *len);


svn_error_t *
svn_stream_close(svn_stream_t *stream);
# 1312 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_reset(svn_stream_t *stream);






svn_boolean_t
svn_stream_supports_mark(svn_stream_t *stream);
# 1333 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_mark(svn_stream_t *stream,
                svn_stream_mark_t **mark,
                apr_pool_t *pool);
# 1346 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_seek(svn_stream_t *stream, const svn_stream_mark_t *mark);
# 1359 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_data_available(svn_stream_t *stream,
                          svn_boolean_t *data_available);
# 1371 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_tee(svn_stream_t *out1,
               svn_stream_t *out2,
               apr_pool_t *pool);






svn_error_t *
svn_stream_puts(svn_stream_t *stream,
                const char *str);




svn_error_t *
svn_stream_printf(svn_stream_t *stream,
                  apr_pool_t *pool,
                  const char *fmt,
                  ...)
       __attribute__((format(printf, 3, 4)));
# 1404 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_printf_from_utf8(svn_stream_t *stream,
                            const char *encoding,
                            apr_pool_t *pool,
                            const char *fmt,
                            ...)
       __attribute__((format(printf, 4, 5)));
# 1420 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_readline(svn_stream_t *stream,
                    svn_stringbuf_t **stringbuf,
                    const char *eol,
                    svn_boolean_t *eof,
                    apr_pool_t *pool);
# 1441 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_copy3(svn_stream_t *from,
                 svn_stream_t *to,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_stream_copy2(svn_stream_t *from,
                 svn_stream_t *to,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *pool);
# 1469 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_copy(svn_stream_t *from,
                svn_stream_t *to,
                apr_pool_t *pool);
# 1486 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_contents_same2(svn_boolean_t *same,
                          svn_stream_t *stream1,
                          svn_stream_t *stream2,
                          apr_pool_t *pool);
# 1499 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_contents_same(svn_boolean_t *same,
                         svn_stream_t *stream1,
                         svn_stream_t *stream2,
                         apr_pool_t *pool);
# 1519 "./subversion/include/svn_io.h"
svn_error_t *
svn_string_from_stream(svn_string_t **result,
                       svn_stream_t *stream,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 1540 "./subversion/include/svn_io.h"
typedef svn_error_t *
(*svn_stream_lazyopen_func_t)(svn_stream_t **stream,
                              void *baton,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);
# 1565 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_lazyopen_create(svn_stream_lazyopen_func_t open_func,
                           void *open_baton,
                           svn_boolean_t open_on_close,
                           apr_pool_t *result_pool);
# 1588 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_file2(svn_stringbuf_t **result,
                         const char *filename,
                         apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_stringbuf_from_file(svn_stringbuf_t **result,
                        const char *filename,
                        apr_pool_t *pool);
# 1612 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_aprfile(svn_stringbuf_t **result,
                           apr_file_t *file,
                           apr_pool_t *pool);
# 1627 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_remove_file2(const char *path,
                    svn_boolean_t ignore_enoent,
                    apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_io_remove_file(const char *path,
                   apr_pool_t *pool);
# 1650 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_remove_dir2(const char *path,
                   svn_boolean_t ignore_enoent,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_io_remove_dir(const char *path,
                  apr_pool_t *pool);
# 1677 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_get_dir_filenames(apr_hash_t **dirents,
                         const char *path,
                         apr_pool_t *pool);
# 1698 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_get_dirents3(apr_hash_t **dirents,
                    const char *path,
                    svn_boolean_t only_check_type,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);
# 1712 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_get_dirents2(apr_hash_t **dirents,
                    const char *path,
                    apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_io_get_dirents(apr_hash_t **dirents,
                   const char *path,
                   apr_pool_t *pool);
# 1743 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_stat_dirent2(const svn_io_dirent2_t **dirent_p,
                    const char *path,
                    svn_boolean_t verify_truename,
                    svn_boolean_t ignore_enoent,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);
# 1758 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_stat_dirent(const svn_io_dirent2_t **dirent_p,
                   const char *path,
                   svn_boolean_t ignore_enoent,
                   apr_pool_t *result_pool,
                   apr_pool_t *scratch_pool);



typedef svn_error_t * (*svn_io_walk_func_t)(void *baton,
                                            const char *path,
                                            const apr_finfo_t *finfo,
                                            apr_pool_t *pool);
# 1793 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_dir_walk2(const char *dirname,
                 apr_int32_t wanted,
                 svn_io_walk_func_t walk_func,
                 void *walk_baton,
                 apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_io_dir_walk(const char *dirname,
                apr_int32_t wanted,
                svn_io_walk_func_t walk_func,
                void *walk_baton,
                apr_pool_t *pool);
# 1849 "./subversion/include/svn_io.h"
svn_error_t *svn_io_start_cmd3(apr_proc_t *cmd_proc,
                               const char *path,
                               const char *cmd,
                               const char *const *args,
                               const char *const *env,
                               svn_boolean_t inherit,
                               svn_boolean_t infile_pipe,
                               apr_file_t *infile,
                               svn_boolean_t outfile_pipe,
                               apr_file_t *outfile,
                               svn_boolean_t errfile_pipe,
                               apr_file_t *errfile,
                               apr_pool_t *pool);
# 1870 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *svn_io_start_cmd2(apr_proc_t *cmd_proc,
                               const char *path,
                               const char *cmd,
                               const char *const *args,
                               svn_boolean_t inherit,
                               svn_boolean_t infile_pipe,
                               apr_file_t *infile,
                               svn_boolean_t outfile_pipe,
                               apr_file_t *outfile,
                               svn_boolean_t errfile_pipe,
                               apr_file_t *errfile,
                               apr_pool_t *pool);
# 1891 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_start_cmd(apr_proc_t *cmd_proc,
                 const char *path,
                 const char *cmd,
                 const char *const *args,
                 svn_boolean_t inherit,
                 apr_file_t *infile,
                 apr_file_t *outfile,
                 apr_file_t *errfile,
                 apr_pool_t *pool);
# 1919 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_wait_for_cmd(apr_proc_t *cmd_proc,
                    const char *cmd,
                    int *exitcode,
                    apr_exit_why_e *exitwhy,
                    apr_pool_t *pool);





svn_error_t *
svn_io_run_cmd(const char *path,
               const char *cmd,
               const char *const *args,
               int *exitcode,
               apr_exit_why_e *exitwhy,
               svn_boolean_t inherit,
               apr_file_t *infile,
               apr_file_t *outfile,
               apr_file_t *errfile,
               apr_pool_t *pool);
# 1962 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_run_diff2(const char *dir,
                 const char *const *user_args,
                 int num_user_args,
                 const char *label1,
                 const char *label2,
                 const char *from,
                 const char *to,
                 int *exitcode,
                 apr_file_t *outfile,
                 apr_file_t *errfile,
                 const char *diff_cmd,
                 apr_pool_t *pool);





__attribute__((deprecated))
svn_error_t *
svn_io_run_diff(const char *dir,
                const char *const *user_args,
                int num_user_args,
                const char *label1,
                const char *label2,
                const char *from,
                const char *to,
                int *exitcode,
                apr_file_t *outfile,
                apr_file_t *errfile,
                const char *diff_cmd,
                apr_pool_t *pool);
# 2031 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_run_diff3_3(int *exitcode,
                   const char *dir,
                   const char *mine,
                   const char *older,
                   const char *yours,
                   const char *mine_label,
                   const char *older_label,
                   const char *yours_label,
                   apr_file_t *merged,
                   const char *diff3_cmd,
                   const apr_array_header_t *user_args,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_io_run_diff3_2(int *exitcode,
                   const char *dir,
                   const char *mine,
                   const char *older,
                   const char *yours,
                   const char *mine_label,
                   const char *older_label,
                   const char *yours_label,
                   apr_file_t *merged,
                   const char *diff3_cmd,
                   const apr_array_header_t *user_args,
                   apr_pool_t *pool);





__attribute__((deprecated))
svn_error_t *
svn_io_run_diff3(const char *dir,
                 const char *mine,
                 const char *older,
                 const char *yours,
                 const char *mine_label,
                 const char *older_label,
                 const char *yours_label,
                 apr_file_t *merged,
                 int *exitcode,
                 const char *diff3_cmd,
                 apr_pool_t *pool);
# 2092 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_parse_mimetypes_file(apr_hash_t **type_map,
                            const char *mimetypes_file,
                            apr_pool_t *pool);
# 2111 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_detect_mimetype2(const char **mimetype,
                        const char *file,
                        apr_hash_t *mimetype_map,
                        apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_io_detect_mimetype(const char **mimetype,
                       const char *file,
                       apr_pool_t *pool);
# 2136 "./subversion/include/svn_io.h"
svn_boolean_t
svn_io_is_binary_data(const void *buf, apr_size_t len);




svn_error_t *
svn_io_file_open(apr_file_t **new_file,
                 const char *fname,
                 apr_int32_t flag,
                 apr_fileperms_t perm,
                 apr_pool_t *pool);



svn_error_t *
svn_io_file_close(apr_file_t *file,
                  apr_pool_t *pool);



svn_error_t *
svn_io_file_getc(char *ch,
                 apr_file_t *file,
                 apr_pool_t *pool);





svn_error_t *
svn_io_file_putc(char ch,
                 apr_file_t *file,
                 apr_pool_t *pool);



svn_error_t *
svn_io_file_info_get(apr_finfo_t *finfo,
                     apr_int32_t wanted,
                     apr_file_t *file,
                     apr_pool_t *pool);



svn_error_t *
svn_io_file_read(apr_file_t *file,
                 void *buf,
                 apr_size_t *nbytes,
                 apr_pool_t *pool);
# 2195 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_read_full2(apr_file_t *file,
                       void *buf,
                       apr_size_t nbytes,
                       apr_size_t *bytes_read,
                       svn_boolean_t *hit_eof,
                       apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_io_file_read_full(apr_file_t *file,
                      void *buf,
                      apr_size_t nbytes,
                      apr_size_t *bytes_read,
                      apr_pool_t *pool);



svn_error_t *
svn_io_file_seek(apr_file_t *file,
                 apr_seek_where_t where,
                 apr_off_t *offset,
                 apr_pool_t *pool);
# 2241 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_aligned_seek(apr_file_t *file,
                         apr_off_t block_size,
                         apr_off_t *buffer_start,
                         apr_off_t offset,
                         apr_pool_t *pool);


svn_error_t *
svn_io_file_write(apr_file_t *file,
                  const void *buf,
                  apr_size_t *nbytes,
                  apr_pool_t *pool);




svn_error_t *
svn_io_file_flush(apr_file_t *file,
                  apr_pool_t *scratch_pool);




svn_error_t *
svn_io_file_write_full(apr_file_t *file,
                       const void *buf,
                       apr_size_t nbytes,
                       apr_size_t *bytes_written,
                       apr_pool_t *pool);
# 2288 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_write_atomic(const char *final_path,
                    const void *buf,
                    apr_size_t nbytes,
                    const char* copy_perms_path,
                    apr_pool_t *scratch_pool);
# 2309 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_write_unique(const char **tmp_path,
                    const char *dirpath,
                    const void *buf,
                    apr_size_t nbytes,
                    svn_io_file_del_t delete_when,
                    apr_pool_t *pool);



svn_error_t *
svn_io_file_trunc(apr_file_t *file,
                  apr_off_t offset,
                  apr_pool_t *pool);



svn_error_t *
svn_io_stat(apr_finfo_t *finfo,
            const char *fname,
            apr_int32_t wanted,
            apr_pool_t *pool);
# 2340 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_rename(const char *from_path,
                   const char *to_path,
                   apr_pool_t *pool);
# 2354 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_move(const char *from_path,
                 const char *to_path,
                 apr_pool_t *pool);



svn_error_t *
svn_io_dir_make(const char *path,
                apr_fileperms_t perm,
                apr_pool_t *pool);



svn_error_t *
svn_io_dir_make_hidden(const char *path,
                       apr_fileperms_t perm,
                       apr_pool_t *pool);
# 2383 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_dir_make_sgid(const char *path,
                     apr_fileperms_t perm,
                     apr_pool_t *pool);


svn_error_t *
svn_io_dir_open(apr_dir_t **new_dir,
                const char *dirname,
                apr_pool_t *pool);





svn_error_t *
svn_io_dir_close(apr_dir_t *thedir);





svn_error_t *
svn_io_dir_remove_nonrecursive(const char *dirname,
                               apr_pool_t *pool);







svn_error_t *
svn_io_dir_read(apr_finfo_t *finfo,
                apr_int32_t wanted,
                apr_dir_t *thedir,
                apr_pool_t *pool);






svn_error_t *
svn_io_file_name_get(const char **filename,
                     apr_file_t *file,
                     apr_pool_t *pool);
# 2444 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_version_file(int *version,
                         const char *path,
                         apr_pool_t *pool);






svn_error_t *
svn_io_write_version_file(const char *path,
                          int version,
                          apr_pool_t *pool);
# 2480 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_readline(apr_file_t *file,
                     svn_stringbuf_t **stringbuf,
                     const char **eol,
                     svn_boolean_t *eof,
                     apr_size_t max_len,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);
# 43 "./subversion/include/svn_delta.h" 2
# 77 "./subversion/include/svn_delta.h"
const svn_version_t *
svn_delta_version(void);
# 116 "./subversion/include/svn_delta.h"
enum svn_delta_action {
# 126 "./subversion/include/svn_delta.h"
    svn_txdelta_source,
# 145 "./subversion/include/svn_delta.h"
    svn_txdelta_target,
# 155 "./subversion/include/svn_delta.h"
    svn_txdelta_new
};


typedef struct svn_txdelta_op_t
{

  enum svn_delta_action action_code;

  apr_size_t offset;

  apr_size_t length;
} svn_txdelta_op_t;
# 188 "./subversion/include/svn_delta.h"
typedef struct svn_txdelta_window_t
{


  svn_filesize_t sview_offset;


  apr_size_t sview_len;



  apr_size_t tview_len;


  int num_ops;





  int src_ops;


  const svn_txdelta_op_t *ops;


  const svn_string_t *new_data;

} svn_txdelta_window_t;






svn_txdelta_window_t *
svn_txdelta_window_dup(const svn_txdelta_window_t *window,
                       apr_pool_t *pool);







svn_txdelta_window_t *
svn_txdelta_compose_windows(const svn_txdelta_window_t *window_A,
                            const svn_txdelta_window_t *window_B,
                            apr_pool_t *pool);
# 254 "./subversion/include/svn_delta.h"
void
svn_txdelta_apply_instructions(svn_txdelta_window_t *window,
                               const char *sbuf, char *tbuf,
                               apr_size_t *tlen);







typedef svn_error_t *(*svn_txdelta_window_handler_t)(
  svn_txdelta_window_t *window, void *baton);
# 287 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_run(svn_stream_t *source,
                svn_stream_t *target,
                svn_txdelta_window_handler_t handler,
                void *handler_baton,
                svn_checksum_kind_t checksum_kind,
                svn_checksum_t **checksum,
                svn_cancel_func_t cancel_func,
                void *cancel_baton,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool);







typedef struct svn_txdelta_stream_t svn_txdelta_stream_t;
# 316 "./subversion/include/svn_delta.h"
typedef svn_error_t *
(*svn_txdelta_next_window_fn_t)(svn_txdelta_window_t **window,
                                void *baton,
                                apr_pool_t *pool);
# 330 "./subversion/include/svn_delta.h"
typedef const unsigned char *
(*svn_txdelta_md5_digest_fn_t)(void *baton);







svn_txdelta_stream_t *
svn_txdelta_stream_create(void *baton,
                          svn_txdelta_next_window_fn_t next_window,
                          svn_txdelta_md5_digest_fn_t md5_digest,
                          apr_pool_t *pool);







svn_error_t *
svn_txdelta_next_window(svn_txdelta_window_t **window,
                        svn_txdelta_stream_t *stream,
                        apr_pool_t *pool);







const unsigned char *
svn_txdelta_md5_digest(svn_txdelta_stream_t *stream);
# 378 "./subversion/include/svn_delta.h"
void
svn_txdelta2(svn_txdelta_stream_t **stream,
             svn_stream_t *source,
             svn_stream_t *target,
             svn_boolean_t calculate_checksum,
             apr_pool_t *pool);





__attribute__((deprecated))
void
svn_txdelta(svn_txdelta_stream_t **stream,
            svn_stream_t *source,
            svn_stream_t *target,
            apr_pool_t *pool);
# 407 "./subversion/include/svn_delta.h"
svn_stream_t *
svn_txdelta_target_push(svn_txdelta_window_handler_t handler,
                        void *handler_baton,
                        svn_stream_t *source,
                        apr_pool_t *pool);
# 420 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_send_string(const svn_string_t *string,
                        svn_txdelta_window_handler_t handler,
                        void *handler_baton,
                        apr_pool_t *pool);
# 436 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_send_stream(svn_stream_t *stream,
                        svn_txdelta_window_handler_t handler,
                        void *handler_baton,
                        unsigned char *digest,
                        apr_pool_t *pool);






svn_error_t *
svn_txdelta_send_txstream(svn_txdelta_stream_t *txstream,
                          svn_txdelta_window_handler_t handler,
                          void *handler_baton,
                          apr_pool_t *pool);
# 462 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_send_contents(const unsigned char *contents,
                          apr_size_t len,
                          svn_txdelta_window_handler_t handler,
                          void *handler_baton,
                          apr_pool_t *pool);
# 489 "./subversion/include/svn_delta.h"
void
svn_txdelta_apply(svn_stream_t *source,
                  svn_stream_t *target,
                  unsigned char *result_digest,
                  const char *error_info,
                  apr_pool_t *pool,
                  svn_txdelta_window_handler_t *handler,
                  void **handler_baton);
# 513 "./subversion/include/svn_delta.h"
void
svn_txdelta_to_svndiff3(svn_txdelta_window_handler_t *handler,
                        void **handler_baton,
                        svn_stream_t *output,
                        int svndiff_version,
                        int compression_level,
                        apr_pool_t *pool);







__attribute__((deprecated))
void
svn_txdelta_to_svndiff2(svn_txdelta_window_handler_t *handler,
                        void **handler_baton,
                        svn_stream_t *output,
                        int svndiff_version,
                        apr_pool_t *pool);






__attribute__((deprecated))
void
svn_txdelta_to_svndiff(svn_stream_t *output,
                       apr_pool_t *pool,
                       svn_txdelta_window_handler_t *handler,
                       void **handler_baton);
# 570 "./subversion/include/svn_delta.h"
svn_stream_t *
svn_txdelta_parse_svndiff(svn_txdelta_window_handler_t handler,
                          void *handler_baton,
                          svn_boolean_t error_on_early_close,
                          apr_pool_t *pool);
# 587 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_read_svndiff_window(svn_txdelta_window_t **window,
                                svn_stream_t *stream,
                                int svndiff_version,
                                apr_pool_t *pool);
# 604 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_skip_svndiff_window(apr_file_t *file,
                                int svndiff_version,
                                apr_pool_t *pool);
# 846 "./subversion/include/svn_delta.h"
typedef struct svn_delta_editor_t
{
# 858 "./subversion/include/svn_delta.h"
  svn_error_t *(*set_target_revision)(void *edit_baton,
                                      svn_revnum_t target_revision,
                                      apr_pool_t *scratch_pool);
# 874 "./subversion/include/svn_delta.h"
  svn_error_t *(*open_root)(void *edit_baton,
                            svn_revnum_t base_revision,
                            apr_pool_t *result_pool,
                            void **root_baton);
# 895 "./subversion/include/svn_delta.h"
  svn_error_t *(*delete_entry)(const char *path,
                               svn_revnum_t revision,
                               void *parent_baton,
                               apr_pool_t *scratch_pool);
# 914 "./subversion/include/svn_delta.h"
  svn_error_t *(*add_directory)(const char *path,
                                void *parent_baton,
                                const char *copyfrom_path,
                                svn_revnum_t copyfrom_revision,
                                apr_pool_t *result_pool,
                                void **child_baton);
# 932 "./subversion/include/svn_delta.h"
  svn_error_t *(*open_directory)(const char *path,
                                 void *parent_baton,
                                 svn_revnum_t base_revision,
                                 apr_pool_t *result_pool,
                                 void **child_baton);
# 949 "./subversion/include/svn_delta.h"
  svn_error_t *(*change_dir_prop)(void *dir_baton,
                                  const char *name,
                                  const svn_string_t *value,
                                  apr_pool_t *scratch_pool);
# 961 "./subversion/include/svn_delta.h"
  svn_error_t *(*close_directory)(void *dir_baton,
                                  apr_pool_t *scratch_pool);
# 973 "./subversion/include/svn_delta.h"
  svn_error_t *(*absent_directory)(const char *path,
                                   void *parent_baton,
                                   apr_pool_t *scratch_pool);
# 1000 "./subversion/include/svn_delta.h"
  svn_error_t *(*add_file)(const char *path,
                           void *parent_baton,
                           const char *copyfrom_path,
                           svn_revnum_t copyfrom_revision,
                           apr_pool_t *result_pool,
                           void **file_baton);
# 1022 "./subversion/include/svn_delta.h"
  svn_error_t *(*open_file)(const char *path,
                            void *parent_baton,
                            svn_revnum_t base_revision,
                            apr_pool_t *result_pool,
                            void **file_baton);
# 1051 "./subversion/include/svn_delta.h"
  svn_error_t *(*apply_textdelta)(void *file_baton,
                                  const char *base_checksum,
                                  apr_pool_t *result_pool,
                                  svn_txdelta_window_handler_t *handler,
                                  void **handler_baton);
# 1068 "./subversion/include/svn_delta.h"
  svn_error_t *(*change_file_prop)(void *file_baton,
                                   const char *name,
                                   const svn_string_t *value,
                                   apr_pool_t *scratch_pool);
# 1086 "./subversion/include/svn_delta.h"
  svn_error_t *(*close_file)(void *file_baton,
                             const char *text_checksum,
                             apr_pool_t *scratch_pool);
# 1098 "./subversion/include/svn_delta.h"
  svn_error_t *(*absent_file)(const char *path,
                              void *parent_baton,
                              apr_pool_t *scratch_pool);






  svn_error_t *(*close_edit)(void *edit_baton,
                             apr_pool_t *scratch_pool);






  svn_error_t *(*abort_edit)(void *edit_baton,
                             apr_pool_t *scratch_pool);



} svn_delta_editor_t;
# 1136 "./subversion/include/svn_delta.h"
svn_delta_editor_t *
svn_delta_default_editor(apr_pool_t *pool);






svn_error_t *
svn_delta_noop_window_handler(svn_txdelta_window_t *window,
                              void *baton);
# 1158 "./subversion/include/svn_delta.h"
svn_error_t *
svn_delta_get_cancellation_editor(svn_cancel_func_t cancel_func,
                                  void *cancel_baton,
                                  const svn_delta_editor_t *wrapped_editor,
                                  void *wrapped_baton,
                                  const svn_delta_editor_t **editor,
                                  void **edit_baton,
                                  apr_pool_t *pool);
# 1201 "./subversion/include/svn_delta.h"
svn_error_t *
svn_delta_depth_filter_editor(const svn_delta_editor_t **editor,
                              void **edit_baton,
                              const svn_delta_editor_t *wrapped_editor,
                              void *wrapped_edit_baton,
                              svn_depth_t requested_depth,
                              svn_boolean_t has_target,
                              apr_pool_t *pool);
# 1241 "./subversion/include/svn_delta.h"
typedef svn_error_t *(*svn_delta_path_driver_cb_func_t)(
  void **dir_baton,
  void *parent_baton,
  void *callback_baton,
  const char *path,
  apr_pool_t *pool);
# 1266 "./subversion/include/svn_delta.h"
svn_error_t *
svn_delta_path_driver2(const svn_delta_editor_t *editor,
                       void *edit_baton,
                       const apr_array_header_t *paths,
                       svn_boolean_t sort_paths,
                       svn_delta_path_driver_cb_func_t callback_func,
                       void *callback_baton,
                       apr_pool_t *scratch_pool);
# 1285 "./subversion/include/svn_delta.h"
__attribute__((deprecated))
svn_error_t *
svn_delta_path_driver(const svn_delta_editor_t *editor,
                      void *edit_baton,
                      svn_revnum_t revision,
                      const apr_array_header_t *paths,
                      svn_delta_path_driver_cb_func_t callback_func,
                      void *callback_baton,
                      apr_pool_t *scratch_pool);
# 1325 "./subversion/include/svn_delta.h"
typedef svn_error_t *(*svn_file_rev_handler_t)(
  void *baton,
  const char *path,
  svn_revnum_t rev,
  apr_hash_t *rev_props,
  svn_boolean_t result_of_merge,
  svn_txdelta_window_handler_t *delta_handler,
  void **delta_baton,
  apr_array_header_t *prop_diffs,
  apr_pool_t *pool);
# 1347 "./subversion/include/svn_delta.h"
typedef svn_error_t *(*svn_file_rev_handler_old_t)(
  void *baton,
  const char *path,
  svn_revnum_t rev,
  apr_hash_t *rev_props,
  svn_txdelta_window_handler_t *delta_handler,
  void **delta_baton,
  apr_array_header_t *prop_diffs,
  apr_pool_t *pool);
# 1370 "./subversion/include/svn_delta.h"
void
svn_compat_wrap_file_rev_handler(svn_file_rev_handler_t *handler2,
                                 void **handler2_baton,
                                 svn_file_rev_handler_old_t handler,
                                 void *handler_baton,
                                 apr_pool_t *pool);
# 39 "./subversion/include/svn_fs.h" 2

# 1 "./subversion/include/svn_mergeinfo.h" 1
# 135 "./subversion/include/svn_mergeinfo.h"
typedef apr_array_header_t svn_rangelist_t;






typedef apr_hash_t *svn_mergeinfo_t;







typedef apr_hash_t *svn_mergeinfo_catalog_t;
# 173 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_parse(svn_mergeinfo_t *mergeinfo, const char *input,
                    apr_pool_t *pool);
# 200 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_diff2(svn_mergeinfo_t *deleted, svn_mergeinfo_t *added,
                    svn_mergeinfo_t mergefrom, svn_mergeinfo_t mergeto,
                    svn_boolean_t consider_inheritance,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_mergeinfo_diff(svn_mergeinfo_t *deleted, svn_mergeinfo_t *added,
                   svn_mergeinfo_t mergefrom, svn_mergeinfo_t mergeto,
                   svn_boolean_t consider_inheritance,
                   apr_pool_t *pool);
# 236 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_merge2(svn_mergeinfo_t mergeinfo,
                     svn_mergeinfo_t changes,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_mergeinfo_merge(svn_mergeinfo_t mergeinfo,
                    svn_mergeinfo_t changes,
                    apr_pool_t *pool);
# 261 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_catalog_merge(svn_mergeinfo_catalog_t mergeinfo_catalog,
                            svn_mergeinfo_catalog_t changes_catalog,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_mergeinfo_remove(svn_mergeinfo_t *mergeinfo, svn_mergeinfo_t eraser,
                     svn_mergeinfo_t whiteboard, apr_pool_t *pool);
# 287 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_remove2(svn_mergeinfo_t *mergeinfo,
                      svn_mergeinfo_t eraser,
                      svn_mergeinfo_t whiteboard,
                      svn_boolean_t consider_inheritance,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 306 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_diff(svn_rangelist_t **deleted, svn_rangelist_t **added,
                   const svn_rangelist_t *from, const svn_rangelist_t *to,
                   svn_boolean_t consider_inheritance,
                   apr_pool_t *pool);
# 333 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_merge2(svn_rangelist_t *rangelist,
                     const svn_rangelist_t *changes,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);
# 351 "./subversion/include/svn_mergeinfo.h"
__attribute__((deprecated))
svn_error_t *
svn_rangelist_merge(svn_rangelist_t **rangelist,
                    const svn_rangelist_t *changes,
                    apr_pool_t *pool);
# 372 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_remove(svn_rangelist_t **output, const svn_rangelist_t *eraser,
                     const svn_rangelist_t *whiteboard,
                     svn_boolean_t consider_inheritance,
                     apr_pool_t *pool);
# 389 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_intersect2(svn_mergeinfo_t *mergeinfo,
                         svn_mergeinfo_t mergeinfo1,
                         svn_mergeinfo_t mergeinfo2,
                         svn_boolean_t consider_inheritance,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_mergeinfo_intersect(svn_mergeinfo_t *mergeinfo,
                        svn_mergeinfo_t mergeinfo1,
                        svn_mergeinfo_t mergeinfo2,
                        apr_pool_t *pool);
# 429 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_intersect(svn_rangelist_t **rangelist,
                        const svn_rangelist_t *rangelist1,
                        const svn_rangelist_t *rangelist2,
                        svn_boolean_t consider_inheritance,
                        apr_pool_t *pool);
# 446 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_reverse(svn_rangelist_t *rangelist, apr_pool_t *pool);







svn_error_t *
svn_rangelist_to_string(svn_string_t **output,
                        const svn_rangelist_t *rangelist,
                        apr_pool_t *pool);
# 478 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_inheritable2(svn_rangelist_t **inheritable_rangelist,
                           const svn_rangelist_t *rangelist,
                           svn_revnum_t start,
                           svn_revnum_t end,
                           svn_boolean_t inheritable,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_rangelist_inheritable(svn_rangelist_t **inheritable_rangelist,
                          const svn_rangelist_t *rangelist,
                          svn_revnum_t start,
                          svn_revnum_t end,
                          apr_pool_t *pool);
# 523 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_inheritable2(svn_mergeinfo_t *inheritable_mergeinfo,
                           svn_mergeinfo_t mergeinfo,
                           const char *path,
                           svn_revnum_t start,
                           svn_revnum_t end,
                           svn_boolean_t inheritable,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_mergeinfo_inheritable(svn_mergeinfo_t *inheritable_mergeinfo,
                          svn_mergeinfo_t mergeinfo,
                          const char *path,
                          svn_revnum_t start,
                          svn_revnum_t end,
                          apr_pool_t *pool);
# 556 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_to_string(svn_string_t **output,
                        svn_mergeinfo_t mergeinput,
                        apr_pool_t *pool);
# 569 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_sort(svn_mergeinfo_t mergeinfo, apr_pool_t *pool);





svn_mergeinfo_catalog_t
svn_mergeinfo_catalog_dup(svn_mergeinfo_catalog_t mergeinfo_catalog,
                          apr_pool_t *pool);





svn_mergeinfo_t
svn_mergeinfo_dup(svn_mergeinfo_t mergeinfo, apr_pool_t *pool);





svn_rangelist_t *
svn_rangelist_dup(const svn_rangelist_t *rangelist, apr_pool_t *pool);







typedef enum svn_mergeinfo_inheritance_t
{

  svn_mergeinfo_explicit,




  svn_mergeinfo_inherited,




  svn_mergeinfo_nearest_ancestor
} svn_mergeinfo_inheritance_t;
# 623 "./subversion/include/svn_mergeinfo.h"
const char *
svn_inheritance_to_word(svn_mergeinfo_inheritance_t inherit);
# 633 "./subversion/include/svn_mergeinfo.h"
svn_mergeinfo_inheritance_t
svn_inheritance_from_word(const char *word);
# 41 "./subversion/include/svn_fs.h" 2
# 54 "./subversion/include/svn_fs.h"
const svn_version_t *
svn_fs_version(void);
# 66 "./subversion/include/svn_fs.h"
typedef struct svn_fs_t svn_fs_t;
# 224 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_initialize(apr_pool_t *pool);
# 235 "./subversion/include/svn_fs.h"
typedef void (*svn_fs_warning_callback_t)(void *baton, svn_error_t *err);
# 247 "./subversion/include/svn_fs.h"
void
svn_fs_set_warning_func(svn_fs_t *fs,
                        svn_fs_warning_callback_t warning,
                        void *warning_baton);
# 283 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_create(svn_fs_t **fs_p,
              const char *path,
              apr_hash_t *fs_config,
              apr_pool_t *pool);
# 310 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_open2(svn_fs_t **fs_p,
             const char *path,
             apr_hash_t *fs_config,
             apr_pool_t *result_pool,
             apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_fs_open(svn_fs_t **fs_p,
            const char *path,
            apr_hash_t *fs_config,
            apr_pool_t *pool);





typedef enum svn_fs_upgrade_notify_action_t
{


  svn_fs_upgrade_pack_revprops = 0,



  svn_fs_upgrade_cleanup_revprops,



  svn_fs_upgrade_format_bumped
} svn_fs_upgrade_notify_action_t;
# 357 "./subversion/include/svn_fs.h"
typedef svn_error_t *(*svn_fs_upgrade_notify_t)(void *baton,
                                      apr_uint64_t number,
                                      svn_fs_upgrade_notify_action_t action,
                                      apr_pool_t *pool);
# 384 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_upgrade2(const char *path,
                svn_fs_upgrade_notify_t notify_func,
                void *notify_baton,
                svn_cancel_func_t cancel_func,
                void *cancel_baton,
                apr_pool_t *pool);
# 399 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_upgrade(const char *path,
               apr_pool_t *pool);
# 413 "./subversion/include/svn_fs.h"
typedef void (*svn_fs_progress_notify_func_t)(svn_revnum_t revision,
                                              void *baton,
                                              apr_pool_t *pool);
# 432 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_type(const char **fs_type,
            const char *path,
            apr_pool_t *pool);
# 444 "./subversion/include/svn_fs.h"
const char *
svn_fs_path(svn_fs_t *fs,
            apr_pool_t *pool);
# 458 "./subversion/include/svn_fs.h"
apr_hash_t *
svn_fs_config(svn_fs_t *fs,
              apr_pool_t *pool);
# 471 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_delete_fs(const char *path,
                 apr_pool_t *pool);






typedef void (*svn_fs_hotcopy_notify_t)(void *baton,
                                        svn_revnum_t start_revision,
                                        svn_revnum_t end_revision,
                                        apr_pool_t *pool);
# 507 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_hotcopy3(const char *src_path,
                const char *dest_path,
                svn_boolean_t clean,
                svn_boolean_t incremental,
                svn_fs_hotcopy_notify_t notify_func,
                void *notify_baton,
                svn_cancel_func_t cancel_func,
                void *cancel_baton,
                apr_pool_t *scratch_pool);
# 525 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_hotcopy2(const char *src_path,
                const char *dest_path,
                svn_boolean_t clean,
                svn_boolean_t incremental,
                svn_cancel_func_t cancel_func,
                void *cancel_baton,
                apr_pool_t *scratch_pool);
# 542 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_hotcopy(const char *src_path,
               const char *dest_path,
               svn_boolean_t clean,
               apr_pool_t *pool);
# 584 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_recover(const char *path,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               apr_pool_t *pool);







typedef svn_error_t *(*svn_fs_freeze_func_t)(void *baton, apr_pool_t *pool);
# 615 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_freeze(svn_fs_t *fs,
              svn_fs_freeze_func_t freeze_func,
              void *freeze_baton,
              apr_pool_t *pool);
# 656 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_set_berkeley_errcall(svn_fs_t *fs,
                            void (*handler)(const char *errpfx,
                                            char *msg));
# 675 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_berkeley_logfiles(apr_array_header_t **logfiles,
                         const char *path,
                         svn_boolean_t only_unused,
                         apr_pool_t *pool);
# 695 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_fs_t *
svn_fs_new(apr_hash_t *fs_config,
           apr_pool_t *pool);


__attribute__((deprecated))
svn_error_t *
svn_fs_create_berkeley(svn_fs_t *fs,
                       const char *path);


__attribute__((deprecated))
svn_error_t *
svn_fs_open_berkeley(svn_fs_t *fs,
                     const char *path);


__attribute__((deprecated))
const char *
svn_fs_berkeley_path(svn_fs_t *fs,
                     apr_pool_t *pool);


__attribute__((deprecated))
svn_error_t *
svn_fs_delete_berkeley(const char *path,
                       apr_pool_t *pool);


__attribute__((deprecated))
svn_error_t *
svn_fs_hotcopy_berkeley(const char *src_path,
                        const char *dest_path,
                        svn_boolean_t clean_logs,
                        apr_pool_t *pool);


__attribute__((deprecated))
svn_error_t *
svn_fs_berkeley_recover(const char *path,
                        apr_pool_t *pool);
# 760 "./subversion/include/svn_fs.h"
typedef struct svn_fs_access_t svn_fs_access_t;
# 769 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_create_access(svn_fs_access_t **access_ctx,
                     const char *username,
                     apr_pool_t *pool);
# 783 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_set_access(svn_fs_t *fs,
                  svn_fs_access_t *access_ctx);





svn_error_t *
svn_fs_get_access(svn_fs_access_t **access_ctx,
                  svn_fs_t *fs);





svn_error_t *
svn_fs_access_get_username(const char **username,
                           svn_fs_access_t *access_ctx);
# 811 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_access_add_lock_token2(svn_fs_access_t *access_ctx,
                              const char *path,
                              const char *token);






__attribute__((deprecated))
svn_error_t *
svn_fs_access_add_lock_token(svn_fs_access_t *access_ctx,
                             const char *token);
# 878 "./subversion/include/svn_fs.h"
typedef enum svn_fs_node_relation_t
{




  svn_fs_node_unrelated = 0,





  svn_fs_node_same,





  svn_fs_node_common_ancestor

} svn_fs_node_relation_t;


typedef struct svn_fs_id_t svn_fs_id_t;
# 911 "./subversion/include/svn_fs.h"
int
svn_fs_compare_ids(const svn_fs_id_t *a,
                   const svn_fs_id_t *b);
# 924 "./subversion/include/svn_fs.h"
svn_boolean_t
svn_fs_check_related(const svn_fs_id_t *id1,
                     const svn_fs_id_t *id2);
# 936 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_fs_id_t *
svn_fs_parse_id(const char *data,
                apr_size_t len,
                apr_pool_t *pool);






svn_string_t *
svn_fs_unparse_id(const svn_fs_id_t *id,
                  apr_pool_t *pool);
# 1049 "./subversion/include/svn_fs.h"
typedef struct svn_fs_txn_t svn_fs_txn_t;
# 1097 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_begin_txn2(svn_fs_txn_t **txn_p,
                  svn_fs_t *fs,
                  svn_revnum_t rev,
                  apr_uint32_t flags,
                  apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_fs_begin_txn(svn_fs_txn_t **txn_p,
                 svn_fs_t *fs,
                 svn_revnum_t rev,
                 apr_pool_t *pool);
# 1180 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_commit_txn(const char **conflict_p,
                  svn_revnum_t *new_rev,
                  svn_fs_txn_t *txn,
                  apr_pool_t *pool);
# 1197 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_abort_txn(svn_fs_txn_t *txn,
                 apr_pool_t *pool);
# 1208 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_purge_txn(svn_fs_t *fs,
                 const char *txn_id,
                 apr_pool_t *pool);





svn_error_t *
svn_fs_txn_name(const char **name_p,
                svn_fs_txn_t *txn,
                apr_pool_t *pool);


svn_revnum_t
svn_fs_txn_base_revision(svn_fs_txn_t *txn);
# 1237 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_open_txn(svn_fs_txn_t **txn,
                svn_fs_t *fs,
                const char *name,
                apr_pool_t *pool);






svn_error_t *
svn_fs_list_transactions(apr_array_header_t **names_p,
                         svn_fs_t *fs,
                         apr_pool_t *pool);







svn_error_t *
svn_fs_txn_prop(svn_string_t **value_p,
                svn_fs_txn_t *txn,
                const char *propname,
                apr_pool_t *pool);






svn_error_t *
svn_fs_txn_proplist(apr_hash_t **table_p,
                    svn_fs_txn_t *txn,
                    apr_pool_t *pool);







svn_error_t *
svn_fs_change_txn_prop(svn_fs_txn_t *txn,
                       const char *name,
                       const svn_string_t *value,
                       apr_pool_t *pool);
# 1298 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_change_txn_props(svn_fs_txn_t *txn,
                        const apr_array_header_t *props,
                        apr_pool_t *pool);
# 1318 "./subversion/include/svn_fs.h"
typedef struct svn_fs_root_t svn_fs_root_t;






svn_error_t *
svn_fs_revision_root(svn_fs_root_t **root_p,
                     svn_fs_t *fs,
                     svn_revnum_t rev,
                     apr_pool_t *pool);






svn_error_t *
svn_fs_txn_root(svn_fs_root_t **root_p,
                svn_fs_txn_t *txn,
                apr_pool_t *pool);







void
svn_fs_close_root(svn_fs_root_t *root);



svn_fs_t *
svn_fs_root_fs(svn_fs_root_t *root);



svn_boolean_t
svn_fs_is_txn_root(svn_fs_root_t *root);


svn_boolean_t
svn_fs_is_revision_root(svn_fs_root_t *root);





const char *
svn_fs_txn_root_name(svn_fs_root_t *root,
                     apr_pool_t *pool);







svn_revnum_t
svn_fs_txn_root_base_revision(svn_fs_root_t *root);




svn_revnum_t
svn_fs_revision_root_revision(svn_fs_root_t *root);
# 1419 "./subversion/include/svn_fs.h"
typedef enum svn_fs_path_change_kind_t
{

  svn_fs_path_change_modify = 0,


  svn_fs_path_change_add,


  svn_fs_path_change_delete,


  svn_fs_path_change_replace,


  svn_fs_path_change_reset
} svn_fs_path_change_kind_t;
# 1449 "./subversion/include/svn_fs.h"
typedef struct svn_fs_path_change2_t
{

  const svn_fs_id_t *node_rev_id;


  svn_fs_path_change_kind_t change_kind;
# 1465 "./subversion/include/svn_fs.h"
  svn_boolean_t text_mod;
# 1474 "./subversion/include/svn_fs.h"
  svn_boolean_t prop_mod;



  svn_node_kind_t node_kind;



  svn_boolean_t copyfrom_known;
  svn_revnum_t copyfrom_rev;
  const char *copyfrom_path;
# 1494 "./subversion/include/svn_fs.h"
  svn_tristate_t mergeinfo_mod;


} svn_fs_path_change2_t;
# 1506 "./subversion/include/svn_fs.h"
typedef struct svn_fs_path_change_t
{

  const svn_fs_id_t *node_rev_id;


  svn_fs_path_change_kind_t change_kind;


  svn_boolean_t text_mod;


  svn_boolean_t prop_mod;

} svn_fs_path_change_t;
# 1532 "./subversion/include/svn_fs.h"
svn_fs_path_change2_t *
svn_fs_path_change2_create(const svn_fs_id_t *node_rev_id,
                           svn_fs_path_change_kind_t change_kind,
                           apr_pool_t *pool);
# 1553 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_paths_changed2(apr_hash_t **changed_paths2_p,
                      svn_fs_root_t *root,
                      apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_fs_paths_changed(apr_hash_t **changed_paths_p,
                     svn_fs_root_t *root,
                     apr_pool_t *pool);
# 1579 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_check_path(svn_node_kind_t *kind_p,
                  svn_fs_root_t *root,
                  const char *path,
                  apr_pool_t *pool);



typedef struct svn_fs_history_t svn_fs_history_t;
# 1597 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_node_history2(svn_fs_history_t **history_p,
                     svn_fs_root_t *root,
                     const char *path,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_fs_node_history(svn_fs_history_t **history_p,
                    svn_fs_root_t *root,
                    const char *path,
                    apr_pool_t *pool);
# 1648 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_history_prev2(svn_fs_history_t **prev_history_p,
                     svn_fs_history_t *history,
                     svn_boolean_t cross_copies,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_fs_history_prev(svn_fs_history_t **prev_history_p,
                    svn_fs_history_t *history,
                    svn_boolean_t cross_copies,
                    apr_pool_t *pool);






svn_error_t *
svn_fs_history_location(const char **path,
                        svn_revnum_t *revision,
                        svn_fs_history_t *history,
                        apr_pool_t *pool);





svn_error_t *
svn_fs_is_dir(svn_boolean_t *is_dir,
              svn_fs_root_t *root,
              const char *path,
              apr_pool_t *pool);





svn_error_t *
svn_fs_is_file(svn_boolean_t *is_file,
               svn_fs_root_t *root,
               const char *path,
               apr_pool_t *pool);
# 1708 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_node_id(const svn_fs_id_t **id_p,
               svn_fs_root_t *root,
               const char *path,
               apr_pool_t *pool);
# 1725 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_node_relation(svn_fs_node_relation_t *relation,
                     svn_fs_root_t *root_a,
                     const char *path_a,
                     svn_fs_root_t *root_b,
                     const char *path_b,
                     apr_pool_t *pool);
# 1740 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_node_created_rev(svn_revnum_t *revision,
                        svn_fs_root_t *root,
                        const char *path,
                        apr_pool_t *pool);
# 1755 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_node_origin_rev(svn_revnum_t *revision,
                       svn_fs_root_t *root,
                       const char *path,
                       apr_pool_t *pool);







svn_error_t *
svn_fs_node_created_path(const char **created_path,
                         svn_fs_root_t *root,
                         const char *path,
                         apr_pool_t *pool);






svn_error_t *
svn_fs_node_prop(svn_string_t **value_p,
                 svn_fs_root_t *root,
                 const char *path,
                 const char *propname,
                 apr_pool_t *pool);







svn_error_t *
svn_fs_node_proplist(apr_hash_t **table_p,
                     svn_fs_root_t *root,
                     const char *path,
                     apr_pool_t *pool);
# 1807 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_change_node_prop(svn_fs_root_t *root,
                        const char *path,
                        const char *name,
                        const svn_string_t *value,
                        apr_pool_t *pool);
# 1825 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_props_different(svn_boolean_t *different_p,
                       svn_fs_root_t *root1,
                       const char *path1,
                       svn_fs_root_t *root2,
                       const char *path2,
                       apr_pool_t *pool);
# 1854 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_props_changed(svn_boolean_t *changed_p,
                     svn_fs_root_t *root1,
                     const char *path1,
                     svn_fs_root_t *root2,
                     const char *path2,
                     apr_pool_t *pool);
# 1907 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_copied_from(svn_revnum_t *rev_p,
                   const char **path_p,
                   svn_fs_root_t *root,
                   const char *path,
                   apr_pool_t *pool);
# 1930 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_closest_copy(svn_fs_root_t **root_p,
                    const char **path_p,
                    svn_fs_root_t *root,
                    const char *path,
                    apr_pool_t *pool);
# 1973 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_get_mergeinfo2(svn_mergeinfo_catalog_t *catalog,
                      svn_fs_root_t *root,
                      const apr_array_header_t *paths,
                      svn_mergeinfo_inheritance_t inherit,
                      svn_boolean_t include_descendants,
                      svn_boolean_t adjust_inherited_mergeinfo,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_fs_get_mergeinfo(svn_mergeinfo_catalog_t *catalog,
                     svn_fs_root_t *root,
                     const apr_array_header_t *paths,
                     svn_mergeinfo_inheritance_t inherit,
                     svn_boolean_t include_descendants,
                     apr_pool_t *pool);
# 2025 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_merge(const char **conflict_p,
             svn_fs_root_t *source_root,
             const char *source_path,
             svn_fs_root_t *target_root,
             const char *target_path,
             svn_fs_root_t *ancestor_root,
             const char *ancestor_path,
             apr_pool_t *pool);







typedef struct svn_fs_dirent_t
{


  const char *name;


  const svn_fs_id_t *id;


  svn_node_kind_t kind;

} svn_fs_dirent_t;
# 2062 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_dir_entries(apr_hash_t **entries_p,
                   svn_fs_root_t *root,
                   const char *path,
                   apr_pool_t *pool);
# 2076 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_dir_optimal_order(apr_array_header_t **ordered_p,
                         svn_fs_root_t *root,
                         apr_hash_t *entries,
                         apr_pool_t *pool);







svn_error_t *
svn_fs_make_dir(svn_fs_root_t *root,
                const char *path,
                apr_pool_t *pool);
# 2106 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_delete(svn_fs_root_t *root,
              const char *path,
              apr_pool_t *pool);
# 2133 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_copy(svn_fs_root_t *from_root,
            const char *from_path,
            svn_fs_root_t *to_root,
            const char *to_path,
            apr_pool_t *pool);
# 2149 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_revision_link(svn_fs_root_t *from_root,
                     svn_fs_root_t *to_root,
                     const char *path,
                     apr_pool_t *pool);







svn_error_t *
svn_fs_file_length(svn_filesize_t *length_p,
                   svn_fs_root_t *root,
                   const char *path,
                   apr_pool_t *pool);
# 2201 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_file_checksum(svn_checksum_t **checksum,
                     svn_checksum_kind_t kind,
                     svn_fs_root_t *root,
                     const char *path,
                     svn_boolean_t force,
                     apr_pool_t *pool);
# 2216 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_file_md5_checksum(unsigned char digest[],
                         svn_fs_root_t *root,
                         const char *path,
                         apr_pool_t *pool);
# 2239 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_file_contents(svn_stream_t **contents,
                     svn_fs_root_t *root,
                     const char *path,
                     apr_pool_t *pool);
# 2254 "./subversion/include/svn_fs.h"
typedef svn_error_t *
(*svn_fs_process_contents_func_t)(const unsigned char *contents,
                                  apr_size_t len,
                                  void *baton,
                                  apr_pool_t *scratch_pool);
# 2275 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_try_process_file_contents(svn_boolean_t *success,
                                 svn_fs_root_t *root,
                                 const char *path,
                                 svn_fs_process_contents_func_t processor,
                                 void* baton,
                                 apr_pool_t *pool);







svn_error_t *
svn_fs_make_file(svn_fs_root_t *root,
                 const char *path,
                 apr_pool_t *pool);
# 2329 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_apply_textdelta(svn_txdelta_window_handler_t *contents_p,
                       void **contents_baton_p,
                       svn_fs_root_t *root,
                       const char *path,
                       const char *base_checksum,
                       const char *result_checksum,
                       apr_pool_t *pool);
# 2362 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_apply_text(svn_stream_t **contents_p,
                  svn_fs_root_t *root,
                  const char *path,
                  const char *result_checksum,
                  apr_pool_t *pool);
# 2380 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_contents_different(svn_boolean_t *different_p,
                          svn_fs_root_t *root1,
                          const char *path1,
                          svn_fs_root_t *root2,
                          const char *path2,
                          apr_pool_t *pool);
# 2403 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_contents_changed(svn_boolean_t *changed_p,
                        svn_fs_root_t *root1,
                        const char *path1,
                        svn_fs_root_t *root2,
                        const char *path2,
                        apr_pool_t *pool);
# 2421 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_youngest_rev(svn_revnum_t *youngest_p,
                    svn_fs_t *fs,
                    apr_pool_t *pool);
# 2441 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_info_format(int *fs_format,
                   svn_version_t **supports_version,
                   svn_fs_t *fs,
                   apr_pool_t *result_pool,
                   apr_pool_t *scratch_pool);







svn_error_t *
svn_fs_info_config_files(apr_array_header_t **files,
                         svn_fs_t *fs,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 2470 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_deltify_revision(svn_fs_t *fs,
                        svn_revnum_t revision,
                        apr_pool_t *pool);






svn_error_t *
svn_fs_revision_prop(svn_string_t **value_p,
                     svn_fs_t *fs,
                     svn_revnum_t rev,
                     const char *propname,
                     apr_pool_t *pool);







svn_error_t *
svn_fs_revision_proplist(apr_hash_t **table_p,
                         svn_fs_t *fs,
                         svn_revnum_t rev,
                         apr_pool_t *pool);
# 2521 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_change_rev_prop2(svn_fs_t *fs,
                        svn_revnum_t rev,
                        const char *name,
                        const svn_string_t *const *old_value_p,
                        const svn_string_t *value,
                        apr_pool_t *pool);
# 2536 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_change_rev_prop(svn_fs_t *fs,
                       svn_revnum_t rev,
                       const char *name,
                       const svn_string_t *value,
                       apr_pool_t *pool);
# 2558 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_get_file_delta_stream(svn_txdelta_stream_t **stream_p,
                             svn_fs_root_t *source_root,
                             const char *source_path,
                             svn_fs_root_t *target_root,
                             const char *target_path,
                             apr_pool_t *pool);







svn_error_t *
svn_fs_get_uuid(svn_fs_t *fs,
                const char **uuid,
                apr_pool_t *pool);






svn_error_t *
svn_fs_set_uuid(svn_fs_t *fs,
                const char *uuid,
                apr_pool_t *pool);
# 2622 "./subversion/include/svn_fs.h"
typedef struct svn_fs_lock_target_t svn_fs_lock_target_t;
# 2632 "./subversion/include/svn_fs.h"
svn_fs_lock_target_t *svn_fs_lock_target_create(const char *token,
                                                svn_revnum_t current_rev,
                                                apr_pool_t *pool);
# 2643 "./subversion/include/svn_fs.h"
void svn_fs_lock_target_set_token(svn_fs_lock_target_t *target,
                                  const char *token);
# 2658 "./subversion/include/svn_fs.h"
typedef svn_error_t *(*svn_fs_lock_callback_t)(void *baton,
                                               const char *path,
                                               const svn_lock_t *lock,
                                               svn_error_t *fs_err,
                                               apr_pool_t *pool);
# 2714 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_lock_many(svn_fs_t *fs,
                 apr_hash_t *targets,
                 const char *comment,
                 svn_boolean_t is_dav_comment,
                 apr_time_t expiration_date,
                 svn_boolean_t steal_lock,
                 svn_fs_lock_callback_t lock_callback,
                 void *lock_baton,
                 apr_pool_t *result_pool,
                 apr_pool_t *scratch_pool);






svn_error_t *
svn_fs_lock(svn_lock_t **lock,
            svn_fs_t *fs,
            const char *path,
            const char *token,
            const char *comment,
            svn_boolean_t is_dav_comment,
            apr_time_t expiration_date,
            svn_revnum_t current_rev,
            svn_boolean_t steal_lock,
            apr_pool_t *pool);
# 2750 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_generate_lock_token(const char **token,
                           svn_fs_t *fs,
                           apr_pool_t *pool);
# 2786 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_unlock_many(svn_fs_t *fs,
                   apr_hash_t *targets,
                   svn_boolean_t break_lock,
                   svn_fs_lock_callback_t lock_callback,
                   void *lock_baton,
                   apr_pool_t *result_pool,
                   apr_pool_t *scratch_pool);





svn_error_t *
svn_fs_unlock(svn_fs_t *fs,
              const char *path,
              const char *token,
              svn_boolean_t break_lock,
              apr_pool_t *pool);







svn_error_t *
svn_fs_get_lock(svn_lock_t **lock,
                svn_fs_t *fs,
                const char *path,
                apr_pool_t *pool);
# 2825 "./subversion/include/svn_fs.h"
typedef svn_error_t *(*svn_fs_get_locks_callback_t)(void *baton,
                                                    svn_lock_t *lock,
                                                    apr_pool_t *pool);
# 2850 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_get_locks2(svn_fs_t *fs,
                  const char *path,
                  svn_depth_t depth,
                  svn_fs_get_locks_callback_t get_locks_func,
                  void *get_locks_baton,
                  apr_pool_t *pool);
# 2872 "./subversion/include/svn_fs.h"
__attribute__((deprecated))
svn_error_t *
svn_fs_get_locks(svn_fs_t *fs,
                 const char *path,
                 svn_fs_get_locks_callback_t get_locks_func,
                 void *get_locks_baton,
                 apr_pool_t *pool);
# 2889 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_print_modules(svn_stringbuf_t *output,
                     apr_pool_t *pool);



typedef enum svn_fs_pack_notify_action_t
{

  svn_fs_pack_notify_start = 0,


  svn_fs_pack_notify_end,



  svn_fs_pack_notify_start_revprop,



  svn_fs_pack_notify_end_revprop

} svn_fs_pack_notify_action_t;






typedef svn_error_t *(*svn_fs_pack_notify_t)(void *baton,
                                             apr_int64_t shard,
                                             svn_fs_pack_notify_action_t action,
                                             apr_pool_t *pool);







svn_error_t *
svn_fs_pack(const char *db_path,
            svn_fs_pack_notify_t notify_func,
            void *notify_baton,
            svn_cancel_func_t cancel_func,
            void *cancel_baton,
            apr_pool_t *pool);
# 2980 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_verify(const char *path,
              apr_hash_t *fs_config,
              svn_revnum_t start,
              svn_revnum_t end,
              svn_fs_progress_notify_func_t notify_func,
              void *notify_baton,
              svn_cancel_func_t cancel_func,
              void *cancel_baton,
              apr_pool_t *scratch_pool);
# 3015 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_verify_root(svn_fs_root_t *root,
                   apr_pool_t *scratch_pool);
# 3036 "./subversion/include/svn_fs.h"
typedef struct svn_fs_fsfs_info_t {


  const char *fs_type;


  int shard_size;



  svn_revnum_t min_unpacked_rev;



  svn_boolean_t log_addressing;




} svn_fs_fsfs_info_t;
# 3067 "./subversion/include/svn_fs.h"
typedef struct svn_fs_fsx_info_t {


  const char *fs_type;


  int shard_size;


  svn_revnum_t min_unpacked_rev;




} svn_fs_fsx_info_t;



typedef struct svn_fs_info_placeholder_t {

  const char *fs_type;



} svn_fs_info_placeholder_t;
# 3103 "./subversion/include/svn_fs.h"
svn_error_t *
svn_fs_info(const svn_fs_info_placeholder_t **fs_info,
            svn_fs_t *fs,
            apr_pool_t *result_pool,
            apr_pool_t *scratch_pool);
# 3119 "./subversion/include/svn_fs.h"
void *
svn_fs_info_dup(const void *info,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool);
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_hash.h" 1
# 79 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_read2(apr_hash_t *hash,
               svn_stream_t *stream,
               const char *terminator,
               apr_pool_t *pool);
# 93 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_write2(apr_hash_t *hash,
                svn_stream_t *stream,
                const char *terminator,
                apr_pool_t *pool);
# 106 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_read_incremental(apr_hash_t *hash,
                          svn_stream_t *stream,
                          const char *terminator,
                          apr_pool_t *pool);
# 120 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_write_incremental(apr_hash_t *hash,
                           apr_hash_t *oldhash,
                           svn_stream_t *stream,
                           const char *terminator,
                           apr_pool_t *pool);
# 135 "./subversion/include/svn_hash.h"
__attribute__((deprecated))
svn_error_t *
svn_hash_read(apr_hash_t *hash,
              apr_file_t *srcfile,
              apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_hash_write(apr_hash_t *hash,
               apr_file_t *destfile,
               apr_pool_t *pool);
# 163 "./subversion/include/svn_hash.h"
enum svn_hash_diff_key_status
  {

    svn_hash_diff_key_both,


    svn_hash_diff_key_a,


    svn_hash_diff_key_b
  };



typedef svn_error_t *(*svn_hash_diff_func_t)
  (const void *key, apr_ssize_t klen,
   enum svn_hash_diff_key_status status,
   void *baton);
# 200 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_diff(apr_hash_t *hash_a,
              apr_hash_t *hash_b,
              svn_hash_diff_func_t diff_func,
              void *diff_func_baton,
              apr_pool_t *pool);
# 224 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_keys(apr_array_header_t **array,
              apr_hash_t *hash,
              apr_pool_t *pool);
# 237 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_from_cstring_keys(apr_hash_t **hash,
                           const apr_array_header_t *keys,
                           apr_pool_t *pool);
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_iter.h" 1
# 53 "./subversion/include/svn_iter.h"
typedef svn_error_t *(*svn_iter_apr_hash_cb_t)(void *baton,
                                               const void *key,
                                               apr_ssize_t klen,
                                               void *val, apr_pool_t *pool);
# 73 "./subversion/include/svn_iter.h"
svn_error_t *
svn_iter_apr_hash(svn_boolean_t *completed,
                  apr_hash_t *hash,
                  svn_iter_apr_hash_cb_t func,
                  void *baton,
                  apr_pool_t *pool);
# 90 "./subversion/include/svn_iter.h"
typedef svn_error_t *(*svn_iter_apr_array_cb_t)(void *baton,
                                                void *item,
                                                apr_pool_t *pool);
# 109 "./subversion/include/svn_iter.h"
svn_error_t *
svn_iter_apr_array(svn_boolean_t *completed,
                   const apr_array_header_t *array,
                   svn_iter_apr_array_cb_t func,
                   void *baton,
                   apr_pool_t *pool);




svn_error_t *
svn_iter__break(void);
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_repos.h" 1
# 54 "./subversion/include/svn_repos.h"
const svn_version_t *
svn_repos_version(void);





enum svn_node_action
{
  svn_node_action_change,
  svn_node_action_add,
  svn_node_action_delete,
  svn_node_action_replace
};
# 93 "./subversion/include/svn_repos.h"
typedef svn_error_t *(*svn_repos_authz_func_t)(svn_boolean_t *allowed,
                                               svn_fs_root_t *root,
                                               const char *path,
                                               void *baton,
                                               apr_pool_t *pool);






typedef enum svn_repos_authz_access_t
{

  svn_authz_none = 0,


  svn_authz_read = 1,


  svn_authz_write = 2,


  svn_authz_recursive = 4
} svn_repos_authz_access_t;
# 154 "./subversion/include/svn_repos.h"
typedef svn_error_t *(*svn_repos_authz_callback_t)
  (svn_repos_authz_access_t required,
   svn_boolean_t *allowed,
   svn_fs_root_t *root,
   const char *path,
   void *baton,
   apr_pool_t *pool);
# 175 "./subversion/include/svn_repos.h"
typedef enum svn_repos_notify_action_t
{

  svn_repos_notify_warning = 0,


  svn_repos_notify_dump_rev_end,


  svn_repos_notify_verify_rev_end,


  svn_repos_notify_dump_end,


  svn_repos_notify_verify_end,


  svn_repos_notify_pack_shard_start,


  svn_repos_notify_pack_shard_end,


  svn_repos_notify_pack_shard_start_revprop,


  svn_repos_notify_pack_shard_end_revprop,


  svn_repos_notify_load_txn_start,


  svn_repos_notify_load_txn_committed,


  svn_repos_notify_load_node_start,


  svn_repos_notify_load_node_done,


  svn_repos_notify_load_copied_node,


  svn_repos_notify_load_normalized_mergeinfo,


  svn_repos_notify_mutex_acquired,


  svn_repos_notify_recover_start,


  svn_repos_notify_upgrade_start,


  svn_repos_notify_load_skipped_rev,


  svn_repos_notify_verify_rev_structure,


  svn_repos_notify_failure,


  svn_repos_notify_pack_revprops,


  svn_repos_notify_cleanup_revprops,


  svn_repos_notify_format_bumped,


  svn_repos_notify_hotcopy_rev_range
} svn_repos_notify_action_t;





typedef enum svn_repos_notify_warning_t
{


  svn_repos_notify_warning_found_old_reference,



  svn_repos_notify_warning_found_old_mergeinfo,





  svn_repos_notify_warning_invalid_fspath,
# 280 "./subversion/include/svn_repos.h"
  svn_repos_notify_warning_name_collision,
# 290 "./subversion/include/svn_repos.h"
  svn_repos_notify_warning_mergeinfo_collision,






  svn_repos_notify_warning_invalid_mergeinfo
} svn_repos_notify_warning_t;
# 312 "./subversion/include/svn_repos.h"
typedef struct svn_repos_notify_t
{

  svn_repos_notify_action_t action;




  svn_revnum_t revision;


  const char *warning_str;

  svn_repos_notify_warning_t warning;







  apr_int64_t shard;


  svn_revnum_t new_revision;





  svn_revnum_t old_revision;



  enum svn_node_action node_action;


  const char *path;




  svn_error_t *err;




  svn_revnum_t start_revision;




  svn_revnum_t end_revision;




} svn_repos_notify_t;






typedef void (*svn_repos_notify_func_t)(void *baton,
                                        const svn_repos_notify_t *notify,
                                        apr_pool_t *scratch_pool);







svn_repos_notify_t *
svn_repos_notify_create(svn_repos_notify_action_t action,
                        apr_pool_t *result_pool);





typedef struct svn_repos_t svn_repos_t;
# 405 "./subversion/include/svn_repos.h"
const char *
svn_repos_find_root_path(const char *path,
                         apr_pool_t *pool);
# 423 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_open3(svn_repos_t **repos_p,
                const char *path,
                apr_hash_t *fs_config,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_repos_open2(svn_repos_t **repos_p,
                const char *path,
                apr_hash_t *fs_config,
                apr_pool_t *pool);





__attribute__((deprecated))
svn_error_t *
svn_repos_open(svn_repos_t **repos_p,
               const char *path,
               apr_pool_t *pool);
# 463 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_create(svn_repos_t **repos_p,
                 const char *path,
                 const char *unused_1,
                 const char *unused_2,
                 apr_hash_t *config,
                 apr_hash_t *fs_config,
                 apr_pool_t *pool);
# 509 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_upgrade2(const char *path,
                   svn_boolean_t nonblocking,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   apr_pool_t *pool);
# 523 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_upgrade(const char *path,
                  svn_boolean_t nonblocking,
                  svn_error_t *(*start_callback)(void *baton),
                  void *start_callback_baton,
                  apr_pool_t *pool);




svn_error_t *
svn_repos_delete(const char *path,
                 apr_pool_t *pool);
# 555 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_has_capability(svn_repos_t *repos,
                         svn_boolean_t *has,
                         const char *capability,
                         apr_pool_t *pool);
# 574 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_capabilities(apr_hash_t **capabilities,
                       svn_repos_t *repos,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 619 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_remember_client_capabilities(svn_repos_t *repos,
                                       const apr_array_header_t *capabilities);



svn_fs_t *
svn_repos_fs(svn_repos_t *repos);






const char *
svn_repos_fs_type(svn_repos_t *repos, apr_pool_t *pool);
# 659 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_hotcopy3(const char *src_path,
                   const char *dst_path,
                   svn_boolean_t clean_logs,
                   svn_boolean_t incremental,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);
# 677 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_hotcopy2(const char *src_path,
                   const char *dst_path,
                   svn_boolean_t clean_logs,
                   svn_boolean_t incremental,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_hotcopy(const char *src_path,
                  const char *dst_path,
                  svn_boolean_t clean_logs,
                  apr_pool_t *pool);
# 707 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_pack2(svn_repos_t *repos,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);
# 722 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_fs_pack(svn_repos_t *repos,
                  svn_fs_pack_notify_t notify_func,
                  void *notify_baton,
                  svn_cancel_func_t cancel_func,
                  void *cancel_baton,
                  apr_pool_t *pool);
# 758 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_recover4(const char *path,
                   svn_boolean_t nonblocking,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void * cancel_baton,
                   apr_pool_t *pool);
# 774 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_recover3(const char *path,
                   svn_boolean_t nonblocking,
                   svn_error_t *(*start_callback)(void *baton),
                   void *start_callback_baton,
                   svn_cancel_func_t cancel_func,
                   void * cancel_baton,
                   apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_repos_recover2(const char *path,
                   svn_boolean_t nonblocking,
                   svn_error_t *(*start_callback)(void *baton),
                   void *start_callback_baton,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_recover(const char *path,
                  apr_pool_t *pool);






typedef svn_error_t *(*svn_repos_freeze_func_t)(void *baton, apr_pool_t *pool);
# 835 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_freeze(apr_array_header_t *paths,
                 svn_repos_freeze_func_t freeze_func,
                 void *freeze_baton,
                 apr_pool_t *pool);






svn_error_t *
svn_repos_db_logfiles(apr_array_header_t **logfiles,
                      const char *path,
                      svn_boolean_t only_unused,
                      apr_pool_t *pool);






const char *
svn_repos_path(svn_repos_t *repos,
               apr_pool_t *pool);




const char *
svn_repos_db_env(svn_repos_t *repos,
                 apr_pool_t *pool);


const char *
svn_repos_conf_dir(svn_repos_t *repos,
                   apr_pool_t *pool);


const char *
svn_repos_svnserve_conf(svn_repos_t *repos,
                        apr_pool_t *pool);


const char *
svn_repos_lock_dir(svn_repos_t *repos,
                   apr_pool_t *pool);


const char *
svn_repos_db_lockfile(svn_repos_t *repos,
                      apr_pool_t *pool);


const char *
svn_repos_db_logs_lockfile(svn_repos_t *repos,
                           apr_pool_t *pool);


const char *
svn_repos_hook_dir(svn_repos_t *repos,
                   apr_pool_t *pool);


const char *
svn_repos_start_commit_hook(svn_repos_t *repos,
                            apr_pool_t *pool);


const char *
svn_repos_pre_commit_hook(svn_repos_t *repos,
                          apr_pool_t *pool);


const char *
svn_repos_post_commit_hook(svn_repos_t *repos,
                           apr_pool_t *pool);




const char *
svn_repos_pre_revprop_change_hook(svn_repos_t *repos,
                                  apr_pool_t *pool);




const char *
svn_repos_post_revprop_change_hook(svn_repos_t *repos,
                                   apr_pool_t *pool);







const char *
svn_repos_pre_lock_hook(svn_repos_t *repos,
                        apr_pool_t *pool);


const char *
svn_repos_post_lock_hook(svn_repos_t *repos,
                         apr_pool_t *pool);


const char *
svn_repos_pre_unlock_hook(svn_repos_t *repos,
                          apr_pool_t *pool);


const char *
svn_repos_post_unlock_hook(svn_repos_t *repos,
                           apr_pool_t *pool);
# 968 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_hooks_setenv(svn_repos_t *repos,
                       const char *hooks_env_path,
                       apr_pool_t *scratch_pool);
# 1063 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_begin_report3(void **report_baton,
                        svn_revnum_t revnum,
                        svn_repos_t *repos,
                        const char *fs_base,
                        const char *target,
                        const char *tgt_path,
                        svn_boolean_t text_deltas,
                        svn_depth_t depth,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t send_copyfrom_args,
                        const svn_delta_editor_t *editor,
                        void *edit_baton,
                        svn_repos_authz_func_t authz_read_func,
                        void *authz_read_baton,
                        apr_size_t zero_copy_limit,
                        apr_pool_t *pool);
# 1088 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_begin_report2(void **report_baton,
                        svn_revnum_t revnum,
                        svn_repos_t *repos,
                        const char *fs_base,
                        const char *target,
                        const char *tgt_path,
                        svn_boolean_t text_deltas,
                        svn_depth_t depth,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t send_copyfrom_args,
                        const svn_delta_editor_t *editor,
                        void *edit_baton,
                        svn_repos_authz_func_t authz_read_func,
                        void *authz_read_baton,
                        apr_pool_t *pool);
# 1119 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_begin_report(void **report_baton,
                       svn_revnum_t revnum,
                       const char *username,
                       svn_repos_t *repos,
                       const char *fs_base,
                       const char *target,
                       const char *tgt_path,
                       svn_boolean_t text_deltas,
                       svn_boolean_t recurse,
                       svn_boolean_t ignore_ancestry,
                       const svn_delta_editor_t *editor,
                       void *edit_baton,
                       svn_repos_authz_func_t authz_read_func,
                       void *authz_read_baton,
                       apr_pool_t *pool);
# 1172 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_set_path3(void *report_baton,
                    const char *path,
                    svn_revnum_t revision,
                    svn_depth_t depth,
                    svn_boolean_t start_empty,
                    const char *lock_token,
                    apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_set_path2(void *report_baton,
                    const char *path,
                    svn_revnum_t revision,
                    svn_boolean_t start_empty,
                    const char *lock_token,
                    apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_repos_set_path(void *report_baton,
                   const char *path,
                   svn_revnum_t revision,
                   svn_boolean_t start_empty,
                   apr_pool_t *pool);
# 1236 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_link_path3(void *report_baton,
                     const char *path,
                     const char *link_path,
                     svn_revnum_t revision,
                     svn_depth_t depth,
                     svn_boolean_t start_empty,
                     const char *lock_token,
                     apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_link_path2(void *report_baton,
                     const char *path,
                     const char *link_path,
                     svn_revnum_t revision,
                     svn_boolean_t start_empty,
                     const char *lock_token,
                     apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_repos_link_path(void *report_baton,
                    const char *path,
                    const char *link_path,
                    svn_revnum_t revision,
                    svn_boolean_t start_empty,
                    apr_pool_t *pool);
# 1287 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_delete_path(void *report_baton,
                      const char *path,
                      apr_pool_t *pool);
# 1304 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_finish_report(void *report_baton,
                        apr_pool_t *pool);
# 1316 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_abort_report(void *report_baton,
                       apr_pool_t *pool);
# 1393 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_dir_delta2(svn_fs_root_t *src_root,
                     const char *src_parent_dir,
                     const char *src_entry,
                     svn_fs_root_t *tgt_root,
                     const char *tgt_path,
                     const svn_delta_editor_t *editor,
                     void *edit_baton,
                     svn_repos_authz_func_t authz_read_func,
                     void *authz_read_baton,
                     svn_boolean_t text_deltas,
                     svn_depth_t depth,
                     svn_boolean_t entry_props,
                     svn_boolean_t ignore_ancestry,
                     apr_pool_t *pool);
# 1416 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_dir_delta(svn_fs_root_t *src_root,
                    const char *src_parent_dir,
                    const char *src_entry,
                    svn_fs_root_t *tgt_root,
                    const char *tgt_path,
                    const svn_delta_editor_t *editor,
                    void *edit_baton,
                    svn_repos_authz_func_t authz_read_func,
                    void *authz_read_baton,
                    svn_boolean_t text_deltas,
                    svn_boolean_t recurse,
                    svn_boolean_t entry_props,
                    svn_boolean_t ignore_ancestry,
                    apr_pool_t *pool);
# 1466 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_replay2(svn_fs_root_t *root,
                  const char *base_dir,
                  svn_revnum_t low_water_mark,
                  svn_boolean_t send_deltas,
                  const svn_delta_editor_t *editor,
                  void *edit_baton,
                  svn_repos_authz_func_t authz_read_func,
                  void *authz_read_baton,
                  apr_pool_t *pool);
# 1485 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_replay(svn_fs_root_t *root,
                 const svn_delta_editor_t *editor,
                 void *edit_baton,
                 apr_pool_t *pool);
# 1543 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_get_commit_editor5(const svn_delta_editor_t **editor,
                             void **edit_baton,
                             svn_repos_t *repos,
                             svn_fs_txn_t *txn,
                             const char *repos_url,
                             const char *base_path,
                             apr_hash_t *revprop_table,
                             svn_commit_callback2_t commit_callback,
                             void *commit_baton,
                             svn_repos_authz_callback_t authz_callback,
                             void *authz_baton,
                             apr_pool_t *pool);
# 1567 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_commit_editor4(const svn_delta_editor_t **editor,
                             void **edit_baton,
                             svn_repos_t *repos,
                             svn_fs_txn_t *txn,
                             const char *repos_url,
                             const char *base_path,
                             const char *user,
                             const char *log_msg,
                             svn_commit_callback2_t commit_callback,
                             void *commit_baton,
                             svn_repos_authz_callback_t authz_callback,
                             void *authz_baton,
                             apr_pool_t *pool);
# 1591 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_commit_editor3(const svn_delta_editor_t **editor,
                             void **edit_baton,
                             svn_repos_t *repos,
                             svn_fs_txn_t *txn,
                             const char *repos_url,
                             const char *base_path,
                             const char *user,
                             const char *log_msg,
                             svn_commit_callback_t callback,
                             void *callback_baton,
                             svn_repos_authz_callback_t authz_callback,
                             void *authz_baton,
                             apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_get_commit_editor2(const svn_delta_editor_t **editor,
                             void **edit_baton,
                             svn_repos_t *repos,
                             svn_fs_txn_t *txn,
                             const char *repos_url,
                             const char *base_path,
                             const char *user,
                             const char *log_msg,
                             svn_commit_callback_t callback,
                             void *callback_baton,
                             apr_pool_t *pool);
# 1634 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_commit_editor(const svn_delta_editor_t **editor,
                            void **edit_baton,
                            svn_repos_t *repos,
                            const char *repos_url,
                            const char *base_path,
                            const char *user,
                            const char *log_msg,
                            svn_commit_callback_t callback,
                            void *callback_baton,
                            apr_pool_t *pool);
# 1654 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_dated_revision(svn_revnum_t *revision,
                         svn_repos_t *repos,
                         apr_time_t tm,
                         apr_pool_t *pool);
# 1674 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_get_committed_info(svn_revnum_t *committed_rev,
                             const char **committed_date,
                             const char **last_author,
                             svn_fs_root_t *root,
                             const char *path,
                             apr_pool_t *pool);
# 1690 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_stat(svn_dirent_t **dirent,
               svn_fs_root_t *root,
               const char *path,
               apr_pool_t *pool);
# 1707 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_deleted_rev(svn_fs_t *fs,
                      const char *path,
                      svn_revnum_t start,
                      svn_revnum_t end,
                      svn_revnum_t *deleted,
                      apr_pool_t *pool);
# 1728 "./subversion/include/svn_repos.h"
typedef svn_error_t *(*svn_repos_history_func_t)(void *baton,
                                                 const char *path,
                                                 svn_revnum_t revision,
                                                 apr_pool_t *pool);
# 1753 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_history2(svn_fs_t *fs,
                   const char *path,
                   svn_repos_history_func_t history_func,
                   void *history_baton,
                   svn_repos_authz_func_t authz_read_func,
                   void *authz_read_baton,
                   svn_revnum_t start,
                   svn_revnum_t end,
                   svn_boolean_t cross_copies,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_history(svn_fs_t *fs,
                  const char *path,
                  svn_repos_history_func_t history_func,
                  void *history_baton,
                  svn_revnum_t start,
                  svn_revnum_t end,
                  svn_boolean_t cross_copies,
                  apr_pool_t *pool);
# 1803 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_trace_node_locations(svn_fs_t *fs,
                               apr_hash_t **locations,
                               const char *fs_path,
                               svn_revnum_t peg_revision,
                               const apr_array_header_t *location_revisions,
                               svn_repos_authz_func_t authz_read_func,
                               void *authz_read_baton,
                               apr_pool_t *pool);
# 1842 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_node_location_segments(svn_repos_t *repos,
                                 const char *path,
                                 svn_revnum_t peg_revision,
                                 svn_revnum_t start_rev,
                                 svn_revnum_t end_rev,
                                 svn_location_segment_receiver_t receiver,
                                 void *receiver_baton,
                                 svn_repos_authz_func_t authz_read_func,
                                 void *authz_read_baton,
                                 apr_pool_t *pool);
# 1919 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_get_logs4(svn_repos_t *repos,
                    const apr_array_header_t *paths,
                    svn_revnum_t start,
                    svn_revnum_t end,
                    int limit,
                    svn_boolean_t discover_changed_paths,
                    svn_boolean_t strict_node_history,
                    svn_boolean_t include_merged_revisions,
                    const apr_array_header_t *revprops,
                    svn_repos_authz_func_t authz_read_func,
                    void *authz_read_baton,
                    svn_log_entry_receiver_t receiver,
                    void *receiver_baton,
                    apr_pool_t *pool);
# 1945 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_logs3(svn_repos_t *repos,
                    const apr_array_header_t *paths,
                    svn_revnum_t start,
                    svn_revnum_t end,
                    int limit,
                    svn_boolean_t discover_changed_paths,
                    svn_boolean_t strict_node_history,
                    svn_repos_authz_func_t authz_read_func,
                    void *authz_read_baton,
                    svn_log_message_receiver_t receiver,
                    void *receiver_baton,
                    apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_get_logs2(svn_repos_t *repos,
                    const apr_array_header_t *paths,
                    svn_revnum_t start,
                    svn_revnum_t end,
                    svn_boolean_t discover_changed_paths,
                    svn_boolean_t strict_node_history,
                    svn_repos_authz_func_t authz_read_func,
                    void *authz_read_baton,
                    svn_log_message_receiver_t receiver,
                    void *receiver_baton,
                    apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_get_logs(svn_repos_t *repos,
                   const apr_array_header_t *paths,
                   svn_revnum_t start,
                   svn_revnum_t end,
                   svn_boolean_t discover_changed_paths,
                   svn_boolean_t strict_node_history,
                   svn_log_message_receiver_t receiver,
                   void *receiver_baton,
                   apr_pool_t *pool);
# 2032 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_get_mergeinfo(svn_mergeinfo_catalog_t *catalog,
                           svn_repos_t *repos,
                           const apr_array_header_t *paths,
                           svn_revnum_t revision,
                           svn_mergeinfo_inheritance_t inherit,
                           svn_boolean_t include_descendants,
                           svn_repos_authz_func_t authz_read_func,
                           void *authz_read_baton,
                           apr_pool_t *pool);
# 2090 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_get_file_revs2(svn_repos_t *repos,
                         const char *path,
                         svn_revnum_t start,
                         svn_revnum_t end,
                         svn_boolean_t include_merged_revisions,
                         svn_repos_authz_func_t authz_read_func,
                         void *authz_read_baton,
                         svn_file_rev_handler_t handler,
                         void *handler_baton,
                         apr_pool_t *pool);
# 2109 "./subversion/include/svn_repos.h"
typedef svn_error_t *(*svn_repos_file_rev_handler_t)
  (void *baton,
   const char *path,
   svn_revnum_t rev,
   apr_hash_t *rev_props,
   svn_txdelta_window_handler_t *delta_handler,
   void **delta_baton,
   apr_array_header_t *prop_diffs,
   apr_pool_t *pool);
# 2126 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_file_revs(svn_repos_t *repos,
                        const char *path,
                        svn_revnum_t start,
                        svn_revnum_t end,
                        svn_repos_authz_func_t authz_read_func,
                        void *authz_read_baton,
                        svn_repos_file_rev_handler_t handler,
                        void *handler_baton,
                        apr_pool_t *pool);
# 2171 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_commit_txn(const char **conflict_p,
                        svn_repos_t *repos,
                        svn_revnum_t *new_rev,
                        svn_fs_txn_t *txn,
                        apr_pool_t *pool);
# 2194 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_begin_txn_for_commit2(svn_fs_txn_t **txn_p,
                                   svn_repos_t *repos,
                                   svn_revnum_t rev,
                                   apr_hash_t *revprop_table,
                                   apr_pool_t *pool);
# 2210 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_fs_begin_txn_for_commit(svn_fs_txn_t **txn_p,
                                  svn_repos_t *repos,
                                  svn_revnum_t rev,
                                  const char *author,
                                  const char *log_msg,
                                  apr_pool_t *pool);
# 2231 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_fs_begin_txn_for_update(svn_fs_txn_t **txn_p,
                                  svn_repos_t *repos,
                                  svn_revnum_t rev,
                                  const char *author,
                                  apr_pool_t *pool);
# 2270 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_lock_many(svn_repos_t *repos,
                       apr_hash_t *targets,
                       const char *comment,
                       svn_boolean_t is_dav_comment,
                       apr_time_t expiration_date,
                       svn_boolean_t steal_lock,
                       svn_fs_lock_callback_t lock_callback,
                       void *lock_baton,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);





svn_error_t *
svn_repos_fs_lock(svn_lock_t **lock,
                  svn_repos_t *repos,
                  const char *path,
                  const char *token,
                  const char *comment,
                  svn_boolean_t is_dav_comment,
                  apr_time_t expiration_date,
                  svn_revnum_t current_rev,
                  svn_boolean_t steal_lock,
                  apr_pool_t *pool);
# 2322 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_unlock_many(svn_repos_t *repos,
                         apr_hash_t *targets,
                         svn_boolean_t break_lock,
                         svn_fs_lock_callback_t lock_callback,
                         void *lock_baton,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);





svn_error_t *
svn_repos_fs_unlock(svn_repos_t *repos,
                    const char *path,
                    const char *token,
                    svn_boolean_t break_lock,
                    apr_pool_t *pool);
# 2358 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_get_locks2(apr_hash_t **locks,
                        svn_repos_t *repos,
                        const char *path,
                        svn_depth_t depth,
                        svn_repos_authz_func_t authz_read_func,
                        void *authz_read_baton,
                        apr_pool_t *pool);
# 2374 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_fs_get_locks(apr_hash_t **locks,
                       svn_repos_t *repos,
                       const char *path,
                       svn_repos_authz_func_t authz_read_func,
                       void *authz_read_baton,
                       apr_pool_t *pool);
# 2416 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_change_rev_prop4(svn_repos_t *repos,
                              svn_revnum_t rev,
                              const char *author,
                              const char *name,
                              const svn_string_t *const *old_value_p,
                              const svn_string_t *new_value,
                              svn_boolean_t use_pre_revprop_change_hook,
                              svn_boolean_t use_post_revprop_change_hook,
                              svn_repos_authz_func_t authz_read_func,
                              void *authz_read_baton,
                              apr_pool_t *pool);
# 2437 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_fs_change_rev_prop3(svn_repos_t *repos,
                              svn_revnum_t rev,
                              const char *author,
                              const char *name,
                              const svn_string_t *new_value,
                              svn_boolean_t use_pre_revprop_change_hook,
                              svn_boolean_t use_post_revprop_change_hook,
                              svn_repos_authz_func_t authz_read_func,
                              void *authz_read_baton,
                              apr_pool_t *pool);
# 2457 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_fs_change_rev_prop2(svn_repos_t *repos,
                              svn_revnum_t rev,
                              const char *author,
                              const char *name,
                              const svn_string_t *new_value,
                              svn_repos_authz_func_t authz_read_func,
                              void *authz_read_baton,
                              apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_fs_change_rev_prop(svn_repos_t *repos,
                             svn_revnum_t rev,
                             const char *author,
                             const char *name,
                             const svn_string_t *new_value,
                             apr_pool_t *pool);
# 2500 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_revision_prop(svn_string_t **value_p,
                           svn_repos_t *repos,
                           svn_revnum_t rev,
                           const char *propname,
                           svn_repos_authz_func_t authz_read_func,
                           void *authz_read_baton,
                           apr_pool_t *pool);
# 2526 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_revision_proplist(apr_hash_t **table_p,
                               svn_repos_t *repos,
                               svn_revnum_t rev,
                               svn_repos_authz_func_t authz_read_func,
                               void *authz_read_baton,
                               apr_pool_t *pool);
# 2546 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_change_node_prop(svn_fs_root_t *root,
                              const char *path,
                              const char *name,
                              const svn_string_t *value,
                              apr_pool_t *pool);
# 2573 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_fs_get_inherited_props(apr_array_header_t **inherited_props,
                                 svn_fs_root_t *root,
                                 const char *path,
                                 const char *propname,
                                 svn_repos_authz_func_t authz_read_func,
                                 void *authz_read_baton,
                                 apr_pool_t *result_pool,
                                 apr_pool_t *scratch_pool);





svn_error_t *
svn_repos_fs_change_txn_prop(svn_fs_txn_t *txn,
                             const char *name,
                             const svn_string_t *value,
                             apr_pool_t *pool);







svn_error_t *
svn_repos_fs_change_txn_props(svn_fs_txn_t *txn,
                              const apr_array_header_t *props,
                              apr_pool_t *pool);
# 2627 "./subversion/include/svn_repos.h"
typedef struct svn_repos_node_t
{

  svn_node_kind_t kind;


  char action;


  svn_boolean_t text_mod;


  svn_boolean_t prop_mod;


  const char *name;


  svn_revnum_t copyfrom_rev;


  const char *copyfrom_path;


  struct svn_repos_node_t *sibling;


  struct svn_repos_node_t *child;


  struct svn_repos_node_t *parent;

} svn_repos_node_t;
# 2680 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_node_editor(const svn_delta_editor_t **editor,
                      void **edit_baton,
                      svn_repos_t *repos,
                      svn_fs_root_t *base_root,
                      svn_fs_root_t *root,
                      apr_pool_t *node_pool,
                      apr_pool_t *pool);





svn_repos_node_t *
svn_repos_node_from_baton(void *edit_baton);
# 2710 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_info_format(int *repos_format,
                      svn_version_t **supports_version,
                      svn_repos_t *repos,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 2787 "./subversion/include/svn_repos.h"
enum svn_repos_load_uuid
{

  svn_repos_load_uuid_default,

  svn_repos_load_uuid_ignore,

  svn_repos_load_uuid_force
};
# 2867 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_verify_fs3(svn_repos_t *repos,
                     svn_revnum_t start_rev,
                     svn_revnum_t end_rev,
                     svn_boolean_t keep_going,
                     svn_boolean_t check_normalization,
                     svn_boolean_t metadata_only,
                     svn_repos_notify_func_t notify_func,
                     void *notify_baton,
                     svn_cancel_func_t cancel,
                     void *cancel_baton,
                     apr_pool_t *scratch_pool);
# 2887 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_verify_fs2(svn_repos_t *repos,
                     svn_revnum_t start_rev,
                     svn_revnum_t end_rev,
                     svn_repos_notify_func_t notify_func,
                     void *notify_baton,
                     svn_cancel_func_t cancel,
                     void *cancel_baton,
                     apr_pool_t *scratch_pool);
# 2908 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_verify_fs(svn_repos_t *repos,
                    svn_stream_t *feedback_stream,
                    svn_revnum_t start_rev,
                    svn_revnum_t end_rev,
                    svn_cancel_func_t cancel_func,
                    void *cancel_baton,
                    apr_pool_t *pool);
# 2972 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_dump_fs3(svn_repos_t *repos,
                   svn_stream_t *dumpstream,
                   svn_revnum_t start_rev,
                   svn_revnum_t end_rev,
                   svn_boolean_t incremental,
                   svn_boolean_t use_deltas,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *scratch_pool);
# 2992 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_dump_fs2(svn_repos_t *repos,
                   svn_stream_t *dumpstream,
                   svn_stream_t *feedback_stream,
                   svn_revnum_t start_rev,
                   svn_revnum_t end_rev,
                   svn_boolean_t incremental,
                   svn_boolean_t use_deltas,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_dump_fs(svn_repos_t *repos,
                  svn_stream_t *dumpstream,
                  svn_stream_t *feedback_stream,
                  svn_revnum_t start_rev,
                  svn_revnum_t end_rev,
                  svn_boolean_t incremental,
                  svn_cancel_func_t cancel_func,
                  void *cancel_baton,
                  apr_pool_t *pool);
# 3076 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_load_fs5(svn_repos_t *repos,
                   svn_stream_t *dumpstream,
                   svn_revnum_t start_rev,
                   svn_revnum_t end_rev,
                   enum svn_repos_load_uuid uuid_action,
                   const char *parent_dir,
                   svn_boolean_t use_pre_commit_hook,
                   svn_boolean_t use_post_commit_hook,
                   svn_boolean_t validate_props,
                   svn_boolean_t ignore_dates,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_load_fs4(svn_repos_t *repos,
                   svn_stream_t *dumpstream,
                   svn_revnum_t start_rev,
                   svn_revnum_t end_rev,
                   enum svn_repos_load_uuid uuid_action,
                   const char *parent_dir,
                   svn_boolean_t use_pre_commit_hook,
                   svn_boolean_t use_post_commit_hook,
                   svn_boolean_t validate_props,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_load_fs3(svn_repos_t *repos,
                   svn_stream_t *dumpstream,
                   enum svn_repos_load_uuid uuid_action,
                   const char *parent_dir,
                   svn_boolean_t use_pre_commit_hook,
                   svn_boolean_t use_post_commit_hook,
                   svn_boolean_t validate_props,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);
# 3145 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_load_fs2(svn_repos_t *repos,
                   svn_stream_t *dumpstream,
                   svn_stream_t *feedback_stream,
                   enum svn_repos_load_uuid uuid_action,
                   const char *parent_dir,
                   svn_boolean_t use_pre_commit_hook,
                   svn_boolean_t use_post_commit_hook,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_load_fs(svn_repos_t *repos,
                  svn_stream_t *dumpstream,
                  svn_stream_t *feedback_stream,
                  enum svn_repos_load_uuid uuid_action,
                  const char *parent_dir,
                  svn_cancel_func_t cancel_func,
                  void *cancel_baton,
                  apr_pool_t *pool);







typedef struct svn_repos_parse_fns3_t
{




  svn_error_t *(*magic_header_record)(int version,
                                      void *parse_baton,
                                      apr_pool_t *pool);





  svn_error_t *(*uuid_record)(const char *uuid,
                              void *parse_baton,
                              apr_pool_t *pool);
# 3206 "./subversion/include/svn_repos.h"
  svn_error_t *(*new_revision_record)(void **revision_baton,
                                      apr_hash_t *headers,
                                      void *parse_baton,
                                      apr_pool_t *pool);







  svn_error_t *(*new_node_record)(void **node_baton,
                                  apr_hash_t *headers,
                                  void *revision_baton,
                                  apr_pool_t *pool);


  svn_error_t *(*set_revision_property)(void *revision_baton,
                                        const char *name,
                                        const svn_string_t *value);


  svn_error_t *(*set_node_property)(void *node_baton,
                                    const char *name,
                                    const svn_string_t *value);


  svn_error_t *(*delete_node_property)(void *node_baton, const char *name);


  svn_error_t *(*remove_node_props)(void *node_baton);
# 3247 "./subversion/include/svn_repos.h"
  svn_error_t *(*set_fulltext)(svn_stream_t **stream,
                               void *node_baton);
# 3260 "./subversion/include/svn_repos.h"
  svn_error_t *(*apply_textdelta)(svn_txdelta_window_handler_t *handler,
                                  void **handler_baton,
                                  void *node_baton);




  svn_error_t *(*close_node)(void *node_baton);





  svn_error_t *(*close_revision)(void *revision_baton);

} svn_repos_parse_fns3_t;
# 3319 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_parse_dumpstream3(svn_stream_t *stream,
                            const svn_repos_parse_fns3_t *parse_fns,
                            void *parse_baton,
                            svn_boolean_t deltas_are_text,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *pool);
# 3376 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_get_fs_build_parser5(const svn_repos_parse_fns3_t **callbacks,
                               void **parse_baton,
                               svn_repos_t *repos,
                               svn_revnum_t start_rev,
                               svn_revnum_t end_rev,
                               svn_boolean_t use_history,
                               svn_boolean_t validate_props,
                               enum svn_repos_load_uuid uuid_action,
                               const char *parent_dir,
                               svn_boolean_t use_pre_commit_hook,
                               svn_boolean_t use_post_commit_hook,
                               svn_boolean_t ignore_dates,
                               svn_repos_notify_func_t notify_func,
                               void *notify_baton,
                               apr_pool_t *pool);
# 3401 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_fs_build_parser4(const svn_repos_parse_fns3_t **parser,
                               void **parse_baton,
                               svn_repos_t *repos,
                               svn_revnum_t start_rev,
                               svn_revnum_t end_rev,
                               svn_boolean_t use_history,
                               svn_boolean_t validate_props,
                               enum svn_repos_load_uuid uuid_action,
                               const char *parent_dir,
                               svn_repos_notify_func_t notify_func,
                               void *notify_baton,
                               apr_pool_t *pool);
# 3425 "./subversion/include/svn_repos.h"
typedef struct svn_repos_parse_fns2_t
{

  svn_error_t *(*new_revision_record)(void **revision_baton,
                                      apr_hash_t *headers,
                                      void *parse_baton,
                                      apr_pool_t *pool);

  svn_error_t *(*uuid_record)(const char *uuid,
                              void *parse_baton,
                              apr_pool_t *pool);

  svn_error_t *(*new_node_record)(void **node_baton,
                                  apr_hash_t *headers,
                                  void *revision_baton,
                                  apr_pool_t *pool);

  svn_error_t *(*set_revision_property)(void *revision_baton,
                                        const char *name,
                                        const svn_string_t *value);

  svn_error_t *(*set_node_property)(void *node_baton,
                                    const char *name,
                                    const svn_string_t *value);

  svn_error_t *(*delete_node_property)(void *node_baton,
                                       const char *name);

  svn_error_t *(*remove_node_props)(void *node_baton);

  svn_error_t *(*set_fulltext)(svn_stream_t **stream,
                               void *node_baton);

  svn_error_t *(*apply_textdelta)(svn_txdelta_window_handler_t *handler,
                                  void **handler_baton,
                                  void *node_baton);

  svn_error_t *(*close_node)(void *node_baton);

  svn_error_t *(*close_revision)(void *revision_baton);
} svn_repos_parse_fns2_t;


typedef svn_repos_parse_fns2_t svn_repos_parser_fns2_t;
# 3478 "./subversion/include/svn_repos.h"
typedef struct svn_repos_parse_fns_t
{

  svn_error_t *(*new_revision_record)(void **revision_baton,
                                      apr_hash_t *headers,
                                      void *parse_baton,
                                      apr_pool_t *pool);

  svn_error_t *(*uuid_record)(const char *uuid,
                              void *parse_baton,
                              apr_pool_t *pool);

  svn_error_t *(*new_node_record)(void **node_baton,
                                  apr_hash_t *headers,
                                  void *revision_baton,
                                  apr_pool_t *pool);

  svn_error_t *(*set_revision_property)(void *revision_baton,
                                        const char *name,
                                        const svn_string_t *value);

  svn_error_t *(*set_node_property)(void *node_baton,
                                    const char *name,
                                    const svn_string_t *value);

  svn_error_t *(*remove_node_props)(void *node_baton);

  svn_error_t *(*set_fulltext)(svn_stream_t **stream,
                               void *node_baton);

  svn_error_t *(*close_node)(void *node_baton);

  svn_error_t *(*close_revision)(void *revision_baton);
} svn_repos_parser_fns_t;
# 3520 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_parse_dumpstream2(svn_stream_t *stream,
                            const svn_repos_parser_fns2_t *parse_fns,
                            void *parse_baton,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_parse_dumpstream(svn_stream_t *stream,
                           const svn_repos_parser_fns_t *parse_fns,
                           void *parse_baton,
                           svn_cancel_func_t cancel_func,
                           void *cancel_baton,
                           apr_pool_t *pool);
# 3552 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_fs_build_parser3(const svn_repos_parse_fns2_t **parser,
                               void **parse_baton,
                               svn_repos_t *repos,
                               svn_boolean_t use_history,
                               svn_boolean_t validate_props,
                               enum svn_repos_load_uuid uuid_action,
                               const char *parent_dir,
                               svn_repos_notify_func_t notify_func,
                               void *notify_baton,
                               apr_pool_t *pool);
# 3573 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_get_fs_build_parser2(const svn_repos_parse_fns2_t **parser,
                               void **parse_baton,
                               svn_repos_t *repos,
                               svn_boolean_t use_history,
                               enum svn_repos_load_uuid uuid_action,
                               svn_stream_t *outstream,
                               const char *parent_dir,
                               apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_repos_get_fs_build_parser(const svn_repos_parser_fns_t **parser,
                              void **parse_baton,
                              svn_repos_t *repos,
                              svn_boolean_t use_history,
                              enum svn_repos_load_uuid uuid_action,
                              svn_stream_t *outstream,
                              const char *parent_dir,
                              apr_pool_t *pool);
# 3608 "./subversion/include/svn_repos.h"
typedef struct svn_authz_t svn_authz_t;
# 3625 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_authz_read2(svn_authz_t **authz_p,
                      const char *path,
                      const char *groups_path,
                      svn_boolean_t must_exist,
                      apr_pool_t *pool);
# 3640 "./subversion/include/svn_repos.h"
__attribute__((deprecated))
svn_error_t *
svn_repos_authz_read(svn_authz_t **authz_p,
                     const char *file,
                     svn_boolean_t must_exist,
                     apr_pool_t *pool);
# 3655 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_authz_parse(svn_authz_t **authz_p,
                      svn_stream_t *stream,
                      svn_stream_t *groups_stream,
                      apr_pool_t *pool);
# 3681 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_authz_check_access(svn_authz_t *authz,
                             const char *repos_name,
                             const char *path,
                             const char *user,
                             svn_repos_authz_access_t required_access,
                             svn_boolean_t *access_granted,
                             apr_pool_t *pool);
# 3746 "./subversion/include/svn_repos.h"
typedef enum svn_repos_revision_access_level_t
{


  svn_repos_revision_access_none,


  svn_repos_revision_access_partial,


  svn_repos_revision_access_full
}
svn_repos_revision_access_level_t;
# 3771 "./subversion/include/svn_repos.h"
svn_error_t *
svn_repos_check_revision_access(svn_repos_revision_access_level_t *access_level,
                                svn_repos_t *repos,
                                svn_revnum_t revision,
                                svn_repos_authz_func_t authz_read_func,
                                void *authz_read_baton,
                                apr_pool_t *pool);
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2

# 1 "./subversion/include/svn_dirent_uri.h" 1
# 154 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_internal_style(const char *dirent,
                          apr_pool_t *result_pool);
# 166 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_local_style(const char *dirent,
                       apr_pool_t *result_pool);
# 177 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath__internal_style(const char *relpath,
                            apr_pool_t *result_pool);
# 199 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_join(const char *base,
                const char *component,
                apr_pool_t *result_pool);
# 218 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_join_many(apr_pool_t *result_pool,
                     const char *base,
                     ...) __attribute__((sentinel));
# 234 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_join(const char *base,
                 const char *component,
                 apr_pool_t *result_pool);
# 252 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_basename(const char *dirent,
                    apr_pool_t *result_pool);
# 266 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_dirname(const char *dirent,
                   apr_pool_t *result_pool);
# 295 "./subversion/include/svn_dirent_uri.h"
void
svn_dirent_split(const char **dirpath,
                 const char **base_name,
                 const char *dirent,
                 apr_pool_t *result_pool);
# 320 "./subversion/include/svn_dirent_uri.h"
void
svn_relpath_split(const char **dirpath,
                  const char **base_name,
                  const char *relpath,
                  apr_pool_t *result_pool);
# 340 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_basename(const char *relpath,
                     apr_pool_t *result_pool);
# 353 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_dirname(const char *relpath,
                    apr_pool_t *result_pool);
# 365 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_limit(const char *relpath,
                  int max_components,
                  apr_pool_t *result_pool);
# 389 "./subversion/include/svn_dirent_uri.h"
void
svn_uri_split(const char **dirpath,
              const char **base_name,
              const char *uri,
              apr_pool_t *result_pool);
# 406 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_basename(const char *uri,
                 apr_pool_t *result_pool);
# 420 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_dirname(const char *uri,
                apr_pool_t *result_pool);







svn_boolean_t
svn_dirent_is_absolute(const char *dirent);
# 444 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_root(const char *dirent,
                   apr_size_t len);





svn_boolean_t
svn_uri_is_root(const char *uri,
                apr_size_t len);
# 472 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_canonicalize(const char *dirent,
                        apr_pool_t *result_pool);
# 491 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_canonicalize(const char *relpath,
                         apr_pool_t *result_pool);
# 515 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_canonicalize(const char *uri,
                     apr_pool_t *result_pool);
# 530 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_canonical(const char *dirent,
                        apr_pool_t *scratch_pool);






svn_boolean_t
svn_relpath_is_canonical(const char *relpath);
# 549 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_uri_is_canonical(const char *uri,
                     apr_pool_t *scratch_pool);
# 561 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_get_longest_ancestor(const char *dirent1,
                                const char *dirent2,
                                apr_pool_t *result_pool);
# 574 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_get_longest_ancestor(const char *relpath1,
                                 const char *relpath2,
                                 apr_pool_t *result_pool);
# 591 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_get_longest_ancestor(const char *uri1,
                             const char *uri2,
                             apr_pool_t *result_pool);
# 604 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_get_absolute(const char **pabsolute,
                        const char *relative,
                        apr_pool_t *result_pool);
# 621 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_is_child(const char *parent_dirent,
                    const char *child_dirent,
                    apr_pool_t *result_pool);
# 634 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_ancestor(const char *parent_dirent,
                       const char *child_dirent);




svn_boolean_t
svn_uri__is_ancestor(const char *parent_uri,
                     const char *child_uri);
# 656 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_skip_ancestor(const char *parent_dirent,
                         const char *child_dirent);
# 667 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_skip_ancestor(const char *parent_relpath,
                          const char *child_relpath);
# 679 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_skip_ancestor(const char *parent_uri,
                      const char *child_uri,
                      apr_pool_t *result_pool);
# 717 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_condense_targets(const char **pcommon,
                            apr_array_header_t **pcondensed_targets,
                            const apr_array_header_t *targets,
                            svn_boolean_t remove_redundancies,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 758 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_condense_targets(const char **pcommon,
                         apr_array_header_t **pcondensed_targets,
                         const apr_array_header_t *targets,
                         svn_boolean_t remove_redundancies,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 783 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_is_under_root(svn_boolean_t *under_root,
                         const char **result_path,
                         const char *base_path,
                         const char *path,
                         apr_pool_t *result_pool);
# 797 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_get_dirent_from_file_url(const char **dirent,
                                 const char *url,
                                 apr_pool_t *result_pool);
# 809 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_get_file_url_from_dirent(const char **url,
                                 const char *dirent,
                                 apr_pool_t *result_pool);
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_path.h" 1
# 71 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_internal_style(const char *path, apr_pool_t *pool);






__attribute__((deprecated))
const char *
svn_path_local_style(const char *path, apr_pool_t *pool);
# 112 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_join(const char *base, const char *component, apr_pool_t *pool);
# 132 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_join_many(apr_pool_t *pool,
                   const char *base,
                   ...) __attribute__((sentinel));
# 155 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_basename(const char *path, apr_pool_t *pool);
# 169 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_dirname(const char *path, apr_pool_t *pool);
# 182 "./subversion/include/svn_path.h"
void
svn_path_splitext(const char **path_root, const char **path_ext,
                  const char *path, apr_pool_t *pool);





apr_size_t
svn_path_component_count(const char *path);
# 203 "./subversion/include/svn_path.h"
void
svn_path_add_component(svn_stringbuf_t *path, const char *component);


void
svn_path_remove_component(svn_stringbuf_t *path);






void
svn_path_remove_components(svn_stringbuf_t *path, apr_size_t n);
# 241 "./subversion/include/svn_path.h"
__attribute__((deprecated))
void
svn_path_split(const char *path,
               const char **dirpath,
               const char **base_name,
               apr_pool_t *pool);






int
svn_path_is_empty(const char *path);
# 282 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_canonicalize(const char *path, apr_pool_t *pool);
# 294 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_boolean_t
svn_path_is_canonical(const char *path, apr_pool_t *pool);
# 306 "./subversion/include/svn_path.h"
int
svn_path_compare_paths(const char *path1, const char *path2);
# 325 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_get_longest_ancestor(const char *path1,
                              const char *path2,
                              apr_pool_t *pool);
# 340 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_get_absolute(const char **pabsolute,
                      const char *relative,
                      apr_pool_t *pool);
# 356 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_split_if_file(const char *path,
                       const char **pdirectory,
                       const char **pfile,
                       apr_pool_t *pool);
# 398 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_condense_targets(const char **pcommon,
                          apr_array_header_t **pcondensed_targets,
                          const apr_array_header_t *targets,
                          svn_boolean_t remove_redundancies,
                          apr_pool_t *pool);
# 444 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_remove_redundancies(apr_array_header_t **pcondensed_targets,
                             const apr_array_header_t *targets,
                             apr_pool_t *pool);







apr_array_header_t *
svn_path_decompose(const char *path, apr_pool_t *pool);
# 467 "./subversion/include/svn_path.h"
const char *
svn_path_compose(const apr_array_header_t *components, apr_pool_t *pool);






svn_boolean_t
svn_path_is_single_path_component(const char *name);
# 486 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_backpath_present(const char *path);
# 497 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_dotpath_present(const char *path);
# 522 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_is_child(const char *path1, const char *path2, apr_pool_t *pool);
# 535 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_boolean_t
svn_path_is_ancestor(const char *path1, const char *path2);
# 558 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_check_valid(const char *path, apr_pool_t *pool);
# 569 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_url(const char *path);


svn_boolean_t
svn_path_is_uri_safe(const char *path);




const char *
svn_path_uri_encode(const char *path, apr_pool_t *pool);


const char *
svn_path_uri_decode(const char *path, apr_pool_t *pool);
# 613 "./subversion/include/svn_path.h"
const char *
svn_path_url_add_component2(const char *url,
                            const char *component,
                            apr_pool_t *pool);






__attribute__((deprecated))
const char *
svn_path_url_add_component(const char *url,
                           const char *component,
                           apr_pool_t *pool);
# 636 "./subversion/include/svn_path.h"
const char *
svn_path_uri_from_iri(const char *iri, apr_pool_t *pool);
# 649 "./subversion/include/svn_path.h"
const char *
svn_path_uri_autoescape(const char *uri, apr_pool_t *pool);
# 661 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_cstring_from_utf8(const char **path_apr,
                           const char *path_utf8,
                           apr_pool_t *pool);


svn_error_t *
svn_path_cstring_to_utf8(const char **path_utf8,
                         const char *path_apr,
                         apr_pool_t *pool);
# 693 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_repos_relative_url(const char *path);
# 715 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_resolve_repos_relative_url(const char **absolute_url,
                                    const char *relative_url,
                                    const char *repos_root_url,
                                    apr_pool_t *pool);






const char *
svn_path_illegal_path_escape(const char *path, apr_pool_t *pool);
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_time.h" 1
# 44 "./subversion/include/svn_time.h"
const char *
svn_time_to_cstring(apr_time_t when,
                    apr_pool_t *pool);




svn_error_t *
svn_time_from_cstring(apr_time_t *when,
                      const char *data,
                      apr_pool_t *pool);




const char *
svn_time_to_human_cstring(apr_time_t when,
                          apr_pool_t *pool);
# 72 "./subversion/include/svn_time.h"
svn_error_t *
svn_parse_date(svn_boolean_t *matched,
               apr_time_t *result,
               const char *text,
               apr_time_t now,
               apr_pool_t *pool);
# 86 "./subversion/include/svn_time.h"
__attribute__((deprecated))
void
svn_sleep_for_timestamps(void);
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2

# 1 "./subversion/include/svn_props.h" 1
# 60 "./subversion/include/svn_props.h"
typedef struct svn_prop_t
{
  const char *name;
  const svn_string_t *value;
} svn_prop_t;
# 73 "./subversion/include/svn_props.h"
svn_prop_t *
svn_prop_dup(const svn_prop_t *prop,
             apr_pool_t *pool);







apr_array_header_t *
svn_prop_array_dup(const apr_array_header_t *array,
                   apr_pool_t *pool);






typedef struct svn_prop_inherited_item_t
{





  const char *path_or_url;



  apr_hash_t *prop_hash;

} svn_prop_inherited_item_t;
# 115 "./subversion/include/svn_props.h"
apr_array_header_t *
svn_prop_hash_to_array(const apr_hash_t *hash,
                       apr_pool_t *pool);
# 128 "./subversion/include/svn_props.h"
apr_hash_t *
svn_prop_array_to_hash(const apr_array_header_t *properties,
                       apr_pool_t *result);







apr_hash_t *
svn_prop_hash_dup(const apr_hash_t *hash,
                  apr_pool_t *pool);
# 149 "./subversion/include/svn_props.h"
const char *
svn_prop_get_value(const apr_hash_t *properties,
                   const char *prop_name);







typedef enum svn_prop_kind
{

  svn_prop_entry_kind,


  svn_prop_wc_kind,




  svn_prop_regular_kind
} svn_prop_kind_t;





svn_prop_kind_t
svn_property_kind2(const char *prop_name);







__attribute__((deprecated))
svn_prop_kind_t
svn_property_kind(int *prefix_len,
                  const char *prop_name);







svn_boolean_t
svn_prop_is_svn_prop(const char *prop_name);
# 207 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_has_svn_prop(const apr_hash_t *props,
                      apr_pool_t *pool);






svn_boolean_t
svn_prop_is_boolean(const char *prop_name);
# 228 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_rev_prop(const char *prop_name);
# 241 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_node_prop(const char *prop_name);
# 254 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_file_prop(const char *prop_name);
# 267 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_dir_prop(const char *prop_name);
# 277 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_needs_translation(const char *prop_name);
# 292 "./subversion/include/svn_props.h"
svn_error_t *
svn_categorize_props(const apr_array_header_t *proplist,
                     apr_array_header_t **entry_props,
                     apr_array_header_t **wc_props,
                     apr_array_header_t **regular_props,
                     apr_pool_t *pool);
# 321 "./subversion/include/svn_props.h"
svn_error_t *
svn_prop_diffs(apr_array_header_t **propdiffs,
               const apr_hash_t *target_props,
               const apr_hash_t *source_props,
               apr_pool_t *pool);
# 336 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_name_is_valid(const char *prop_name);
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/svn_sorts.h" 1
# 55 "./subversion/include/svn_sorts.h"
typedef struct svn_sort__item_t svn_sort__item_t;
# 82 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_items_as_paths(const svn_sort__item_t *a,
                                const svn_sort__item_t *b);







int
svn_sort_compare_items_lexically(const svn_sort__item_t *a,
                                 const svn_sort__item_t *b);
# 107 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_revisions(const void *a,
                           const void *b);
# 121 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_paths(const void *a,
                       const void *b);
# 139 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_ranges(const void *a,
                        const void *b);
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2

# 1 "./subversion/include/private/svn_repos_private.h" 1
# 34 "./subversion/include/private/svn_repos_private.h"
# 1 "./subversion/include/private/svn_editor.h" 1
# 56 "./subversion/include/private/svn_editor.h"
typedef svn_error_t *(*svn_delta_fetch_props_func_t)(
  apr_hash_t **props,
  void *baton,
  const char *path,
  svn_revnum_t base_revision,
  apr_pool_t *result_pool,
  apr_pool_t *scratch_pool
  );
# 73 "./subversion/include/private/svn_editor.h"
typedef svn_error_t *(*svn_delta_fetch_kind_func_t)(
  svn_node_kind_t *kind,
  void *baton,
  const char *path,
  svn_revnum_t base_revision,
  apr_pool_t *scratch_pool
  );
# 91 "./subversion/include/private/svn_editor.h"
typedef svn_error_t *(*svn_delta_fetch_base_func_t)(
  const char **filename,
  void *baton,
  const char *path,
  svn_revnum_t base_revision,
  apr_pool_t *result_pool,
  apr_pool_t *scratch_pool
  );





typedef struct svn_delta_shim_callbacks_t
{
  svn_delta_fetch_props_func_t fetch_props_func;
  svn_delta_fetch_kind_func_t fetch_kind_func;
  svn_delta_fetch_base_func_t fetch_base_func;
  void *fetch_baton;
} svn_delta_shim_callbacks_t;



svn_delta_shim_callbacks_t *
svn_delta_shim_callbacks_default(apr_pool_t *result_pool);
# 472 "./subversion/include/private/svn_editor.h"
typedef struct svn_editor_t svn_editor_t;
# 509 "./subversion/include/private/svn_editor.h"
typedef svn_error_t *(*svn_editor_cb_add_directory_t)(
  void *baton,
  const char *relpath,
  const apr_array_header_t *children,
  apr_hash_t *props,
  svn_revnum_t replaces_rev,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_add_file_t)(
  void *baton,
  const char *relpath,
  const svn_checksum_t *checksum,
  svn_stream_t *contents,
  apr_hash_t *props,
  svn_revnum_t replaces_rev,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_add_symlink_t)(
  void *baton,
  const char *relpath,
  const char *target,
  apr_hash_t *props,
  svn_revnum_t replaces_rev,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_add_absent_t)(
  void *baton,
  const char *relpath,
  svn_node_kind_t kind,
  svn_revnum_t replaces_rev,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_alter_directory_t)(
  void *baton,
  const char *relpath,
  svn_revnum_t revision,
  const apr_array_header_t *children,
  apr_hash_t *props,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_alter_file_t)(
  void *baton,
  const char *relpath,
  svn_revnum_t revision,
  const svn_checksum_t *checksum,
  svn_stream_t *contents,
  apr_hash_t *props,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_alter_symlink_t)(
  void *baton,
  const char *relpath,
  svn_revnum_t revision,
  const char *target,
  apr_hash_t *props,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_delete_t)(
  void *baton,
  const char *relpath,
  svn_revnum_t revision,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_copy_t)(
  void *baton,
  const char *src_relpath,
  svn_revnum_t src_revision,
  const char *dst_relpath,
  svn_revnum_t replaces_rev,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_move_t)(
  void *baton,
  const char *src_relpath,
  svn_revnum_t src_revision,
  const char *dst_relpath,
  svn_revnum_t replaces_rev,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_complete_t)(
  void *baton,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_abort_t)(
  void *baton,
  apr_pool_t *scratch_pool);
# 646 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_create(svn_editor_t **editor,
                  void *editor_baton,
                  svn_cancel_func_t cancel_func,
                  void *cancel_baton,
                  apr_pool_t *result_pool,
                  apr_pool_t *scratch_pool);
# 662 "./subversion/include/private/svn_editor.h"
void *
svn_editor_get_baton(const svn_editor_t *editor);
# 672 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_setcb_add_directory(svn_editor_t *editor,
                               svn_editor_cb_add_directory_t callback,
                               apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_add_file(svn_editor_t *editor,
                          svn_editor_cb_add_file_t callback,
                          apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_add_symlink(svn_editor_t *editor,
                             svn_editor_cb_add_symlink_t callback,
                             apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_add_absent(svn_editor_t *editor,
                            svn_editor_cb_add_absent_t callback,
                            apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_alter_directory(svn_editor_t *editor,
                                 svn_editor_cb_alter_directory_t callback,
                                 apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_alter_file(svn_editor_t *editor,
                            svn_editor_cb_alter_file_t callback,
                            apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_alter_symlink(svn_editor_t *editor,
                               svn_editor_cb_alter_symlink_t callback,
                               apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_delete(svn_editor_t *editor,
                        svn_editor_cb_delete_t callback,
                        apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_copy(svn_editor_t *editor,
                      svn_editor_cb_copy_t callback,
                      apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_move(svn_editor_t *editor,
                      svn_editor_cb_move_t callback,
                      apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_complete(svn_editor_t *editor,
                          svn_editor_cb_complete_t callback,
                          apr_pool_t *scratch_pool);







svn_error_t *
svn_editor_setcb_abort(svn_editor_t *editor,
                       svn_editor_cb_abort_t callback,
                       apr_pool_t *scratch_pool);







typedef struct svn_editor_cb_many_t
{
  svn_editor_cb_add_directory_t cb_add_directory;
  svn_editor_cb_add_file_t cb_add_file;
  svn_editor_cb_add_symlink_t cb_add_symlink;
  svn_editor_cb_add_absent_t cb_add_absent;
  svn_editor_cb_alter_directory_t cb_alter_directory;
  svn_editor_cb_alter_file_t cb_alter_file;
  svn_editor_cb_alter_symlink_t cb_alter_symlink;
  svn_editor_cb_delete_t cb_delete;
  svn_editor_cb_copy_t cb_copy;
  svn_editor_cb_move_t cb_move;
  svn_editor_cb_complete_t cb_complete;
  svn_editor_cb_abort_t cb_abort;

} svn_editor_cb_many_t;






svn_error_t *
svn_editor_setcb_many(svn_editor_t *editor,
                      const svn_editor_cb_many_t *many,
                      apr_pool_t *scratch_pool);
# 858 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_directory(svn_editor_t *editor,
                         const char *relpath,
                         const apr_array_header_t *children,
                         apr_hash_t *props,
                         svn_revnum_t replaces_rev);
# 889 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_file(svn_editor_t *editor,
                    const char *relpath,
                    const svn_checksum_t *checksum,
                    svn_stream_t *contents,
                    apr_hash_t *props,
                    svn_revnum_t replaces_rev);
# 908 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_symlink(svn_editor_t *editor,
                       const char *relpath,
                       const char *target,
                       apr_hash_t *props,
                       svn_revnum_t replaces_rev);
# 927 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_absent(svn_editor_t *editor,
                      const char *relpath,
                      svn_node_kind_t kind,
                      svn_revnum_t replaces_rev);
# 960 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_alter_directory(svn_editor_t *editor,
                           const char *relpath,
                           svn_revnum_t revision,
                           const apr_array_header_t *children,
                           apr_hash_t *props);
# 990 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_alter_file(svn_editor_t *editor,
                      const char *relpath,
                      svn_revnum_t revision,
                      const svn_checksum_t *checksum,
                      svn_stream_t *contents,
                      apr_hash_t *props);
# 1017 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_alter_symlink(svn_editor_t *editor,
                         const char *relpath,
                         svn_revnum_t revision,
                         const char *target,
                         apr_hash_t *props);
# 1032 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_delete(svn_editor_t *editor,
                  const char *relpath,
                  svn_revnum_t revision);
# 1052 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_copy(svn_editor_t *editor,
                const char *src_relpath,
                svn_revnum_t src_revision,
                const char *dst_relpath,
                svn_revnum_t replaces_rev);
# 1077 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_move(svn_editor_t *editor,
                const char *src_relpath,
                svn_revnum_t src_revision,
                const char *dst_relpath,
                svn_revnum_t replaces_rev);
# 1091 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_complete(svn_editor_t *editor);
# 1102 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_abort(svn_editor_t *editor);
# 1119 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor__insert_shims(const svn_delta_editor_t **deditor_out,
                         void **dedit_baton_out,
                         const svn_delta_editor_t *deditor_in,
                         void *dedit_baton_in,
                         const char *repos_root,
                         const char *base_dir,
                         svn_delta_shim_callbacks_t *shim_callbacks,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 35 "./subversion/include/private/svn_repos_private.h" 2
# 1 "./subversion/include/svn_config.h" 1
# 54 "./subversion/include/svn_config.h"
typedef struct svn_config_t svn_config_t;
# 230 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_config(apr_hash_t **cfg_hash,
                      const char *config_dir,
                      apr_pool_t *pool);
# 246 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_create2(svn_config_t **cfgp,
                   svn_boolean_t section_names_case_sensitive,
                   svn_boolean_t option_names_case_sensitive,
                   apr_pool_t *result_pool);







__attribute__((deprecated))
svn_error_t *
svn_config_create(svn_config_t **cfgp,
                  svn_boolean_t section_names_case_sensitive,
                  apr_pool_t *result_pool);
# 278 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_read3(svn_config_t **cfgp,
                 const char *file,
                 svn_boolean_t must_exist,
                 svn_boolean_t section_names_case_sensitive,
                 svn_boolean_t option_names_case_sensitive,
                 apr_pool_t *result_pool);







__attribute__((deprecated))
svn_error_t *
svn_config_read2(svn_config_t **cfgp,
                 const char *file,
                 svn_boolean_t must_exist,
                 svn_boolean_t section_names_case_sensitive,
                 apr_pool_t *result_pool);






__attribute__((deprecated))
svn_error_t *
svn_config_read(svn_config_t **cfgp,
                const char *file,
                svn_boolean_t must_exist,
                apr_pool_t *result_pool);
# 324 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_parse(svn_config_t **cfgp,
                 svn_stream_t *stream,
                 svn_boolean_t section_names_case_sensitive,
                 svn_boolean_t option_names_case_sensitive,
                 apr_pool_t *result_pool);







svn_error_t *
svn_config_merge(svn_config_t *cfg,
                 const char *file,
                 svn_boolean_t must_exist);
# 356 "./subversion/include/svn_config.h"
void
svn_config_get(svn_config_t *cfg,
               const char **valuep,
               const char *section,
               const char *option,
               const char *default_value);
# 370 "./subversion/include/svn_config.h"
void
svn_config_set(svn_config_t *cfg,
               const char *section,
               const char *option,
               const char *value);







svn_error_t *
svn_config_get_bool(svn_config_t *cfg,
                    svn_boolean_t *valuep,
                    const char *section,
                    const char *option,
                    svn_boolean_t default_value);





void
svn_config_set_bool(svn_config_t *cfg,
                    const char *section,
                    const char *option,
                    svn_boolean_t value);
# 408 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_int64(svn_config_t *cfg,
                     apr_int64_t *valuep,
                     const char *section,
                     const char *option,
                     apr_int64_t default_value);
# 422 "./subversion/include/svn_config.h"
void
svn_config_set_int64(svn_config_t *cfg,
                     const char *section,
                     const char *option,
                     apr_int64_t value);
# 444 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_yes_no_ask(svn_config_t *cfg,
                          const char **valuep,
                          const char *section,
                          const char *option,
                          const char* default_value);
# 464 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_tristate(svn_config_t *cfg,
                        svn_tristate_t *valuep,
                        const char *section,
                        const char *option,
                        const char *unknown_value,
                        svn_tristate_t default_value);
# 479 "./subversion/include/svn_config.h"
typedef svn_boolean_t (*svn_config_section_enumerator_t)(const char *name,
                                                         void *baton);






__attribute__((deprecated))
int
svn_config_enumerate_sections(svn_config_t *cfg,
                              svn_config_section_enumerator_t callback,
                              void *baton);







typedef svn_boolean_t (*svn_config_section_enumerator2_t)(const char *name,
                                                          void *baton,
                                                          apr_pool_t *pool);
# 514 "./subversion/include/svn_config.h"
int
svn_config_enumerate_sections2(svn_config_t *cfg,
                               svn_config_section_enumerator2_t callback,
                               void *baton, apr_pool_t *pool);







typedef svn_boolean_t (*svn_config_enumerator_t)(const char *name,
                                                 const char *value,
                                                 void *baton);






__attribute__((deprecated))
int
svn_config_enumerate(svn_config_t *cfg,
                     const char *section,
                     svn_config_enumerator_t callback,
                     void *baton);
# 548 "./subversion/include/svn_config.h"
typedef svn_boolean_t (*svn_config_enumerator2_t)(const char *name,
                                                  const char *value,
                                                  void *baton,
                                                  apr_pool_t *pool);
# 571 "./subversion/include/svn_config.h"
int
svn_config_enumerate2(svn_config_t *cfg,
                      const char *section,
                      svn_config_enumerator2_t callback,
                      void *baton,
                      apr_pool_t *pool);






svn_boolean_t
svn_config_has_section(svn_config_t *cfg,
                       const char *section);






const char *
svn_config_find_group(svn_config_t *cfg,
                      const char *key,
                      const char *master_section,
                      apr_pool_t *pool);
# 606 "./subversion/include/svn_config.h"
const char *
svn_config_get_server_setting(svn_config_t *cfg,
                              const char* server_group,
                              const char* option_name,
                              const char* default_value);
# 620 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_server_setting_int(svn_config_t *cfg,
                                  const char *server_group,
                                  const char *option_name,
                                  apr_int64_t default_value,
                                  apr_int64_t *result_value,
                                  apr_pool_t *pool);
# 639 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_server_setting_bool(svn_config_t *cfg,
                                   svn_boolean_t *valuep,
                                   const char *server_group,
                                   const char *option_name,
                                   svn_boolean_t default_value);
# 662 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_ensure(const char *config_dir,
                  apr_pool_t *pool);
# 777 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_read_auth_data(apr_hash_t **hash,
                          const char *cred_kind,
                          const char *realmstring,
                          const char *config_dir,
                          apr_pool_t *pool);
# 796 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_write_auth_data(apr_hash_t *hash,
                           const char *cred_kind,
                           const char *realmstring,
                           const char *config_dir,
                           apr_pool_t *pool);
# 824 "./subversion/include/svn_config.h"
typedef svn_error_t *
(*svn_config_auth_walk_func_t)(svn_boolean_t *delete_cred,
                               void *walk_baton,
                               const char *cred_kind,
                               const char *realmstring,
                               apr_hash_t *hash,
                               apr_pool_t *scratch_pool);
# 860 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_walk_auth_data(const char *config_dir,
                          svn_config_auth_walk_func_t walk_func,
                          void *walk_baton,
                          apr_pool_t *scratch_pool);
# 884 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_user_config_path(const char **path,
                                const char *config_dir,
                                const char *fname,
                                apr_pool_t *pool);






svn_error_t *
svn_config_dup(svn_config_t **cfgp,
               const svn_config_t *src,
               apr_pool_t *pool);






svn_error_t *
svn_config_copy_config(apr_hash_t **cfg_hash,
                       apr_hash_t *src_hash,
                       apr_pool_t *pool);
# 36 "./subversion/include/private/svn_repos_private.h" 2

# 1 "./subversion/include/private/svn_string_private.h" 1
# 56 "./subversion/include/private/svn_string_private.h"
typedef struct svn_membuf_t
{




  apr_pool_t *pool;


  void *data;


  apr_size_t size;
} svn_membuf_t;



void
svn_membuf__create(svn_membuf_t *membuf, apr_size_t size, apr_pool_t *pool);


void
svn_membuf__ensure(svn_membuf_t *membuf, apr_size_t size);


void
svn_membuf__resize(svn_membuf_t *membuf, apr_size_t size);


void
svn_membuf__zero(svn_membuf_t *membuf);



void
svn_membuf__nzero(svn_membuf_t *membuf, apr_size_t size);
# 131 "./subversion/include/private/svn_string_private.h"
svn_string_t *
svn_stringbuf__morph_into_string(svn_stringbuf_t *strbuf);






unsigned long
svn__strtoul(const char *buffer, const char **end);
# 151 "./subversion/include/private/svn_string_private.h"
apr_size_t
svn__ui64toa(char * dest, apr_uint64_t number);





apr_size_t
svn__i64toa(char * dest, apr_int64_t number);




char *
svn__ui64toa_sep(apr_uint64_t number, char separator, apr_pool_t *pool);




char *
svn__i64toa_sep(apr_int64_t number, char separator, apr_pool_t *pool);
# 183 "./subversion/include/private/svn_string_private.h"
apr_size_t
svn__ui64tobase36(char *dest, apr_uint64_t number);
# 196 "./subversion/include/private/svn_string_private.h"
apr_uint64_t
svn__base36toui64(const char **next, const char *source);
# 228 "./subversion/include/private/svn_string_private.h"
unsigned int
svn_cstring__similarity(const char *stra, const char *strb,
                        svn_membuf_t *buffer, apr_size_t *rlcs);





unsigned int
svn_string__similarity(const svn_string_t *stringa,
                       const svn_string_t *stringb,
                       svn_membuf_t *buffer, apr_size_t *rlcs);





apr_size_t
svn_cstring__match_length(const char *a,
                          const char *b,
                          apr_size_t max_len);






apr_size_t
svn_cstring__reverse_match_length(const char *a,
                                  const char *b,
                                  apr_size_t max_len);
# 276 "./subversion/include/private/svn_string_private.h"
typedef struct svn_prefix_string__t svn_prefix_string__t;




typedef struct svn_prefix_tree__t svn_prefix_tree__t;




svn_prefix_tree__t *
svn_prefix_tree__create(apr_pool_t *pool);





svn_prefix_string__t *
svn_prefix_string__create(svn_prefix_tree__t *tree,
                          const char *s);




svn_string_t *
svn_prefix_string__expand(const svn_prefix_string__t *s,
                          apr_pool_t *pool);





int
svn_prefix_string__compare(const svn_prefix_string__t *lhs,
                           const svn_prefix_string__t *rhs);
# 38 "./subversion/include/private/svn_repos_private.h" 2
# 72 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__validate_prop(const char *name,
                         const svn_string_t *value,
                         apr_pool_t *pool);
# 95 "./subversion/include/private/svn_repos_private.h"
const char *
svn_repos__post_commit_error_str(svn_error_t *err,
                                 apr_pool_t *pool);


svn_error_t *
svn_repos__fs_type(const char **fs_type,
                   const char *repos_path,
                   apr_pool_t *pool);



svn_error_t *
svn_repos__get_commit_ev2(svn_editor_t **editor,
                          svn_repos_t *repos,
                          svn_authz_t *authz,
                          const char *authz_repos_name,
                          const char *authz_user,
                          apr_hash_t *revprops,
                          svn_commit_callback2_t commit_cb,
                          void *commit_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);

svn_error_t *
svn_repos__replay_ev2(svn_fs_root_t *root,
                      const char *base_dir,
                      svn_revnum_t low_water_mark,
                      svn_editor_t *editor,
                      svn_repos_authz_func_t authz_read_func,
                      void *authz_read_baton,
                      apr_pool_t *scratch_pool);
# 145 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__retrieve_config(svn_config_t **cfg_p,
                           const char *path,
                           svn_boolean_t must_exist,
                           svn_boolean_t case_sensitive,
                           apr_pool_t *pool);
# 163 "./subversion/include/private/svn_repos_private.h"
typedef struct svn_repos__config_pool_t svn_repos__config_pool_t;







svn_error_t *
svn_repos__config_pool_create(svn_repos__config_pool_t **config_pool,
                              svn_boolean_t thread_safe,
                              apr_pool_t *pool);
# 195 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__config_pool_get(svn_config_t **cfg,
                           svn_membuf_t **key,
                           svn_repos__config_pool_t *config_pool,
                           const char *path,
                           svn_boolean_t must_exist,
                           svn_boolean_t case_sensitive,
                           svn_repos_t *preferred_repos,
                           apr_pool_t *pool);
# 218 "./subversion/include/private/svn_repos_private.h"
typedef struct svn_repos__authz_pool_t svn_repos__authz_pool_t;
# 228 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__authz_pool_create(svn_repos__authz_pool_t **authz_pool,
                             svn_repos__config_pool_t *config_pool,
                             svn_boolean_t thread_safe,
                             apr_pool_t *pool);
# 252 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__authz_pool_get(svn_authz_t **authz_p,
                          svn_repos__authz_pool_t *authz_pool,
                          const char *path,
                          const char *groups_path,
                          svn_boolean_t must_exist,
                          svn_repos_t *preferred_repos,
                          apr_pool_t *pool);
# 284 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__adjust_mergeinfo_property(svn_string_t **new_value_p,
                                     const svn_string_t *old_value,
                                     const char *parent_dir,
                                     apr_hash_t *rev_map,
                                     svn_revnum_t oldest_dumpstream_rev,
                                     apr_int32_t older_revs_offset,
                                     svn_repos_notify_func_t notify_func,
                                     void *notify_baton,
                                     apr_pool_t *result_pool,
                                     apr_pool_t *scratch_pool);
# 313 "./subversion/include/private/svn_repos_private.h"
svn_error_t *
svn_repos__dump_revision_record(svn_stream_t *dump_stream,
                                svn_revnum_t revision,
                                apr_hash_t *extra_headers,
                                apr_hash_t *revprops,
                                svn_boolean_t props_section_always,
                                apr_pool_t *scratch_pool);
# 42 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/private/svn_mergeinfo_private.h" 1
# 43 "./subversion/include/private/svn_mergeinfo_private.h"
void
svn_rangelist__set_inheritance(svn_rangelist_t *rangelist,
                               svn_boolean_t inheritable);
# 57 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_rangelist__parse(svn_rangelist_t **rangelist,
                     const char *str,
                     apr_pool_t *result_pool);



svn_error_t *
svn_rangelist__combine_adjacent_ranges(svn_rangelist_t *rangelist,
                                       apr_pool_t *scratch_pool);
# 76 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_rangelist__canonicalize(svn_rangelist_t *rangelist,
                            apr_pool_t *scratch_pool);






svn_error_t *
svn_mergeinfo__canonicalize_ranges(svn_mergeinfo_t mergeinfo,
                                   apr_pool_t *scratch_pool);




void
svn_mergeinfo__set_inheritance(svn_mergeinfo_t mergeinfo,
                               svn_boolean_t inheritable,
                               apr_pool_t *scratch_pool);
# 115 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_mergeinfo__equals(svn_boolean_t *is_equal,
                      svn_mergeinfo_t info1,
                      svn_mergeinfo_t info2,
                      svn_boolean_t consider_inheritance,
                      apr_pool_t *pool);





svn_boolean_t
svn_mergeinfo__remove_empty_rangelists(svn_mergeinfo_t mergeinfo,
                                       apr_pool_t *scratch_pool);
# 139 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_mergeinfo__remove_prefix_from_catalog(svn_mergeinfo_catalog_t *out_catalog,
                                          svn_mergeinfo_catalog_t in_catalog,
                                          const char *prefix_path,
                                          apr_pool_t *pool);







svn_error_t *
svn_mergeinfo__add_prefix_to_catalog(svn_mergeinfo_catalog_t *out_catalog,
                                     svn_mergeinfo_catalog_t in_catalog,
                                     const char *prefix_path,
                                     apr_pool_t *result_pool,
                                     apr_pool_t *scratch_pool);






svn_error_t *
svn_mergeinfo__add_suffix_to_mergeinfo(svn_mergeinfo_t *out_mergeinfo,
                                       svn_mergeinfo_t mergeinfo,
                                       const char *suffix_relpath,
                                       apr_pool_t *result_pool,
                                       apr_pool_t *scratch_pool);
# 182 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_mergeinfo__catalog_to_formatted_string(svn_string_t **output,
                                           svn_mergeinfo_catalog_t catalog,
                                           const char *key_prefix,
                                           const char *val_prefix,
                                           apr_pool_t *pool);





svn_error_t *
svn_mergeinfo__get_range_endpoints(svn_revnum_t *youngest_rev,
                                   svn_revnum_t *oldest_rev,
                                   svn_mergeinfo_t mergeinfo,
                                   apr_pool_t *pool);
# 208 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_mergeinfo__filter_mergeinfo_by_ranges(svn_mergeinfo_t *filtered_mergeinfo,
                                          svn_mergeinfo_t mergeinfo,
                                          svn_revnum_t youngest_rev,
                                          svn_revnum_t oldest_rev,
                                          svn_boolean_t include_range,
                                          apr_pool_t *result_pool,
                                          apr_pool_t *scratch_pool);
# 225 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t*
svn_mergeinfo__filter_catalog_by_ranges(
  svn_mergeinfo_catalog_t *filtered_catalog,
  svn_mergeinfo_catalog_t catalog,
  svn_revnum_t youngest_rev,
  svn_revnum_t oldest_rev,
  svn_boolean_t include_range,
  apr_pool_t *result_pool,
  apr_pool_t *scratch_pool);



svn_boolean_t
svn_mergeinfo__is_noninheritable(svn_mergeinfo_t mergeinfo,
                                 apr_pool_t *scratch_pool);




svn_rangelist_t *
svn_rangelist__initialize(svn_revnum_t start,
                          svn_revnum_t end,
                          svn_boolean_t inheritable,
                          apr_pool_t *result_pool);
# 257 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_mergeinfo__adjust_mergeinfo_rangelists(svn_mergeinfo_t *adjusted_mergeinfo,
                                           svn_mergeinfo_t mergeinfo,
                                           svn_revnum_t offset,
                                           apr_pool_t *result_pool,
                                           apr_pool_t *scratch_pool);
# 271 "./subversion/include/private/svn_mergeinfo_private.h"
svn_error_t *
svn_mergeinfo__mergeinfo_from_segments(svn_mergeinfo_t *mergeinfo_p,
                                       const apr_array_header_t *segments,
                                       apr_pool_t *pool);






svn_error_t *
svn_rangelist__merge_many(svn_rangelist_t *merged_rangelist,
                          svn_mergeinfo_t mergeinfo,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/private/svn_fs_private.h" 1
# 59 "./subversion/include/private/svn_fs_private.h"
apr_hash_t *
svn_fs__access_get_lock_tokens(svn_fs_access_t *access_ctx);







svn_error_t *
svn_fs__path_valid(const char *path, apr_pool_t *pool);
# 104 "./subversion/include/private/svn_fs_private.h"
svn_error_t *
svn_fs__editor_create(svn_editor_t **editor,
                      const char **txn_name,
                      svn_fs_t *fs,
                      apr_uint32_t flags,
                      svn_cancel_func_t cancel_func,
                      void *cancel_baton,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 121 "./subversion/include/private/svn_fs_private.h"
svn_error_t *
svn_fs__editor_create_for(svn_editor_t **editor,
                          svn_fs_t *fs,
                          const char *txn_name,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 173 "./subversion/include/private/svn_fs_private.h"
svn_error_t *
svn_fs__editor_commit(svn_revnum_t *revision,
                      svn_error_t **post_commit_err,
                      const char **conflict_path,
                      svn_editor_t *editor,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 189 "./subversion/include/private/svn_fs_private.h"
svn_error_t *
svn_fs__get_mergeinfo_for_path(svn_mergeinfo_t *mergeinfo,
                               svn_fs_root_t *root,
                               const char *path,
                               svn_mergeinfo_inheritance_t inherit,
                               svn_boolean_t adjust_inherited_mergeinfo,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);
# 44 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/private/svn_sorts_private.h" 1
# 42 "./subversion/include/private/svn_sorts_private.h"
struct svn_sort__item_t {

  const void *key;


  apr_ssize_t klen;


  void *value;
};
# 69 "./subversion/include/private/svn_sorts_private.h"
apr_array_header_t *
svn_sort__hash(apr_hash_t *ht,
               int (*comparison_func)(const svn_sort__item_t *,
                                      const svn_sort__item_t *),
               apr_pool_t *pool);




void
svn_sort__array(apr_array_header_t *array,
                int (*comparison_func)(const void *,
                                       const void *));
# 91 "./subversion/include/private/svn_sorts_private.h"
int
svn_sort__bsearch_lower_bound(const apr_array_header_t *array,
                              const void *key,
                              int (*compare_func)(const void *, const void *));
# 112 "./subversion/include/private/svn_sorts_private.h"
void *
svn_sort__array_lookup(const apr_array_header_t *array,
                       const void *key,
                       int *hint,
                       int (*compare_func)(const void *, const void *));
# 125 "./subversion/include/private/svn_sorts_private.h"
void
svn_sort__array_insert(apr_array_header_t *array,
                       const void *new_element,
                       int insert_index);
# 139 "./subversion/include/private/svn_sorts_private.h"
void
svn_sort__array_delete(apr_array_header_t *arr,
                       int delete_index,
                       int elements_to_delete);





void
svn_sort__array_reverse(apr_array_header_t *array,
                        apr_pool_t *scratch_pool);
# 171 "./subversion/include/private/svn_sorts_private.h"
typedef struct svn_priority_queue__t svn_priority_queue__t;
# 181 "./subversion/include/private/svn_sorts_private.h"
svn_priority_queue__t *
svn_priority_queue__create(apr_array_header_t *elements,
                           int (*compare_func)(const void *, const void *));




apr_size_t
svn_priority_queue__size(svn_priority_queue__t *queue);






void *
svn_priority_queue__peek(svn_priority_queue__t *queue);





void
svn_priority_queue__update(svn_priority_queue__t *queue);





void
svn_priority_queue__pop(svn_priority_queue__t *queue);





void
svn_priority_queue__push(svn_priority_queue__t *queue, const void *element);
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/private/svn_utf_private.h" 1
# 46 "./subversion/include/private/svn_utf_private.h"
svn_boolean_t
svn_utf__is_valid(const char *src, apr_size_t len);


svn_boolean_t
svn_utf__cstring_is_valid(const char *src);
# 63 "./subversion/include/private/svn_utf_private.h"
const char *
svn_utf__last_valid(const char *src, apr_size_t len);
# 73 "./subversion/include/private/svn_utf_private.h"
const char *
svn_utf__last_valid2(const char *src, apr_size_t len);
# 85 "./subversion/include/private/svn_utf_private.h"
const char *
svn_utf__fuzzy_escape(const char *src, apr_size_t length, apr_pool_t *pool);

const char *
svn_utf__cstring_from_utf8_fuzzy(const char *src,
                                 apr_pool_t *pool,
                                 svn_error_t *(*convert_from_utf8)
                                              (const char **,
                                               const char *,
                                               apr_pool_t *));
# 131 "./subversion/include/private/svn_utf_private.h"
svn_error_t *
svn_utf__normcmp(int *result,
                 const char *str1, apr_size_t len1,
                 const char *str2, apr_size_t len2,
                 svn_membuf_t *buf1, svn_membuf_t *buf2);
# 148 "./subversion/include/private/svn_utf_private.h"
svn_error_t*
svn_utf__normalize(const char **result,
                   const char *str, apr_size_t len,
                   svn_membuf_t *buf);







svn_boolean_t
svn_utf__is_normalized(const char *string, apr_pool_t *scratch_pool);
# 180 "./subversion/include/private/svn_utf_private.h"
svn_error_t *
svn_utf__glob(svn_boolean_t *match,
              const char *pattern, apr_size_t pattern_len,
              const char *string, apr_size_t string_len,
              const char *escape, apr_size_t escape_len,
              svn_boolean_t sql_like,
              svn_membuf_t *pattern_buf,
              svn_membuf_t *string_buf,
              svn_membuf_t *temp_buf);


const char *
svn_utf__utf8proc_version(void);
# 46 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 1 "./subversion/include/private/svn_cache.h" 1
# 57 "./subversion/include/private/svn_cache.h"
typedef svn_error_t *(*svn_cache__deserialize_func_t)(void **out,
                                                      void *data,
                                                      apr_size_t data_len,
                                                      apr_pool_t *result_pool);
# 69 "./subversion/include/private/svn_cache.h"
typedef svn_error_t *(*svn_cache__partial_getter_func_t)(void **out,
                                                         const void *data,
                                                         apr_size_t data_len,
                                                         void *baton,
                                                         apr_pool_t *result_pool);
# 83 "./subversion/include/private/svn_cache.h"
typedef svn_error_t *(*svn_cache__partial_setter_func_t)(void **data,
                                                         apr_size_t *data_len,
                                                         void *baton,
                                                         apr_pool_t *result_pool);






typedef svn_error_t *(*svn_cache__serialize_func_t)(void **data,
                                                    apr_size_t *data_len,
                                                    void *in,
                                                    apr_pool_t *result_pool);





typedef svn_error_t *(*svn_cache__error_handler_t)(svn_error_t *err,
                                                   void *baton,
                                                   apr_pool_t *scratch_pool);






typedef struct svn_memcache_t svn_memcache_t;




typedef struct svn_membuffer_t svn_membuffer_t;




typedef struct svn_cache__t svn_cache__t;






typedef struct svn_cache__info_t
{



  const char* id;



  apr_uint64_t gets;



  apr_uint64_t hits;



  apr_uint64_t sets;



  apr_uint64_t failures;




  apr_uint64_t used_size;




  apr_uint64_t data_size;





  apr_uint64_t total_size;




  apr_uint64_t used_entries;




  apr_uint64_t total_entries;





  apr_uint64_t histogram[32];
} svn_cache__info_t;
# 215 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__create_inprocess(svn_cache__t **cache_p,
                            svn_cache__serialize_func_t serialize_func,
                            svn_cache__deserialize_func_t deserialize_func,
                            apr_ssize_t klen,
                            apr_int64_t pages,
                            apr_int64_t items_per_page,
                            svn_boolean_t thread_safe,
                            const char *id,
                            apr_pool_t *pool);
# 247 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__create_memcache(svn_cache__t **cache_p,
                           svn_memcache_t *memcache,
                           svn_cache__serialize_func_t serialize_func,
                           svn_cache__deserialize_func_t deserialize_func,
                           apr_ssize_t klen,
                           const char *prefix,
                           apr_pool_t *result_pool);
# 267 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__make_memcache_from_config(svn_memcache_t **memcache_p,
                                     svn_config_t *config,
                                     apr_pool_t *result_pool,
                                     apr_pool_t *scratch_pool);
# 304 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__membuffer_cache_create(svn_membuffer_t **cache,
                                  apr_size_t total_size,
                                  apr_size_t directory_size,
                                  apr_size_t segment_count,
                                  svn_boolean_t thread_safe,
                                  svn_boolean_t allow_blocking_writes,
                                  apr_pool_t *result_pool);
# 363 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__create_membuffer_cache(svn_cache__t **cache_p,
                                  svn_membuffer_t *membuffer,
                                  svn_cache__serialize_func_t serialize,
                                  svn_cache__deserialize_func_t deserialize,
                                  apr_ssize_t klen,
                                  const char *prefix,
                                  apr_uint32_t priority,
                                  svn_boolean_t thread_safe,
                                  apr_pool_t *result_pool,
                                  apr_pool_t *scratch_pool);
# 384 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__set_error_handler(svn_cache__t *cache,
                             svn_cache__error_handler_t handler,
                             void *baton,
                             apr_pool_t *scratch_pool);
# 397 "./subversion/include/private/svn_cache.h"
svn_boolean_t
svn_cache__is_cachable(svn_cache__t *cache,
                       apr_size_t size);
# 410 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__get(void **value,
               svn_boolean_t *found,
               svn_cache__t *cache,
               const void *key,
               apr_pool_t *result_pool);







svn_error_t *
svn_cache__has_key(svn_boolean_t *found,
                   svn_cache__t *cache,
                   const void *key,
                   apr_pool_t *scratch_pool);
# 442 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__set(svn_cache__t *cache,
               const void *key,
               void *value,
               apr_pool_t *scratch_pool);
# 468 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__iter(svn_boolean_t *completed,
                svn_cache__t *cache,
                svn_iter_apr_hash_cb_t func,
                void *baton,
                apr_pool_t *scratch_pool);
# 483 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__get_partial(void **value,
                       svn_boolean_t *found,
                       svn_cache__t *cache,
                       const void *key,
                       svn_cache__partial_getter_func_t func,
                       void *baton,
                       apr_pool_t *result_pool);
# 499 "./subversion/include/private/svn_cache.h"
svn_error_t *
svn_cache__set_partial(svn_cache__t *cache,
                       const void *key,
                       svn_cache__partial_setter_func_t func,
                       void *baton,
                       apr_pool_t *scratch_pool);







svn_error_t *
svn_cache__get_info(svn_cache__t *cache,
                    svn_cache__info_t *info,
                    svn_boolean_t reset,
                    apr_pool_t *result_pool);






svn_string_t *
svn_cache__format_info(const svn_cache__info_t *info,
                       svn_boolean_t access_only,
                       apr_pool_t *result_pool);
# 535 "./subversion/include/private/svn_cache.h"
struct svn_membuffer_t *
svn_cache__get_global_membuffer_cache(void);





svn_cache__info_t *
svn_cache__membuffer_get_global_info(apr_pool_t *pool);
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c" 2
# 80 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
typedef struct path_tracker_entry_t
{

  svn_stringbuf_t *path;


  svn_stringbuf_t *copyfrom_path;



  svn_revnum_t copyfrom_rev;


  svn_boolean_t exists;
} path_tracker_entry_t;



typedef struct path_tracker_t
{




  apr_array_header_t *stack;


  int depth;





  svn_revnum_t revision;


  apr_pool_t *pool;
} path_tracker_t;



static path_tracker_t *
tracker_create(svn_revnum_t revision,
               apr_pool_t *pool)
{
  path_tracker_t *result = memset(apr_palloc(pool, sizeof(*result)), 0, sizeof(*result));
  result->stack = apr_array_make(pool, 16, sizeof(path_tracker_entry_t));
  result->revision = revision;
  result->pool = pool;

  return result;
}
# 141 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static void
tracker_trim(path_tracker_t *tracker,
             const char *path,
             svn_boolean_t allow_exact_match)
{





  for (; tracker->depth; --tracker->depth)
    {
      path_tracker_entry_t *parent = &(((path_tracker_entry_t *)(tracker->stack)->elts)[tracker->depth - 1]);


      const char *rel_path
        = svn_dirent_skip_ancestor(parent->path->data, path);


      if (rel_path && (allow_exact_match || *rel_path != '\0'))
        break;
    }
}
# 177 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static void
tracker_lookup(const char **orig_path,
               svn_revnum_t *orig_rev,
               path_tracker_t *tracker,
               const char *path,
               apr_pool_t *pool)
{
  tracker_trim(tracker, path, (!0));
  if (tracker->depth == 0)
    {

      *orig_path = path;
      *orig_rev = tracker->revision - 1;
    }
  else
    {
      path_tracker_entry_t *parent = &(((path_tracker_entry_t *)(tracker->stack)->elts)[tracker->depth - 1]);


      if (parent->exists)
        {
          const char *rel_path
            = svn_dirent_skip_ancestor(parent->path->data, path);

          if (parent->copyfrom_rev != ((svn_revnum_t) -1))
            {

              *orig_path = svn_dirent_join(parent->copyfrom_path->data,
                                           rel_path, pool);
              *orig_rev = parent->copyfrom_rev;
            }
          else if (*rel_path == '\0')
            {

              *orig_path = path;
              *orig_rev = tracker->revision;
            }
          else
            {

              *orig_path = ((void*)0);
              *orig_rev = ((svn_revnum_t) -1);
            }
        }
      else
        {

          *orig_path = ((void*)0);
          *orig_rev = ((svn_revnum_t) -1);
        }
    }
}
# 237 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static path_tracker_entry_t *
tracker_add_entry(path_tracker_t *tracker,
                  const char *path)
{
  path_tracker_entry_t *entry;
  tracker_trim(tracker, path, 0);

  if (tracker->depth == tracker->stack->nelts)
    {
      entry = apr_array_push(tracker->stack);
      entry->path = svn_stringbuf_create_empty(tracker->pool);
      entry->copyfrom_path = svn_stringbuf_create_empty(tracker->pool);
    }
  else
    {
      entry = &(((path_tracker_entry_t *)(tracker->stack)->elts)[tracker->depth]);

    }

  svn_stringbuf_set(entry->path, path);
  ++tracker->depth;

  return entry;
}




static void
tracker_path_copy(path_tracker_t *tracker,
                  const char *path,
                  const char *copyfrom_path,
                  svn_revnum_t copyfrom_rev)
{
  path_tracker_entry_t *entry = tracker_add_entry(tracker, path);

  svn_stringbuf_set(entry->copyfrom_path, copyfrom_path);
  entry->copyfrom_rev = copyfrom_rev;
  entry->exists = (!0);
}



static void
tracker_path_add(path_tracker_t *tracker,
                 const char *path)
{
  path_tracker_entry_t *entry = tracker_add_entry(tracker, path);

  svn_stringbuf_setempty(entry->copyfrom_path);
  entry->copyfrom_rev = ((svn_revnum_t) -1);
  entry->exists = (!0);
}




static void
tracker_path_replace(path_tracker_t *tracker,
                     const char *path)
{


  tracker_path_add(tracker, path);
}



static void
tracker_path_delete(path_tracker_t *tracker,
                    const char *path)
{
  path_tracker_entry_t *entry = tracker_add_entry(tracker, path);

  svn_stringbuf_setempty(entry->copyfrom_path);
  entry->copyfrom_rev = ((svn_revnum_t) -1);
  entry->exists = 0;
}
# 323 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static svn_error_t *
store_delta(apr_file_t **tempfile, svn_filesize_t *len,
            svn_fs_root_t *oldroot, const char *oldpath,
            svn_fs_root_t *newroot, const char *newpath, apr_pool_t *pool)
{
  svn_stream_t *temp_stream;
  apr_off_t offset = 0;
  svn_txdelta_stream_t *delta_stream;
  svn_txdelta_window_handler_t wh;
  void *whb;



  do { svn_error_t *svn_err__temp = (svn_io_open_unique_file3(tempfile, ((void*)0), ((void*)0), svn_io_file_del_on_pool_cleanup, pool, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  temp_stream = svn_stream_from_aprfile2(*tempfile, (!0), pool);


  do { svn_error_t *svn_err__temp = (svn_fs_get_file_delta_stream(&delta_stream, oldroot, oldpath, newroot, newpath, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  svn_txdelta_to_svndiff3(&wh, &whb, temp_stream, 0,
                          5, pool);
  do { svn_error_t *svn_err__temp = (svn_txdelta_send_txstream(delta_stream, wh, whb, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (svn_io_file_seek(*tempfile, 1, &offset, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  *len = offset;
  offset = 0;
  return svn_io_file_seek(*tempfile, 0, &offset, pool);
}






static void
notify_warning(apr_pool_t *scratch_pool,
               svn_repos_notify_func_t notify_func,
               void *notify_baton,
               svn_repos_notify_warning_t warning,
               const char *warning_fmt,
               ...)
{
  va_list va;
  svn_repos_notify_t *notify;

  if (notify_func == ((void*)0))
    return;

  notify = svn_repos_notify_create(svn_repos_notify_warning, scratch_pool);
  notify->warning = warning;
  __builtin_va_start(va, warning_fmt);
  notify->warning_str = apr_pvsprintf(scratch_pool, warning_fmt, va);
  __builtin_va_end(va);

  notify_func(notify_baton, notify, scratch_pool);
}






static svn_error_t *
write_header(svn_stream_t *stream,
             apr_hash_t *headers,
             const char *key,
             apr_pool_t *scratch_pool)
{
  const char *val = apr_hash_get(headers, key, (-1));

  if (val)
    {
      do { svn_error_t *svn_err__temp = (svn_stream_printf(stream, scratch_pool, "%s: %s\n", key, val)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }
  return 0;
}





static svn_error_t *
write_revision_headers(svn_stream_t *stream,
                       apr_hash_t *headers,
                       apr_pool_t *scratch_pool)
{
  const char **h;
  apr_hash_index_t *hi;

  static const char *revision_headers_order[] =
  {
    "Revision-number",
  };


  for (h = revision_headers_order; *h; h++)
    {
      do { svn_error_t *svn_err__temp = (write_header(stream, headers, *h, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      apr_hash_set(headers, *h, (-1), ((void*)0));
    }




  for (hi = apr_hash_first(scratch_pool, headers); hi; hi = apr_hash_next(hi))
    {
      const char *key = apr_hash_this_key(hi);

      if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (key) && __builtin_constant_p ("Content-length") && (__s1_len = __builtin_strlen (key), __s2_len = __builtin_strlen ("Content-length"), (!((size_t)(const void *)((key) + 1) - (size_t)(const void *)(key) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("Content-length") + 1) - (size_t)(const void *)("Content-length") == 1) || __s2_len >= 4)) ? __builtin_strcmp (key, "Content-length") : (__builtin_constant_p (key) && ((size_t)(const void *)((key) + 1) - (size_t)(const void *)(key) == 1) && (__s1_len = __builtin_strlen (key), __s1_len < 4) ? (__builtin_constant_p ("Content-length") && ((size_t)(const void *)(("Content-length") + 1) - (size_t)(const void *)("Content-length") == 1) ? __builtin_strcmp (key, "Content-length") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("Content-length"); int __result = (((const unsigned char *) (const char *) (key))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (key))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (key))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (key))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("Content-length") && ((size_t)(const void *)(("Content-length") + 1) - (size_t)(const void *)("Content-length") == 1) && (__s2_len = __builtin_strlen ("Content-length"), __s2_len < 4) ? (__builtin_constant_p (key) && ((size_t)(const void *)((key) + 1) - (size_t)(const void *)(key) == 1) ? __builtin_strcmp (key, "Content-length") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (key); int __result = (((const unsigned char *) (const char *) ("Content-length"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("Content-length"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("Content-length"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("Content-length"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (key, "Content-length")))); }) != 0)
        do { svn_error_t *svn_err__temp = (write_header(stream, headers, key, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }


  do { svn_error_t *svn_err__temp = (write_header(stream, headers, "Content-length", scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  return 0;
}

svn_error_t *
svn_repos__dump_revision_record(svn_stream_t *dump_stream,
                                svn_revnum_t revision,
                                apr_hash_t *extra_headers,
                                apr_hash_t *revprops,
                                svn_boolean_t props_section_always,
                                apr_pool_t *scratch_pool)
{
  svn_stringbuf_t *propstring = ((void*)0);
  apr_hash_t *headers;

  if (extra_headers)
    headers = apr_hash_copy(scratch_pool, extra_headers);
  else
    headers = apr_hash_make(scratch_pool);



  apr_hash_set(headers, "Revision-number", (-1), apr_psprintf(scratch_pool, "%ld", revision));


  if (apr_hash_count(revprops) || props_section_always)
    {
      svn_stream_t *propstream;

      propstring = svn_stringbuf_create_empty(scratch_pool);
      propstream = svn_stream_from_stringbuf(propstring, scratch_pool);
      do { svn_error_t *svn_err__temp = (svn_hash_write2(revprops, propstream, "PROPS-END", scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      do { svn_error_t *svn_err__temp = (svn_stream_close(propstream)); if (svn_err__temp) return (svn_err__temp); } while (0);

      apr_hash_set(headers, "Prop-content-length", (-1), apr_psprintf(scratch_pool, "%" "lu", propstring->len));


    }



  apr_hash_set(headers, "Content-length", (-1), apr_psprintf(scratch_pool, "%" "lu", propstring->len));


  do { svn_error_t *svn_err__temp = (write_revision_headers(dump_stream, headers, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (svn_stream_puts(dump_stream, "\n")); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (propstring)
    {
      do { svn_error_t *svn_err__temp = (svn_stream_write(dump_stream, propstring->data, &propstring->len)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }


  do { svn_error_t *svn_err__temp = (svn_stream_puts(dump_stream, "\n")); if (svn_err__temp) return (svn_err__temp); } while (0);

  return 0;
}







struct edit_baton
{


  const char *path;


  svn_stream_t *stream;


  svn_repos_notify_func_t notify_func;
  void *notify_baton;


  svn_fs_root_t *fs_root;
  svn_revnum_t current_rev;


  svn_fs_t *fs;


  svn_boolean_t use_deltas;


  svn_boolean_t verify;


  svn_boolean_t check_normalization;


  svn_revnum_t oldest_dumped_rev;



  svn_boolean_t *found_old_reference;



  svn_boolean_t *found_old_mergeinfo;



  path_tracker_t *path_tracker;
};

struct dir_baton
{
  struct edit_baton *edit_baton;
  struct dir_baton *parent_dir_baton;


  svn_boolean_t added;


  svn_boolean_t written_out;


  const char *path;





  const char *cmp_path;
  svn_revnum_t cmp_rev;





  apr_hash_t *deleted_entries;





  svn_boolean_t check_name_collision;


  apr_pool_t *pool;
};
# 604 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static struct dir_baton *
make_dir_baton(const char *path,
               const char *cmp_path,
               svn_revnum_t cmp_rev,
               void *edit_baton,
               void *parent_dir_baton,
               svn_boolean_t added,
               apr_pool_t *pool)
{
  struct edit_baton *eb = edit_baton;
  struct dir_baton *pb = parent_dir_baton;
  struct dir_baton *new_db = memset(apr_palloc(pool, sizeof(*new_db)), 0, sizeof(*new_db));
  const char *full_path;


  do { if (!(!path || pb)) { svn_error__malfunction(0, "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c", 619, "!path || pb"); abort(); } } while (0);


  if (pb)
    full_path = svn_relpath_join(eb->path, path, pool);
  else
    full_path = apr_pstrdup(pool, eb->path);


  if (cmp_path)
    cmp_path = svn_relpath_canonicalize(cmp_path, pool);

  new_db->edit_baton = eb;
  new_db->parent_dir_baton = pb;
  new_db->path = full_path;
  new_db->cmp_path = cmp_path;
  new_db->cmp_rev = cmp_rev;
  new_db->added = added;
  new_db->written_out = 0;
  new_db->deleted_entries = apr_hash_make(pool);
  new_db->check_name_collision = 0;
  new_db->pool = pool;

  return new_db;
}

static svn_error_t *
fetch_kind_func(svn_node_kind_t *kind,
                void *baton,
                const char *path,
                svn_revnum_t base_revision,
                apr_pool_t *scratch_pool);
# 661 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static svn_error_t *
node_must_exist(struct edit_baton *eb,
                const char *path,
                svn_revnum_t revision,
                svn_node_kind_t expected_kind,
                apr_pool_t *scratch_pool)
{
  svn_node_kind_t kind = svn_node_none;


  if (eb->path_tracker == ((void*)0))
    return 0;



  if (revision == eb->path_tracker->revision)
    tracker_lookup(&path, &revision, eb->path_tracker, path, scratch_pool);


  if (path)
    do { svn_error_t *svn_err__temp = (fetch_kind_func(&kind, eb, path, revision, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (kind == svn_node_none)
    return svn_error_createf(SVN_ERR_FS_NOT_FOUND, ((void*)0),
                             dcgettext ("subversion", "Path '%s' not found in r%ld.", 5),
                             path, revision);

  if (expected_kind != kind && expected_kind != svn_node_unknown)
    return svn_error_createf(SVN_ERR_NODE_UNEXPECTED_KIND, ((void*)0),
                             dcgettext ("subversion", "Unexpected node kind %d for '%s' at r%ld. " "Expected kind was %d.", 5),

                             kind, path, revision, expected_kind);

  return 0;
}
# 705 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static svn_error_t *
node_must_not_exist(struct edit_baton *eb,
                    const char *path,
                    svn_revnum_t revision,
                    apr_pool_t *scratch_pool)
{
  svn_node_kind_t kind = svn_node_none;


  if (eb->path_tracker == ((void*)0))
    return 0;



  if (revision == eb->path_tracker->revision)
    tracker_lookup(&path, &revision, eb->path_tracker, path, scratch_pool);


  if (path)
    do { svn_error_t *svn_err__temp = (fetch_kind_func(&kind, eb, path, revision, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (kind != svn_node_none)
    return svn_error_createf(SVN_ERR_FS_ALREADY_EXISTS, ((void*)0),
                             dcgettext ("subversion", "Path '%s' exists in r%ld.", 5),
                             path, revision);

  return 0;
}





static svn_error_t *
verify_mergeinfo_revisions(svn_boolean_t *found_old_mergeinfo,
                           const char *mergeinfo_str,
                           svn_revnum_t oldest_dumped_rev,
                           svn_repos_notify_func_t notify_func,
                           void *notify_baton,
                           apr_pool_t *pool)
{
  svn_mergeinfo_t mergeinfo, old_mergeinfo;

  do { svn_error_t *svn_err__temp = (svn_mergeinfo_parse(&mergeinfo, mergeinfo_str, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  do { svn_error_t *svn_err__temp = (svn_mergeinfo__filter_mergeinfo_by_ranges( &old_mergeinfo, mergeinfo, oldest_dumped_rev - 1, 0, (!0), pool, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  if (apr_hash_count(old_mergeinfo))
    {
      notify_warning(pool, notify_func, notify_baton,
                     svn_repos_notify_warning_found_old_mergeinfo,
                     dcgettext ("subversion", "Mergeinfo referencing revision(s) prior " "to the oldest dumped revision (r%ld). " "Loading this dump may result in invalid " "mergeinfo.", 5),



                     oldest_dumped_rev);

      if (found_old_mergeinfo)
        *found_old_mergeinfo = (!0);
    }

  return 0;
}



static const char normalized_unique[] = "normalized_unique";
static const char normalized_collision[] = "normalized_collision";



struct extract_mergeinfo_paths_baton
{
  apr_hash_t *result;
  svn_boolean_t normalize;
  svn_membuf_t buffer;
};



static svn_error_t *
extract_mergeinfo_paths(void *baton, const void *key, apr_ssize_t klen,
                         void *val, apr_pool_t *iterpool)
{
  struct extract_mergeinfo_paths_baton *const xb = baton;
  if (xb->normalize)
    {
      const char *normkey;
      do { svn_error_t *svn_err__temp = (svn_utf__normalize(&normkey, key, klen, &xb->buffer)); if (svn_err__temp) return (svn_err__temp); } while (0);
      apr_hash_set(xb->result, apr_pstrdup(xb->buffer.pool, normkey), (-1), normalized_unique);


    }
  else
    apr_hash_set(xb->result,
                 apr_pmemdup(xb->buffer.pool, key, klen + 1), klen,
                 normalized_unique);
  return 0;
}


struct filter_mergeinfo_paths_baton
{
  apr_hash_t *paths;
};



static svn_error_t *
filter_mergeinfo_paths(void *baton, const void *key, apr_ssize_t klen,
                       void *val, apr_pool_t *iterpool)
{
  struct filter_mergeinfo_paths_baton *const fb = baton;

  if (apr_hash_get(fb->paths, key, klen))
    apr_hash_set(fb->paths, key, klen, ((void*)0));

  return 0;
}


struct verify_mergeinfo_normalization_baton
{
  const char* path;
  apr_hash_t *normalized_paths;
  svn_membuf_t buffer;
  svn_repos_notify_func_t notify_func;
  void *notify_baton;
};



static svn_error_t *
verify_mergeinfo_normalization(void *baton, const void *key, apr_ssize_t klen,
                               void *val, apr_pool_t *iterpool)
{
  struct verify_mergeinfo_normalization_baton *const vb = baton;

  const char *const path = key;
  const char *normpath;
  const char *found;

  do { svn_error_t *svn_err__temp = (svn_utf__normalize(&normpath, path, klen, &vb->buffer)); if (svn_err__temp) return (svn_err__temp); } while (0);
  found = apr_hash_get(vb->normalized_paths, normpath, (-1));
  if (!found)
      apr_hash_set(vb->normalized_paths, apr_pstrdup(vb->buffer.pool, normpath), (-1), normalized_unique);


  else if (found == normalized_collision)
                                         ;
  else
    {

      apr_hash_set(vb->normalized_paths, apr_pstrdup(vb->buffer.pool, normpath), (-1), normalized_collision);



      notify_warning(iterpool, vb->notify_func, vb->notify_baton,
                     svn_repos_notify_warning_mergeinfo_collision,
                     dcgettext ("subversion", "Duplicate representation of path '%s'" " in %s property of '%s'", 5),

                     normpath, "svn:" "mergeinfo", vb->path);
    }
  return 0;
}







static svn_error_t *
check_mergeinfo_normalization(const char *path,
                              const char *new_mergeinfo,
                              const char *old_mergeinfo,
                              svn_repos_notify_func_t notify_func,
                              void *notify_baton,
                              apr_pool_t *pool)
{
  svn_mergeinfo_t mergeinfo;
  apr_hash_t *normalized_paths;
  apr_hash_t *added_paths;
  struct extract_mergeinfo_paths_baton extract_baton;
  struct verify_mergeinfo_normalization_baton verify_baton;

  do { svn_error_t *svn_err__temp = (svn_mergeinfo_parse(&mergeinfo, new_mergeinfo, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  extract_baton.result = apr_hash_make(pool);
  extract_baton.normalize = 0;
  svn_membuf__create(&extract_baton.buffer, 0, pool);
  do { svn_error_t *svn_err__temp = (svn_iter_apr_hash(((void*)0), mergeinfo, extract_mergeinfo_paths, &extract_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  added_paths = extract_baton.result;

  if (old_mergeinfo)
    {
      struct filter_mergeinfo_paths_baton filter_baton;
      svn_mergeinfo_t oldinfo;

      extract_baton.result = apr_hash_make(pool);
      extract_baton.normalize = (!0);
      do { svn_error_t *svn_err__temp = (svn_mergeinfo_parse(&oldinfo, old_mergeinfo, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      do { svn_error_t *svn_err__temp = (svn_iter_apr_hash(((void*)0), oldinfo, extract_mergeinfo_paths, &extract_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


      normalized_paths = extract_baton.result;

      filter_baton.paths = added_paths;
      do { svn_error_t *svn_err__temp = (svn_iter_apr_hash(((void*)0), oldinfo, filter_mergeinfo_paths, &filter_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


    }
  else
      normalized_paths = apr_hash_make(pool);

  verify_baton.path = path;
  verify_baton.normalized_paths = normalized_paths;
  verify_baton.buffer = extract_baton.buffer;
  verify_baton.notify_func = notify_func;
  verify_baton.notify_baton = notify_baton;
  do { svn_error_t *svn_err__temp = (svn_iter_apr_hash(((void*)0), added_paths, verify_mergeinfo_normalization, &verify_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  return 0;
}
# 950 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static svn_error_t *
dump_node(struct edit_baton *eb,
          const char *path,
          svn_node_kind_t kind,
          enum svn_node_action action,
          svn_boolean_t is_copy,
          const char *cmp_path,
          svn_revnum_t cmp_rev,
          apr_pool_t *pool)
{
  svn_stringbuf_t *propstring;
  svn_filesize_t content_length = 0;
  apr_size_t len;
  svn_boolean_t must_dump_text = 0, must_dump_props = 0;
  const char *compare_path = path;
  svn_revnum_t compare_rev = eb->current_rev - 1;
  svn_fs_root_t *compare_root = ((void*)0);
  apr_file_t *delta_file = ((void*)0);


  if (eb->verify || eb->notify_func)
    {
      svn_error_t *err = svn_fs__path_valid(path, pool);

      if (err)
        {
          if (eb->notify_func)
            {
              char errbuf[512];

              notify_warning(pool, eb->notify_func, eb->notify_baton,
                             svn_repos_notify_warning_invalid_fspath,
                             dcgettext ("subversion", "E%06d: While validating fspath '%s': %s", 5),
                             err->apr_err, path,
                             svn_err_best_message(err, errbuf, sizeof(errbuf)));
            }


          if (eb->verify)
            return (err);
          else
            svn_error_clear(err);
        }
    }


  do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Node-path" ": %s\n", path)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (kind == svn_node_file)
    do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-kind" ": file\n")); if (svn_err__temp) return (svn_err__temp); } while (0);

  else if (kind == svn_node_dir)
    do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-kind" ": dir\n")); if (svn_err__temp) return (svn_err__temp); } while (0);



  if (cmp_path)
    cmp_path = svn_relpath_canonicalize(cmp_path, pool);


  if (((cmp_path) && ((cmp_rev) >= 0)))
    {
      compare_path = cmp_path;
      compare_rev = cmp_rev;
    }

  if (action == svn_node_action_change)
    {
      if (eb->path_tracker)
        do { svn_error_t *svn_err__temp = (node_must_exist(eb, path, eb->current_rev, kind, pool)); if (svn_err__temp) return svn_error_quick_wrap(svn_err__temp, apr_psprintf(pool, dcgettext ("subversion", "Change invalid path '%s' in r%ld", 5), path, eb->current_rev)); } while (0);



      do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-action" ": change\n")); if (svn_err__temp) return (svn_err__temp); } while (0);



      do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&compare_root, svn_fs_root_fs(eb->fs_root), compare_rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



      do { svn_error_t *svn_err__temp = (svn_fs_props_different(&must_dump_props, compare_root, compare_path, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


      if (kind == svn_node_file)
        do { svn_error_t *svn_err__temp = (svn_fs_contents_different(&must_dump_text, compare_root, compare_path, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


    }
  else if (action == svn_node_action_replace)
    {
      if (eb->path_tracker)
        do { svn_error_t *svn_err__temp = (node_must_exist(eb, path, eb->current_rev, svn_node_unknown, pool)); if (svn_err__temp) return svn_error_quick_wrap(svn_err__temp, apr_psprintf(pool, dcgettext ("subversion", "Replacing non-existent path '%s' in r%ld", 5), path, eb->current_rev)); } while (0);





      if (! is_copy)
        {
          if (eb->path_tracker)
            tracker_path_replace(eb->path_tracker, path);


          do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-action" ": replace\n")); if (svn_err__temp) return (svn_err__temp); } while (0);




          if (kind == svn_node_file)
            must_dump_text = (!0);
          must_dump_props = (!0);
        }
      else
        {
          if (eb->path_tracker)
            {
              do { svn_error_t *svn_err__temp = (node_must_exist(eb, compare_path, compare_rev, kind, pool)); if (svn_err__temp) return svn_error_quick_wrap(svn_err__temp, apr_psprintf(pool, dcgettext ("subversion", "Replacing path '%s' in r%ld " "with invalid path", 5), path, eb->current_rev)); } while (0);
# 1077 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
              tracker_path_delete(eb->path_tracker, path);
            }





          do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-action" ": delete\n\n")); if (svn_err__temp) return (svn_err__temp); } while (0);




          do { svn_error_t *svn_err__temp = (dump_node(eb, path, kind, svn_node_action_add, is_copy, compare_path, compare_rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




          must_dump_text = 0;
          must_dump_props = 0;
        }
    }
  else if (action == svn_node_action_delete)
    {
      if (eb->path_tracker)
        {
          do { svn_error_t *svn_err__temp = (node_must_exist(eb, path, eb->current_rev, kind, pool)); if (svn_err__temp) return svn_error_quick_wrap(svn_err__temp, apr_psprintf(pool, dcgettext ("subversion", "Deleting invalid path '%s' in r%ld", 5), path, eb->current_rev)); } while (0);


          tracker_path_delete(eb->path_tracker, path);
        }

      do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-action" ": delete\n")); if (svn_err__temp) return (svn_err__temp); } while (0);




      must_dump_text = 0;
      must_dump_props = 0;
    }
  else if (action == svn_node_action_add)
    {
      if (eb->path_tracker)
        do { svn_error_t *svn_err__temp = (node_must_not_exist(eb, path, eb->current_rev, pool)); if (svn_err__temp) return svn_error_quick_wrap(svn_err__temp, apr_psprintf(pool, dcgettext ("subversion", "Adding already existing path '%s' in r%ld", 5), path, eb->current_rev)); } while (0);




      do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Node-action" ": add\n")); if (svn_err__temp) return (svn_err__temp); } while (0);


      if (! is_copy)
        {
          if (eb->path_tracker)
            tracker_path_add(eb->path_tracker, path);


          if (kind == svn_node_file)
            must_dump_text = (!0);
          must_dump_props = (!0);
        }
      else
        {
          if (eb->path_tracker)
            {
              do { svn_error_t *svn_err__temp = (node_must_exist(eb, compare_path, compare_rev, kind, pool)); if (svn_err__temp) return svn_error_quick_wrap(svn_err__temp, apr_psprintf(pool, dcgettext ("subversion", "Copying from invalid path to " "'%s' in r%ld", 5), path, eb->current_rev)); } while (0);





              tracker_path_copy(eb->path_tracker, path, compare_path,
                                compare_rev);
            }

          if (!eb->verify && cmp_rev < eb->oldest_dumped_rev
              && eb->notify_func)
            {
              notify_warning(pool, eb->notify_func, eb->notify_baton,
                             svn_repos_notify_warning_found_old_reference,
                             dcgettext ("subversion", "Referencing data in revision %ld," " which is older than the oldest" " dumped revision (r%ld).  Loading this dump" " into an empty repository" " will fail.", 5),




                             cmp_rev, eb->oldest_dumped_rev);
              if (eb->found_old_reference)
                *eb->found_old_reference = (!0);
            }

          do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Node-copyfrom-rev" ": %ld\n" "Node-copyfrom-path" ": %s\n", cmp_rev, cmp_path)); if (svn_err__temp) return (svn_err__temp); } while (0);






          do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&compare_root, svn_fs_root_fs(eb->fs_root), compare_rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





          do { svn_error_t *svn_err__temp = (svn_fs_props_different(&must_dump_props, compare_root, compare_path, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


          if (kind == svn_node_file)
            {
              svn_checksum_t *checksum;
              const char *hex_digest;
              do { svn_error_t *svn_err__temp = (svn_fs_contents_different(&must_dump_text, compare_root, compare_path, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



              do { svn_error_t *svn_err__temp = (svn_fs_file_checksum(&checksum, svn_checksum_md5, compare_root, compare_path, 0, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


              hex_digest = svn_checksum_to_cstring(checksum, pool);
              if (hex_digest)
                do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-copy-source-md5" ": %s\n", hex_digest)); if (svn_err__temp) return (svn_err__temp); } while (0);



              do { svn_error_t *svn_err__temp = (svn_fs_file_checksum(&checksum, svn_checksum_sha1, compare_root, compare_path, 0, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


              hex_digest = svn_checksum_to_cstring(checksum, pool);
              if (hex_digest)
                do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-copy-source-sha1" ": %s\n", hex_digest)); if (svn_err__temp) return (svn_err__temp); } while (0);


            }
        }
    }

  if ((! must_dump_text) && (! must_dump_props))
    {





      len = 2;
      return svn_stream_write(eb->stream, "\n\n", &len);
    }






  if (must_dump_props)
    {
      apr_hash_t *prophash, *oldhash = ((void*)0);
      apr_size_t proplen;
      svn_stream_t *propstream;

      do { svn_error_t *svn_err__temp = (svn_fs_node_proplist(&prophash, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




      if (!eb->verify && eb->notify_func && eb->oldest_dumped_rev > 1)
        {
          svn_string_t *mergeinfo_str = apr_hash_get(prophash, "svn:" "mergeinfo", (-1));

          if (mergeinfo_str)
            {


              svn_error_clear(verify_mergeinfo_revisions(
                                eb->found_old_mergeinfo,
                                mergeinfo_str->data, eb->oldest_dumped_rev,
                                eb->notify_func, eb->notify_baton,
                                pool));
            }
        }




      if (eb->verify && eb->check_normalization && eb->notify_func)
        {



          svn_string_t *mergeinfo_str = apr_hash_get(prophash, "svn:" "mergeinfo", (-1));

          if (mergeinfo_str)
            {
              svn_string_t *oldinfo_str = ((void*)0);
              if (compare_root)
                {
                  do { svn_error_t *svn_err__temp = (svn_fs_node_proplist(&oldhash, compare_root, compare_path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


                  oldinfo_str = apr_hash_get(oldhash, "svn:" "mergeinfo", (-1));
                }
              do { svn_error_t *svn_err__temp = (check_mergeinfo_normalization( path, mergeinfo_str->data, (oldinfo_str ? oldinfo_str->data : ((void*)0)), eb->notify_func, eb->notify_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



            }
        }

      if (eb->use_deltas && compare_root)
        {


          if (!oldhash)
            do { svn_error_t *svn_err__temp = (svn_fs_node_proplist(&oldhash, compare_root, compare_path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

          do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Prop-delta" ": true\n")); if (svn_err__temp) return (svn_err__temp); } while (0);

        }
      else
        oldhash = apr_hash_make(pool);
      propstring = svn_stringbuf_create_ensure(0, pool);
      propstream = svn_stream_from_stringbuf(propstring, pool);
      do { svn_error_t *svn_err__temp = (svn_hash_write_incremental(prophash, oldhash, propstream, "PROPS-END", pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      do { svn_error_t *svn_err__temp = (svn_stream_close(propstream)); if (svn_err__temp) return (svn_err__temp); } while (0);
      proplen = propstring->len;
      content_length += proplen;
      do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Prop-content-length" ": %" "lu" "\n", proplen)); if (svn_err__temp) return (svn_err__temp); } while (0);


    }



  if (must_dump_text && (kind == svn_node_file))
    {
      svn_checksum_t *checksum;
      const char *hex_digest;
      svn_filesize_t textlen;

      if (eb->use_deltas)
        {



          do { svn_error_t *svn_err__temp = (store_delta(&delta_file, &textlen, compare_root, compare_path, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

          do { svn_error_t *svn_err__temp = (svn_stream_puts(eb->stream, "Text-delta" ": true\n")); if (svn_err__temp) return (svn_err__temp); } while (0);


          if (compare_root)
            {
              do { svn_error_t *svn_err__temp = (svn_fs_file_checksum(&checksum, svn_checksum_md5, compare_root, compare_path, 0, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


              hex_digest = svn_checksum_to_cstring(checksum, pool);
              if (hex_digest)
                do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-delta-base-md5" ": %s\n", hex_digest)); if (svn_err__temp) return (svn_err__temp); } while (0);



              do { svn_error_t *svn_err__temp = (svn_fs_file_checksum(&checksum, svn_checksum_sha1, compare_root, compare_path, 0, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


              hex_digest = svn_checksum_to_cstring(checksum, pool);
              if (hex_digest)
                do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-delta-base-sha1" ": %s\n", hex_digest)); if (svn_err__temp) return (svn_err__temp); } while (0);


            }
        }
      else
        {

          do { svn_error_t *svn_err__temp = (svn_fs_file_length(&textlen, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
        }

      content_length += textlen;
      do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-content-length" ": %" "ld" "\n", textlen)); if (svn_err__temp) return (svn_err__temp); } while (0);



      do { svn_error_t *svn_err__temp = (svn_fs_file_checksum(&checksum, svn_checksum_md5, eb->fs_root, path, 0, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      hex_digest = svn_checksum_to_cstring(checksum, pool);
      if (hex_digest)
        do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-content-md5" ": %s\n", hex_digest)); if (svn_err__temp) return (svn_err__temp); } while (0);



      do { svn_error_t *svn_err__temp = (svn_fs_file_checksum(&checksum, svn_checksum_sha1, eb->fs_root, path, 0, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      hex_digest = svn_checksum_to_cstring(checksum, pool);
      if (hex_digest)
        do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Text-content-sha1" ": %s\n", hex_digest)); if (svn_err__temp) return (svn_err__temp); } while (0);


    }




  do { svn_error_t *svn_err__temp = (svn_stream_printf(eb->stream, pool, "Content-length" ": %" "ld" "\n\n", content_length)); if (svn_err__temp) return (svn_err__temp); } while (0);





  if (must_dump_props)
    {
      len = propstring->len;
      do { svn_error_t *svn_err__temp = (svn_stream_write(eb->stream, propstring->data, &len)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }


  if (must_dump_text && (kind == svn_node_file))
    {
      svn_stream_t *contents;

      if (delta_file)
        {


          contents = svn_stream_from_aprfile2(delta_file, 0, pool);
        }
      else
        do { svn_error_t *svn_err__temp = (svn_fs_file_contents(&contents, eb->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      do { svn_error_t *svn_err__temp = (svn_stream_copy3(contents, svn_stream_disown(eb->stream, pool), ((void*)0), ((void*)0), pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }

  len = 2;
  return svn_stream_write(eb->stream, "\n\n", &len);
}


static svn_error_t *
open_root(void *edit_baton,
          svn_revnum_t base_revision,
          apr_pool_t *pool,
          void **root_baton)
{
  *root_baton = make_dir_baton(((void*)0), ((void*)0), ((svn_revnum_t) -1),
                               edit_baton, ((void*)0), 0, pool);
  return 0;
}


static svn_error_t *
delete_entry(const char *path,
             svn_revnum_t revision,
             void *parent_baton,
             apr_pool_t *pool)
{
  struct dir_baton *pb = parent_baton;
  const char *mypath = apr_pstrdup(pb->pool, path);


  apr_hash_set(pb->deleted_entries, mypath, (-1), pb);

  return 0;
}


static svn_error_t *
add_directory(const char *path,
              void *parent_baton,
              const char *copyfrom_path,
              svn_revnum_t copyfrom_rev,
              apr_pool_t *pool,
              void **child_baton)
{
  struct dir_baton *pb = parent_baton;
  struct edit_baton *eb = pb->edit_baton;
  void *val;
  svn_boolean_t is_copy = 0;
  struct dir_baton *new_db
    = make_dir_baton(path, copyfrom_path, copyfrom_rev, eb, pb, (!0), pool);


  val = apr_hash_get(pb->deleted_entries, path, (-1));


  is_copy = ((copyfrom_path) && ((copyfrom_rev) >= 0));


  do { svn_error_t *svn_err__temp = (dump_node(eb, path, svn_node_dir, val ? svn_node_action_replace : svn_node_action_add, is_copy, is_copy ? copyfrom_path : ((void*)0), is_copy ? copyfrom_rev : ((svn_revnum_t) -1), pool)); if (svn_err__temp) return (svn_err__temp); } while (0);







  if (val)

    apr_hash_set(pb->deleted_entries, path, (-1), ((void*)0));



  if (!val && eb->verify && eb->check_normalization && eb->notify_func)
    {
      pb->check_name_collision = (!0);
    }

  new_db->written_out = (!0);

  *child_baton = new_db;
  return 0;
}


static svn_error_t *
open_directory(const char *path,
               void *parent_baton,
               svn_revnum_t base_revision,
               apr_pool_t *pool,
               void **child_baton)
{
  struct dir_baton *pb = parent_baton;
  struct edit_baton *eb = pb->edit_baton;
  struct dir_baton *new_db;
  const char *cmp_path = ((void*)0);
  svn_revnum_t cmp_rev = ((svn_revnum_t) -1);



  if (((pb->cmp_path) && ((pb->cmp_rev) >= 0)))
    {
      cmp_path = svn_relpath_join(pb->cmp_path,
                                  svn_relpath_basename(path, pool), pool);
      cmp_rev = pb->cmp_rev;
    }

  new_db = make_dir_baton(path, cmp_path, cmp_rev, eb, pb, 0, pool);
  *child_baton = new_db;
  return 0;
}


static svn_error_t *
close_directory(void *dir_baton,
                apr_pool_t *pool)
{
  struct dir_baton *db = dir_baton;
  struct edit_baton *eb = db->edit_baton;
  apr_pool_t *subpool = svn_pool_create_ex(pool, ((void*)0));
  int i;
  apr_array_header_t *sorted_entries;





  sorted_entries = svn_sort__hash(db->deleted_entries,
                                  svn_sort_compare_items_lexically, pool);
  for (i = 0; i < sorted_entries->nelts; i++)
    {
      const char *path = (((svn_sort__item_t *)(sorted_entries)->elts)[i]).key;


      apr_pool_clear(subpool);




      do { svn_error_t *svn_err__temp = (dump_node(eb, path, svn_node_unknown, svn_node_action_delete, 0, ((void*)0), ((svn_revnum_t) -1), subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);


    }

  apr_pool_destroy(subpool);
  return 0;
}


static svn_error_t *
add_file(const char *path,
         void *parent_baton,
         const char *copyfrom_path,
         svn_revnum_t copyfrom_rev,
         apr_pool_t *pool,
         void **file_baton)
{
  struct dir_baton *pb = parent_baton;
  struct edit_baton *eb = pb->edit_baton;
  void *val;
  svn_boolean_t is_copy = 0;


  val = apr_hash_get(pb->deleted_entries, path, (-1));


  is_copy = ((copyfrom_path) && ((copyfrom_rev) >= 0));


  do { svn_error_t *svn_err__temp = (dump_node(eb, path, svn_node_file, val ? svn_node_action_replace : svn_node_action_add, is_copy, is_copy ? copyfrom_path : ((void*)0), is_copy ? copyfrom_rev : ((svn_revnum_t) -1), pool)); if (svn_err__temp) return (svn_err__temp); } while (0);







  if (val)

    apr_hash_set(pb->deleted_entries, path, (-1), ((void*)0));



  if (!val && eb->verify && eb->check_normalization && eb->notify_func)
    {
      pb->check_name_collision = (!0);
    }

  *file_baton = ((void*)0);
  return 0;
}


static svn_error_t *
open_file(const char *path,
          void *parent_baton,
          svn_revnum_t ancestor_revision,
          apr_pool_t *pool,
          void **file_baton)
{
  struct dir_baton *pb = parent_baton;
  struct edit_baton *eb = pb->edit_baton;
  const char *cmp_path = ((void*)0);
  svn_revnum_t cmp_rev = ((svn_revnum_t) -1);



  if (((pb->cmp_path) && ((pb->cmp_rev) >= 0)))
    {
      cmp_path = svn_relpath_join(pb->cmp_path,
                                  svn_relpath_basename(path, pool), pool);
      cmp_rev = pb->cmp_rev;
    }

  do { svn_error_t *svn_err__temp = (dump_node(eb, path, svn_node_file, svn_node_action_change, 0, cmp_path, cmp_rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  *file_baton = ((void*)0);
  return 0;
}


static svn_error_t *
change_dir_prop(void *parent_baton,
                const char *name,
                const svn_string_t *value,
                apr_pool_t *pool)
{
  struct dir_baton *db = parent_baton;
  struct edit_baton *eb = db->edit_baton;




  if (! db->written_out)
    {
      do { svn_error_t *svn_err__temp = (dump_node(eb, db->path, svn_node_dir, svn_node_action_change, 0, db->cmp_path, db->cmp_rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


      db->written_out = (!0);
    }
  return 0;
}

static svn_error_t *
fetch_props_func(apr_hash_t **props,
                 void *baton,
                 const char *path,
                 svn_revnum_t base_revision,
                 apr_pool_t *result_pool,
                 apr_pool_t *scratch_pool)
{
  struct edit_baton *eb = baton;
  svn_error_t *err;
  svn_fs_root_t *fs_root;

  if (!((base_revision) >= 0))
    base_revision = eb->current_rev - 1;

  do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&fs_root, eb->fs, base_revision, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  err = svn_fs_node_proplist(props, fs_root, path, result_pool);
  if (err && err->apr_err == SVN_ERR_FS_NOT_FOUND)
    {
      svn_error_clear(err);
      *props = apr_hash_make(result_pool);
      return 0;
    }
  else if (err)
    return (err);

  return 0;
}

static svn_error_t *
fetch_kind_func(svn_node_kind_t *kind,
                void *baton,
                const char *path,
                svn_revnum_t base_revision,
                apr_pool_t *scratch_pool)
{
  struct edit_baton *eb = baton;
  svn_fs_root_t *fs_root;

  if (!((base_revision) >= 0))
    base_revision = eb->current_rev - 1;

  do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&fs_root, eb->fs, base_revision, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  do { svn_error_t *svn_err__temp = (svn_fs_check_path(kind, fs_root, path, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  return 0;
}

static svn_error_t *
fetch_base_func(const char **filename,
                void *baton,
                const char *path,
                svn_revnum_t base_revision,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool)
{
  struct edit_baton *eb = baton;
  svn_stream_t *contents;
  svn_stream_t *file_stream;
  const char *tmp_filename;
  svn_error_t *err;
  svn_fs_root_t *fs_root;

  if (!((base_revision) >= 0))
    base_revision = eb->current_rev - 1;

  do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&fs_root, eb->fs, base_revision, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  err = svn_fs_file_contents(&contents, fs_root, path, scratch_pool);
  if (err && err->apr_err == SVN_ERR_FS_NOT_FOUND)
    {
      svn_error_clear(err);
      *filename = ((void*)0);
      return 0;
    }
  else if (err)
    return (err);
  do { svn_error_t *svn_err__temp = (svn_stream_open_unique(&file_stream, &tmp_filename, ((void*)0), svn_io_file_del_on_pool_cleanup, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (svn_stream_copy3(contents, file_stream, ((void*)0), ((void*)0), scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  *filename = apr_pstrdup(result_pool, tmp_filename);

  return 0;
}


static svn_error_t *
get_dump_editor(const svn_delta_editor_t **editor,
                void **edit_baton,
                svn_fs_t *fs,
                svn_revnum_t to_rev,
                const char *root_path,
                svn_stream_t *stream,
                svn_boolean_t *found_old_reference,
                svn_boolean_t *found_old_mergeinfo,
                svn_error_t *(*custom_close_directory)(void *dir_baton,
                                  apr_pool_t *scratch_pool),
                svn_repos_notify_func_t notify_func,
                void *notify_baton,
                svn_revnum_t oldest_dumped_rev,
                svn_boolean_t use_deltas,
                svn_boolean_t verify,
                svn_boolean_t check_normalization,
                apr_pool_t *pool)
{



  struct edit_baton *eb = memset(apr_palloc(pool, sizeof(*eb)), 0, sizeof(*eb));
  svn_delta_editor_t *dump_editor = svn_delta_default_editor(pool);
  svn_delta_shim_callbacks_t *shim_callbacks =
                                svn_delta_shim_callbacks_default(pool);


  eb->stream = stream;
  eb->notify_func = notify_func;
  eb->notify_baton = notify_baton;
  eb->oldest_dumped_rev = oldest_dumped_rev;
  eb->path = apr_pstrdup(pool, root_path);
  do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&(eb->fs_root), fs, to_rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  eb->fs = fs;
  eb->current_rev = to_rev;
  eb->use_deltas = use_deltas;
  eb->verify = verify;
  eb->check_normalization = check_normalization;
  eb->found_old_reference = found_old_reference;
  eb->found_old_mergeinfo = found_old_mergeinfo;







  eb->path_tracker = verify ? tracker_create(to_rev, pool) : ((void*)0);


  dump_editor->open_root = open_root;
  dump_editor->delete_entry = delete_entry;
  dump_editor->add_directory = add_directory;
  dump_editor->open_directory = open_directory;
  if (custom_close_directory)
    dump_editor->close_directory = custom_close_directory;
  else
    dump_editor->close_directory = close_directory;
  dump_editor->change_dir_prop = change_dir_prop;
  dump_editor->add_file = add_file;
  dump_editor->open_file = open_file;

  *edit_baton = eb;
  *editor = dump_editor;

  shim_callbacks->fetch_kind_func = fetch_kind_func;
  shim_callbacks->fetch_props_func = fetch_props_func;
  shim_callbacks->fetch_base_func = fetch_base_func;
  shim_callbacks->fetch_baton = eb;

  do { svn_error_t *svn_err__temp = (svn_editor__insert_shims(editor, edit_baton, *editor, *edit_baton, ((void*)0), ((void*)0), shim_callbacks, pool, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  return 0;
}
# 1822 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static svn_error_t *
write_revision_record(svn_stream_t *stream,
                      svn_fs_t *fs,
                      svn_revnum_t rev,
                      apr_pool_t *pool)
{
  apr_hash_t *props;
  apr_time_t timetemp;
  svn_string_t *datevalue;

  do { svn_error_t *svn_err__temp = (svn_fs_revision_proplist(&props, fs, rev, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  datevalue = apr_hash_get(props, "svn:" "date", (-1));
  if (datevalue)
    {
      do { svn_error_t *svn_err__temp = (svn_time_from_cstring(&timetemp, datevalue->data, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      datevalue = svn_string_create(svn_time_to_cstring(timetemp, pool),
                                    pool);
      apr_hash_set(props, "svn:" "date", (-1), datevalue);
    }

  do { svn_error_t *svn_err__temp = (svn_repos__dump_revision_record(stream, rev, ((void*)0), props, (!0) , pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  return 0;
}




svn_error_t *
svn_repos_dump_fs3(svn_repos_t *repos,
                   svn_stream_t *stream,
                   svn_revnum_t start_rev,
                   svn_revnum_t end_rev,
                   svn_boolean_t incremental,
                   svn_boolean_t use_deltas,
                   svn_repos_notify_func_t notify_func,
                   void *notify_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *pool)
{
  const svn_delta_editor_t *dump_editor;
  void *dump_edit_baton = ((void*)0);
  svn_revnum_t rev;
  svn_fs_t *fs = svn_repos_fs(repos);
  apr_pool_t *subpool = svn_pool_create_ex(pool, ((void*)0));
  svn_revnum_t youngest;
  const char *uuid;
  int version;
  svn_boolean_t found_old_reference = 0;
  svn_boolean_t found_old_mergeinfo = 0;
  svn_repos_notify_t *notify;


  do { svn_error_t *svn_err__temp = (svn_fs_youngest_rev(&youngest, fs, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (! ((start_rev) >= 0))
    start_rev = 0;
  if (! ((end_rev) >= 0))
    end_rev = youngest;
  if (! stream)
    stream = svn_stream_empty(pool);


  if (start_rev > end_rev)
    return svn_error_createf(SVN_ERR_REPOS_BAD_ARGS, ((void*)0),
                             dcgettext ("subversion", "Start revision %ld" " is greater than end revision %ld", 5),

                             start_rev, end_rev);
  if (end_rev > youngest)
    return svn_error_createf(SVN_ERR_REPOS_BAD_ARGS, ((void*)0),
                             dcgettext ("subversion", "End revision %ld is invalid " "(youngest revision is %ld)", 5),

                             end_rev, youngest);


  do { svn_error_t *svn_err__temp = (svn_fs_get_uuid(fs, &uuid, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  version = 3;
  if (!use_deltas)
    version--;



  do { svn_error_t *svn_err__temp = (svn_stream_printf(stream, pool, "SVN-fs-dump-format-version" ": %d\n\n", version)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (svn_stream_printf(stream, pool, "UUID" ": %s\n\n", uuid)); if (svn_err__temp) return (svn_err__temp); } while (0);



  if (notify_func)
    notify = svn_repos_notify_create(svn_repos_notify_dump_rev_end,
                                     pool);


  for (rev = start_rev; rev <= end_rev; rev++)
    {
      svn_fs_root_t *to_root;
      svn_boolean_t use_deltas_for_rev;

      apr_pool_clear(subpool);


      if (cancel_func)
        do { svn_error_t *svn_err__temp = (cancel_func(cancel_baton)); if (svn_err__temp) return (svn_err__temp); } while (0);


      do { svn_error_t *svn_err__temp = (write_revision_record(stream, fs, rev, subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);



      if (rev == 0)
        goto loop_end;




      use_deltas_for_rev = use_deltas && (incremental || rev != start_rev);
      do { svn_error_t *svn_err__temp = (get_dump_editor(&dump_editor, &dump_edit_baton, fs, rev, "", stream, &found_old_reference, &found_old_mergeinfo, ((void*)0), notify_func, notify_baton, start_rev, use_deltas_for_rev, 0, 0, subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);







      do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&to_root, fs, rev, subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);




      if ((rev == start_rev) && (! incremental))
        {

          svn_fs_root_t *from_root;
          do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&from_root, fs, 0, subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
          do { svn_error_t *svn_err__temp = (svn_repos_dir_delta2(from_root, "", "", to_root, "", dump_editor, dump_edit_baton, ((void*)0), ((void*)0), 0, svn_depth_infinity, 0, 0, subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1977 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
        }
      else
        {

          do { svn_error_t *svn_err__temp = (svn_repos_replay2(to_root, "", ((svn_revnum_t) -1), 0, dump_editor, dump_edit_baton, ((void*)0), ((void*)0), subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);





          do { svn_error_t *svn_err__temp = (dump_editor->close_edit(dump_edit_baton, subpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
        }

    loop_end:
      if (notify_func)
        {
          notify->revision = rev;
          notify_func(notify_baton, notify, subpool);
        }
    }

  if (notify_func)
    {





      notify = svn_repos_notify_create(svn_repos_notify_dump_end, subpool);
      notify_func(notify_baton, notify, subpool);

      if (found_old_reference)
        {
          notify_warning(subpool, notify_func, notify_baton,
                         svn_repos_notify_warning_found_old_reference,
                         dcgettext ("subversion", "The range of revisions dumped " "contained references to " "copy sources outside that " "range.", 5));



        }



      if (found_old_mergeinfo)
        {
          notify_warning(subpool, notify_func, notify_baton,
                         svn_repos_notify_warning_found_old_mergeinfo,
                         dcgettext ("subversion", "The range of revisions dumped " "contained mergeinfo " "which reference revisions outside " "that range.", 5));



        }
    }

  apr_pool_destroy(subpool);

  return 0;
}
# 2056 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
static svn_error_t *
verify_directory_entry(void *baton, const void *key, apr_ssize_t klen,
                       void *val, apr_pool_t *pool)
{
  struct dir_baton *db = baton;
  svn_fs_dirent_t *dirent = (svn_fs_dirent_t *)val;
  char *path;
  svn_boolean_t right_kind;

  path = svn_relpath_join(db->path, (const char *)key, pool);







  switch (dirent->kind) {
  case svn_node_dir:
    do { svn_error_t *svn_err__temp = (svn_fs_is_dir(&right_kind, db->edit_baton->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
    if (!right_kind)
      return svn_error_createf(SVN_ERR_NODE_UNEXPECTED_KIND, ((void*)0),
                               dcgettext ("subversion", "Node '%s' is not a directory.", 5),
                               path);

    break;
  case svn_node_file:
    do { svn_error_t *svn_err__temp = (svn_fs_is_file(&right_kind, db->edit_baton->fs_root, path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
    if (!right_kind)
      return svn_error_createf(SVN_ERR_NODE_UNEXPECTED_KIND, ((void*)0),
                               dcgettext ("subversion", "Node '%s' is not a file.", 5),
                               path);
    break;
  default:
    return svn_error_createf(SVN_ERR_NODE_UNEXPECTED_KIND, ((void*)0),
                             dcgettext ("subversion", "Unexpected node kind %d for '%s'", 5),
                             dirent->kind, path);
  }

  return 0;
}


struct check_name_collision_baton
{
  struct dir_baton *dir_baton;
  apr_hash_t *normalized;
  svn_membuf_t buffer;
};



static svn_error_t *
check_name_collision(void *baton, const void *key, apr_ssize_t klen,
                     void *val, apr_pool_t *iterpool)
{
  struct check_name_collision_baton *const cb = baton;
  const char *name;
  const char *found;

  do { svn_error_t *svn_err__temp = (svn_utf__normalize(&name, key, klen, &cb->buffer)); if (svn_err__temp) return (svn_err__temp); } while (0);

  found = apr_hash_get(cb->normalized, name, (-1));
  if (!found)
    apr_hash_set(cb->normalized, apr_pstrdup(cb->buffer.pool, name), (-1), normalized_unique);

  else if (found == normalized_collision)
                                         ;
  else
    {
      struct dir_baton *const db = cb->dir_baton;
      struct edit_baton *const eb = db->edit_baton;
      const char* normpath;

      apr_hash_set(cb->normalized, apr_pstrdup(cb->buffer.pool, name), (-1), normalized_collision);


      do { svn_error_t *svn_err__temp = (svn_utf__normalize( &normpath, svn_relpath_join(db->path, name, iterpool), ((apr_size_t) -1), &cb->buffer)); if (svn_err__temp) return (svn_err__temp); } while (0);


      notify_warning(iterpool, eb->notify_func, eb->notify_baton,
                     svn_repos_notify_warning_name_collision,
                     dcgettext ("subversion", "Duplicate representation of path '%s'", 5), normpath);
    }
  return 0;
}


static svn_error_t *
verify_close_directory(void *dir_baton, apr_pool_t *pool)
{
  struct dir_baton *db = dir_baton;
  apr_hash_t *dirents;
  do { svn_error_t *svn_err__temp = (svn_fs_dir_entries(&dirents, db->edit_baton->fs_root, db->path, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  do { svn_error_t *svn_err__temp = (svn_iter_apr_hash(((void*)0), dirents, verify_directory_entry, dir_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (db->check_name_collision)
    {
      struct check_name_collision_baton check_baton;
      check_baton.dir_baton = db;
      check_baton.normalized = apr_hash_make(pool);
      svn_membuf__create(&check_baton.buffer, 0, pool);
      do { svn_error_t *svn_err__temp = (svn_iter_apr_hash(((void*)0), dirents, check_name_collision, &check_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }

  return close_directory(dir_baton, pool);
}

static void
notify_verification_error(svn_revnum_t rev,
                          svn_error_t *err,
                          svn_repos_notify_func_t notify_func,
                          void *notify_baton,
                          apr_pool_t *pool)
{
  svn_repos_notify_t *notify_failure;

  if (notify_func == ((void*)0))
    return;

  notify_failure = svn_repos_notify_create(svn_repos_notify_failure, pool);
  notify_failure->err = err;
  notify_failure->revision = rev;
  notify_func(notify_baton, notify_failure, pool);
}


static svn_error_t *
verify_one_revision(svn_fs_t *fs,
                    svn_revnum_t rev,
                    svn_repos_notify_func_t notify_func,
                    void *notify_baton,
                    svn_revnum_t start_rev,
                    svn_boolean_t check_normalization,
                    svn_cancel_func_t cancel_func,
                    void *cancel_baton,
                    apr_pool_t *scratch_pool)
{
  const svn_delta_editor_t *dump_editor;
  void *dump_edit_baton;
  svn_fs_root_t *to_root;
  apr_hash_t *props;
  const svn_delta_editor_t *cancel_editor;
  void *cancel_edit_baton;


  do { svn_error_t *svn_err__temp = (get_dump_editor(&dump_editor, &dump_edit_baton, fs, rev, "", svn_stream_empty(scratch_pool), ((void*)0), ((void*)0), verify_close_directory, notify_func, notify_baton, start_rev, 0, (!0), check_normalization, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 2215 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_repos/dump.c"
  do { svn_error_t *svn_err__temp = (svn_delta_get_cancellation_editor(cancel_func, cancel_baton, dump_editor, dump_edit_baton, &cancel_editor, &cancel_edit_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  do { svn_error_t *svn_err__temp = (svn_fs_revision_root(&to_root, fs, rev, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  do { svn_error_t *svn_err__temp = (svn_fs_verify_root(to_root, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  do { svn_error_t *svn_err__temp = (svn_repos_replay2(to_root, "", ((svn_revnum_t) -1), 0, cancel_editor, cancel_edit_baton, ((void*)0), ((void*)0), scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  do { svn_error_t *svn_err__temp = (cancel_editor->close_edit(cancel_edit_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  do { svn_error_t *svn_err__temp = (svn_fs_revision_proplist(&props, fs, rev, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  return 0;
}


struct verify_fs2_notify_func_baton_t
{

   svn_repos_notify_func_t notify_func;


   void *notify_baton;


   svn_repos_notify_t *notify;
};


static void
verify_fs2_notify_func(svn_revnum_t revision,
                       void *baton,
                       apr_pool_t *pool)
{
  struct verify_fs2_notify_func_baton_t *notify_baton = baton;

  notify_baton->notify->revision = revision;
  notify_baton->notify_func(notify_baton->notify_baton,
                            notify_baton->notify, pool);
}

svn_error_t *
svn_repos_verify_fs3(svn_repos_t *repos,
                     svn_revnum_t start_rev,
                     svn_revnum_t end_rev,
                     svn_boolean_t keep_going,
                     svn_boolean_t check_normalization,
                     svn_boolean_t metadata_only,
                     svn_repos_notify_func_t notify_func,
                     void *notify_baton,
                     svn_cancel_func_t cancel_func,
                     void *cancel_baton,
                     apr_pool_t *pool)
{
  svn_fs_t *fs = svn_repos_fs(repos);
  svn_revnum_t youngest;
  svn_revnum_t rev;
  apr_pool_t *iterpool = svn_pool_create_ex(pool, ((void*)0));
  svn_repos_notify_t *notify;
  svn_fs_progress_notify_func_t verify_notify = ((void*)0);
  struct verify_fs2_notify_func_baton_t *verify_notify_baton = ((void*)0);
  svn_error_t *err;
  svn_boolean_t found_corruption = 0;


  do { svn_error_t *svn_err__temp = (svn_fs_youngest_rev(&youngest, fs, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (! ((start_rev) >= 0))
    start_rev = 0;
  if (! ((end_rev) >= 0))
    end_rev = youngest;


  if (start_rev > end_rev)
    return svn_error_createf(SVN_ERR_REPOS_BAD_ARGS, ((void*)0),
                             dcgettext ("subversion", "Start revision %ld" " is greater than end revision %ld", 5),

                             start_rev, end_rev);
  if (end_rev > youngest)
    return svn_error_createf(SVN_ERR_REPOS_BAD_ARGS, ((void*)0),
                             dcgettext ("subversion", "End revision %ld is invalid " "(youngest revision is %ld)", 5),

                             end_rev, youngest);



  if (notify_func)
    {
      notify = svn_repos_notify_create(svn_repos_notify_verify_rev_end, pool);

      verify_notify = verify_fs2_notify_func;
      verify_notify_baton = apr_palloc(pool, sizeof(*verify_notify_baton));
      verify_notify_baton->notify_func = notify_func;
      verify_notify_baton->notify_baton = notify_baton;
      verify_notify_baton->notify
        = svn_repos_notify_create(svn_repos_notify_verify_rev_structure, pool);
    }


  err = svn_fs_verify(svn_fs_path(fs, pool), svn_fs_config(fs, pool),
                      start_rev, end_rev,
                      verify_notify, verify_notify_baton,
                      cancel_func, cancel_baton, pool);

  if (err)
    {
      if (err->apr_err == SVN_ERR_CANCELLED)
        return (err);

      found_corruption = (!0);
      notify_verification_error(((svn_revnum_t) -1), err, notify_func,
                                notify_baton, iterpool);


      if (notify_func)
        {
          svn_error_clear(err);
          err = ((void*)0);
        }



      if (!keep_going)


        return svn_error_createf(SVN_ERR_REPOS_CORRUPTED, err,
                                dcgettext ("subversion", "Repository '%s' failed to verify", 5),
                                svn_dirent_local_style(svn_repos_path(repos,
                                                                      pool),
                                                        pool));

      svn_error_clear(err);
    }

  if (!metadata_only)
    for (rev = start_rev; rev <= end_rev; rev++)
      {
        apr_pool_clear(iterpool);


        err = verify_one_revision(fs, rev, notify_func, notify_baton,
                                  start_rev, check_normalization,
                                  cancel_func, cancel_baton,
                                  iterpool);

        if (err)
          {
            if (err->apr_err == SVN_ERR_CANCELLED)
              return (err);

            found_corruption = (!0);
            notify_verification_error(rev, err, notify_func, notify_baton,
                                      iterpool);
            svn_error_clear(err);

            if (keep_going)
              continue;
            else
              break;
          }

        if (notify_func)
          {
            notify->revision = rev;
            notify_func(notify_baton, notify, iterpool);
          }
      }


  if (notify_func)
    {
      notify = svn_repos_notify_create(svn_repos_notify_verify_end, iterpool);
      notify_func(notify_baton, notify, iterpool);
    }

  apr_pool_destroy(iterpool);

  if (found_corruption)
    return svn_error_createf(SVN_ERR_REPOS_CORRUPTED, ((void*)0),
                             dcgettext ("subversion", "Repository '%s' failed to verify", 5),
                             svn_dirent_local_style(svn_repos_path(repos,
                                                                   pool),
                                                    pool));

  return 0;
}
