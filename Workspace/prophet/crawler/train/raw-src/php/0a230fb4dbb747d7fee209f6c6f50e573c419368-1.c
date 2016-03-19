# 1 "Zend/zend_compile.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "Zend/zend_compile.c" 2
# 23 "Zend/zend_compile.c"
# 1 "Zend/zend_language_parser.h" 1
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_language_parser.y"
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_language_parser.h"






   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_YIELD = 267,
     T_POW_EQUAL = 268,
     T_SR_EQUAL = 269,
     T_SL_EQUAL = 270,
     T_XOR_EQUAL = 271,
     T_OR_EQUAL = 272,
     T_AND_EQUAL = 273,
     T_MOD_EQUAL = 274,
     T_CONCAT_EQUAL = 275,
     T_DIV_EQUAL = 276,
     T_MUL_EQUAL = 277,
     T_MINUS_EQUAL = 278,
     T_PLUS_EQUAL = 279,
     T_BOOLEAN_OR = 280,
     T_BOOLEAN_AND = 281,
     T_IS_NOT_IDENTICAL = 282,
     T_IS_IDENTICAL = 283,
     T_IS_NOT_EQUAL = 284,
     T_IS_EQUAL = 285,
     T_IS_GREATER_OR_EQUAL = 286,
     T_IS_SMALLER_OR_EQUAL = 287,
     T_SR = 288,
     T_SL = 289,
     T_INSTANCEOF = 290,
     T_UNSET_CAST = 291,
     T_BOOL_CAST = 292,
     T_OBJECT_CAST = 293,
     T_ARRAY_CAST = 294,
     T_STRING_CAST = 295,
     T_DOUBLE_CAST = 296,
     T_INT_CAST = 297,
     T_DEC = 298,
     T_INC = 299,
     T_POW = 300,
     T_CLONE = 301,
     T_NEW = 302,
     T_EXIT = 303,
     T_IF = 304,
     T_ELSEIF = 305,
     T_ELSE = 306,
     T_ENDIF = 307,
     T_LNUMBER = 308,
     T_DNUMBER = 309,
     T_STRING = 310,
     T_STRING_VARNAME = 311,
     T_VARIABLE = 312,
     T_NUM_STRING = 313,
     T_INLINE_HTML = 314,
     T_CHARACTER = 315,
     T_BAD_CHARACTER = 316,
     T_ENCAPSED_AND_WHITESPACE = 317,
     T_CONSTANT_ENCAPSED_STRING = 318,
     T_ECHO = 319,
     T_DO = 320,
     T_WHILE = 321,
     T_ENDWHILE = 322,
     T_FOR = 323,
     T_ENDFOR = 324,
     T_FOREACH = 325,
     T_ENDFOREACH = 326,
     T_DECLARE = 327,
     T_ENDDECLARE = 328,
     T_AS = 329,
     T_SWITCH = 330,
     T_ENDSWITCH = 331,
     T_CASE = 332,
     T_DEFAULT = 333,
     T_BREAK = 334,
     T_CONTINUE = 335,
     T_GOTO = 336,
     T_FUNCTION = 337,
     T_CONST = 338,
     T_RETURN = 339,
     T_TRY = 340,
     T_CATCH = 341,
     T_FINALLY = 342,
     T_THROW = 343,
     T_USE = 344,
     T_INSTEADOF = 345,
     T_GLOBAL = 346,
     T_PUBLIC = 347,
     T_PROTECTED = 348,
     T_PRIVATE = 349,
     T_FINAL = 350,
     T_ABSTRACT = 351,
     T_STATIC = 352,
     T_VAR = 353,
     T_UNSET = 354,
     T_ISSET = 355,
     T_EMPTY = 356,
     T_HALT_COMPILER = 357,
     T_CLASS = 358,
     T_TRAIT = 359,
     T_INTERFACE = 360,
     T_EXTENDS = 361,
     T_IMPLEMENTS = 362,
     T_OBJECT_OPERATOR = 363,
     T_DOUBLE_ARROW = 364,
     T_LIST = 365,
     T_ARRAY = 366,
     T_CALLABLE = 367,
     T_CLASS_C = 368,
     T_TRAIT_C = 369,
     T_METHOD_C = 370,
     T_FUNC_C = 371,
     T_LINE = 372,
     T_FILE = 373,
     T_COMMENT = 374,
     T_DOC_COMMENT = 375,
     T_OPEN_TAG = 376,
     T_OPEN_TAG_WITH_ECHO = 377,
     T_CLOSE_TAG = 378,
     T_WHITESPACE = 379,
     T_START_HEREDOC = 380,
     T_END_HEREDOC = 381,
     T_DOLLAR_OPEN_CURLY_BRACES = 382,
     T_CURLY_OPEN = 383,
     T_PAAMAYIM_NEKUDOTAYIM = 384,
     T_NAMESPACE = 385,
     T_NS_C = 386,
     T_DIR = 387,
     T_NS_SEPARATOR = 388,
     T_ELLIPSIS = 389
   };
# 328 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_language_parser.h"
typedef int YYSTYPE;
# 24 "Zend/zend_compile.c" 2
# 1 "Zend/zend.h" 1
# 51 "Zend/zend.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2505 "Zend/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
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
# 25 "/usr/include/stdlib.h" 2 3 4







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
# 235 "/usr/include/stdlib.h" 3 4
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
# 236 "/usr/include/stdlib.h" 2 3 4



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
# 2506 "Zend/../main/php_config.h" 2
# 2521 "Zend/../main/php_config.h"
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
# 2522 "Zend/../main/php_config.h" 2
# 2532 "Zend/../main/php_config.h"
# 1 "/usr/include/math.h" 1 3 4
# 32 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) __attribute__ ((__nothrow__ )); extern double __acos (double __x) __attribute__ ((__nothrow__ ));

extern double asin (double __x) __attribute__ ((__nothrow__ )); extern double __asin (double __x) __attribute__ ((__nothrow__ ));

extern double atan (double __x) __attribute__ ((__nothrow__ )); extern double __atan (double __x) __attribute__ ((__nothrow__ ));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ )); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ ));


extern double cos (double __x) __attribute__ ((__nothrow__ )); extern double __cos (double __x) __attribute__ ((__nothrow__ ));

extern double sin (double __x) __attribute__ ((__nothrow__ )); extern double __sin (double __x) __attribute__ ((__nothrow__ ));

extern double tan (double __x) __attribute__ ((__nothrow__ )); extern double __tan (double __x) __attribute__ ((__nothrow__ ));




extern double cosh (double __x) __attribute__ ((__nothrow__ )); extern double __cosh (double __x) __attribute__ ((__nothrow__ ));

extern double sinh (double __x) __attribute__ ((__nothrow__ )); extern double __sinh (double __x) __attribute__ ((__nothrow__ ));

extern double tanh (double __x) __attribute__ ((__nothrow__ )); extern double __tanh (double __x) __attribute__ ((__nothrow__ ));




extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ )); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ ));






extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));

extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));

extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));







extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));


extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) __attribute__ ((__nothrow__ )); extern double __exp10 (double __x) __attribute__ ((__nothrow__ ));

extern double pow10 (double __x) __attribute__ ((__nothrow__ )); extern double __pow10 (double __x) __attribute__ ((__nothrow__ ));





extern double expm1 (double __x) __attribute__ ((__nothrow__ )); extern double __expm1 (double __x) __attribute__ ((__nothrow__ ));


extern double log1p (double __x) __attribute__ ((__nothrow__ )); extern double __log1p (double __x) __attribute__ ((__nothrow__ ));


extern double logb (double __x) __attribute__ ((__nothrow__ )); extern double __logb (double __x) __attribute__ ((__nothrow__ ));






extern double exp2 (double __x) __attribute__ ((__nothrow__ )); extern double __exp2 (double __x) __attribute__ ((__nothrow__ ));


extern double log2 (double __x) __attribute__ ((__nothrow__ )); extern double __log2 (double __x) __attribute__ ((__nothrow__ ));
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double sqrt (double __x) __attribute__ ((__nothrow__ )); extern double __sqrt (double __x) __attribute__ ((__nothrow__ ));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ ));






extern double cbrt (double __x) __attribute__ ((__nothrow__ )); extern double __cbrt (double __x) __attribute__ ((__nothrow__ ));
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ ));




extern int __isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double significand (double __x) __attribute__ ((__nothrow__ )); extern double __significand (double __x) __attribute__ ((__nothrow__ ));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ )); extern double __j0 (double) __attribute__ ((__nothrow__ ));
extern double j1 (double) __attribute__ ((__nothrow__ )); extern double __j1 (double) __attribute__ ((__nothrow__ ));
extern double jn (int, double) __attribute__ ((__nothrow__ )); extern double __jn (int, double) __attribute__ ((__nothrow__ ));
extern double y0 (double) __attribute__ ((__nothrow__ )); extern double __y0 (double) __attribute__ ((__nothrow__ ));
extern double y1 (double) __attribute__ ((__nothrow__ )); extern double __y1 (double) __attribute__ ((__nothrow__ ));
extern double yn (int, double) __attribute__ ((__nothrow__ )); extern double __yn (int, double) __attribute__ ((__nothrow__ ));






extern double erf (double) __attribute__ ((__nothrow__ )); extern double __erf (double) __attribute__ ((__nothrow__ ));
extern double erfc (double) __attribute__ ((__nothrow__ )); extern double __erfc (double) __attribute__ ((__nothrow__ ));
extern double lgamma (double) __attribute__ ((__nothrow__ )); extern double __lgamma (double) __attribute__ ((__nothrow__ ));






extern double tgamma (double) __attribute__ ((__nothrow__ )); extern double __tgamma (double) __attribute__ ((__nothrow__ ));





extern double gamma (double) __attribute__ ((__nothrow__ )); extern double __gamma (double) __attribute__ ((__nothrow__ ));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ )); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ ));







extern double rint (double __x) __attribute__ ((__nothrow__ )); extern double __rint (double __x) __attribute__ ((__nothrow__ ));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ ));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ )); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogb (double __x) __attribute__ ((__nothrow__ )); extern int __ilogb (double __x) __attribute__ ((__nothrow__ ));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ )); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ ));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ )); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ ));



extern double round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ )); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrint (double __x) __attribute__ ((__nothrow__ )); extern long int __lrint (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ )); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ ));



extern long int lround (double __x) __attribute__ ((__nothrow__ )); extern long int __lround (double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ )); extern long long int __llround (double __x) __attribute__ ((__nothrow__ ));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ )); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ ));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ )); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ ));
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignaling (double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));




extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ )); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ ));
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) __attribute__ ((__nothrow__ )); extern float __acosf (float __x) __attribute__ ((__nothrow__ ));

extern float asinf (float __x) __attribute__ ((__nothrow__ )); extern float __asinf (float __x) __attribute__ ((__nothrow__ ));

extern float atanf (float __x) __attribute__ ((__nothrow__ )); extern float __atanf (float __x) __attribute__ ((__nothrow__ ));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ )); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ ));


extern float cosf (float __x) __attribute__ ((__nothrow__ )); extern float __cosf (float __x) __attribute__ ((__nothrow__ ));

extern float sinf (float __x) __attribute__ ((__nothrow__ )); extern float __sinf (float __x) __attribute__ ((__nothrow__ ));

extern float tanf (float __x) __attribute__ ((__nothrow__ )); extern float __tanf (float __x) __attribute__ ((__nothrow__ ));




extern float coshf (float __x) __attribute__ ((__nothrow__ )); extern float __coshf (float __x) __attribute__ ((__nothrow__ ));

extern float sinhf (float __x) __attribute__ ((__nothrow__ )); extern float __sinhf (float __x) __attribute__ ((__nothrow__ ));

extern float tanhf (float __x) __attribute__ ((__nothrow__ )); extern float __tanhf (float __x) __attribute__ ((__nothrow__ ));




extern void sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ )); extern void __sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ ));






extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));

extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));

extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));







extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));


extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));


extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) __attribute__ ((__nothrow__ )); extern float __exp10f (float __x) __attribute__ ((__nothrow__ ));

extern float pow10f (float __x) __attribute__ ((__nothrow__ )); extern float __pow10f (float __x) __attribute__ ((__nothrow__ ));





extern float expm1f (float __x) __attribute__ ((__nothrow__ )); extern float __expm1f (float __x) __attribute__ ((__nothrow__ ));


extern float log1pf (float __x) __attribute__ ((__nothrow__ )); extern float __log1pf (float __x) __attribute__ ((__nothrow__ ));


extern float logbf (float __x) __attribute__ ((__nothrow__ )); extern float __logbf (float __x) __attribute__ ((__nothrow__ ));






extern float exp2f (float __x) __attribute__ ((__nothrow__ )); extern float __exp2f (float __x) __attribute__ ((__nothrow__ ));


extern float log2f (float __x) __attribute__ ((__nothrow__ )); extern float __log2f (float __x) __attribute__ ((__nothrow__ ));
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ )); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ ));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ ));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ )); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ ));
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ ));




extern int __isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float significandf (float __x) __attribute__ ((__nothrow__ )); extern float __significandf (float __x) __attribute__ ((__nothrow__ ));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ )); extern float __j0f (float) __attribute__ ((__nothrow__ ));
extern float j1f (float) __attribute__ ((__nothrow__ )); extern float __j1f (float) __attribute__ ((__nothrow__ ));
extern float jnf (int, float) __attribute__ ((__nothrow__ )); extern float __jnf (int, float) __attribute__ ((__nothrow__ ));
extern float y0f (float) __attribute__ ((__nothrow__ )); extern float __y0f (float) __attribute__ ((__nothrow__ ));
extern float y1f (float) __attribute__ ((__nothrow__ )); extern float __y1f (float) __attribute__ ((__nothrow__ ));
extern float ynf (int, float) __attribute__ ((__nothrow__ )); extern float __ynf (int, float) __attribute__ ((__nothrow__ ));






extern float erff (float) __attribute__ ((__nothrow__ )); extern float __erff (float) __attribute__ ((__nothrow__ ));
extern float erfcf (float) __attribute__ ((__nothrow__ )); extern float __erfcf (float) __attribute__ ((__nothrow__ ));
extern float lgammaf (float) __attribute__ ((__nothrow__ )); extern float __lgammaf (float) __attribute__ ((__nothrow__ ));






extern float tgammaf (float) __attribute__ ((__nothrow__ )); extern float __tgammaf (float) __attribute__ ((__nothrow__ ));





extern float gammaf (float) __attribute__ ((__nothrow__ )); extern float __gammaf (float) __attribute__ ((__nothrow__ ));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ )); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ ));







extern float rintf (float __x) __attribute__ ((__nothrow__ )); extern float __rintf (float __x) __attribute__ ((__nothrow__ ));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ ));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ )); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ )); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ ));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ )); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ ));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ )); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ ));



extern float roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ )); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ )); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ ));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ )); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ )); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ ));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ )); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ ));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ )); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ ));
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));




extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ )); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ ));
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ )); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ ));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ ));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ ));




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ )); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ ));






extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));







extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__ ));

extern long double pow10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __pow10l (long double __x) __attribute__ ((__nothrow__ ));





extern long double expm1l (long double __x) __attribute__ ((__nothrow__ )); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ )); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ ));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ ));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ ));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ ));
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ ));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ ));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ )); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ ));
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ ));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ )); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ ));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ )); extern long double __j0l (long double) __attribute__ ((__nothrow__ ));
extern long double j1l (long double) __attribute__ ((__nothrow__ )); extern long double __j1l (long double) __attribute__ ((__nothrow__ ));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ )); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ ));
extern long double y0l (long double) __attribute__ ((__nothrow__ )); extern long double __y0l (long double) __attribute__ ((__nothrow__ ));
extern long double y1l (long double) __attribute__ ((__nothrow__ )); extern long double __y1l (long double) __attribute__ ((__nothrow__ ));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ )); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ ));






extern long double erfl (long double) __attribute__ ((__nothrow__ )); extern long double __erfl (long double) __attribute__ ((__nothrow__ ));
extern long double erfcl (long double) __attribute__ ((__nothrow__ )); extern long double __erfcl (long double) __attribute__ ((__nothrow__ ));
extern long double lgammal (long double) __attribute__ ((__nothrow__ )); extern long double __lgammal (long double) __attribute__ ((__nothrow__ ));






extern long double tgammal (long double) __attribute__ ((__nothrow__ )); extern long double __tgammal (long double) __attribute__ ((__nothrow__ ));





extern long double gammal (long double) __attribute__ ((__nothrow__ )); extern long double __gammal (long double) __attribute__ ((__nothrow__ ));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ )); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ ));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ ));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ ));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ )); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ ));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ )); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ ));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ )); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ ));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ )); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ ));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ )); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ ));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ ));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ )); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ ));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ )); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ ));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ )); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ ));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ )); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ ));
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ ))
     __attribute__ ((__const__));




extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ )); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ ));
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam;
# 189 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 301 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 326 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 426 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 1 3 4
# 126 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) __signbitf (float __x)
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x8) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) __signbit (double __x)
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x80) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) __signbitl (long double __x)
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 427 "/usr/include/math.h" 2 3 4
# 2533 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 52 "Zend/zend.h" 2
# 67 "Zend/zend.h"
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
# 49 "/usr/include/libio.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 1 3 4
# 30 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 50 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
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
# 68 "Zend/zend.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 69 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
# 69 "Zend/zend.h" 2
# 79 "Zend/zend.h"
# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 3 4
extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ ));
# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;
# 56 "/usr/include/dlfcn.h" 3 4
extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__ ));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;
# 80 "Zend/zend.h" 2
# 259 "Zend/zend.h"
# 1 "Zend/zend_errors.h" 1
# 260 "Zend/zend.h" 2
# 1 "Zend/zend_alloc.h" 1
# 27 "Zend/zend_alloc.h"
# 1 "Zend/../TSRM/TSRM.h" 1
# 20 "Zend/../TSRM/TSRM.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 21 "Zend/../TSRM/TSRM.h" 2
# 39 "Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "Zend/zend_alloc.h" 2
# 1 "Zend/zend.h" 1
# 29 "Zend/zend_alloc.h" 2
# 44 "Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__)) ;
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__)) ;
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure ) ;
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 93 "Zend/zend_alloc.h"
inline static void * __zend_malloc(size_t len)
{
 void *tmp = malloc(len);
 if (tmp) {
  return tmp;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}

inline static void * __zend_calloc(size_t nmemb, size_t len)
{
 void *tmp = _safe_malloc(nmemb, len, 0);
 memset(tmp, 0, nmemb * len);
 return tmp;
}

inline static void * __zend_realloc(void *p, size_t len)
{
 p = realloc(p, len);
 if (p) {
  return p;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}
# 139 "Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit );

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 156 "Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );
# 175 "Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 195 "Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef struct _zend_mm_segment {
 size_t size;
 struct _zend_mm_segment *next_segment;
} zend_mm_segment;

typedef struct _zend_mm_mem_handlers {
 const char *name;
 zend_mm_storage* (*init)(void *params);
 void (*dtor)(zend_mm_storage *storage);
 void (*compact)(zend_mm_storage *storage);
 zend_mm_segment* (*_alloc)(zend_mm_storage *storage, size_t size);
 zend_mm_segment* (*_realloc)(zend_mm_storage *storage, zend_mm_segment *ptr, size_t size);
 void (*_free)(zend_mm_storage *storage, zend_mm_segment *ptr);
} zend_mm_mem_handlers;

struct _zend_mm_storage {
 const zend_mm_mem_handlers *handlers;
 void *data;
};

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup_ex(const zend_mm_mem_handlers *handlers, size_t block_size, size_t reserve_size, int internal, void *params);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap );
__attribute__ ((visibility("default"))) zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);

__attribute__ ((visibility("default"))) void zend_mm_set_custom_handlers(zend_mm_heap *heap,
                                          void* (*_malloc)(size_t),
                                          void (*_free)(void*),
                                          void* (*_realloc)(void*, size_t));
# 261 "Zend/zend.h" 2

# 1 "Zend/zend_types.h" 1
# 41 "Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 65 "Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef struct _zend_object_handlers zend_object_handlers;
typedef struct _zend_class_entry zend_class_entry;
typedef union _zend_function zend_function;

typedef struct _zval_struct zval;

typedef struct _zend_refcounted zend_refcounted;
typedef struct _zend_string zend_string;
typedef struct _zend_array zend_array;
typedef struct _zend_object zend_object;
typedef struct _zend_resource zend_resource;
typedef struct _zend_reference zend_reference;
typedef struct _zend_ast_ref zend_ast_ref;
typedef struct _zend_ast zend_ast;

typedef int (*compare_func_t)(const void *, const void * );
typedef void (*sort_func_t)(void *, size_t, size_t, compare_func_t );
typedef void (*dtor_func_t)(zval *pDest);
typedef void (*copy_ctor_func_t)(zval *pElement);

typedef union _zend_value {
 long lval;
 double dval;
 zend_refcounted *counted;
 zend_string *str;
 zend_array *arr;
 zend_object *obj;
 zend_resource *res;
 zend_reference *ref;
 zend_ast_ref *ast;
 zval *zv;
 void *ptr;
 zend_class_entry *ce;
 zend_function *func;
} zend_value;

struct _zval_struct {
 zend_value value;
 union {
  struct {
   zend_uchar type; zend_uchar type_flags; zend_uchar const_flags; zend_uchar reserved;




  } v;
  zend_uint type_info;
 } u1;
 union {
  zend_uint var_flags;
  zend_uint next;
  zend_uint str_offset;
  zend_uint cache_slot;
  zend_uint lineno;
 } u2;
};

struct _zend_refcounted {
 zend_uint refcount;
 union {
  struct {
   zend_uchar type; zend_uchar flags; zend_ushort gc_info;



  } v;
  zend_uint type_info;
 } u;
};

struct _zend_string {
 zend_refcounted gc;
 zend_ulong h;
 int len;
 char val[1];
};

typedef struct _Bucket {
 zend_ulong h;
 zend_string *key;
 zval val;
} Bucket;

typedef struct _HashTable {
 zend_uint nTableSize;
 zend_uint nTableMask;
 zend_uint nNumUsed;
 zend_uint nNumOfElements;
 long nNextFreeElement;
 Bucket *arData;
 zend_uint *arHash;
 dtor_func_t pDestructor;
 zend_uint nInternalPointer;
 union {
  struct {
   zend_uchar flags; zend_uchar nApplyCount; zend_ushort reserve;



  } v;
  zend_uint flags;
 } u;
} HashTable;

struct _zend_array {
 zend_refcounted gc;
 HashTable ht;
};

struct _zend_object {
 zend_refcounted gc;
 zend_uint handle;
 zend_class_entry *ce;
 const zend_object_handlers *handlers;
 HashTable *properties;
 HashTable *guards;
 zval properties_table[1];
};

struct _zend_resource {
 zend_refcounted gc;
 long handle;
 int type;
 void *ptr;
};

struct _zend_reference {
 zend_refcounted gc;
 zval val;
};

struct _zend_ast_ref {
 zend_refcounted gc;
 zend_ast *ast;
};
# 231 "Zend/zend_types.h"
static inline zend_uchar zval_get_type(const zval* pz) {
 return pz->u1.v.type;
}
# 263 "Zend/zend.h" 2


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
# 266 "Zend/zend.h" 2
# 281 "Zend/zend.h"
static const char long_min_digits[] = "9223372036854775808";






typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;


# 1 "Zend/zend_hash.h" 1
# 26 "Zend/zend_hash.h"
# 1 "Zend/zend.h" 1
# 27 "Zend/zend_hash.h" 2
# 47 "Zend/zend_hash.h"
typedef struct _zend_hash_key {
 ulong h;
 zend_string *key;
} zend_hash_key;

typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, zval *source_data, zend_hash_key *hash_key, void *pParam);

typedef uint HashPosition;




__attribute__ ((visibility("default"))) void _zend_hash_init(HashTable *ht, uint nSize, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) void _zend_hash_init_ex(HashTable *ht, uint nSize, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);



__attribute__ ((visibility("default"))) void zend_hash_real_init(HashTable *ht, int packed);
__attribute__ ((visibility("default"))) void zend_hash_packed_to_hash(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_to_packed(HashTable *ht);


__attribute__ ((visibility("default"))) zval *_zend_hash_add_or_update(HashTable *ht, zend_string *key, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_update(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_update_ind(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_add(HashTable *ht, zend_string *key,zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_add_new(HashTable *ht, zend_string *key,zval *pData );
# 86 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add_or_update(HashTable *ht, const char *key, int len, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_update(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_update_ind(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add_new(HashTable *ht, const char *key, int len, zval *pData );
# 101 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *_zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_add(HashTable *ht, ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_add_new(HashTable *ht, ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_update(HashTable *ht, ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_next_index_insert(HashTable *ht, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_next_index_insert_new(HashTable *ht, zval *pData );
# 119 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *zend_hash_index_add_empty_element(HashTable *ht, ulong h);
__attribute__ ((visibility("default"))) zval *zend_hash_add_empty_element(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval *zend_hash_str_add_empty_element(HashTable *ht, const char *key, int len);





typedef int (*apply_func_t)(zval *pDest );
typedef int (*apply_func_arg_t)(zval *pDest, void *argument );
typedef int (*apply_func_args_t)(zval *pDest , int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht , apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_hash_del(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_del_ind(HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_str_del(HashTable *ht, const char *key, int len);
__attribute__ ((visibility("default"))) int zend_hash_str_del_ind(HashTable *ht, const char *key, int len);
__attribute__ ((visibility("default"))) int zend_hash_index_del(HashTable *ht, ulong h);


__attribute__ ((visibility("default"))) zval *zend_hash_find(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval *zend_hash_str_find(const HashTable *ht, const char *key, int len);
__attribute__ ((visibility("default"))) zval *zend_hash_index_find(const HashTable *ht, ulong h);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_str_exists(const HashTable *ht, const char *str, int len);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, ulong h);




__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, zend_string **str_index, ulong *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) zval *zend_hash_get_current_data_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 HashTable *ht;
 ulong h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 204 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) zval *zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag );
# 220 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);

__attribute__ ((visibility("default"))) void zend_array_dup(HashTable *target, HashTable *source);
# 238 "Zend/zend_hash.h"
static inline int _zend_handle_numeric_str(const char *key, int length, ulong *idx)
{
 register const char *tmp = key;
 const char *end;

 if (*tmp > '9') {
  return 0;
 } else if (*tmp < '0') {
  if (*tmp != '-') {
   return 0;
  }
  tmp++;
  if (*tmp > '9' || *tmp < '0') {
   return 0;
  }
 }


 end = key + length;

 if ((*end != '\0')
  || (*tmp == '0' && length > 1)
  || (end - tmp > 20 - 1)
  || (8 == 4 &&
      end - tmp == 20 - 1 &&
      *tmp > '2')) {
  return 0;
 }
 *idx = (*tmp - '0');
 while (1) {
  ++tmp;
  if (tmp == end) {
   if (*key == '-') {
    if (*idx-1 > 9223372036854775807L) {
     return 0;
    }
    *idx = 0 - *idx;
   } else if (*idx > 9223372036854775807L) {
    return 0;
   }
   return 1;
  }
  if (*tmp <= '9' && *tmp >= '0') {
   *idx = (*idx * 10) + (*tmp - '0');
  } else {
   return 0;
  }
 }
}
# 295 "Zend/zend_hash.h"
static inline zval *zend_hash_find_ind(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return (zv && zval_get_type(&(*(zv))) == 15) ? (*(zv)).value.zv : zv;
}


static inline int zend_hash_exists_ind(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return zv && (zval_get_type(&(*(zv))) != 15 ||
   zval_get_type(&(*((*(zv)).value.zv))) != 0);
}


static inline zval *zend_hash_str_find_ind(const HashTable *ht, const char *str, int len)
{
 zval *zv;

 zv = zend_hash_str_find(ht, str, len);
 return (zv && zval_get_type(&(*(zv))) == 15) ? (*(zv)).value.zv : zv;
}


static inline zval *zend_symtable_update(HashTable *ht, zend_string *key, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update(ht, key, pData );
 }
}


static inline zval *zend_symtable_update_ind(HashTable *ht, zend_string *key, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update_ind(ht, key, pData );
 }
}


static inline int zend_symtable_del(HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del(ht, key);
 }
}


static inline int zend_symtable_del_ind(HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del_ind(ht, key);
 }
}


static inline zval *zend_symtable_find(const HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find(ht, key);
 }
}


static inline zval *zend_symtable_find_ind(const HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find_ind(ht, key);
 }
}


static inline int zend_symtable_exists(HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists(ht, key);
 }
}


static inline zval *zend_symtable_str_update(HashTable *ht, const char *str, int len, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update(ht, str, len, pData );
 }
}


static inline zval *zend_symtable_str_update_ind(HashTable *ht, const char *str, int len, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update_ind(ht, str, len, pData );
 }
}


static inline int zend_symtable_str_del(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del(ht, str, len);
 }
}


static inline int zend_symtable_str_del_ind(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del_ind(ht, str, len);
 }
}


static inline zval *zend_symtable_str_find(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_str_find(ht, str, len);
 }
}


static inline int zend_symtable_str_exists(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_str_exists(ht, str, len);
 }
}

static inline void *zend_hash_add_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_add(ht, key, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_add_new_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_add_new(ht, key, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_str_add_ptr(HashTable *ht, const char *str, int len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_add(ht, str, len, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_update_ptr(HashTable *ht, zend_string *key, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_update(ht, key, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_str_update_ptr(HashTable *ht, const char *str, int len, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_str_update(ht, str, len, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_add_mem(HashTable *ht, zend_string *key, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void*)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_add(ht, key, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):_emalloc((size) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void*)0);
}

static inline void *zend_hash_str_add_mem(HashTable *ht, const char *str, int len, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void*)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_str_add(ht, str, len, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):_emalloc((size) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void*)0);
}

static inline void *zend_hash_update_mem(HashTable *ht, zend_string *key, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):_emalloc((size) ));
 memcpy(p, pData, size);
 return zend_hash_update_ptr(ht, key, p);
}

static inline void *zend_hash_str_update_mem(HashTable *ht, const char *str, int len, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):_emalloc((size) ));
 memcpy(p, pData, size);
 return zend_hash_str_update_ptr(ht, str, len, p);
}

static inline void *zend_hash_index_update_ptr(HashTable *ht, ulong h, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_index_update(ht, h, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_next_index_insert_ptr(HashTable *ht, void *pData)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (pData); (*(&tmp)).u1.type_info = 17; } while (0);
 zv = _zend_hash_next_index_insert(ht, &tmp );
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_index_update_mem(HashTable *ht, ulong h, void *pData, size_t size)
{
 void *p;

 p = ((ht->u.flags & (1<<0))?__zend_malloc(size):_emalloc((size) ));
 memcpy(p, pData, size);
 return zend_hash_index_update_ptr(ht, h, p);
}

static inline void *zend_hash_next_index_insert_mem(HashTable *ht, void *pData, size_t size)
{
 zval tmp, *zv;

 do { (*(&tmp)).value.ptr = (((void*)0)); (*(&tmp)).u1.type_info = 17; } while (0);
 if ((zv = _zend_hash_next_index_insert(ht, &tmp ))) {
  (*(zv)).value.ptr = ((ht->u.flags & (1<<0))?__zend_malloc(size):_emalloc((size) ));
  memcpy((*(zv)).value.ptr, pData, size);
  return (*(zv)).value.ptr;
 }
 return ((void*)0);
}

static inline void *zend_hash_find_ptr(const HashTable *ht, zend_string *key)
{
 zval *zv;

 zv = zend_hash_find(ht, key);
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_str_find_ptr(const HashTable *ht, const char *str, int len)
{
 zval *zv;

 zv = zend_hash_str_find(ht, str, len);
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_hash_index_find_ptr(const HashTable *ht, ulong h)
{
 zval *zv;

 zv = zend_hash_index_find(ht, h);
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_symtable_str_find_ptr(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find_ptr(ht, idx);
 } else {
  return zend_hash_str_find_ptr(ht, str, len);
 }
}

static inline void *zend_hash_get_current_data_ptr_ex(HashTable *ht, HashPosition *pos)
{
 zval *zv;

 zv = zend_hash_get_current_data_ex(ht, pos);
 return zv ? (*(zv)).value.ptr : ((void*)0);
}
# 294 "Zend/zend.h" 2
# 1 "Zend/zend_llist.h" 1
# 25 "Zend/zend_llist.h"
typedef struct _zend_llist_element {
 struct _zend_llist_element *next;
 struct _zend_llist_element *prev;
 char data[1];
} zend_llist_element;

typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **, const zend_llist_element ** );
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args, va_list args );
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg );
typedef void (*llist_apply_func_t)(void * );

typedef struct _zend_llist {
 zend_llist_element *head;
 zend_llist_element *tail;
 size_t count;
 size_t size;
 llist_dtor_func_t dtor;
 unsigned char persistent;
 zend_llist_element *traverse_ptr;
} zend_llist;

typedef zend_llist_element* zend_llist_position;


__attribute__ ((visibility("default"))) void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
__attribute__ ((visibility("default"))) void zend_llist_add_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_prepend_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
__attribute__ ((visibility("default"))) void zend_llist_destroy(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_clean(zend_llist *l);
__attribute__ ((visibility("default"))) void *zend_llist_remove_tail(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_copy(zend_llist *dst, zend_llist *src);
__attribute__ ((visibility("default"))) void zend_llist_apply(zend_llist *l, llist_apply_func_t func );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__ ((visibility("default"))) void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func , int num_args, ...);
__attribute__ ((visibility("default"))) int zend_llist_count(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func );


__attribute__ ((visibility("default"))) void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);
# 295 "Zend/zend.h" 2
# 306 "Zend/zend.h"
void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));





# 1 "Zend/zend_object_handlers.h" 1
# 25 "Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, void **cache_slot, zval *rv );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type, zval *rv );
# 45 "Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, void **cache_slot );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval *(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, int type, void **cache_slot );



typedef void (*zend_object_set_t)(zval *object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object, zval *rv );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, void **cache_slot );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, void **cache_slot );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp );





typedef int (*zend_object_call_method_t)(zend_string *method, zend_object *object, zend_uint param_count, zval *return_value );
typedef union _zend_function *(*zend_object_get_method_t)(zend_object **object, zend_string *method, const zval *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zend_object *object );


typedef void (*zend_object_dtor_obj_t)(zend_object *object );
typedef void (*zend_object_free_obj_t)(zend_object *object );
typedef zend_object* (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(const zend_object *object );
typedef zend_string *(*zend_object_get_class_name_t)(const zend_object *object, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );
typedef int (*zend_object_compare_zvals_t)(zval *resul, zval *op1, zval *op2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zend_object **obj_ptr );

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval **table, int *n );

typedef int (*zend_object_do_operation_t)(zend_uchar opcode, zval *result, zval *op1, zval *op2 );

struct _zend_object_handlers {

 int offset;

 zend_object_free_obj_t free_obj;
 zend_object_dtor_obj_t dtor_obj;
 zend_object_clone_obj_t clone_obj;

 zend_object_read_property_t read_property;
 zend_object_write_property_t write_property;
 zend_object_read_dimension_t read_dimension;
 zend_object_write_dimension_t write_dimension;
 zend_object_get_property_ptr_ptr_t get_property_ptr_ptr;
 zend_object_get_t get;
 zend_object_set_t set;
 zend_object_has_property_t has_property;
 zend_object_unset_property_t unset_property;
 zend_object_has_dimension_t has_dimension;
 zend_object_unset_dimension_t unset_dimension;
 zend_object_get_properties_t get_properties;
 zend_object_get_method_t get_method;
 zend_object_call_method_t call_method;
 zend_object_get_constructor_t get_constructor;
 zend_object_get_class_entry_t get_class_entry;
 zend_object_get_class_name_t get_class_name;
 zend_object_compare_t compare_objects;
 zend_object_cast_t cast_object;
 zend_object_count_elements_t count_elements;
 zend_object_get_debug_info_t get_debug_info;
 zend_object_get_closure_t get_closure;
 zend_object_get_gc_t get_gc;
 zend_object_do_operation_t do_operation;
 zend_object_compare_zvals_t compare;
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;





__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, zend_string *function_name_strval, const zval *key );
__attribute__ ((visibility("default"))) zval *zend_std_get_static_property(zend_class_entry *ce, zend_string *property_name, zend_bool silent, void **cache_slot );
__attribute__ ((visibility("default"))) zend_bool zend_std_unset_static_property(zend_class_entry *ce, zend_string *property_name, void **cache_slot );
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zend_object *object );
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp );
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, void **cache_slot );
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);





__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, zend_string *function_name );

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, zend_string *prop_info_name );

__attribute__ ((visibility("default"))) void zend_std_call_user_call(zend_uint param_count, zval *return_value );
# 312 "Zend/zend.h" 2
# 402 "Zend/zend.h"
# 1 "Zend/zend_string.h" 1
# 24 "Zend/zend_string.h"
# 1 "Zend/zend.h" 1
# 25 "Zend/zend_string.h" 2



__attribute__ ((visibility("default"))) extern zend_string *(*zend_new_interned_string)(zend_string *str );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

__attribute__ ((visibility("default"))) zend_ulong zend_hash_func(const char *str, uint len);
void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 73 "Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_ulong zend_str_hash_val(zend_string *s)
{
 if (!s->h) {
  s->h = zend_hash_func(s->val, s->len);
 }
 return s->h;
}

static inline __attribute__((always_inline)) void zend_str_forget_hash_val(zend_string *s)
{
 s->h = 0;
}

static inline __attribute__((always_inline)) zend_uint zend_str_refcount(zend_string *s)
{
 if (!(((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  return ((zend_refcounted*)(s))->refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) zend_uint zend_str_addref(zend_string *s)
{
 if (!(((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  return ++((zend_refcounted*)(s))->refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) zend_uint zend_str_delref(zend_string *s)
{
 if (!(((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  return --((zend_refcounted*)(s))->refcount;
 }
 return 1;
}

static inline __attribute__((always_inline)) zend_string *zend_str_alloc(int len, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?__zend_malloc((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1))):_emalloc(((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1))) ));

 ((zend_refcounted*)(ret))->refcount = 1;


 ((zend_refcounted*)(ret))->u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 ret->h = 0;
 ret->len = len;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_safe_alloc(size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?_safe_malloc(n, m, (((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1))):_safe_emalloc((n), (m), ((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1))) ));

 ((zend_refcounted*)(ret))->refcount = 1;


 ((zend_refcounted*)(ret))->u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 ret->h = 0;
 ret->len = (n * m) + l;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_init(const char *str, int len, int persistent)
{
 zend_string *ret = zend_str_alloc(len, persistent);

 memcpy(ret->val, str, len);
 ret->val[len] = '\0';
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_copy(zend_string *s)
{
 if (!(((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  zend_str_addref(s);
 }
 return s;
}

static inline __attribute__((always_inline)) zend_string *zend_str_dup(zend_string *s, int persistent)
{
 if ((((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  return s;
 } else {
  return zend_str_init(s->val, s->len, persistent);
 }
}

static inline __attribute__((always_inline)) zend_string *zend_str_realloc(zend_string *s, int len, int persistent)
{
 zend_string *ret;

 if ((((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  ret = zend_str_alloc(len, persistent);
  memcpy(ret->val, s->val, (len > s->len ? s->len : len) + 1);
 } else if (__builtin_expect(!(!(zend_str_refcount(s) == 1)), 1)) {
  ret = (zend_string *)((persistent)?__zend_realloc((s), ((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1)))):_erealloc(((s)), (((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1)))), 0 ));
  ret->len = len;
  zend_str_forget_hash_val(ret);
 } else {
  ret = zend_str_alloc(len, persistent);
  memcpy(ret->val, s->val, (len > s->len ? s->len : len) + 1);
  zend_str_delref(s);
 }
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_safe_realloc(zend_string *s, size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret;

 if ((((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  ret = zend_str_safe_alloc(n, m, l, persistent);
  memcpy(ret->val, s->val, ((n * m) + l > (size_t)s->len ? (size_t)s->len : ((n * m) + l)) + 1);
 } else if (zend_str_refcount(s) == 1) {
  ret = (zend_string *)((persistent)?_safe_realloc((s), (n), (m), ((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1)))):_safe_erealloc(((s)), ((n)), ((m)), (((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1)))) ));
  ret->len = (n * m) + l;
  zend_str_forget_hash_val(ret);
 } else {
  ret = zend_str_safe_alloc(n, m, l, persistent);
  memcpy(ret->val, s->val, ((n * m) + l > (size_t)s->len ? (size_t)s->len : ((n * m) + l)) + 1);
  zend_str_delref(s);
 }
 return ret;
}

static inline __attribute__((always_inline)) void zend_str_free(zend_string *s)
{
 if (!(((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
                                   ;
  ((((zend_refcounted*)(s))->u.v.flags & (1<<0))?free(s):_efree((s) ));
 }
}

static inline __attribute__((always_inline)) void zend_str_release(zend_string *s)
{
 if (!(((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  if (zend_str_delref(s) == 0) {
   ((((zend_refcounted*)(s))->u.v.flags & (1<<0))?free(s):_efree((s) ));
  }
 }
}
# 260 "Zend/zend_string.h"
static inline ulong zend_inline_hash_func(const char *str, uint len)
{
 register ulong hash = 5381;


 for (; len >= 8; len -= 8) {
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
  hash = ((hash << 5) + hash) + *str++;
 }
 switch (len) {
  case 7: hash = ((hash << 5) + hash) + *str++;
  case 6: hash = ((hash << 5) + hash) + *str++;
  case 5: hash = ((hash << 5) + hash) + *str++;
  case 4: hash = ((hash << 5) + hash) + *str++;
  case 3: hash = ((hash << 5) + hash) + *str++;
  case 2: hash = ((hash << 5) + hash) + *str++;
  case 1: hash = ((hash << 5) + hash) + *str++; break;
  case 0: break;

 }
 return hash;
}
# 403 "Zend/zend.h" 2
# 1 "Zend/zend_ast.h" 1
# 26 "Zend/zend_ast.h"
# 1 "Zend/zend.h" 1
# 27 "Zend/zend_ast.h" 2





enum _zend_ast_kind {

 ZEND_AST_ZVAL = 1 << 6,
 ZEND_AST_ZNODE,


 ZEND_AST_FUNC_DECL,
 ZEND_AST_CLOSURE,
 ZEND_AST_METHOD,
 ZEND_AST_CLASS,


 ZEND_AST_ARG_LIST = 1 << 7,
 ZEND_AST_LIST,
 ZEND_AST_ARRAY,
 ZEND_AST_ENCAPS_LIST,
 ZEND_AST_EXPR_LIST,
 ZEND_AST_STMT_LIST,
 ZEND_AST_IF,
 ZEND_AST_SWITCH_LIST,
 ZEND_AST_CATCH_LIST,
 ZEND_AST_PARAM_LIST,
 ZEND_AST_CLOSURE_USES,
 ZEND_AST_PROP_DECL,
 ZEND_AST_CONST_DECL,
 ZEND_AST_CLASS_CONST_DECL,
 ZEND_AST_NAME_LIST,
 ZEND_AST_TRAIT_ADAPTATIONS,
 ZEND_AST_USE,


 ZEND_AST_MAGIC_CONST = 0 << 8,
 ZEND_AST_TYPE,


 ZEND_AST_VAR = 1 << 8,
 ZEND_AST_CONST,
 ZEND_AST_RESOLVE_CLASS_NAME,
 ZEND_AST_UNPACK,
 ZEND_AST_UNARY_PLUS,
 ZEND_AST_UNARY_MINUS,
 ZEND_AST_CAST,
 ZEND_AST_EMPTY,
 ZEND_AST_ISSET,
 ZEND_AST_SILENCE,
 ZEND_AST_SHELL_EXEC,
 ZEND_AST_CLONE,
 ZEND_AST_EXIT,
 ZEND_AST_PRINT,
 ZEND_AST_INCLUDE_OR_EVAL,
 ZEND_AST_UNARY_OP,
 ZEND_AST_PRE_INC,
 ZEND_AST_PRE_DEC,
 ZEND_AST_POST_INC,
 ZEND_AST_POST_DEC,

 ZEND_AST_GLOBAL,
 ZEND_AST_UNSET,
 ZEND_AST_RETURN,
 ZEND_AST_LABEL,
 ZEND_AST_REF,
 ZEND_AST_HALT_COMPILER,
 ZEND_AST_ECHO,
 ZEND_AST_THROW,
 ZEND_AST_GOTO,
 ZEND_AST_BREAK,
 ZEND_AST_CONTINUE,


 ZEND_AST_DIM = 2 << 8,
 ZEND_AST_PROP,
 ZEND_AST_STATIC_PROP,
 ZEND_AST_CALL,
 ZEND_AST_CLASS_CONST,
 ZEND_AST_ASSIGN,
 ZEND_AST_ASSIGN_REF,
 ZEND_AST_ASSIGN_OP,
 ZEND_AST_BINARY_OP,
 ZEND_AST_GREATER,
 ZEND_AST_GREATER_EQUAL,
 ZEND_AST_AND,
 ZEND_AST_OR,
 ZEND_AST_ARRAY_ELEM,
 ZEND_AST_NEW,
 ZEND_AST_INSTANCEOF,
 ZEND_AST_YIELD,

 ZEND_AST_STATIC,
 ZEND_AST_WHILE,
 ZEND_AST_DO_WHILE,
 ZEND_AST_IF_ELEM,
 ZEND_AST_SWITCH,
 ZEND_AST_SWITCH_CASE,
 ZEND_AST_DECLARE,
 ZEND_AST_PROP_ELEM,
 ZEND_AST_CONST_ELEM,
 ZEND_AST_USE_TRAIT,
 ZEND_AST_TRAIT_PRECEDENCE,
 ZEND_AST_METHOD_REFERENCE,
 ZEND_AST_NAMESPACE,
 ZEND_AST_USE_ELEM,
 ZEND_AST_TRAIT_ALIAS,


 ZEND_AST_METHOD_CALL = 3 << 8,
 ZEND_AST_STATIC_CALL,
 ZEND_AST_CONDITIONAL,

 ZEND_AST_TRY,
 ZEND_AST_CATCH,
 ZEND_AST_PARAM,


 ZEND_AST_FOR = 4 << 8,
 ZEND_AST_FOREACH,
};

typedef unsigned short zend_ast_kind;
typedef unsigned short zend_ast_attr;

struct _zend_ast {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zend_uint lineno;
 zend_ast *child[1];
};


typedef struct _zend_ast_list {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zend_uint lineno;
 zend_uint children;
 zend_ast *child[1];
} zend_ast_list;


typedef struct _zend_ast_zval {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zval val;
} zend_ast_zval;


typedef struct _zend_ast_decl {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zend_uint start_lineno;
 zend_uint end_lineno;
 zend_uint flags;
 unsigned char *lex_pos;
 zend_string *doc_comment;
 zend_string *name;
 zend_ast *child[3];
} zend_ast_decl;

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_zval_ex(zval *zv, zend_ast_attr attr);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_ex(zend_ast_kind kind, zend_ast_attr attr, ...);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create(zend_ast_kind kind, ...);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_decl(
 zend_ast_kind kind, zend_uint flags, zend_uint start_lineno, zend_string *doc_comment,
 zend_string *name, zend_ast *child0, zend_ast *child1, zend_ast *child2
);

__attribute__ ((visibility("default"))) zend_ast_list *zend_ast_create_list(zend_uint init_children, zend_ast_kind kind, ...);
__attribute__ ((visibility("default"))) zend_ast_list *zend_ast_list_add(zend_ast_list *list, zend_ast *op);

__attribute__ ((visibility("default"))) void zend_ast_evaluate(zval *result, zend_ast *ast, zend_class_entry *scope );

__attribute__ ((visibility("default"))) zend_ast *zend_ast_copy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy_and_free(zend_ast *ast);

typedef void (*zend_ast_apply_func)(zend_ast **ast_ptr );
__attribute__ ((visibility("default"))) void zend_ast_apply(zend_ast *ast, zend_ast_apply_func fn );

static inline zend_bool zend_ast_is_list(zend_ast *ast) {
 return (ast->kind >> 7) & 1;
}
static inline zend_ast_list *zend_ast_get_list(zend_ast *ast) {
                                   ;
 return (zend_ast_list *) ast;
}

static inline zval *zend_ast_get_zval(zend_ast *ast) {
                                        ;
 return &((zend_ast_zval *) ast)->val;
}
static inline zend_string *zend_ast_get_str(zend_ast *ast) {
 return (*(zend_ast_get_zval(ast))).value.str;
}

static inline zend_uint zend_ast_get_num_children(zend_ast *ast) {
                                    ;
 return ast->kind >> 8;
}
static inline zend_uint zend_ast_get_lineno(zend_ast *ast) {
 if (ast->kind == ZEND_AST_ZVAL) {
  zval *zv = zend_ast_get_zval(ast);
  return zv->u2.lineno;
 } else {
  return ast->lineno;
 }
}

static inline zend_ast *zend_ast_create_zval(zval *zv) {
 return zend_ast_create_zval_ex(zv, 0);
}
static inline zend_ast *zend_ast_create_zval_from_str(zend_string *str) {
 zval zv;
 do { zval *__z = (&zv); zend_string *__s = (str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 return zend_ast_create_zval(&zv);
}
static inline zend_ast *zend_ast_create_zval_from_long(long lval) {
 zval zv;
 { zval *__z = (&zv); (*(__z)).value.lval = lval; (*(__z)).u1.type_info = 4; };
 return zend_ast_create_zval(&zv);
}

static inline zend_ast *zend_ast_create_binary_op(zend_uint opcode, zend_ast *op0, zend_ast *op1) {
 return zend_ast_create_ex(ZEND_AST_BINARY_OP, opcode, op0, op1);
}
static inline zend_ast *zend_ast_create_assign_op(zend_uint opcode, zend_ast *op0, zend_ast *op1) {
 return zend_ast_create_ex(ZEND_AST_ASSIGN_OP, opcode, op0, op1);
}
static inline zend_ast *zend_ast_create_cast(zend_uint type, zend_ast *op0) {
 return zend_ast_create_ex(ZEND_AST_CAST, type, op0);
}
# 404 "Zend/zend.h" 2

static inline __attribute__((always_inline)) zend_uint zval_refcount_p(zval* pz) {
                                                     ;
 return ((zend_refcounted*)((*(pz)).value.counted))->refcount;
}

static inline __attribute__((always_inline)) zend_uint zval_set_refcount_p(zval* pz, zend_uint rc) {
                                ;
 return ((zend_refcounted*)((*(pz)).value.counted))->refcount = rc;
}

static inline __attribute__((always_inline)) zend_uint zval_addref_p(zval* pz) {
                                ;
 return ++((zend_refcounted*)((*(pz)).value.counted))->refcount;
}

static inline __attribute__((always_inline)) zend_uint zval_delref_p(zval* pz) {
                                ;
 return --((zend_refcounted*)((*(pz)).value.counted))->refcount;
}





union _zend_function;


# 1 "Zend/zend_iterators.h" 1
# 29 "Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter );


 int (*valid)(zend_object_iterator *iter );


 zval *(*get_current_data)(zend_object_iterator *iter );





 void (*get_current_key)(zend_object_iterator *iter, zval *key );


 void (*move_forward)(zend_object_iterator *iter );


 void (*rewind)(zend_object_iterator *iter );


 void (*invalidate_current)(zend_object_iterator *iter );
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 zend_object std;
 zval data;
 zend_object_iterator_funcs *funcs;
 ulong index;
};

typedef struct _zend_class_iterator_funcs {
 zend_object_iterator_funcs *funcs;
 union _zend_function *zf_new_iterator;
 union _zend_function *zf_valid;
 union _zend_function *zf_current;
 union _zend_function *zf_key;
 union _zend_function *zf_next;
 union _zend_function *zf_rewind;
} zend_class_iterator_funcs;

enum zend_object_iterator_kind {
 ZEND_ITER_INVALID,
 ZEND_ITER_PLAIN_ARRAY,
 ZEND_ITER_PLAIN_OBJECT,
 ZEND_ITER_OBJECT
};



__attribute__ ((visibility("default"))) enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


__attribute__ ((visibility("default"))) void zend_iterator_init(zend_object_iterator *iter );
__attribute__ ((visibility("default"))) void zend_iterator_dtor(zend_object_iterator *iter );

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);
# 432 "Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_trait_method_reference {
 zend_string *method_name;
 zend_class_entry *ce;
 zend_string *class_name;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;

struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;
 union {
  zend_class_entry *ce;
  zend_string *class_name;
 } *exclude_from_classes;
};
typedef struct _zend_trait_precedence zend_trait_precedence;

struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 zend_string *alias;




 zend_uint modifiers;
};
typedef struct _zend_trait_alias zend_trait_alias;

struct _zend_class_entry {
 char type;
 zend_string *name;
 struct _zend_class_entry *parent;
 int refcount;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable properties_info;
 zval *default_properties_table;
 zval *default_static_members_table;
 zval *static_members_table;
 HashTable constants_table;
 int default_properties_count;
 int default_static_members_count;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__callstatic;
 union _zend_function *__tostring;
 union _zend_function *__debugInfo;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object* (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );
 union _zend_function *(*get_static_method)(zend_class_entry *ce, zend_string* method );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval *object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 zend_class_entry **traits;
 zend_uint num_traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   zend_string *filename;
   zend_uint line_start;
   zend_uint line_end;
   zend_string *doc_comment;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};


# 1 "Zend/zend_stream.h" 1
# 30 "Zend/zend_stream.h"
typedef size_t (*zend_stream_fsizer_t)(void* handle );
typedef size_t (*zend_stream_reader_t)(void* handle, char *buf, size_t len );
typedef void (*zend_stream_closer_t)(void* handle );



typedef enum {
 ZEND_HANDLE_FILENAME,
 ZEND_HANDLE_FD,
 ZEND_HANDLE_FP,
 ZEND_HANDLE_STREAM,
 ZEND_HANDLE_MAPPED
} zend_stream_type;

typedef struct _zend_mmap {
 size_t len;
 size_t pos;
 void *map;
 char *buf;
 void *old_handle;
 zend_stream_closer_t old_closer;
} zend_mmap;

typedef struct _zend_stream {
 void *handle;
 int isatty;
 zend_mmap mmap;
 zend_stream_reader_t reader;
 zend_stream_fsizer_t fsizer;
 zend_stream_closer_t closer;
} zend_stream;

typedef struct _zend_file_handle {
 zend_stream_type type;
 const char *filename;
 char *opened_path;
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 zend_bool free_filename;
} zend_file_handle;


__attribute__ ((visibility("default"))) int zend_stream_open(const char *filename, zend_file_handle *handle );
__attribute__ ((visibility("default"))) int zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len );
__attribute__ ((visibility("default"))) void zend_file_handle_dtor(zend_file_handle *fh );
__attribute__ ((visibility("default"))) int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);
# 535 "Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks );
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 zend_string *(*vstrpprintf_function)(size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
 char *(*resolve_path_function)(const char *filename, int filename_len );
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 572 "Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);
# 611 "Zend/zend.h"
__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) int zend_make_printable_zval(zval *expr, zval *expr_copy );
__attribute__ ((visibility("default"))) int zend_print_zval(zval *expr, int indent );
__attribute__ ((visibility("default"))) int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr );
__attribute__ ((visibility("default"))) void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) __attribute__ ((format(printf, 2, 3)));



__attribute__ ((visibility("default"))) void zend_activate(void);
__attribute__ ((visibility("default"))) void zend_deactivate(void);
__attribute__ ((visibility("default"))) void zend_call_destructors(void);
__attribute__ ((visibility("default"))) void zend_activate_modules(void);
__attribute__ ((visibility("default"))) void zend_deactivate_modules(void);
__attribute__ ((visibility("default"))) void zend_post_deactivate_modules(void);
# 637 "Zend/zend.h"
__attribute__ ((visibility("default"))) void free_estring(char **str_p);
__attribute__ ((visibility("default"))) void free_string_zval(zval *zv);
# 649 "Zend/zend.h"
extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks );
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern zend_string *(*zend_vstrpprintf)(size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;
# 688 "Zend/zend.h"
__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);
# 826 "Zend/zend.h"
# 1 "Zend/zend_gc.h" 1
# 76 "Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 zend_refcounted *ref;
 struct _gc_root_buffer *next;
 struct _gc_root_buffer *prev;
 zend_uint refcount;
} gc_root_buffer;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 gc_root_buffer to_free;
 gc_root_buffer *next_to_free;

 zend_uint gc_runs;
 zend_uint collected;
# 108 "Zend/zend_gc.h"
} zend_gc_globals;
# 117 "Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_possible_root(zend_refcounted *ref );
__attribute__ ((visibility("default"))) void gc_remove_from_buffer(zend_refcounted *ref );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);
# 140 "Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_check_possible_root(zval *z )
{
 do { if (__builtin_expect(!(!((zval_get_type(&(*(z))) == 10))), 0)) { (z) = &(*(z)).value.ref->val; } } while (0);
 if ((((*(z)).u1.v.type_flags & (1<<2)) != 0) && __builtin_expect(!(!(!((zend_refcounted*)((*(z)).value.counted))->u.v.gc_info)), 0)) {
  gc_possible_root((*(z)).value.counted );
 }
}
# 827 "Zend/zend.h" 2
# 1 "Zend/zend_operators.h" 1
# 25 "Zend/zend_operators.h"
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
# 26 "Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 28 "Zend/zend_operators.h" 2


# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3
# 47 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3
typedef long int ptrdiff_t;
# 31 "Zend/zend_operators.h" 2






# 1 "Zend/zend_strtod.h" 1
# 25 "Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);
# 38 "Zend/zend_operators.h" 2
# 1 "Zend/zend_multiply.h" 1
# 39 "Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int pow_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int div_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mod_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_or_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_and_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_left_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_right_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int concat_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int is_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) zend_bool instanceof_function_ex(const zend_class_entry *instance_ce, const zend_class_entry *ce, zend_bool interfaces_only );
__attribute__ ((visibility("default"))) zend_bool instanceof_function(const zend_class_entry *instance_ce, const zend_class_entry *ce );
# 94 "Zend/zend_operators.h"
static inline __attribute__((always_inline)) long zend_dval_to_lval(double d)
{

 if (d >= 9223372036854775807L || d < (-9223372036854775807L -1L)) {
  double two_pow_64 = pow(2., 64.),
    dmod;

  dmod = fmod(d, two_pow_64);
  if (dmod < 0) {


   dmod += two_pow_64;
  }
  return (long)(unsigned long)dmod;
 }
 return (long)d;
}
# 132 "Zend/zend_operators.h"
static inline zend_uchar is_numeric_string_ex(const char *str, int length, long *lval, double *dval, int allow_errors, int *oflow_info)
{
 const char *ptr;
 int base = 10, digits = 0, dp_or_e = 0;
 double local_dval = 0.0;
 zend_uchar type;

 if (!length) {
  return 0;
 }

 if (oflow_info != ((void*)0)) {
  *oflow_info = 0;
 }



 while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f') {
  str++;
  length--;
 }
 ptr = str;

 if (*ptr == '-' || *ptr == '+') {
  ptr++;
 }

 if (((*ptr) >= '0' && (*ptr) <= '9')) {


  if (length > 2 && *str == '0' && (str[1] == 'x' || str[1] == 'X')) {
   base = 16;
   ptr += 2;
  }


  while (*ptr == '0') {
   ptr++;
  }




  for (type = 4; !(digits >= 20 && (dval || allow_errors == 1)); digits++, ptr++) {
check_digits:
   if (((*ptr) >= '0' && (*ptr) <= '9') || (base == 16 && (((*ptr) >= 'A' && (*ptr) <= 'F') || ((*ptr) >= 'a' && (*ptr) <= 'f')))) {
    continue;
   } else if (base == 10) {
    if (*ptr == '.' && dp_or_e < 1) {
     goto process_double;
    } else if ((*ptr == 'e' || *ptr == 'E') && dp_or_e < 2) {
     const char *e = ptr + 1;

     if (*e == '-' || *e == '+') {
      ptr = e++;
     }
     if (((*e) >= '0' && (*e) <= '9')) {
      goto process_double;
     }
    }
   }

   break;
  }

  if (base == 10) {
   if (digits >= 20) {
    if (oflow_info != ((void*)0)) {
     *oflow_info = *str == '-' ? -1 : 1;
    }
    dp_or_e = -1;
    goto process_double;
   }
  } else if (!(digits < 8 * 2 || (digits == 8 * 2 && ptr[-digits] <= '7'))) {
   if (dval) {
    local_dval = zend_hex_strtod(str, &ptr);
   }
   if (oflow_info != ((void*)0)) {
    *oflow_info = 1;
   }
   type = 5;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 5;



  if (dval) {
   local_dval = zend_strtod(str, &ptr);
  } else if (allow_errors != 1 && dp_or_e != -1) {
   dp_or_e = (*ptr++ == '.') ? 1 : 2;
   goto check_digits;
  }
 } else {
  return 0;
 }

 if (ptr != str + length) {
  if (!allow_errors) {
   return 0;
  }
  if (allow_errors == -1) {
   zend_error((1<<3L), "A non well formed numeric value encountered");
  }
 }

 if (type == 4) {
  if (digits == 20 - 1) {
   int cmp = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (&ptr[-digits]) && __builtin_constant_p (long_min_digits) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s2_len = __builtin_strlen (long_min_digits), (!((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s1_len < 4) ? (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (long_min_digits); int __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) && (__s2_len = __builtin_strlen (long_min_digits), __s2_len < 4) ? (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (&ptr[-digits]); int __result = (((const unsigned char *) (const char *) (long_min_digits))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (long_min_digits))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (long_min_digits))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (long_min_digits))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (&ptr[-digits], long_min_digits)))); });

   if (!(cmp < 0 || (cmp == 0 && *str == '-'))) {
    if (dval) {
     *dval = zend_strtod(str, ((void*)0));
    }
    if (oflow_info != ((void*)0)) {
     *oflow_info = *str == '-' ? -1 : 1;
    }

    return 5;
   }
  }

  if (lval) {
   *lval = strtol(str, ((void*)0), base);
  }

  return 4;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 5;
 }
}

static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void*)0));
}

__attribute__ ((visibility("default"))) zend_uchar is_numeric_str_function(const zend_string *str, long *lval, double *dval);

static inline const char *
zend_memnstr(const char *haystack, const char *needle, int needle_len, char *end)
{
 const char *p = haystack;
 const char ne = needle[needle_len-1];

 if (needle_len == 1) {
  return (char *)memchr(p, *needle, (end-p));
 }

 if (needle_len > end-haystack) {
  return ((void*)0);
 }

 end -= needle_len;

 while (p <= end) {
  if ((p = (char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
   if (!memcmp(needle, p, needle_len-1)) {
    return p;
   }
  }

  if (p == ((void*)0)) {
   return ((void*)0);
  }

  p++;
 }

 return ((void*)0);
}

static inline const void *zend_memrchr(const void *s, int c, size_t n)
{
 register const unsigned char *e;

 if (n <= 0) {
  return ((void*)0);
 }

 for (e = (const unsigned char *)s + n - 1; e >= (const unsigned char *)s; e--) {
  if (*e == (const unsigned char)c) {
   return (const void *)e;
  }
 }

 return ((void*)0);
}


__attribute__ ((visibility("default"))) int increment_function(zval *op1);
__attribute__ ((visibility("default"))) int decrement_function(zval *op2);

__attribute__ ((visibility("default"))) void convert_scalar_to_number(zval *op );
__attribute__ ((visibility("default"))) void _convert_to_cstring(zval *op );
__attribute__ ((visibility("default"))) void _convert_to_string(zval *op );
__attribute__ ((visibility("default"))) void convert_to_long(zval *op);
__attribute__ ((visibility("default"))) void convert_to_double(zval *op);
__attribute__ ((visibility("default"))) void convert_to_long_base(zval *op, int base);
__attribute__ ((visibility("default"))) void convert_to_null(zval *op);
__attribute__ ((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__ ((visibility("default"))) void convert_to_array(zval *op);
__attribute__ ((visibility("default"))) void convert_to_object(zval *op);
__attribute__ ((visibility("default"))) void multi_convert_to_long_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_double_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_string_ex(int argc, ...);

__attribute__ ((visibility("default"))) long _zval_get_long_func(zval *op );
__attribute__ ((visibility("default"))) double _zval_get_double_func(zval *op );
__attribute__ ((visibility("default"))) zend_string *_zval_get_string_func(zval *op );

static inline __attribute__((always_inline)) long _zval_get_long(zval *op ) {
 return zval_get_type(&(*(op))) == 4 ? (*(op)).value.lval : _zval_get_long_func(op );
}
static inline __attribute__((always_inline)) double _zval_get_double(zval *op ) {
 return zval_get_type(&(*(op))) == 5 ? (*(op)).value.dval : _zval_get_double_func(op );
}
static inline __attribute__((always_inline)) zend_string *_zval_get_string(zval *op ) {
 return zval_get_type(&(*(op))) == 6 ? zend_str_copy((*(op)).value.str) : _zval_get_string_func(op );
}





__attribute__ ((visibility("default"))) int add_char_to_string(zval *result, const zval *op1, const zval *op2);
__attribute__ ((visibility("default"))) int add_string_to_string(zval *result, const zval *op1, const zval *op2);



__attribute__ ((visibility("default"))) double zend_string_to_double(const char *number, zend_uint length);

__attribute__ ((visibility("default"))) int zval_is_true(zval *op);
__attribute__ ((visibility("default"))) int compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int numeric_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_case_compare_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int string_locale_compare_function(zval *result, zval *op1, zval *op2 );


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_copy(char *dest, const char *source, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_dup(const char *source, unsigned int length);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, uint len1, const char *s2, uint len2, uint length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, uint len1, const char *s2, uint len2, uint length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp_l(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp_l(const char *s1, uint len1, const char *s2, uint len2, uint length);

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );
# 477 "Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
# 494 "Zend/zend_operators.h"
  __asm__(
   "incq (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x0, (%0)\n\t"
   "movl $0x43e00000, 0x4(%0)\n\t"
   "movl %1, %c2(%0)\n"
   "0:"
   :
   : "r"(&op1->value),
     "n"(5),
     "n"((__builtin_offsetof(zval, u1.type_info) - __builtin_offsetof(zval, value)))
   : "cc");
# 514 "Zend/zend_operators.h"
  return SUCCESS;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
# 536 "Zend/zend_operators.h"
  __asm__(
   "decq (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x00000000, (%0)\n\t"
   "movl $0xc3e00000, 0x4(%0)\n\t"
   "movl %1,%c2(%0)\n"
   "0:"
   :
   : "r"(&op1->value),
     "n"(5),
     "n"((__builtin_offsetof(zval, u1.type_info) - __builtin_offsetof(zval, value)))
   : "cc");
# 556 "Zend/zend_operators.h"
  return SUCCESS;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
# 589 "Zend/zend_operators.h"
  __asm__(
   "movq	(%1), %%rax\n\t"
   "addq   (%2), %%rax\n\t"
   "jo     0f\n\t"
   "movq   %%rax, (%0)\n\t"
   "movl   %3, %c5(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildq	(%1)\n\t"
   "fildq	(%2)\n\t"
   "faddp	%%st, %%st(1)\n\t"
   "movl   %4, %c5(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(&result->value),
     "r"(&op1->value),
     "r"(&op2->value),
     "n"(4),
     "n"(5),
     "n"((__builtin_offsetof(zval, u1.type_info) - __builtin_offsetof(zval, value)))
   : "rax","cc");
# 625 "Zend/zend_operators.h"
   return SUCCESS;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = ((double)(*(op1)).value.lval) + (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval + (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval + ((double)(*(op2)).value.lval); (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 }
 return add_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_sub_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
# 674 "Zend/zend_operators.h"
  __asm__(
   "movq	(%1), %%rax\n\t"
   "subq   (%2), %%rax\n\t"
   "jo     0f\n\t"
   "movq   %%rax, (%0)\n\t"
   "movl   %3, %c5(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildq	(%2)\n\t"
   "fildq	(%1)\n\t"



   "fsubp	%%st, %%st(1)\n\t"

   "movl   %4, %c5(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(&result->value),
     "r"(&op1->value),
     "r"(&op2->value),
     "n"(4),
     "n"(5),
     "n"((__builtin_offsetof(zval, u1.type_info) - __builtin_offsetof(zval, value)))
   : "rax","cc");
# 708 "Zend/zend_operators.h"
   return SUCCESS;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = ((double)(*(op1)).value.lval) - (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval - (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval - ((double)(*(op2)).value.lval); (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 }
 return sub_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mul_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   long overflow;

   do { long __tmpvar; __asm__ ("imul %3,%0\n" "adc $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*(op1)).value.lval), "r"((*(op2)).value.lval), "1"(0)); if (overflow) ((*(result)).value.dval) = (double) ((*(op1)).value.lval) * (double) ((*(op2)).value.lval); else ((*(result)).value.lval) = __tmpvar; } while (0);
   (*(result)).u1.type_info = overflow ? 5 : 4;
   return SUCCESS;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = ((double)(*(op1)).value.lval) * (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval * (*(op2)).value.dval; (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   { zval *__z = (result); (*(__z)).value.dval = (*(op1)).value.dval * ((double)(*(op2)).value.lval); (*(__z)).u1.type_info = 5; };
   return SUCCESS;
  }
 }
 return mul_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2 )
{
# 798 "Zend/zend_operators.h"
 return div_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mod_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   if (__builtin_expect(!(!((*(op2)).value.lval == 0)), 0)) {
    zend_error((1<<1L), "Division by zero");
    do { (*(result)).u1.type_info = (0) ? 3 : 2; } while (0);
    return FAILURE;
   } else if (__builtin_expect(!(!((*(op2)).value.lval == -1)), 0)) {

    { zval *__z = (result); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; };
    return SUCCESS;
   }
   { zval *__z = (result); (*(__z)).value.lval = (*(op1)).value.lval % (*(op2)).value.lval; (*(__z)).u1.type_info = 4; };
   return SUCCESS;
  }
 }
 return mod_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_equal_check_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   return (*(op1)).value.lval == (*(op2)).value.lval;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   return ((double)(*(op1)).value.lval) == (*(op2)).value.dval;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   return (*(op1)).value.dval == (*(op2)).value.dval;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   return (*(op1)).value.dval == ((double)(*(op2)).value.lval);
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 6)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 6)), 1)) {
   if ((*(op1)).value.str == (*(op2)).value.str) {
    return 1;
   } else if ((*(op1)).value.str->val[0] > '9' || (*(op2)).value.str->val[0] > '9') {
    if ((*(op1)).value.str->len != (*(op2)).value.str->len) {
     return 0;
    } else {
     return memcmp((*(op1)).value.str->val, (*(op2)).value.str->val, (*(op1)).value.str->len) == 0;
    }
   } else {
    zendi_smart_strcmp(result, op1, op2);
    return (*(result)).value.lval == 0;
   }
  }
 }
 compare_function(result, op1, op2 );
 return (*(result)).value.lval == 0;
}

static inline __attribute__((always_inline)) void fast_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.lval == (*(op2)).value.lval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((double)(*(op1)).value.lval == (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval == (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval == ((double)(*(op2)).value.lval)) ? 3 : 2; } while (0);
   return;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 6)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 6)), 1)) {
   if ((*(op1)).value.str == (*(op2)).value.str) {
    do { (*(result)).u1.type_info = 3; } while (0);
    return;
   } else if ((*(op1)).value.str->val[0] > '9' || (*(op2)).value.str->val[0] > '9') {
    if ((*(op1)).value.str->len != (*(op2)).value.str->len) {
     do { (*(result)).u1.type_info = 2; } while (0);
     return;
    } else {
     do { (*(result)).u1.type_info = (memcmp((*(op1)).value.str->val, (*(op2)).value.str->val, (*(op1)).value.str->len) == 0) ? 3 : 2; } while (0);
     return;
    }
   } else {
    zendi_smart_strcmp(result, op1, op2);
    do { (*(result)).u1.type_info = ((*(result)).value.lval == 0) ? 3 : 2; } while (0);
    return;
   }
  }
 }
 compare_function(result, op1, op2 );
 do { (*(result)).u1.type_info = ((*(result)).value.lval == 0) ? 3 : 2; } while (0);
}

static inline __attribute__((always_inline)) void fast_not_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.lval != (*(op2)).value.lval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((double)(*(op1)).value.lval != (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval != (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval != ((double)(*(op2)).value.lval)) ? 3 : 2; } while (0);
   return;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 6)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 6)), 1)) {
   if ((*(op1)).value.str == (*(op2)).value.str) {
    do { (*(result)).u1.type_info = 2; } while (0);
    return;
   } else if ((*(op1)).value.str->val[0] > '9' || (*(op2)).value.str->val[0] > '9') {
    if ((*(op1)).value.str->len != (*(op2)).value.str->len) {
     do { (*(result)).u1.type_info = 3; } while (0);
     return;
    } else {
     do { (*(result)).u1.type_info = (memcmp((*(op1)).value.str->val, (*(op2)).value.str->val, (*(op1)).value.str->len) != 0) ? 3 : 2; } while (0);
     return;
    }
   } else {
    zendi_smart_strcmp(result, op1, op2);
    do { (*(result)).u1.type_info = ((*(result)).value.lval != 0) ? 3 : 2; } while (0);
    return;
   }
  }
 }
 compare_function(result, op1, op2 );
 do { (*(result)).u1.type_info = ((*(result)).value.lval != 0) ? 3 : 2; } while (0);
}

static inline __attribute__((always_inline)) void fast_is_smaller_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.lval < (*(op2)).value.lval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((double)(*(op1)).value.lval < (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval < (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval < ((double)(*(op2)).value.lval)) ? 3 : 2; } while (0);
   return;
  }
 }
 compare_function(result, op1, op2 );
 do { (*(result)).u1.type_info = ((*(result)).value.lval < 0) ? 3 : 2; } while (0);
}

static inline __attribute__((always_inline)) void fast_is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.lval <= (*(op2)).value.lval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((double)(*(op1)).value.lval <= (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 5)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 5)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval <= (*(op2)).value.dval) ? 3 : 2; } while (0);
   return;
  } else if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
   do { (*(result)).u1.type_info = ((*(op1)).value.dval <= ((double)(*(op2)).value.lval)) ? 3 : 2; } while (0);
   return;
  }
 }
 compare_function(result, op1, op2 );
 do { (*(result)).u1.type_info = ((*(result)).value.lval <= 0) ? 3 : 2; } while (0);
}

static inline __attribute__((always_inline)) void fast_is_identical_function(zval *result, zval *op1, zval *op2 )
{
 if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
  do { (*(result)).u1.type_info = (0) ? 3 : 2; } while (0);
  return;
 }
 is_identical_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) void fast_is_not_identical_function(zval *result, zval *op1, zval *op2 )
{
 if (zval_get_type(&(*(op1))) != zval_get_type(&(*(op2)))) {
  do { (*(result)).u1.type_info = (1) ? 3 : 2; } while (0);
  return;
 }
 is_identical_function(result, op1, op2 );
 do { (*(result)).u1.type_info = (zval_get_type(&(*(result))) != 3) ? 3 : 2; } while (0);
}
# 1044 "Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_string *zend_long_to_str(long num);
# 828 "Zend/zend.h" 2
# 1 "Zend/zend_variables.h" 1
# 28 "Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void _zval_dtor_func(zend_refcounted *p );
__attribute__ ((visibility("default"))) void _zval_dtor_func_for_ptr(zend_refcounted *p );

static inline __attribute__((always_inline)) void _zval_dtor(zval *zvalue )
{
 if (!(((*(zvalue)).u1.v.type_flags & (1<<1)) != 0)) {
  return;
 }
 _zval_dtor_func((*(zvalue)).value.counted );
}

__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );



static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if ((((*(zvalue)).u1.v.type_flags & (1<<1)) != 0) || (((*(zvalue)).u1.v.type_flags & (1<<4)) != 0)) {
  if ((((*(zvalue)).u1.v.type_flags & (1<<3)) != 0) || (((*(zvalue)).u1.v.type_flags & (1<<4)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_opt_copy_ctor(zval *zvalue )
{
 if ((((*(zvalue)).u1.type_info & ((1<<1) << 8)) != 0) || (((*(zvalue)).u1.type_info & ((1<<4) << 8)) != 0)) {
  if ((((*(zvalue)).u1.type_info & ((1<<3) << 8)) != 0) || (((*(zvalue)).u1.type_info & ((1<<4) << 8)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_copy_ctor_no_imm(zval *zvalue )
{
 if ((((*(zvalue)).u1.v.type_flags & (1<<1)) != 0)) {
  if ((((*(zvalue)).u1.v.type_flags & (1<<3)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

static inline __attribute__((always_inline)) void _zval_opt_copy_ctor_no_imm(zval *zvalue )
{
 if ((((*(zvalue)).u1.type_info & ((1<<1) << 8)) != 0)) {
  if ((((*(zvalue)).u1.type_info & ((1<<3) << 8)) != 0)) {
   _zval_copy_ctor_func(zvalue );
  } else {
   zval_addref_p(zvalue);
  }
 }
}

__attribute__ ((visibility("default"))) int zval_copy_static_var(zval *p , int num_args, va_list args, zend_hash_key *key);

__attribute__ ((visibility("default"))) int zend_print_variable(zval *var );
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval *zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor_for_ptr(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 121 "Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval *p);
__attribute__ ((visibility("default"))) void zval_add_ref_unref(zval *p);
# 829 "Zend/zend.h" 2

typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved );
# 25 "Zend/zend_compile.c" 2
# 1 "Zend/zend_compile.h" 1
# 49 "Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _zend_compiler_context {
 zend_uint opcodes_size;
 int vars_size;
 int literals_size;
 int current_brk_cont;
 int backpatch_count;
 int in_finally;
 HashTable *labels;
} zend_compiler_context;

typedef union _znode_op {
 zend_uint constant;
 zend_uint var;
 zend_uint num;
 zend_ulong hash;
 zend_uint opline_num;
 zend_op *jmp_addr;
 zval *zv;
 void *ptr;
} znode_op;

typedef struct _znode {
 int op_type;
 union {
  znode_op op;
  zval constant;
 } u;
} znode;


typedef struct _zend_ast_znode {
 zend_ast_kind kind;
 zend_ast_attr attr;
 zend_uint lineno;
 znode node;
} zend_ast_znode;
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_znode(znode *node);

static inline znode *zend_ast_get_znode(zend_ast *ast) {
 return &((zend_ast_znode *) ast)->node;
}

typedef union _zend_parser_stack_elem {
 zend_ast *ast;
 zend_ast_list *list;
 zend_string *str;
 zend_ulong num;
} zend_parser_stack_elem;

void zend_compile_top_stmt(zend_ast *ast );
void zend_compile_stmt(zend_ast *ast );
void zend_compile_expr(znode *node, zend_ast *ast );
void zend_compile_var(znode *node, zend_ast *ast, int type );
void zend_eval_const_expr(zend_ast **ast_ptr );
void zend_const_expr_to_zval(zval *result, zend_ast *ast );

typedef struct _zend_execute_data zend_execute_data;




typedef int (*user_opcode_handler_t) (zend_execute_data *execute_data );
typedef int ( *opcode_handler_t) (zend_execute_data *execute_data );

extern __attribute__ ((visibility("default"))) opcode_handler_t *zend_opcode_handlers;

struct _zend_op {
 opcode_handler_t handler;
 znode_op op1;
 znode_op op2;
 znode_op result;
 ulong extended_value;
 uint lineno;
 zend_uchar opcode;
 zend_uchar op1_type;
 zend_uchar op2_type;
 zend_uchar result_type;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;

typedef struct _zend_label {
 int brk_cont;
 zend_uint opline_num;
} zend_label;

typedef struct _zend_try_catch_element {
 zend_uint try_op;
 zend_uint catch_op;
 zend_uint finally_op;
 zend_uint finally_end;
} zend_try_catch_element;
# 229 "Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 zend_string *name;
 ulong h;
 int offset;
 zend_string *doc_comment;
 zend_class_entry *ce;
} zend_property_info;

typedef struct _zend_arg_info {
 const char *name;
 zend_uint name_len;
 const char *class_name;
 zend_uint class_name_len;
 zend_uchar type_hint;
 zend_uchar pass_by_reference;
 zend_bool allow_null;
 zend_bool is_variadic;
} zend_arg_info;





typedef struct _zend_internal_function_info {
 const char *_name;
 zend_uint _name_len;
 const char *_class_name;
 zend_uint required_num_args;
 zend_uchar _type_hint;
 zend_bool return_reference;
 zend_bool _allow_null;
 zend_bool _is_variadic;
} zend_internal_function_info;

struct _zend_op_array {

 zend_uchar type;
 zend_string *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last;

 zend_string **vars;
 int last_var;

 zend_uint T;

 zend_brk_cont_element *brk_cont_array;
 int last_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;
 zend_bool has_finally_block;


 HashTable *static_variables;

 zend_uint this_var;

 zend_string *filename;
 zend_uint line_start;
 zend_uint line_end;
 zend_string *doc_comment;
 zend_uint early_binding;

 zval *literals;
 int last_literal;

 void **run_time_cache;
 int last_cache_slot;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 zend_string* function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 void (*handler)(zend_uint param_count, zval *return_value );
 struct _zend_module_entry *module;
} zend_internal_function;



union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  zend_string *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
};

typedef struct _zend_switch_entry {
 znode cond;
 int default_case;
 int control_var;
} zend_switch_entry;

typedef enum _vm_frame_kind {
 VM_FRAME_NESTED_FUNCTION,
 VM_FRAME_NESTED_CODE,
 VM_FRAME_TOP_FUNCTION,
 VM_FRAME_TOP_CODE
} vm_frame_kind;

struct _zend_execute_data {
 struct _zend_op *opline;
 zend_execute_data *call;
 void **run_time_cache;
 zend_function *func;
 zend_uint num_args;
 zend_uchar flags;
 zend_uchar frame_kind;
 zend_class_entry *called_scope;
 zend_object *object;
 zend_execute_data *prev_nested_call;
 zend_execute_data *prev_execute_data;
 zval *return_value;
 zend_class_entry *scope;
 zend_array *symbol_table;
 struct _zend_op *fast_ret;
 zend_object *delayed_exception;
 zval old_error_reporting;
};
# 416 "Zend/zend_compile.h"
# 1 "Zend/zend_globals.h" 1
# 26 "Zend/zend_globals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 29 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 31 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 74 "/usr/include/setjmp.h" 3 4
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 102 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 27 "Zend/zend_globals.h" 2

# 1 "Zend/zend_globals_macros.h" 1
# 25 "Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;
# 38 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;
# 29 "Zend/zend_globals.h" 2

# 1 "Zend/zend_stack.h" 1
# 25 "Zend/zend_stack.h"
typedef struct _zend_stack {
 int size, top, max;
 void *elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack, int size);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element);
__attribute__ ((visibility("default"))) void *zend_stack_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void *zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);
__attribute__ ((visibility("default"))) void zend_stack_clean(zend_stack *stack, void (*func)(void *), zend_bool free_elements);
# 31 "Zend/zend_globals.h" 2
# 1 "Zend/zend_ptr_stack.h" 1
# 25 "Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
 zend_bool persistent;
} zend_ptr_stack;





__attribute__ ((visibility("default"))) void zend_ptr_stack_init(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_init_ex(zend_ptr_stack *stack, zend_bool persistent);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_destroy(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__ ((visibility("default"))) void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
__attribute__ ((visibility("default"))) int zend_ptr_stack_num_elements(zend_ptr_stack *stack);
# 58 "Zend/zend_ptr_stack.h"
static inline __attribute__((always_inline)) void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { do { stack->max += 64; } while (stack->top+3 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { do { stack->max += 64; } while (stack->top+2 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { do { stack->max += 64; } while (stack->top+1 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}

static inline void *zend_ptr_stack_top(zend_ptr_stack *stack)
{
    return stack->elements[stack->top - 1];
}
# 32 "Zend/zend_globals.h" 2


# 1 "Zend/zend_objects.h" 1
# 28 "Zend/zend_objects.h"
__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object *zend_objects_new(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object *old_object );
__attribute__ ((visibility("default"))) zend_object *zend_objects_clone_obj(zval *object );
# 35 "Zend/zend_globals.h" 2
# 1 "Zend/zend_objects_API.h" 1
# 49 "Zend/zend_objects_API.h"
typedef struct _zend_objects_store {
 zend_object **object_buckets;
 zend_uint top;
 zend_uint size;
 int free_list_head;
} zend_objects_store;



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) void zend_objects_store_put(zend_object *object );
__attribute__ ((visibility("default"))) void zend_objects_store_del(zend_object *object );
__attribute__ ((visibility("default"))) void zend_objects_store_free(zend_object *object );


__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, zend_object *object );
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zend_object *object );

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects );



__attribute__ ((visibility("default"))) zend_object *zend_object_create_proxy(zval *object, zval *member );

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);
# 36 "Zend/zend_globals.h" 2
# 1 "Zend/zend_modules.h" 1
# 26 "Zend/zend_modules.h"
# 1 "Zend/zend_compile.h" 1
# 27 "Zend/zend_modules.h" 2
# 1 "Zend/zend_build.h" 1
# 28 "Zend/zend_modules.h" 2
# 69 "Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 const struct _zend_ini_entry *ini_entry;
 const struct _zend_module_dep *deps;
 const char *name;
 const struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number );
 int (*module_shutdown_func)(int type, int module_number );
 int (*request_startup_func)(int type, int module_number );
 int (*request_shutdown_func)(int type, int module_number );
 void (*info_func)(zend_module_entry *zend_module );
 const char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global );
 void (*globals_dtor)(void *global );
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
 const char *build_id;
};
# 118 "Zend/zend_modules.h"
struct _zend_module_dep {
 const char *name;
 const char *rel;
 const char *version;
 unsigned char type;
};

extern __attribute__ ((visibility("default"))) HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(const zend_module_entry *module );
# 37 "Zend/zend_globals.h" 2
# 1 "Zend/zend_float.h" 1
# 27 "Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 214 "Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 215 "Zend/zend_float.h" 2
# 38 "Zend/zend_globals.h" 2
# 1 "Zend/zend_multibyte.h" 1
# 25 "Zend/zend_multibyte.h"
typedef struct _zend_encoding zend_encoding;

typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length, const unsigned char *buf, size_t length );

typedef const zend_encoding* (*zend_encoding_fetcher)(const char *encoding_name );
typedef const char* (*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef int (*zend_encoding_lexer_compatibility_checker)(const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
typedef int (*zend_encoding_list_parser)(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(const zend_encoding *encoding );

typedef struct _zend_multibyte_functions {
    const char *provider_name;
    zend_encoding_fetcher encoding_fetcher;
    zend_encoding_name_getter encoding_name_getter;
    zend_encoding_lexer_compatibility_checker lexer_compatibility_checker;
    zend_encoding_detector encoding_detector;
    zend_encoding_converter encoding_converter;
    zend_encoding_list_parser encoding_list_parser;
    zend_encoding_internal_encoding_getter internal_encoding_getter;
    zend_encoding_internal_encoding_setter internal_encoding_setter;
} zend_multibyte_functions;






__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf8;


__attribute__ ((visibility("default"))) int zend_multibyte_set_functions(const zend_multibyte_functions *functions );
__attribute__ ((visibility("default"))) const zend_multibyte_functions *zend_multibyte_get_functions(void);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_fetch_encoding(const char *name );
__attribute__ ((visibility("default"))) const char *zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_encoding_detector(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
__attribute__ ((visibility("default"))) size_t zend_multibyte_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
__attribute__ ((visibility("default"))) int zend_multibyte_parse_encoding_list(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_internal_encoding(void);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_script_encoding(void);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding(const zend_encoding **encoding_list, size_t encoding_list_size );
__attribute__ ((visibility("default"))) int zend_multibyte_set_internal_encoding(const zend_encoding *encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding_by_string(const char *new_value, size_t new_value_length );
# 39 "Zend/zend_globals.h" 2
# 1 "Zend/zend_arena.h" 1
# 26 "Zend/zend_arena.h"
typedef struct _zend_arena zend_arena;

struct _zend_arena {
 char *ptr;
 char *end;
 zend_arena *prev;
};

static inline __attribute__((always_inline)) zend_arena* zend_arena_create(size_t size)
{
 zend_arena *arena = (zend_arena*)_emalloc((size) );

 arena->ptr = (char*) arena + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1));
 arena->end = (char*) arena + size;
 arena->prev = ((void*)0);
 return arena;
}

static inline __attribute__((always_inline)) void zend_arena_destroy(zend_arena *arena)
{
 do {
  zend_arena *prev = arena->prev;
  _efree((arena) );
  arena = prev;
 } while (arena);
}



static inline __attribute__((always_inline)) void* zend_arena_alloc(zend_arena **arena_ptr, size_t size)
{
 zend_arena *arena = *arena_ptr;
 char *ptr = arena->ptr;

 size = (((size) + 8 - 1) & ~(8 -1));

 if (__builtin_expect(!(!(size <= (size_t)(arena->end - ptr))), 1)) {
  arena->ptr = ptr + size;
 } else {
  size_t arena_size =
   __builtin_expect(!(!((size + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1))) > (size_t)(arena->end - (char*) arena))), 0) ?
    (size + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1))) :
    (arena->end - (char*) arena);
  zend_arena *new_arena = (zend_arena*)_emalloc((arena_size) );

  ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1));
  new_arena->ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1)) + size;
  new_arena->end = (char*) new_arena + arena_size;
  new_arena->prev = arena;
  *arena_ptr = new_arena;
 }

 return (void*) ptr;
}

static inline __attribute__((always_inline)) void* zend_arena_calloc(zend_arena **arena_ptr, size_t count, size_t unit_size)
{
 size_t size = unit_size * count;
 void *ret;

                                                ;
 ret = zend_arena_alloc(arena_ptr, size);
 memset(ret, 0, size);
 return ret;
}

static inline __attribute__((always_inline)) void* zend_arena_checkpoint(zend_arena *arena)
{
 return arena->ptr;
}

static inline __attribute__((always_inline)) void zend_arena_release(zend_arena **arena_ptr, void *checkpoint)
{
 zend_arena *arena = *arena_ptr;

 while (__builtin_expect(!(!((char*)checkpoint > arena->end)), 0) ||
        __builtin_expect(!(!((char*)checkpoint < (char*)arena)), 0)) {
  zend_arena *prev = arena->prev;
  _efree((arena) );
  *arena_ptr = arena = prev;
 }
 arena->ptr = (char*)checkpoint;
}
# 40 "Zend/zend_globals.h" 2
# 56 "Zend/zend_globals.h"
# 1 "Zend/zend_compile.h" 1
# 57 "Zend/zend_globals.h" 2








typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;

typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


struct _zend_compiler_globals {
 zend_stack switch_cond_stack;
 zend_stack foreach_copy_stack;

 zend_class_entry *active_class_entry;

 zend_string *compiled_filename;

 int zend_lineno;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool parse_error;
 zend_bool in_compilation;
 zend_bool short_tags;
 zend_bool asp_tags;

 zend_declarables declarables;

 zend_bool unclean_shutdown;

 zend_bool ini_parser_unbuffered_errors;

 zend_llist open_files;

 struct _zend_ini_parser_param *ini_parser_param;

 int interactive;

 zend_uint start_lineno;
 zend_bool increment_lineno;

 znode implementing_class;

 zend_string *doc_comment;

 zend_uint compiler_options;

 zend_string *current_namespace;
 HashTable *current_import;
 HashTable *current_import_function;
 HashTable *current_import_const;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 HashTable const_filenames;

 zend_compiler_context context;
 zend_stack context_stack;

 zend_arena *arena;

 zend_string *empty_string;
 zend_string *one_char_string[256];

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;

 zend_ast *ast;
 zend_arena *ast_arena;

 zend_stack delayed_oplines_stack;





};


struct _zend_executor_globals {
 zval uninitialized_zval;
 zval error_zval;


 zend_array *symtable_cache[32];
 zend_array **symtable_cache_limit;
 zend_array **symtable_cache_ptr;

 zend_array symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int orig_error_reporting;
 int exit_status;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zend_class_entry *scope;

 zval This;

 long precision;

 int ticks_count;

 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;






 HashTable regular_list;
 HashTable persistent_list;

 zend_vm_stack argument_stack;

 int user_error_handler_error_reporting;
 zval user_error_handler;
 zval user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_stack user_error_handlers;
 zend_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zend_object *exception, *prev_exception;
 zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;
 zend_bool valid_symbol_table;

 zend_op *start_op;

 void *saved_fpu_cw_ptr;

 fpu_control_t saved_fpu_cw;


 void *reserved[4];
};

struct _zend_ini_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 char *filename;
 int lineno;


 int scanner_mode;
};

struct _zend_php_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;
 zend_ptr_stack heredoc_label_stack;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;


 int scanned_string_len;
};
# 417 "Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);
void zend_init_compiler_context(void);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) zend_string *zend_set_compiled_filename(zend_string *new_compiled_filename );
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(zend_string *original_compiled_filename );
__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var);







typedef int (*unary_op_type)(zval *, zval * );
typedef int (*binary_op_type)(zval *, zval *, zval * );
__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_stop_lexing(void);
void zend_emit_final_return(zval *zv );
zend_ast *zend_ast_append_str(zend_ast *left, zend_ast *right);
zend_uint zend_add_member_modifier(zend_uint flags, zend_uint new_flag);
zend_ast_list *zend_ast_append_doc_comment(zend_ast_list *list );
void zend_handle_encoding_declaration(zend_ast_list *declares );


void zend_do_free(znode *op1 );

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface );
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );

__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait );
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce );

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array );


void zend_init_list(void *result, void *item );
void zend_add_to_list(void *result, void *item );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_verify_namespace(void);
void zend_do_end_compilation(void);

void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 );
void zend_release_labels(int temporary );

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);






__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename );
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename );
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type , zval *retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) void zend_cleanup_user_class_data(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) void zend_cleanup_op_array_data(zend_op_array *op_array);

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function );
__attribute__ ((visibility("default"))) void zend_function_dtor(zval *zv);
__attribute__ ((visibility("default"))) void destroy_zend_class(zval *zv);
void zend_class_add_ref(zval *zv);

__attribute__ ((visibility("default"))) zend_string *zend_mangle_property_name(const char *src1, int src1_length, const char *src2, int src2_length, int internal);


__attribute__ ((visibility("default"))) int zend_unmangle_property_name_ex(const char *mangled_property, int mangled_property_len, const char **class_name, const char **prop_name, int *prop_len);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name );
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
zend_uint zend_get_class_fetch_type(zend_string *name);

typedef zend_bool (*zend_auto_global_callback)(zend_string *name );
typedef struct _zend_auto_global {
 zend_string *name;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(zend_string *name, zend_bool jit, zend_auto_global_callback auto_global_callback );
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(zend_string *name );
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);

int zendlex(zend_parser_stack_elem *elem );

int zend_add_literal(zend_op_array *op_array, zval *zv );




# 1 "Zend/zend_vm_opcodes.h" 1
# 24 "Zend/zend_vm_opcodes.h"
__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);
# 553 "Zend/zend_compile.h" 2
# 26 "Zend/zend_compile.c" 2
# 1 "Zend/zend_constants.h" 1
# 33 "Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 zend_string *name;
 int module_number;
} zend_constant;
# 62 "Zend/zend_constants.h"
void clean_module_constants(int module_number );
void free_zend_constant(zval *zv);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) zval *zend_get_constant(zend_string *name );
__attribute__ ((visibility("default"))) zval *zend_get_constant_str(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zval *zend_get_constant_ex(zend_string *name, zend_class_entry *scope, ulong flags );
__attribute__ ((visibility("default"))) void zend_register_bool_constant(const char *name, uint name_len, zend_bool bval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_null_constant(const char *name, uint name_len, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, uint name_len, long lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
zend_constant *zend_quick_get_constant(const zval *key, ulong flags );
# 27 "Zend/zend_compile.c" 2

# 1 "Zend/zend_API.h" 1
# 27 "Zend/zend_API.h"
# 1 "Zend/zend_list.h" 1
# 30 "Zend/zend_list.h"
typedef void (*rsrc_dtor_func_t)(zend_resource *res );


typedef struct _zend_rsrc_list_dtors_entry {
 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 const char *type_name;

 int module_number;
 int resource_id;
} zend_rsrc_list_dtors_entry;


__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(zval *ptr);
void plist_entry_destructor(zval *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_close_rsrc_list(HashTable *ht );
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) zval *zend_list_insert(void *ptr, int type );
__attribute__ ((visibility("default"))) int _zend_list_free(zend_resource *res );
__attribute__ ((visibility("default"))) int _zend_list_delete(zend_resource *res );
__attribute__ ((visibility("default"))) int _zend_list_close(zend_resource *res );





__attribute__ ((visibility("default"))) zend_resource *zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type );
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zval *passed_id , int default_id, const char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(zend_resource *res );
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(const char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;
# 28 "Zend/zend_API.h" 2


# 1 "Zend/zend_execute.h" 1
# 31 "Zend/zend_execute.h"
struct _zend_fcall_info;
__attribute__ ((visibility("default"))) extern void (*zend_execute_ex)(zend_execute_data *execute_data );
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data, zval *return_value );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__ ((visibility("default"))) void zend_init_execute_data(zend_execute_data *execute_data, zend_op_array *op_array, zval *return_value, vm_frame_kind frame_kind );
__attribute__ ((visibility("default"))) zend_execute_data *zend_create_generator_execute_data(zend_execute_data *call, zend_op_array *op_array, zval *return_value );
__attribute__ ((visibility("default"))) void zend_execute(zend_op_array *op_array, zval *return_value );
__attribute__ ((visibility("default"))) void execute_ex(zend_execute_data *execute_data );
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data, zval *return_value );
__attribute__ ((visibility("default"))) int zend_is_true(zval *op );
__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class(zend_string *name );
__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class_ex(zend_string *name, const zval *key, int use_autoload );
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, int str_len, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, int str_len, zval *retval_ptr, char *string_name, int handle_exceptions );

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, ulong fetch_type, char **class_name, zend_class_entry **pce );
__attribute__ ((visibility("default"))) void zend_verify_arg_error(int error_type, const zend_function *zf, zend_uint arg_num, const char *need_msg, const char *need_kind, const char *given_msg, const char *given_kind, zval *arg );

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<1)) != 0)) {
  if (!zval_delref_p(zval_ptr)) {
                                                   ;
   _zval_dtor_func_for_ptr((*(zval_ptr)).value.counted );
  } else {
   gc_check_possible_root((zval_ptr) );
  }
 }
}

static inline __attribute__((always_inline)) void i_zval_ptr_dtor_nogc(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<1)) != 0)) {
  if (!zval_delref_p(zval_ptr)) {
                                                   ;
   _zval_dtor_func_for_ptr((*(zval_ptr)).value.counted );
  }
 }
}

static inline __attribute__((always_inline)) int i_zend_is_true(zval *op )
{
 int result;

again:
 switch (zval_get_type(&(*(op)))) {
  case 0:
  case 1:
  case 2:
   result = 0;
   break;
  case 3:
   result = 1;
   break;
  case 4:
   result = ((*(op)).value.lval?1:0);
   break;
  case 9:
   result = ((*op).value.res->handle?1:0);
   break;
  case 5:
   result = ((*(op)).value.dval ? 1 : 0);
   break;
  case 6:
   if ((*(op)).value.str->len == 0
    || ((*(op)).value.str->len==1 && (*(op)).value.str->val[0]=='0')) {
    result = 0;
   } else {
    result = 1;
   }
   break;
  case 7:
   result = (((&(*(op)).value.arr->ht))->nNumOfElements?1:0);
   break;
  case 8:
   if ((zval_get_type(&(*op)) == 8 && (((*op)).value.obj->handlers->get_class_entry != ((void*)0)))) {
    if ((*(op)).value.obj->handlers->cast_object) {
     zval tmp;
     if ((*(op)).value.obj->handlers->cast_object(op, &tmp, 13 ) == SUCCESS) {
      result = zval_get_type(&(tmp)) == 3;
      break;
     }
     zend_error((1<<12L), "Object of class %s could not be converted to boolean", (*(op)).value.obj->ce->name->val);
    } else if ((*(op)).value.obj->handlers->get) {
     zval rv;
     zval *tmp = (*(op)).value.obj->handlers->get(op, &rv );
     if (zval_get_type(&(*(tmp))) != 8) {

      convert_to_boolean(tmp);
      result = zval_get_type(&(*(tmp))) == 3;
      _zval_ptr_dtor((tmp) );
      break;
     }
    }
   }
   result = 1;
   break;
  case 10:
   op = &(*(op)).value.ref->val;
   goto again;
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval *pp, zend_bool inline_change );
__attribute__ ((visibility("default"))) int zval_update_constant_inline_change(zval *pp, zend_class_entry *scope );
__attribute__ ((visibility("default"))) int zval_update_constant_no_inline_change(zval *pp, zend_class_entry *scope );
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval *pp, zend_bool inline_change, zend_class_entry *scope );




struct _zend_vm_stack {
 zval *top;
 zval *end;
 zend_vm_stack prev;
};
# 173 "Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc((count * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) );

 page->top = (((zval*)(page)) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))));
 page->end = (zval*)page + count;
 page->prev = ((void*)0);
 return page;
}

static inline __attribute__((always_inline)) void zend_vm_stack_init(void)
{
 (executor_globals.argument_stack) = zend_vm_stack_new_page((16 * 1024));
 (executor_globals.argument_stack)->top++;
}

static inline __attribute__((always_inline)) void zend_vm_stack_destroy(void)
{
 zend_vm_stack stack = (executor_globals.argument_stack);

 while (stack != ((void*)0)) {
  zend_vm_stack p = stack->prev;
  _efree((stack) );
  stack = p;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_extend(int count )
{
 int size = count * (((sizeof(zval)) + 8 - 1) & ~(8 -1));
 zend_vm_stack p = zend_vm_stack_new_page(
  (size >= ((16 * 1024) - (((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1)))) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) ?
  (size + (((((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + (16 * 1024)) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1) &
   ~(((16 * 1024) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1) :
  (16 * 1024));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame(zend_function *func, zend_uint num_args, zend_uchar flags, zend_class_entry *called_scope, zend_object *object, zend_execute_data *prev )
{
 int used_stack = (((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + num_args;
 zend_execute_data *call;

 if (((func->type & 1) == 0)) {
  used_stack += func->op_array.last_var + func->op_array.T - (((func->op_array.num_args)<(num_args))?(func->op_array.num_args):(num_args));
 }
 do { if (__builtin_expect(!(!(((used_stack) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) > (size_t)(((char*)(executor_globals.argument_stack)->end) - ((char*)(executor_globals.argument_stack)->top)))), 0)) { zend_vm_stack_extend((used_stack) ); } } while (0);
 call = (zend_execute_data*)(executor_globals.argument_stack)->top;
 (executor_globals.argument_stack)->top += used_stack;
 call->func = func;
 call->num_args = 0;
 call->flags = flags;
 call->called_scope = called_scope;
 call->object = object;
 call->prev_nested_call = prev;
 return call;
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_extra_args(zend_execute_data *call )
{
 zend_uint first_extra_arg = call->func->op_array.num_args - ((call->func->common.fn_flags & 0x1000000) != 0);

  if (__builtin_expect(!(!(call->num_args > first_extra_arg)), 0)) {
   zval *end = (((zval*)(call)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(call->func->op_array.last_var + call->func->op_array.T))));
   zval *p = end + (call->num_args - first_extra_arg);
  do {
   p--;
   i_zval_ptr_dtor_nogc(p );
  } while (p != end);
  }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_args(zend_execute_data *call )
{
 zend_uint num_args = call->num_args;

 if (num_args > 0) {
  zval *end = (((zval*)(call)) + ((1) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1)));
  zval *p = end + num_args;

  do {
   p--;
   i_zval_ptr_dtor_nogc(p );
  } while (p != end);
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame(zend_execute_data *call )
{
 if (__builtin_expect(!(!((((zval*)((executor_globals.argument_stack))) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1)))) == (zval*)call)), 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {
  (executor_globals.argument_stack)->top = (zval*)call;
 }
}

void execute_new_code(void);



__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space );
__attribute__ ((visibility("default"))) const char *get_active_function_name(void);
__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );

__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval(zval *result, zval *container, zval *dim );
# 303 "Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval* zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 313 "Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval *var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );

void zend_clean_and_cache_symbol_table(zend_array *symbol_table );
void zend_free_compiled_variables(zend_execute_data *execute_data );
# 31 "Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(zend_uint param_count, zval *return_value );
 const struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval function_name;
 zend_array *symbol_table;
 zval *retval;
 zend_uint param_count;
 zval *params;
 zend_object *object;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zend_object *object;
} zend_fcall_info_cache;
# 232 "Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval *argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 252 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args , zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, const char *type_spec, ...);

__attribute__ ((visibility("default"))) int zend_parse_parameter(int flags, int arg_num , zval *arg, const char *spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type );
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table );
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry );
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type );

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, int name_len, zend_class_entry *ce );






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, uint function_name_length );
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, uint class_name_length );

__attribute__ ((visibility("default"))) void zend_wrong_param_count(void);
# 298 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zend_object *object, uint check_flags, zend_string **callable_name, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, zend_string **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, zend_string **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, zend_string *name, zval *property, int access_type, zend_string *doc_comment );
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, int name_length, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, int name_length, double value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, int name_length, const char *value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, int name_length, const char *value, int value_len, int access_type );

__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, long value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value );

__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, int name_length );
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) void zend_update_property_str(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_string *value );
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, int name_length );
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zend_object *object );
__attribute__ ((visibility("default"))) zend_string *zend_get_object_classname(const zend_object *object );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 364 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);
__attribute__ ((visibility("default"))) void object_properties_init_ex(zend_object *object, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_load(zend_object *object, HashTable *properties );

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(zend_uint param_count, zval *return_value ));

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_str_ex(zval *arg, const char *key, uint key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 403 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong idx, long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong idx, zend_resource *r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_str(zval *arg, ulong idx, zend_string *str);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong idx, const char *str);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong idx, const char *str, uint length);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, zend_resource *r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_str(zval *arg, zend_string *str);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, uint length);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) zval *add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length);




__attribute__ ((visibility("default"))) zval *add_get_index_long(zval *arg, ulong idx, long l);
__attribute__ ((visibility("default"))) zval *add_get_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) zval *add_get_index_str(zval *arg, ulong index, zend_string *str);
__attribute__ ((visibility("default"))) zval *add_get_index_string(zval *arg, ulong idx, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_index_stringl(zval *arg, ulong idx, const char *str, uint length);

__attribute__ ((visibility("default"))) int array_set_zval_key(HashTable *ht, zval *key, zval *value );

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, zend_resource *r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_str_ex(zval *arg, const char *key, uint key_len, zend_string *str );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 458 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[], int no_separation, zend_array *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 474 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, zend_string **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval **params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval *params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci , int argc, zval *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci , int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci , int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval *retval, zval *args );

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) int zend_delete_global_variable(zend_string *name );

__attribute__ ((visibility("default"))) zend_array *zend_rebuild_symbol_table(void);
__attribute__ ((visibility("default"))) void zend_attach_symbol_table(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) void zend_detach_symbol_table(zend_execute_data *execute_data);
__attribute__ ((visibility("default"))) int zend_set_local_var(zend_string *name, zval *value, int force );
__attribute__ ((visibility("default"))) int zend_set_local_var_str(const char *name, int len, zval *value, int force );

__attribute__ ((visibility("default"))) zend_string *zend_find_alias_name(zend_class_entry *ce, zend_string *name);
__attribute__ ((visibility("default"))) zend_string *zend_resolve_method_name(zend_class_entry *ce, zend_function *f);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_display_disabled_class(zend_uint param_count, zval *return_value );
# 708 "Zend/zend_API.h"
typedef enum _zend_expected_type {
 Z_EXPECTED_LONG, Z_EXPECTED_BOOL, Z_EXPECTED_STRING, Z_EXPECTED_ARRAY, Z_EXPECTED_FUNC, Z_EXPECTED_RESOURCE, Z_EXPECTED_PATH, Z_EXPECTED_OBJECT, Z_EXPECTED_DOUBLE,
 Z_EXPECTED_LAST
} zend_expected_type;

__attribute__ ((visibility("default"))) int parse_arg_object_to_str(zval *arg, zend_string **str, int type );
__attribute__ ((visibility("default"))) void zend_wrong_paramers_count_error(int num_args, int min_num_args, int max_num_args );
__attribute__ ((visibility("default"))) void zend_wrong_paramer_type_error(int num, zend_expected_type expected_type, zval *arg );
__attribute__ ((visibility("default"))) void zend_wrong_paramer_class_error(int num, char *name, zval *arg );
__attribute__ ((visibility("default"))) void zend_wrong_callback_error(int severity, int num, char *error );
__attribute__ ((visibility("default"))) int _z_param_class(zval *arg, zend_class_entry **pce, int num, int check_null );
# 1055 "Zend/zend_API.h"
static inline __attribute__((always_inline)) int _z_param_bool(zval *arg, zend_bool *dest, zend_bool *is_null, int check_null )
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 3)), 1)) {
  *dest = 1;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) < 3)), 1)) {
  if (check_null) {
   *is_null = (zval_get_type(&(*(arg))) == 1);
  }
  *dest = 0;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) <= 6)), 1)) {
  *dest = zend_is_true(arg );
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_long(zval *arg, long *dest, zend_bool *is_null, int check_null, int strict)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 4)), 1)) {
  *dest = (*(arg)).value.lval;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 5)), 1)) {
  if (strict && __builtin_expect(!(!((*(arg)).value.dval > 9223372036854775807L)), 0)) {
   *dest = 9223372036854775807L;
  } else if (strict && __builtin_expect(!(!((*(arg)).value.dval < (-9223372036854775807L -1L))), 0)) {
   *dest = (-9223372036854775807L -1L);
  } else {
   *dest = zend_dval_to_lval((*(arg)).value.dval);
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 6)), 1)) {
  double d;
  int type;

  if (__builtin_expect(!(!((type = is_numeric_str_function((*(arg)).value.str, dest, &d)) != 4)), 0)) {
   if (__builtin_expect(!(!(type != 0)), 1)) {
    if (strict && __builtin_expect(!(!(d > 9223372036854775807L)), 0)) {
     *dest = 9223372036854775807L;
    } else if (strict && __builtin_expect(!(!(d < (-9223372036854775807L -1L))), 0)) {
     *dest = (-9223372036854775807L -1L);
    } else {
     *dest = zend_dval_to_lval(d);
    }
   } else {
    return 0;
   }
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) < 3)), 1)) {
  if (check_null) {
   *is_null = (zval_get_type(&(*(arg))) == 1);
  }
  *dest = 0;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 3)), 1)) {
  *dest = 1;
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_double(zval *arg, double *dest, zend_bool *is_null, int check_null)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 5)), 1)) {
  *dest = (*(arg)).value.dval;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 4)), 1)) {
  *dest = (double)(*(arg)).value.lval;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 6)), 1)) {
  long l;
  int type;

  if (__builtin_expect(!(!((type = is_numeric_str_function((*(arg)).value.str, &l, dest)) != 5)), 0)) {
   if (__builtin_expect(!(!(type != 0)), 1)) {
    *dest = (double)(l);
   } else {
    return 0;
   }
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) < 3)), 1)) {
  if (check_null) {
   *is_null = (zval_get_type(&(*(arg))) == 1);
  }
  *dest = 0.0;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 3)), 1)) {
  *dest = 1.0;
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_str(zval *arg, zend_string **dest, int check_null )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 6)), 1)) {
  *dest = (*(arg)).value.str;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) < 6)), 1)) {
  if (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 0)) {
   *dest = ((void*)0);
  } else {
   if ((((*(arg)).u1.v.type_flags & (1<<3)) != 0) && zval_refcount_p(arg) > 1) {
    zval_delref_p(arg);
    _zval_copy_ctor_func(arg );
   }
   if (zval_get_type(&(*(arg))) != 6) { _convert_to_string((arg) ); };
   *dest = (*(arg)).value.str;
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) != 8)), 0) ||
            __builtin_expect(!(!(parse_arg_object_to_str(arg, dest, 6 ) != SUCCESS)), 0)) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_string(zval *arg, char **dest, int *dest_len, int check_null )
{
 zend_string *str;

 if (!_z_param_str(arg, &str, check_null )) {
  return 0;
 }
 if (check_null && __builtin_expect(!(!(!str)), 0)) {
  *dest = ((void*)0);
  *dest_len = 0;
 } else {
  *dest = str->val;
  *dest_len = str->len;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_path_str(zval *arg, zend_string **dest, int check_null )
{
 if (!_z_param_str(arg, dest, check_null ) ||
  (check_null && __builtin_expect(!(!(!(*dest)->val)), 0)) ||
     __builtin_expect(!(!((strlen((*dest)->val) != (*dest)->len))), 0)) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_path(zval *arg, char **dest, int *dest_len, int check_null )
{
 zend_string *str;

 if (!_z_param_path_str(arg, &str, check_null )) {
  return 0;
 }
 if (check_null && __builtin_expect(!(!(!str)), 0)) {
  *dest = ((void*)0);
  *dest_len = 0;
 } else {
  *dest = str->val;
  *dest_len = str->len;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_array(zval *arg, zval **dest, int check_null, int or_object)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 7)), 1) ||
  (or_object && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 8)), 1))) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 1)) {
  *dest = ((void*)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_array_ht(zval *arg, HashTable **dest, int check_null, int or_object )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 7)), 1)) {
  *dest = (&(*(arg)).value.arr->ht);
 } else if (or_object && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 8)), 1)) {
  *dest = (*(arg)).value.obj->handlers->get_properties(arg );
 } else if (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 1)) {
  *dest = ((void*)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_object(zval *arg, zval **dest, zend_class_entry *ce, int check_null )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 8)), 1) &&
     (!ce || __builtin_expect(!(!(instanceof_function(zend_get_class_entry((*(arg)).value.obj ), ce ) != 0)), 1))) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 1)) {
  *dest = ((void*)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_resource(zval *arg, zval **dest, int check_null)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 9)), 1)) {
  *dest = arg;
 } else if (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 1)) {
  *dest = ((void*)0);
 } else {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) int _z_param_func(zval *arg, zend_fcall_info *dest_fci, zend_fcall_info_cache *dest_fcc, int check_null, char **error )
{
 if (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 0)) {
  dest_fci->size = 0;
  dest_fcc->initialized = 0;
  *error = ((void*)0);
 } else if (__builtin_expect(!(!(zend_fcall_info_init(arg, 0, dest_fci, dest_fcc, ((void*)0), error ) != SUCCESS)), 0)) {
  return 0;
 }
 return 1;
}

static inline __attribute__((always_inline)) void _z_param_zval(zval *arg, zval **dest, int check_null)
{
 *dest = (check_null &&
     (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 0) ||
      (__builtin_expect(!(!((zval_get_type(&(*(arg))) == 10))), 0) &&
       __builtin_expect(!(!(zval_get_type(&(*(&(*(arg)).value.ref->val))) == 1)), 0)))) ? ((void*)0) : arg;
}

static inline __attribute__((always_inline)) void _z_param_zval_deref(zval *arg, zval **dest, int check_null)
{
 *dest = (check_null && __builtin_expect(!(!(zval_get_type(&(*(arg))) == 1)), 0)) ? ((void*)0) : arg;
}
# 29 "Zend/zend_compile.c" 2
# 1 "Zend/zend_exceptions.h" 1
# 29 "Zend/zend_exceptions.h"
__attribute__ ((visibility("default"))) void zend_exception_set_previous(zend_object *exception, zend_object *add_previous );
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

void zend_throw_exception_internal(zval *exception );

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);
__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) zend_object *zend_throw_exception(zend_class_entry *exception_ce, const char *message, long code );
__attribute__ ((visibility("default"))) zend_object *zend_throw_exception_ex(zend_class_entry *exception_ce, long code , const char *format, ...);
__attribute__ ((visibility("default"))) void zend_throw_exception_object(zval *exception );
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zend_object *zend_throw_error_exception(zend_class_entry *exception_ce, const char *message, long code, int severity );

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex );


__attribute__ ((visibility("default"))) void zend_exception_error(zend_object *exception, int severity );


int zend_spprintf(char **message, int max_len, const char *format, ...);
zend_string *zend_strpprintf(int max_len, const char *format, ...);
# 30 "Zend/zend_compile.c" 2
# 1 "Zend/zend_virtual_cwd.h" 1
# 27 "Zend/zend_virtual_cwd.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 1
# 13 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 14 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/param.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4




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
# 29 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 15 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ ));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ )) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ ));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ ));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ )) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ )) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ )) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ ));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ )) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ ));



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ )) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));






# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ ));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ ));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ ));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ ));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ ));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ ));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ ));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ ));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ ));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ ));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ )) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ ));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ )) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ )) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ ));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ ));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ )) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ )) ;






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ ));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ ));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ ));





extern int ttyslot (void) __attribute__ ((__nothrow__ ));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ ));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ ));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ ));
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ )) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ ));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ ));



extern char *getusershell (void) __attribute__ ((__nothrow__ ));
extern void endusershell (void) __attribute__ ((__nothrow__ ));
extern void setusershell (void) __attribute__ ((__nothrow__ ));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ )) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ ));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ ));





extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ )) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ ));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 2
# 28 "Zend/zend_virtual_cwd.h" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 105 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 228 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 253 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 276 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ ));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ ));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ ));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ ));
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4)));
# 432 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) stat (const char *__path, struct stat *__statbuf)
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) lstat (const char *__path, struct stat *__statbuf)
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) fstatat (int __fd, const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) mknod (const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) mknodat (int __fd, const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) stat64 (const char *__path, struct stat64 *__statbuf)
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) lstat64 (const char *__path, struct stat64 *__statbuf)
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) fstat64 (int __fd, struct stat64 *__statbuf)
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) fstatat64 (int __fd, const char *__filename, struct stat64 *__statbuf, int __flag)

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}
# 31 "Zend/zend_virtual_cwd.h" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum (int) __attribute__ ((__nothrow__ ));
extern int isalpha (int) __attribute__ ((__nothrow__ ));
extern int iscntrl (int) __attribute__ ((__nothrow__ ));
extern int isdigit (int) __attribute__ ((__nothrow__ ));
extern int islower (int) __attribute__ ((__nothrow__ ));
extern int isgraph (int) __attribute__ ((__nothrow__ ));
extern int isprint (int) __attribute__ ((__nothrow__ ));
extern int ispunct (int) __attribute__ ((__nothrow__ ));
extern int isspace (int) __attribute__ ((__nothrow__ ));
extern int isupper (int) __attribute__ ((__nothrow__ ));
extern int isxdigit (int) __attribute__ ((__nothrow__ ));



extern int tolower (int __c) __attribute__ ((__nothrow__ ));


extern int toupper (int __c) __attribute__ ((__nothrow__ ));
# 136 "/usr/include/ctype.h" 3 4
extern int isblank (int) __attribute__ ((__nothrow__ ));






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ ));






extern int isascii (int __c) __attribute__ ((__nothrow__ ));



extern int toascii (int __c) __attribute__ ((__nothrow__ ));



extern int _toupper (int) __attribute__ ((__nothrow__ ));
extern int _tolower (int) __attribute__ ((__nothrow__ ));
# 214 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ ));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ ));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
# 32 "Zend/zend_virtual_cwd.h" 2


# 1 "/usr/include/utime.h" 1 3 4
# 33 "/usr/include/utime.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 34 "/usr/include/utime.h" 2 3 4



struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 35 "Zend/zend_virtual_cwd.h" 2
# 90 "Zend/zend_virtual_cwd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 173 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 200 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 244 "/usr/include/dirent.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 245 "/usr/include/dirent.h" 2 3 4
# 254 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 277 "/usr/include/dirent.h" 3 4
extern int scandir64 (const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (const struct dirent64 *),
        int (*__cmp) (const struct dirent64 **,
        const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));
# 292 "/usr/include/dirent.h" 3 4
extern int scandirat (int __dfd, const char *__restrict __dir,
        struct dirent ***__restrict __namelist,
        int (*__selector) (const struct dirent *),
        int (*__cmp) (const struct dirent **,
        const struct dirent **))
     __attribute__ ((__nonnull__ (2, 3)));
# 314 "/usr/include/dirent.h" 3 4
extern int scandirat64 (int __dfd, const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (const struct dirent64 *),
   int (*__cmp) (const struct dirent64 **,
          const struct dirent64 **))
     __attribute__ ((__nonnull__ (2, 3)));




extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 339 "/usr/include/dirent.h" 3 4
extern int alphasort64 (const struct dirent64 **__e1,
   const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
# 369 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (const struct dirent **__e1,
   const struct dirent **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 395 "/usr/include/dirent.h" 3 4
extern int versionsort64 (const struct dirent64 **__e1,
     const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "Zend/zend_virtual_cwd.h" 2
# 145 "Zend/zend_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__ ((visibility("default"))) int virtual_cwd_activate(void);
__attribute__ ((visibility("default"))) int virtual_cwd_deactivate(void);
__attribute__ ((visibility("default"))) char *virtual_getcwd_ex(size_t *length );
__attribute__ ((visibility("default"))) char *virtual_getcwd(char *buf, size_t size );
__attribute__ ((visibility("default"))) int virtual_chdir(const char *path );
__attribute__ ((visibility("default"))) int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path ) );
__attribute__ ((visibility("default"))) int virtual_filepath(const char *path, char **filepath );
__attribute__ ((visibility("default"))) int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path );
__attribute__ ((visibility("default"))) char *virtual_realpath(const char *path, char *real_path );
__attribute__ ((visibility("default"))) FILE *virtual_fopen(const char *path, const char *mode );
__attribute__ ((visibility("default"))) int virtual_open(const char *path , int flags, ...);
__attribute__ ((visibility("default"))) int virtual_creat(const char *path, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rename(const char *oldname, const char *newname );
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path );
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname );
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname );
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type );
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode );
# 192 "Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 206 "Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath );

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 unsigned long key;
 char *path;
 int path_len;
 char *realpath;
 int realpath_len;
 int is_dir;
 time_t expires;






 struct _realpath_cache_bucket *next;
} realpath_cache_bucket;

typedef struct _virtual_cwd_globals {
 cwd_state cwd;
 long realpath_cache_size;
 long realpath_cache_size_limit;
 long realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len );
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t );
__attribute__ ((visibility("default"))) int realpath_cache_size(void);
__attribute__ ((visibility("default"))) int realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 31 "Zend/zend_compile.c" 2

# 1 "Zend/zend_language_scanner.h" 1
# 25 "Zend/zend_language_scanner.h"
typedef struct _zend_lex_state {
 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;
 zend_ptr_stack heredoc_label_stack;

 zend_file_handle *in;
 uint lineno;
 zend_string *filename;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;
} zend_lex_state;

typedef struct _zend_heredoc_label {
 char *label;
 int length;
} zend_heredoc_label;


int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);
__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state );
__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state );
__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename );
__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding );
# 33 "Zend/zend_compile.c" 2
# 63 "Zend/zend_compile.c"
static inline void zend_alloc_cache_slot(zend_uint literal ) {
 zend_op_array *op_array = (compiler_globals.active_op_array);
 (op_array->literals[literal]).u2.cache_slot = op_array->last_cache_slot++;
 if ((op_array->fn_flags & 0x10) && op_array->run_time_cache) {
  op_array->run_time_cache = _erealloc((op_array->run_time_cache), (op_array->last_cache_slot * sizeof(void*)), 0 );

  op_array->run_time_cache[(compiler_globals.active_op_array)->last_cache_slot - 1] = ((void*)0);
 }
}



static inline void zend_alloc_polymorphic_cache_slot(zend_uint literal ) {
 zend_op_array *op_array = (compiler_globals.active_op_array);
 (op_array->literals[literal]).u2.cache_slot = op_array->last_cache_slot;
 op_array->last_cache_slot += 2;
 if ((op_array->fn_flags & 0x10) && op_array->run_time_cache) {
  op_array->run_time_cache = _erealloc((op_array->run_time_cache), (op_array->last_cache_slot * sizeof(void *)), 0 );

  op_array->run_time_cache[op_array->last_cache_slot - 1] = ((void*)0);
  op_array->run_time_cache[op_array->last_cache_slot - 2] = ((void*)0);
 }
}

__attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );


__attribute__ ((visibility("default"))) zend_compiler_globals compiler_globals;
__attribute__ ((visibility("default"))) zend_executor_globals executor_globals;


static zend_property_info *zend_duplicate_property_info(zend_property_info *property_info )
{
 zend_property_info* new_property_info;

 new_property_info = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_property_info));
 memcpy(new_property_info, property_info, sizeof(zend_property_info));
 zend_str_addref(new_property_info->name);
 if (new_property_info->doc_comment) {
  zend_str_addref(new_property_info->doc_comment);
 }
 return new_property_info;
}


static zend_property_info *zend_duplicate_property_info_internal(zend_property_info *property_info)
{
 zend_property_info* new_property_info = ((1)?__zend_malloc(sizeof(zend_property_info)):_emalloc((sizeof(zend_property_info)) ));
 memcpy(new_property_info, property_info, sizeof(zend_property_info));
 zend_str_addref(new_property_info->name);
 return new_property_info;
}


static void zend_destroy_property_info(zval *zv)
{
 zend_property_info *property_info = (*(zv)).value.ptr;

 zend_str_release(property_info->name);
 if (property_info->doc_comment) {
  zend_str_release(property_info->doc_comment);
 }
}


static void zend_destroy_property_info_internal(zval *zv)
{
 zend_property_info *property_info = (*(zv)).value.ptr;

 zend_str_release(property_info->name);
 free(property_info);
}


static zend_string *zend_new_interned_string_safe(zend_string *str ) {
 zend_string *interned_str;

 zend_str_addref(str);
 interned_str = zend_new_interned_string(str );
 if (str != interned_str) {
  return interned_str;
 } else {
  zend_str_release(str);
  return str;
 }
}

static zend_string *zend_build_runtime_definition_key(
 zend_string *name, unsigned char *lex_pos
) {
 zend_string *result;
 char char_pos_buf[32];
 size_t char_pos_len = sprintf(char_pos_buf, "%p", lex_pos);

 const char *filename;
 if ((compiler_globals.active_op_array)->filename) {
  filename = (compiler_globals.active_op_array)->filename->val;
 } else {
  filename = "-";
 }


 result = zend_str_alloc(1 + name->len + strlen(filename) + char_pos_len, 0);

  result->val[0] = '\0';
  sprintf(result->val + 1, "%s%s%s", name->val, filename, char_pos_buf);
 return result;
}

static void init_compiler_declarables(void)
{
 { zval *__z = (&(compiler_globals.declarables).ticks); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; };
}


void zend_init_compiler_context(void)
{
 (compiler_globals.context).opcodes_size = ((compiler_globals.active_op_array)->fn_flags & 0x10) ? 8192 : 64;
 (compiler_globals.context).vars_size = 0;
 (compiler_globals.context).literals_size = 0;
 (compiler_globals.context).current_brk_cont = -1;
 (compiler_globals.context).backpatch_count = 0;
 (compiler_globals.context).in_finally = 0;
 (compiler_globals.context).labels = ((void*)0);
}


void zend_init_compiler_data_structures(void)
{
 zend_stack_init(&(compiler_globals.switch_cond_stack), sizeof(zend_switch_entry));
 zend_stack_init(&(compiler_globals.foreach_copy_stack), sizeof(zend_op));
 zend_stack_init(&(compiler_globals.delayed_oplines_stack), sizeof(zend_op));
 (compiler_globals.active_class_entry) = ((void*)0);
 (compiler_globals.in_compilation) = 0;
 (compiler_globals.start_lineno) = 0;
 (compiler_globals.current_namespace) = ((void*)0);
 (compiler_globals.in_namespace) = 0;
 (compiler_globals.has_bracketed_namespaces) = 0;
 (compiler_globals.current_import) = ((void*)0);
 (compiler_globals.current_import_function) = ((void*)0);
 (compiler_globals.current_import_const) = ((void*)0);
 _zend_hash_init((&(compiler_globals.const_filenames)), (8), (((void*)0)), (0) );
 init_compiler_declarables();
 zend_stack_init(&(compiler_globals.context_stack), sizeof((compiler_globals.context)));

 (compiler_globals.encoding_declared) = 0;
}


__attribute__ ((visibility("default"))) void file_handle_dtor(zend_file_handle *fh)
{
               ;

 zend_file_handle_dtor(fh );
}


void init_compiler(void)
{
 (compiler_globals.arena) = zend_arena_create(64 * 1024);
 (compiler_globals.active_op_array) = ((void*)0);
 memset(&(compiler_globals.context), 0, sizeof((compiler_globals.context)));
 zend_init_compiler_data_structures();
 zend_init_rsrc_list();
 _zend_hash_init((&(compiler_globals.filenames_table)), (8), (free_string_zval), (0) );
 zend_llist_init(&(compiler_globals.open_files), sizeof(zend_file_handle), (void (*)(void *)) file_handle_dtor, 0);
 (compiler_globals.unclean_shutdown) = 0;
}


void shutdown_compiler(void)
{
 zend_stack_destroy(&(compiler_globals.switch_cond_stack));
 zend_stack_destroy(&(compiler_globals.foreach_copy_stack));
 zend_stack_destroy(&(compiler_globals.delayed_oplines_stack));
 zend_hash_destroy(&(compiler_globals.filenames_table));
 zend_hash_destroy(&(compiler_globals.const_filenames));
 zend_stack_destroy(&(compiler_globals.context_stack));
 zend_arena_destroy((compiler_globals.arena));
}


__attribute__ ((visibility("default"))) zend_string *zend_set_compiled_filename(zend_string *new_compiled_filename )
{
 zend_string *p;

 p = zend_hash_find_ptr(&(compiler_globals.filenames_table), new_compiled_filename);
 if (p != ((void*)0)) {
  (compiler_globals.compiled_filename) = p;
  return p;
 }
 p = zend_str_copy(new_compiled_filename);
 zend_hash_update_ptr(&(compiler_globals.filenames_table), new_compiled_filename, p);
 (compiler_globals.compiled_filename) = p;
 return p;
}


__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(zend_string *original_compiled_filename )
{
 (compiler_globals.compiled_filename) = original_compiled_filename;
}


__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_filename(void)
{
 return (compiler_globals.compiled_filename);
}


__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void)
{
 return (compiler_globals.zend_lineno);
}


__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void)
{
 return (compiler_globals.in_compilation);
}


static zend_uint get_temporary_variable(zend_op_array *op_array)
{
 return (zend_uint)op_array->T++;
}


static int lookup_cv(zend_op_array *op_array, zend_string* name ) {
 int i = 0;
 ulong hash_value = zend_str_hash_val(name);

 while (i < op_array->last_var) {
  if (op_array->vars[i]->val == name->val ||
      (op_array->vars[i]->h == hash_value &&
       op_array->vars[i]->len == name->len &&
       memcmp(op_array->vars[i]->val, name->val, name->len) == 0)) {
   zend_str_release(name);
   return (int)(zend_intptr_t)(((zval*)(((void*)0))) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))));
  }
  i++;
 }
 i = op_array->last_var;
 op_array->last_var++;
 if (op_array->last_var > (compiler_globals.context).vars_size) {
  (compiler_globals.context).vars_size += 16;
  op_array->vars = _erealloc((op_array->vars), ((compiler_globals.context).vars_size * sizeof(zend_string*)), 0 );
 }

 op_array->vars[i] = zend_new_interned_string(name );
 return (int)(zend_intptr_t)(((zval*)(((void*)0))) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))));
}


void zend_del_literal(zend_op_array *op_array, int n)
{
 _zval_dtor((&(op_array)->literals[n]) );
 if (n + 1 == op_array->last_literal) {
  op_array->last_literal--;
 } else {
  do { (*(&(op_array)->literals[n])).u1.type_info = 0; } while (0);
 }
}



static inline void zend_insert_literal(zend_op_array *op_array, zval *zv, int literal_position )
{
 if (zval_get_type(&(*(zv))) == 6 || zval_get_type(&(*(zv))) == 11) {
  zend_str_hash_val((*(zv)).value.str);
  (*(zv)).value.str = zend_new_interned_string((*(zv)).value.str );
  if ((((zend_refcounted*)((*(zv)).value.str))->u.v.flags & (1<<1))) {
   (*(zv)).u1.v.type_flags &= ~ ((1<<1) | (1<<3));
  }
 }
 do { zval *_z1 = (&(op_array)->literals[literal_position]); zval *_z2 = (zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
 (op_array->literals[literal_position]).u2.cache_slot = -1;
}





int zend_add_literal(zend_op_array *op_array, zval *zv )
{
 int i = op_array->last_literal;
 op_array->last_literal++;
 if (i >= (compiler_globals.context).literals_size) {
  while (i >= (compiler_globals.context).literals_size) {
   (compiler_globals.context).literals_size += 16;
  }
  op_array->literals = (zval*)_erealloc((op_array->literals), ((compiler_globals.context).literals_size * sizeof(zval)), 0 );
 }
 zend_insert_literal(op_array, zv, i );
 return i;
}


static int zend_add_func_name_literal(zend_op_array *op_array, zval *zv )
{
 int ret;
 zend_string *lc_name;
 zval c;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1] == zv &&
     (op_array->literals[op_array->last_literal - 1]).u2.cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }

 lc_name = zend_str_alloc((*(zv)).value.str->len, 0);
 zend_str_tolower_copy(lc_name->val, (*(zv)).value.str->val, (*(zv)).value.str->len);
 do { zval *__z = (&c); zend_string *__s = (lc_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 zend_add_literal((compiler_globals.active_op_array), &c );

 return ret;
}


static int zend_add_ns_func_name_literal(zend_op_array *op_array, zval *zv )
{
 int ret;
 zend_string *lc_name;
 const char *ns_separator;
 int lc_len;
 zval c;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1] == zv &&
     (op_array->literals[op_array->last_literal - 1]).u2.cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }

 lc_name = zend_str_alloc((*(zv)).value.str->len, 0);
 zend_str_tolower_copy(lc_name->val, (*(zv)).value.str->val, (*(zv)).value.str->len);
 do { zval *__z = (&c); zend_string *__s = (lc_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 zend_add_literal((compiler_globals.active_op_array), &c );

 ns_separator = (const char*)zend_memrchr((*(zv)).value.str->val, '\\', (*(zv)).value.str->len);

 if (ns_separator != ((void*)0)) {
  ns_separator += 1;
  lc_len = (*(zv)).value.str->len - (ns_separator - (*(zv)).value.str->val);
  lc_name = zend_str_alloc(lc_len, 0);
  zend_str_tolower_copy(lc_name->val, ns_separator, lc_len);
  do { zval *__z = (&c); zend_string *__s = (lc_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
  zend_add_literal((compiler_globals.active_op_array), &c );
 }

 return ret;
}


static int zend_add_class_name_literal(zend_op_array *op_array, zend_string *name ) {
 int ret;
 zend_string *lc_name;

 zval zv;
 do { zval *__z = (&zv); zend_string *__s = (name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);

 ret = zend_add_literal(op_array, &zv );

 lc_name = zend_str_alloc(name->len, 0);
 zend_str_tolower_copy(lc_name->val, name->val, name->len);

 do { zval *__z = (&zv); zend_string *__s = (lc_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 zend_add_literal((compiler_globals.active_op_array), &zv );

 zend_alloc_cache_slot(ret );

 return ret;
}


static int zend_add_const_name_literal(zend_op_array *op_array, zval *zv, int unqualified )
{
 int ret;
 char *name;
 zend_string *tmp_name;
 const char *ns_separator;
 int name_len, ns_len;
 zval c;

 if (op_array->last_literal > 0 &&
     &op_array->literals[op_array->last_literal - 1] == zv &&
     (op_array->literals[op_array->last_literal - 1]).u2.cache_slot == -1) {

  ret = op_array->last_literal - 1;
 } else {
  ret = zend_add_literal(op_array, zv );
 }


 if ((*(zv)).value.str->val[0] == '\\') {
  name_len = (*(zv)).value.str->len - 1;
  name = (*(zv)).value.str->val + 1;
 } else {
  name_len = (*(zv)).value.str->len;
  name = (*(zv)).value.str->val;
 }
 ns_separator = zend_memrchr(name, '\\', name_len);
 if (ns_separator) {
  ns_len = ns_separator - name;
 } else {
  ns_len = 0;
 }

 if (ns_len) {

  tmp_name = zend_str_init(name, name_len, 0);
  zend_str_tolower(tmp_name->val, ns_len);
  do { zval *__z = (&c); zend_string *__s = (tmp_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
  zend_add_literal((compiler_globals.active_op_array), &c );


  tmp_name = zend_str_alloc(name_len, 0);
  zend_str_tolower_copy(tmp_name->val, name, name_len);
  do { zval *__z = (&c); zend_string *__s = (tmp_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
  zend_add_literal((compiler_globals.active_op_array), &c );
 }

 if (ns_len) {
  if (!unqualified) {
   return ret;
  }
  ns_len++;
  name += ns_len;
  name_len -= ns_len;
 }


 tmp_name = zend_str_init(name, name_len, 0);
 do { zval *__z = (&c); zend_string *__s = (tmp_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 zend_add_literal((compiler_globals.active_op_array), &c );


 tmp_name = zend_str_alloc(name_len, 0);
 zend_str_tolower_copy(tmp_name->val, name, name_len);
 do { zval *__z = (&c); zend_string *__s = (tmp_name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 zend_add_literal((compiler_globals.active_op_array), &c );

 return ret;
}
# 529 "Zend/zend_compile.c"
void zend_stop_lexing(void) {
 (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_limit);
}

static inline void zend_begin_loop(void)
{
 zend_brk_cont_element *brk_cont_element;
 int parent;

 parent = (compiler_globals.context).current_brk_cont;
 (compiler_globals.context).current_brk_cont = (compiler_globals.active_op_array)->last_brk_cont;
 brk_cont_element = get_next_brk_cont_element((compiler_globals.active_op_array));
 brk_cont_element->start = get_next_op_number((compiler_globals.active_op_array));
 brk_cont_element->parent = parent;
}


static inline void zend_end_loop(int cont_addr, int has_loop_var )
{
 if (!has_loop_var) {



  (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].start = -1;
 }
 (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].cont = cont_addr;
 (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].brk = get_next_op_number((compiler_globals.active_op_array));
 (compiler_globals.context).current_brk_cont = (compiler_globals.active_op_array)->brk_cont_array[(compiler_globals.context).current_brk_cont].parent;
}


void zend_do_free(znode *op1 )
{
 if (op1->op_type==(1<<1)) {
  zend_op *opline = get_next_op((compiler_globals.active_op_array) );

  opline->opcode = 70;
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
  opline->op2_type = (1<<3);
 } else if (op1->op_type==(1<<2)) {
  zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];

  while (opline->opcode == 58 || opline->opcode == 103 || opline->opcode == 137) {
   opline--;
  }
  if (opline->result_type == (1<<2)
   && opline->result.var == op1->u.op.var) {
   if (opline->opcode == 80 ||
       opline->opcode == 81 ||
       opline->opcode == 82 ||
       opline->opcode == 157) {



    opline = get_next_op((compiler_globals.active_op_array) );
    opline->opcode = 70;
    do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
    opline->op2_type = (1<<3);
   } else {
    opline->result_type |= (1<<5);
   }
  } else {
   while (opline>(compiler_globals.active_op_array)->opcodes) {
    if (opline->opcode == 81
        && opline->op1_type == (1<<2)
        && opline->op1.var == op1->u.op.var) {



     opline->extended_value = 0x00000000;
     break;
    } else if (opline->result_type==(1<<2)
     && opline->result.var == op1->u.op.var) {
     if (opline->opcode == 68) {
      opline->result_type |= (1<<5);
      opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];
      while (opline->opcode != 60 || opline->op1.num != (1 << 0)) {
       opline--;
      }
      opline->op1.num |= (1 << 1);
     }
     break;
    }
    opline--;
   }
  }
 } else if (op1->op_type == (1<<0)) {



  zval *zv = &op1->u.constant;
  if ((((*(zv)).u1.v.type_flags & (1<<1)) != 0) && !zval_delref_p(zv)) {
   _zval_dtor_func_for_ptr((*(zv)).value.counted );
  }
 }
}


zend_uint zend_add_member_modifier(zend_uint flags, zend_uint new_flag) {
 zend_uint new_flags = flags | new_flag;
 if ((flags & (0x100 | 0x200 | 0x400)) && (new_flag & (0x100 | 0x200 | 0x400))) {
  zend_error_noreturn((1<<6L), "Multiple access type modifiers are not allowed");
 }
 if ((flags & 0x02) && (new_flag & 0x02)) {
  zend_error_noreturn((1<<6L), "Multiple abstract modifiers are not allowed");
 }
 if ((flags & 0x01) && (new_flag & 0x01)) {
  zend_error_noreturn((1<<6L), "Multiple static modifiers are not allowed");
 }
 if ((flags & 0x04) && (new_flag & 0x04)) {
  zend_error_noreturn((1<<6L), "Multiple final modifiers are not allowed");
 }
 if ((new_flags & 0x02) && (new_flags & 0x04)) {
  zend_error_noreturn((1<<6L), "Cannot use the final modifier on an abstract class member");
 }
 return new_flags;
}

zend_string *zend_concat3(
 char *str1, size_t str1_len, char *str2, size_t str2_len, char *str3, size_t str3_len
) {
 size_t len = str1_len + str2_len + str3_len;
 zend_string *res = zend_str_alloc(len, 0);

 memcpy(res->val, str1, str1_len);
 memcpy(res->val + str1_len, str2, str2_len);
 memcpy(res->val + str1_len + str2_len, str3, str3_len);
 res->val[len] = '\0';

 return res;
}

zend_string *zend_concat_names(char *name1, size_t name1_len, char *name2, size_t name2_len) {
 return zend_concat3(name1, name1_len, "\\", 1, name2, name2_len);
}

zend_string *zend_prefix_with_ns(zend_string *name ) {
 if ((compiler_globals.current_namespace)) {
  zend_string *ns = (compiler_globals.current_namespace);
  return zend_concat_names(ns->val, ns->len, name->val, name->len);
 } else {
  return zend_str_copy(name);
 }
}

void *zend_hash_find_ptr_lc(HashTable *ht, char *str, size_t len) {
 void *result;
 zend_string *lcname = zend_str_alloc(len, 0);
 zend_str_tolower_copy(lcname->val, str, len);
 result = zend_hash_find_ptr(ht, lcname);
 zend_str_free(lcname);
 return result;
}

zend_string *zend_resolve_non_class_name(
 zend_string *name, zend_uint type, zend_bool *is_fully_qualified,
 zend_bool case_sensitive, HashTable *current_import_sub
) {
 char *compound;
 *is_fully_qualified = 0;

 if (name->val[0] == '\\') {

  return zend_str_init(name->val + 1, name->len - 1, 0);
 }

 if (type == 0) {
  *is_fully_qualified = 1;
  return zend_str_copy(name);
 }

 if (type == 2) {
  *is_fully_qualified = 1;
  return zend_prefix_with_ns(name );
 }

 if (current_import_sub) {

  zend_string *import_name;
  if (case_sensitive) {
   import_name = zend_hash_find_ptr(current_import_sub, name);
  } else {
   import_name = zend_hash_find_ptr_lc(current_import_sub, name->val, name->len);
  }

  if (import_name) {
   *is_fully_qualified = 1;
   return zend_str_copy(import_name);
  }
 }

 compound = memchr(name->val, '\\', name->len);
 if (compound) {
  *is_fully_qualified = 1;
 }

 if (compound && (compiler_globals.current_import)) {

  size_t len = compound - name->val;
  zend_string *import_name = zend_hash_find_ptr_lc((compiler_globals.current_import), name->val, len);

  if (import_name) {
   return zend_concat_names(
    import_name->val, import_name->len, name->val + len + 1, name->len - len - 1);
  }
 }

 return zend_prefix_with_ns(name );
}


zend_string *zend_resolve_function_name(
 zend_string *name, zend_uint type, zend_bool *is_fully_qualified
) {
 return zend_resolve_non_class_name(
  name, type, is_fully_qualified, 0, (compiler_globals.current_import_function) );
}

zend_string *zend_resolve_const_name(
 zend_string *name, zend_uint type, zend_bool *is_fully_qualified
) {
 return zend_resolve_non_class_name(
  name, type, is_fully_qualified, 1, (compiler_globals.current_import_const) );
}

zend_string *zend_resolve_class_name(
 zend_string *name, zend_uint type
) {
 char *compound;

 if (type == 2) {
  return zend_prefix_with_ns(name );
 }

 if (type == 0 || name->val[0] == '\\') {

  if (name->val[0] == '\\') {
   name = zend_str_init(name->val + 1, name->len - 1, 0);
  } else {
   zend_str_addref(name);
  }

  if (0 != zend_get_class_fetch_type(name)) {
   zend_error_noreturn((1<<6L), "'\\%s' is an invalid class name", name->val);
  }
  return name;
 }

 if ((compiler_globals.current_import)) {
  compound = memchr(name->val, '\\', name->len);
  if (compound) {

   size_t len = compound - name->val;
   zend_string *import_name = zend_hash_find_ptr_lc((compiler_globals.current_import), name->val, len);

   if (import_name) {
    return zend_concat_names(
     import_name->val, import_name->len, name->val + len + 1, name->len - len - 1);
   }
  } else {

   zend_string *import_name
    = zend_hash_find_ptr_lc((compiler_globals.current_import), name->val, name->len);

   if (import_name) {
    return zend_str_copy(import_name);
   }
  }
 }


 return zend_prefix_with_ns(name );
}

zend_string *zend_resolve_class_name_ast(zend_ast *ast ) {
 zend_string *name = zend_ast_get_str(ast);
 return zend_resolve_class_name(name, ast->attr );
}

static void ptr_dtor(zval *zv)
{
 _efree(((*(zv)).value.ptr) );
}


static void str_dtor(zval *zv) {
 zend_str_release((*(zv)).value.str);
}

void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 )
{
 zend_label *dest;
 long current, distance;
 zval *label;

 if (pass2) {
  label = opline->op2.zv;
 } else {
  label = &(op_array)->literals[opline->op2.constant];
 }
 if ((compiler_globals.context).labels == ((void*)0) ||
     (dest = zend_hash_find_ptr((compiler_globals.context).labels, (*(label)).value.str)) == ((void*)0)) {

  if (pass2) {
   (compiler_globals.in_compilation) = 1;
   (compiler_globals.active_op_array) = op_array;
   (compiler_globals.zend_lineno) = opline->lineno;
   zend_error_noreturn((1<<6L), "'goto' to undefined label '%s'", (*(label)).value.str->val);
  } else {

   if (op_array->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count++); };
   return;
  }
 }

 opline->op1.opline_num = dest->opline_num;
 _zval_dtor((label) );
 do { (*(label)).u1.type_info = 1; } while (0);


 current = opline->extended_value;
 for (distance = 0; current != dest->brk_cont; distance++) {
  if (current == -1) {
   if (pass2) {
    (compiler_globals.in_compilation) = 1;
    (compiler_globals.active_op_array) = op_array;
    (compiler_globals.zend_lineno) = opline->lineno;
   }
   zend_error_noreturn((1<<6L), "'goto' into loop or switch statement is disallowed");
  }
  current = op_array->brk_cont_array[current].parent;
 }

 if (distance == 0) {

  opline->opcode = 42;
  opline->extended_value = 0;
  opline->op2_type = (1<<3);
 } else {

  { zval *__z = (label); (*(__z)).value.lval = distance; (*(__z)).u1.type_info = 4; };
 }

 if (pass2) {
  if (op_array->fn_flags & 0x10) { ((compiler_globals.context).backpatch_count--); };
 }
}


void zend_release_labels(int temporary )
{
 if ((compiler_globals.context).labels) {
  zend_hash_destroy((compiler_globals.context).labels);
  _efree(((compiler_globals.context).labels) );
  (compiler_globals.context).labels = ((void*)0);
 }
 if (!temporary && !zend_stack_is_empty(&(compiler_globals.context_stack))) {
  zend_compiler_context *ctx = zend_stack_top(&(compiler_globals.context_stack));
  (compiler_globals.context) = *ctx;
  zend_stack_del_top(&(compiler_globals.context_stack));
 }
}


static zend_bool zend_is_call(zend_ast *ast);

static int generate_free_switch_expr(zend_switch_entry *switch_entry )
{
 zend_op *opline;

 if (switch_entry->cond.op_type != (1<<2) && switch_entry->cond.op_type != (1<<1)) {
  return (switch_entry->cond.op_type == (1<<3));
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = (switch_entry->cond.op_type == (1<<1)) ? 70 : 49;
 do { opline->op1_type = (&switch_entry->cond)->op_type; if ((&switch_entry->cond)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&switch_entry->cond)->u.constant ); } else { opline->op1 = (&switch_entry->cond)->u.op; } } while (0);
 opline->op2_type = (1<<3);

 return 0;
}


static int generate_free_foreach_copy(const zend_op *foreach_copy )
{
 zend_op *opline;


 if (foreach_copy->result_type == (1<<3)) {
  return 1;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = (foreach_copy->result_type == (1<<1)) ? 70 : 49;
 do { opline->op1_type = foreach_copy->result_type; opline->op1 = foreach_copy->result; } while (0);
 opline->op2_type = (1<<3);

 return 0;
}


static zend_uint zend_add_try_element(zend_uint try_op )
{
 zend_op_array *op_array = (compiler_globals.active_op_array);
 zend_uint try_catch_offset = op_array->last_try_catch++;
 zend_try_catch_element *elem;

 op_array->try_catch_array = _safe_erealloc((op_array->try_catch_array), (sizeof(zend_try_catch_element)), (op_array->last_try_catch), (0) );


 elem = &op_array->try_catch_array[try_catch_offset];
 elem->try_op = try_op;
 elem->catch_op = 0;
 elem->finally_op = 0;
 elem->finally_end = 0;

 return try_catch_offset;
}


__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function)
{
 if (function->type == 2) {
  zend_op_array *op_array = &function->op_array;

  (*op_array->refcount)++;
  if (op_array->static_variables) {
   HashTable *static_variables = op_array->static_variables;

   (op_array->static_variables) = (HashTable *) _emalloc((sizeof(HashTable)) );
   zend_array_dup(op_array->static_variables, static_variables);
  }
  op_array->run_time_cache = ((void*)0);
 } else if (function->type == 1) {
  if (function->common.function_name) {
   zend_str_addref(function->common.function_name);
  }
 }
}


static void do_inherit_parent_constructor(zend_class_entry *ce )
{
 zend_function *function, *new_function;

 if (!ce->parent) {
  return;
 }


 ce->create_object = ce->parent->create_object;


 if (!ce->get_iterator) {
  ce->get_iterator = ce->parent->get_iterator;
 }
 if (!ce->iterator_funcs.funcs) {
  ce->iterator_funcs.funcs = ce->parent->iterator_funcs.funcs;
 }
 if (!ce->__get) {
  ce->__get = ce->parent->__get;
 }
 if (!ce->__set) {
  ce->__set = ce->parent->__set;
 }
 if (!ce->__unset) {
  ce->__unset = ce->parent->__unset;
 }
 if (!ce->__isset) {
  ce->__isset = ce->parent->__isset;
 }
 if (!ce->__call) {
  ce->__call = ce->parent->__call;
 }
 if (!ce->__callstatic) {
  ce->__callstatic = ce->parent->__callstatic;
 }
 if (!ce->__tostring) {
  ce->__tostring = ce->parent->__tostring;
 }
 if (!ce->clone) {
  ce->clone = ce->parent->clone;
 }
 if(!ce->serialize) {
  ce->serialize = ce->parent->serialize;
 }
 if(!ce->unserialize) {
  ce->unserialize = ce->parent->unserialize;
 }
 if (!ce->destructor) {
  ce->destructor = ce->parent->destructor;
 }
 if (!ce->__debugInfo) {
  ce->__debugInfo = ce->parent->__debugInfo;
 }
 if (ce->constructor) {
  if (ce->parent->constructor && ce->parent->constructor->common.fn_flags & 0x04) {
   zend_error((1<<0L), "Cannot override final %s::%s() with %s::%s()",
    ce->parent->name->val, ce->parent->constructor->common.function_name->val,
    ce->name->val, ce->constructor->common.function_name->val
    );
  }
  return;
 }

 if ((function = zend_hash_str_find_ptr(&ce->parent->function_table, "__construct", sizeof("__construct")-1)) != ((void*)0)) {

  if (function->type == 1) {
   new_function = ((1)?__zend_malloc(sizeof(zend_internal_function)):_emalloc((sizeof(zend_internal_function)) ));
   memcpy(new_function, function, sizeof(zend_internal_function));
  } else {
   new_function = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));
   memcpy(new_function, function, sizeof(zend_op_array));
  }
  zend_hash_str_update_ptr(&ce->function_table, "__construct", sizeof("__construct")-1, new_function);
  function_add_ref(new_function);
 } else {

  zend_string *lc_class_name;
  zend_string *lc_parent_class_name;

  lc_class_name = zend_str_alloc(ce->name->len, 0);
  zend_str_tolower_copy(lc_class_name->val, ce->name->val, ce->name->len);
  if (!zend_hash_exists(&ce->function_table, lc_class_name)) {
   lc_parent_class_name = zend_str_alloc(ce->parent->name->len, 0);
   zend_str_tolower_copy(lc_parent_class_name->val, ce->parent->name->val, ce->parent->name->len);
   if (!zend_hash_exists(&ce->function_table, lc_parent_class_name) &&
     (function = zend_hash_find_ptr(&ce->parent->function_table, lc_parent_class_name)) != ((void*)0)) {
    if (function->common.fn_flags & 0x2000) {

     new_function = ((function->type == 1)?__zend_malloc(sizeof(zend_function)):_emalloc((sizeof(zend_function)) ));
     memcpy(new_function, function, sizeof(zend_function));
     zend_hash_update_ptr(&ce->function_table, lc_parent_class_name, new_function);
     function_add_ref(new_function);
    }
   }
   zend_str_release(lc_parent_class_name);
  }
  zend_str_free(lc_class_name);
 }
 ce->constructor = ce->parent->constructor;
}


char *zend_visibility_string(zend_uint fn_flags)
{
 if (fn_flags & 0x400) {
  return "private";
 }
 if (fn_flags & 0x200) {
  return "protected";
 }
 if (fn_flags & 0x100) {
  return "public";
 }
 return "";
}


static zend_function *do_inherit_method(zend_function *old_function )
{
 zend_function *new_function;

 if (old_function->type == 1) {
  new_function = ((1)?__zend_malloc(sizeof(zend_internal_function)):_emalloc((sizeof(zend_internal_function)) ));
  memcpy(new_function, old_function, sizeof(zend_internal_function));
 } else {
  new_function = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));
  memcpy(new_function, old_function, sizeof(zend_op_array));
 }




 function_add_ref(new_function);
 return new_function;
}


static zend_bool zend_do_perform_implementation_check(const zend_function *fe, const zend_function *proto )
{
 zend_uint i, num_args;





 if (!proto || (!proto->common.arg_info && proto->common.type != 2)) {
  return 1;
 }




 if ((fe->common.fn_flags & 0x2000)
  && ((proto->common.scope->ce_flags & 0x80) == 0
   && (proto->common.fn_flags & 0x02) == 0)) {
  return 1;
 }


    if ((fe->common.fn_flags & 0x400) && (proto->common.fn_flags & 0x400)) {
  return 1;
 }


 if (proto->common.required_num_args < fe->common.required_num_args
  || proto->common.num_args > fe->common.num_args) {
  return 0;
 }


 if ((proto->common.fn_flags & 0x4000000)
  && !(fe->common.fn_flags & 0x4000000)) {
  return 0;
 }

 if ((proto->common.fn_flags & 0x1000000)
  && !(fe->common.fn_flags & 0x1000000)) {
  return 0;
 }





 num_args = proto->common.num_args;
 if ((fe->common.fn_flags & 0x1000000)
  && fe->common.num_args > proto->common.num_args) {
  num_args = fe->common.num_args;
 }

 for (i = 0; i < num_args; i++) {
  zend_arg_info *fe_arg_info = &fe->common.arg_info[i];

  zend_arg_info *proto_arg_info;
  if (i < proto->common.num_args) {
   proto_arg_info = &proto->common.arg_info[i];
  } else {
   proto_arg_info = &proto->common.arg_info[proto->common.num_args-1];
  }

  if ((((fe_arg_info->class_name) ? 1 : 0) ^ ((proto_arg_info->class_name) ? 1 : 0))) {

   return 0;
  }

  if (fe_arg_info->class_name) {
   zend_string *fe_class_name, *proto_class_name;

   if (!strcasecmp(fe_arg_info->class_name, "parent") && proto->common.scope) {
    fe_class_name = zend_str_copy(proto->common.scope->name);
   } else if (!strcasecmp(fe_arg_info->class_name, "self") && fe->common.scope) {
    fe_class_name = zend_str_copy(fe->common.scope->name);
   } else {
    fe_class_name = zend_str_init(fe_arg_info->class_name, fe_arg_info->class_name_len, 0);


   }

   if (!strcasecmp(proto_arg_info->class_name, "parent") && proto->common.scope && proto->common.scope->parent) {
    proto_class_name = zend_str_copy(proto->common.scope->parent->name);
   } else if (!strcasecmp(proto_arg_info->class_name, "self") && proto->common.scope) {
    proto_class_name = zend_str_copy(proto->common.scope->name);
   } else {
    proto_class_name = zend_str_init(proto_arg_info->class_name, proto_arg_info->class_name_len, 0);


   }

   if (strcasecmp(fe_class_name->val, proto_class_name->val)!=0) {
    const char *colon;

    if (fe->common.type != 2) {
     zend_str_release(proto_class_name);
     zend_str_release(fe_class_name);
     return 0;
       } else if ((__extension__ (__builtin_constant_p ('\\') && !__builtin_constant_p (proto_class_name->val) && ('\\') == '\0' ? (char *) __rawmemchr (proto_class_name->val, '\\') : __builtin_strchr (proto_class_name->val, '\\'))) != ((void*)0) ||
      (colon = zend_memrchr(fe_class_name->val, '\\', fe_class_name->len)) == ((void*)0) ||
      strcasecmp(colon+1, proto_class_name->val) != 0) {
     zend_class_entry *fe_ce, *proto_ce;

     fe_ce = zend_lookup_class(fe_class_name );
     proto_ce = zend_lookup_class(proto_class_name );


     if (!fe_ce || !proto_ce ||
       fe_ce->type == 1 ||
       proto_ce->type == 1 ||
       fe_ce != proto_ce) {
      zend_str_release(proto_class_name);
      zend_str_release(fe_class_name);
      return 0;
     }
    }
   }
   zend_str_release(proto_class_name);
   zend_str_release(fe_class_name);
  }
  if (fe_arg_info->type_hint != proto_arg_info->type_hint) {

   return 0;
  }


  if (fe_arg_info->pass_by_reference != proto_arg_info->pass_by_reference) {
   return 0;
  }
 }

 return 1;
}
# 1251 "Zend/zend_compile.c"
static char *zend_get_function_declaration(zend_function *fptr )
{
 char *offset, *buf;
 zend_uint length = 1024;

 offset = buf = (char *)_emalloc((length * sizeof(char)) );
 if (fptr->op_array.fn_flags & 0x4000000) {
  *(offset++) = '&';
  *(offset++) = ' ';
 }

 if (fptr->common.scope) {
  memcpy(offset, fptr->common.scope->name->val, fptr->common.scope->name->len);
  offset += fptr->common.scope->name->len;
  *(offset++) = ':';
  *(offset++) = ':';
 }

 {
  size_t name_len = fptr->common.function_name->len;
  if (__builtin_expect(!(!(offset - buf + name_len >= length)), 0)) { length += name_len + 1; buf = _erealloc((buf), (length), 0 ); };
  memcpy(offset, fptr->common.function_name->val, name_len);
  offset += name_len;
 }

 *(offset++) = '(';
 if (fptr->common.arg_info) {
  zend_uint i, required;
  zend_arg_info *arg_info = fptr->common.arg_info;

  required = fptr->common.required_num_args;
  for (i = 0; i < fptr->common.num_args;) {
   if (arg_info->class_name) {
    const char *class_name;
    zend_uint class_name_len;
    if (!strcasecmp(arg_info->class_name, "self") && fptr->common.scope ) {
     class_name = fptr->common.scope->name->val;
     class_name_len = fptr->common.scope->name->len;
    } else if (!strcasecmp(arg_info->class_name, "parent") && fptr->common.scope->parent) {
     class_name = fptr->common.scope->parent->name->val;
     class_name_len = fptr->common.scope->parent->name->len;
    } else {
     class_name = arg_info->class_name;
     class_name_len = arg_info->class_name_len;
    }
    if (__builtin_expect(!(!(offset - buf + class_name_len >= length)), 0)) { length += class_name_len + 1; buf = _erealloc((buf), (length), 0 ); };
    memcpy(offset, class_name, class_name_len);
    offset += class_name_len;
    *(offset++) = ' ';
   } else if (arg_info->type_hint) {
    zend_uint type_name_len;
    char *type_name = zend_get_type_by_const(arg_info->type_hint);
    type_name_len = strlen(type_name);
    if (__builtin_expect(!(!(offset - buf + type_name_len >= length)), 0)) { length += type_name_len + 1; buf = _erealloc((buf), (length), 0 ); };
    memcpy(offset, type_name, type_name_len);
    offset += type_name_len;
    *(offset++) = ' ';
   }

   if (arg_info->pass_by_reference) {
    *(offset++) = '&';
   }

   if (arg_info->is_variadic) {
    *(offset++) = '.';
    *(offset++) = '.';
    *(offset++) = '.';
   }

   *(offset++) = '$';

   if (arg_info->name) {
    if (__builtin_expect(!(!(offset - buf + arg_info->name_len >= length)), 0)) { length += arg_info->name_len + 1; buf = _erealloc((buf), (length), 0 ); };
    memcpy(offset, arg_info->name, arg_info->name_len);
    offset += arg_info->name_len;
   } else {
    zend_uint idx = i;
    memcpy(offset, "param", 5);
    offset += 5;
    do {
     *(offset++) = (char) (idx % 10) + '0';
     idx /= 10;
    } while (idx > 0);
   }
   if (i >= required && !arg_info->is_variadic) {
    *(offset++) = ' ';
    *(offset++) = '=';
    *(offset++) = ' ';
    if (fptr->type == 2) {
     zend_op *precv = ((void*)0);
     {
      zend_uint idx = i;
      zend_op *op = ((zend_op_array *)fptr)->opcodes;
      zend_op *end = op + ((zend_op_array *)fptr)->last;

      ++idx;
      while (op < end) {
       if ((op->opcode == 63 || op->opcode == 64)
         && op->op1.num == (long)idx)
       {
        precv = op;
       }
       ++op;
      }
     }
     if (precv && precv->opcode == 64 && precv->op2_type != (1<<3)) {
      zval *zv = precv->op2.zv;

      if (zval_get_type(&(*(zv))) == 11) {
       if (__builtin_expect(!(!(offset - buf + (*(zv)).value.str->len >= length)), 0)) { length += (*(zv)).value.str->len + 1; buf = _erealloc((buf), (length), 0 ); };
       memcpy(offset, (*(zv)).value.str->val, (*(zv)).value.str->len);
       offset += (*(zv)).value.str->len;
      } else if (zval_get_type(&(*(zv))) == 2) {
       memcpy(offset, "false", 5);
       offset += 5;
      } else if (zval_get_type(&(*(zv))) == 3) {
       memcpy(offset, "true", 4);
       offset += 4;
      } else if (zval_get_type(&(*(zv))) == 1) {
       memcpy(offset, "NULL", 4);
       offset += 4;
      } else if (zval_get_type(&(*(zv))) == 6) {
       *(offset++) = '\'';
       if (__builtin_expect(!(!(offset - buf + ((((*(zv)).value.str->len)<(10))?((*(zv)).value.str->len):(10)) >= length)), 0)) { length += ((((*(zv)).value.str->len)<(10))?((*(zv)).value.str->len):(10)) + 1; buf = _erealloc((buf), (length), 0 ); };
       memcpy(offset, (*(zv)).value.str->val, ((((*(zv)).value.str->len)<(10))?((*(zv)).value.str->len):(10)));
       offset += ((((*(zv)).value.str->len)<(10))?((*(zv)).value.str->len):(10));
       if ((*(zv)).value.str->len > 10) {
        *(offset++) = '.';
        *(offset++) = '.';
        *(offset++) = '.';
       }
       *(offset++) = '\'';
      } else if (zval_get_type(&(*(zv))) == 7) {
       memcpy(offset, "Array", 5);
       offset += 5;
      } else if (zval_get_type(&(*(zv))) == 12) {
       memcpy(offset, "<expression>", 12);
       offset += 12;
      } else {
       zend_string *str = _zval_get_string((zv) );
       if (__builtin_expect(!(!(offset - buf + str->len >= length)), 0)) { length += str->len + 1; buf = _erealloc((buf), (length), 0 ); };
       memcpy(offset, str->val, str->len);
       offset += str->len;
       zend_str_release(str);
      }
     }
    } else {
     memcpy(offset, "NULL", 4);
     offset += 4;
    }
   }

   if (++i < fptr->common.num_args) {
    *(offset++) = ',';
    *(offset++) = ' ';
   }
   arg_info++;
   if (__builtin_expect(!(!(offset - buf + 32 >= length)), 0)) { length += 32 + 1; buf = _erealloc((buf), (length), 0 ); };
  }
 }
 *(offset++) = ')';
 *offset = '\0';

 return buf;
}


static void do_inheritance_check_on_method(zend_function *child, zend_function *parent )
{
 zend_uint child_flags;
 zend_uint parent_flags = parent->common.fn_flags;

 if ((parent->common.scope->ce_flags & 0x80) == 0
  && parent->common.fn_flags & 0x02
  && parent->common.scope != (child->common.prototype ? child->common.prototype->common.scope : child->common.scope)
  && child->common.fn_flags & (0x02|0x08)) {
  zend_error_noreturn((1<<6L), "Can't inherit abstract function %s::%s() (previously declared abstract in %s)",
   parent->common.scope->name->val,
   child->common.function_name->val,
   child->common.prototype ? child->common.prototype->common.scope->name->val : child->common.scope->name->val);
 }

 if (parent_flags & 0x04) {
  zend_error_noreturn((1<<6L), "Cannot override final method %s::%s()", ((parent) && (parent)->common.scope ? (parent)->common.scope->name->val : ""), child->common.function_name->val);
 }

 child_flags = child->common.fn_flags;


 if ((child_flags & 0x01) != (parent_flags & 0x01)) {
  if (child->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Cannot make non static method %s::%s() static in class %s", ((parent) && (parent)->common.scope ? (parent)->common.scope->name->val : ""), child->common.function_name->val, ((child) && (child)->common.scope ? (child)->common.scope->name->val : ""));
  } else {
   zend_error_noreturn((1<<6L), "Cannot make static method %s::%s() non static in class %s", ((parent) && (parent)->common.scope ? (parent)->common.scope->name->val : ""), child->common.function_name->val, ((child) && (child)->common.scope ? (child)->common.scope->name->val : ""));
  }
 }


 if ((child_flags & 0x02) && !(parent_flags & 0x02)) {
  zend_error_noreturn((1<<6L), "Cannot make non abstract method %s::%s() abstract in class %s", ((parent) && (parent)->common.scope ? (parent)->common.scope->name->val : ""), child->common.function_name->val, ((child) && (child)->common.scope ? (child)->common.scope->name->val : ""));
 }

 if (parent_flags & 0x800) {
  child->common.fn_flags |= 0x800;
 } else {


  if ((child_flags & (0x100 | 0x200 | 0x400)) > (parent_flags & (0x100 | 0x200 | 0x400))) {
   zend_error_noreturn((1<<6L), "Access level to %s::%s() must be %s (as in class %s)%s", ((child) && (child)->common.scope ? (child)->common.scope->name->val : ""), child->common.function_name->val, zend_visibility_string(parent_flags), ((parent) && (parent)->common.scope ? (parent)->common.scope->name->val : ""), (parent_flags&0x100) ? "" : " or weaker");
  } else if (((child_flags & (0x100 | 0x200 | 0x400)) < (parent_flags & (0x100 | 0x200 | 0x400)))
   && ((parent_flags & (0x100 | 0x200 | 0x400)) & 0x400)) {
   child->common.fn_flags |= 0x800;
  }
 }

 if (parent_flags & 0x400) {
  child->common.prototype = ((void*)0);
 } else if (parent_flags & 0x02) {
  child->common.fn_flags |= 0x08;
  child->common.prototype = parent;
 } else if (!(parent->common.fn_flags & 0x2000) || (parent->common.prototype && (parent->common.prototype->common.scope->ce_flags & 0x80))) {

  child->common.prototype = parent->common.prototype ? parent->common.prototype : parent;
 }

 if (child->common.prototype && (child->common.prototype->common.fn_flags & 0x02)) {
  if (!zend_do_perform_implementation_check(child, child->common.prototype )) {
   zend_error_noreturn((1<<6L), "Declaration of %s::%s() must be compatible with %s", ((child) && (child)->common.scope ? (child)->common.scope->name->val : ""), child->common.function_name->val, zend_get_function_declaration(child->common.prototype ));
  }
 } else if ((executor_globals.error_reporting) & (1<<11L) || zval_get_type(&((executor_globals.user_error_handler))) != 0) {
  if (!zend_do_perform_implementation_check(child, parent )) {
   char *method_prototype = zend_get_function_declaration(parent );
   zend_error((1<<11L), "Declaration of %s::%s() should be compatible with %s", ((child) && (child)->common.scope ? (child)->common.scope->name->val : ""), child->common.function_name->val, method_prototype);
   _efree((method_prototype) );
  }
 }
}


static zend_bool do_inherit_method_check(HashTable *child_function_table, zend_function *parent, zend_string *key, zend_class_entry *child_ce)
{
 zend_uint parent_flags = parent->common.fn_flags;
 zend_function *child;
               ;

 if ((child = zend_hash_find_ptr(child_function_table, key)) == ((void*)0)) {
  if (parent_flags & (0x02)) {
   child_ce->ce_flags |= 0x10;
  }
  return 1;
 }

 do_inheritance_check_on_method(child, parent );

 return 0;
}


static zend_bool do_inherit_property_access_check(HashTable *target_ht, zend_property_info *parent_info, zend_string *key, zend_class_entry *ce )
{
 zend_property_info *child_info;
 zend_class_entry *parent_ce = ce->parent;

 if (parent_info->flags & (0x400|0x20000)) {
  if ((child_info = zend_hash_find_ptr(&ce->properties_info, key)) != ((void*)0)) {
   child_info->flags |= 0x800;
  } else {
   if(ce->type & 1) {
    child_info = zend_duplicate_property_info_internal(parent_info);
   } else {
    child_info = zend_duplicate_property_info(parent_info );
   }
   zend_hash_update_ptr(&ce->properties_info, key, child_info);
   child_info->flags &= ~0x400;
   child_info->flags |= 0x20000;
  }
  return 0;
 }

 if ((child_info = zend_hash_find_ptr(&ce->properties_info, key)) != ((void*)0)) {
  if ((parent_info->flags & 0x01) != (child_info->flags & 0x01)) {
   zend_error_noreturn((1<<6L), "Cannot redeclare %s%s::$%s as %s%s::$%s",
    (parent_info->flags & 0x01) ? "static " : "non static ", parent_ce->name->val, key->val,
    (child_info->flags & 0x01) ? "static " : "non static ", ce->name->val, key->val);

  }

  if(parent_info->flags & 0x800) {
   child_info->flags |= 0x800;
  }

  if ((child_info->flags & (0x100 | 0x200 | 0x400)) > (parent_info->flags & (0x100 | 0x200 | 0x400))) {
   zend_error_noreturn((1<<6L), "Access level to %s::$%s must be %s (as in class %s)%s", ce->name->val, key->val, zend_visibility_string(parent_info->flags), parent_ce->name->val, (parent_info->flags&0x100) ? "" : " or weaker");
  } else if ((child_info->flags & 0x01) == 0) {
   _zval_ptr_dtor((&(ce->default_properties_table[parent_info->offset])) );
   ce->default_properties_table[parent_info->offset] = ce->default_properties_table[child_info->offset];
   do { (*(&ce->default_properties_table[child_info->offset])).u1.type_info = 0; } while (0);
   child_info->offset = parent_info->offset;
  }
  return 0;
 } else {
  return 1;
 }
}


static inline void do_implement_interface(zend_class_entry *ce, zend_class_entry *iface )
{
 if (!(ce->ce_flags & 0x80) && iface->interface_gets_implemented && iface->interface_gets_implemented(iface, ce ) == FAILURE) {
  zend_error((1<<4L), "Class %s could not implement interface %s", ce->name->val, iface->name->val);
 }
 if (ce == iface) {
  zend_error((1<<0L), "Interface %s cannot implement itself", ce->name->val);
 }
}


__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface )
{

 zend_uint i, ce_num, if_num = iface->num_interfaces;
 zend_class_entry *entry;

 if (if_num==0) {
  return;
 }
 ce_num = ce->num_interfaces;

 if (ce->type == 1) {
  ce->interfaces = (zend_class_entry **) realloc(ce->interfaces, sizeof(zend_class_entry *) * (ce_num + if_num));
 } else {
  ce->interfaces = (zend_class_entry **) _erealloc((ce->interfaces), (sizeof(zend_class_entry *) * (ce_num + if_num)), 0 );
 }


 while (if_num--) {
  entry = iface->interfaces[if_num];
  for (i = 0; i < ce_num; i++) {
   if (ce->interfaces[i] == entry) {
    break;
   }
  }
  if (i == ce_num) {
   ce->interfaces[ce->num_interfaces++] = entry;
  }
 }


 while (ce_num < ce->num_interfaces) {
  do_implement_interface(ce, ce->interfaces[ce_num++] );
 }
}
# 1613 "Zend/zend_compile.c"
static void do_inherit_class_constant(zend_string *name, zval *zv, zend_class_entry *ce, zend_class_entry *parent_ce )
{
 if (!(zval_get_type(&(*(zv))) == 10)) {
  if (parent_ce->type == 1) {
   do { zend_reference *_ref = malloc(sizeof(zend_reference)); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(zv)).value.ref = _ref; (*(zv)).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0);
  } else {
   do { zend_reference *_ref = _emalloc((sizeof(zend_reference)) ); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(zv)).value.ref = _ref; (*(zv)).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0);
  }
 }
 if ((((*(&(*(zv)).value.ref->val)).u1.v.type_flags & (1<<0)) != 0)) {
  ce->ce_flags &= ~0x100000;
 }
 if (_zend_hash_add(&ce->constants_table, name, zv )) {
  zval_addref_p(zv);
 }
}


__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce )
{
 zend_property_info *property_info;
 zend_function *func;
 zend_string *key;
 zval *zv;

 if ((ce->ce_flags & 0x80)
  && !(parent_ce->ce_flags & 0x80)) {
  zend_error_noreturn((1<<6L), "Interface %s may not inherit from class (%s)", ce->name->val, parent_ce->name->val);
 }
 if (parent_ce->ce_flags & 0x40) {
  zend_error_noreturn((1<<6L), "Class %s may not inherit from final class (%s)", ce->name->val, parent_ce->name->val);
 }

 ce->parent = parent_ce;

 if (!ce->serialize) {
  ce->serialize = parent_ce->serialize;
 }
 if (!ce->unserialize) {
  ce->unserialize = parent_ce->unserialize;
 }


 zend_do_inherit_interfaces(ce, parent_ce );


 if (parent_ce->default_properties_count) {
  int i = ce->default_properties_count + parent_ce->default_properties_count;

  ce->default_properties_table = ((ce->type == 1)?__zend_realloc((ce->default_properties_table), (sizeof(zval) * i)):_erealloc(((ce->default_properties_table)), ((sizeof(zval) * i)), 0 ));
  if (ce->default_properties_count) {
   while (i-- > parent_ce->default_properties_count) {
    ce->default_properties_table[i] = ce->default_properties_table[i - parent_ce->default_properties_count];
   }
  }
  for (i = 0; i < parent_ce->default_properties_count; i++) {
# 1679 "Zend/zend_compile.c"
   do { zval *__z1 = (&ce->default_properties_table[i]); zval *__z2 = (&parent_ce->default_properties_table[i]); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); if ((((*(__z1)).u1.type_info & ((1<<1) << 8)) != 0)) { zval_addref_p(__z1); } } while (0);
   if ((((ce->default_properties_table[i]).u1.type_info & ((1<<0) << 8)) != 0)) {
    ce->ce_flags &= ~0x100000;
   }
  }
  ce->default_properties_count += parent_ce->default_properties_count;
 }

 if (parent_ce->type != ce->type) {

  zend_update_class_constants(parent_ce );
  if (parent_ce->default_static_members_count) {
   int i = ce->default_static_members_count + parent_ce->default_static_members_count;

   ce->default_static_members_table = _erealloc((ce->default_static_members_table), (sizeof(zval) * i), 0 );
   if (ce->default_static_members_count) {
    while (i-- > parent_ce->default_static_members_count) {
     ce->default_static_members_table[i] = ce->default_static_members_table[i - parent_ce->default_static_members_count];
    }
   }
   for (i = 0; i < parent_ce->default_static_members_count; i++) {
    do { zval *__zv = (&((parent_ce)->static_members_table)[i]); if (!(zval_get_type(&(*(__zv))) == 10)) { do { zend_reference *_ref = _emalloc((sizeof(zend_reference)) ); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (__zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(__zv)).value.ref = _ref; (*(__zv)).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0); } } while (0);
    ce->default_static_members_table[i] = ((parent_ce)->static_members_table)[i];
    zval_addref_p(&(ce->default_static_members_table[i]));
    if ((((*(&(ce->default_static_members_table[i]).value.ref->val)).u1.v.type_flags & (1<<0)) != 0)) {
     ce->ce_flags &= ~0x100000;
    }
   }
   ce->default_static_members_count += parent_ce->default_static_members_count;
   ce->static_members_table = ce->default_static_members_table;
  }
 } else {
  if (parent_ce->default_static_members_count) {
   int i = ce->default_static_members_count + parent_ce->default_static_members_count;

   ce->default_static_members_table = ((ce->type == 1)?__zend_realloc((ce->default_static_members_table), (sizeof(zval) * i)):_erealloc(((ce->default_static_members_table)), ((sizeof(zval) * i)), 0 ));
   if (ce->default_static_members_count) {
    while (i-- > parent_ce->default_static_members_count) {
     ce->default_static_members_table[i] = ce->default_static_members_table[i - parent_ce->default_static_members_count];
    }
   }
   for (i = 0; i < parent_ce->default_static_members_count; i++) {
    do { zval *__zv = (&parent_ce->default_static_members_table[i]); if (!(zval_get_type(&(*(__zv))) == 10)) { do { zend_reference *_ref = _emalloc((sizeof(zend_reference)) ); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (__zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(__zv)).value.ref = _ref; (*(__zv)).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0); } } while (0);
    ce->default_static_members_table[i] = parent_ce->default_static_members_table[i];
    zval_addref_p(&(ce->default_static_members_table[i]));
    if ((((*(&(ce->default_static_members_table[i]).value.ref->val)).u1.v.type_flags & (1<<0)) != 0)) {
     ce->ce_flags &= ~0x100000;
    }
   }
   ce->default_static_members_count += parent_ce->default_static_members_count;
   if (ce->type == 2) {
    ce->static_members_table = ce->default_static_members_table;
   }
  }
 }

 do { uint _idx; for (_idx = 0; _idx < (&ce->properties_info)->nNumUsed; _idx++) { Bucket *_p = (&ce->properties_info)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; property_info = (*(_z)).value.ptr; {
  if (property_info->ce == ce) {
   if (property_info->flags & 0x01) {
    property_info->offset += parent_ce->default_static_members_count;
   } else {
    property_info->offset += parent_ce->default_properties_count;
   }
  }
 } } } while (0);

 do { uint _idx; for (_idx = 0; _idx < (&parent_ce->properties_info)->nNumUsed; _idx++) { Bucket *_p = (&parent_ce->properties_info)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; property_info = (*(_z)).value.ptr; {
  if (do_inherit_property_access_check(&ce->properties_info, property_info, key, ce )) {
   if (ce->type & 1) {
    property_info = zend_duplicate_property_info_internal(property_info);
   } else {
    property_info = zend_duplicate_property_info(property_info );
   }
   zend_hash_add_new_ptr(&ce->properties_info, key, property_info);
  }
 } } } while (0);

 do { uint _idx; for (_idx = 0; _idx < (&parent_ce->constants_table)->nNumUsed; _idx++) { Bucket *_p = (&parent_ce->constants_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; zv = _z; {
  do_inherit_class_constant(key, zv, ce, parent_ce );
 } } } while (0);

 do { uint _idx; for (_idx = 0; _idx < (&parent_ce->function_table)->nNumUsed; _idx++) { Bucket *_p = (&parent_ce->function_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; func = (*(_z)).value.ptr; {
  if (do_inherit_method_check(&ce->function_table, func, key, ce)) {
   zend_function *new_func = do_inherit_method(func );
   zend_hash_add_new_ptr(&ce->function_table, key, new_func);
  }
 } } } while (0);

 do_inherit_parent_constructor(ce );

 if (ce->ce_flags & 0x10 && ce->type == 1) {
  ce->ce_flags |= 0x20;
 } else if (!(ce->ce_flags & (0x80000|0x400000))) {

  zend_verify_abstract_class(ce );
 }
 ce->ce_flags |= parent_ce->ce_flags & 0x800000;
}


static zend_bool do_inherit_constant_check(HashTable *child_constants_table, zval *parent_constant, zend_string *name, const zend_class_entry *iface)
{
 zval *old_constant;

 if ((old_constant = zend_hash_find(child_constants_table, name)) != ((void*)0)) {
  if (!(zval_get_type(&(*(old_constant))) == 10) ||
      !(zval_get_type(&(*(parent_constant))) == 10) ||
      &(*(old_constant)).value.ref->val != &(*(parent_constant)).value.ref->val) {
   zend_error_noreturn((1<<6L), "Cannot inherit previously-inherited or override constant %s from interface %s", name->val, iface->name->val);
  }
  return 0;
 }
 return 1;
}


static void do_inherit_iface_constant(zend_string *name, zval *zv, zend_class_entry *ce, zend_class_entry *iface )
{
 if (do_inherit_constant_check(&ce->constants_table, zv, name, iface)) {
  do { zval *__zv = (zv); if (!(zval_get_type(&(*(__zv))) == 10)) { do { zend_reference *_ref = _emalloc((sizeof(zend_reference)) ); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (__zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(__zv)).value.ref = _ref; (*(__zv)).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0); } } while (0);
  zval_addref_p(zv);
  if ((((*(&(*(zv)).value.ref->val)).u1.v.type_flags & (1<<0)) != 0)) {
   ce->ce_flags &= ~0x100000;
  }
  _zend_hash_update(&ce->constants_table, name, zv );
 }
}


__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface )
{
 zend_uint i, ignore = 0;
 zend_uint current_iface_num = ce->num_interfaces;
 zend_uint parent_iface_num = ce->parent ? ce->parent->num_interfaces : 0;
 zend_function *func;
 zend_string *key;
 zval *zv;

 for (i = 0; i < ce->num_interfaces; i++) {
  if (ce->interfaces[i] == ((void*)0)) {
   memmove(ce->interfaces + i, ce->interfaces + i + 1, sizeof(zend_class_entry*) * (--ce->num_interfaces - i));
   i--;
  } else if (ce->interfaces[i] == iface) {
   if (i < parent_iface_num) {
    ignore = 1;
   } else {
    zend_error_noreturn((1<<6L), "Class %s cannot implement previously implemented interface %s", ce->name->val, iface->name->val);
   }
  }
 }
 if (ignore) {

  do { uint _idx; for (_idx = 0; _idx < (&ce->constants_table)->nNumUsed; _idx++) { Bucket *_p = (&ce->constants_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; zv = _z; {
   do_inherit_constant_check(&iface->constants_table, zv, key, iface);
  } } } while (0);
 } else {
  if (ce->num_interfaces >= current_iface_num) {
   if (ce->type == 1) {
    ce->interfaces = (zend_class_entry **) realloc(ce->interfaces, sizeof(zend_class_entry *) * (++current_iface_num));
   } else {
    ce->interfaces = (zend_class_entry **) _erealloc((ce->interfaces), (sizeof(zend_class_entry *) * (++current_iface_num)), 0 );
   }
  }
  ce->interfaces[ce->num_interfaces++] = iface;

  do { uint _idx; for (_idx = 0; _idx < (&iface->constants_table)->nNumUsed; _idx++) { Bucket *_p = (&iface->constants_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; zv = _z; {
   do_inherit_iface_constant(key, zv, ce, iface );
  } } } while (0);

  do { uint _idx; for (_idx = 0; _idx < (&iface->function_table)->nNumUsed; _idx++) { Bucket *_p = (&iface->function_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; func = (*(_z)).value.ptr; {
   if (do_inherit_method_check(&ce->function_table, func, key, ce)) {
    zend_function *new_func = do_inherit_method(func );
    zend_hash_add_new_ptr(&ce->function_table, key, new_func);
   }
  } } } while (0);

  do_implement_interface(ce, iface );
  zend_do_inherit_interfaces(ce, iface );
 }
}


__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait )
{
 zend_uint i, ignore = 0;
 zend_uint current_trait_num = ce->num_traits;
 zend_uint parent_trait_num = ce->parent ? ce->parent->num_traits : 0;

 for (i = 0; i < ce->num_traits; i++) {
  if (ce->traits[i] == ((void*)0)) {
   memmove(ce->traits + i, ce->traits + i + 1, sizeof(zend_class_entry*) * (--ce->num_traits - i));
   i--;
  } else if (ce->traits[i] == trait) {
   if (i < parent_trait_num) {
    ignore = 1;
   }
  }
 }
 if (!ignore) {
  if (ce->num_traits >= current_trait_num) {
   if (ce->type == 1) {
    ce->traits = (zend_class_entry **) realloc(ce->traits, sizeof(zend_class_entry *) * (++current_trait_num));
   } else {
    ce->traits = (zend_class_entry **) _erealloc((ce->traits), (sizeof(zend_class_entry *) * (++current_trait_num)), 0 );
   }
  }
  ce->traits[ce->num_traits++] = trait;
 }
}


static zend_bool zend_traits_method_compatibility_check(zend_function *fn, zend_function *other_fn )
{
 zend_uint fn_flags = fn->common.scope->ce_flags;
 zend_uint other_flags = other_fn->common.scope->ce_flags;

 return zend_do_perform_implementation_check(fn, other_fn )
  && ((other_fn->common.scope->ce_flags & 0x80) || zend_do_perform_implementation_check(other_fn, fn ))
  && ((fn_flags & (0x04|0x01)) ==
      (other_flags & (0x04|0x01)));
}


static void zend_add_magic_methods(zend_class_entry* ce, zend_string* mname, zend_function* fe )
{
 if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__clone") && strlen ("__clone") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__clone") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__clone"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__clone") + 1) - (size_t)(const void *)("__clone") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__clone") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__clone") && ((size_t)(const void *)(("__clone") + 1) - (size_t)(const void *)("__clone") == 1) ? __builtin_strcmp (mname->val, "__clone") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__clone"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__clone") && ((size_t)(const void *)(("__clone") + 1) - (size_t)(const void *)("__clone") == 1) && (__s2_len = __builtin_strlen ("__clone"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__clone") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__clone"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__clone"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__clone"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__clone"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__clone")))); }) : strncmp (mname->val, "__clone", mname->len)))) {
  ce->clone = fe; fe->common.fn_flags |= 0x8000;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__construct") && strlen ("__construct") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__construct") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__construct"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__construct") + 1) - (size_t)(const void *)("__construct") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__construct") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__construct") && ((size_t)(const void *)(("__construct") + 1) - (size_t)(const void *)("__construct") == 1) ? __builtin_strcmp (mname->val, "__construct") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__construct"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__construct") && ((size_t)(const void *)(("__construct") + 1) - (size_t)(const void *)("__construct") == 1) && (__s2_len = __builtin_strlen ("__construct"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__construct") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__construct"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__construct"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__construct"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__construct"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__construct")))); }) : strncmp (mname->val, "__construct", mname->len)))) {
  if (ce->constructor) {
   zend_error_noreturn((1<<6L), "%s has colliding constructor definitions coming from traits", ce->name->val);
  }
  ce->constructor = fe; fe->common.fn_flags |= 0x2000;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__destruct") && strlen ("__destruct") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__destruct") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__destruct"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__destruct") + 1) - (size_t)(const void *)("__destruct") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__destruct") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__destruct") && ((size_t)(const void *)(("__destruct") + 1) - (size_t)(const void *)("__destruct") == 1) ? __builtin_strcmp (mname->val, "__destruct") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__destruct"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__destruct") && ((size_t)(const void *)(("__destruct") + 1) - (size_t)(const void *)("__destruct") == 1) && (__s2_len = __builtin_strlen ("__destruct"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__destruct") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__destruct"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__destruct"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__destruct"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__destruct"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__destruct")))); }) : strncmp (mname->val, "__destruct", mname->len)))) {
  ce->destructor = fe; fe->common.fn_flags |= 0x4000;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__get") && strlen ("__get") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__get") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__get"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__get") + 1) - (size_t)(const void *)("__get") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__get") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__get") && ((size_t)(const void *)(("__get") + 1) - (size_t)(const void *)("__get") == 1) ? __builtin_strcmp (mname->val, "__get") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__get"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__get") && ((size_t)(const void *)(("__get") + 1) - (size_t)(const void *)("__get") == 1) && (__s2_len = __builtin_strlen ("__get"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__get") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__get"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__get"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__get"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__get"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__get")))); }) : strncmp (mname->val, "__get", mname->len)))) {
  ce->__get = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__set") && strlen ("__set") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__set") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__set"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__set") + 1) - (size_t)(const void *)("__set") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__set") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__set") && ((size_t)(const void *)(("__set") + 1) - (size_t)(const void *)("__set") == 1) ? __builtin_strcmp (mname->val, "__set") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__set"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__set") && ((size_t)(const void *)(("__set") + 1) - (size_t)(const void *)("__set") == 1) && (__s2_len = __builtin_strlen ("__set"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__set") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__set"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__set"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__set"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__set"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__set")))); }) : strncmp (mname->val, "__set", mname->len)))) {
  ce->__set = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__call") && strlen ("__call") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__call") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__call"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__call") + 1) - (size_t)(const void *)("__call") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__call") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__call") && ((size_t)(const void *)(("__call") + 1) - (size_t)(const void *)("__call") == 1) ? __builtin_strcmp (mname->val, "__call") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__call"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__call") && ((size_t)(const void *)(("__call") + 1) - (size_t)(const void *)("__call") == 1) && (__s2_len = __builtin_strlen ("__call"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__call") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__call"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__call"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__call"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__call"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__call")))); }) : strncmp (mname->val, "__call", mname->len)))) {
  ce->__call = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__unset") && strlen ("__unset") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__unset") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__unset"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__unset") + 1) - (size_t)(const void *)("__unset") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__unset") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__unset") && ((size_t)(const void *)(("__unset") + 1) - (size_t)(const void *)("__unset") == 1) ? __builtin_strcmp (mname->val, "__unset") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__unset"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__unset") && ((size_t)(const void *)(("__unset") + 1) - (size_t)(const void *)("__unset") == 1) && (__s2_len = __builtin_strlen ("__unset"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__unset") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__unset"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__unset"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__unset"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__unset"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__unset")))); }) : strncmp (mname->val, "__unset", mname->len)))) {
  ce->__unset = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__isset") && strlen ("__isset") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__isset") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__isset"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__isset") + 1) - (size_t)(const void *)("__isset") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__isset") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__isset") && ((size_t)(const void *)(("__isset") + 1) - (size_t)(const void *)("__isset") == 1) ? __builtin_strcmp (mname->val, "__isset") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__isset"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__isset") && ((size_t)(const void *)(("__isset") + 1) - (size_t)(const void *)("__isset") == 1) && (__s2_len = __builtin_strlen ("__isset"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__isset") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__isset"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__isset"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__isset"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__isset"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__isset")))); }) : strncmp (mname->val, "__isset", mname->len)))) {
  ce->__isset = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__callstatic") && strlen ("__callstatic") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__callstatic") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__callstatic"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__callstatic") + 1) - (size_t)(const void *)("__callstatic") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__callstatic") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__callstatic") && ((size_t)(const void *)(("__callstatic") + 1) - (size_t)(const void *)("__callstatic") == 1) ? __builtin_strcmp (mname->val, "__callstatic") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__callstatic"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__callstatic") && ((size_t)(const void *)(("__callstatic") + 1) - (size_t)(const void *)("__callstatic") == 1) && (__s2_len = __builtin_strlen ("__callstatic"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__callstatic") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__callstatic"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__callstatic"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__callstatic"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__callstatic"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__callstatic")))); }) : strncmp (mname->val, "__callstatic", mname->len)))) {
  ce->__callstatic = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__tostring") && strlen ("__tostring") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__tostring") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__tostring"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__tostring") + 1) - (size_t)(const void *)("__tostring") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__tostring") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__tostring") && ((size_t)(const void *)(("__tostring") + 1) - (size_t)(const void *)("__tostring") == 1) ? __builtin_strcmp (mname->val, "__tostring") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__tostring"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__tostring") && ((size_t)(const void *)(("__tostring") + 1) - (size_t)(const void *)("__tostring") == 1) && (__s2_len = __builtin_strlen ("__tostring"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__tostring") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__tostring"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__tostring"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__tostring"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__tostring"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__tostring")))); }) : strncmp (mname->val, "__tostring", mname->len)))) {
  ce->__tostring = fe;
 } else if (!(__extension__ (__builtin_constant_p (mname->len) && ((__builtin_constant_p (mname->val) && strlen (mname->val) < ((size_t) (mname->len))) || (__builtin_constant_p ("__debuginfo") && strlen ("__debuginfo") < ((size_t) (mname->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mname->val) && __builtin_constant_p ("__debuginfo") && (__s1_len = __builtin_strlen (mname->val), __s2_len = __builtin_strlen ("__debuginfo"), (!((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("__debuginfo") + 1) - (size_t)(const void *)("__debuginfo") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mname->val, "__debuginfo") : (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) && (__s1_len = __builtin_strlen (mname->val), __s1_len < 4) ? (__builtin_constant_p ("__debuginfo") && ((size_t)(const void *)(("__debuginfo") + 1) - (size_t)(const void *)("__debuginfo") == 1) ? __builtin_strcmp (mname->val, "__debuginfo") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("__debuginfo"); int __result = (((const unsigned char *) (const char *) (mname->val))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mname->val))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mname->val))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("__debuginfo") && ((size_t)(const void *)(("__debuginfo") + 1) - (size_t)(const void *)("__debuginfo") == 1) && (__s2_len = __builtin_strlen ("__debuginfo"), __s2_len < 4) ? (__builtin_constant_p (mname->val) && ((size_t)(const void *)((mname->val) + 1) - (size_t)(const void *)(mname->val) == 1) ? __builtin_strcmp (mname->val, "__debuginfo") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mname->val); int __result = (((const unsigned char *) (const char *) ("__debuginfo"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__debuginfo"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("__debuginfo"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("__debuginfo"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mname->val, "__debuginfo")))); }) : strncmp (mname->val, "__debuginfo", mname->len)))) {
  ce->__debugInfo = fe;
 } else if (ce->name->len == mname->len) {
  zend_string *lowercase_name = zend_str_alloc(ce->name->len, 0);
  zend_str_tolower_copy(lowercase_name->val, ce->name->val, ce->name->len);
  lowercase_name = zend_new_interned_string(lowercase_name );
  if (!memcmp(mname->val, lowercase_name->val, mname->len)) {
   if (ce->constructor) {
    zend_error_noreturn((1<<6L), "%s has colliding constructor definitions coming from traits", ce->name->val);
   }
   ce->constructor = fe;
   fe->common.fn_flags |= 0x2000;
  }
  zend_str_release(lowercase_name);
 }
}


static void zend_add_trait_method(zend_class_entry *ce, const char *name, zend_string *key, zend_function *fn, HashTable **overriden )
{
 zend_function *existing_fn = ((void*)0);
 zend_function *new_fn;

 if ((existing_fn = zend_hash_find_ptr(&ce->function_table, key)) != ((void*)0)) {
  if (existing_fn->common.scope == ce) {


   if (*overriden) {
    if ((existing_fn = zend_hash_find_ptr(*overriden, key)) != ((void*)0)) {
     if (existing_fn->common.fn_flags & 0x02) {

      if (!zend_traits_method_compatibility_check(fn, existing_fn )) {
       zend_error_noreturn((1<<6L), "Declaration of %s must be compatible with %s",
        zend_get_function_declaration(fn ),
        zend_get_function_declaration(existing_fn ));
      }
     } else if (fn->common.fn_flags & 0x02) {

      if (!zend_traits_method_compatibility_check(existing_fn, fn )) {
       zend_error_noreturn((1<<6L), "Declaration of %s must be compatible with %s",
        zend_get_function_declaration(fn ),
        zend_get_function_declaration(existing_fn ));
      }
      return;
     }
    }
   } else {
    (*overriden) = (HashTable *) _emalloc((sizeof(HashTable)) );
    _zend_hash_init_ex((*overriden), (8), (ptr_dtor), (0), (0) );
   }
   fn = zend_hash_update_mem(*overriden, key, fn, sizeof(zend_function));
   return;
  } else if (existing_fn->common.fn_flags & 0x02) {

   if (!zend_traits_method_compatibility_check(fn, existing_fn )) {
    zend_error_noreturn((1<<6L), "Declaration of %s must be compatible with %s",
     zend_get_function_declaration(fn ),
     zend_get_function_declaration(existing_fn ));
   }
  } else if (fn->common.fn_flags & 0x02) {

   if (!zend_traits_method_compatibility_check(existing_fn, fn )) {
    zend_error_noreturn((1<<6L), "Declaration of %s must be compatible with %s",
     zend_get_function_declaration(fn ),
     zend_get_function_declaration(existing_fn ));
   }
   return;
  } else if ((existing_fn->common.scope->ce_flags & 0x120) == 0x120) {


   zend_error_noreturn((1<<6L), "Trait method %s has not been applied, because there are collisions with other trait methods on %s",
    name, ce->name->val);






  } else {


   do_inheritance_check_on_method(fn, existing_fn );
  }
 }

 function_add_ref(fn);
 new_fn = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));
 memcpy(new_fn, fn, sizeof(zend_op_array));
 fn = zend_hash_update_ptr(&ce->function_table, key, new_fn);
 zend_add_magic_methods(ce, key, fn );
}


static void zend_fixup_trait_method(zend_function *fn, zend_class_entry *ce)
{
 if ((fn->common.scope->ce_flags & 0x120) == 0x120) {

  fn->common.scope = ce;

  if (fn->common.fn_flags & 0x02) {
   ce->ce_flags |= 0x10;
  }
  if (fn->op_array.static_variables) {
   ce->ce_flags |= 0x800000;
  }
 }
}


static int zend_traits_copy_functions(zend_string *fnname, zend_function *fn, zend_class_entry *ce, HashTable **overriden, HashTable *exclude_table )
{
 zend_trait_alias *alias, **alias_ptr;
 zend_string *lcname;
 zend_function fn_copy;


 if (ce->trait_aliases) {
  alias_ptr = ce->trait_aliases;
  alias = *alias_ptr;
  while (alias) {

   if (alias->alias != ((void*)0)
    && (!alias->trait_method->ce || fn->common.scope == alias->trait_method->ce)
    && alias->trait_method->method_name->len == fnname->len
    && (zend_binary_strcasecmp(alias->trait_method->method_name->val, alias->trait_method->method_name->len, fnname->val, fnname->len) == 0)) {
    fn_copy = *fn;


    if (alias->modifiers) {
     fn_copy.common.fn_flags = alias->modifiers | (fn->common.fn_flags ^ (fn->common.fn_flags & (0x100 | 0x200 | 0x400)));
    }

    lcname = zend_str_alloc(alias->alias->len, 0);
    zend_str_tolower_copy(lcname->val, alias->alias->val, alias->alias->len);
    zend_add_trait_method(ce, alias->alias->val, lcname, &fn_copy, overriden );
    zend_str_release(lcname);


    if (!alias->trait_method->ce) {
     alias->trait_method->ce = fn->common.scope;
    }
   }
   alias_ptr++;
   alias = *alias_ptr;
  }
 }

 if (exclude_table == ((void*)0) || zend_hash_find(exclude_table, fnname) == ((void*)0)) {

  fn_copy = *fn;


  if (ce->trait_aliases) {
   alias_ptr = ce->trait_aliases;
   alias = *alias_ptr;
   while (alias) {

    if (alias->alias == ((void*)0) && alias->modifiers != 0
     && (!alias->trait_method->ce || fn->common.scope == alias->trait_method->ce)
     && (alias->trait_method->method_name->len == fnname->len)
     && (zend_binary_strcasecmp(alias->trait_method->method_name->val, alias->trait_method->method_name->len, fnname->val, fnname->len) == 0)) {

     fn_copy.common.fn_flags = alias->modifiers | (fn->common.fn_flags ^ (fn->common.fn_flags & (0x100 | 0x200 | 0x400)));


     if (!alias->trait_method->ce) {
      alias->trait_method->ce = fn->common.scope;
     }
    }
    alias_ptr++;
    alias = *alias_ptr;
   }
  }

  zend_add_trait_method(ce, fn->common.function_name->val, fnname, &fn_copy, overriden );
 }

 return 0;
}


static void zend_check_trait_usage(zend_class_entry *ce, zend_class_entry *trait )
{
 zend_uint i;

 if ((trait->ce_flags & 0x120) != 0x120) {
  zend_error_noreturn((1<<6L), "Class %s is not a trait, Only traits may be used in 'as' and 'insteadof' statements", trait->name->val);
 }

 for (i = 0; i < ce->num_traits; i++) {
  if (ce->traits[i] == trait) {
   return;
  }
 }
 zend_error_noreturn((1<<6L), "Required Trait %s wasn't added to %s", trait->name->val, ce->name->val);
}


static void zend_traits_init_trait_structures(zend_class_entry *ce )
{
 size_t i, j = 0;
 zend_trait_precedence *cur_precedence;
 zend_trait_method_reference *cur_method_ref;
 zend_string *lcname;
 zend_bool method_exists;


 if (ce->trait_precedences) {
  i = 0;
  while ((cur_precedence = ce->trait_precedences[i])) {

   if (cur_precedence->exclude_from_classes) {
    cur_method_ref = cur_precedence->trait_method;
    if (!(cur_precedence->trait_method->ce = zend_fetch_class(cur_method_ref->class_name,
        6|0x80 ))) {
     zend_error_noreturn((1<<6L), "Could not find trait %s", cur_method_ref->class_name->val);
    }
    zend_check_trait_usage(ce, cur_precedence->trait_method->ce );


    lcname = zend_str_alloc(cur_method_ref->method_name->len, 0);
    zend_str_tolower_copy(lcname->val,
     cur_method_ref->method_name->val,
     cur_method_ref->method_name->len);
    method_exists = zend_hash_exists(&cur_method_ref->ce->function_table,
             lcname);
    zend_str_free(lcname);
    if (!method_exists) {
     zend_error_noreturn((1<<6L),
          "A precedence rule was defined for %s::%s but this method does not exist",
          cur_method_ref->ce->name->val,
          cur_method_ref->method_name->val);
    }







    j = 0;
    while (cur_precedence->exclude_from_classes[j].class_name) {
     zend_string* class_name = cur_precedence->exclude_from_classes[j].class_name;

     if (!(cur_precedence->exclude_from_classes[j].ce = zend_fetch_class(class_name, 6 |0x80 ))) {
      zend_error_noreturn((1<<6L), "Could not find trait %s", class_name->val);
     }
     zend_check_trait_usage(ce, cur_precedence->exclude_from_classes[j].ce );



     if (cur_precedence->trait_method->ce == cur_precedence->exclude_from_classes[i].ce) {
      zend_error_noreturn((1<<6L),
           "Inconsistent insteadof definition. "
           "The method %s is to be used from %s, but %s is also on the exclude list",
           cur_method_ref->method_name->val,
           cur_precedence->trait_method->ce->name->val,
           cur_precedence->trait_method->ce->name->val);
     }

     zend_str_release(class_name);
     j++;
    }
   }
   i++;
  }
 }

 if (ce->trait_aliases) {
  i = 0;
  while (ce->trait_aliases[i]) {

   if (ce->trait_aliases[i]->trait_method->class_name) {
    cur_method_ref = ce->trait_aliases[i]->trait_method;
    if (!(cur_method_ref->ce = zend_fetch_class(cur_method_ref->class_name, 6|0x80 ))) {
     zend_error_noreturn((1<<6L), "Could not find trait %s", cur_method_ref->class_name->val);
    }
    zend_check_trait_usage(ce, cur_method_ref->ce );


    lcname = zend_str_alloc(cur_method_ref->method_name->len, 0);
    zend_str_tolower_copy(lcname->val,
     cur_method_ref->method_name->val,
     cur_method_ref->method_name->len);
    method_exists = zend_hash_exists(&cur_method_ref->ce->function_table,
      lcname);
    zend_str_free(lcname);

    if (!method_exists) {
     zend_error_noreturn((1<<6L), "An alias was defined for %s::%s but this method does not exist", cur_method_ref->ce->name->val, cur_method_ref->method_name->val);
    }
   }
   i++;
  }
 }
}


static void zend_traits_compile_exclude_table(HashTable* exclude_table, zend_trait_precedence **precedences, zend_class_entry *trait)
{
 size_t i = 0, j;

 if (!precedences) {
  return;
 }
 while (precedences[i]) {
  if (precedences[i]->exclude_from_classes) {
   j = 0;
   while (precedences[i]->exclude_from_classes[j].ce) {
    if (precedences[i]->exclude_from_classes[j].ce == trait) {
     zend_string *lcname = zend_str_alloc(precedences[i]->trait_method->method_name->len, 0);

     zend_str_tolower_copy(lcname->val,
      precedences[i]->trait_method->method_name->val,
      precedences[i]->trait_method->method_name->len);
     if (zend_hash_add_empty_element(exclude_table, lcname) == ((void*)0)) {
      zend_str_release(lcname);
      zend_error_noreturn((1<<6L), "Failed to evaluate a trait precedence (%s). Method of trait %s was defined to be excluded multiple times", precedences[i]->trait_method->method_name->val, trait->name->val);
     }
     zend_str_release(lcname);
    }
    ++j;
   }
  }
  ++i;
 }
}


static void zend_do_traits_method_binding(zend_class_entry *ce )
{
 zend_uint i;
 HashTable *overriden = ((void*)0);
 zend_string *key;
 zend_function *fn;

 for (i = 0; i < ce->num_traits; i++) {
  if (ce->trait_precedences) {
   HashTable exclude_table;


   _zend_hash_init_ex((&exclude_table), (8), (((void*)0)), (0), (0) );

   zend_traits_compile_exclude_table(&exclude_table, ce->trait_precedences, ce->traits[i]);


   do { uint _idx; for (_idx = 0; _idx < (&ce->traits[i]->function_table)->nNumUsed; _idx++) { Bucket *_p = (&ce->traits[i]->function_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; fn = (*(_z)).value.ptr; {
    zend_traits_copy_functions(key, fn, ce, &overriden, &exclude_table );
   } } } while (0);

   zend_hash_destroy(&exclude_table);
  } else {
   do { uint _idx; for (_idx = 0; _idx < (&ce->traits[i]->function_table)->nNumUsed; _idx++) { Bucket *_p = (&ce->traits[i]->function_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; key = _p->key; fn = (*(_z)).value.ptr; {
    zend_traits_copy_functions(key, fn, ce, &overriden, ((void*)0) );
   } } } while (0);
  }
 }

 do { uint _idx; for (_idx = 0; _idx < (&ce->function_table)->nNumUsed; _idx++) { Bucket *_p = (&ce->function_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; fn = (*(_z)).value.ptr; {
  zend_fixup_trait_method(fn, ce);
 } } } while (0);

 if (overriden) {
  zend_hash_destroy(overriden);
  _efree((overriden) );
 }
}


static zend_class_entry* find_first_definition(zend_class_entry *ce, size_t current_trait, zend_string *prop_name, zend_class_entry *coliding_ce)
{
 size_t i;

 if (coliding_ce == ce) {
  for (i = 0; i < current_trait; i++) {
   if (zend_hash_exists(&ce->traits[i]->properties_info, prop_name)) {
    return ce->traits[i];
   }
  }
 }

 return coliding_ce;
}


static void zend_do_traits_property_binding(zend_class_entry *ce )
{
 size_t i;
 zend_property_info *property_info;
 zend_property_info *coliding_prop;
 zval compare_result;
 zend_string* prop_name;
 const char* class_name_unused;
 zend_bool not_compatible;
 zval* prop_value;
 zend_uint flags;
 zend_string *doc_comment;






 for (i = 0; i < ce->num_traits; i++) {
  do { uint _idx; for (_idx = 0; _idx < (&ce->traits[i]->properties_info)->nNumUsed; _idx++) { Bucket *_p = (&ce->traits[i]->properties_info)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; property_info = (*(_z)).value.ptr; {



   flags = property_info->flags;
   if ((flags & (0x100 | 0x200 | 0x400)) == 0x100) {
    prop_name = zend_str_copy(property_info->name);
   } else {
    const char *pname;
    int pname_len;


    zend_unmangle_property_name_ex(property_info->name->val, property_info->name->len,
           &class_name_unused, &pname, &pname_len);
    prop_name = zend_str_init(pname, pname_len, 0);
   }


   if ((coliding_prop = zend_hash_find_ptr(&ce->properties_info, prop_name)) != ((void*)0)) {
    if (coliding_prop->flags & 0x20000) {
     zend_hash_del(&ce->properties_info, prop_name);
     flags |= 0x800;
    } else {
     if ((coliding_prop->flags & ((0x100 | 0x200 | 0x400) | 0x01))
      == (flags & ((0x100 | 0x200 | 0x400) | 0x01))) {

      if (flags & 0x01) {
       not_compatible = (FAILURE == compare_function(&compare_result,
             &ce->default_static_members_table[coliding_prop->offset],
             &ce->traits[i]->default_static_members_table[property_info->offset] ))
          || ((compare_result).value.lval != 0);
      } else {
       not_compatible = (FAILURE == compare_function(&compare_result,
             &ce->default_properties_table[coliding_prop->offset],
             &ce->traits[i]->default_properties_table[property_info->offset] ))
          || ((compare_result).value.lval != 0);
      }
     } else {

      not_compatible = 1;
     }

     if (not_compatible) {
      zend_error_noreturn((1<<6L),
          "%s and %s define the same property ($%s) in the composition of %s. However, the definition differs and is considered incompatible. Class was composed",
        find_first_definition(ce, i, prop_name, coliding_prop->ce)->name->val,
        property_info->ce->name->val,
        prop_name->val,
        ce->name->val);
     } else {
      zend_error((1<<11L),
          "%s and %s define the same property ($%s) in the composition of %s. This might be incompatible, to improve maintainability consider using accessor methods in traits instead. Class was composed",
        find_first_definition(ce, i, prop_name, coliding_prop->ce)->name->val,
        property_info->ce->name->val,
        prop_name->val,
        ce->name->val);
      zend_str_release(prop_name);
      continue;
     }
    }
   }


   if (flags & 0x01) {
    prop_value = &ce->traits[i]->default_static_members_table[property_info->offset];
   } else {
    prop_value = &ce->traits[i]->default_properties_table[property_info->offset];
   }
   if ((((*(prop_value)).u1.v.type_flags & (1<<1)) != 0)) zval_addref_p(prop_value);

   doc_comment = property_info->doc_comment ? zend_str_copy(property_info->doc_comment) : ((void*)0);
   zend_declare_property_ex(ce, prop_name,
          prop_value, flags,
             doc_comment );
   zend_str_release(prop_name);
  } } } while (0);
 }
}


static void zend_do_check_for_inconsistent_traits_aliasing(zend_class_entry *ce )
{
 int i = 0;
 zend_trait_alias* cur_alias;
 zend_string* lc_method_name;

 if (ce->trait_aliases) {
  while (ce->trait_aliases[i]) {
   cur_alias = ce->trait_aliases[i];


   if (!cur_alias->trait_method->ce) {
    if (cur_alias->alias) {

     zend_error_noreturn((1<<6L),
          "An alias (%s) was defined for method %s(), but this method does not exist",
          cur_alias->alias->val,
          cur_alias->trait_method->method_name->val);
    } else {
# 2438 "Zend/zend_compile.c"
     lc_method_name = zend_str_alloc(cur_alias->trait_method->method_name->len, 0);
     zend_str_tolower_copy(
      lc_method_name->val,
      cur_alias->trait_method->method_name->val,
      cur_alias->trait_method->method_name->len);
     if (zend_hash_exists(&ce->function_table,
           lc_method_name)) {
      zend_str_free(lc_method_name);
      zend_error_noreturn((1<<6L),
           "The modifiers for the trait alias %s() need to be changed in the same statment in which the alias is defined. Error",
           cur_alias->trait_method->method_name->val);
     } else {
      zend_str_free(lc_method_name);
      zend_error_noreturn((1<<6L),
           "The modifiers of the trait method %s() are changed, but this method does not exist. Error",
           cur_alias->trait_method->method_name->val);

     }
    }
   }
   i++;
  }
 }
}


__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce )
{

 if (ce->num_traits <= 0) {
  return;
 }


 zend_traits_init_trait_structures(ce );


 zend_do_traits_method_binding(ce );


 zend_do_check_for_inconsistent_traits_aliasing(ce );


 zend_do_traits_property_binding(ce );


 zend_verify_abstract_class(ce );


 if (ce->ce_flags & 0x10) {
  ce->ce_flags -= 0x10;
 }
}


__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time )
{
 zend_function *function, *new_function;
 zval *op1, *op2;

 if (compile_time) {
  op1 = &(op_array)->literals[opline->op1.constant];
  op2 = &(op_array)->literals[opline->op2.constant];
 } else {
  op1 = opline->op1.zv;
  op2 = opline->op2.zv;
 }

 function = zend_hash_find_ptr(function_table, (*(op1)).value.str);
 new_function = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));
 memcpy(new_function, function, sizeof(zend_op_array));
 if (zend_hash_add_ptr(function_table, (*(op2)).value.str, new_function) == ((void*)0)) {
  int error_level = compile_time ? (1<<6L) : (1<<0L);
  zend_function *old_function;

  _efree((new_function) );
  if ((old_function = zend_hash_find_ptr(function_table, (*(op2)).value.str)) != ((void*)0)
   && old_function->type == 2
   && old_function->op_array.last > 0) {
   zend_error(error_level, "Cannot redeclare %s() (previously declared in %s:%d)",
      function->common.function_name->val,
      old_function->op_array.filename->val,
      old_function->op_array.opcodes[0].lineno);
  } else {
   zend_error(error_level, "Cannot redeclare %s()", function->common.function_name->val);
  }
  return FAILURE;
 } else {
  (*function->op_array.refcount)++;
  function->op_array.static_variables = ((void*)0);
  return SUCCESS;
 }
}


__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array* op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time )
{
 zend_class_entry *ce;
 zval *op1, *op2;

 if (compile_time) {
  op1 = &(op_array)->literals[opline->op1.constant];
  op2 = &(op_array)->literals[opline->op2.constant];
 } else {
  op1 = opline->op1.zv;
  op2 = opline->op2.zv;
 }
 if ((ce = zend_hash_find_ptr(class_table, (*(op1)).value.str)) == ((void*)0)) {
  zend_error_noreturn((1<<6L), "Internal Zend error - Missing class information for %s", (*(op1)).value.str->val);
  return ((void*)0);
 }
 ce->refcount++;
 if (zend_hash_add_ptr(class_table, (*(op2)).value.str, ce) == ((void*)0)) {
  ce->refcount--;
  if (!compile_time) {





   zend_error_noreturn((1<<6L), "Cannot redeclare class %s", ce->name->val);
  }
  return ((void*)0);
 } else {
  if (!(ce->ce_flags & (0x80|0x80000|0x400000))) {
   zend_verify_abstract_class(ce );
  }
  return ce;
 }
}


__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time )
{
 zend_class_entry *ce;
 zval *op1, *op2;

 if (compile_time) {
  op1 = &(op_array)->literals[opline->op1.constant];
  op2 = &(op_array)->literals[opline->op2.constant];
 } else {
  op1 = opline->op1.zv;
  op2 = opline->op2.zv;
 }

 ce = zend_hash_find_ptr(class_table, (*(op1)).value.str);

 if (!ce) {
  if (!compile_time) {





   zend_error_noreturn((1<<6L), "Cannot redeclare class %s", (*(op2)).value.str->val);
  }
  return ((void*)0);
 }

 if (parent_ce->ce_flags & 0x80) {
  zend_error_noreturn((1<<6L), "Class %s cannot extend from interface %s", ce->name->val, parent_ce->name->val);
 } else if ((parent_ce->ce_flags & 0x120) == 0x120) {
  zend_error_noreturn((1<<6L), "Class %s cannot extend from trait %s", ce->name->val, parent_ce->name->val);
 }

 zend_do_inheritance(ce, parent_ce );

 ce->refcount++;


 if (zend_hash_add_ptr(class_table, (*(op2)).value.str, ce) == ((void*)0)) {
  zend_error_noreturn((1<<6L), "Cannot redeclare class %s", ce->name->val);
 }
 return ce;
}


void zend_do_early_binding(void)
{
 zend_op *opline = &(compiler_globals.active_op_array)->opcodes[(compiler_globals.active_op_array)->last-1];
 HashTable *table;

 while (opline->opcode == 105 && opline > (compiler_globals.active_op_array)->opcodes) {
  opline--;
 }

 switch (opline->opcode) {
  case 141:
   if (do_bind_function((compiler_globals.active_op_array), opline, (compiler_globals.function_table), 1 ) == FAILURE) {
    return;
   }
   table = (compiler_globals.function_table);
   break;
  case 139:
   if (do_bind_class((compiler_globals.active_op_array), opline, (compiler_globals.class_table), 1 ) == ((void*)0)) {
    return;
   }
   table = (compiler_globals.class_table);
   break;
  case 140:
   {
    zend_op *fetch_class_opline = opline-1;
    zval *parent_name;
    zend_class_entry *ce;

    parent_name = &((compiler_globals.active_op_array))->literals[fetch_class_opline->op2.constant];
    if (((ce = zend_lookup_class((*(parent_name)).value.str )) == ((void*)0)) ||
        (((compiler_globals.compiler_options) & (1<<3)) &&
         (ce->type == 1))) {
        if ((compiler_globals.compiler_options) & (1<<4)) {
      zend_uint *opline_num = &(compiler_globals.active_op_array)->early_binding;

      while (*opline_num != -1) {
       opline_num = &(compiler_globals.active_op_array)->opcodes[*opline_num].result.opline_num;
      }
      *opline_num = opline - (compiler_globals.active_op_array)->opcodes;
      opline->opcode = 145;
      opline->result_type = (1<<3);
      opline->result.opline_num = -1;
     }
     return;
    }
    if (do_bind_inherited_class((compiler_globals.active_op_array), opline, (compiler_globals.class_table), ce, 1 ) == ((void*)0)) {
     return;
    }

    zend_del_literal((compiler_globals.active_op_array), fetch_class_opline->op2.constant);
    do { fetch_class_opline->opcode = 0; memset(&fetch_class_opline->result, 0, sizeof(fetch_class_opline->result)); memset(&fetch_class_opline->op1, 0, sizeof(fetch_class_opline->op1)); memset(&fetch_class_opline->op2, 0, sizeof(fetch_class_opline->op2)); fetch_class_opline->result_type = fetch_class_opline->op1_type = fetch_class_opline->op2_type = (1<<3); } while (0);

    table = (compiler_globals.class_table);
    break;
   }
  case 146:
  case 144:
  case 154:
  case 155:


   return;
  default:
   zend_error_noreturn((1<<6L), "Invalid binding type");
   return;
 }

 zend_hash_del(table, (((compiler_globals.active_op_array))->literals[opline->op1.constant]).value.str);
 zend_del_literal((compiler_globals.active_op_array), opline->op1.constant);
 zend_del_literal((compiler_globals.active_op_array), opline->op2.constant);
 do { opline->opcode = 0; memset(&opline->result, 0, sizeof(opline->result)); memset(&opline->op1, 0, sizeof(opline->op1)); memset(&opline->op2, 0, sizeof(opline->op2)); opline->result_type = opline->op1_type = opline->op2_type = (1<<3); } while (0);
}


__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array )
{
 if (op_array->early_binding != -1) {
  zend_bool orig_in_compilation = (compiler_globals.in_compilation);
  zend_uint opline_num = op_array->early_binding;
  zend_class_entry *ce;

  (compiler_globals.in_compilation) = 1;
  while (opline_num != -1) {
   if ((ce = zend_lookup_class((*(op_array->opcodes[opline_num-1].op2.zv)).value.str )) != ((void*)0)) {
    do_bind_inherited_class(op_array, &op_array->opcodes[opline_num], (executor_globals.class_table), ce, 0 );
   }
   opline_num = op_array->opcodes[opline_num].result.opline_num;
  }
  (compiler_globals.in_compilation) = orig_in_compilation;
 }
}


__attribute__ ((visibility("default"))) zend_string *zend_mangle_property_name(const char *src1, int src1_length, const char *src2, int src2_length, int internal)
{
 zend_string *prop_name;
 int prop_name_length;

 prop_name_length = 1 + src1_length + 1 + src2_length;
 prop_name = zend_str_alloc(prop_name_length, internal);
 prop_name->val[0] = '\0';
 memcpy(prop_name->val + 1, src1, src1_length+1);
 memcpy(prop_name->val + 1 + src1_length + 1, src2, src2_length+1);
 return prop_name;
}


static int zend_strnlen(const char* s, int maxlen)
{
 int len = 0;
 while (*s++ && maxlen--) len++;
 return len;
}


__attribute__ ((visibility("default"))) int zend_unmangle_property_name_ex(const char *mangled_property, int len, const char **class_name, const char **prop_name, int *prop_len)
{
 int class_name_len;

 *class_name = ((void*)0);

 if (mangled_property[0]!=0) {
  *prop_name = mangled_property;
  if (prop_len) {
   *prop_len = len;
  }
  return SUCCESS;
 }
 if (len < 3 || mangled_property[1]==0) {
  zend_error((1<<3L), "Illegal member variable name");
  *prop_name = mangled_property;
  if (prop_len) {
   *prop_len = len;
  }
  return FAILURE;
 }

 class_name_len = zend_strnlen(mangled_property + 1, --len - 1) + 1;
 if (class_name_len >= len || mangled_property[class_name_len]!=0) {
  zend_error((1<<3L), "Corrupt member variable name");
  *prop_name = mangled_property;
  if (prop_len) {
   *prop_len = len + 1;
  }
  return FAILURE;
 }
 *class_name = mangled_property + 1;
 *prop_name = (*class_name) + class_name_len;
 if (prop_len) {
  *prop_len = len - class_name_len;
 }
 return SUCCESS;
}


static zend_constant *zend_get_ct_const(zend_string *name, int all_internal_constants_substitution )
{
 zend_constant *c = ((void*)0);
 char *lookup_name;

 if (name->val[0] == '\\') {
  c = zend_hash_str_find_ptr((executor_globals.zend_constants), name->val + 1, name->len - 1);
  if (!c) {
   lookup_name = zend_str_tolower_dup(name->val + 1, name->len - 1);
   c = zend_hash_str_find_ptr((executor_globals.zend_constants), lookup_name, name->len - 1);
   _efree((lookup_name) );

   if (c && (c->flags & (1<<2)) && !(c->flags & (1<<0))) {
    return c;
   }
   return ((void*)0);
  }
 } else if ((c = zend_hash_find_ptr((executor_globals.zend_constants), name)) == ((void*)0)) {
  lookup_name = zend_str_tolower_dup(name->val, name->len);
  c = zend_hash_str_find_ptr((executor_globals.zend_constants), lookup_name, name->len);
  _efree((lookup_name) );

  if (c && (c->flags & (1<<2)) && !(c->flags & (1<<0))) {
   return c;
  }
  return ((void*)0);
 }

 if (c->flags & (1<<2)) {
  return c;
 }
 if (all_internal_constants_substitution &&
     (c->flags & (1<<1)) &&
     !((compiler_globals.compiler_options) & (1<<5)) &&
     !(((c->value).u1.v.type_flags & (1<<0)) != 0)) {
  return c;
 }
 return ((void*)0);
}


static int zend_constant_ct_subst(znode *result, zval *const_name, int all_internal_constants_substitution )
{
 zend_constant *c = zend_get_ct_const((*(const_name)).value.str,
  all_internal_constants_substitution );

 if (c) {
  result->op_type = (1<<0);
  result->u.constant = c->value;
  _zval_copy_ctor((&result->u.constant) );
  return 1;
 }
 return 0;
}


void zend_init_list(void *result, void *item )
{
 void** list = _emalloc((sizeof(void*) * 2) );

 list[0] = item;
 list[1] = ((void*)0);

 *(void**)result = list;
}


void zend_add_to_list(void *result, void *item )
{
 void** list = *(void**)result;
 size_t n = 0;

 if (list) {
  while (list[n]) {
   n++;
  }
 }

 list = _erealloc((list), (sizeof(void*) * (n+2)), 0 );

 list[n] = item;
 list[n+1] = ((void*)0);

 *(void**)result = list;
}


void zend_do_extended_info(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 101;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_extended_fcall_begin(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 102;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


void zend_do_extended_fcall_end(void)
{
 zend_op *opline;

 if (!((compiler_globals.compiler_options) & (1<<0))) {
  return;
 }

 opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 103;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
}


zend_bool zend_is_auto_global(zend_string *name )
{
 zend_auto_global *auto_global;

 if ((auto_global = zend_hash_find_ptr((compiler_globals.auto_globals), name)) != ((void*)0)) {
  if (auto_global->armed) {
   auto_global->armed = auto_global->auto_global_callback(auto_global->name );
  }
  return 1;
 }
 return 0;
}


int zend_register_auto_global(zend_string *name, zend_bool jit, zend_auto_global_callback auto_global_callback )
{
 zend_auto_global auto_global;
 int retval;

 auto_global.name = zend_new_interned_string(name );
 auto_global.auto_global_callback = auto_global_callback;
 auto_global.jit = jit;

 retval = zend_hash_add_mem((compiler_globals.auto_globals), name, &auto_global, sizeof(zend_auto_global)) != ((void*)0) ? SUCCESS : FAILURE;

 zend_str_release(auto_global.name);
 return retval;
}


__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void)
{
 zend_auto_global *auto_global;

 do { uint _idx; for (_idx = 0; _idx < ((compiler_globals.auto_globals))->nNumUsed; _idx++) { Bucket *_p = ((compiler_globals.auto_globals))->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; auto_global = (*(_z)).value.ptr; {
  if (auto_global->jit) {
   auto_global->armed = 1;
  } else if (auto_global->auto_global_callback) {
   auto_global->armed = auto_global->auto_global_callback(auto_global->name );
  } else {
   auto_global->armed = 0;
  }
 } } } while (0);
}


int zendlex(zend_parser_stack_elem *elem )
{
 zval zv;
 int retval;

 if ((compiler_globals.increment_lineno)) {
  (compiler_globals.zend_lineno)++;
  (compiler_globals.increment_lineno) = 0;
 }

again:
 do { (*(&zv)).u1.type_info = 0; } while (0);
 retval = lex_scan(&zv );
 switch (retval) {
  case 374:
  case 375:
  case 376:
  case 379:
   goto again;

  case 378:
   if ((language_scanner_globals.yy_text)[(language_scanner_globals.yy_leng)-1] != '>') {
    (compiler_globals.increment_lineno) = 1;
   }
   if ((compiler_globals.has_bracketed_namespaces) && !(compiler_globals.in_namespace)) {
    goto again;
   }
   retval = ';';
   break;
  case 377:
   retval = 319;
   break;
 }
 if (zval_get_type(&(zv)) != 0) {
  elem->ast = zend_ast_create_zval(&zv);
 }

 return retval;
}


__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers )
{
 zend_bool persistent_hashes = (ce->type == 1) ? 1 : 0;
 dtor_func_t zval_ptr_dtor_func = ((persistent_hashes) ? _zval_internal_ptr_dtor : _zval_ptr_dtor);

 ce->refcount = 1;
 ce->ce_flags = 0x100000;

 ce->default_properties_table = ((void*)0);
 ce->default_static_members_table = ((void*)0);
 _zend_hash_init_ex((&ce->properties_info), (8), ((persistent_hashes ? zend_destroy_property_info_internal : zend_destroy_property_info)), (persistent_hashes), (0) );
 _zend_hash_init_ex((&ce->constants_table), (8), (zval_ptr_dtor_func), (persistent_hashes), (0) );
 _zend_hash_init_ex((&ce->function_table), (8), (zend_function_dtor), (persistent_hashes), (0) );

 if (ce->type == 1) {
# 3018 "Zend/zend_compile.c"
  ce->static_members_table = ((void*)0);

 } else {
  ce->static_members_table = ce->default_static_members_table;
  ce->info.user.doc_comment = ((void*)0);
 }

 ce->default_properties_count = 0;
 ce->default_static_members_count = 0;

 if (nullify_handlers) {
  ce->constructor = ((void*)0);
  ce->destructor = ((void*)0);
  ce->clone = ((void*)0);
  ce->__get = ((void*)0);
  ce->__set = ((void*)0);
  ce->__unset = ((void*)0);
  ce->__isset = ((void*)0);
  ce->__call = ((void*)0);
  ce->__callstatic = ((void*)0);
  ce->__tostring = ((void*)0);
  ce->create_object = ((void*)0);
  ce->get_iterator = ((void*)0);
  ce->iterator_funcs.funcs = ((void*)0);
  ce->interface_gets_implemented = ((void*)0);
  ce->get_static_method = ((void*)0);
  ce->parent = ((void*)0);
  ce->num_interfaces = 0;
  ce->interfaces = ((void*)0);
  ce->num_traits = 0;
  ce->traits = ((void*)0);
  ce->trait_aliases = ((void*)0);
  ce->trait_precedences = ((void*)0);
  ce->serialize = ((void*)0);
  ce->unserialize = ((void*)0);
  ce->serialize_func = ((void*)0);
  ce->unserialize_func = ((void*)0);
  ce->__debugInfo = ((void*)0);
  if (ce->type == 1) {
   ce->info.internal.module = ((void*)0);
   ce->info.internal.builtin_functions = ((void*)0);
  }
 }
}


zend_uint zend_get_class_fetch_type(zend_string *name) {
 if (name->len == sizeof("self") - 1 &&
  !strncasecmp(name->val, "self", sizeof("self") - 1)) {
  return 1;
 } else if (name->len == sizeof("parent") - 1 &&
  !strncasecmp(name->val, "parent", sizeof("parent") - 1)) {
  return 2;
 } else if (name->len == sizeof("static") - 1 &&
  !strncasecmp(name->val, "static", sizeof("static") - 1)) {
  return 3;
 } else {
  return 0;
 }
}

__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var)
{
 return op_array->vars[(((zval*)(((char*)(((void*)0))) + ((int)(var)))) - (((zval*)(((void*)0))) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(0)))))];
}


zend_ast *zend_ast_append_str(zend_ast *left_ast, zend_ast *right_ast) {
 zval *left_zv = zend_ast_get_zval(left_ast);
 zend_string *left = (*(left_zv)).value.str;
 zend_string *right = zend_ast_get_str(right_ast);

 zend_string *result;
 size_t left_len = left->len;
 size_t len = left_len + right->len + 1;

 result = zend_str_realloc(left, len, 0);
 result->val[left_len] = '\\';
 memcpy(&result->val[left_len + 1], right->val, right->len);
 result->val[len] = '\0';
 zend_str_release(right);

 do { zval *__z = (left_zv); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 return left_ast;
}


zend_ast_list *zend_ast_append_doc_comment(zend_ast_list *list ) {
 if ((compiler_globals.doc_comment)) {
  list = zend_ast_list_add(list, zend_ast_create_zval_from_str((compiler_globals.doc_comment)));
  (compiler_globals.doc_comment) = ((void*)0);
 }

 return list;
}

void zend_verify_namespace(void)
{
 if ((compiler_globals.has_bracketed_namespaces) && !(compiler_globals.in_namespace)) {
  zend_error_noreturn((1<<6L), "No code may exist outside of namespace {}");
 }
}


static void zend_reset_import_tables(void) {
 if ((compiler_globals.current_import)) {
  zend_hash_destroy((compiler_globals.current_import));
  _efree(((compiler_globals.current_import)) );
  (compiler_globals.current_import) = ((void*)0);
 }

 if ((compiler_globals.current_import_function)) {
  zend_hash_destroy((compiler_globals.current_import_function));
  _efree(((compiler_globals.current_import_function)) );
  (compiler_globals.current_import_function) = ((void*)0);
 }

 if ((compiler_globals.current_import_const)) {
  zend_hash_destroy((compiler_globals.current_import_const));
  _efree(((compiler_globals.current_import_const)) );
  (compiler_globals.current_import_const) = ((void*)0);
 }
}

static void zend_end_namespace(void) {
 (compiler_globals.in_namespace) = 0;
 zend_reset_import_tables();
 if ((compiler_globals.current_namespace)) {
  zend_str_release((compiler_globals.current_namespace));
  (compiler_globals.current_namespace) = ((void*)0);
 }
}

void zend_do_end_compilation(void)
{
 (compiler_globals.has_bracketed_namespaces) = 0;
 zend_end_namespace();
}




__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len)
{
 register char *end = path + len - 1;
 unsigned int len_adjust = 0;
# 3199 "Zend/zend_compile.c"
 if (len == 0) {

  return 0;
 }


 while (end >= path && (*(end) == '/')) {
  end--;
 }
 if (end < path) {

  path[0] = '/';
  path[1] = '\0';
  return 1 + len_adjust;
 }


 while (end >= path && !(*(end) == '/')) {
  end--;
 }
 if (end < path) {
# 3231 "Zend/zend_compile.c"
  path[0] = '.';
  path[1] = '\0';
  return 1 + len_adjust;

 }


 while (end >= path && (*(end) == '/')) {
  end--;
 }
 if (end < path) {
  path[0] = '/';
  path[1] = '\0';
  return 1 + len_adjust;
 }
 *(end+1) = '\0';

 return (size_t)(end + 1 - path) + len_adjust;
}


static inline zend_bool zend_str_equals_str(zend_string *str1, zend_string *str2) {
 return str1->len == str2->len && !memcmp(str1->val, str2->val, str2->len);
}
static inline zend_bool zend_str_equals_str_ci(zend_string *str1, zend_string *str2) {
 return str1->len == str2->len
  && !zend_binary_strcasecmp(str1->val, str1->len, str2->val, str2->len);
}







static void zend_adjust_for_fetch_type(zend_op *opline, zend_uint type) {
 switch (type & 7) {
  case 0:
   return;
  case 1:
   opline->opcode += 3;
   return;
  case 6:
   opline->opcode += 3;
   opline->extended_value |= 0x04000000;
   return;
  case 2:
   opline->opcode += 6;
   return;
  case 3:
   opline->opcode += 9;
   return;
  case 4:
   opline->opcode += 12;
   opline->extended_value |= type >> 3;
   return;
  case 5:
   opline->opcode += 15;
   return;

 }
}

static inline void zend_make_var_result(znode *result, zend_op *opline ) {
 opline->result_type = (1<<2);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant]; } else { (result)->u.op = opline->result; } } while (0);
}

static inline void zend_make_tmp_result(znode *result, zend_op *opline ) {
 opline->result_type = (1<<1);
 opline->result.var = get_temporary_variable((compiler_globals.active_op_array));
 do { (result)->op_type = opline->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant]; } else { (result)->u.op = opline->result; } } while (0);
}

static zend_op *zend_emit_op(znode *result, zend_uchar opcode, znode *op1, znode *op2 ) {
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = opcode;

 if (op1 == ((void*)0)) {
  opline->op1_type = (1<<3);
 } else {
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 }

 if (op2 == ((void*)0)) {
  opline->op2_type = (1<<3);
 } else {
  do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { opline->op2 = (op2)->u.op; } } while (0);
 }

 if (result) {
  zend_make_var_result(result, opline );
 }
 return opline;
}

static zend_op *zend_emit_op_tmp(
 znode *result, zend_uchar opcode, znode *op1, znode *op2
) {
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = opcode;

 if (op1 == ((void*)0)) {
  opline->op1_type = (1<<3);
 } else {
  do { opline->op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { opline->op1 = (op1)->u.op; } } while (0);
 }

 if (op2 == ((void*)0)) {
  opline->op2_type = (1<<3);
 } else {
  do { opline->op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { opline->op2 = (op2)->u.op; } } while (0);
 }

 zend_make_tmp_result(result, opline );

 return opline;
}

static void zend_emit_tick(void) {
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );

 opline->opcode = 105;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<3);
 opline->extended_value = ((compiler_globals.declarables).ticks).value.lval;
}

static inline zend_op *zend_emit_op_data(znode *value ) {
 return zend_emit_op(((void*)0), 137, value, ((void*)0) );
}

static inline zend_uint zend_emit_jump(zend_uint opnum_target ) {
 zend_uint opnum = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = zend_emit_op(((void*)0), 42, ((void*)0), ((void*)0) );
 opline->op1.opline_num = opnum_target;
 return opnum;
}

static inline zend_uint zend_emit_cond_jump(
 zend_uchar opcode, znode *cond, zend_uint opnum_target
) {
 zend_uint opnum = get_next_op_number((compiler_globals.active_op_array));
 zend_op *opline = zend_emit_op(((void*)0), opcode, cond, ((void*)0) );
 opline->op2.opline_num = opnum_target;
 return opnum;
}

static inline void zend_update_jump_target(zend_uint opnum_jump, zend_uint opnum_target ) {
 zend_op *opline = &(compiler_globals.active_op_array)->opcodes[opnum_jump];
 switch (opline->opcode) {
  case 42:
   opline->op1.opline_num = opnum_target;
   break;
  case 43:
  case 44:
  case 46:
  case 47:
   opline->op2.opline_num = opnum_target;
   break;

 }
}

static inline void zend_update_jump_target_to_next(zend_uint opnum_jump ) {
 zend_update_jump_target(opnum_jump, get_next_op_number((compiler_globals.active_op_array)) );
}

static inline zend_op *zend_delayed_emit_op(
 znode *result, zend_uchar opcode, znode *op1, znode *op2
) {
 zend_op tmp_opline;
 init_op(&tmp_opline );
 tmp_opline.opcode = opcode;
 do { tmp_opline.op1_type = (op1)->op_type; if ((op1)->op_type == (1<<0)) { tmp_opline.op1.constant = zend_add_literal((compiler_globals.active_op_array), &(op1)->u.constant ); } else { tmp_opline.op1 = (op1)->u.op; } } while (0);
 do { tmp_opline.op2_type = (op2)->op_type; if ((op2)->op_type == (1<<0)) { tmp_opline.op2.constant = zend_add_literal((compiler_globals.active_op_array), &(op2)->u.constant ); } else { tmp_opline.op2 = (op2)->u.op; } } while (0);
 if (result) {
  zend_make_var_result(result, &tmp_opline );
 }

 zend_stack_push(&(compiler_globals.delayed_oplines_stack), &tmp_opline);
 return zend_stack_top(&(compiler_globals.delayed_oplines_stack));
}

static inline zend_uint zend_delayed_compile_begin(void) {
 return zend_stack_count(&(compiler_globals.delayed_oplines_stack));
}

static zend_op *zend_delayed_compile_end(zend_uint offset ) {
 zend_op *opline, *oplines = zend_stack_base(&(compiler_globals.delayed_oplines_stack));
 zend_uint i, count = zend_stack_count(&(compiler_globals.delayed_oplines_stack));

                            ;
 for (i = offset; i < count; ++i) {
  opline = get_next_op((compiler_globals.active_op_array) );
  memcpy(opline, &oplines[i], sizeof(zend_op));
 }
 (compiler_globals.delayed_oplines_stack).top = offset;
 return opline;
}

void zend_emit_final_return(zval *zv ) {
 znode zn;
 zend_bool returns_reference = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) != 0;

 zn.op_type = (1<<0);
 if (zv) {
  do { zval *_z1 = (&zn.u.constant); zval *_z2 = (zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
 } else {
  do { (*(&zn.u.constant)).u1.type_info = 1; } while (0);
 }

 zend_emit_op(((void*)0), returns_reference ? 111 : 62, &zn, ((void*)0) );
}


static inline zend_bool zend_is_variable(zend_ast *ast) {
 return ast->kind == ZEND_AST_VAR || ast->kind == ZEND_AST_DIM
  || ast->kind == ZEND_AST_PROP || ast->kind == ZEND_AST_STATIC_PROP
  || ast->kind == ZEND_AST_CALL || ast->kind == ZEND_AST_METHOD_CALL
  || ast->kind == ZEND_AST_STATIC_CALL;
}

static inline zend_bool zend_is_call(zend_ast *ast) {
 return ast->kind == ZEND_AST_CALL
  || ast->kind == ZEND_AST_METHOD_CALL
  || ast->kind == ZEND_AST_STATIC_CALL;
}

static inline zend_bool zend_is_unticked_stmt(zend_ast *ast) {
 return ast->kind == ZEND_AST_STMT_LIST || ast->kind == ZEND_AST_LABEL;
}

static inline zend_bool zend_can_write_to_variable(zend_ast *ast) {
 while (ast->kind == ZEND_AST_DIM || ast->kind == ZEND_AST_PROP) {
  ast = ast->child[0];
 }

 return zend_is_variable(ast);
}

static inline zend_bool zend_is_const_default_class_ref(zend_ast *name_ast) {
 zend_string *name;

 if (name_ast->kind != ZEND_AST_ZVAL) {
  return 0;
 }


 if (!name_ast->attr) {
  return 1;
 }

 name = zend_ast_get_str(name_ast);
 return 0 == zend_get_class_fetch_type(name);
}

static inline void zend_handle_numeric_op(znode *node ) {
 if (node->op_type == (1<<0) && zval_get_type(&(node->u.constant)) == 6) {
  zend_ulong index;

  if (_zend_handle_numeric_str(((node->u.constant).value.str)->val, ((node->u.constant).value.str)->len, &index)) {
   _zval_ptr_dtor((&node->u.constant) );
   { zval *__z = (&node->u.constant); (*(__z)).value.lval = index; (*(__z)).u1.type_info = 4; };
  }
 }
}

static inline void zend_set_class_name_op1(zend_op *opline, znode *class_node ) {
 if (class_node->op_type == (1<<0)) {
  opline->op1_type = (1<<0);
  opline->op1.constant = zend_add_class_name_literal(
   (compiler_globals.active_op_array), (class_node->u.constant).value.str );
 } else {
  do { opline->op1_type = (class_node)->op_type; if ((class_node)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(class_node)->u.constant ); } else { opline->op1 = (class_node)->u.op; } } while (0);
 }
}

static zend_op *zend_compile_class_ref(znode *result, zend_ast *name_ast ) {
 zend_op *opline;
 znode name_node;
 zend_compile_expr(&name_node, name_ast );

 if (name_node.op_type == (1<<0)) {
  zend_string *name = (name_node.u.constant).value.str;
  zend_uint fetch_type = zend_get_class_fetch_type(name);

  opline = zend_emit_op(result, 109, ((void*)0), ((void*)0) );
  opline->extended_value = fetch_type;

  if (fetch_type == 0) {
   zend_uint type = name_ast->kind == ZEND_AST_ZVAL ? name_ast->attr : 0;
   opline->op2_type = (1<<0);
   opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
    zend_resolve_class_name(name, type ) );
  }

  zend_str_release(name);
 } else {
  opline = zend_emit_op(result, 109, ((void*)0), &name_node );
  opline->extended_value = 0;
 }

 return opline;
}

static int zend_try_compile_cv(znode *result, zend_ast *ast ) {
 zend_ast *name_ast = ast->child[0];
 if (name_ast->kind == ZEND_AST_ZVAL) {
  zend_string *name = _zval_get_string((zend_ast_get_zval(name_ast)) );

  if (zend_is_auto_global(name )) {
   zend_str_release(name);
   return FAILURE;
  }

  result->op_type = (1<<4);
  result->u.op.var = lookup_cv((compiler_globals.active_op_array), name );

  if (((name)->len == sizeof("this") - 1 && !memcmp((name)->val, ("this"), sizeof("this") - 1))) {
   (compiler_globals.active_op_array)->this_var = result->u.op.var;
  }
  return SUCCESS;
 }

 return FAILURE;
}

static zend_op *zend_compile_simple_var_no_cv(znode *result, zend_ast *ast, int type ) {
 zend_ast *name_ast = ast->child[0];
 znode name_node;
 zend_op *opline;


 if (ast->kind != ZEND_AST_ZVAL
  && (compiler_globals.active_op_array)->scope && (compiler_globals.active_op_array)->this_var == -1
 ) {
  zend_string *key = zend_str_init("this", sizeof("this") - 1, 0);
  (compiler_globals.active_op_array)->this_var = lookup_cv((compiler_globals.active_op_array), key );
 }

 zend_compile_expr(&name_node, name_ast );

 opline = get_next_op((compiler_globals.active_op_array) );
 opline = zend_emit_op(result, 80, &name_node, ((void*)0) );

 opline->extended_value = 0x10000000;
 if (name_node.op_type == (1<<0)) {
  if (zend_is_auto_global((name_node.u.constant).value.str )) {
   opline->extended_value = 0x00000000;
  }
 }

 return opline;
}

static void zend_compile_simple_var(znode *result, zend_ast *ast, int type ) {
 if (zend_try_compile_cv(result, ast ) == FAILURE) {
  zend_op *opline = zend_compile_simple_var_no_cv(result, ast, type );
  zend_adjust_for_fetch_type(opline, type);
 }
}

static void zend_separate_if_call_and_write(znode *node, zend_ast *ast, int type ) {
 if (type != 0 && type != 3 && zend_is_call(ast)) {
  zend_op *opline = zend_emit_op(((void*)0), 156, node, ((void*)0) );
  opline->result_type = (1<<2);
  opline->result.var = opline->op1.var;
 }
}

void zend_delayed_compile_var(znode *result, zend_ast *ast, zend_uint type );

static zend_op *zend_delayed_compile_dim(znode *result, zend_ast *ast, zend_uint type ) {
 zend_ast *var_ast = ast->child[0];
 zend_ast *dim_ast = ast->child[1];

 znode var_node, dim_node;

 zend_delayed_compile_var(&var_node, var_ast, type );
 zend_separate_if_call_and_write(&var_node, var_ast, type );

 if (dim_ast == ((void*)0)) {
  if (type == 0 || type == 3) {
   zend_error_noreturn((1<<6L), "Cannot use [] for reading");
  }
  if (type == 5) {
   zend_error_noreturn((1<<6L), "Cannot use [] for unsetting");
  }
  dim_node.op_type = (1<<3);
 } else {
  zend_compile_expr(&dim_node, dim_ast );
  zend_handle_numeric_op(&dim_node );
 }

 return zend_delayed_emit_op(result, 81, &var_node, &dim_node );
}

static inline zend_op *zend_compile_dim_common(
 znode *result, zend_ast *ast, zend_uint type
) {
 zend_uint offset = zend_delayed_compile_begin();
 zend_delayed_compile_dim(result, ast, type );
 return zend_delayed_compile_end(offset );
}

void zend_compile_dim(znode *result, zend_ast *ast, int type ) {
 zend_op *opline = zend_compile_dim_common(result, ast, type );
 zend_adjust_for_fetch_type(opline, type);
}

static zend_bool is_this_fetch(zend_ast *ast) {
 if (ast->kind != ZEND_AST_VAR || ast->child[0]->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 zval *name = zend_ast_get_zval(ast->child[0]);
 return zval_get_type(&(*(name))) == 6 && (((*(name)).value.str)->len == sizeof("this") - 1 && !memcmp(((*(name)).value.str)->val, ("this"), sizeof("this") - 1));
}

static zend_op *zend_delayed_compile_prop(
 znode *result, zend_ast *ast, zend_uint type
) {
 zend_ast *obj_ast = ast->child[0];
 zend_ast *prop_ast = ast->child[1];

 znode obj_node, prop_node;
 zend_op *opline;

 if (is_this_fetch(obj_ast)) {
  obj_node.op_type = (1<<3);
 } else {
  zend_delayed_compile_var(&obj_node, obj_ast, type );
  zend_separate_if_call_and_write(&obj_node, obj_ast, type );
 }
 zend_compile_expr(&prop_node, prop_ast );

 opline = zend_delayed_emit_op(result, 82, &obj_node, &prop_node );
 if (opline->op2_type == (1<<0) && zval_get_type(&(((compiler_globals.active_op_array))->literals[opline->op2.constant])) == 6) {
  zend_alloc_polymorphic_cache_slot(opline->op2.constant );
 }

 return opline;
}

static zend_op *zend_compile_prop_common(znode *result, zend_ast *ast, zend_uint type ) {
 zend_uint offset = zend_delayed_compile_begin();
 zend_delayed_compile_prop(result, ast, type );
 return zend_delayed_compile_end(offset );
}

void zend_compile_prop(znode *result, zend_ast *ast, int type ) {
 zend_op *opline = zend_compile_prop_common(result, ast, type );
 zend_adjust_for_fetch_type(opline, type);
}

zend_op *zend_compile_static_prop_common(znode *result, zend_ast *ast, int type ) {
 zend_ast *class_ast = ast->child[0];
 zend_ast *prop_ast = ast->child[1];

 znode class_node, prop_node;
 zend_op *opline;

 if (zend_is_const_default_class_ref(class_ast)) {
  class_node.op_type = (1<<0);
  do { zval *__z = (&class_node.u.constant); zend_string *__s = (zend_resolve_class_name_ast(class_ast )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 } else {
  zend_compile_class_ref(&class_node, class_ast );
 }

 zend_compile_expr(&prop_node, prop_ast );

 opline = zend_emit_op(result, 80, &prop_node, ((void*)0) );
 if (opline->op1_type == (1<<0)) {
  zend_alloc_polymorphic_cache_slot(opline->op1.constant );
 }
 if (class_node.op_type == (1<<0)) {
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal(
   (compiler_globals.active_op_array), (class_node.u.constant).value.str );
 } else {
  do { opline->op2_type = (&class_node)->op_type; if ((&class_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&class_node)->u.constant ); } else { opline->op2 = (&class_node)->u.op; } } while (0);
 }
 opline->extended_value |= 0x30000000;

 return opline;
}

void zend_compile_static_prop(znode *result, zend_ast *ast, zend_uint type ) {
 zend_op *opline = zend_compile_static_prop_common(result, ast, type );
 zend_adjust_for_fetch_type(opline, type);
}

static inline zend_uchar get_list_fetch_opcode(zend_uchar op_type) {
 switch (op_type) {
  case (1<<2):
  case (1<<4):
   return 81;
  case (1<<1):
  case (1<<0):
   return 98;

 }
}

static void zend_compile_list_assign(znode *result, zend_ast *ast, znode *expr_node ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;

 if (list->children == 1 && !list->child[0]) {
  zend_error_noreturn((1<<6L), "Cannot use empty list");
 }

 for (i = 0; i < list->children; ++i) {
  zend_ast *var_ast = list->child[i];
  znode fetch_result, dim_node, var_node, assign_result;
  zend_op *opline;

  if (var_ast == ((void*)0)) {
   continue;
  }

  dim_node.op_type = (1<<0);
  { zval *__z = (&dim_node.u.constant); (*(__z)).value.lval = i; (*(__z)).u1.type_info = 4; };

  if (expr_node->op_type == (1<<0)) {
   do { if ((((*((&(expr_node->u.constant)))).u1.v.type_flags & (1<<1)) != 0)) { zval_addref_p((&(expr_node->u.constant))); } } while (0);
  }

  opline = zend_emit_op(&fetch_result,
   get_list_fetch_opcode(expr_node->op_type), expr_node, &dim_node );
  opline->extended_value |= 0x08000000;

  if (var_ast->kind != ZEND_AST_LIST) {
   if (is_this_fetch(var_ast)) {
    zend_error_noreturn((1<<6L), "Cannot re-assign $this");
   }
   zend_compile_var(&var_node, var_ast, 1 );
   zend_emit_op(&assign_result, 38, &var_node, &fetch_result );
   zend_do_free(&assign_result );
  } else {
   zend_compile_list_assign(&assign_result, var_ast, &fetch_result );
   zend_do_free(&assign_result );
  }
 }
 *result = *expr_node;
}

void zend_ensure_writable_variable(const zend_ast *ast) {
 if (ast->kind == ZEND_AST_CALL) {
  zend_error_noreturn((1<<6L), "Can't use function return value in write context");
 }
 if (ast->kind == ZEND_AST_METHOD_CALL || ast->kind == ZEND_AST_STATIC_CALL) {
  zend_error_noreturn((1<<6L), "Can't use method return value in write context");
 }
}


zend_bool zend_is_assign_to_self(zend_ast *var_ast, zend_ast *expr_ast ) {
 if (expr_ast->kind != ZEND_AST_VAR || expr_ast->child[0]->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 while (zend_is_variable(var_ast) && var_ast->kind != ZEND_AST_VAR) {
  var_ast = var_ast->child[0];
 }

 if (var_ast->kind != ZEND_AST_VAR || var_ast->child[0]->kind != ZEND_AST_ZVAL) {
  return 0;
 }

 {
  zend_string *name1 = _zval_get_string((zend_ast_get_zval(var_ast->child[0])) );
  zend_string *name2 = _zval_get_string((zend_ast_get_zval(expr_ast->child[0])) );
  zend_bool result = zend_str_equals_str(name1, name2);
  zend_str_release(name1);
  zend_str_release(name2);
  return result;
 }
}

void zend_compile_assign(znode *result, zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];
 zend_ast *expr_ast = ast->child[1];

 znode var_node, expr_node;
 zend_op *opline;
 zend_uint offset;

 if (is_this_fetch(var_ast)) {
  zend_error_noreturn((1<<6L), "Cannot re-assign $this");
 }

 zend_ensure_writable_variable(var_ast);

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
  case ZEND_AST_STATIC_PROP:
   zend_compile_var(&var_node, var_ast, 1 );
   zend_compile_expr(&expr_node, expr_ast );
   zend_emit_op(result, 38, &var_node, &expr_node );
   return;
  case ZEND_AST_DIM:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_dim(result, var_ast, 1 );

   if (zend_is_assign_to_self(var_ast, expr_ast )) {

    zend_compile_simple_var_no_cv(&expr_node, expr_ast, 0 );
   } else {
    zend_compile_expr(&expr_node, expr_ast );
   }

   opline = zend_delayed_compile_end(offset );
   opline->opcode = 147;

   opline = zend_emit_op_data(&expr_node );
   opline->op2.var = get_temporary_variable((compiler_globals.active_op_array));
   opline->op2_type = (1<<2);
   return;
  case ZEND_AST_PROP:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_prop(result, var_ast, 1 );
   zend_compile_expr(&expr_node, expr_ast );

   opline = zend_delayed_compile_end(offset );
   opline->opcode = 136;

   zend_emit_op_data(&expr_node );
   return;
  case ZEND_AST_LIST:
   zend_compile_expr(&expr_node, expr_ast );
   zend_compile_list_assign(result, var_ast, &expr_node );
   return;
                             ;
 }
}

static inline void zend_emit_assign_znode(zend_ast *var_ast, znode *value_node ) {
 znode dummy_node;
 zend_ast *assign_ast = zend_ast_create(ZEND_AST_ASSIGN, var_ast,
  zend_ast_create_znode(value_node));
 zend_compile_assign(&dummy_node, assign_ast );
 zend_do_free(&dummy_node );
}

void zend_compile_assign_ref(znode *result, zend_ast *ast ) {
 zend_ast *target_ast = ast->child[0];
 zend_ast *source_ast = ast->child[1];

 znode target_node, source_node;
 zend_op *opline;

 if (is_this_fetch(target_ast)) {
  zend_error_noreturn((1<<6L), "Cannot re-assign $this");
 }
 zend_ensure_writable_variable(target_ast);

 zend_compile_var(&target_node, target_ast, 1 );
 zend_compile_var(&source_node, source_ast, 6 );

 opline = zend_emit_op(result, 39, &target_node, &source_node );
 if (!result) {
  opline->result_type |= (1<<5);
 }

 if (zend_is_call(source_ast)) {
  opline->extended_value = 1<<0;
 } else if (source_ast->kind == ZEND_AST_NEW) {
  opline->extended_value = 1<<1;
 }
}

static inline void zend_emit_assign_ref_znode(zend_ast *var_ast, znode *value_node ) {
 zend_ast *assign_ast = zend_ast_create(ZEND_AST_ASSIGN_REF, var_ast,
  zend_ast_create_znode(value_node));
 zend_compile_assign_ref(((void*)0), assign_ast );
}

void zend_compile_compound_assign(znode *result, zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];
 zend_ast *expr_ast = ast->child[1];
 zend_uint opcode = ast->attr;

 znode var_node, expr_node;
 zend_op *opline;
 zend_uint offset;

 zend_ensure_writable_variable(var_ast);

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
  case ZEND_AST_STATIC_PROP:
   zend_compile_var(&var_node, var_ast, 2 );
   zend_compile_expr(&expr_node, expr_ast );
   zend_emit_op(result, opcode, &var_node, &expr_node );
   return;
  case ZEND_AST_DIM:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_dim(result, var_ast, 2 );
   zend_compile_expr(&expr_node, expr_ast );

   opline = zend_delayed_compile_end(offset );
   opline->opcode = opcode;
   opline->extended_value = 147;

   opline = zend_emit_op_data(&expr_node );
   opline->op2.var = get_temporary_variable((compiler_globals.active_op_array));
   opline->op2_type = (1<<2);
   return;
  case ZEND_AST_PROP:
   offset = zend_delayed_compile_begin();
   zend_delayed_compile_prop(result, var_ast, 2 );
   zend_compile_expr(&expr_node, expr_ast );

   opline = zend_delayed_compile_end(offset );
   opline->opcode = opcode;
   opline->extended_value = 136;

   zend_emit_op_data(&expr_node );
   return;

 }
}

zend_uint zend_compile_args(zend_ast *ast, zend_function *fbc ) {

 zend_ast_list *args = zend_ast_get_list(ast);
 zend_uint i;
 zend_bool uses_arg_unpack = 0;
 zend_uint arg_count = 0;

 for (i = 0; i < args->children; ++i) {
  zend_ast *arg = args->child[i];
  zend_uint arg_num = i + 1;

  znode arg_node;
  zend_op *opline;
  zend_uchar opcode;
  zend_ulong flags = 0;

  if (arg->kind == ZEND_AST_UNPACK) {
   uses_arg_unpack = 1;
   fbc = ((void*)0);

   zend_compile_expr(&arg_node, arg->child[0] );
   opline = zend_emit_op(((void*)0), 165, &arg_node, ((void*)0) );
   opline->op2.num = arg_count;
   continue;
  }

  if (uses_arg_unpack) {
   zend_error_noreturn((1<<6L),
    "Cannot use positional argument after argument unpacking");
  }

  arg_count++;
  if (zend_is_variable(arg)) {
   if (zend_is_call(arg)) {
    zend_compile_var(&arg_node, arg, 0 );
    opcode = 106;
    flags |= (1<<2);
    if (fbc && (__builtin_expect(!(!((fbc)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(arg_num <= (fbc)->common.num_args)), 1) ? ((fbc)->common.arg_info[arg_num-1].pass_by_reference & (1|2)) : (__builtin_expect(!(!((fbc)->common.fn_flags & 0x1000000)), 0) != 0) && ((fbc)->common.arg_info[(fbc)->common.num_args-1].pass_by_reference & (1|2))))) {
     flags |= (1<<0);
     if ((__builtin_expect(!(!((fbc)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(arg_num <= (fbc)->common.num_args)), 1) ? ((fbc)->common.arg_info[arg_num-1].pass_by_reference & (2)) : (__builtin_expect(!(!((fbc)->common.fn_flags & 0x1000000)), 0) != 0) && ((fbc)->common.arg_info[(fbc)->common.num_args-1].pass_by_reference & (2))))) {
      flags |= (1<<3);
     }
    }
   } else if (fbc) {
    if ((__builtin_expect(!(!((fbc)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(arg_num <= (fbc)->common.num_args)), 1) ? ((fbc)->common.arg_info[arg_num-1].pass_by_reference & (1|2)) : (__builtin_expect(!(!((fbc)->common.fn_flags & 0x1000000)), 0) != 0) && ((fbc)->common.arg_info[(fbc)->common.num_args-1].pass_by_reference & (1|2))))) {
     zend_compile_var(&arg_node, arg, 1 );
     opcode = 67;
    } else {
     zend_compile_var(&arg_node, arg, 0 );
     opcode = 117;
    }
   } else {
    zend_compile_var(&arg_node, arg,
     4 | (arg_num << 3) );
    opcode = 66;
   }
  } else {
   zend_compile_expr(&arg_node, arg );
   if (arg_node.op_type & ((1<<2)|(1<<4))) {
    opcode = 106;
    if (fbc && (__builtin_expect(!(!((fbc)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(arg_num <= (fbc)->common.num_args)), 1) ? ((fbc)->common.arg_info[arg_num-1].pass_by_reference & (1)) : (__builtin_expect(!(!((fbc)->common.fn_flags & 0x1000000)), 0) != 0) && ((fbc)->common.arg_info[(fbc)->common.num_args-1].pass_by_reference & (1))))) {
     flags |= (1<<0);
    }
   } else {
    if (fbc) {
     opcode = 65;
     if ((__builtin_expect(!(!((fbc)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(arg_num <= (fbc)->common.num_args)), 1) ? ((fbc)->common.arg_info[arg_num-1].pass_by_reference & (1)) : (__builtin_expect(!(!((fbc)->common.fn_flags & 0x1000000)), 0) != 0) && ((fbc)->common.arg_info[(fbc)->common.num_args-1].pass_by_reference & (1))))) {
      zend_error_noreturn((1<<6L), "Only variables can be passed by reference");
     }
    } else {
     opcode = 116;
    }
   }
  }

  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = opcode;
  do { opline->op1_type = (&arg_node)->op_type; if ((&arg_node)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&arg_node)->u.constant ); } else { opline->op1 = (&arg_node)->u.op; } } while (0);
  opline->op2_type = (1<<3);
  opline->op2.opline_num = arg_num;

  if (opcode == 106) {
   if (fbc) {
    flags |= (1<<1);
   }
   opline->extended_value = flags;
  } else if (fbc) {
   opline->extended_value = (1<<1);
  }
 }

 return arg_count;
}

void zend_compile_call_common(znode *result, zend_ast *args_ast, zend_function *fbc ) {
 zend_op *opline;
 zend_uint opnum_init = get_next_op_number((compiler_globals.active_op_array)) - 1;
 zend_uint arg_count;
 zend_uint call_flags;

 zend_do_extended_fcall_begin();

 arg_count = zend_compile_args(args_ast, fbc );

 opline = &(compiler_globals.active_op_array)->opcodes[opnum_init];
 opline->extended_value = arg_count;

 call_flags = (opline->opcode == 68 ? (1 << 0) : 0);
 opline = zend_emit_op(result, 60, ((void*)0), ((void*)0) );
 opline->op1.num = call_flags;

 zend_do_extended_fcall_end();
}

zend_bool zend_compile_function_name(znode *name_node, zend_ast *name_ast ) {
 zend_string *orig_name = zend_ast_get_str(name_ast);
 zend_bool is_fully_qualified;

 name_node->op_type = (1<<0);
 do { zval *__z = (&name_node->u.constant); zend_string *__s = (zend_resolve_function_name( orig_name, name_ast->attr, &is_fully_qualified )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);


 return !is_fully_qualified && (compiler_globals.current_namespace);
}

void zend_compile_ns_call(znode *result, znode *name_node, zend_ast *args_ast ) {
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 69;
 opline->op1_type = (1<<3);
 opline->op2_type = (1<<0);
 opline->op2.constant = zend_add_ns_func_name_literal(
  (compiler_globals.active_op_array), &name_node->u.constant );
 zend_alloc_cache_slot(opline->op2.constant );

 zend_compile_call_common(result, args_ast, ((void*)0) );
}

void zend_compile_dynamic_call(znode *result, znode *name_node, zend_ast *args_ast ) {
 zend_op *opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 59;
 opline->op1_type = (1<<3);
 if (name_node->op_type == (1<<0) && zval_get_type(&(name_node->u.constant)) == 6) {
  opline->op2_type = (1<<0);
  opline->op2.constant
   = zend_add_func_name_literal((compiler_globals.active_op_array), &name_node->u.constant );
  zend_alloc_cache_slot(opline->op2.constant );
 } else {
  do { opline->op2_type = (name_node)->op_type; if ((name_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(name_node)->u.constant ); } else { opline->op2 = (name_node)->u.op; } } while (0);
 }

 zend_compile_call_common(result, args_ast, ((void*)0) );
}

static zend_bool zend_args_contain_unpack(zend_ast_list *args) {
 zend_uint i;
 for (i = 0; i < args->children; ++i) {
  if (args->child[i]->kind == ZEND_AST_UNPACK) {
   return 1;
  }
 }
 return 0;
}

int zend_compile_func_strlen(znode *result, zend_ast_list *args ) {
 znode arg_node;

 if (((compiler_globals.compiler_options) & (1<<6))
  || args->children != 1 || args->child[0]->kind == ZEND_AST_UNPACK
 ) {
  return FAILURE;
 }

 zend_compile_expr(&arg_node, args->child[0] );
 zend_emit_op(result, 121, &arg_node, ((void*)0) );
 return SUCCESS;
}

int zend_compile_func_typecheck(znode *result, zend_ast_list *args, zend_uint type ) {
 znode arg_node;
 zend_op *opline;

 if (args->children != 1 || args->child[0]->kind == ZEND_AST_UNPACK) {
  return FAILURE;
 }

 zend_compile_expr(&arg_node, args->child[0] );
 opline = zend_emit_op(result, 123, &arg_node, ((void*)0) );
 opline->extended_value = type;
 return SUCCESS;
}

int zend_compile_func_defined(znode *result, zend_ast_list *args ) {
 zend_string *name;
 zend_op *opline;

 if (args->children != 1 || args->child[0]->kind != ZEND_AST_ZVAL) {
  return FAILURE;
 }

 name = _zval_get_string((zend_ast_get_zval(args->child[0])) );
 if (zend_memrchr(name->val, '\\', name->len) || zend_memrchr(name->val, ':', name->len)) {
  zend_str_release(name);
  return FAILURE;
 }

 opline = zend_emit_op(result, 122, ((void*)0), ((void*)0) );
 opline->op1_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 zend_alloc_cache_slot(opline->op1.constant );


 {
  zval c;
  zend_string *lcname = zend_str_alloc(name->len, 0);
  zend_str_tolower_copy(lcname->val, name->val, name->len);
  do { zval *__z = (&c); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
  zend_add_literal((compiler_globals.active_op_array), &c );
 }
 return SUCCESS;
}

static int zend_try_compile_ct_bound_init_user_func(
 znode *result, zend_ast *name_ast, zend_uint num_args
) {
 zend_string *name, *lcname;
 zend_function *fbc;
 zend_op *opline;

 if (name_ast->kind != ZEND_AST_CONST || zval_get_type(&(*(zend_ast_get_zval(name_ast)))) != 6) {
  return FAILURE;
 }

 name = zend_ast_get_str(name_ast);
 lcname = zend_str_alloc(name->len, 0);
 zend_str_tolower_copy(lcname->val, name->val, name->len);

 fbc = zend_hash_find_ptr((compiler_globals.function_table), lcname);
 if (!fbc || (fbc->type == 1 &&
  ((compiler_globals.compiler_options) & (1<<2)))
 ) {
  zend_str_free(lcname);
  return FAILURE;
 }

 opline = zend_emit_op(((void*)0), 61, ((void*)0), ((void*)0) );
 opline->op2_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 opline->extended_value = num_args;

 return SUCCESS;
}

static void zend_compile_init_user_func(
 znode *result, zend_ast *name_ast, zend_uint num_args, zend_string *orig_func_name
) {
 zend_op *opline;
 znode name_node;

 if (zend_try_compile_ct_bound_init_user_func(result, name_ast, num_args ) == SUCCESS) {
  return;
 }

 zend_compile_expr(&name_node, name_ast );

 opline = zend_emit_op(((void*)0), 118, ((void*)0), &name_node );
 opline->op1_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (zend_str_copy(orig_func_name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 opline->extended_value = num_args;
}


int zend_compile_func_cufa(znode *result, zend_ast_list *args, zend_string *lcname ) {
 znode arg_node;

 if (args->children != 2 || zend_args_contain_unpack(args)) {
  return FAILURE;
 }

 zend_compile_init_user_func(((void*)0), args->child[0], 1, lcname );
 zend_compile_expr(&arg_node, args->child[1] );
 zend_emit_op(((void*)0), 119, &arg_node, ((void*)0) );
 zend_emit_op(result, 60, ((void*)0), ((void*)0) );

 return SUCCESS;
}


int zend_compile_func_cuf(znode *result, zend_ast_list *args, zend_string *lcname ) {
 zend_uint i;

 if (args->children < 1 || zend_args_contain_unpack(args)) {
  return FAILURE;
 }

 zend_compile_init_user_func(((void*)0), args->child[0], args->children - 1, lcname );
 for (i = 1; i < args->children; ++i) {
  zend_ast *arg_ast = args->child[i];
  znode arg_node;
  zend_op *opline;
  zend_bool send_user = 0;

  if (zend_is_variable(arg_ast) && !zend_is_call(arg_ast)) {
   zend_compile_var(&arg_node, arg_ast, 4 | (i << 3) );
   send_user = 1;
  } else {
   zend_compile_expr(&arg_node, arg_ast );
   if (arg_node.op_type & ((1<<2)|(1<<4))) {
    send_user = 1;
   }
  }

  if (send_user) {
   opline = zend_emit_op(((void*)0), 120, &arg_node, ((void*)0) );
  } else {
   opline = zend_emit_op(((void*)0), 65, &arg_node, ((void*)0) );
  }

  opline->op2.opline_num = i;
 }
 zend_emit_op(result, 60, ((void*)0), ((void*)0) );

 return SUCCESS;
}

int zend_try_compile_special_func(
 znode *result, zend_string *lcname, zend_ast_list *args
) {
 if (((lcname)->len == sizeof("strlen") - 1 && !memcmp((lcname)->val, ("strlen"), sizeof("strlen") - 1))) {
  return zend_compile_func_strlen(result, args );
 } else if (((lcname)->len == sizeof("is_null") - 1 && !memcmp((lcname)->val, ("is_null"), sizeof("is_null") - 1))) {
  return zend_compile_func_typecheck(result, args, 1 );
 } else if (((lcname)->len == sizeof("is_bool") - 1 && !memcmp((lcname)->val, ("is_bool"), sizeof("is_bool") - 1))) {
  return zend_compile_func_typecheck(result, args, 13 );
 } else if (((lcname)->len == sizeof("is_long") - 1 && !memcmp((lcname)->val, ("is_long"), sizeof("is_long") - 1))) {
  return zend_compile_func_typecheck(result, args, 4 );
 } else if (((lcname)->len == sizeof("is_float") - 1 && !memcmp((lcname)->val, ("is_float"), sizeof("is_float") - 1))) {
  return zend_compile_func_typecheck(result, args, 5 );
 } else if (((lcname)->len == sizeof("is_string") - 1 && !memcmp((lcname)->val, ("is_string"), sizeof("is_string") - 1))) {
  return zend_compile_func_typecheck(result, args, 6 );
 } else if (((lcname)->len == sizeof("is_array") - 1 && !memcmp((lcname)->val, ("is_array"), sizeof("is_array") - 1))) {
  return zend_compile_func_typecheck(result, args, 7 );
 } else if (((lcname)->len == sizeof("is_object") - 1 && !memcmp((lcname)->val, ("is_object"), sizeof("is_object") - 1))) {
  return zend_compile_func_typecheck(result, args, 8 );
 } else if (((lcname)->len == sizeof("is_resource") - 1 && !memcmp((lcname)->val, ("is_resource"), sizeof("is_resource") - 1))) {
  return zend_compile_func_typecheck(result, args, 9 );
 } else if (((lcname)->len == sizeof("defined") - 1 && !memcmp((lcname)->val, ("defined"), sizeof("defined") - 1))) {
  return zend_compile_func_defined(result, args );
 } else if (((lcname)->len == sizeof("call_user_func_array") - 1 && !memcmp((lcname)->val, ("call_user_func_array"), sizeof("call_user_func_array") - 1))) {
  return zend_compile_func_cufa(result, args, lcname );
 } else if (((lcname)->len == sizeof("call_user_func") - 1 && !memcmp((lcname)->val, ("call_user_func"), sizeof("call_user_func") - 1))) {
  return zend_compile_func_cuf(result, args, lcname );
 } else {
  return FAILURE;
 }
}

void zend_compile_call(znode *result, zend_ast *ast, int type ) {
 zend_ast *name_ast = ast->child[0];
 zend_ast *args_ast = ast->child[1];

 znode name_node;

 if (name_ast->kind != ZEND_AST_ZVAL || zval_get_type(&(*(zend_ast_get_zval(name_ast)))) != 6) {
  zend_compile_expr(&name_node, name_ast );
  zend_compile_dynamic_call(result, &name_node, args_ast );
  return;
 }

 {
  zend_bool runtime_resolution = zend_compile_function_name(&name_node, name_ast );
  if (runtime_resolution) {
   zend_compile_ns_call(result, &name_node, args_ast );
   return;
  }
 }

 {
  zval *name = &name_node.u.constant;
  zend_string *lcname = zend_str_alloc((*(name)).value.str->len, 0);
  zend_function *fbc;
  zend_op *opline;

  zend_str_tolower_copy(lcname->val, (*(name)).value.str->val, (*(name)).value.str->len);

  fbc = zend_hash_find_ptr((compiler_globals.function_table), lcname);
  if (!fbc || (fbc->type == 1 &&
   ((compiler_globals.compiler_options) & (1<<2)))
  ) {
   zend_str_release(lcname);
   zend_compile_dynamic_call(result, &name_node, args_ast );
   return;
  }

  if (zend_try_compile_special_func(result, lcname,
    zend_ast_get_list(args_ast) ) == SUCCESS
  ) {
   zend_str_release(lcname);
   _zval_ptr_dtor((&name_node.u.constant) );
   return;
  }

  _zval_ptr_dtor((&name_node.u.constant) );
  do { zval *__z = (&name_node.u.constant); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);

  opline = zend_emit_op(((void*)0), 61, ((void*)0), &name_node );
  zend_alloc_cache_slot(opline->op2.constant );

  zend_compile_call_common(result, args_ast, fbc );
 }
}

void zend_compile_method_call(znode *result, zend_ast *ast, int type ) {
 zend_ast *obj_ast = ast->child[0];
 zend_ast *method_ast = ast->child[1];
 zend_ast *args_ast = ast->child[2];

 znode obj_node, method_node;
 zend_op *opline;

 if (is_this_fetch(obj_ast)) {
  obj_node.op_type = (1<<3);
 } else {
  zend_compile_var(&obj_node, obj_ast, type );
 }

 zend_compile_expr(&method_node, method_ast );
 opline = zend_emit_op(((void*)0), 112, &obj_node, ((void*)0) );

 if (method_node.op_type == (1<<0)) {
  if (zval_get_type(&(method_node.u.constant)) != 6) {
   zend_error_noreturn((1<<6L), "Method name must be a string");
  }

  opline->op2_type = (1<<0);
  opline->op2.constant =
   zend_add_func_name_literal((compiler_globals.active_op_array), &method_node.u.constant );
  zend_alloc_polymorphic_cache_slot(opline->op2.constant );
 } else {
  do { opline->op2_type = (&method_node)->op_type; if ((&method_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&method_node)->u.constant ); } else { opline->op2 = (&method_node)->u.op; } } while (0);
 }

 zend_compile_call_common(result, args_ast, ((void*)0) );
}

zend_bool zend_is_constructor(zend_string *name) {
 return ((name)->len == sizeof("__construct") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("__construct"), sizeof("__construct") - 1));
}

void zend_compile_static_call(znode *result, zend_ast *ast, int type ) {
 zend_ast *class_ast = ast->child[0];
 zend_ast *method_ast = ast->child[1];
 zend_ast *args_ast = ast->child[2];

 znode class_node, method_node;
 zend_op *opline;
 zend_ulong extended_value = 0;

 if (zend_is_const_default_class_ref(class_ast)) {
  class_node.op_type = (1<<0);
  do { zval *__z = (&class_node.u.constant); zend_string *__s = (zend_resolve_class_name_ast(class_ast )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 } else {
  opline = zend_compile_class_ref(&class_node, class_ast );
  extended_value = opline->extended_value;
 }

 zend_compile_expr(&method_node, method_ast );
 if (method_node.op_type == (1<<0)) {
  zval *name = &method_node.u.constant;
  if (zval_get_type(&(*(name))) != 6) {
   zend_error_noreturn((1<<6L), "Method name must be a string");
  }
  if (zend_is_constructor((*(name)).value.str)) {
   _zval_ptr_dtor((name) );
   method_node.op_type = (1<<3);
  }
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 opline->opcode = 113;
 opline->extended_value = extended_value;

 zend_set_class_name_op1(opline, &class_node );

 if (method_node.op_type == (1<<0)) {
  opline->op2_type = (1<<0);
  opline->op2.constant =
   zend_add_func_name_literal((compiler_globals.active_op_array), &method_node.u.constant );
  if (opline->op1_type == (1<<0)) {
   zend_alloc_cache_slot(opline->op2.constant );
  } else {
   zend_alloc_polymorphic_cache_slot(opline->op2.constant );
  }
 } else {
  do { opline->op2_type = (&method_node)->op_type; if ((&method_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&method_node)->u.constant ); } else { opline->op2 = (&method_node)->u.op; } } while (0);
 }

 zend_compile_call_common(result, args_ast, ((void*)0) );
}

void zend_compile_new(znode *result, zend_ast *ast ) {
 zend_ast *class_ast = ast->child[0];
 zend_ast *args_ast = ast->child[1];

 znode class_node, ctor_result;
 zend_op *opline;
 zend_uint opnum;

 zend_compile_class_ref(&class_node, class_ast );

 opnum = get_next_op_number((compiler_globals.active_op_array));
 opline = zend_emit_op(result, 68, &class_node, ((void*)0) );

 zend_compile_call_common(&ctor_result, args_ast, ((void*)0) );
 zend_do_free(&ctor_result );


 opline = &(compiler_globals.active_op_array)->opcodes[opnum];
 opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));
}

void zend_compile_clone(znode *result, zend_ast *ast ) {
 zend_ast *obj_ast = ast->child[0];

 znode obj_node;
 zend_compile_expr(&obj_node, obj_ast );

 zend_emit_op(result, 110, &obj_node, ((void*)0) );
}

void zend_compile_global_var(zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];
 zend_ast *name_ast = var_ast->child[0];

 znode name_node, result;

 zend_compile_expr(&name_node, name_ast );
 if (name_node.op_type == (1<<0)) {
  if (zval_get_type(&(name_node.u.constant)) != 6) {
   if (zval_get_type(&(*(&name_node.u.constant))) != 6) { _convert_to_string((&name_node.u.constant) ); };
  }
 }

 if (zend_try_compile_cv(&result, var_ast ) == SUCCESS) {
  zend_emit_op(((void*)0), 168, &result, &name_node );
 } else {
  zend_emit_op(&result, 83, &name_node, ((void*)0) );




  zend_emit_assign_ref_znode(var_ast, &result );
 }
}

static void zend_compile_static_var_common(
 zend_ast *var_ast, zval *value, zend_bool by_ref
) {
 znode var_node, result;
 zend_op *opline;

 zend_compile_expr(&var_node, var_ast );

 if (!(compiler_globals.active_op_array)->static_variables) {
  if ((compiler_globals.active_op_array)->scope) {
   (compiler_globals.active_op_array)->scope->ce_flags |= 0x800000;
  }
  ((compiler_globals.active_op_array)->static_variables) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init(((compiler_globals.active_op_array)->static_variables), (8), (_zval_ptr_dtor), (0) );
 }

 _zend_hash_update((compiler_globals.active_op_array)->static_variables, (var_node.u.constant).value.str, value );

 opline = zend_emit_op(&result, by_ref ? 83 : 80, &var_node, ((void*)0) );
 opline->extended_value = 0x20000000;

 if (by_ref) {
  zend_ast *fetch_ast = zend_ast_create(ZEND_AST_VAR, var_ast);
  zend_emit_assign_ref_znode(fetch_ast, &result );
 } else {
  zend_ast *fetch_ast = zend_ast_create(ZEND_AST_VAR, var_ast);
  zend_emit_assign_znode(fetch_ast, &result );
 }
}

void zend_compile_static_var(zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];
 zend_ast *value_ast = ast->child[1];
 zval value_zv;

 if (value_ast) {
  zend_const_expr_to_zval(&value_zv, value_ast );
 } else {
  do { (*(&value_zv)).u1.type_info = 1; } while (0);
 }

 zend_compile_static_var_common(var_ast, &value_zv, 1 );
}

void zend_compile_unset(zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];

 znode var_node;
 zend_op *opline;
 switch (var_ast->kind) {
  case ZEND_AST_VAR:
   if (zend_try_compile_cv(&var_node, var_ast ) == SUCCESS) {
    opline = zend_emit_op(((void*)0), 74, &var_node, ((void*)0) );
    opline->extended_value = 0x10000000 | 0x00800000;
   } else {
    opline = zend_compile_simple_var_no_cv(((void*)0), var_ast, 5 );
    opline->opcode = 74;
   }
   return;
  case ZEND_AST_DIM:
   opline = zend_compile_dim_common(((void*)0), var_ast, 5 );
   opline->opcode = 75;
   return;
  case ZEND_AST_PROP:
   opline = zend_compile_prop_common(((void*)0), var_ast, 5 );
   opline->opcode = 76;
   return;
  case ZEND_AST_STATIC_PROP:
   opline = zend_compile_static_prop_common(((void*)0), var_ast, 5 );
   opline->opcode = 74;
   return;

 }
}

static void zend_free_foreach_and_switch_variables(void) {
 zend_uint opnum_start, opnum_end, i;

 opnum_start = get_next_op_number((compiler_globals.active_op_array));





 zend_stack_apply(&(compiler_globals.switch_cond_stack), 1, (int (*)(void *element)) generate_free_switch_expr);
 zend_stack_apply(&(compiler_globals.foreach_copy_stack), 1, (int (*)(void *element)) generate_free_foreach_copy);


 opnum_end = get_next_op_number((compiler_globals.active_op_array));

 for (i = opnum_start; i < opnum_end; ++i) {
  (compiler_globals.active_op_array)->opcodes[i].extended_value |= (1<<2);
 }
}

void zend_compile_return(zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 zend_bool by_ref = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) != 0;

 znode expr_node;
 zend_op *opline;

 if (!expr_ast) {
  expr_node.op_type = (1<<0);
  do { (*(&expr_node.u.constant)).u1.type_info = 1; } while (0);
 } else if (by_ref && zend_is_variable(expr_ast) && !zend_is_call(expr_ast)) {
  zend_compile_var(&expr_node, expr_ast, 6 );
 } else {
  zend_compile_expr(&expr_node, expr_ast );
 }

 zend_free_foreach_and_switch_variables();

 if ((compiler_globals.context).in_finally) {
  zend_emit_op(((void*)0), 159, ((void*)0), ((void*)0) );
 }

 opline = zend_emit_op(((void*)0), by_ref ? 111 : 62,
  &expr_node, ((void*)0) );

 if (expr_ast) {
  if (zend_is_call(expr_ast)) {
   opline->extended_value = 1<<0;
  } else if (!zend_is_variable(expr_ast)) {
   opline->extended_value = 1<<2;
  }
 }
}

void zend_compile_echo(zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast );

 zend_emit_op(((void*)0), 40, &expr_node, ((void*)0) );
}

void zend_compile_throw(zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast );

 zend_emit_op(((void*)0), 108, &expr_node, ((void*)0) );
}

void zend_compile_break_continue(zend_ast *ast ) {
 zend_ast *depth_ast = ast->child[0];

 znode depth_node;
 zend_op *opline;

                                                                           ;

 if (depth_ast) {
  if (depth_ast->kind != ZEND_AST_ZVAL) {
   zend_error_noreturn((1<<6L), "'%s' operator with non-constant operand "
    "is no longer supported", ast->kind == ZEND_AST_BREAK ? "break" : "continue");
  }

  zend_compile_expr(&depth_node, depth_ast );

  if (zval_get_type(&(depth_node.u.constant)) != 4 || (depth_node.u.constant).value.lval < 1) {
   zend_error_noreturn((1<<6L), "'%s' operator accepts only positive numbers",
    ast->kind == ZEND_AST_BREAK ? "break" : "continue");
  }
 } else {
  depth_node.op_type = (1<<0);
  { zval *__z = (&depth_node.u.constant); (*(__z)).value.lval = 1; (*(__z)).u1.type_info = 4; };
 }

 opline = zend_emit_op(((void*)0), ast->kind == ZEND_AST_BREAK ? 50 : 51,
  ((void*)0), &depth_node );
 opline->op1.opline_num = (compiler_globals.context).current_brk_cont;
}

void zend_compile_goto(zend_ast *ast ) {
 zend_ast *label_ast = ast->child[0];
 znode label_node;
 zend_op *opline;

 zend_compile_expr(&label_node, label_ast );
 opline = zend_emit_op(((void*)0), 100, ((void*)0), &label_node );
 opline->extended_value = (compiler_globals.context).current_brk_cont;
 zend_resolve_goto_label((compiler_globals.active_op_array), opline, 0 );
}

void zend_compile_label(zend_ast *ast ) {
 zval *label = zend_ast_get_zval(ast->child[0]);
 zend_label dest;

                                          ;

 if (!(compiler_globals.context).labels) {
  ((compiler_globals.context).labels) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init(((compiler_globals.context).labels), (8), (ptr_dtor), (0) );
 }

 dest.brk_cont = (compiler_globals.context).current_brk_cont;
 dest.opline_num = get_next_op_number((compiler_globals.active_op_array));

 if (!zend_hash_add_mem((compiler_globals.context).labels, (*(label)).value.str, &dest, sizeof(zend_label))) {
  zend_error_noreturn((1<<6L), "Label '%s' already defined", (*(label)).value.str->val);
 }
}

void zend_compile_while(zend_ast *ast ) {
 zend_ast *cond_ast = ast->child[0];
 zend_ast *stmt_ast = ast->child[1];

 znode cond_node;
 zend_uint opnum_start, opnum_jmpz;

 opnum_start = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_expr(&cond_node, cond_ast );

 opnum_jmpz = zend_emit_cond_jump(43, &cond_node, 0 );
 zend_begin_loop();

 zend_compile_stmt(stmt_ast );

 zend_emit_jump(opnum_start );

 zend_update_jump_target_to_next(opnum_jmpz );

 zend_end_loop(opnum_start, 0 );
}

void zend_compile_do_while(zend_ast *ast ) {
 zend_ast *stmt_ast = ast->child[0];
 zend_ast *cond_ast = ast->child[1];

 znode cond_node;
 zend_uint opnum_start, opnum_cond;

 zend_begin_loop();

 opnum_start = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_stmt(stmt_ast );

 opnum_cond = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_expr(&cond_node, cond_ast );

 zend_emit_cond_jump(44, &cond_node, opnum_start );

 zend_end_loop(opnum_cond, 0 );
}

void zend_compile_expr_list(znode *result, zend_ast *ast ) {
 zend_ast_list *list;
 zend_uint i;

 result->op_type = (1<<0);
 do { (*(&result->u.constant)).u1.type_info = 3; } while (0);

 if (!ast) {
  return;
 }

 list = zend_ast_get_list(ast);
 for (i = 0; i < list->children; ++i) {
  zend_ast *expr_ast = list->child[i];

  zend_do_free(result );
  zend_compile_expr(result, expr_ast );
 }
}

void zend_compile_for(zend_ast *ast ) {
 zend_ast *init_ast = ast->child[0];
 zend_ast *cond_ast = ast->child[1];
 zend_ast *loop_ast = ast->child[2];
 zend_ast *stmt_ast = ast->child[3];

 znode result;
 zend_uint opnum_cond, opnum_jmpz, opnum_loop;

 zend_compile_expr_list(&result, init_ast );
 zend_do_free(&result );

 opnum_cond = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_expr_list(&result, cond_ast );
 zend_do_extended_info();

 opnum_jmpz = zend_emit_cond_jump(43, &result, 0 );
 zend_begin_loop();

 zend_compile_stmt(stmt_ast );

 opnum_loop = get_next_op_number((compiler_globals.active_op_array));
 zend_compile_expr_list(&result, loop_ast );
 zend_do_free(&result );

 zend_emit_jump(opnum_cond );

 zend_update_jump_target_to_next(opnum_jmpz );

 zend_end_loop(opnum_loop, 0 );
}

void zend_compile_foreach(zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 zend_ast *value_ast = ast->child[1];
 zend_ast *key_ast = ast->child[2];
 zend_ast *stmt_ast = ast->child[3];
 zend_bool by_ref = value_ast->kind == ZEND_AST_REF;
 zend_bool is_variable = zend_is_variable(expr_ast) && !zend_is_call(expr_ast)
  && zend_can_write_to_variable(expr_ast);

 znode expr_node, reset_node, value_node, key_node, dummy_node;
 zend_op *opline;
 zend_uint opnum_reset, opnum_fetch;
 zend_op foreach_stack_opline;

 if (key_ast) {
  if (key_ast->kind == ZEND_AST_REF) {
   zend_error_noreturn((1<<6L), "Key element cannot be a reference");
  }
  if (key_ast->kind == ZEND_AST_LIST) {
   zend_error_noreturn((1<<6L), "Cannot use list as key element");
  }
 }

 if (by_ref) {
  value_ast = value_ast->child[0];
 }

 if (by_ref && is_variable) {
  zend_compile_var(&expr_node, expr_ast, 1 );
 } else {
  zend_compile_expr(&expr_node, expr_ast );
 }

 opnum_reset = get_next_op_number((compiler_globals.active_op_array));
 opline = zend_emit_op(&reset_node, 77, &expr_node, ((void*)0) );
 if (by_ref && is_variable) {
  opline->extended_value = (1<<0) | (1<<1);
 }

 do { foreach_stack_opline.result_type = (&reset_node)->op_type; if ((&reset_node)->op_type == (1<<0)) { foreach_stack_opline.result.constant = zend_add_literal((compiler_globals.active_op_array), &(&reset_node)->u.constant ); } else { foreach_stack_opline.result = (&reset_node)->u.op; } } while (0);
 zend_stack_push(&(compiler_globals.foreach_copy_stack), &foreach_stack_opline);

 opnum_fetch = get_next_op_number((compiler_globals.active_op_array));
 opline = zend_emit_op(&value_node, 78, &reset_node, ((void*)0) );
 if (by_ref) {
  opline->extended_value |= 1;
 }
 if (key_ast) {
  opline->extended_value |= 2;
 }

 opline = zend_emit_op(((void*)0), 137, ((void*)0), ((void*)0) );


 opline->op1_type = (1<<1);
 opline->op1.var = get_temporary_variable((compiler_globals.active_op_array));
 if (sizeof(HashPointer) > sizeof(zval)) {

  get_temporary_variable((compiler_globals.active_op_array));
 }

 if (key_ast) {
  zend_make_tmp_result(&key_node, opline );
 }

 if (value_ast->attr == ZEND_AST_LIST) {
  zend_compile_list_assign(&dummy_node, value_ast, &value_node );
  zend_do_free(&dummy_node );
 } else if (by_ref) {
  zend_emit_assign_ref_znode(value_ast, &value_node );
 } else {
  zend_emit_assign_znode(value_ast, &value_node );
 }

 if (key_ast) {
  zend_emit_assign_znode(key_ast, &key_node );
 }

 zend_begin_loop();

 zend_compile_stmt(stmt_ast );

 zend_emit_jump(opnum_fetch );

 opline = &(compiler_globals.active_op_array)->opcodes[opnum_reset];
 opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));

 opline = &(compiler_globals.active_op_array)->opcodes[opnum_fetch];
 opline->op2.opline_num = get_next_op_number((compiler_globals.active_op_array));

 zend_end_loop(opnum_fetch, 1 );

 {
  zend_op *container_ptr = zend_stack_top(&(compiler_globals.foreach_copy_stack));
  generate_free_foreach_copy(container_ptr );
  zend_stack_del_top(&(compiler_globals.foreach_copy_stack));
 }
}

void zend_compile_if(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;
 zend_uint *jmp_opnums = _safe_emalloc((sizeof(zend_uint)), (list->children - 1), (0) );

 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *cond_ast = elem_ast->child[0];
  zend_ast *stmt_ast = elem_ast->child[1];

  znode cond_node;
  zend_uint opnum_jmpz;
  if (cond_ast) {
   zend_compile_expr(&cond_node, cond_ast );
   opnum_jmpz = zend_emit_cond_jump(43, &cond_node, 0 );
  }

  zend_compile_stmt(stmt_ast );

  if (i != list->children - 1) {
   jmp_opnums[i] = zend_emit_jump(0 );
  }

  if (cond_ast) {
   zend_update_jump_target_to_next(opnum_jmpz );
  }
 }

 for (i = 0; i < list->children - 1; ++i) {
  zend_update_jump_target_to_next(jmp_opnums[i] );
 }

 _efree((jmp_opnums) );
}

void zend_compile_switch(zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 zend_ast_list *cases = zend_ast_get_list(ast->child[1]);

 zend_uint i;
 zend_bool has_default_case = 0;
 zend_switch_entry switch_entry;

 znode expr_node, case_node;
 zend_op *opline;
 zend_uint *jmpnz_opnums = _safe_emalloc((sizeof(zend_uint)), (cases->children), (0) );
 zend_uint opnum_default_jmp;

 zend_compile_expr(&expr_node, expr_ast );

 switch_entry.cond = expr_node;
 switch_entry.default_case = -1;
 switch_entry.control_var = -1;
 zend_stack_push(&(compiler_globals.switch_cond_stack), (void *) &switch_entry);

 zend_begin_loop();

 case_node.op_type = (1<<1);
 case_node.u.op.var = get_temporary_variable((compiler_globals.active_op_array));

 for (i = 0; i < cases->children; ++i) {
  zend_ast *case_ast = cases->child[i];
  zend_ast *cond_ast = case_ast->child[0];
  znode cond_node;

  if (!cond_ast) {
   has_default_case = 1;
   continue;
  }

  zend_compile_expr(&cond_node, cond_ast );

  opline = zend_emit_op(((void*)0), 48, &expr_node, &cond_node );
  do { opline->result_type = (&case_node)->op_type; if ((&case_node)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&case_node)->u.constant ); } else { opline->result = (&case_node)->u.op; } } while (0);
  if (opline->op1_type == (1<<0)) {
   _zval_copy_ctor((&((compiler_globals.active_op_array))->literals[opline->op1.constant]) );
  }

  jmpnz_opnums[i] = zend_emit_cond_jump(44, &case_node, 0 );
 }

 opnum_default_jmp = zend_emit_jump(0 );

 for (i = 0; i < cases->children; ++i) {
  zend_ast *case_ast = cases->child[i];
  zend_ast *cond_ast = case_ast->child[0];
  zend_ast *stmt_ast = case_ast->child[1];

  if (cond_ast) {
   zend_update_jump_target_to_next(jmpnz_opnums[i] );
  } else {
   zend_update_jump_target_to_next(opnum_default_jmp );
  }

  zend_compile_stmt(stmt_ast );
 }

 if (!has_default_case) {
  zend_update_jump_target_to_next(opnum_default_jmp );
 }

 zend_end_loop(get_next_op_number((compiler_globals.active_op_array)), 1 );

 if (expr_node.op_type == (1<<2) || expr_node.op_type == (1<<1)) {
  zend_emit_op(((void*)0), expr_node.op_type == (1<<1) ? 70 : 49,
   &expr_node, ((void*)0) );
 } else if (expr_node.op_type == (1<<0)) {
  _zval_dtor((&expr_node.u.constant) );
 }

 zend_stack_del_top(&(compiler_globals.switch_cond_stack));
 _efree((jmpnz_opnums) );
}

void zend_compile_try(zend_ast *ast ) {
 zend_ast *try_ast = ast->child[0];
 zend_ast_list *catches = zend_ast_get_list(ast->child[1]);
 zend_ast *finally_ast = ast->child[2];

 zend_uint i;
 zend_op *opline;
 zend_uint try_catch_offset = zend_add_try_element(
  get_next_op_number((compiler_globals.active_op_array)) );
 zend_uint *jmp_opnums = _safe_emalloc((sizeof(zend_uint)), (catches->children), (0) );

 if (catches->children == 0 && !finally_ast) {
  zend_error_noreturn((1<<6L), "Cannot use try without catch or finally");
 }

 zend_compile_stmt(try_ast );

 if (catches->children != 0) {
  jmp_opnums[0] = zend_emit_jump(0 );
 }

 for (i = 0; i < catches->children; ++i) {
  zend_ast *catch_ast = catches->child[i];
  zend_ast *class_ast = catch_ast->child[0];
  zend_ast *var_ast = catch_ast->child[1];
  zend_ast *stmt_ast = catch_ast->child[2];
  zval *var_name = zend_ast_get_zval(var_ast);
  zend_bool is_last_catch = (i + 1 == catches->children);

  zend_uint opnum_catch;

  if (!zend_is_const_default_class_ref(class_ast)) {
   zend_error_noreturn((1<<6L), "Bad class name in the catch statement");
  }

  opnum_catch = get_next_op_number((compiler_globals.active_op_array));
  if (i == 0) {
   (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].catch_op = opnum_catch;
  }

  (compiler_globals.zend_lineno) = catch_ast->lineno;

  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 107;
  opline->op1_type = (1<<0);
  opline->op1.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
   zend_resolve_class_name_ast(class_ast ) );

  opline->op2_type = (1<<4);
  opline->op2.var = lookup_cv((compiler_globals.active_op_array), zend_str_copy((*(var_name)).value.str) );
  opline->result.num = is_last_catch;

  zend_compile_stmt(stmt_ast );

  if (!is_last_catch) {
   jmp_opnums[i + 1] = zend_emit_jump(0 );
  }

  opline = &(compiler_globals.active_op_array)->opcodes[opnum_catch];
  opline->extended_value = get_next_op_number((compiler_globals.active_op_array));
 }

 for (i = 0; i < catches->children; ++i) {
  zend_update_jump_target_to_next(jmp_opnums[i] );
 }

 if (finally_ast) {
  zend_uint opnum_jmp = get_next_op_number((compiler_globals.active_op_array)) + 1;

  opline = zend_emit_op(((void*)0), 162, ((void*)0), ((void*)0) );
  opline->op1.opline_num = opnum_jmp + 1;

  zend_emit_op(((void*)0), 42, ((void*)0), ((void*)0) );

  (compiler_globals.context).in_finally++;
  zend_compile_stmt(finally_ast );
  (compiler_globals.context).in_finally--;

  (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].finally_op = opnum_jmp + 1;
  (compiler_globals.active_op_array)->try_catch_array[try_catch_offset].finally_end
   = get_next_op_number((compiler_globals.active_op_array));
  (compiler_globals.active_op_array)->has_finally_block = 1;

  zend_emit_op(((void*)0), 163, ((void*)0), ((void*)0) );

  zend_update_jump_target_to_next(opnum_jmp );
 }

 _efree((jmp_opnums) );
}


void zend_handle_encoding_declaration(zend_ast_list *declares ) {
 zend_uint i;
 for (i = 0; i < declares->children; ++i) {
  zend_ast *declare_ast = declares->child[i];
  zend_ast *name_ast = declare_ast->child[0];
  zend_ast *value_ast = declare_ast->child[1];
  zend_string *name = zend_ast_get_str(name_ast);

  if (((name)->len == sizeof("encoding") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("encoding"), sizeof("encoding") - 1))) {
   if (value_ast->kind != ZEND_AST_ZVAL) {
    zend_error_noreturn((1<<6L), "Encoding must be a literal");
   }

   if ((compiler_globals.multibyte)) {
    zend_string *encoding_name = _zval_get_string((zend_ast_get_zval(value_ast)) );

    const zend_encoding *new_encoding, *old_encoding;
    zend_encoding_filter old_input_filter;

    (compiler_globals.encoding_declared) = 1;

    new_encoding = zend_multibyte_fetch_encoding(encoding_name->val );
    if (!new_encoding) {
     zend_error((1<<7L), "Unsupported encoding [%s]", encoding_name->val);
    } else {
     old_input_filter = (language_scanner_globals.input_filter);
     old_encoding = (language_scanner_globals.script_encoding);
     zend_multibyte_set_filter(new_encoding );


     if (old_input_filter != (language_scanner_globals.input_filter) ||
       (old_input_filter && new_encoding != old_encoding)) {
      zend_multibyte_yyinput_again(old_input_filter, old_encoding );
     }
    }

    zend_str_release(encoding_name);
   } else {
    zend_error((1<<7L), "declare(encoding=...) ignored because "
     "Zend multibyte feature is turned off by settings");
   }
  }
 }
}

void zend_compile_declare(zend_ast *ast ) {
 zend_ast_list *declares = zend_ast_get_list(ast->child[0]);
 zend_ast *stmt_ast = ast->child[1];
 zend_declarables orig_declarables = (compiler_globals.declarables);
 zend_uint i;

 for (i = 0; i < declares->children; ++i) {
  zend_ast *declare_ast = declares->child[i];
  zend_ast *name_ast = declare_ast->child[0];
  zend_ast *value_ast = declare_ast->child[1];

  zend_string *name = zend_ast_get_str(name_ast);
  if (((name)->len == sizeof("ticks") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("ticks"), sizeof("ticks") - 1))) {
   zval value_zv;
   zend_const_expr_to_zval(&value_zv, value_ast );
   convert_to_long(&value_zv);
   do { zval *_z1 = (&(compiler_globals.declarables).ticks); zval *_z2 = (&value_zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
   _zval_dtor((&value_zv) );
  } else if (((name)->len == sizeof("encoding") - 1 && !zend_binary_strcasecmp((name)->val, (name)->len, ("encoding"), sizeof("encoding") - 1))) {


   zend_uint num = (compiler_globals.active_op_array)->last;
   while (num > 0 &&
       ((compiler_globals.active_op_array)->opcodes[num-1].opcode == 101 ||
     (compiler_globals.active_op_array)->opcodes[num-1].opcode == 105)) {
    --num;
   }

   if (num > 0) {
    zend_error_noreturn((1<<6L), "Encoding declaration pragma must be "
     "the very first statement in the script");
   }
  } else {
   zend_error((1<<7L), "Unsupported declare '%s'", name->val);
  }
 }

 if (stmt_ast) {
  zend_compile_stmt(stmt_ast );

  (compiler_globals.declarables) = orig_declarables;
 }
}

void zend_compile_stmt_list(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;
 for (i = 0; i < list->children; ++i) {
  zend_compile_stmt(list->child[i] );
 }
}

void zend_compile_params(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;
 zend_op_array *op_array = (compiler_globals.active_op_array);
 zend_arg_info *arg_infos;

 if (list->children == 0) {
  return;
 }

 arg_infos = _safe_emalloc((sizeof(zend_arg_info)), (list->children), (0) );
 for (i = 0; i < list->children; ++i) {
  zend_ast *param_ast = list->child[i];
  zend_ast *type_ast = param_ast->child[0];
  zend_ast *var_ast = param_ast->child[1];
  zend_ast *default_ast = param_ast->child[2];
  zend_string *name = zend_ast_get_str(var_ast);
  zend_bool is_ref = (param_ast->attr & (1<<0)) != 0;
  zend_bool is_variadic = (param_ast->attr & (1<<1)) != 0;

  znode var_node, default_node;
  zend_uchar opcode;
  zend_op *opline;
  zend_arg_info *arg_info;

  if (zend_is_auto_global(name )) {
   zend_error_noreturn((1<<6L), "Cannot re-assign auto-global variable %s",
    name->val);
  }

  var_node.op_type = (1<<4);
  var_node.u.op.var = lookup_cv((compiler_globals.active_op_array), zend_str_copy(name) );

  if ((((zval*)(((char*)(((void*)0))) + ((int)(var_node.u.op.var)))) - (((zval*)(((void*)0))) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(0))))) != i) {
   zend_error_noreturn((1<<6L), "Redefinition of parameter %s",
    name->val);
  } else if (((name)->len == sizeof("this") - 1 && !memcmp((name)->val, ("this"), sizeof("this") - 1))) {
   if (op_array->scope && (op_array->fn_flags & 0x01) == 0) {
    zend_error_noreturn((1<<6L), "Cannot re-assign $this");
   }
   op_array->this_var = var_node.u.op.var;
  }

  if (op_array->fn_flags & 0x1000000) {
   zend_error_noreturn((1<<6L), "Only the last parameter can be variadic");
  }

  if (is_variadic) {
   opcode = 164;
   default_node.op_type = (1<<3);
   op_array->fn_flags |= 0x1000000;

   if (default_ast) {
    zend_error_noreturn((1<<6L),
     "Variadic parameter cannot have a default value");
   }
  } else if (default_ast) {
   opcode = 64;
   default_node.op_type = (1<<0);
   zend_const_expr_to_zval(&default_node.u.constant, default_ast );
  } else {
   opcode = 63;
   default_node.op_type = (1<<3);
   op_array->required_num_args = i + 1;
  }

  opline = zend_emit_op(((void*)0), opcode, ((void*)0), &default_node );
  do { opline->result_type = (&var_node)->op_type; if ((&var_node)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&var_node)->u.constant ); } else { opline->result = (&var_node)->u.op; } } while (0);
  opline->op1.num = i + 1;

  arg_info = &arg_infos[i];
  arg_info->name = _estrndup((name->val), (name->len) );
  arg_info->name_len = name->len;
  arg_info->pass_by_reference = is_ref;
  arg_info->is_variadic = is_variadic;
  arg_info->type_hint = 0;
  arg_info->allow_null = 1;
  arg_info->class_name = ((void*)0);
  arg_info->class_name_len = 0;

  if (type_ast) {
   zend_bool has_null_default = default_ast
    && (zval_get_type(&(default_node.u.constant)) == 1
     || (zval_get_type(&(default_node.u.constant)) == 11
      && strcasecmp((default_node.u.constant).value.str->val, "NULL"))
     || zval_get_type(&(default_node.u.constant)) == 12);

   op_array->fn_flags |= 0x10000000;
   arg_info->allow_null = has_null_default;

   if (type_ast->kind == ZEND_AST_TYPE) {
    arg_info->type_hint = type_ast->attr;
    if (arg_info->type_hint == 7) {
     if (default_ast && !has_null_default
      && zval_get_type(&(default_node.u.constant)) != 7
     ) {
      zend_error_noreturn((1<<6L), "Default value for parameters "
       "with array type hint can only be an array or NULL");
     }
    } else if (arg_info->type_hint == 14 && default_ast) {
     if (default_ast && !has_null_default) {
      zend_error_noreturn((1<<6L), "Default value for parameters "
       "with callable type hint can only be NULL");
     }
    }
   } else {
    zend_string *class_name = zend_ast_get_str(type_ast);

    if (zend_is_const_default_class_ref(type_ast)) {
     class_name = zend_resolve_class_name_ast(type_ast );
    } else {
     zend_str_addref(class_name);
    }

    arg_info->type_hint = 8;
    arg_info->class_name = _estrndup((class_name->val), (class_name->len) );
    arg_info->class_name_len = class_name->len;

    zend_str_release(class_name);

    if (default_ast && !has_null_default) {
      zend_error_noreturn((1<<6L), "Default value for parameters "
       "with a class type hint can only be NULL");
    }
   }
  }
 }


 op_array->num_args = list->children;
 op_array->arg_info = arg_infos;
}

void zend_compile_closure_uses(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *var_ast = list->child[i];
  zend_string *name = zend_ast_get_str(var_ast);
  zend_bool by_ref = var_ast->attr;
  zval zv;

  if (((name)->len == sizeof("this") - 1 && !memcmp((name)->val, ("this"), sizeof("this") - 1))) {
   zend_error_noreturn((1<<6L), "Cannot use $this as lexical variable");
  }

  do { (*(&zv)).u1.type_info = 1; } while (0);
  (zv).u1.v.const_flags = by_ref ? 0x040 : 0x020;

  zend_compile_static_var_common(var_ast, &zv, by_ref );
 }
}

void zend_begin_method_decl(
 zend_op_array *op_array, zend_string *name, zend_bool has_body
) {
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_bool in_interface = (ce->ce_flags & 0x80) != 0;
 zend_bool in_trait = (((ce)->ce_flags & 0x120) == 0x120);
 zend_bool is_public = (op_array->fn_flags & 0x100) != 0;
 zend_bool is_static = (op_array->fn_flags & 0x01) != 0;

 zend_string *lcname;

 if (in_interface) {
  if ((op_array->fn_flags & (0x100 | 0x200 | 0x400)) != 0x100) {
   zend_error_noreturn((1<<6L), "Access type for interface method "
    "%s::%s() must be omitted", ce->name->val, name->val);
  }
  op_array->fn_flags |= 0x02;
 } else if (is_static && (op_array->fn_flags & 0x02)) {
  zend_error((1<<11L), "Static function %s::%s() should not be abstract",
   ce->name->val, name->val);
 }

 if (op_array->fn_flags & 0x02) {


  if (op_array->fn_flags & 0x400) {
   zend_error_noreturn((1<<6L), "%s function %s::%s() cannot be declared private",
    in_interface ? "Interface" : "Abstract", ce->name->val, name->val);
  }

  if (has_body) {
   zend_error_noreturn((1<<6L), "%s function %s::%s() cannot contain body",
    in_interface ? "Interface" : "Abstract", ce->name->val, name->val);
  }

  ce->ce_flags |= 0x10;





 } else if (!has_body) {
  zend_error_noreturn((1<<6L), "Non-abstract method %s::%s() must contain body",
   ce->name->val, name->val);
 }

 op_array->scope = ce;
 op_array->function_name = zend_str_copy(name);

 lcname = zend_str_alloc(name->len, 0);
 zend_str_tolower_copy(lcname->val, name->val, name->len);
 lcname = zend_new_interned_string(lcname );

 if (zend_hash_add_ptr(&ce->function_table, lcname, op_array) == ((void*)0)) {
  zend_error_noreturn((1<<6L), "Cannot redeclare %s::%s()",
   ce->name->val, name->val);
 }

 if (in_interface) {
  if (((lcname)->len == sizeof("__call") - 1 && !memcmp((lcname)->val, ("__call"), sizeof("__call") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __call() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__callstatic") - 1 && !memcmp((lcname)->val, ("__callstatic"), sizeof("__callstatic") - 1))) {
   if (!is_public || !is_static) {
    zend_error((1<<1L), "The magic method __callStatic() must have "
     "public visibility and be static");
   }
  } else if (((lcname)->len == sizeof("__get") - 1 && !memcmp((lcname)->val, ("__get"), sizeof("__get") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __get() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__set") - 1 && !memcmp((lcname)->val, ("__set"), sizeof("__set") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __set() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__unset") - 1 && !memcmp((lcname)->val, ("__unset"), sizeof("__unset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __unset() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__isset") - 1 && !memcmp((lcname)->val, ("__isset"), sizeof("__isset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __isset() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__tostring") - 1 && !memcmp((lcname)->val, ("__tostring"), sizeof("__tostring") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __toString() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__invoke") - 1 && !memcmp((lcname)->val, ("__invoke"), sizeof("__invoke") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __invoke() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__debuginfo") - 1 && !memcmp((lcname)->val, ("__debuginfo"), sizeof("__debuginfo") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __debugInfo() must have "
     "public visibility and cannot be static");
   }
  }
 } else {
  if (!in_trait && zend_str_equals_str_ci(lcname, ce->name)) {
   if (!ce->constructor) {
    ce->constructor = (zend_function *) op_array;
   }
  } else if (((lcname)->len == sizeof("__construct") - 1 && !memcmp((lcname)->val, ("__construct"), sizeof("__construct") - 1))) {
   if ((compiler_globals.active_class_entry)->constructor) {
    zend_error((1<<11L), "Redefining already defined constructor for class %s",
     ce->name->val);
   }
   ce->constructor = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__destruct") - 1 && !memcmp((lcname)->val, ("__destruct"), sizeof("__destruct") - 1))) {
   ce->destructor = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__clone") - 1 && !memcmp((lcname)->val, ("__clone"), sizeof("__clone") - 1))) {
   ce->clone = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__call") - 1 && !memcmp((lcname)->val, ("__call"), sizeof("__call") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __call() must have "
     "public visibility and cannot be static");
   }
   ce->__call = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__callstatic") - 1 && !memcmp((lcname)->val, ("__callstatic"), sizeof("__callstatic") - 1))) {
   if (!is_public || !is_static) {
    zend_error((1<<1L), "The magic method __callStatic() must have "
     "public visibility and be static");
   }
   ce->__callstatic = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__get") - 1 && !memcmp((lcname)->val, ("__get"), sizeof("__get") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __get() must have "
     "public visibility and cannot be static");
   }
   ce->__get = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__set") - 1 && !memcmp((lcname)->val, ("__set"), sizeof("__set") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __set() must have "
     "public visibility and cannot be static");
   }
   ce->__set = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__unset") - 1 && !memcmp((lcname)->val, ("__unset"), sizeof("__unset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __unset() must have "
     "public visibility and cannot be static");
   }
   ce->__unset = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__isset") - 1 && !memcmp((lcname)->val, ("__isset"), sizeof("__isset") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __isset() must have "
     "public visibility and cannot be static");
   }
   ce->__isset = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__tostring") - 1 && !memcmp((lcname)->val, ("__tostring"), sizeof("__tostring") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __toString() must have "
     "public visibility and cannot be static");
   }
   ce->__tostring = (zend_function *) op_array;
  } else if (((lcname)->len == sizeof("__invoke") - 1 && !memcmp((lcname)->val, ("__invoke"), sizeof("__invoke") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __invoke() must have "
     "public visibility and cannot be static");
   }
  } else if (((lcname)->len == sizeof("__debuginfo") - 1 && !memcmp((lcname)->val, ("__debuginfo"), sizeof("__debuginfo") - 1))) {
   if (!is_public || is_static) {
    zend_error((1<<1L), "The magic method __debugInfo() must have "
     "public visibility and cannot be static");
   }
   ce->__debugInfo = (zend_function *) op_array;
  } else if (!is_static) {
   op_array->fn_flags |= 0x10000;
  }
 }

 zend_str_release(lcname);
}

static void zend_begin_func_decl(
 znode *result, zend_op_array *op_array, zend_ast_decl *decl
) {
 zend_ast *params_ast = decl->child[0];
 zend_string *name = decl->name, *lcname;
 zend_op *opline;

 op_array->function_name = name = zend_prefix_with_ns(name );

 lcname = zend_str_alloc(name->len, 0);
 zend_str_tolower_copy(lcname->val, name->val, name->len);

 if ((compiler_globals.current_import_function)) {
  zend_string *import_name = zend_hash_find_ptr((compiler_globals.current_import_function), lcname);
  if (import_name && !zend_str_equals_str_ci(lcname, import_name)) {
   zend_error((1<<6L), "Cannot declare function %s "
    "because the name is already in use", name->val);
  }
 }

 if (((lcname)->len == sizeof("__autoload") - 1 && !memcmp((lcname)->val, ("__autoload"), sizeof("__autoload") - 1))
  && zend_ast_get_list(params_ast)->children != 1
 ) {
  zend_error_noreturn((1<<6L), "%s() must take exactly 1 argument",
   "__autoload");
 }

 if (op_array->fn_flags & 0x100000) {
  opline = zend_emit_op_tmp(result, 153, ((void*)0), ((void*)0) );
 } else {
  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 141;
  opline->op2_type = (1<<0);
  do { zval _c; do { zval *__z = (&_c); zend_string *__s = (zend_str_copy(lcname)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);
 }

 {
  zend_string *key = zend_build_runtime_definition_key(lcname, decl->lex_pos );

  opline->op1_type = (1<<0);
  do { zval _c; do { zval *__z = (&_c); zend_string *__s = (key); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);

  zend_hash_update_ptr((compiler_globals.function_table), key, op_array);
 }

 zend_str_release(lcname);
}

void zend_compile_func_decl(znode *result, zend_ast *ast ) {
 zend_ast_decl *decl = (zend_ast_decl *) ast;
 zend_ast *params_ast = decl->child[0];
 zend_ast *uses_ast = decl->child[1];
 zend_ast *stmt_ast = decl->child[2];
 zend_bool is_method = decl->kind == ZEND_AST_METHOD;

 zend_op_array *orig_op_array = (compiler_globals.active_op_array);
 zend_op_array *op_array = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_op_array));



 init_op_array(op_array, 2, 64 );

 op_array->fn_flags |= decl->flags;
 op_array->line_start = decl->start_lineno;
 op_array->line_end = decl->end_lineno;
 if (decl->doc_comment) {
  op_array->doc_comment = zend_str_copy(decl->doc_comment);
 }
 if (decl->kind == ZEND_AST_CLOSURE) {
  op_array->fn_flags |= 0x100000;
 }

 if (is_method) {
  zend_bool has_body = stmt_ast != ((void*)0);
  zend_begin_method_decl(op_array, decl->name, has_body );
 } else {
  zend_begin_func_decl(result, op_array, decl );
 }

 (compiler_globals.active_op_array) = op_array;
 zend_stack_push(&(compiler_globals.context_stack), (void *) &(compiler_globals.context));
 zend_init_compiler_context();

 if ((compiler_globals.compiler_options) & (1<<0)) {
  zend_op *opline_ext = zend_emit_op(((void*)0), 104, ((void*)0), ((void*)0) );
  opline_ext->lineno = decl->start_lineno;
 }

 {

  zend_switch_entry switch_entry;

  switch_entry.cond.op_type = (1<<3);
  switch_entry.default_case = 0;
  switch_entry.control_var = 0;

  zend_stack_push(&(compiler_globals.switch_cond_stack), (void *) &switch_entry);
 }

 {

  zend_op dummy_opline;

  dummy_opline.result_type = (1<<3);

  zend_stack_push(&(compiler_globals.foreach_copy_stack), (void *) &dummy_opline);
 }

 zend_compile_params(params_ast );
 if (uses_ast) {
  zend_compile_closure_uses(uses_ast );
 }
 zend_compile_stmt(stmt_ast );

 if (is_method) {
  zend_check_magic_method_implementation(
   (compiler_globals.active_class_entry), (zend_function *) op_array, (1<<6L) );
 }

 zend_do_extended_info();
 zend_emit_final_return(((void*)0) );

 pass_two((compiler_globals.active_op_array) );
 zend_release_labels(0 );


 zend_stack_del_top(&(compiler_globals.switch_cond_stack));
 zend_stack_del_top(&(compiler_globals.foreach_copy_stack));

 (compiler_globals.active_op_array) = orig_op_array;
}

void zend_compile_prop_decl(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint flags = list->attr;
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_uint i, children = list->children;
 zend_string *doc_comment = ((void*)0);

 if (ce->ce_flags & 0x80) {
  zend_error_noreturn((1<<6L), "Interfaces may not include member variables");
 }

 if (flags & 0x02) {
  zend_error_noreturn((1<<6L), "Properties cannot be declared abstract");
 }


 if (list->child[children - 1]->kind == ZEND_AST_ZVAL) {
  doc_comment = zend_str_copy(zend_ast_get_str(list->child[children - 1]));
  children -= 1;
 }

 for (i = 0; i < children; ++i) {
  zend_ast *prop_ast = list->child[i];
  zend_ast *name_ast = prop_ast->child[0];
  zend_ast *value_ast = prop_ast->child[1];
  zend_string *name = zend_ast_get_str(name_ast);
  zval value_zv;

  if (flags & 0x04) {
   zend_error_noreturn((1<<6L), "Cannot declare property %s::$%s final, "
    "the final modifier is allowed only for methods and classes",
    ce->name->val, name->val);
  }

  if (zend_hash_exists(&ce->properties_info, name)) {
   zend_error_noreturn((1<<6L), "Cannot redeclare %s::$%s",
    ce->name->val, name->val);
  }

  if (value_ast) {
   zend_const_expr_to_zval(&value_zv, value_ast );
  } else {
   do { (*(&value_zv)).u1.type_info = 1; } while (0);
  }

  name = zend_new_interned_string_safe(name );
  zend_declare_property_ex(ce, name, &value_zv, flags, doc_comment );


  doc_comment = ((void*)0);
 }
}

void zend_compile_class_const_decl(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_uint i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *const_ast = list->child[i];
  zend_ast *name_ast = const_ast->child[0];
  zend_ast *value_ast = const_ast->child[1];
  zend_string *name = zend_ast_get_str(name_ast);
  zval value_zv;

  if ((((ce)->ce_flags & 0x120) == 0x120)) {
   zend_error_noreturn((1<<6L), "Traits cannot have constants");
   return;
  }

  zend_const_expr_to_zval(&value_zv, value_ast );

  name = zend_new_interned_string_safe(name );
  if (_zend_hash_add(&ce->constants_table, name, &value_zv ) == ((void*)0)) {
   zend_error_noreturn((1<<6L), "Cannot redefine class constant %s::%s",
    ce->name->val, name->val);
  }

  if ((((value_zv).u1.v.type_flags & (1<<0)) != 0)) {
   ce->ce_flags &= ~0x100000;
  }
 }
}

static zend_trait_method_reference *zend_compile_method_ref(zend_ast *ast ) {
 zend_ast *class_ast = ast->child[0];
 zend_ast *method_ast = ast->child[1];

 zend_trait_method_reference *method_ref = _emalloc((sizeof(zend_trait_method_reference)) );
 method_ref->ce = ((void*)0);
 method_ref->method_name = zend_str_copy(zend_ast_get_str(method_ast));

 if (class_ast) {
  method_ref->class_name = zend_resolve_class_name_ast(class_ast );
 } else {
  method_ref->class_name = ((void*)0);
 }

 return method_ref;
}

static zend_string **zend_compile_name_list(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_string **names = _safe_emalloc((sizeof(zend_string *)), (list->children + 1), (0) );
 zend_uint i;

 for (i = 0; i < list->children; ++i) {
  zend_ast *name_ast = list->child[i];
  names[i] = zend_resolve_class_name_ast(name_ast );
 }

 names[list->children] = ((void*)0);

 return names;
}

static void zend_compile_trait_precedence(zend_ast *ast ) {
 zend_ast *method_ref_ast = ast->child[0];
 zend_ast *insteadof_ast = ast->child[1];

 zend_trait_precedence *precedence = _emalloc((sizeof(zend_trait_precedence)) );
 precedence->trait_method = zend_compile_method_ref(method_ref_ast );
 precedence->exclude_from_classes
  = (void *) zend_compile_name_list(insteadof_ast );

 zend_add_to_list(&(compiler_globals.active_class_entry)->trait_precedences, precedence );
}

static void zend_compile_trait_alias(zend_ast *ast ) {
 zend_ast *method_ref_ast = ast->child[0];
 zend_ast *alias_ast = ast->child[1];
 zend_uint modifiers = ast->attr;

 zend_trait_alias *alias;

 if (modifiers == 0x01) {
  zend_error_noreturn((1<<6L), "Cannot use 'static' as method modifier");
 } else if (modifiers == 0x02) {
  zend_error_noreturn((1<<6L), "Cannot use 'abstract' as method modifier");
 } else if (modifiers == 0x04) {
  zend_error_noreturn((1<<6L), "Cannot use 'final' as method modifier");
 }

 alias = _emalloc((sizeof(zend_trait_alias)) );
 alias->trait_method = zend_compile_method_ref(method_ref_ast );
 alias->modifiers = modifiers;

 if (alias_ast) {
  alias->alias = zend_str_copy(zend_ast_get_str(alias_ast));
 } else {
  alias->alias = ((void*)0);
 }

 zend_add_to_list(&(compiler_globals.active_class_entry)->trait_aliases, alias );
}

void zend_compile_use_trait(zend_ast *ast ) {
 zend_ast_list *traits = zend_ast_get_list(ast->child[0]);
 zend_ast_list *adaptations = ast->child[1] ? zend_ast_get_list(ast->child[1]) : ((void*)0);
 zend_class_entry *ce = (compiler_globals.active_class_entry);
 zend_op *opline;
 zend_uint i;

 for (i = 0; i < traits->children; ++i) {
  zend_ast *trait_ast = traits->child[i];
  zend_string *name = zend_ast_get_str(trait_ast);

  if (ce->ce_flags & 0x80) {
   zend_error_noreturn((1<<6L), "Cannot use traits inside of interfaces. "
    "%s is used in %s", name->val, ce->name->val);
  }

  switch (zend_get_class_fetch_type(name)) {
   case 1:
   case 2:
   case 3:
    zend_error_noreturn((1<<6L), "Cannot use '%s' as trait name "
     "as it is reserved", name->val);
    break;
  }

  opline = get_next_op((compiler_globals.active_op_array) );
  opline->opcode = 154;
  do { opline->op1_type = (&(compiler_globals.implementing_class))->op_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(&(compiler_globals.implementing_class))->u.constant ); } else { opline->op1 = (&(compiler_globals.implementing_class))->u.op; } } while (0);
  opline->extended_value = 6;
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
   zend_resolve_class_name_ast(trait_ast ) );

  ce->num_traits++;
 }

 if (!adaptations) {
  return;
 }

 for (i = 0; i < adaptations->children; ++i) {
  zend_ast *adaptation_ast = adaptations->child[i];
  switch (adaptation_ast->kind) {
   case ZEND_AST_TRAIT_PRECEDENCE:
    zend_compile_trait_precedence(adaptation_ast );
    break;
   case ZEND_AST_TRAIT_ALIAS:
    zend_compile_trait_alias(adaptation_ast );
    break;

  }
 }
}

void zend_compile_implements(znode *class_node, zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;
 for (i = 0; i < list->children; ++i) {
  zend_ast *class_ast = list->child[i];
  zend_string *name = zend_ast_get_str(class_ast);

  zend_op *opline;


  if (((((compiler_globals.active_class_entry))->ce_flags & 0x120) == 0x120)) {
   zend_error_noreturn((1<<6L), "Cannot use '%s' as interface on '%s' "
    "since it is a Trait", name->val, (compiler_globals.active_class_entry)->name->val);
  }

  if (!zend_is_const_default_class_ref(class_ast)) {
   zend_error_noreturn((1<<6L),
    "Cannot use '%s' as interface name as it is reserved", name->val);
  }

  opline = zend_emit_op(((void*)0), 144, class_node, ((void*)0) );
  opline->extended_value = 5;
  opline->op2_type = (1<<0);
  opline->op2.constant = zend_add_class_name_literal((compiler_globals.active_op_array),
   zend_resolve_class_name_ast(class_ast ) );

  (compiler_globals.active_class_entry)->num_interfaces++;
 }
}

void zend_compile_class_decl(zend_ast *ast ) {
 zend_ast_decl *decl = (zend_ast_decl *) ast;
 zend_ast *extends_ast = decl->child[0];
 zend_ast *implements_ast = decl->child[1];
 zend_ast *stmt_ast = decl->child[2];

 zend_string *name = decl->name, *lcname, *import_name = ((void*)0);
 zend_class_entry *ce = zend_arena_alloc(&(compiler_globals.arena), sizeof(zend_class_entry));
 zend_op *opline;
 znode declare_node, extends_node;

 if ((compiler_globals.active_class_entry)) {
  zend_error_noreturn((1<<6L), "Class declarations may not be nested");
  return;
 }

 if (0 != zend_get_class_fetch_type(name)) {
  zend_error_noreturn((1<<6L), "Cannot use '%s' as class name as it is reserved",
   name->val);
 }

 lcname = zend_str_alloc(name->len, 0);
 zend_str_tolower_copy(lcname->val, name->val, name->len);

 if ((compiler_globals.current_import)) {
  import_name = zend_hash_find_ptr((compiler_globals.current_import), lcname);
 }

 if ((compiler_globals.current_namespace)) {
  name = zend_prefix_with_ns(name );

  zend_str_release(lcname);
  lcname = zend_str_alloc(name->len, 0);
  zend_str_tolower_copy(lcname->val, name->val, name->len);
 } else {
  zend_str_addref(name);
 }

 if (import_name && !zend_str_equals_str_ci(lcname, import_name)) {
  zend_error_noreturn((1<<6L), "Cannot declare class %s "
   "because the name is already in use", name->val);
 }

 name = zend_new_interned_string(name );
 lcname = zend_new_interned_string(lcname );

 ce->type = 2;
 ce->name = name;
 zend_initialize_class_data(ce, 1 );

 ce->ce_flags |= decl->flags;
 ce->info.user.filename = zend_get_compiled_filename();
 ce->info.user.line_start = decl->start_lineno;
 ce->info.user.line_end = decl->end_lineno;
 if (decl->doc_comment) {
  ce->info.user.doc_comment = zend_str_copy(decl->doc_comment);
 }

 if (extends_ast) {
  if ((((ce)->ce_flags & 0x120) == 0x120)) {
   zend_error_noreturn((1<<6L), "A trait (%s) cannot extend a class. "
    "Traits can only be composed from other traits with the 'use' keyword. Error",
    name->val);
  }

  if (!zend_is_const_default_class_ref(extends_ast)) {
   zend_string *extends_name = zend_ast_get_str(extends_ast);
   zend_error_noreturn((1<<6L),
    "Cannot use '%s' as class name as it is reserved", extends_name->val);
  }

  zend_compile_class_ref(&extends_node, extends_ast );
 }

 opline = get_next_op((compiler_globals.active_op_array) );
 zend_make_var_result(&declare_node, opline );


 do { (&(compiler_globals.implementing_class))->op_type = opline->result_type; if ((&(compiler_globals.implementing_class))->op_type == (1<<0)) { (&(compiler_globals.implementing_class))->u.constant = ((compiler_globals.active_op_array))->literals[opline->result.constant]; } else { (&(compiler_globals.implementing_class))->u.op = opline->result; } } while (0);

 opline->op2_type = (1<<0);
 do { zval _c; do { zval *__z = (&_c); zend_string *__s = (lcname); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);

 if (extends_ast) {
  opline->opcode = 140;
  opline->extended_value = extends_node.u.op.var;
 } else {
  opline->opcode = 139;
 }

 {
  zend_string *key = zend_build_runtime_definition_key(lcname, decl->lex_pos );

  opline->op1_type = (1<<0);
  do { zval _c; do { zval *__z = (&_c); zend_string *__s = (key); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &_c ); } while (0);

  zend_hash_update_ptr((compiler_globals.class_table), key, ce);
 }

 (compiler_globals.active_class_entry) = ce;

 if (implements_ast) {
  zend_compile_implements(&declare_node, implements_ast );
 }

 zend_compile_stmt(stmt_ast );

 if (ce->constructor) {
  ce->constructor->common.fn_flags |= 0x2000;
  if (ce->constructor->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Constructor %s::%s() cannot be static",
    ce->name->val, ce->constructor->common.function_name->val);
  }
 }
 if (ce->destructor) {
  ce->destructor->common.fn_flags |= 0x4000;
  if (ce->destructor->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Destructor %s::%s() cannot be static",
    ce->name->val, ce->destructor->common.function_name->val);
  }
 }
 if (ce->clone) {
  ce->clone->common.fn_flags |= 0x8000;
  if (ce->clone->common.fn_flags & 0x01) {
   zend_error_noreturn((1<<6L), "Clone method %s::%s() cannot be static",
    ce->name->val, ce->clone->common.function_name->val);
  }
 }




 if (ce->num_traits > 0) {
  ce->traits = ((void*)0);
  ce->num_traits = 0;
  ce->ce_flags |= 0x400000;

  zend_emit_op(((void*)0), 155, &declare_node, ((void*)0) );
 }

 if (!(ce->ce_flags & (0x80|0x20))
  && (extends_ast || ce->num_interfaces > 0)
 ) {
  zend_verify_abstract_class(ce );
  if (ce->num_interfaces && !(ce->ce_flags & 0x400000)) {
   zend_emit_op(((void*)0), 146, &declare_node, ((void*)0) );
  }
 }





 if (ce->num_interfaces > 0) {
  ce->interfaces = ((void*)0);
  ce->num_interfaces = 0;
  ce->ce_flags |= 0x80000;
 }

 (compiler_globals.active_class_entry) = ((void*)0);
}

static HashTable *zend_get_import_ht(zend_uint type ) {
 switch (type) {
  case 358:
   if (!(compiler_globals.current_import)) {
    (compiler_globals.current_import) = _emalloc((sizeof(HashTable)) );
    _zend_hash_init(((compiler_globals.current_import)), (8), (str_dtor), (0) );
   }
   return (compiler_globals.current_import);
  case 337:
   if (!(compiler_globals.current_import_function)) {
    (compiler_globals.current_import_function) = _emalloc((sizeof(HashTable)) );
    _zend_hash_init(((compiler_globals.current_import_function)), (8), (str_dtor), (0) );
   }
   return (compiler_globals.current_import_function);
  case 338:
   if (!(compiler_globals.current_import_const)) {
    (compiler_globals.current_import_const) = _emalloc((sizeof(HashTable)) );
    _zend_hash_init(((compiler_globals.current_import_const)), (8), (str_dtor), (0) );
   }
   return (compiler_globals.current_import_const);

 }
}

static char *zend_get_use_type_str(zend_uint type) {
 switch (type) {
  case 358:
   return "";
  case 337:
   return " function";
  case 338:
   return " const";

 }
}

static void zend_check_already_in_use(
 zend_uint type, zend_string *old_name, zend_string *new_name, zend_string *check_name
) {
 if (zend_str_equals_str_ci(old_name, check_name)) {
  return;
 }

 zend_error_noreturn((1<<6L), "Cannot use%s %s as %s because the name "
  "is already in use", zend_get_use_type_str(type), old_name->val, new_name->val);
}

void zend_compile_use(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;
 zend_string *current_ns = (compiler_globals.current_namespace);
 zend_uint type = ast->attr;
 HashTable *current_import = zend_get_import_ht(type );
 zend_bool case_sensitive = type == 338;

 for (i = 0; i < list->children; ++i) {
  zend_ast *use_ast = list->child[i];
  zend_ast *old_name_ast = use_ast->child[0];
  zend_ast *new_name_ast = use_ast->child[1];
  zend_string *old_name = zend_ast_get_str(old_name_ast);
  zend_string *new_name, *lookup_name;

  if (new_name_ast) {
   new_name = zend_str_copy(zend_ast_get_str(new_name_ast));
  } else {

   const char *p = zend_memrchr(old_name->val, '\\', old_name->len);
   if (p) {
    new_name = zend_str_init(p + 1, old_name->len - (p - old_name->val + 1), 0);
   } else {
    new_name = zend_str_copy(old_name);

    if (!current_ns) {
     if (type == 358 && ((new_name)->len == sizeof("strict") - 1 && !memcmp((new_name)->val, ("strict"), sizeof("strict") - 1))) {
      zend_error_noreturn((1<<6L),
       "You seem to be trying to use a different language...");
     }

     zend_error((1<<1L), "The use statement with non-compound name '%s' "
      "has no effect", new_name->val);
    }
   }
  }

  if (case_sensitive) {
   lookup_name = zend_str_copy(new_name);
  } else {
   lookup_name = zend_str_alloc(new_name->len, 0);
   zend_str_tolower_copy(lookup_name->val, new_name->val, new_name->len);
  }

  if (type == 358 && (((lookup_name)->len == sizeof("self") - 1 && !memcmp((lookup_name)->val, ("self"), sizeof("self") - 1))
   || ((lookup_name)->len == sizeof("parent") - 1 && !memcmp((lookup_name)->val, ("parent"), sizeof("parent") - 1)))
  ) {
   zend_error_noreturn((1<<6L), "Cannot use %s as %s because '%s' "
    "is a special class name", old_name->val, new_name->val, new_name->val);
  }

  if (current_ns) {
   zend_string *ns_name = zend_str_alloc(current_ns->len + 1 + new_name->len, 0);
   zend_str_tolower_copy(ns_name->val, current_ns->val, current_ns->len);
   ns_name->val[current_ns->len] = '\\';
   memcpy(ns_name->val + current_ns->len + 1, lookup_name->val, lookup_name->len);

   if (zend_hash_exists((compiler_globals.class_table), ns_name)) {
    zend_check_already_in_use(type, old_name, new_name, ns_name);
   }

   zend_str_free(ns_name);
  } else {
   switch (type) {
    case 358:
    {
     zend_class_entry *ce = zend_hash_find_ptr((compiler_globals.class_table), lookup_name);
     if (ce && ce->type == 2
      && ce->info.user.filename == (compiler_globals.compiled_filename)
     ) {
      zend_check_already_in_use(type, old_name, new_name, lookup_name);
     }
     break;
    }
    case 337:
    {
     zend_function *fn = zend_hash_find_ptr((compiler_globals.function_table), lookup_name);
     if (fn && fn->type == 2
      && fn->op_array.filename == (compiler_globals.compiled_filename)
     ) {
      zend_check_already_in_use(type, old_name, new_name, lookup_name);
     }
     break;
    }
    case 338:
    {
     zend_string *filename = zend_hash_find_ptr(&(compiler_globals.const_filenames), lookup_name);
     if (filename && filename == (compiler_globals.compiled_filename)) {
      zend_check_already_in_use(type, old_name, new_name, lookup_name);
     }
     break;
    }

   }
  }

  zend_str_addref(old_name);
  if (!zend_hash_add_ptr(current_import, lookup_name, old_name)) {
   zend_error_noreturn((1<<6L), "Cannot use%s %s as %s because the name "
    "is already in use", zend_get_use_type_str(type), old_name->val, new_name->val);
  }

  zend_str_release(lookup_name);
  zend_str_release(new_name);
 }
}

void zend_compile_const_decl(zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;
 for (i = 0; i < list->children; ++i) {
  zend_ast *const_ast = list->child[i];
  zend_ast *name_ast = const_ast->child[0];
  zend_ast *value_ast = const_ast->child[1];
  zend_string *name = zend_ast_get_str(name_ast);

  zend_string *import_name;
  znode name_node, value_node;
  zval *value_zv = &value_node.u.constant;

  value_node.op_type = (1<<0);
  zend_const_expr_to_zval(value_zv, value_ast );

  if (zend_get_ct_const(name, 0 )) {
   zend_error_noreturn((1<<6L), "Cannot redeclare constant '%s'", name->val);
  }

  name = zend_prefix_with_ns(name );

  if ((compiler_globals.current_import_const)
   && (import_name = zend_hash_find_ptr((compiler_globals.current_import_const), name))
  ) {
   if (!zend_str_equals_str(import_name, name)) {
    zend_error((1<<6L), "Cannot declare const %s because "
     "the name is already in use", name->val);
   }
  }

  name_node.op_type = (1<<0);
  do { zval *__z = (&name_node.u.constant); zend_string *__s = (name); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);

  zend_emit_op(((void*)0), 143, &name_node, &value_node );

  zend_hash_add_ptr(&(compiler_globals.const_filenames), name, (compiler_globals.compiled_filename));
 }
}

void zend_compile_namespace(zend_ast *ast ) {
 zend_ast *name_ast = ast->child[0];
 zend_ast *stmt_ast = ast->child[1];
 zend_string *name;
 zend_bool with_bracket = stmt_ast != ((void*)0);


 if (!(compiler_globals.has_bracketed_namespaces)) {
  if ((compiler_globals.current_namespace)) {

   if (with_bracket) {
    zend_error_noreturn((1<<6L), "Cannot mix bracketed namespace declarations "
     "with unbracketed namespace declarations");
   }
  }
 } else {

  if (!with_bracket) {
   zend_error_noreturn((1<<6L), "Cannot mix bracketed namespace declarations "
    "with unbracketed namespace declarations");
  } else if ((compiler_globals.current_namespace) || (compiler_globals.in_namespace)) {
   zend_error_noreturn((1<<6L), "Namespace declarations cannot be nested");
  }
 }

 if (((!with_bracket && !(compiler_globals.current_namespace))
   || (with_bracket && !(compiler_globals.has_bracketed_namespaces))) && (compiler_globals.active_op_array)->last > 0
 ) {

  zend_uint num = (compiler_globals.active_op_array)->last;
  while (num > 0 &&
         ((compiler_globals.active_op_array)->opcodes[num-1].opcode == 101 ||
          (compiler_globals.active_op_array)->opcodes[num-1].opcode == 105)) {
   --num;
  }
  if (num > 0) {
   zend_error_noreturn((1<<6L), "Namespace declaration statement has to be "
    "the very first statement in the script");
  }
 }

 if ((compiler_globals.current_namespace)) {
  zend_str_release((compiler_globals.current_namespace));
 }

 if (name_ast) {
  name = zend_ast_get_str(name_ast);

  if (0 != zend_get_class_fetch_type(name)) {
   zend_error_noreturn((1<<6L), "Cannot use '%s' as namespace name", name->val);
  }

  (compiler_globals.current_namespace) = zend_str_copy(name);
 } else {
  (compiler_globals.current_namespace) = ((void*)0);
 }

 zend_reset_import_tables();

 (compiler_globals.in_namespace) = 1;
 if (with_bracket) {
  (compiler_globals.has_bracketed_namespaces) = 1;
 }

 if (stmt_ast) {
  zend_compile_top_stmt(stmt_ast );
  zend_end_namespace();
 }
}

void zend_compile_halt_compiler(zend_ast *ast ) {
 zend_ast *offset_ast = ast->child[0];
 long offset = (*(zend_ast_get_zval(offset_ast))).value.lval;

 zend_string *filename, *name;
 const char const_name[] = "__COMPILER_HALT_OFFSET__";

 if ((compiler_globals.has_bracketed_namespaces) && (compiler_globals.in_namespace)) {
  zend_error_noreturn((1<<6L),
   "__HALT_COMPILER() can only be used from the outermost scope");
 }

 filename = zend_get_compiled_filename();
 name = zend_mangle_property_name(const_name, sizeof(const_name) - 1,
  filename->val, filename->len, 0);

 zend_register_long_constant(name->val, name->len, offset, (1<<0), 0 );
 zend_str_release(name);
}

static zend_bool zend_try_ct_eval_magic_const(zval *zv, zend_ast *ast ) {
 zend_op_array *op_array = (compiler_globals.active_op_array);
 zend_class_entry *ce = (compiler_globals.active_class_entry);

 switch (ast->attr) {
  case 371:
   if (op_array && op_array->function_name) {
    do { zval *__z = (zv); zend_string *__s = (zend_str_copy(op_array->function_name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 370:
   if (ce) {
    if (op_array && op_array->function_name) {
     do { zval *__z = (zv); zend_string *__s = (zend_concat3(ce->name->val, ce->name->len, "::", 2, op_array->function_name->val, op_array->function_name->len)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);

    } else {
     do { zval *__z = (zv); zend_string *__s = (zend_str_copy(ce->name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
    }
   } else if (op_array && op_array->function_name) {
    do { zval *__z = (zv); zend_string *__s = (zend_str_copy(op_array->function_name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 368:
   if (ce) {
    if ((((ce)->ce_flags & 0x120) == 0x120)) {
     return 0;
    } else {
     do { zval *__z = (zv); zend_string *__s = (zend_str_copy(ce->name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
    }
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 369:
   if (ce && (((ce)->ce_flags & 0x120) == 0x120)) {
    do { zval *__z = (zv); zend_string *__s = (zend_str_copy(ce->name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;
  case 386:
   if ((compiler_globals.current_namespace)) {
    do { zval *__z = (zv); zend_string *__s = (zend_str_copy((compiler_globals.current_namespace))); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   } else {
    do { do { zval *__z = (zv); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
   }
   break;

 }

 return 1;
}

static inline void zend_ct_eval_binary_op(
 zval *result, zend_uint opcode, zval *op1, zval *op2
) {
 binary_op_type fn = get_binary_op(opcode);
 fn(result, op1, op2 );
}

static inline void zend_ct_eval_unary_pm(zval *result, zend_ast_kind kind, zval *op ) {
 binary_op_type fn = kind == ZEND_AST_UNARY_PLUS
  ? add_function : sub_function;

 zval left;
 { zval *__z = (&left); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; };
 fn(result, &left, op );
}

static inline void zend_ct_eval_greater(
 zval *result, zend_ast_kind kind, zval *op1, zval *op2
) {
 binary_op_type fn = kind == ZEND_AST_GREATER
  ? is_smaller_function : is_smaller_or_equal_function;
 fn(result, op2, op1 );
}

static zend_bool zend_try_ct_eval_array(zval *result, zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;


 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_bool by_ref = elem_ast->attr;
  zend_eval_const_expr(&elem_ast->child[0] );
  zend_eval_const_expr(&elem_ast->child[1] );

  if (by_ref || elem_ast->child[0]->kind != ZEND_AST_ZVAL
   || (elem_ast->child[1] && elem_ast->child[1]->kind != ZEND_AST_ZVAL)
  ) {
   return 0;
  }
 }

 _array_init((result), (list->children) );
 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *value_ast = elem_ast->child[0];
  zend_ast *key_ast = elem_ast->child[1];

  zval *value = zend_ast_get_zval(value_ast);
  if ((((*(value)).u1.v.type_flags & (1<<1)) != 0)) zval_addref_p(value);

  if (key_ast) {
   zval *key = zend_ast_get_zval(key_ast);
   switch (zval_get_type(&(*(key)))) {
    case 4:
     _zend_hash_index_update((&(*(result)).value.arr->ht), (*(key)).value.lval, value );
     break;
    case 6:
     zend_symtable_update((&(*(result)).value.arr->ht), (*(key)).value.str, value);
     break;
    case 5:
     _zend_hash_index_update((&(*(result)).value.arr->ht), zend_dval_to_lval((*(key)).value.dval), value );

     break;
    case 2:
     _zend_hash_index_update((&(*(result)).value.arr->ht), 0, value );
     break;
    case 3:
     _zend_hash_index_update((&(*(result)).value.arr->ht), 1, value );
     break;
    case 1:
     _zend_hash_update((&(*(result)).value.arr->ht), (compiler_globals.empty_string), value );
     break;
    default:
     zend_error((1<<6L), "Illegal offset type");
     break;
   }
  } else {
   _zend_hash_next_index_insert((&(*(result)).value.arr->ht), value );
  }
 }

 return 1;
}

void zend_compile_binary_op(znode *result, zend_ast *ast ) {
 zend_ast *left_ast = ast->child[0];
 zend_ast *right_ast = ast->child[1];
 zend_uint opcode = ast->attr;

 znode left_node, right_node;
 zend_compile_expr(&left_node, left_ast );
 zend_compile_expr(&right_node, right_ast );

 if (left_node.op_type == (1<<0) && right_node.op_type == (1<<0)) {
  result->op_type = (1<<0);
  zend_ct_eval_binary_op(&result->u.constant, opcode,
   &left_node.u.constant, &right_node.u.constant );
  _zval_ptr_dtor((&left_node.u.constant) );
  _zval_ptr_dtor((&right_node.u.constant) );
  return;
 }

 zend_emit_op_tmp(result, opcode, &left_node, &right_node );
}



void zend_compile_greater(znode *result, zend_ast *ast ) {
 zend_ast *left_ast = ast->child[0];
 zend_ast *right_ast = ast->child[1];
 znode left_node, right_node;

                                                                                  ;

 zend_compile_expr(&left_node, left_ast );
 zend_compile_expr(&right_node, right_ast );

 if (left_node.op_type == (1<<0) && right_node.op_type == (1<<0)) {
  result->op_type = (1<<0);
  zend_ct_eval_greater(&result->u.constant, ast->kind,
   &left_node.u.constant, &right_node.u.constant );
  _zval_ptr_dtor((&left_node.u.constant) );
  _zval_ptr_dtor((&right_node.u.constant) );
  return;
 }

 zend_emit_op_tmp(result,
  ast->kind == ZEND_AST_GREATER ? 19 : 20,
  &right_node, &left_node );
}

void zend_compile_unary_op(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 zend_uint opcode = ast->attr;

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast );

 zend_emit_op_tmp(result, opcode, &expr_node, ((void*)0) );
}

void zend_compile_unary_pm(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 znode zero_node, expr_node;

                                                                                   ;

 zend_compile_expr(&expr_node, expr_ast );

 if (expr_node.op_type == (1<<0)) {
  result->op_type = (1<<0);
  zend_ct_eval_unary_pm(&result->u.constant, ast->kind, &expr_node.u.constant );
  _zval_ptr_dtor((&expr_node.u.constant) );
  return;
 }

 zero_node.op_type = (1<<0);
 { zval *__z = (&zero_node.u.constant); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; };

 zend_emit_op_tmp(result, ast->kind == ZEND_AST_UNARY_PLUS ? 1 : 2,
  &zero_node, &expr_node );
}

void zend_compile_short_circuiting(znode *result, zend_ast *ast ) {
 zend_ast *left_ast = ast->child[0];
 zend_ast *right_ast = ast->child[1];

 znode left_node, right_node;
 zend_op *opline_jmpz, *opline_bool;
 zend_uint opnum_jmpz;

                                                                   ;

 zend_compile_expr(&left_node, left_ast );

 opnum_jmpz = get_next_op_number((compiler_globals.active_op_array));
 opline_jmpz = zend_emit_op(((void*)0), ast->kind == ZEND_AST_AND ? 46 : 47,
  &left_node, ((void*)0) );

 if (left_node.op_type == (1<<1)) {
  do { opline_jmpz->result_type = (&left_node)->op_type; if ((&left_node)->op_type == (1<<0)) { opline_jmpz->result.constant = zend_add_literal((compiler_globals.active_op_array), &(&left_node)->u.constant ); } else { opline_jmpz->result = (&left_node)->u.op; } } while (0);
 } else {
  opline_jmpz->result.var = get_temporary_variable((compiler_globals.active_op_array));
  opline_jmpz->result_type = (1<<1);
 }
 do { (result)->op_type = opline_jmpz->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline_jmpz->result.constant]; } else { (result)->u.op = opline_jmpz->result; } } while (0);

 zend_compile_expr(&right_node, right_ast );

 opline_bool = zend_emit_op(((void*)0), 52, &right_node, ((void*)0) );
 do { opline_bool->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline_bool->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline_bool->result = (result)->u.op; } } while (0);

 zend_update_jump_target_to_next(opnum_jmpz );
}

void zend_compile_post_incdec(znode *result, zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];
                                                                              ;

 if (var_ast->kind == ZEND_AST_PROP) {
  zend_op *opline = zend_compile_prop_common(((void*)0), var_ast, 2 );
  opline->opcode = ast->kind == ZEND_AST_POST_INC ? 134 : 135;
  zend_make_tmp_result(result, opline );
 } else {
  znode var_node;
  zend_compile_var(&var_node, var_ast, 2 );
  zend_emit_op_tmp(result, ast->kind == ZEND_AST_POST_INC ? 36 : 37,
   &var_node, ((void*)0) );
 }
}

void zend_compile_pre_incdec(znode *result, zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];
                                                                            ;

 if (var_ast->kind == ZEND_AST_PROP) {
  zend_op *opline = zend_compile_prop_common(result, var_ast, 2 );
  opline->opcode = ast->kind == ZEND_AST_PRE_INC ? 132 : 133;
 } else {
  znode var_node;
  zend_compile_var(&var_node, var_ast, 2 );
  zend_emit_op(result, ast->kind == ZEND_AST_PRE_INC ? 34 : 35,
   &var_node, ((void*)0) );
 }
}

void zend_compile_cast(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 znode expr_node;
 zend_op *opline;

 zend_compile_expr(&expr_node, expr_ast );

 opline = zend_emit_op(result, 21, &expr_node, ((void*)0) );
 opline->extended_value = ast->attr;
}

static void zend_compile_shorthand_conditional(znode *result, zend_ast *ast ) {
 zend_ast *cond_ast = ast->child[0];
 zend_ast *false_ast = ast->child[2];

 znode cond_node, false_node;
 zend_op *opline_jmp_set, *opline_qm_assign;
 zend_uint opnum_jmp_set;

                                   ;

 zend_compile_expr(&cond_node, cond_ast );

 opnum_jmp_set = get_next_op_number((compiler_globals.active_op_array));
 zend_emit_op_tmp(result, 152, &cond_node, ((void*)0) );

 zend_compile_expr(&false_node, false_ast );

 opline_jmp_set = &(compiler_globals.active_op_array)->opcodes[opnum_jmp_set];
 opline_jmp_set->op2.opline_num = get_next_op_number((compiler_globals.active_op_array)) + 1;
 if (cond_node.op_type == (1<<2) || cond_node.op_type == (1<<4)
  || false_node.op_type == (1<<2) || false_node.op_type == (1<<4)
 ) {
  opline_jmp_set->opcode = 158;
  opline_jmp_set->result_type = (1<<2);
  do { (result)->op_type = opline_jmp_set->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline_jmp_set->result.constant]; } else { (result)->u.op = opline_jmp_set->result; } } while (0);

  opline_qm_assign = zend_emit_op(((void*)0), 157, &false_node, ((void*)0) );
 } else {
  opline_qm_assign = zend_emit_op(((void*)0), 22, &false_node, ((void*)0) );
 }
 do { opline_qm_assign->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline_qm_assign->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline_qm_assign->result = (result)->u.op; } } while (0);
}

void zend_compile_conditional(znode *result, zend_ast *ast ) {
 zend_ast *cond_ast = ast->child[0];
 zend_ast *true_ast = ast->child[1];
 zend_ast *false_ast = ast->child[2];

 znode cond_node, true_node, false_node;
 zend_op *opline_qm_assign1, *opline_qm_assign2;
 zend_uint opnum_jmpz, opnum_jmp, opnum_qm_assign1;

 if (!true_ast) {
  zend_compile_shorthand_conditional(result, ast );
  return;
 }

 zend_compile_expr(&cond_node, cond_ast );

 opnum_jmpz = zend_emit_cond_jump(43, &cond_node, 0 );

 zend_compile_expr(&true_node, true_ast );

 opnum_qm_assign1 = get_next_op_number((compiler_globals.active_op_array));
 zend_emit_op(result, 22, &true_node, ((void*)0) );

 opnum_jmp = zend_emit_jump(0 );

 zend_update_jump_target_to_next(opnum_jmpz );

 zend_compile_expr(&false_node, false_ast );

 opline_qm_assign1 = &(compiler_globals.active_op_array)->opcodes[opnum_qm_assign1];
 if (true_node.op_type == (1<<2) || true_node.op_type == (1<<4)
  || false_node.op_type == (1<<2) || false_node.op_type == (1<<4)
 ) {
  opline_qm_assign1->opcode = 157;
  opline_qm_assign1->result_type = (1<<2);
  do { (result)->op_type = opline_qm_assign1->result_type; if ((result)->op_type == (1<<0)) { (result)->u.constant = ((compiler_globals.active_op_array))->literals[opline_qm_assign1->result.constant]; } else { (result)->u.op = opline_qm_assign1->result; } } while (0);
 }

 opline_qm_assign2 = zend_emit_op(((void*)0), opline_qm_assign1->opcode, &false_node, ((void*)0) );
 do { opline_qm_assign2->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline_qm_assign2->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline_qm_assign2->result = (result)->u.op; } } while (0);

 zend_update_jump_target_to_next(opnum_jmp );
}

void zend_compile_print(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];

 znode expr_node;
 zend_compile_expr(&expr_node, expr_ast );

 zend_emit_op_tmp(result, 41, &expr_node, ((void*)0) );
}

void zend_compile_exit(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];

 if (expr_ast) {
  znode expr_node;
  zend_compile_expr(&expr_node, expr_ast );
  zend_emit_op(((void*)0), 79, &expr_node, ((void*)0) );
 } else {
  zend_emit_op(((void*)0), 79, ((void*)0), ((void*)0) );
 }

 result->op_type = (1<<0);
 do { (*(&result->u.constant)).u1.type_info = (1) ? 3 : 2; } while (0);
}

void zend_compile_yield(znode *result, zend_ast *ast ) {
 zend_ast *value_ast = ast->child[0];
 zend_ast *key_ast = ast->child[1];

 znode value_node, key_node;
 znode *value_node_ptr = ((void*)0), *key_node_ptr = ((void*)0);
 zend_op *opline;
 zend_bool returns_by_ref = ((compiler_globals.active_op_array)->fn_flags & 0x4000000) != 0;

 if (!(compiler_globals.active_op_array)->function_name) {
  zend_error_noreturn((1<<6L),
   "The \"yield\" expression can only be used inside a function");
 }

 (compiler_globals.active_op_array)->fn_flags |= 0x800000;

 if (key_ast) {
  zend_compile_expr(&key_node, key_ast );
  key_node_ptr = &key_node;
 }

 if (value_ast) {
  if (returns_by_ref && zend_is_variable(value_ast) && !zend_is_call(value_ast)) {
   zend_compile_var(&value_node, value_ast, 6 );
  } else {
   zend_compile_expr(&value_node, value_ast );
  }
  value_node_ptr = &value_node;
 }

 opline = zend_emit_op(result, 160, value_node_ptr, key_node_ptr );

 if (value_ast && returns_by_ref && zend_is_call(value_ast)) {
  opline->extended_value = 1<<0;
 }
}

void zend_compile_instanceof(znode *result, zend_ast *ast ) {
 zend_ast *obj_ast = ast->child[0];
 zend_ast *class_ast = ast->child[1];

 znode obj_node, class_node;
 zend_op *opline;

 zend_compile_expr(&obj_node, obj_ast );
 if (obj_node.op_type == (1<<0)) {
  zend_error_noreturn((1<<6L),
   "instanceof expects an object instance, constant given");
 }

 opline = zend_compile_class_ref(&class_node, class_ast );
 opline->extended_value |= 0x80;

 zend_emit_op_tmp(result, 138, &obj_node, &class_node );
}

void zend_compile_include_or_eval(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 znode expr_node;
 zend_op *opline;

 zend_do_extended_fcall_begin();
 zend_compile_expr(&expr_node, expr_ast );

 opline = zend_emit_op(result, 73, &expr_node, ((void*)0) );
 opline->extended_value = ast->attr;

 zend_do_extended_fcall_end();
}

void zend_compile_isset_or_empty(znode *result, zend_ast *ast ) {
 zend_ast *var_ast = ast->child[0];

 znode var_node;
 zend_op *opline;

                                                                        ;

 if (!zend_is_variable(var_ast) || zend_is_call(var_ast)) {
  if (ast->kind == ZEND_AST_EMPTY) {

   zend_ast *not_ast = zend_ast_create_ex(ZEND_AST_UNARY_OP, 13, var_ast);
   zend_compile_expr(result, not_ast );
   return;
  } else {
   zend_error_noreturn((1<<6L),
    "Cannot use isset() on the result of an expression "
    "(you can use \"null !== expression\" instead)");
  }
 }

 switch (var_ast->kind) {
  case ZEND_AST_VAR:
   if (zend_try_compile_cv(&var_node, var_ast ) == SUCCESS) {
    opline = zend_emit_op(result, 114, &var_node, ((void*)0) );
    opline->extended_value = 0x10000000 | 0x00800000;
   } else {
    opline = zend_compile_simple_var_no_cv(result, var_ast, 3 );
    opline->opcode = 114;
   }
   break;
  case ZEND_AST_DIM:
   opline = zend_compile_dim_common(result, var_ast, 3 );
   opline->opcode = 115;
   break;
  case ZEND_AST_PROP:
   opline = zend_compile_prop_common(result, var_ast, 3 );
   opline->opcode = 148;
   break;
  case ZEND_AST_STATIC_PROP:
   opline = zend_compile_static_prop_common(result, var_ast, 3 );
   opline->opcode = 114;
   break;

 }

 opline->result_type = (1<<1);
 opline->extended_value |= ast->kind == ZEND_AST_ISSET ? 0x02000000 : 0x01000000;
}

void zend_compile_silence(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];
 znode silence_node;

 zend_emit_op_tmp(&silence_node, 57, ((void*)0), ((void*)0) );

 if (expr_ast->kind == ZEND_AST_VAR) {


  zend_compile_simple_var_no_cv(result, expr_ast, 0 );
 } else {
  zend_compile_expr(result, expr_ast );
 }

 zend_emit_op(((void*)0), 58, &silence_node, ((void*)0) );
}

void zend_compile_shell_exec(znode *result, zend_ast *ast ) {
 zend_ast *expr_ast = ast->child[0];

 zval fn_name;
 zend_ast *name_ast, *args_ast, *call_ast;

 do { const char *_s = ("shell_exec"); do { do { zval *__z = (&fn_name); zend_string *__s = (zend_str_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); } while (0);
 name_ast = zend_ast_create_zval(&fn_name);
 args_ast = (zend_ast *) zend_ast_create_list(1, ZEND_AST_ARG_LIST, expr_ast);
 call_ast = zend_ast_create(ZEND_AST_CALL, name_ast, args_ast);

 zend_compile_expr(result, call_ast );

 _zval_ptr_dtor((&fn_name) );
}

void zend_compile_array(znode *result, zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_op *opline;
 zend_uint i, opnum_init;
 zend_bool packed = 1;

 if (zend_try_ct_eval_array(&result->u.constant, ast )) {
  result->op_type = (1<<0);
  return;
 }

 opnum_init = get_next_op_number((compiler_globals.active_op_array));

 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  zend_ast *value_ast = elem_ast->child[0];
  zend_ast *key_ast = elem_ast->child[1];
  zend_bool by_ref = elem_ast->attr;

  znode value_node, key_node, *key_node_ptr = ((void*)0);

  if (key_ast) {
   zend_compile_expr(&key_node, key_ast );
   zend_handle_numeric_op(&key_node );
   key_node_ptr = &key_node;
  }

  if (by_ref) {
   zend_ensure_writable_variable(value_ast);
   zend_compile_var(&value_node, value_ast, 1 );
  } else {
   zend_compile_expr(&value_node, value_ast );
  }

  if (i == 0) {
   opline = zend_emit_op_tmp(result, 71, &value_node, key_node_ptr );
   opline->extended_value = list->children << 2;
  } else {
   opline = zend_emit_op(((void*)0), 72,
    &value_node, key_node_ptr );
   do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline->result = (result)->u.op; } } while (0);
  }
  opline->extended_value |= by_ref;

  if (key_ast && key_node.op_type == (1<<0) && zval_get_type(&(key_node.u.constant)) == 6) {
   packed = 0;
  }
 }


 if (!list->children) {
  zend_emit_op_tmp(result, 71, ((void*)0), ((void*)0) );
 }


 if (!packed) {
  opline = &(compiler_globals.active_op_array)->opcodes[opnum_init];
  opline->extended_value |= (1<<1);
 }
}

void zend_compile_const(znode *result, zend_ast *ast ) {
 zend_ast *name_ast = ast->child[0];
 zend_string *orig_name = zend_ast_get_str(name_ast);
 zend_bool is_fully_qualified;

 zval resolved_name;
 zend_op *opline;

 do { zval *__z = (&resolved_name); zend_string *__s = (zend_resolve_const_name( orig_name, name_ast->attr, &is_fully_qualified )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);


 if (zend_constant_ct_subst(result, &resolved_name, 1 )) {
  _zval_dtor((&resolved_name) );
  return;
 }

 opline = zend_emit_op_tmp(result, 99, ((void*)0), ((void*)0) );
 opline->op2_type = (1<<0);

 if (is_fully_qualified) {
  opline->op2.constant = zend_add_const_name_literal(
   (compiler_globals.active_op_array), &resolved_name, 0 );
 } else {
  opline->extended_value = 0x010;
  if ((compiler_globals.current_namespace)) {
   opline->extended_value |= 0x100;
   opline->op2.constant = zend_add_const_name_literal(
    (compiler_globals.active_op_array), &resolved_name, 1 );
  } else {
   opline->op2.constant = zend_add_const_name_literal(
    (compiler_globals.active_op_array), &resolved_name, 0 );
  }
 }
 zend_alloc_cache_slot(opline->op2.constant );
}

void zend_compile_class_const(znode *result, zend_ast *ast ) {
 zend_ast *class_ast = ast->child[0];
 zend_ast *const_ast = ast->child[1];

 znode class_node, const_node;
 zend_op *opline;

 if (zend_is_const_default_class_ref(class_ast)) {
  class_node.op_type = (1<<0);
  do { zval *__z = (&class_node.u.constant); zend_string *__s = (zend_resolve_class_name_ast(class_ast )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 } else {
  zend_compile_class_ref(&class_node, class_ast );
 }

 zend_compile_expr(&const_node, const_ast );

 opline = zend_emit_op_tmp(result, 99, ((void*)0), &const_node );

 zend_set_class_name_op1(opline, &class_node );

 if (opline->op1_type == (1<<0)) {
  zend_alloc_cache_slot(opline->op2.constant );
 } else {
  zend_alloc_polymorphic_cache_slot(opline->op2.constant );
 }
}

void zend_compile_resolve_class_name(znode *result, zend_ast *ast ) {
 zend_ast *name_ast = ast->child[0];
 zend_uint fetch_type = zend_get_class_fetch_type(zend_ast_get_str(name_ast));

 switch (fetch_type) {
  case 1:
   if (!(compiler_globals.active_class_entry)) {
    zend_error_noreturn((1<<6L),
     "Cannot access self::class when no class scope is active");
   }
   result->op_type = (1<<0);
   do { zval *__z = (&result->u.constant); zend_string *__s = (zend_str_copy((compiler_globals.active_class_entry)->name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   break;
        case 3:
        case 2:
   if (!(compiler_globals.active_class_entry)) {
    zend_error_noreturn((1<<6L),
     "Cannot access %s::class when no class scope is active",
     fetch_type == 3 ? "static" : "parent");
   } else {
    zval class_str_zv;
    zend_ast *class_str_ast, *class_const_ast;

    do { const char *_s = ("class"); do { do { zval *__z = (&class_str_zv); zend_string *__s = (zend_str_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); } while (0);
    class_str_ast = zend_ast_create_zval(&class_str_zv);
    class_const_ast = zend_ast_create(
     ZEND_AST_CLASS_CONST, name_ast, class_str_ast);

    zend_compile_expr(result, class_const_ast );

    _zval_ptr_dtor((&class_str_zv) );
   }
   break;
  case 0:
   result->op_type = (1<<0);
   do { zval *__z = (&result->u.constant); zend_string *__s = (zend_resolve_class_name_ast(name_ast )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   break;

 }
}

void zend_compile_encaps_list(znode *result, zend_ast *ast ) {
 zend_ast_list *list = zend_ast_get_list(ast);
 zend_uint i;

                                ;

 result->op_type = (1<<1);
 result->u.op.var = get_temporary_variable((compiler_globals.active_op_array));

 for (i = 0; i < list->children; ++i) {
  zend_ast *elem_ast = list->child[i];
  znode elem_node;
  zend_op *opline;

  zend_compile_expr(&elem_node, elem_ast );

  if (elem_ast->kind == ZEND_AST_ZVAL) {
   zval *zv = &elem_node.u.constant;
                                         ;

   if ((*(zv)).value.str->len > 1) {
    opline = get_next_op((compiler_globals.active_op_array) );
    opline->opcode = 55;
   } else if ((*(zv)).value.str->len == 1) {
    char ch = *(*(zv)).value.str->val;
    zend_str_release((*(zv)).value.str);
    { zval *__z = (zv); (*(__z)).value.lval = ch; (*(__z)).u1.type_info = 4; };

    opline = get_next_op((compiler_globals.active_op_array) );
    opline->opcode = 54;
   } else {

    zend_str_release((*(zv)).value.str);
    continue;
   }
  } else {
   opline = get_next_op((compiler_globals.active_op_array) );
   opline->opcode = 56;
                                             ;
  }

  if (i == 0) {
   opline->op1_type = (1<<3);
  } else {
   do { opline->op1_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline->op1 = (result)->u.op; } } while (0);
  }
  do { opline->op2_type = (&elem_node)->op_type; if ((&elem_node)->op_type == (1<<0)) { opline->op2.constant = zend_add_literal((compiler_globals.active_op_array), &(&elem_node)->u.constant ); } else { opline->op2 = (&elem_node)->u.op; } } while (0);
  do { opline->result_type = (result)->op_type; if ((result)->op_type == (1<<0)) { opline->result.constant = zend_add_literal((compiler_globals.active_op_array), &(result)->u.constant ); } else { opline->result = (result)->u.op; } } while (0);
 }
}

void zend_compile_magic_const(znode *result, zend_ast *ast ) {
 zend_class_entry *ce = (compiler_globals.active_class_entry);

 if (zend_try_ct_eval_magic_const(&result->u.constant, ast )) {
  result->op_type = (1<<0);
  return;
 }

                                                                  ;

 {
  zval const_zv;
  do { const char *_s = ("__CLASS__"); do { do { zval *__z = (&const_zv); zend_string *__s = (zend_str_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); } while (0);
  zend_ast *const_ast = zend_ast_create(ZEND_AST_CONST,
   zend_ast_create_zval(&const_zv));
  zend_compile_const(result, const_ast );
  _zval_ptr_dtor((&const_zv) );
 }
}

zend_bool zend_is_allowed_in_const_expr(zend_ast_kind kind) {
 return kind == ZEND_AST_ZVAL || kind == ZEND_AST_BINARY_OP
  || kind == ZEND_AST_GREATER || kind == ZEND_AST_GREATER_EQUAL
  || kind == ZEND_AST_AND || kind == ZEND_AST_OR
  || kind == ZEND_AST_UNARY_OP
  || kind == ZEND_AST_UNARY_PLUS || kind == ZEND_AST_UNARY_MINUS
  || kind == ZEND_AST_CONDITIONAL || kind == ZEND_AST_DIM
  || kind == ZEND_AST_ARRAY || kind == ZEND_AST_ARRAY_ELEM
  || kind == ZEND_AST_CONST || kind == ZEND_AST_CLASS_CONST
  || kind == ZEND_AST_RESOLVE_CLASS_NAME || kind == ZEND_AST_MAGIC_CONST;
}

void zend_compile_const_expr_class_const(zend_ast **ast_ptr ) {
 zend_ast *ast = *ast_ptr;
 zend_ast *class_ast = ast->child[0];
 zend_ast *const_ast = ast->child[1];
 zend_string *class_name = zend_ast_get_str(class_ast);
 zend_string *const_name = zend_ast_get_str(const_ast);
 zval result;
 int fetch_type;

 if (class_ast->kind != ZEND_AST_ZVAL) {
  zend_error_noreturn((1<<6L),
   "Dynamic class names are not allowed in compile-time class constant references");
 }

 fetch_type = zend_get_class_fetch_type(class_name);

 if (3 == fetch_type) {
  zend_error_noreturn((1<<6L),
   "\"static::\" is not allowed in compile-time constants");
 }

 if (0 == fetch_type) {
  class_name = zend_resolve_class_name_ast(class_ast );
 } else {
  zend_str_addref(class_name);
 }

 (result).value.str = zend_concat3(
  class_name->val, class_name->len, "::", 2, const_name->val, const_name->len);

 (result).u1.type_info = (11 | (((1<<0) | (1<<1) | (1<<3)) << 8));
 if ((((zend_refcounted*)((result).value.str))->u.v.flags & (1<<1))) {
  (result).u1.v.type_flags &= ~ ((1<<1) | (1<<3));
 }
 (result).u1.v.const_flags = fetch_type;

 zend_ast_destroy(ast);
 zend_str_release(class_name);

 *ast_ptr = zend_ast_create_zval(&result);
}

void zend_compile_const_expr_const(zend_ast **ast_ptr ) {
 zend_ast *ast = *ast_ptr;
 zend_ast *name_ast = ast->child[0];
 zval *orig_name = zend_ast_get_zval(name_ast);
 zend_bool is_fully_qualified;

 znode result;
 zval resolved_name;

 if (zend_constant_ct_subst(&result, orig_name, 0 )) {
  zend_ast_destroy(ast);
  *ast_ptr = zend_ast_create_zval(&result.u.constant);
  return;
 }

 do { zval *__z = (&resolved_name); zend_string *__s = (zend_resolve_const_name( (*(orig_name)).value.str, name_ast->attr, &is_fully_qualified )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);


 (resolved_name).u1.type_info = (11 | (((1<<0) | (1<<1) | (1<<3)) << 8));
 if (!is_fully_qualified) {
  (resolved_name).u1.v.const_flags = 0x010;
 }

 zend_ast_destroy(ast);
 *ast_ptr = zend_ast_create_zval(&resolved_name);
}

void zend_compile_const_expr_resolve_class_name(zend_ast **ast_ptr ) {
 zend_ast *ast = *ast_ptr;
 zend_ast *name_ast = ast->child[0];
 zend_uint fetch_type = zend_get_class_fetch_type(zend_ast_get_str(name_ast));
 zval result;

 switch (fetch_type) {
  case 1:
   if (!(compiler_globals.active_class_entry)) {
    zend_error_noreturn((1<<6L),
     "Cannot access self::class when no class scope is active");
   }
   do { zval *__z = (&result); zend_string *__s = (zend_str_copy((compiler_globals.active_class_entry)->name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   break;
        case 3:
        case 2:
   zend_error_noreturn((1<<6L),
    "%s::class cannot be used for compile-time class name resolution",
    fetch_type == 3 ? "static" : "parent"
   );
   break;
  case 0:
   do { zval *__z = (&result); zend_string *__s = (zend_resolve_class_name_ast(name_ast )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
   break;

 }

 zend_ast_destroy(ast);
 *ast_ptr = zend_ast_create_zval(&result);
}

void zend_compile_const_expr_magic_const(zend_ast **ast_ptr ) {
 zend_ast *ast = *ast_ptr;
 zend_class_entry *ce = (compiler_globals.active_class_entry);


                                                                  ;

 {
  zval const_zv;
  do { const char *_s = ("__CLASS__"); do { do { zval *__z = (&const_zv); zend_string *__s = (zend_str_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); } while (0);
  (const_zv).u1.type_info = (11 | (((1<<0) | (1<<1) | (1<<3)) << 8));

  zend_ast_destroy(ast);
  *ast_ptr = zend_ast_create_zval(&const_zv);
 }
}

void zend_compile_const_expr(zend_ast **ast_ptr ) {
 zend_ast *ast = *ast_ptr;
 if (ast == ((void*)0) || ast->kind == ZEND_AST_ZVAL) {
  return;
 }

 if (!zend_is_allowed_in_const_expr(ast->kind)) {
  zend_error_noreturn((1<<6L), "Constant expression contains invalid operations");
 }

 switch (ast->kind) {
  case ZEND_AST_CLASS_CONST:
   zend_compile_const_expr_class_const(ast_ptr );
   break;
  case ZEND_AST_CONST:
   zend_compile_const_expr_const(ast_ptr );
   break;
  case ZEND_AST_RESOLVE_CLASS_NAME:
   zend_compile_const_expr_resolve_class_name(ast_ptr );
   break;
  case ZEND_AST_MAGIC_CONST:
   zend_compile_const_expr_magic_const(ast_ptr );
   break;
  default:
   zend_ast_apply(ast, zend_compile_const_expr );
   break;
 }
}

void zend_const_expr_to_zval(zval *result, zend_ast *ast ) {
 zend_ast *orig_ast = ast;
 zend_eval_const_expr(&ast );
 zend_compile_const_expr(&ast );
 if (ast->kind == ZEND_AST_ZVAL) {
  do { zval *_z1 = (result); zval *_z2 = (zend_ast_get_zval(ast)); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);




  orig_ast->kind = 0;
 } else {
  do { zval *__z = (result); zend_ast_ref *_ast = _emalloc((sizeof(zend_ast_ref)) ); ((zend_refcounted*)(_ast))->refcount = 1; ((zend_refcounted*)(_ast))->u.type_info = 12; _ast->ast = (zend_ast_copy(ast)); (*(__z)).value.ast = _ast; (*(__z)).u1.type_info = (12 | (((1<<0) | (1<<1) | (1<<3)) << 8)); } while (0);
 }
}


void zend_compile_top_stmt(zend_ast *ast ) {
 if (!ast) {
  return;
 }

 if (ast->kind == ZEND_AST_STMT_LIST) {
  zend_ast_list *list = zend_ast_get_list(ast);
  zend_uint i;
  for (i = 0; i < list->children; ++i) {
   zend_compile_top_stmt(list->child[i] );
  }
  return;
 }

 zend_compile_stmt(ast );

 if (ast->kind != ZEND_AST_NAMESPACE && ast->kind != ZEND_AST_HALT_COMPILER) {
  zend_verify_namespace();
 }
 if (ast->kind == ZEND_AST_FUNC_DECL || ast->kind == ZEND_AST_CLASS) {
  (compiler_globals.zend_lineno) = ((zend_ast_decl *) ast)->end_lineno;
  zend_do_early_binding();
 }
}

void zend_compile_stmt(zend_ast *ast ) {
 if (!ast) {
  return;
 }

 (compiler_globals.zend_lineno) = ast->lineno;

 switch (ast->kind) {
  case ZEND_AST_STMT_LIST:
   zend_compile_stmt_list(ast );
   break;
  case ZEND_AST_GLOBAL:
   zend_compile_global_var(ast );
   break;
  case ZEND_AST_STATIC:
   zend_compile_static_var(ast );
   break;
  case ZEND_AST_UNSET:
   zend_compile_unset(ast );
   break;
  case ZEND_AST_RETURN:
   zend_compile_return(ast );
   break;
  case ZEND_AST_ECHO:
   zend_compile_echo(ast );
   break;
  case ZEND_AST_THROW:
   zend_compile_throw(ast );
   break;
  case ZEND_AST_BREAK:
  case ZEND_AST_CONTINUE:
   zend_compile_break_continue(ast );
   break;
  case ZEND_AST_GOTO:
   zend_compile_goto(ast );
   break;
  case ZEND_AST_LABEL:
   zend_compile_label(ast );
   break;
  case ZEND_AST_WHILE:
   zend_compile_while(ast );
   break;
  case ZEND_AST_DO_WHILE:
   zend_compile_do_while(ast );
   break;
  case ZEND_AST_FOR:
   zend_compile_for(ast );
   break;
  case ZEND_AST_FOREACH:
   zend_compile_foreach(ast );
   break;
  case ZEND_AST_IF:
   zend_compile_if(ast );
   break;
  case ZEND_AST_SWITCH:
   zend_compile_switch(ast );
   break;
  case ZEND_AST_TRY:
   zend_compile_try(ast );
   break;
  case ZEND_AST_DECLARE:
   zend_compile_declare(ast );
   break;
  case ZEND_AST_FUNC_DECL:
  case ZEND_AST_METHOD:
   zend_compile_func_decl(((void*)0), ast );
   break;
  case ZEND_AST_PROP_DECL:
   zend_compile_prop_decl(ast );
   break;
  case ZEND_AST_CLASS_CONST_DECL:
   zend_compile_class_const_decl(ast );
   break;
  case ZEND_AST_USE_TRAIT:
   zend_compile_use_trait(ast );
   break;
  case ZEND_AST_CLASS:
   zend_compile_class_decl(ast );
   break;
  case ZEND_AST_USE:
   zend_compile_use(ast );
   break;
  case ZEND_AST_CONST_DECL:
   zend_compile_const_decl(ast );
   break;
  case ZEND_AST_NAMESPACE:
   zend_compile_namespace(ast );
   break;
  case ZEND_AST_HALT_COMPILER:
   zend_compile_halt_compiler(ast );
   break;
  default:
  {
   znode result;
   zend_compile_expr(&result, ast );
   zend_do_free(&result );
  }
 }

 if (((compiler_globals.declarables).ticks).value.lval && !zend_is_unticked_stmt(ast)) {
  zend_emit_tick();
 }
}

void zend_compile_expr(znode *result, zend_ast *ast ) {

 (compiler_globals.zend_lineno) = zend_ast_get_lineno(ast);

 switch (ast->kind) {
  case ZEND_AST_ZVAL:
   do { zval *__z1 = (&result->u.constant); zval *__z2 = (zend_ast_get_zval(ast)); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); if ((((*(__z1)).u1.type_info & ((1<<1) << 8)) != 0)) { zval_addref_p(__z1); } } while (0);
   result->op_type = (1<<0);
   return;
  case ZEND_AST_ZNODE:
   *result = *zend_ast_get_znode(ast);
   return;
  case ZEND_AST_VAR:
  case ZEND_AST_DIM:
  case ZEND_AST_PROP:
  case ZEND_AST_STATIC_PROP:
  case ZEND_AST_CALL:
  case ZEND_AST_METHOD_CALL:
  case ZEND_AST_STATIC_CALL:
   zend_compile_var(result, ast, 0 );
   return;
  case ZEND_AST_ASSIGN:
   zend_compile_assign(result, ast );
   return;
  case ZEND_AST_ASSIGN_REF:
   zend_compile_assign_ref(result, ast );
   return;
  case ZEND_AST_NEW:
   zend_compile_new(result, ast );
   return;
  case ZEND_AST_CLONE:
   zend_compile_clone(result, ast );
   return;
  case ZEND_AST_ASSIGN_OP:
   zend_compile_compound_assign(result, ast );
   return;
  case ZEND_AST_BINARY_OP:
   zend_compile_binary_op(result, ast );
   return;
  case ZEND_AST_GREATER:
  case ZEND_AST_GREATER_EQUAL:
   zend_compile_greater(result, ast );
   return;
  case ZEND_AST_UNARY_OP:
   zend_compile_unary_op(result, ast );
   return;
  case ZEND_AST_UNARY_PLUS:
  case ZEND_AST_UNARY_MINUS:
   zend_compile_unary_pm(result, ast );
   return;
  case ZEND_AST_AND:
  case ZEND_AST_OR:
   zend_compile_short_circuiting(result, ast );
   return;
  case ZEND_AST_POST_INC:
  case ZEND_AST_POST_DEC:
   zend_compile_post_incdec(result, ast );
   return;
  case ZEND_AST_PRE_INC:
  case ZEND_AST_PRE_DEC:
   zend_compile_pre_incdec(result, ast );
   return;
  case ZEND_AST_CAST:
   zend_compile_cast(result, ast );
   return;
  case ZEND_AST_CONDITIONAL:
   zend_compile_conditional(result, ast );
   return;
  case ZEND_AST_PRINT:
   zend_compile_print(result, ast );
   return;
  case ZEND_AST_EXIT:
   zend_compile_exit(result, ast );
   return;
  case ZEND_AST_YIELD:
   zend_compile_yield(result, ast );
   return;
  case ZEND_AST_INSTANCEOF:
   zend_compile_instanceof(result, ast );
   return;
  case ZEND_AST_INCLUDE_OR_EVAL:
   zend_compile_include_or_eval(result, ast );
   return;
  case ZEND_AST_ISSET:
  case ZEND_AST_EMPTY:
   zend_compile_isset_or_empty(result, ast );
   return;
  case ZEND_AST_SILENCE:
   zend_compile_silence(result, ast );
   return;
  case ZEND_AST_SHELL_EXEC:
   zend_compile_shell_exec(result, ast );
   return;
  case ZEND_AST_ARRAY:
   zend_compile_array(result, ast );
   return;
  case ZEND_AST_CONST:
   zend_compile_const(result, ast );
   return;
  case ZEND_AST_CLASS_CONST:
   zend_compile_class_const(result, ast );
   return;
  case ZEND_AST_RESOLVE_CLASS_NAME:
   zend_compile_resolve_class_name(result, ast );
   return;
  case ZEND_AST_ENCAPS_LIST:
   zend_compile_encaps_list(result, ast );
   return;
  case ZEND_AST_MAGIC_CONST:
   zend_compile_magic_const(result, ast );
   return;
  case ZEND_AST_CLOSURE:
   zend_compile_func_decl(result, ast );
   return;
  default:
                                     ;
 }
}

void zend_compile_var(znode *result, zend_ast *ast, int type ) {
 switch (ast->kind) {
  case ZEND_AST_VAR:
   zend_compile_simple_var(result, ast, type );
   return;
  case ZEND_AST_DIM:
   zend_compile_dim(result, ast, type );
   return;
  case ZEND_AST_PROP:
   zend_compile_prop(result, ast, type );
   return;
  case ZEND_AST_STATIC_PROP:
   zend_compile_static_prop(result, ast, type );
   return;
  case ZEND_AST_CALL:
   zend_compile_call(result, ast, type );
   return;
  case ZEND_AST_METHOD_CALL:
   zend_compile_method_call(result, ast, type );
   return;
  case ZEND_AST_STATIC_CALL:
   zend_compile_static_call(result, ast, type );
   return;
  case ZEND_AST_ZNODE:
   *result = *zend_ast_get_znode(ast);
   return;
  default:
   if (type == 1 || type == 6
    || type == 2 || type == 5
   ) {

    if (type != 6 || ast->kind != ZEND_AST_NEW) {
     zend_error_noreturn((1<<6L),
      "Cannot use temporary expression in write context");
    }
   }

   zend_compile_expr(result, ast );
   return;
 }
}

void zend_delayed_compile_var(znode *result, zend_ast *ast, zend_uint type ) {
 zend_op *opline;
 switch (ast->kind) {
  case ZEND_AST_DIM:
   opline = zend_delayed_compile_dim(result, ast, type );
   zend_adjust_for_fetch_type(opline, type);
   return;
  case ZEND_AST_PROP:
   opline = zend_delayed_compile_prop(result, ast, type );
   zend_adjust_for_fetch_type(opline, type);
   return;
  default:
   zend_compile_var(result, ast, type );
   return;
 }
}

void zend_eval_const_expr(zend_ast **ast_ptr ) {
 zend_ast *ast = *ast_ptr;
 zval result;

 if (!ast) {
  return;
 }

 switch (ast->kind) {
  case ZEND_AST_BINARY_OP:
   zend_eval_const_expr(&ast->child[0] );
   zend_eval_const_expr(&ast->child[1] );
   if (ast->child[0]->kind != ZEND_AST_ZVAL || ast->child[1]->kind != ZEND_AST_ZVAL) {
    return;
   }

   zend_ct_eval_binary_op(&result, ast->attr,
    zend_ast_get_zval(ast->child[0]), zend_ast_get_zval(ast->child[1]) );
   break;
  case ZEND_AST_GREATER:
  case ZEND_AST_GREATER_EQUAL:
   zend_eval_const_expr(&ast->child[0] );
   zend_eval_const_expr(&ast->child[1] );
   if (ast->child[0]->kind != ZEND_AST_ZVAL || ast->child[1]->kind != ZEND_AST_ZVAL) {
    return;
   }

   zend_ct_eval_greater(&result, ast->kind,
    zend_ast_get_zval(ast->child[0]), zend_ast_get_zval(ast->child[1]) );
   break;
  case ZEND_AST_UNARY_PLUS:
  case ZEND_AST_UNARY_MINUS:
   zend_eval_const_expr(&ast->child[0] );
   if (ast->child[0]->kind != ZEND_AST_ZVAL) {
    return;
   }

   zend_ct_eval_unary_pm(&result, ast->kind,
    zend_ast_get_zval(ast->child[0]) );
   break;
  case ZEND_AST_ARRAY:
   if (!zend_try_ct_eval_array(&result, ast )) {
    return;
   }
   break;
  case ZEND_AST_MAGIC_CONST:
   if (!zend_try_ct_eval_magic_const(&result, ast )) {
    return;
   }
   break;
  default:
   return;
 }

 zend_ast_destroy(ast);
 *ast_ptr = zend_ast_create_zval(&result);
}
