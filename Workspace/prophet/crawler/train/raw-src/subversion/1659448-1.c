# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 311 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c"
# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
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
# 26 "/usr/include/string.h" 2 3 4






# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 58 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
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
# 164 "/usr/include/string.h" 2 3 4


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
# 51 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
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
# 52 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4
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
# 1273 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
# 1274 "/usr/include/x86_64-linux-gnu/bits/string2.h" 2 3 4




extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 1297 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 636 "/usr/include/string.h" 2 3 4
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2
# 1 "./subversion/include/svn_x509.h" 1
# 30 "./subversion/include/svn_x509.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 1
# 43 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 1
# 164 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h"
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
# 165 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 2



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





# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 36 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 77 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
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
# 78 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
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
# 193 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h"
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
# 194 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr.h" 2
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
# 44 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 2
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
# 45 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 2
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
# 31 "./subversion/include/svn_x509.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h" 1
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h"
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 1 3
# 30 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 3
typedef __builtin_va_list va_list;
# 50 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 30 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_tables.h" 2
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
# 32 "./subversion/include/svn_x509.h" 2
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
# 33 "./subversion/include/svn_x509.h" 2

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
# 31 "./subversion/include/svn_types.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 86 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4
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
# 321 "/usr/include/stdlib.h" 3 4
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
# 1349 "./subversion/include/svn_types.h" 2
# 40 "./subversion/include/svn_error.h" 2
# 58 "./subversion/include/svn_error.h"
# 1 "./subversion/include/svn_error_codes.h" 1
# 160 "./subversion/include/svn_error_codes.h"
typedef enum svn_errno_t { SVN_WARNING = ((20000 + 50000) + 50000) + 1,



  SVN_ERR_BAD_CONTAINING_POOL = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 0,



  SVN_ERR_BAD_FILENAME = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 1,



  SVN_ERR_BAD_URL = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 2,



  SVN_ERR_BAD_DATE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 3,



  SVN_ERR_BAD_MIME_TYPE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 4,
# 190 "./subversion/include/svn_error_codes.h"
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
# 766 "./subversion/include/svn_error_codes.h"
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
# 898 "./subversion/include/svn_error_codes.h"
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







  SVN_ERR_ASN1_OUT_OF_DATA = (((20000 + 50000) + 50000) + (24 * 5000)) + 0,



  SVN_ERR_ASN1_UNEXPECTED_TAG = (((20000 + 50000) + 50000) + (24 * 5000)) + 1,



  SVN_ERR_ASN1_INVALID_LENGTH = (((20000 + 50000) + 50000) + (24 * 5000)) + 2,



  SVN_ERR_ASN1_LENGTH_MISMATCH = (((20000 + 50000) + 50000) + (24 * 5000)) + 3,



  SVN_ERR_ASN1_INVALID_DATA = (((20000 + 50000) + 50000) + (24 * 5000)) + 4,



  SVN_ERR_X509_FEATURE_UNAVAILABLE = (((20000 + 50000) + 50000) + (24 * 5000)) + 5,



  SVN_ERR_X509_CERT_INVALID_PEM = (((20000 + 50000) + 50000) + (24 * 5000)) + 6,



  SVN_ERR_X509_CERT_INVALID_FORMAT = (((20000 + 50000) + 50000) + (24 * 5000)) + 7,



  SVN_ERR_X509_CERT_INVALID_VERSION = (((20000 + 50000) + 50000) + (24 * 5000)) + 8,



  SVN_ERR_X509_CERT_INVALID_SERIAL = (((20000 + 50000) + 50000) + (24 * 5000)) + 9,



  SVN_ERR_X509_CERT_INVALID_ALG = (((20000 + 50000) + 50000) + (24 * 5000)) + 10,



  SVN_ERR_X509_CERT_INVALID_NAME = (((20000 + 50000) + 50000) + (24 * 5000)) + 11,



  SVN_ERR_X509_CERT_INVALID_DATE = (((20000 + 50000) + 50000) + (24 * 5000)) + 12,



  SVN_ERR_X509_CERT_INVALID_PUBKEY = (((20000 + 50000) + 50000) + (24 * 5000)) + 13,



  SVN_ERR_X509_CERT_INVALID_SIGNATURE = (((20000 + 50000) + 50000) + (24 * 5000)) + 14,



  SVN_ERR_X509_CERT_INVALID_EXTENSIONS = (((20000 + 50000) + 50000) + (24 * 5000)) + 15,



  SVN_ERR_X509_CERT_UNKNOWN_VERSION = (((20000 + 50000) + 50000) + (24 * 5000)) + 16,



  SVN_ERR_X509_CERT_UNKNOWN_PK_ALG = (((20000 + 50000) + 50000) + (24 * 5000)) + 17,



  SVN_ERR_X509_CERT_SIG_MISMATCH = (((20000 + 50000) + 50000) + (24 * 5000)) + 18,



  SVN_ERR_X509_CERT_VERIFY_FAILED = (((20000 + 50000) + 50000) + (24 * 5000)) + 19,



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
# 35 "./subversion/include/svn_x509.h" 2
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
# 36 "./subversion/include/svn_x509.h" 2
# 54 "./subversion/include/svn_x509.h"
typedef struct svn_x509_certinfo_t svn_x509_certinfo_t;






typedef struct svn_x509_name_attr_t svn_x509_name_attr_t;
# 79 "./subversion/include/svn_x509.h"
svn_error_t *
svn_x509_parse_cert(svn_x509_certinfo_t **certinfo,
                    const char *buf,
                    apr_size_t buflen,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);






svn_x509_name_attr_t *
svn_x509_name_attr_dup(const svn_x509_name_attr_t *attr,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);






const unsigned char *
svn_x509_name_attr_get_oid(const svn_x509_name_attr_t *attr, apr_size_t *len);





const char *
svn_x509_name_attr_get_value(const svn_x509_name_attr_t *attr);







svn_x509_certinfo_t *
svn_x509_certinfo_dup(const svn_x509_certinfo_t *certinfo,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);





const char *
svn_x509_certinfo_get_subject(const svn_x509_certinfo_t *certinfo,
                              apr_pool_t *result_pool);







const apr_array_header_t *
svn_x509_certinfo_get_subject_attrs(const svn_x509_certinfo_t *certinfo);





const char *
svn_x509_certinfo_get_issuer(const svn_x509_certinfo_t *certinfo,
                             apr_pool_t *result_pool);







const apr_array_header_t *
svn_x509_certinfo_get_issuer_attrs(const svn_x509_certinfo_t *certinfo);






apr_time_t
svn_x509_certinfo_get_valid_from(const svn_x509_certinfo_t *certinfo);






const apr_time_t
svn_x509_certinfo_get_valid_to(const svn_x509_certinfo_t *certinfo);





const svn_checksum_t *
svn_x509_certinfo_get_digest(const svn_x509_certinfo_t *certinfo);






const apr_array_header_t *
svn_x509_certinfo_get_hostnames(const svn_x509_certinfo_t *certinfo);
# 194 "./subversion/include/svn_x509.h"
const char *
svn_x509_oid_to_string(const unsigned char *oid, apr_size_t oid_len,
                       apr_pool_t *scratch_pool, apr_pool_t *result_pool);
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2
# 1 "./subversion/include/svn_base64.h" 1
# 33 "./subversion/include/svn_base64.h"
# 1 "./subversion/include/svn_io.h" 1
# 38 "./subversion/include/svn_io.h"
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
# 39 "./subversion/include/svn_io.h" 2

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
# 208 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create(const char *cstring, apr_pool_t *pool);







svn_stringbuf_t *
svn_stringbuf_ncreate(const char *bytes, apr_size_t size, apr_pool_t *pool);





svn_stringbuf_t *
svn_stringbuf_create_empty(apr_pool_t *pool);
# 235 "./subversion/include/svn_string.h"
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
# 278 "./subversion/include/svn_string.h"
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
# 311 "./subversion/include/svn_string.h"
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
# 366 "./subversion/include/svn_string.h"
void
svn_stringbuf_insert(svn_stringbuf_t *str,
                     apr_size_t pos,
                     const char *bytes,
                     apr_size_t count);
# 381 "./subversion/include/svn_string.h"
void
svn_stringbuf_remove(svn_stringbuf_t *str,
                     apr_size_t pos,
                     apr_size_t count);
# 400 "./subversion/include/svn_string.h"
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
# 459 "./subversion/include/svn_string.h"
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
# 501 "./subversion/include/svn_string.h"
char *
svn_cstring_tokenize(const char *sep, char **str);







int
svn_cstring_count_newlines(const char *msg);
# 521 "./subversion/include/svn_string.h"
char *
svn_cstring_join(const apr_array_header_t *strings,
                 const char *separator,
                 apr_pool_t *pool);
# 536 "./subversion/include/svn_string.h"
int
svn_cstring_casecmp(const char *str1, const char *str2);
# 548 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoi64(apr_int64_t *n, const char *str,
                     apr_int64_t minval, apr_int64_t maxval,
                     int base);
# 561 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi64(apr_int64_t *n, const char *str);
# 572 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi(int *n, const char *str);
# 584 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoui64(apr_uint64_t *n, const char *str,
                      apr_uint64_t minval, apr_uint64_t maxval,
                      int base);
# 597 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui64(apr_uint64_t *n, const char *str);
# 608 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui(unsigned int *n, const char *str);
# 618 "./subversion/include/svn_string.h"
const char *
svn_cstring_skip_prefix(const char *str, const char *prefix);
# 44 "./subversion/include/svn_io.h" 2
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
# 34 "./subversion/include/svn_base64.h" 2
# 53 "./subversion/include/svn_base64.h"
svn_stream_t *
svn_base64_encode(svn_stream_t *output,
                  apr_pool_t *pool);





svn_stream_t *
svn_base64_decode(svn_stream_t *output,
                  apr_pool_t *pool);
# 76 "./subversion/include/svn_base64.h"
const svn_string_t *
svn_base64_encode_string2(const svn_string_t *str,
                          svn_boolean_t break_lines,
                          apr_pool_t *pool);







__attribute__((deprecated))
const svn_string_t *
svn_base64_encode_string(const svn_string_t *str,
                         apr_pool_t *pool);
# 99 "./subversion/include/svn_base64.h"
const svn_string_t *
svn_base64_decode_string(const svn_string_t *str,
                         apr_pool_t *pool);
# 111 "./subversion/include/svn_base64.h"
__attribute__((deprecated))
svn_stringbuf_t *
svn_base64_from_md5(unsigned char digest[],
                    apr_pool_t *pool);
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2
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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2
# 1 "./subversion/include/svn_pools.h" 1
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
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h"
# 1 "./subversion/include/svn_delta.h" 1
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
# 528 "./subversion/include/svn_delta.h"
void
svn_txdelta_to_svndiff2(svn_txdelta_window_handler_t *handler,
                        void **handler_baton,
                        svn_stream_t *output,
                        int svndiff_version,
                        apr_pool_t *pool);







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
# 1286 "./subversion/include/svn_delta.h"
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
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h" 2
# 1 "./subversion/include/svn_path.h" 1
# 57 "./subversion/include/svn_path.h"
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
# 58 "./subversion/include/svn_path.h" 2
# 72 "./subversion/include/svn_path.h"
const char *
svn_path_internal_style(const char *path, apr_pool_t *pool);







const char *
svn_path_local_style(const char *path, apr_pool_t *pool);
# 113 "./subversion/include/svn_path.h"
char *
svn_path_join(const char *base, const char *component, apr_pool_t *pool);
# 133 "./subversion/include/svn_path.h"
char *
svn_path_join_many(apr_pool_t *pool,
                   const char *base,
                   ...) __attribute__((sentinel));
# 156 "./subversion/include/svn_path.h"
char *
svn_path_basename(const char *path, apr_pool_t *pool);
# 170 "./subversion/include/svn_path.h"
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
# 242 "./subversion/include/svn_path.h"
void
svn_path_split(const char *path,
               const char **dirpath,
               const char **base_name,
               apr_pool_t *pool);






int
svn_path_is_empty(const char *path);
# 283 "./subversion/include/svn_path.h"
const char *
svn_path_canonicalize(const char *path, apr_pool_t *pool);
# 295 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_canonical(const char *path, apr_pool_t *pool);
# 306 "./subversion/include/svn_path.h"
int
svn_path_compare_paths(const char *path1, const char *path2);
# 326 "./subversion/include/svn_path.h"
char *
svn_path_get_longest_ancestor(const char *path1,
                              const char *path2,
                              apr_pool_t *pool);
# 341 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_get_absolute(const char **pabsolute,
                      const char *relative,
                      apr_pool_t *pool);
# 357 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_split_if_file(const char *path,
                       const char **pdirectory,
                       const char **pfile,
                       apr_pool_t *pool);
# 399 "./subversion/include/svn_path.h"
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
# 523 "./subversion/include/svn_path.h"
const char *
svn_path_is_child(const char *path1, const char *path2, apr_pool_t *pool);
# 536 "./subversion/include/svn_path.h"
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
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h" 2



# 1 "./subversion/include/svn_auth.h" 1
# 36 "./subversion/include/svn_auth.h"
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
# 259 "./subversion/include/svn_config.h"
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
# 293 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_read2(svn_config_t **cfgp,
                 const char *file,
                 svn_boolean_t must_exist,
                 svn_boolean_t section_names_case_sensitive,
                 apr_pool_t *result_pool);







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
# 752 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_read_auth_data(apr_hash_t **hash,
                          const char *cred_kind,
                          const char *realmstring,
                          const char *config_dir,
                          apr_pool_t *pool);
# 771 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_write_auth_data(apr_hash_t *hash,
                           const char *cred_kind,
                           const char *realmstring,
                           const char *config_dir,
                           apr_pool_t *pool);
# 799 "./subversion/include/svn_config.h"
typedef svn_error_t *
(*svn_config_auth_walk_func_t)(svn_boolean_t *delete_cred,
                               void *walk_baton,
                               const char *cred_kind,
                               const char *realmstring,
                               apr_hash_t *hash,
                               apr_pool_t *scratch_pool);
# 835 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_walk_auth_data(const char *config_dir,
                          svn_config_auth_walk_func_t walk_func,
                          void *walk_baton,
                          apr_pool_t *scratch_pool);
# 859 "./subversion/include/svn_config.h"
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
# 37 "./subversion/include/svn_auth.h" 2
# 87 "./subversion/include/svn_auth.h"
typedef struct svn_auth_baton_t svn_auth_baton_t;


typedef struct svn_auth_iterstate_t svn_auth_iterstate_t;



typedef struct svn_auth_provider_t
{

  const char *cred_kind;
# 110 "./subversion/include/svn_auth.h"
  svn_error_t * (*first_credentials)(void **credentials,
                                     void **iter_baton,
                                     void *provider_baton,
                                     apr_hash_t *parameters,
                                     const char *realmstring,
                                     apr_pool_t *pool);
# 128 "./subversion/include/svn_auth.h"
  svn_error_t * (*next_credentials)(void **credentials,
                                    void *iter_baton,
                                    void *provider_baton,
                                    apr_hash_t *parameters,
                                    const char *realmstring,
                                    apr_pool_t *pool);
# 146 "./subversion/include/svn_auth.h"
  svn_error_t * (*save_credentials)(svn_boolean_t *saved,
                                    void *credentials,
                                    void *provider_baton,
                                    apr_hash_t *parameters,
                                    const char *realmstring,
                                    apr_pool_t *pool);

} svn_auth_provider_t;




typedef struct svn_auth_provider_object_t
{
  const svn_auth_provider_t *vtable;
  void *provider_baton;

} svn_auth_provider_object_t;


typedef void (*svn_auth_simple_provider_func_t)(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 189 "./subversion/include/svn_auth.h"
typedef struct svn_auth_cred_simple_t
{

  const char *username;

  const char *password;




  svn_boolean_t may_save;
} svn_auth_cred_simple_t;
# 213 "./subversion/include/svn_auth.h"
typedef struct svn_auth_cred_username_t
{

  const char *username;




  svn_boolean_t may_save;
} svn_auth_cred_username_t;
# 239 "./subversion/include/svn_auth.h"
typedef struct svn_auth_cred_ssl_client_cert_t
{

  const char *cert_file;




  svn_boolean_t may_save;
} svn_auth_cred_ssl_client_cert_t;



typedef void (*svn_auth_ssl_client_cert_pw_provider_func_t)(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 274 "./subversion/include/svn_auth.h"
typedef struct svn_auth_cred_ssl_client_cert_pw_t
{

  const char *password;




  svn_boolean_t may_save;
} svn_auth_cred_ssl_client_cert_pw_t;
# 305 "./subversion/include/svn_auth.h"
typedef struct svn_auth_ssl_server_cert_info_t
{

  const char *hostname;

  const char *fingerprint;

  const char *valid_from;

  const char *valid_until;

  const char *issuer_dname;

  const char *ascii_cert;
} svn_auth_ssl_server_cert_info_t;






svn_auth_ssl_server_cert_info_t *
svn_auth_ssl_server_cert_info_dup(const svn_auth_ssl_server_cert_info_t *info,
                                  apr_pool_t *pool);


typedef struct svn_auth_cred_ssl_server_trust_t
{




  svn_boolean_t may_save;

  apr_uint32_t accepted_failures;
} svn_auth_cred_ssl_server_trust_t;
# 376 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_simple_prompt_func_t)(
  svn_auth_cred_simple_t **cred,
  void *baton,
  const char *realm,
  const char *username,
  svn_boolean_t may_save,
  apr_pool_t *pool);
# 396 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_username_prompt_func_t)(
  svn_auth_cred_username_t **cred,
  void *baton,
  const char *realm,
  svn_boolean_t may_save,
  apr_pool_t *pool);
# 439 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_ssl_server_trust_prompt_func_t)(
  svn_auth_cred_ssl_server_trust_t **cred,
  void *baton,
  const char *realm,
  apr_uint32_t failures,
  const svn_auth_ssl_server_cert_info_t *cert_info,
  svn_boolean_t may_save,
  apr_pool_t *pool);
# 459 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_ssl_client_cert_prompt_func_t)(
  svn_auth_cred_ssl_client_cert_t **cred,
  void *baton,
  const char *realm,
  svn_boolean_t may_save,
  apr_pool_t *pool);
# 477 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_ssl_client_cert_pw_prompt_func_t)(
  svn_auth_cred_ssl_client_cert_pw_t **cred,
  void *baton,
  const char *realm,
  svn_boolean_t may_save,
  apr_pool_t *pool);
# 497 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_plaintext_prompt_func_t)(
  svn_boolean_t *may_save_plaintext,
  const char *realmstring,
  void *baton,
  apr_pool_t *pool);
# 516 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_plaintext_passphrase_prompt_func_t)(
  svn_boolean_t *may_save_plaintext,
  const char *realmstring,
  void *baton,
  apr_pool_t *pool);
# 533 "./subversion/include/svn_auth.h"
void
svn_auth_open(svn_auth_baton_t **auth_baton,
              const apr_array_header_t *providers,
              apr_pool_t *pool);
# 545 "./subversion/include/svn_auth.h"
void
svn_auth_set_parameter(svn_auth_baton_t *auth_baton,
                       const char *name,
                       const void *value);






const void *
svn_auth_get_parameter(svn_auth_baton_t *auth_baton,
                       const char *name);
# 663 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_first_credentials(void **credentials,
                           svn_auth_iterstate_t **state,
                           const char *cred_kind,
                           const char *realmstring,
                           svn_auth_baton_t *auth_baton,
                           apr_pool_t *pool);
# 681 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_next_credentials(void **credentials,
                          svn_auth_iterstate_t *state,
                          apr_pool_t *pool);
# 694 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_save_credentials(svn_auth_iterstate_t *state,
                          apr_pool_t *pool);
# 714 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_forget_credentials(svn_auth_baton_t *auth_baton,
                            const char *cred_kind,
                            const char *realmstring,
                            apr_pool_t *pool);
# 737 "./subversion/include/svn_auth.h"
void
svn_auth_get_simple_prompt_provider(svn_auth_provider_object_t **provider,
                                    svn_auth_simple_prompt_func_t prompt_func,
                                    void *prompt_baton,
                                    int retry_limit,
                                    apr_pool_t *pool);
# 759 "./subversion/include/svn_auth.h"
void
svn_auth_get_username_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_username_prompt_func_t prompt_func,
  void *prompt_baton,
  int retry_limit,
  apr_pool_t *pool);
# 799 "./subversion/include/svn_auth.h"
void
svn_auth_get_simple_provider2(
  svn_auth_provider_object_t **provider,
  svn_auth_plaintext_prompt_func_t plaintext_prompt_func,
  void *prompt_baton,
  apr_pool_t *pool);
# 814 "./subversion/include/svn_auth.h"
void
svn_auth_get_simple_provider(svn_auth_provider_object_t **provider,
                             apr_pool_t *pool);
# 837 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_get_platform_specific_provider(
  svn_auth_provider_object_t **provider,
  const char *provider_name,
  const char *provider_type,
  apr_pool_t *pool);
# 862 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_get_platform_specific_client_providers(
  apr_array_header_t **providers,
  svn_config_t *config,
  apr_pool_t *pool);
# 1004 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_gnome_keyring_unlock_prompt_func_t)(
  char **keyring_password,
  const char *keyring_name,
  void *baton,
  apr_pool_t *pool);
# 1028 "./subversion/include/svn_auth.h"
const svn_version_t *
svn_auth_gnome_keyring_version(void);
# 1057 "./subversion/include/svn_auth.h"
void
svn_auth_get_gnome_keyring_simple_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1088 "./subversion/include/svn_auth.h"
void
svn_auth_get_gnome_keyring_ssl_client_cert_pw_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);







const svn_version_t *
svn_auth_kwallet_version(void);
# 1120 "./subversion/include/svn_auth.h"
void
svn_auth_get_kwallet_simple_provider(svn_auth_provider_object_t **provider,
                                     apr_pool_t *pool);
# 1142 "./subversion/include/svn_auth.h"
void
svn_auth_get_kwallet_ssl_client_cert_pw_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1168 "./subversion/include/svn_auth.h"
void
svn_auth_get_gpg_agent_simple_provider
    (svn_auth_provider_object_t **provider,
     apr_pool_t *pool);
# 1186 "./subversion/include/svn_auth.h"
void
svn_auth_get_username_provider(svn_auth_provider_object_t **provider,
                               apr_pool_t *pool);
# 1200 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_server_trust_file_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1214 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_file_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1242 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_pw_file_provider2(
  svn_auth_provider_object_t **provider,
  svn_auth_plaintext_passphrase_prompt_func_t plaintext_passphrase_prompt_func,
  void *prompt_baton,
  apr_pool_t *pool);
# 1258 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_pw_file_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1273 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_server_trust_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_ssl_server_trust_prompt_func_t prompt_func,
  void *prompt_baton,
  apr_pool_t *pool);
# 1292 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_ssl_client_cert_prompt_func_t prompt_func,
  void *prompt_baton,
  int retry_limit,
  apr_pool_t *pool);
# 1312 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_pw_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_ssl_client_cert_pw_prompt_func_t prompt_func,
  void *prompt_baton,
  int retry_limit,
  apr_pool_t *pool);
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h" 2
# 138 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h"
typedef struct svn_test_opts_t
{

  const char *prog_name;

  const char *fs_type;

  const char *config_file;

  const char *srcdir;

  const char *repos_dir;

  const char *repos_url;

  const char *repos_template;


  int server_minor_version;
  svn_boolean_t verbose;

} svn_test_opts_t;


typedef svn_error_t* (*svn_test_driver2_t)(apr_pool_t *pool);


typedef svn_error_t* (*svn_test_driver_opts_t)(const svn_test_opts_t *opts,
                                               apr_pool_t *pool);


typedef svn_boolean_t (*svn_test_predicate_func_t)(const svn_test_opts_t *opts,
                                                   const char *predicate_value,
                                                   apr_pool_t *pool);


enum svn_test_mode_t
  {
    svn_test_pass,
    svn_test_xfail,
    svn_test_skip,
    svn_test_all
  };


struct svn_test_predicate_t
{

  svn_test_predicate_func_t func;


  const char *value;


  enum svn_test_mode_t alternate_mode;


  const char *description;
};





struct svn_test_descriptor_t
{

  enum svn_test_mode_t mode;


  svn_test_driver2_t func2;


  svn_test_driver_opts_t func_opts;


  const char *msg;


  const char *wip;


  struct svn_test_predicate_t predicate;
};
# 231 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h"
int svn_test_main(int argc, const char *argv[], int max_threads,
                  struct svn_test_descriptor_t *test_funcs);
# 285 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h"
apr_uint32_t svn_test_rand(apr_uint32_t *seed);



void svn_test_add_dir_cleanup(const char *path);



typedef struct svn_test__tree_entry_t
{
  const char *path;
  const char *contents;
}
svn_test__tree_entry_t;


typedef struct svn_test__tree_t
{
  svn_test__tree_entry_t *entries;
  int num_entries;
}
svn_test__tree_t;



extern const svn_test__tree_entry_t svn_test__greek_tree_nodes[21];




const char *
svn_test_data_path(const char* basename, apr_pool_t *result_pool);





svn_error_t *
svn_test_get_srcdir(const char **srcdir,
                    const svn_test_opts_t *opts,
                    apr_pool_t *pool);


svn_error_t *
svn_test__init_auth_baton(svn_auth_baton_t **baton,
                          apr_pool_t *result_pool);
# 346 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/../svn_test.h"
svn_boolean_t
svn_test__fs_type_is(const svn_test_opts_t *opts,
                     const char *predicate_value,
                     apr_pool_t *pool);



svn_boolean_t
svn_test__fs_type_not(const svn_test_opts_t *opts,
                      const char *predicate_value,
                      apr_pool_t *pool);
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c" 2

struct x509_test {
  const char *base64_cert;
  const char *subject;
  const char *subject_oids;
  const char *issuer;
  const char *issuer_oids;





  const char *valid_from;
  const char *valid_to;
  const char *hostnames;
  const char *sha1_digest;
};

static struct x509_test cert_tests[] = {

  { "MIIEtzCCA5+gAwIBAgIQWGBOrapkezd+BWVsAtmtmTANBgkqhkiG9w0BAQsFADA8"
    "MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMVGhhd3RlLCBJbmMuMRYwFAYDVQQDEw1U"
    "aGF3dGUgU1NMIENBMB4XDTE0MDQxMTAwMDAwMFoXDTE2MDQwNzIzNTk1OVowgYsx"
    "CzAJBgNVBAYTAlVTMREwDwYDVQQIEwhNYXJ5bGFuZDEUMBIGA1UEBxQLRm9yZXN0"
    "IEhpbGwxIzAhBgNVBAoUGkFwYWNoZSBTb2Z0d2FyZSBGb3VuZGF0aW9uMRcwFQYD"
    "VQQLFA5JbmZyYXN0cnVjdHVyZTEVMBMGA1UEAxQMKi5hcGFjaGUub3JnMIIBIjAN"
    "BgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA+Tq4mH+stRoxe4xth8tUCgLt+P4L"
    "D/JWZz4a2IecaaAk57vIlTxEyP16fUShUfxVJnD0KV11zv2qaEUXNaA6hKd4H/oB"
    "u2OyGev+quRM+aFCjWqASkXt7fLGsIkHAwP3XwBVBpARbcXJeCjCBxqaYrQqS8LT"
    "wfPUD9eYncGlQ+ixb3Bosy7TmkWKeLsRdS90cAO/rdgQ8OI7kLT/1tr5GpF9RmXo"
    "RnVqMP+U0zGd/BNNSneg7emb7TxLzxeMKZ7QbF4MZi8RRN11spvx8/f92CiYrGGu"
    "y67VdOGPaomYc+VZ2syLwduHGK40ADrEK3+MQpsRFB0dM08j9bhpr5A44wIDAQAB"
    "o4IBYzCCAV8wFwYDVR0RBBAwDoIMKi5hcGFjaGUub3JnMAkGA1UdEwQCMAAwQgYD"
    "VR0gBDswOTA3BgpghkgBhvhFAQc2MCkwJwYIKwYBBQUHAgEWG2h0dHBzOi8vd3d3"
    "LnRoYXd0ZS5jb20vY3BzLzAOBgNVHQ8BAf8EBAMCBaAwHwYDVR0jBBgwFoAUp6KD"
    "uzRFQD381TBPErk+oQGf9tswOgYDVR0fBDMwMTAvoC2gK4YpaHR0cDovL3N2ci1v"
    "di1jcmwudGhhd3RlLmNvbS9UaGF3dGVPVi5jcmwwHQYDVR0lBBYwFAYIKwYBBQUH"
    "AwEGCCsGAQUFBwMCMGkGCCsGAQUFBwEBBF0wWzAiBggrBgEFBQcwAYYWaHR0cDov"
    "L29jc3AudGhhd3RlLmNvbTA1BggrBgEFBQcwAoYpaHR0cDovL3N2ci1vdi1haWEu"
    "dGhhd3RlLmNvbS9UaGF3dGVPVi5jZXIwDQYJKoZIhvcNAQELBQADggEBAF52BLvl"
    "x5or9/aO7+cPhxuPxwiNRgbvHdCakD7n8vzjNyct9fKp6/XxB6GQiTZ0nZPJOyIu"
    "Pi1QDLKOXvaPeLKDBilL/+mrn/ev3s/aRQSrUsieKDoQnqtmlxEHc/T3+Ni/RZob"
    "PD4GzPuNKpK3BIc0fk/95T8R1DjBSQ5/clvkzOKtcl3VffAwnHiE9TZx9js7kZwO"
    "b9nOKX8DFao3EpQcS7qn63Ibzbq5A6ry8ZNRQSIJK/xlCAWoyUd1uxnqGFnus8wb"
    "9RVZJQe8YvyytBjgbE3QjnfPOxoEJA3twupnPmH+OCTM6V3TZqpRZj/sZ5rtIQ++"
    "hI5FdJWUWVSgnSw=",
    "C=US, ST=Maryland, L=Forest Hill, O=Apache Software Foundation, "
    "OU=Infrastructure, CN=*.apache.org",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.11 2.5.4.3",
    "C=US, O=Thawte, Inc., CN=Thawte SSL CA",
    "2.5.4.6 2.5.4.10 2.5.4.3",
    "2014-04-11T00:00:00.000000Z",
    "2016-04-07T23:59:59.000000Z",
    "*.apache.org",
    "151d8ad1e1bac21466bc2836ba80b5fcf872f37c" },




  { "MIIDtzCCAp+gAwIBAgIJAJKX85dqh3RvMA0GCSqGSIb3DQEBBQUAMEUxCzAJBgNV"
    "BAYTAkFVMRMwEQYDVQQIEwpTb21lLVN0YXRlMSEwHwYDVQQKExhJbnRlcm5ldCBX"
    "aWRnaXRzIFB0eSBMdGQwIBcNMTQwNjI3MTczMTUxWhgPMjExNDA2MDMxNzMxNTFa"
    "MEUxCzAJBgNVBAYTAkFVMRMwEQYDVQQIEwpTb21lLVN0YXRlMSEwHwYDVQQKExhJ"
    "bnRlcm5ldCBXaWRnaXRzIFB0eSBMdGQwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAw"
    "ggEKAoIBAQDaa4gwNBB6vgWrlOIEMdzvD06zmmiocEt6UnTHtmAcfrBuDnKrBwEh"
    "f5JxneL16XIuKwK6n/4omBtem/PPjjpOLM9PMQuoO0cpQ0UGFnfpmko6PSQoqRHl"
    "qTbDGv4usn7qdZV+FKz/B9CMonRSzWHMz5YPmqfob6BqaaJY/qJEzHJA24bm4jPH"
    "IsaVCInEGpqAUpejwBzNujfbLibBNrVX7K846zk+tnsNR90kP5h3IRP3SdWVywKC"
    "AMN2izzhmaDhuPzaTBobovr+ySJShmX6gdB5PpWkm6rcBl6RJ+tM0ZBSJjQvkYp4"
    "seV+rcXFgpJP/aQL3vhDON32tjWh3A2JAgMBAAGjgacwgaQwHQYDVR0OBBYEFF+N"
    "7TyDI8THpAbx1pfzFFtl5z4iMHUGA1UdIwRuMGyAFF+N7TyDI8THpAbx1pfzFFtl"
    "5z4ioUmkRzBFMQswCQYDVQQGEwJBVTETMBEGA1UECBMKU29tZS1TdGF0ZTEhMB8G"
    "A1UEChMYSW50ZXJuZXQgV2lkZ2l0cyBQdHkgTHRkggkAkpfzl2qHdG8wDAYDVR0T"
    "BAUwAwEB/zANBgkqhkiG9w0BAQUFAAOCAQEAo4t9fYe2I+XIQn8i/KI9UFEE9fue"
    "w6rQMnf9yyd8nwL+IcV84hvyNrq0+7SptUBMq3rsEf5UIBIBI4Oa614mJ/Kt976O"
    "S7Sa1IPH7j+zb/jqH/xGskEVi25dZz7psFCmi7Hm9dnVz9YKa2yLW6R2KZcTVxCx"
    "SSdDRlD7SonsYeq2fGrAo7Y9xfZsiJ2ZbJ18kHs2coMWuhgSrN9jrML6mb5B+k22"
    "/rgsCJgFsBDPBYR3ju0Ahqg7v6kwg9O2PJzyb4ljsw8oI0sCwHTZW5I5FMq2D9g6"
    "hj80N2fhS9QWoLyeKoMTNB2Do6VaNrLrCJiscZWrsnM1f+XBqV8hMuHX8A==",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2014-06-27T17:31:51.000000Z",
    "2114-06-03T17:31:51.000000Z",
    ((void*)0),
    "db3a959e145acc2741f9eeecbeabce53cc5b7362" },


  { "MIIDrTCCApWgAwIBAgIBATANBgkqhkiG9w0BAQUFADBFMQswCQYDVQQGEwJBVTET"
    "MBEGA1UECBMKU29tZS1TdGF0ZTEhMB8GA1UEChMYSW50ZXJuZXQgV2lkZ2l0cyBQ"
    "dHkgTHRkMB4XDTE0MDcwMjE4MzYxMFoXDTE1MDcwMjE4MzYxMFowcjELMAkGA1UE"
    "BhMCR1IxFTATBgNVBAgMDM6Rz4TPhM65zrrOrjETMBEGA1UEBwwKzpHOuM6uzr3O"
    "sTEdMBsGA1UECgwUz4DOsc+BzqzOtM61zrnOs868zrExGDAWBgNVBAMMD3d3dy5l"
    "eGFtcGxlLmNvbTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMVPuQPz"
    "INjsiXl+GeiXMzXV1Bfm8vzbQnMLAFY/ZKKK4gpy58xcNrmur//Fd38naTM/DetO"
    "PEoDa+vQ48CnUWCDT3CKUA3BnrjtR3/EITC7XRcfk5lyk0IZr9RZB1WedQxK1n5E"
    "Ecz8EBrm9+1442Nmg/y1F8d/2F2CjKB+PgfOP1WWaIQcsjLsftXec+kGjc34kwbS"
    "9D9H+bRrPVcOzBZOqC+K0K7MMOxKA5mMi4b/Nlep76gTaUyonclRIADanAyaK5WG"
    "0IkEI/nxufaP3AcPksCbroWLTkPKIe97Yj6mnzNhK9TA9w5RgdBrjNyfrwUaYiYR"
    "FxVJN0VrHWSsRnECAwEAAaN7MHkwCQYDVR0TBAIwADAsBglghkgBhvhCAQ0EHxYd"
    "T3BlblNTTCBHZW5lcmF0ZWQgQ2VydGlmaWNhdGUwHQYDVR0OBBYEFNOobRTPfoWP"
    "EGgXVkHfwrqz7PVzMB8GA1UdIwQYMBaAFIV8JZkZ88X7MTQSsJ6/qF3KboHKMA0G"
    "CSqGSIb3DQEBBQUAA4IBAQAam6vJUv6kcWWrEAfdnwwRmmJ4X1Jey3Sp48G35MOE"
    "KkHtwqbtL+QU1VA2X98bEYobqZinM3e3zrlbpgbe1xoJ00MnT9CgQObXr+cum/Ql"
    "PwWXB5fK3BrNwqRMRGc9w27FevyFeybdKhc47jEKMOANrB/aziNHaq9gBtU/HZdy"
    "rm9TEaOHMy6vNrdpOZKpwXPxYqsQxMLpen9D64t/3P6hsV5FMQTaxSFhszidG44t"
    "xaU4O0BOq4x//THCWguMxzO5RxW/V8wI/rkpvhAH1wljHTusnsAZea4PpstZ7+W7"
    "43GME1DwjYdUK9HhqRNrDkiJLox4Tmegw9A7m4XLt4zu",
    "C=GR, ST=\xce\x91\xcf\x84\xcf\x84\xce\xb9\xce\xba\xce\xae, "
    "L=\xce\x91\xce\xb8\xce\xae\xce\xbd\xce\xb1, "
    "O=\xcf\x80\xce\xb1\xcf\x81\xce\xac\xce\xb4\xce\xb5\xce\xb9\xce\xb3"
    "\xce\xbc\xce\xb1, CN=www.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2014-07-02T18:36:10.000000Z",
    "2015-07-02T18:36:10.000000Z",
    "www.example.com",
    "b3b9789d8a53868f418619565f6b56af0033bdd3" },
# 163 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c"
  { "MIIEnzCCA4egAwIBAgIBATANBgkqhkiG9w0BAQUFADCBqzELMAkGA1UEBhMCQVUx"
    "MTAvBgNVBAgcKAAAAFMAAABvAAAAbQAAAGUAAAAtAAAAUwAAAHQAAABhAAAAdAAA"
    "AGUxaTBnBgNVBAocYAAAAEkAAABuAAAAdAAAAGUAAAByAAAAbgAAAGUAAAB0AAAA"
    "IAAAAFcAAABpAAAAZAAAAGcAAABpAAAAdAAAAHMAAAAgAAAAUAAAAHQAAAB5AAAA"
    "IAAAAEwAAAB0AAAAZDAeFw0xNDA3MjIyMjM3MzBaFw0xNTA3MjIyMjM3MzBaMIH8"
    "MQswCQYDVQQGEwJHUjEhMB8GA1UECBwYAAADkQAAA8QAAAPEAAADuQAAA7oAAAOu"
    "MR0wGwYDVQQHHBQAAAORAAADuAAAA64AAAO9AAADsTExMC8GA1UEChwoAAADwAAA"
    "A7EAAAPBAAADrAAAA7QAAAO1AAADuQAAA7MAAAO8AAADsTExMC8GA1UECxwoAAHX"
    "9gAB1/cAAdf4AAHX+QAB1/oAAdf7AAHX/AAB1/0AAdf+AAHX/zFFMEMGA1UEAxw8"
    "AAAAdwAAAHcAAAB3AAAALgAAAGUAAAB4AAAAYQAAAG0AAABwAAAAbAAAAGUAAAAu"
    "AAAAYwAAAG8AAABtMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAuYUb"
    "aNt22rsR5Qc/2zsenSvrlbvv1CwwRPNxcWTKdLl4lJEUy5YCnQXIq3qTi+eAFetQ"
    "MwUOZem6kgNdwmGvCz3lrLwOobd1D5mG9agzKLVUVj72csbNNFzHr8z/7oaHvYYs"
    "eYxW3oRm6vDYtHw5spXrxTzRIAnG6foxXFYAtDDHQpdjsofxqXO67aUmmGvE5ffX"
    "gD3dvTvjejzcjjVsLQP/HG4MQOqeIyvyyHg1E3dyOrG+3qR6RN1ZveROdvU38Udm"
    "s0KSGVX2lDLsUTQSKg5L8CLWDHqgGQWjLZQRgRiKZId/f9ubaJdLN6KfAQ3UvYAP"
    "bKL5/k2GpsPDE21X0QIDAQABo3sweTAJBgNVHRMEAjAAMCwGCWCGSAGG+EIBDQQf"
    "Fh1PcGVuU1NMIEdlbmVyYXRlZCBDZXJ0aWZpY2F0ZTAdBgNVHQ4EFgQUccHhM6C7"
    "nGMpclkG7YLIRuFueYQwHwYDVR0jBBgwFoAUz0X1b2Ok9MVVzxqxX6MgtTwSKmYw"
    "DQYJKoZIhvcNAQEFBQADggEBAEpqEa08JkPG+XBlLemnoJsnoaRuQnLZvSCoAwIt"
    "fugTE8686EigTZyYVFQ+GaI+EqVeiMjpAEhS3IMbhx5VIr61S3Nta2BG9OPjr4Xf"
    "01oUeh4egL93CpIGNwu6M1SrQv2UVAKTwahxNmNuvx6Ojx5P2tne+KJtRUiwM3dE"
    "of78/0NJD27OwjW0ruZAifF5CAR7mhy3NOMARpE2kqZk5695OF+QCahe00Y/9ulz"
    "sCjgjpCUYv87OTbBGC5XGRd/ZopTRqtBVxpEHX/fux5/wqxBawrCuQsVw1Kfw0Ur"
    "30aYWLsOsRwhiQkukjQfcMra1AHLujWaAHuLIDls1ozc8xo=",
    "C=GR, ST=\xce\x91\xcf\x84\xcf\x84\xce\xb9\xce\xba\xce\xae, "
    "L=\xce\x91\xce\xb8\xce\xae\xce\xbd\xce\xb1, "
    "O=\xcf\x80\xce\xb1\xcf\x81\xce\xac\xce\xb4\xce\xb5\xce\xb9\xce\xb3"
    "\xce\xbc\xce\xb1, "
    "OU=\xf0\x9d\x9f\xb6\xf0\x9d\x9f\xb7\xf0\x9d\x9f\xb8\xf0\x9d\x9f\xb9"
    "\xf0\x9d\x9f\xba\xf0\x9d\x9f\xbb\xf0\x9d\x9f\xbc\xf0\x9d\x9f\xbd"
    "\xf0\x9d\x9f\xbe\xf0\x9d\x9f\xbf, "
    "CN=www.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.11 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2014-07-22T22:37:30.000000Z",
    "2015-07-22T22:37:30.000000Z",
    "www.example.com",
    "cfa15310189cf89f1dadc9c989db46f287fff7a7"
  },



  { "MIID3zCCAsegAwIBAgIBATANBgkqhkiG9w0BAQUFADBnMQswCQYDVQQGEwJBVTEd"
    "MBsGA1UECB4UAFMAbwBtAGUALQBTAHQAYQB0AGUxOTA3BgNVBAoeMABJAG4AdABl"
    "AHIAbgBlAHQAIABXAGkAZABnAGkAdABzACAAUAB0AHkAIABMAHQAZDAeFw0xNDA3"
    "MjIyMzAyMDlaFw0xNTA3MjIyMzAyMDlaMIGBMQswCQYDVQQGEwJHUjEVMBMGA1UE"
    "CB4MA5EDxAPEA7kDugOuMRMwEQYDVQQHHgoDkQO4A64DvQOxMR0wGwYDVQQKHhQD"
    "wAOxA8EDrAO0A7UDuQOzA7wDsTEnMCUGA1UEAx4eAHcAdwB3AC4AZQB4AGEAbQBw"
    "AGwAZQAuAGMAbwBtMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAqzof"
    "mf9YANAl2I5AcUjfAAJhqc2BL6z6k0J9bWyDL7DZf6AJtD5stRjs8cgiSGfJt9Cg"
    "YQ0Cvnwz9ztNVXLliMmiJ4V0HzG80GI6SBK0PoCVbddUV/PN7REgPNjTwMYlys5w"
    "Yt/GR8OJJV+eb02rpAfVigDlh7CFjY/uKMs2ThPi+yQb2V6qxLk3ZKIHh5IbKQjt"
    "zIX/W1t+hiBjojnuOmhAoEefZ583k7amR5GBZO4GS5Qfj+4kjL5xiwB3bjTC8pnV"
    "Iv4+mN2F6xKW/9IOWZtdySDADaU2ioyuMDzzjp5N5Nt0ZGhrEG2cDC3CatZaV4U7"
    "9yBbi6kzlo3fCbCOlQIDAQABo3sweTAJBgNVHRMEAjAAMCwGCWCGSAGG+EIBDQQf"
    "Fh1PcGVuU1NMIEdlbmVyYXRlZCBDZXJ0aWZpY2F0ZTAdBgNVHQ4EFgQUNvwKR1v/"
    "R0FQU1WnzqT3brNxaQQwHwYDVR0jBBgwFoAUSM/JbJVWuYFp+awSOEXZcKn1ddQw"
    "DQYJKoZIhvcNAQEFBQADggEBABna/SiYMBJvbnI+lj7j8ddSFihaFheqtouxOB2d"
    "tiVz5mcc5KsAFlkrxt7YcYB7SEc+K28nqGb3bfbZ18JayRBY3JS/h4WGu4eL5XkX"
    "rceWUy60zF7DHs6p8E8HZVF1CdCC/LXr2BAdYTc/y1f37bLKVFF4mMJMP4b8/nSL"
    "z8+oOO9CxaEjzRoCawf2+jaajXTSTDXBgIx1t6bJMAS6S6RKPaCketyAmpsOZVBS"
    "VtBVfVIOB2zFqs6iqkXtdiOXWlZ0DBQRX0G1VD5G80RlZXs0yEfufCwLUl/TyOhM"
    "WisUSEOzd4RlbsBj30JQkVG9+jXb2KChPkiMpg0tFi8HU3s=",
    "C=GR, ST=\xce\x91\xcf\x84\xcf\x84\xce\xb9\xce\xba\xce\xae, "
    "L=\xce\x91\xce\xb8\xce\xae\xce\xbd\xce\xb1, "
    "O=\xcf\x80\xce\xb1\xcf\x81\xce\xac\xce\xb4\xce\xb5\xce\xb9\xce\xb3"
    "\xce\xbc\xce\xb1, CN=www.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2014-07-22T23:02:09.000000Z",
    "2015-07-22T23:02:09.000000Z",
    "www.example.com",
    "6e2cd969350979d3741b9abb66c71159a94ff971"
  },
# 248 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c"
  { "MIIDnTCCAoWgAwIBAgIBATANBgkqhkiG9w0BAQUFADBFMQswCQYDVQQGEwJBVTET"
    "MBEGA1UECBQKU29tZS1TdGF0ZTEhMB8GA1UEChQYSW50ZXJuZXQgV2lkZ2l0cyBQ"
    "dHkgTHRkMB4XDTE0MDcyMjIzNDQxOFoXDTE1MDcyMjIzNDQxOFowYjELMAkGA1UE"
    "BhMCTk8xGDAWBgNVBAgUD034cmUgb2cgUm9tc2RhbDEQMA4GA1UEBxQHxWxlc3Vu"
    "ZDENMAsGA1UEChQEZPhtZTEYMBYGA1UEAxQPd3d3LmV4YW1wbGUuY29tMIIBIjAN"
    "BgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAz8uD5f2KRXvB//mKOpCXM3h/MOjK"
    "xUgC4TIHi3BmnYR0IDElMPJrC263/eU0hKycyegyMjXkwIN5eEx4/Nl///RrzJBQ"
    "+uXKfEJ4hTJ5x1uUYxhmtq4djZFxfjFH5yobT/LRDkEw9b/+NiRb30P+WrxhrAKW"
    "7GRsE2pIdPdbM2IB5v/wORB4TK0kLYkmeEPWNJd63SmX4BEC6dRAaMxLIXKn75r5"
    "GhMHKbUdt2Yy+5s0JlN9hMWqhnavCmGquzl7y/1E1OOUIm0jhL0sJn6wVTc+UO+Q"
    "7u/w0xf38J8SU7lW6zbcQyYaSIQCMikgpprUSXdQZZUZGmHS7Gis39SiLwIDAQAB"
    "o3sweTAJBgNVHRMEAjAAMCwGCWCGSAGG+EIBDQQfFh1PcGVuU1NMIEdlbmVyYXRl"
    "ZCBDZXJ0aWZpY2F0ZTAdBgNVHQ4EFgQUQa2QLy+4QUH8hKNdR2LcvDKYImcwHwYD"
    "VR0jBBgwFoAUpX6YP04yWqNiziUM7h0KgrRHMF4wDQYJKoZIhvcNAQEFBQADggEB"
    "AElYUTQp5MOQk+ykIV0MHTw9OsEvLc1ZDmChls5WKYAu6KWgBbcjcTlkTpDlydrO"
    "6JFxvCCg0K13dYOI3K/O9icGRauIrxrJOTtaIMryj7F51C52TOVPzkjL05eZTh+q"
    "MmP3KI3uYSpXI6D6RI6hOKIRnFiUOQuXW3I8Z7s03KScBc9PSsVrMBLBz/Vpklaf"
    "Tv/3jVBVIZwCW67SnFQ+vqEzaM4Ns2TBodlVqB1w0enPpow8bNnUwElLQJx3GXnl"
    "z0JTpA6AwIRCF8n+VJgNN218fo2t2vvDDW/cZ+XMXzGNVhAqQ1F8B36esxy3P8+o"
    "Bcwx241dxeGSYFHerqrTJIU=",
    "C=NO, ST=M\xc3\xb8re og Romsdal, L=\xc3\x85lesund, O=d\xc3\xb8me, "
    "CN=www.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2014-07-22T23:44:18.000000Z",
    "2015-07-22T23:44:18.000000Z",
    "www.example.com",
    "787d1577ae77b79649d8f99cf4ed58a332dc48da"
  },




  { "MIIEMTCCAxmgAwIBAgIBATANBgkqhkiG9w0BAQUFADBjMQswCQYDVQQGEwJBVTET"
    "MBEGA1UECBMKU29tZS1TdGF0ZTEhMB8GA1UEChMYSW50ZXJuZXQgV2lkZ2l0cyBQ"
    "dHkgTHRkMRwwGgYDVQQDExNJbnRlcm5ldCBXaWRnaXRzIENBMB4XDTE0MDcyNTE3"
    "NDEwNFoXDTE1MDcyNTE3NDEwNFowdDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldh"
    "c2hpbmd0b24xEzARBgNVBAcTCk5vcnRoIEJlbmQxITAfBgNVBAoTGEludGVybmV0"
    "IFdpZGdpdHMgUHR5IEx0ZDEYMBYGA1UEAxMPd3d3LmV4YW1wbGUuY29tMIIBIjAN"
    "BgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAxlryoK6hMhGI/UlHi7v1m+Z3tCvg"
    "ZG1twDFNvBACpFVbJtC/v+fiy1eG7ooZ1PsdCINQ1iXLh1igevlw/4w6iTDpeSZg"
    "OCPYqK6ejnS0bKtSB4TuP8yiQtqwaVz4yPP88lXuQJDRJzgaAR0VAhooLgEpl1z1"
    "n9wQO15AW5swzpKcEOi4n6Zmf1t7oxOt9awAOhkL1FfFwkpbiK9yQv3TPVo+xzbx"
    "BJxwx55RY8Dpiu0kuiTYWsd02pocb0uIqd7a5B4y05PhJseqwyX0Mw57HBBnbru1"
    "lCetP4PkoM2gf7Uoj9e61nmM1mustKTIPvh7tZHWW3UW9JxAFG+6FkKDewIDAQAB"
    "o4HeMIHbMAkGA1UdEwQCMAAwLAYJYIZIAYb4QgENBB8WHU9wZW5TU0wgR2VuZXJh"
    "dGVkIENlcnRpZmljYXRlMB0GA1UdDgQWBBQ4A9k8VwI0wv7u5rB4+1D9cuHiqTAf"
    "BgNVHSMEGDAWgBS6O+MdRDDrD715AXdrnuNZ7wDSyjALBgNVHQ8EBAMCBeAwUwYD"
    "VR0RBEwwSoINKi5leGFtcGxlLmNvbYIRKi5mb28uZXhhbXBsZS5jb22CESouYmFy"
    "LmV4YW1wbGUuY29tghN6aWctemFnLmV4YW1wbGUuY29tMA0GCSqGSIb3DQEBBQUA"
    "A4IBAQAf4IrSOL741IUkyFQrDdof39Cp87VdNEo4Bl8fUSuCjqZONxJfiAFx7GcB"
    "Cd7h7Toe6CYCeQLHSEXQ1S1eWYLIq0ZoP3Q/huJdoH7yskDyC5Faexph0obKM5hj"
    "+EYGW2W/UYBzEZai+eePBovARDlupiMaTJGvtdU/AcgMhXCoGNK6egesXoiNgfFh"
    "h+lXUNWUWm2gZlKwRJff8tkR7bIG7MGzyL6Rqav2/tQdbFVXN5AFPdYPFLf0Vo5m"
    "eGYM87TILfSo7n7Kh0aZovwcuF/vPUWRJl3B1HaPt9k6DhcFyAji0SJyZWyM4v88"
    "GSq5Dk8dnTdL2otToll+r4IqFLlp",
    "C=US, ST=Washington, L=North Bend, O=Internet Widgits Pty Ltd, "
    "CN=www.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd, CN=Internet Widgits CA",
    "2.5.4.6 2.5.4.8 2.5.4.10 2.5.4.3",
    "2014-07-25T17:41:04.000000Z",
    "2015-07-25T17:41:04.000000Z",
    "*.example.com, *.foo.example.com, *.bar.example.com, zig-zag.example.com",
    "9c365d27b7b6cc438576a8e465685ea7a4f61129"
  },


  { "MIIEEjCCAvqgAwIBAgIJAKJarRWbvbCjMA0GCSqGSIb3DQEBBQUAMGMxCzAJBgNV"
    "BAYTAkFVMRMwEQYDVQQIEwpTb21lLVN0YXRlMSEwHwYDVQQKExhJbnRlcm5ldCBX"
    "aWRnaXRzIFB0eSBMdGQxHDAaBgNVBAMTE0ludGVybmV0IFdpZGdpdHMgQ0EwHhcN"
    "MTQwNzI1MTc0MTAzWhcNMjQwNzIyMTc0MTAzWjBjMQswCQYDVQQGEwJBVTETMBEG"
    "A1UECBMKU29tZS1TdGF0ZTEhMB8GA1UEChMYSW50ZXJuZXQgV2lkZ2l0cyBQdHkg"
    "THRkMRwwGgYDVQQDExNJbnRlcm5ldCBXaWRnaXRzIENBMIIBIjANBgkqhkiG9w0B"
    "AQEFAAOCAQ8AMIIBCgKCAQEAv0f0TAiE13WHaFv8j6M9uuniO40+Aj8cuhZtJ1GC"
    "GI/mW56wq2BJrP6N4+jyxYbZ/13S3ypPu+N087Nc/4xaPtUD/eKqMlU+o8gHM/Lf"
    "BEs2dUuBsvkNM0KoC04NPNTOYDnfHOrzx8iHhqlDedwmP8FeQn3rNS8k4qDyJpG3"
    "Ay8ICz5mB07Cy6NISohTxMtatfW5yKmhnhiS92X42QAEgI1pGB7jJl1g3u+KY1Bf"
    "/10kcramYSYIM1uB7XHQjZI4bhEhQwuIWePMOSCOykdmbemM3ijF9f531Olq+0Nz"
    "t7lA1b/aW4PGGJsZ6uIIjKMaX4npP+HHUaNGVssgTnTehQIDAQABo4HIMIHFMB0G"
    "A1UdDgQWBBS6O+MdRDDrD715AXdrnuNZ7wDSyjCBlQYDVR0jBIGNMIGKgBS6O+Md"
    "RDDrD715AXdrnuNZ7wDSyqFnpGUwYzELMAkGA1UEBhMCQVUxEzARBgNVBAgTClNv"
    "bWUtU3RhdGUxITAfBgNVBAoTGEludGVybmV0IFdpZGdpdHMgUHR5IEx0ZDEcMBoG"
    "A1UEAxMTSW50ZXJuZXQgV2lkZ2l0cyBDQYIJAKJarRWbvbCjMAwGA1UdEwQFMAMB"
    "Af8wDQYJKoZIhvcNAQEFBQADggEBAI442H8CpePFvOtdvcosu2N8juJrzACuayDI"
    "Ze32EtHFN611azduqkWBgMJ3Fv74o0A7u5Gl8A7RZnfBTMX7cvpfHvWefau0xqgm"
    "Mn8CcTUGel0qudCCMe+kPppmkgNaZFvawSqcAA/u2yni2yx8BakYYDZzyfmEf9dm"
    "hZi5SmxFFba5UhNKOye0GKctT13s/7EgfFNyVhZA7hWU26Xm88QnGnN/qxJdpq+e"
    "+Glctn9tyke4b1VZ2Yr+R4OktrId44ZQcRD44+88v5ThP8DQsvkXcjREMFAIPkvG"
    "CEDOIem4l9KFfnsHn8/4KvoBRkmCkGaSwOwUdUG+jIjBpY/82kM=",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd, CN=Internet Widgits CA",
    "2.5.4.6 2.5.4.8 2.5.4.10 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd, CN=Internet Widgits CA",
    "2.5.4.6 2.5.4.8 2.5.4.10 2.5.4.3",
    "2014-07-25T17:41:03.000000Z",
    "2024-07-22T17:41:03.000000Z",
    ((void*)0),
    "b9decce236aa1da07b2bf088160bffe1469b9a4a"
  },

  { "MIIENjCCAx6gAwIBAgIBATANBgkqhkiG9w0BAQUFADBjMQswCQYDVQQGEwJBVTET"
    "MBEGA1UECBMKU29tZS1TdGF0ZTEhMB8GA1UEChMYSW50ZXJuZXQgV2lkZ2l0cyBQ"
    "dHkgTHRkMRwwGgYDVQQDExNJbnRlcm5ldCBXaWRnaXRzIENBMB4XDTE0MDcyNTE4"
    "NDMyOFoXDTE1MDcyNTE4NDMyOFowczELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldh"
    "c2hpbmd0b24xEzARBgNVBAcTCk5vcnRoIEJlbmQxITAfBgNVBAoTGEludGVybmV0"
    "IFdpZGdpdHMgUHR5IEx0ZDEXMBUGA1UEAxMOaXAuZXhhbXBsZS5jb20wggEiMA0G"
    "CSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDXKkSxg89tu5/n+lIC8ajj1T9vsO5B"
    "nRH5Sne7UPc6pGMTNFi1MOVjdDWkmuCUzoI+HKLDc69/4V5RU12N1QNgsgcOzCSo"
    "qgxa+dQk2s1shz1zhyaHkpdeMZU3/p9D4v+nRGAdYifwl/VOTwjWWucNzHDBwvb6"
    "+Wm4pXE94Y5p8fY/lZi7VgtxdoPdSHGkIAps8psZGPjqKpLEjnLMp1n0v9cZhBF6"
    "OoMUZpQuwcjT8vMQppgIWhZFLiH2jn7FTYWZyB0Dh9nMd097NQA87VtVfNc+g0oY"
    "qLe3YldJgvVfyeSLhnyv68fBfGcTj310pNrGeE/m4tyxupiUT8BitfxPAgMBAAGj"
    "geQwgeEwCQYDVR0TBAIwADAsBglghkgBhvhCAQ0EHxYdT3BlblNTTCBHZW5lcmF0"
    "ZWQgQ2VydGlmaWNhdGUwHQYDVR0OBBYEFI09JZlhKV44Z+I5d58V/ZDqQ7yZMB8G"
    "A1UdIwQYMBaAFDjQVnIU9pQI1nM8jjmxYiicMTdGMAsGA1UdDwQEAwIF4DBZBgNV"
    "HREEUjBQgg0qLmV4YW1wbGUuY29tghEqLmZvby5leGFtcGxlLmNvbYcEfwAAAYIR"
    "Ki5iYXIuZXhhbXBsZS5jb22CE3ppZy16YWcuZXhhbXBsZS5jb20wDQYJKoZIhvcN"
    "AQEFBQADggEBAEK+XIGwavf+5Ht44ifHrGog0CDr4ESg7wFjzk+BJwYDtIPp9b8A"
    "EG8qbfmOS+2trG3zc74baf2rmrfn0YGZ/GV826NMTaf7YU1/tJQTo+RX9g3aHg6f"
    "pUBfIyAV8ELq84sgwd1PIgleVgIiDrz+a0UZ05Z5S+GbR2pwNH6+fO0O5E9clt2a"
    "Cute1UMBqAMGKiFaP8HD6SUFTdTKZNxHtQzYmmuvoC1nzVatMFdkTuQgSQ/uNlzg"
    "+yUFoufMZhs3gPx9PfXGOQ7f3nKE+WCK4KNGv+OILYsk4zUjMznfAwBRs9PyITN2"
    "BKe64WsF6ZxTq3zLVGy5I8LpbtlvSmAaBp4=",
    "C=US, ST=Washington, L=North Bend, O=Internet Widgits Pty Ltd, "
    "CN=ip.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd, CN=Internet Widgits CA",
    "2.5.4.6 2.5.4.8 2.5.4.10 2.5.4.3",
    "2014-07-25T18:43:28.000000Z",
    "2015-07-25T18:43:28.000000Z",
    "*.example.com, *.foo.example.com, *.bar.example.com, zig-zag.example.com",
    "3525fb617c232fdc738d736c1cbd5d97b19b51e4"
  },



  { "MIIDgDCCAmygAwIBAgIBATAJBgUrDgMCHQUAMEUxCzAJBgNVBAYTAkFVMRMwEQYD"
    "VQQIFApTb21lLVN0YXRlMSEwHwYDVQQKFBhJbnRlcm5ldCBXaWRnaXRzIFB0eSBM"
    "dGQwHhcNMTQwODE4MDk1OTQ1WhcNMTUwODE4MDk1OTQ1WjBNMQswCQYDVQQGEwJV"
    "SzEQMA4GA1UECBQHRW5nbGFuZDESMBAGA1UEBxQJU2hlZmZpZWxkMRgwFgYDVQQD"
    "FA93d3cuZXhhbXBsZS5jb20wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB"
    "AQCkvtieKg33RSzhn5JMDPPRlDS8Q16CN96A4lLI9YrJCy33z46PrbR2mq2hOz5l"
    "MdgbAaRF0MUGhcKv4msJ0bsWhkybaSBAVgnoC7ObQWPNF7ppMzUjeDAlUBXNfheR"
    "ZcgcgGWqUkoB1uUMhvmVuPrzvxn+WCwyoP6zQCviYLsR8AygGQgdhV6c9wJ/x9HS"
    "MRUvUOeo7SCmx9GK5Hc11QV2K3rwKXABeAxXNzbyQe7hFfQYCI2SB5s3bEnhIvg7"
    "BG0BQmoprHjXWBftc0+msKQTFw7+jZ21NsfwGoPonuVsCOJjJ51jp2oKqk3b1GGc"
    "DEmmMQ0JtqfHO5a7JACBaHbTAgMBAAGjezB5MAkGA1UdEwQCMAAwLAYJYIZIAYb4"
    "QgENBB8WHU9wZW5TU0wgR2VuZXJhdGVkIENlcnRpZmljYXRlMB0GA1UdDgQWBBSo"
    "jICtcIgZL6OCCB5BJ5PGf1UIyTAfBgNVHSMEGDAWgBT5KQMLMylrXSQvhMtONHZc"
    "22Jm9TAJBgUrDgMCHQUAA4IBAQCvCJ4i2kRzSRhnlDxd0UbQtytVIJFFJlfREPTM"
    "j8+VqqtCVyPSX8T5NU+HCiEmhVrTlm/W0i8ygJXr8izyIMGRqbyhn2M9b8hAY6Jl"
    "0edztu/FV/YHsJbPznWkXWpMMaXDEX4wI329f5odccIbB5VSaaoAdKZ6Ne4nf6oV"
    "95KRFWkXoYjm24TnpALsNnK1Kjjed6h5ApB+IANOpXYFbGcsfbuKhWbFd2nd6t5U"
    "NpUcv4H9Tgdl6KgrfsbQtAeouWCgoiNzrul8FOaQTdJLZfCsjuE+IkGpM+DX8PiF"
    "5M41EqkSKia8sChFIln+lkRY41OWP9uQ1VXCfdRIzOnXWh9U",
    "C=UK, ST=England, L=Sheffield, CN=www.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2014-08-18T09:59:45.000000Z",
    "2015-08-18T09:59:45.000000Z",
    "www.example.com",
    "0e0869961d508b13bb22aa8da675b2e9951c0e70"
  },

  { "MIIDDTCCAfUCAQEwDQYJKoZIhvcNAQEFBQAwRTELMAkGA1UEBhMCQVUxEzARBgNV"
    "BAgTClNvbWUtU3RhdGUxITAfBgNVBAoTGEludGVybmV0IFdpZGdpdHMgUHR5IEx0"
    "ZDAeFw0xNTAxMTkyMjEyNDhaFw0xNjAxMTkyMjEyNDhaMFQxCzAJBgNVBAYTAlVT"
    "MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRMwEQYDVQQHEwpOb3J0aCBCZW5kMRswGQYD"
    "VQQDExJ4NTA5djEuZXhhbXBsZS5jb20wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAw"
    "ggEKAoIBAQDniW3DmGGtA0MoYqE9H55/RmjtTJD2WVmM/STEsw+RW74UGsZ62qfi"
    "ADedl4ukZYKlk3TwJrGEwDBKOMWHuzCYVxhclyHkHwX7QqamvZRgaOonEu82KHuE"
    "dZo4FhOWDC9D0yS4RFbfqvSu/JG19FYsnRQn1RPFYji6jG9TRwavplVBiMhR68kc"
    "8HTW1Wu7uJ5SV0UtTicFes8MGek3+zWceGt+Egwd2UlIYXwTPzB5m7UPuufEdvFL"
    "ED3pusVatohFzjCbYsuJIR5ppYd49uTxPWGvRidJ2C8GbDf9PCgDduS0Gz91Txnw"
    "h+WiVYCQ6SxAJWp/xeZWE71k88N0vJEzAgMBAAEwDQYJKoZIhvcNAQEFBQADggEB"
    "ABoBaObsHnIrkd3RvvGb5q7fnEfiT1DXsufS3ypf4Z8IST/z+NeaUaiRN1oLcvDz"
    "qC7ygTYZ2BZoEw3ReCGqQWT4iYET+lH8DM+U5val3gVlSWqx1jj/wiV1OAxQsakM"
    "BnmNs/MDshiv54irvSlqnxEp2o/BU/vMrN656C5DJkZpYoMpIWxdFnd+bzNzuN1k"
    "pJfTjzWlGckKfdblNPOfdtccTqtQ5d4mWtYNJ8DfL5rRRwCuzXvZtbVHKxqkXaXr"
    "CYUfFUobapgPfvvMc1QcDY+2nvhC2ij+HAPIHgZPuzJsjZRC1zwg074cfgjZbgbm"
    "R0HVF486p3vS8HFv4lndRZA=",
    "C=US, ST=Washington, L=North Bend, CN=x509v1.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2015-01-19T22:12:48.000000Z",
    "2016-01-19T22:12:48.000000Z",
    "x509v1.example.com",
    "5730dd65a7f77fdf0dfd90e5a53119f38854af29"
  },





  { "MIIDLzCCAhcCAQ8wDQYJKoZIhvcNAQEFBQAwKzEpMCcGA1UEAwwgSW50ZXJuZXQg"
    "V2lkZ2l0cyBJbnRlcm1lZGlhdGUgQ0EwHhcNMTUwMTI5MDAzMzU1WhcNMTYwMTI5"
    "MDAzMzU1WjByMQswCQYDVQQGEwJVUzETMBEGA1UECAwKV2FzaGluZ3RvbjETMBEG"
    "A1UEBwwKTm9ydGggQmVuZDEhMB8GA1UECgwYSW50ZXJuZXQgV2lkZ2l0cyBQdHkg"
    "THRkMRYwFAYDVQQDDA1hLmV4YW1wbGUuY29tMIIBIjANBgkqhkiG9w0BAQEFAAOC"
    "AQ8AMIIBCgKCAQEAs0hj2xPRQZpecqk0Ih1l4juAuQZeSgv3yD/VtSq/9sTBH6iA"
    "4XjJQcHROYxYaK0QS/qlCjpl+Q3mOaVIu+59TLy3T2YVgqMYmgB453ntuJPkdF1C"
    "fJ2j19YAQZHHdOFaP1G+auBwjmHns3+MkG4s7EPuJP7TBCcSFlOmz5D4GUui3NVG"
    "LBYUog1ZhF4oe/7d4jc2Cn8uypNT/Hc1ViIlCT4rFoAirv9Uob+4zjQ3Z18I1Ql1"
    "t8oszVCj3kKDboEty2RduwPLx/2ztWYBCvFhd49JGdi/nzMi+j2d5HCI3V8W06pN"
    "mvrVU4G0ImVRa8wpmQCSm2Tp0s42FAVHWw8yMwIDAQABoxwwGjAYBgNVHREEETAP"
    "gg1iLmV4YW1wbGUuY29tMA0GCSqGSIb3DQEBBQUAA4IBAQDI/n0NYakuRP/485/A"
    "dan71qBy3sljjOreq71IfBdtq+GEjCL1B0TD0V338LXki9NicCLeD/MWfceDjV0u"
    "AjPTxaZEn/NWqXo0mpNC535Y6G46mIHYDGC8JyvCJjaXF+GVstNt6lXzZp2Yn3Si"
    "K57uVb+zz5zAGSO982I2HACZPnF/oAtp7bwxzwvBsLqSLw3hh0ATVPp6ktE+WMoI"
    "X75CVcDmU0zjXqzKiFPKeTVjQG6YxgvplMaag/iNngkgEhX4PIrxdIEsHf8l9ogC"
    "dz51MFxetsC4D2KRq8IblF9i+9r3hlv+Dbf9ovYe9Hu0usloSinImoWOw42iWWmP"
    "vT4l",
    "C=US, ST=Washington, L=North Bend, O=Internet Widgits Pty Ltd, "
    "CN=a.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.10 2.5.4.3",
    "CN=Internet Widgits Intermediate CA",
    "2.5.4.3",
    "2015-01-29T00:33:55.000000Z",
    "2016-01-29T00:33:55.000000Z",
    "b.example.com",
    "47fa5c76fee6e21e37def6da3746bba84a5a09bf"
  },




  { "MIICsDCCAhmgAwIBAgIJAO9sL1fZ/VoPMA0GCSqGSIb3DQEBBQUAMHExbzAJBgNV"
    "BAYTAlVTMA8GA1UECgwIQ2hyb21pdW0wFgYKCZImiZPyLGQBGRYIQ2hyb21pdW0w"
    "GgYDVQQDDBNNdWx0aXZhbHVlIFJETiBUZXN0MB0GA1UECwwWQ2hyb21pdW0gbmV0"
    "X3VuaXR0ZXN0czAeFw0xMTEyMDIwMzQ3MzlaFw0xMjAxMDEwMzQ3MzlaMHExbzAJ"
    "BgNVBAYTAlVTMA8GA1UECgwIQ2hyb21pdW0wFgYKCZImiZPyLGQBGRYIQ2hyb21p"
    "dW0wGgYDVQQDDBNNdWx0aXZhbHVlIFJETiBUZXN0MB0GA1UECwwWQ2hyb21pdW0g"
    "bmV0X3VuaXR0ZXN0czCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEAnSMQ7YeC"
    "sOuk+0n128F7TfDtG/X48sG10oTe65SC8N6LBLfo7YYiQZlWVHEzjsFpaiv0dx4k"
    "cIFbVghXAky/r5qgM1XiAGuzzFw7R27cBTC9DPlRwHArP3CiEKO3iz8i+qu9x0il"
    "/9N70LcSSAu/kGLxikDbHRoM9d2SKhy2LGsCAwEAAaNQME4wHQYDVR0OBBYEFI1e"
    "cfoqc7qfjmMyHF2rh9CrR6u3MB8GA1UdIwQYMBaAFI1ecfoqc7qfjmMyHF2rh9Cr"
    "R6u3MAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQEFBQADgYEAGKwN01A47nxVHOkw"
    "wFdbT8t9FFkY3pIg5meoqO3aATNaSEzkZoUljWtWgWfzr+n4ElwZBxeYv9cPurVk"
    "a+wXygzWzsOzCUMKBI/aS8ijRervyvh6LpGojPGn1HttnXNLmhy+BLECs7cq6f0Z"
    "hvImrEWhD5uZGlOxaZk+bFEjQHA=",
    "C=US, O=Chromium, 0.9.2342.19200300.100.1.25=Chromium, "
    "CN=Multivalue RDN Test, OU=Chromium net_unittests",
    "2.5.4.6 2.5.4.10 0.9.2342.19200300.100.1.25 2.5.4.3 2.5.4.11",
    "C=US, O=Chromium, 0.9.2342.19200300.100.1.25=Chromium, "
    "CN=Multivalue RDN Test, OU=Chromium net_unittests",
    "2.5.4.6 2.5.4.10 0.9.2342.19200300.100.1.25 2.5.4.3 2.5.4.11",
    "2011-12-02T03:47:39.000000Z",
    "2012-01-01T03:47:39.000000Z",
    ((void*)0),
    "99302ca2824f585a117bb41302a388daa0519765"
  },






  { "MIIDDjCCAfYCAQEwDQYJKoZIhvcNAQEFBQAwRTELMAkGA1UEBhMCQVUxEzARBgNV"
    "BAgTClNvbWUtU3RhdGUxITAfBgNVBAoTGEludGVybmV0IFdpZGdpdHMgUHR5IEx0"
    "ZDAeFw0xNTAxMjcwNzQ5MDhaFw0xNjAxMjcwNzQ5MDhaMFUxCzAJBgNVBAYTAlVT"
    "MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRMwEQYDVQQHEwpOb3J0aCBCZW5kMRwwGgYE"
    "VQSAAxMSbm90YWNuLmV4YW1wbGUuY29tMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8A"
    "MIIBCgKCAQEAvXCJv0gr9d3GNYiukPrbse0FdXmuBx2mPf665WyZVHk9JiPnDcb2"
    "ng8gHLgJe8izou6I0vN2iJgy91rUPvX9zA3qVhml+cboVY2jHCPWo/v5PQsXAgLV"
    "5gVjp2POn3N0O1xcS1yNe249LkP0Di3kAMp5gkzdprm3fD3JDW1Q+ocQylnbjzG0"
    "FtNQSUJLITvPXjR7ny46Fci2mv8scHOvlEXTK5/2RoBaoK2jWQimqGfFj1sr1vqZ"
    "Wcb6NAdZso64Xg1V6CWX8zymlA7gAhTQWveq+ovUWcXpmR8aj9pYNuy0aZW3BANz"
    "N6L0G7OZiVUvvzpfnn0V3Z/sR/iQs7q3nQIDAQABMA0GCSqGSIb3DQEBBQUAA4IB"
    "AQACZwruCiesCRkT08AtHl0WQnQui58e9/7En+iqxNQO6+fx84SfWGcUFYZtvzdO"
    "KkHNTs06km+471OjLSDcotRkdqO1JxQCkNxbrPat7T6FrO9n2JFivx6eijRqK/jB"
    "cBYW92dK4BfXU4+FyeB2OIpyPjuqLU2j7S5p7qNU50i/1J7Qt669nXeaPINIfZdW"
    "sDjjWkFR1VOgXS/zeu/GOxlQFmmcde+X/qkFI+L352VX7Ktf95j4ms4vG2yZgNfe"
    "jbNb9a7LMcqlop/PlX5WBGv8GGKUNZO0LvukFYOULf1oL8VQsN0x/gRHGC7m9kVM"
    "3hojWZDXAY4mYqdBCRX7/gkt",
    "C=US, ST=Washington, L=North Bend, 2.5.4.03=notacn.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.03",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2015-01-27T07:49:08.000000Z",
    "2016-01-27T07:49:08.000000Z",
    ((void*)0),
    "6f24b834ba00fb4ef863df63b8fbeddab25e4838"
  },





  { "MIIDGTCCAgECAQEwDQYJKoZIhvcNAQEFBQAwRTELMAkGA1UEBhMCQVUxEzARBgNV"
    "BAgTClNvbWUtU3RhdGUxITAfBgNVBAoTGEludGVybmV0IFdpZGdpdHMgUHR5IEx0"
    "ZDAeFw0xNTAxMjcwODMxNDNaFw0xNjAxMjcwODMxNDNaMGAxCzAJBgNVBAYTAlVT"
    "MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRMwEQYDVQQHEwpOb3J0aCBCZW5kMScwJQYN"
    "VQSCgICAgICAgICAAxMUb3ZlcmZsb3cuZXhhbXBsZS5jb20wggEiMA0GCSqGSIb3"
    "DQEBAQUAA4IBDwAwggEKAoIBAQDHL1e8zSPyRND3tI42Vqca2FoCiWn881Czv2ct"
    "tGFwyjUM8R1yHXEP+doS9KN9L29xRWZRxyCQ18S+QbjNQCh6Ay22qnkBu0uPdVB6"
    "iIVKiW9RzU8dZSFMnveUZYLloG12kK++ooJGIstTJwkI8Naw1X1D29gZaY9oSKAc"
    "Gs5c92po61RoetB744dUfUbAXi8eEd4ShdsdnCoswpEI4WTLdYLZ/cH/sU1a5Djm"
    "cAfEBzZSOseEQSG7Fa/HvHyW+jDNnKG2r73M45TDcXAunSFcAYl1ioBaRwwdcTbK"
    "SMGORThIX5UwpJDZI5sTVmTTRuCjbMxXXki/g9fTYD6mlaavAgMBAAEwDQYJKoZI"
    "hvcNAQEFBQADggEBABvZSzFniMK4lqJcubzzk410NqZQEDBxdNZTNGrQYIDV8fDU"
    "LLoQ2/2Y6kOQbx8r3RNcaJ6JtJeVqAq05It9oR5lMJFA2r0YMl4eB2V6o35+eaKY"
    "FXrJzwx0rki2mX+iKsgRbJTv6mFb4I7vny404WKHNgYIfB8Z5jgbwWgrXH9M6BMb"
    "FL9gZHMmU+6uqvCPYeIIZaAjT4J4E9322gpcumI9KGVApmbQhi5lC1hBh+eUprG7"
    "4Brl9GeCLSTnTTf4GHIpqaUsKMtJ1sN/KJGwEB7Z4aszr80P5/sjHXOyqJ78tx46"
    "pwH7/Fx0pM7nZjJVGvcxGBBOMeKy/o2QUVvEYPU=",
    "C=US, ST=Washington, L=North Bend, \?\?=overflow.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 \?\?",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2015-01-27T08:31:43.000000Z",
    "2016-01-27T08:31:43.000000Z",
    ((void*)0),
    "c1f063daf23e402fe58bab1a3fa2ba05c1106158"
  },


  { "MIIDJjCCAg4CAQEwDQYJKoZIhvcNAQEFBQAwRTELMAkGA1UEBhMCQVUxEzARBgNV"
    "BAgTClNvbWUtU3RhdGUxITAfBgNVBAoTGEludGVybmV0IFdpZGdpdHMgUHR5IEx0"
    "ZDAeFw0xNTAxMjExNzUwMDZaFw0xNjAxMjExNzUwMDZaMG0xCzAJBgNVBAYTAlVT"
    "MRMwEQYDVQQIEwpXYXNoaW5ndG9uMRMwEQYDVQQHEwpOb3J0aCBCZW5kMRkwFwYD"
    "VQQDExBnb29kLmV4YW1wbGUuY29tMRkwFwYDVQQDExBldmlsLmV4YW1wbGUuY29t"
    "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA5pfrXkiiDGCWSYhMQNHJ"
    "gNBLEBNcFzsGpW8i6rMKVephwG7p4VqIvc0pSsmpD9IYuIxxq/2E2cziaTWyqCBp"
    "hKKipqt8eMcu6u45LduHGiCcnN7rHORbQZTdvwzTmiVN1eI1oCVejB4zgHNkHUko"
    "DyaALCHGRz8l7Qq6hSbiOnhH1qlscIIEsgQEyDlMZpbsWVTQKPxluhtgqVEn7wPN"
    "qScrf2evq050NuNYYFzCmuqOGKq2gKbD/BlUqCNmEM2JPg/bdcAQxFCf0HcvDiS9"
    "e29suMKWZAzJkbzrWhlDMG1Xt5c7dd82PcGwnL//Q7muE57luCw38Gp2vQQ3/Uki"
    "vQIDAQABMA0GCSqGSIb3DQEBBQUAA4IBAQBry9wfxYia/dCSKvDXOBKUgWFQtI8j"
    "7vYHuouTvIb5m6b62kiUdtuaVKi3jnUbHUFohOi/6o+HIwbXSgz5CbiLjgUvONBU"
    "BLekaguIYX9tTmg+vhWchcmVMHufj6HdQkzWtyojSQD9GjHGInNDG102KlN1cdL8"
    "jGTrru4vnef+xA24EvYPdcS2+H2yYH0THL3JPKo1GtO4NCEGWQbS6Ygwcy+BQpbU"
    "TBIWhlbleuCalB8qhWyijcHeszT7mFR0CarEaSLeZj6FaQpZB636iHuELmxcgiFw"
    "j3r3QZyAMEGvPPBPKYSTgmol31pX9LYvuFGA9ADQ2in/n9WdMfYzFzOn",
    "C=US, ST=Washington, L=North Bend, "
    "CN=good.example.com, CN=evil.example.com",
    "2.5.4.6 2.5.4.8 2.5.4.7 2.5.4.3 2.5.4.3",
    "C=AU, ST=Some-State, O=Internet Widgits Pty Ltd",
    "2.5.4.6 2.5.4.8 2.5.4.10",
    "2015-01-21T17:50:06.000000Z",
    "2016-01-21T17:50:06.000000Z",
    "good.example.com",
    "9693f17e59205f41ca2e14450d151b945651b2d7"
  },
  { ((void*)0) }
};

static svn_error_t *
compare_dates(const char *expected,
              apr_time_t actual,
              const char *type,
              const char *subject,
              apr_pool_t *pool)
{
  apr_time_t expected_tm;

  if (!actual)
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "No %s for cert '%s'", type, subject);

  do { svn_error_t *svn_err__temp = (svn_time_from_cstring(&expected_tm, expected, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  if (!expected_tm)
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "Problem converting expected %s '%s' to text "
                             "output for cert '%s'", type, expected,
                             subject);

  if (expected_tm != actual)
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "The %s didn't match expected '%s',"
                             " got '%s' for cert '%s'",
                             type, expected,
                             svn_time_to_cstring(actual, pool),
                             subject);

  return 0;
}

static svn_error_t *
compare_hostnames(const char *expected,
                  const apr_array_header_t *actual,
                  const char *subject,
                  apr_pool_t *pool)
{

  int i;
  svn_stringbuf_t *buf;

  if (!actual)
    {
      if (expected)
        return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                                 "The hostnames didn't match expected '%s',"
                                 " got NULL for cert '%s'",
                                 expected, subject);
      return 0;
    }

  buf = svn_stringbuf_create_empty(pool);
  for (i = 0; i < actual->nelts; ++i)
    {
      const char *hostname = (((const char* *)(actual)->elts)[i]);
      if (i > 0)
        svn_stringbuf_appendbytes(buf, ", ", 2);
      svn_stringbuf_appendbytes(buf, hostname, strlen(hostname));
    }

  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (expected) && __builtin_constant_p (buf->data) && (__s1_len = __builtin_strlen (expected), __s2_len = __builtin_strlen (buf->data), (!((size_t)(const void *)((expected) + 1) - (size_t)(const void *)(expected) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((buf->data) + 1) - (size_t)(const void *)(buf->data) == 1) || __s2_len >= 4)) ? __builtin_strcmp (expected, buf->data) : (__builtin_constant_p (expected) && ((size_t)(const void *)((expected) + 1) - (size_t)(const void *)(expected) == 1) && (__s1_len = __builtin_strlen (expected), __s1_len < 4) ? (__builtin_constant_p (buf->data) && ((size_t)(const void *)((buf->data) + 1) - (size_t)(const void *)(buf->data) == 1) ? __builtin_strcmp (expected, buf->data) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (buf->data); int __result = (((const unsigned char *) (const char *) (expected))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (expected))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (expected))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (expected))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (buf->data) && ((size_t)(const void *)((buf->data) + 1) - (size_t)(const void *)(buf->data) == 1) && (__s2_len = __builtin_strlen (buf->data), __s2_len < 4) ? (__builtin_constant_p (expected) && ((size_t)(const void *)((expected) + 1) - (size_t)(const void *)(expected) == 1) ? __builtin_strcmp (expected, buf->data) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (expected); int __result = (((const unsigned char *) (const char *) (buf->data))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (buf->data))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (buf->data))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (buf->data))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (expected, buf->data)))); }))
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "The hostnames didn't match expected '%s',"
                             " got '%s' for cert '%s'",
                             expected, buf->data, subject);
  return 0;
}

static svn_error_t *
compare_oids(const char *expected,
             const apr_array_header_t *actual,
             const char *subject,
             apr_pool_t *pool)
{
  int i;
  svn_stringbuf_t *buf;

  if (!actual)
    {
      if (expected)
        return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                                 "The oids didn't match expected '%s',"
                                 " got NULL for cert '%s'",
                                 expected, subject);
      return 0;
    }

  buf = svn_stringbuf_create_empty(pool);
  for (i = 0; i < actual->nelts; ++i)
    {
      apr_size_t len;
      const svn_x509_name_attr_t *attr = (((const svn_x509_name_attr_t * *)(actual)->elts)[i]);
      const void *oid = svn_x509_name_attr_get_oid(attr, &len);
      const char *oid_string = svn_x509_oid_to_string(oid, len, pool, pool);
      if (i > 0)
        svn_stringbuf_appendbyte(buf, ' ');
      if (oid_string)
        svn_stringbuf_appendcstr(buf, oid_string);
      else
        svn_stringbuf_appendcstr(buf, "??");
    }

  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (expected) && __builtin_constant_p (buf->data) && (__s1_len = __builtin_strlen (expected), __s2_len = __builtin_strlen (buf->data), (!((size_t)(const void *)((expected) + 1) - (size_t)(const void *)(expected) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((buf->data) + 1) - (size_t)(const void *)(buf->data) == 1) || __s2_len >= 4)) ? __builtin_strcmp (expected, buf->data) : (__builtin_constant_p (expected) && ((size_t)(const void *)((expected) + 1) - (size_t)(const void *)(expected) == 1) && (__s1_len = __builtin_strlen (expected), __s1_len < 4) ? (__builtin_constant_p (buf->data) && ((size_t)(const void *)((buf->data) + 1) - (size_t)(const void *)(buf->data) == 1) ? __builtin_strcmp (expected, buf->data) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (buf->data); int __result = (((const unsigned char *) (const char *) (expected))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (expected))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (expected))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (expected))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (buf->data) && ((size_t)(const void *)((buf->data) + 1) - (size_t)(const void *)(buf->data) == 1) && (__s2_len = __builtin_strlen (buf->data), __s2_len < 4) ? (__builtin_constant_p (expected) && ((size_t)(const void *)((expected) + 1) - (size_t)(const void *)(expected) == 1) ? __builtin_strcmp (expected, buf->data) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (expected); int __result = (((const unsigned char *) (const char *) (buf->data))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (buf->data))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (buf->data))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (buf->data))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (expected, buf->data)))); }))
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "The oids didn't match expected '%s',"
                             " got '%s' for cert '%s'",
                             expected, buf->data, subject);
  return 0;

}


static svn_error_t *
compare_results(struct x509_test *xt,
                svn_x509_certinfo_t *certinfo,
                apr_pool_t *pool)
{
  const char *v;

  v = svn_x509_certinfo_get_subject(certinfo, pool);
  if (!v)
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "No subject for cert '%s'", xt->subject);
  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (v) && __builtin_constant_p (xt->subject) && (__s1_len = __builtin_strlen (v), __s2_len = __builtin_strlen (xt->subject), (!((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((xt->subject) + 1) - (size_t)(const void *)(xt->subject) == 1) || __s2_len >= 4)) ? __builtin_strcmp (v, xt->subject) : (__builtin_constant_p (v) && ((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) && (__s1_len = __builtin_strlen (v), __s1_len < 4) ? (__builtin_constant_p (xt->subject) && ((size_t)(const void *)((xt->subject) + 1) - (size_t)(const void *)(xt->subject) == 1) ? __builtin_strcmp (v, xt->subject) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (xt->subject); int __result = (((const unsigned char *) (const char *) (v))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (v))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (v))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (v))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (xt->subject) && ((size_t)(const void *)((xt->subject) + 1) - (size_t)(const void *)(xt->subject) == 1) && (__s2_len = __builtin_strlen (xt->subject), __s2_len < 4) ? (__builtin_constant_p (v) && ((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) ? __builtin_strcmp (v, xt->subject) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (v); int __result = (((const unsigned char *) (const char *) (xt->subject))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (xt->subject))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (xt->subject))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (xt->subject))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (v, xt->subject)))); }))
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "Subject didn't match for cert '%s', "
                             "expected '%s', got '%s'", xt->subject,
                             xt->subject, v);

  do { svn_error_t *svn_err__temp = (compare_oids(xt->subject_oids, svn_x509_certinfo_get_subject_attrs(certinfo), xt->subject, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  v = svn_x509_certinfo_get_issuer(certinfo, pool);
  if (!v)
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "No issuer for cert '%s'", xt->subject);
  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (v) && __builtin_constant_p (xt->issuer) && (__s1_len = __builtin_strlen (v), __s2_len = __builtin_strlen (xt->issuer), (!((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((xt->issuer) + 1) - (size_t)(const void *)(xt->issuer) == 1) || __s2_len >= 4)) ? __builtin_strcmp (v, xt->issuer) : (__builtin_constant_p (v) && ((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) && (__s1_len = __builtin_strlen (v), __s1_len < 4) ? (__builtin_constant_p (xt->issuer) && ((size_t)(const void *)((xt->issuer) + 1) - (size_t)(const void *)(xt->issuer) == 1) ? __builtin_strcmp (v, xt->issuer) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (xt->issuer); int __result = (((const unsigned char *) (const char *) (v))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (v))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (v))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (v))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (xt->issuer) && ((size_t)(const void *)((xt->issuer) + 1) - (size_t)(const void *)(xt->issuer) == 1) && (__s2_len = __builtin_strlen (xt->issuer), __s2_len < 4) ? (__builtin_constant_p (v) && ((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) ? __builtin_strcmp (v, xt->issuer) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (v); int __result = (((const unsigned char *) (const char *) (xt->issuer))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (xt->issuer))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (xt->issuer))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (xt->issuer))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (v, xt->issuer)))); }))
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "Issuer didn't match for cert '%s', "
                             "expected '%s', got '%s'", xt->subject,
                             xt->issuer, v);

  do { svn_error_t *svn_err__temp = (compare_oids(xt->issuer_oids, svn_x509_certinfo_get_issuer_attrs(certinfo), xt->subject, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (compare_dates(xt->valid_from, svn_x509_certinfo_get_valid_from(certinfo), "valid-from", xt->subject, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  do { svn_error_t *svn_err__temp = (compare_dates(xt->valid_to, svn_x509_certinfo_get_valid_to(certinfo), "valid-to", xt->subject, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  do { svn_error_t *svn_err__temp = (compare_hostnames(xt->hostnames, svn_x509_certinfo_get_hostnames(certinfo), xt->subject, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  v = svn_checksum_to_cstring_display(
      svn_x509_certinfo_get_digest(certinfo), pool);
  if (!v)
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "No SHA1 digest for cert '%s'", xt->subject);
  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (v) && __builtin_constant_p (xt->sha1_digest) && (__s1_len = __builtin_strlen (v), __s2_len = __builtin_strlen (xt->sha1_digest), (!((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((xt->sha1_digest) + 1) - (size_t)(const void *)(xt->sha1_digest) == 1) || __s2_len >= 4)) ? __builtin_strcmp (v, xt->sha1_digest) : (__builtin_constant_p (v) && ((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) && (__s1_len = __builtin_strlen (v), __s1_len < 4) ? (__builtin_constant_p (xt->sha1_digest) && ((size_t)(const void *)((xt->sha1_digest) + 1) - (size_t)(const void *)(xt->sha1_digest) == 1) ? __builtin_strcmp (v, xt->sha1_digest) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (xt->sha1_digest); int __result = (((const unsigned char *) (const char *) (v))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (v))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (v))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (v))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (xt->sha1_digest) && ((size_t)(const void *)((xt->sha1_digest) + 1) - (size_t)(const void *)(xt->sha1_digest) == 1) && (__s2_len = __builtin_strlen (xt->sha1_digest), __s2_len < 4) ? (__builtin_constant_p (v) && ((size_t)(const void *)((v) + 1) - (size_t)(const void *)(v) == 1) ? __builtin_strcmp (v, xt->sha1_digest) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (v); int __result = (((const unsigned char *) (const char *) (xt->sha1_digest))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (xt->sha1_digest))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (xt->sha1_digest))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (xt->sha1_digest))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (v, xt->sha1_digest)))); }))
    return svn_error_createf(SVN_ERR_TEST_FAILED, ((void*)0),
                             "SHA1 digest didn't match for cert '%s', "
                             "expected '%s', got '%s'", xt->subject,
                             xt->sha1_digest, v);

  return 0;
}

static svn_error_t *
test_x509_parse_cert(apr_pool_t *pool)
{
  struct x509_test *xt;
  apr_pool_t *iterpool = svn_pool_create_ex(pool, ((void*)0));

  for (xt = cert_tests; xt->base64_cert; xt++)
    {
      const svn_string_t *der_cert;
      svn_x509_certinfo_t *certinfo;

      apr_pool_clear(iterpool);


      der_cert = svn_base64_decode_string(svn_string_create(xt->base64_cert,
                                                            pool),
                                          iterpool);

      do { svn_error_t *svn_err__temp = (svn_x509_parse_cert(&certinfo, der_cert->data, der_cert->len, iterpool, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);


      do { svn_error_t *svn_err__temp = (compare_results(xt, certinfo, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }

  return 0;
}
# 836 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/tests/libsvn_subr/x509-test.c"
static int max_threads = 1;

static struct svn_test_descriptor_t test_funcs[] =
  {
    {0},
    {svn_test_pass, test_x509_parse_cert, ((void*)0), "test svn_x509_parse_cert"},



    {0}
  };

int main(int argc, const char *argv[]) { return svn_test_main(argc, argv, max_threads, test_funcs); }
