# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 311 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
# 1 "/usr/include/assert.h" 1 3 4
# 35 "/usr/include/assert.h" 3 4
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
# 36 "/usr/include/assert.h" 2 3 4
# 69 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 32 "/usr/include/string.h" 3 4
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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2

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
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h" 1
# 27 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h"
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
# 28 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_io.h" 2

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
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_file_info.h" 2
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
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
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
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2

# 1 "./subversion/include/svn_pools.h" 1
# 33 "./subversion/include/svn_pools.h"
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
# 40 "./subversion/include/svn_types.h" 2
# 87 "./subversion/include/svn_types.h"
typedef int svn_boolean_t;
# 106 "./subversion/include/svn_types.h"
typedef struct svn_error_t
{



  apr_status_t apr_err;
# 124 "./subversion/include/svn_types.h"
  const char *message;





  struct svn_error_t *child;





  apr_pool_t *pool;




  const char *file;




  long line;

} svn_error_t;





typedef struct svn_version_t svn_version_t;
# 187 "./subversion/include/svn_types.h"
const void *
svn__apr_hash_index_key(const apr_hash_index_t *hi);


apr_ssize_t
svn__apr_hash_index_klen(const apr_hash_index_t *hi);


void *
svn__apr_hash_index_val(const apr_hash_index_t *hi);
# 223 "./subversion/include/svn_types.h"
typedef enum svn_kind_t
{

  svn_kind_unknown,


  svn_kind_none,


  svn_kind_file,


  svn_kind_dir,


  svn_kind_symlink

} svn_kind_t;





typedef enum svn_node_kind_t
{

  svn_node_none,


  svn_node_file,


  svn_node_dir,


  svn_node_unknown
} svn_node_kind_t;
# 268 "./subversion/include/svn_types.h"
const char *
svn_node_kind_to_word(svn_node_kind_t kind);







svn_node_kind_t
svn_node_kind_from_word(const char *word);






svn_node_kind_t
svn__node_kind_from_kind(svn_kind_t kind);






svn_kind_t
svn__kind_from_node_kind(svn_node_kind_t kind,
                         svn_boolean_t is_symlink);
# 307 "./subversion/include/svn_types.h"
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
# 373 "./subversion/include/svn_types.h"
typedef long int svn_revnum_t;
# 401 "./subversion/include/svn_types.h"
svn_error_t *
svn_revnum_parse(svn_revnum_t *rev,
                 const char *str,
                 const char **endptr);
# 420 "./subversion/include/svn_types.h"
typedef apr_int64_t svn_filesize_t;
# 438 "./subversion/include/svn_types.h"
enum svn_recurse_kind
{
  svn_nonrecursive = 1,
  svn_recursive
};
# 451 "./subversion/include/svn_types.h"
typedef enum svn_depth_t
{







  svn_depth_unknown = -2,
# 471 "./subversion/include/svn_types.h"
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
# 597 "./subversion/include/svn_types.h"
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
# 723 "./subversion/include/svn_types.h"
typedef struct svn_commit_info_t
{

  svn_revnum_t revision;


  const char *date;


  const char *author;


  const char *post_commit_err;



  const char *repos_root;

} svn_commit_info_t;
# 757 "./subversion/include/svn_types.h"
svn_commit_info_t *
svn_create_commit_info(apr_pool_t *pool);






svn_commit_info_t *
svn_commit_info_dup(const svn_commit_info_t *src_commit_info,
                    apr_pool_t *pool);
# 780 "./subversion/include/svn_types.h"
typedef struct svn_log_changed_path2_t
{

  char action;


  const char *copyfrom_path;


  svn_revnum_t copyfrom_rev;


  svn_node_kind_t node_kind;



  svn_tristate_t text_modified;



  svn_tristate_t props_modified;




} svn_log_changed_path2_t;
# 817 "./subversion/include/svn_types.h"
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
# 867 "./subversion/include/svn_types.h"
typedef struct svn_log_entry_t
{
# 877 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths;


  svn_revnum_t revision;




  apr_hash_t *revprops;
# 903 "./subversion/include/svn_types.h"
  svn_boolean_t has_children;
# 920 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths2;
# 932 "./subversion/include/svn_types.h"
  svn_boolean_t non_inheritable;






  svn_boolean_t subtractive_merge;




} svn_log_entry_t;
# 955 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_create(apr_pool_t *pool);
# 966 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_dup(const svn_log_entry_t *log_entry, apr_pool_t *pool);
# 1001 "./subversion/include/svn_types.h"
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
# 1031 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_commit_callback2_t)(
  const svn_commit_info_t *commit_info,
  void *baton,
  apr_pool_t *pool);






typedef svn_error_t *(*svn_commit_callback_t)(
  svn_revnum_t new_revision,
  const char *date,
  const char *author,
  void *baton);
# 1096 "./subversion/include/svn_types.h"
svn_error_t *
svn_mime_type_validate(const char *mime_type,
                       apr_pool_t *pool);






svn_boolean_t
svn_mime_type_is_binary(const char *mime_type);
# 1115 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_cancel_func_t)(void *cancel_baton);
# 1138 "./subversion/include/svn_types.h"
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
# 1159 "./subversion/include/svn_types.h"
svn_lock_t *
svn_lock_create(apr_pool_t *pool);






svn_lock_t *
svn_lock_dup(const svn_lock_t *lock, apr_pool_t *pool);
# 1177 "./subversion/include/svn_types.h"
const char *
svn_uuid_generate(apr_pool_t *pool);
# 1187 "./subversion/include/svn_types.h"
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
# 1234 "./subversion/include/svn_types.h"
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
# 1275 "./subversion/include/svn_types.h"
typedef unsigned long svn_linenum_t;
# 1301 "./subversion/include/svn_types.h"
# 1 "./subversion/include/svn_error.h" 1
# 37 "./subversion/include/svn_error.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 38 "./subversion/include/svn_error.h" 2

# 1 "./subversion/include/svn_types.h" 1
# 40 "./subversion/include/svn_error.h" 2
# 58 "./subversion/include/svn_error.h"
# 1 "./subversion/include/svn_error_codes.h" 1
# 154 "./subversion/include/svn_error_codes.h"
typedef enum svn_errno_t { SVN_WARNING = ((20000 + 50000) + 50000) + 1,



  SVN_ERR_BAD_CONTAINING_POOL = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 0,



  SVN_ERR_BAD_FILENAME = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 1,



  SVN_ERR_BAD_URL = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 2,



  SVN_ERR_BAD_DATE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 3,



  SVN_ERR_BAD_MIME_TYPE = (((20000 + 50000) + 50000) + ( 1 * 5000)) + 4,
# 184 "./subversion/include/svn_error_codes.h"
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





  SVN_ERR_XML_ATTRIB_NOT_FOUND = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 0,



  SVN_ERR_XML_MISSING_ANCESTRY = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 1,



  SVN_ERR_XML_UNKNOWN_ENCODING = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 2,



  SVN_ERR_XML_MALFORMED = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 3,



  SVN_ERR_XML_UNESCAPABLE_DATA = (((20000 + 50000) + 50000) + ( 2 * 5000)) + 4,





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
# 745 "./subversion/include/svn_error_codes.h"
  SVN_ERR_FS_UNSUPPORTED_FORMAT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 43,




  SVN_ERR_FS_REP_BEING_WRITTEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 44,




  SVN_ERR_FS_TXN_NAME_TOO_LONG = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 45,




  SVN_ERR_FS_NO_SUCH_NODE_ORIGIN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 46,




  SVN_ERR_FS_UNSUPPORTED_UPGRADE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 47,




  SVN_ERR_FS_NO_SUCH_CHECKSUM_REP = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 48,




  SVN_ERR_FS_PROP_BASEVALUE_MISMATCH = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 49,





  SVN_ERR_FS_INCORRECT_EDITOR_COMPLETION = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 50,




  SVN_ERR_FS_PACKED_REPPROP_READ_FAILURE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 51,




  SVN_ERR_FS_REPPROP_CACHE_INIT_FAILURE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 52,





  SVN_ERR_REPOS_LOCKED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 0,



  SVN_ERR_REPOS_HOOK_FAILURE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 1,



  SVN_ERR_REPOS_BAD_ARGS = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 2,



  SVN_ERR_REPOS_NO_DATA_FOR_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 3,



  SVN_ERR_REPOS_BAD_REVISION_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 4,
# 822 "./subversion/include/svn_error_codes.h"
  SVN_ERR_REPOS_UNSUPPORTED_VERSION = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 5,



  SVN_ERR_REPOS_DISABLED_FEATURE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 6,



  SVN_ERR_REPOS_POST_COMMIT_HOOK_FAILED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 7,




  SVN_ERR_REPOS_POST_LOCK_HOOK_FAILED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 8,




  SVN_ERR_REPOS_POST_UNLOCK_HOOK_FAILED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 9,




  SVN_ERR_REPOS_UNSUPPORTED_UPGRADE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 10,





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





  SVN_ERR_RA_LOCAL_REPOS_NOT_FOUND = (((20000 + 50000) + 50000) + (12 * 5000)) + 0,



  SVN_ERR_RA_LOCAL_REPOS_OPEN_FAILED = (((20000 + 50000) + 50000) + (12 * 5000)) + 1,




  SVN_ERR_RA_SVN_CMD_ERR = (((20000 + 50000) + 50000) + (18 * 5000)) + 0,



  SVN_ERR_RA_SVN_UNKNOWN_CMD = (((20000 + 50000) + 50000) + (18 * 5000)) + 1,



  SVN_ERR_RA_SVN_CONNECTION_CLOSED = (((20000 + 50000) + 50000) + (18 * 5000)) + 2,



  SVN_ERR_RA_SVN_IO_ERROR = (((20000 + 50000) + 50000) + (18 * 5000)) + 3,



  SVN_ERR_RA_SVN_MALFORMED_DATA = (((20000 + 50000) + 50000) + (18 * 5000)) + 4,



  SVN_ERR_RA_SVN_REPOS_NOT_FOUND = (((20000 + 50000) + 50000) + (18 * 5000)) + 5,



  SVN_ERR_RA_SVN_BAD_VERSION = (((20000 + 50000) + 50000) + (18 * 5000)) + 6,




  SVN_ERR_RA_SVN_NO_MECHANISMS = (((20000 + 50000) + 50000) + (18 * 5000)) + 7,




  SVN_ERR_RA_SVN_EDIT_ABORTED = (((20000 + 50000) + 50000) + (18 * 5000)) + 8,





  SVN_ERR_RA_SERF_SSPI_INITIALISATION_FAILED = (((20000 + 50000) + 50000) + (22 * 5000)) + 0,



  SVN_ERR_RA_SERF_SSL_CERT_UNTRUSTED = (((20000 + 50000) + 50000) + (22 * 5000)) + 1,



  SVN_ERR_RA_SERF_GSSAPI_INITIALISATION_FAILED = (((20000 + 50000) + 50000) + (22 * 5000)) + 2,




  SVN_ERR_RA_SERF_WRAPPED_ERROR = (((20000 + 50000) + 50000) + (22 * 5000)) + 3,







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





  SVN_ERR_SVNDIFF_INVALID_HEADER = (((20000 + 50000) + 50000) + (13 * 5000)) + 0,



  SVN_ERR_SVNDIFF_CORRUPT_WINDOW = (((20000 + 50000) + 50000) + (13 * 5000)) + 1,



  SVN_ERR_SVNDIFF_BACKWARD_VIEW = (((20000 + 50000) + 50000) + (13 * 5000)) + 2,



  SVN_ERR_SVNDIFF_INVALID_OPS = (((20000 + 50000) + 50000) + (13 * 5000)) + 3,



  SVN_ERR_SVNDIFF_UNEXPECTED_END = (((20000 + 50000) + 50000) + (13 * 5000)) + 4,



  SVN_ERR_SVNDIFF_INVALID_COMPRESSED_DATA = (((20000 + 50000) + 50000) + (13 * 5000)) + 5,





  SVN_ERR_DIFF_DATASOURCE_MODIFIED = (((20000 + 50000) + 50000) + (21 * 5000)) + 0,





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





  SVN_ERR_ASSERTION_FAIL = (((20000 + 50000) + 50000) + (23 * 5000)) + 0,



  SVN_ERR_ASSERTION_ONLY_TRACING_LINKS = (((20000 + 50000) + 50000) + (23 * 5000)) + 1,



SVN_ERR_LAST } svn_errno_t;
# 59 "./subversion/include/svn_error.h" 2




char *
svn_strerror(apr_status_t statcode,
             char *buf,
             apr_size_t bufsize);
# 78 "./subversion/include/svn_error.h"
const char *svn_err_best_message(svn_error_t *err,
                                 char *buf,
                                 apr_size_t bufsize);
# 108 "./subversion/include/svn_error.h"
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
# 132 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_wrap_apr(apr_status_t status,
                   const char *fmt,
                   ...)
       __attribute__((format(printf, 2, 3)));





svn_error_t *
svn_error_quick_wrap(svn_error_t *child,
                     const char *new_msg);
# 157 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_compose_create(svn_error_t *err1,
                         svn_error_t *err2);
# 169 "./subversion/include/svn_error.h"
void
svn_error_compose(svn_error_t *chain,
                  svn_error_t *new_err);







svn_error_t *
svn_error_root_cause(svn_error_t *err);
# 190 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_find_cause(svn_error_t *err, apr_status_t apr_err);





svn_error_t *
svn_error_dup(svn_error_t *err);
# 209 "./subversion/include/svn_error.h"
void
svn_error_clear(svn_error_t *error);
# 243 "./subversion/include/svn_error.h"
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
# 268 "./subversion/include/svn_error.h"
void
svn_handle_warning2(FILE *stream,
                    svn_error_t *error,
                    const char *prefix);





__attribute__((deprecated))
void
svn_handle_warning(FILE *stream,
                   svn_error_t *error);
# 344 "./subversion/include/svn_error.h"
svn_error_t *svn_error_purge_tracing(svn_error_t *err);
# 555 "./subversion/include/svn_error.h"
svn_error_t *
svn_error__malfunction(svn_boolean_t can_return,
                       const char *file,
                       int line,
                       const char *expr);
# 582 "./subversion/include/svn_error.h"
typedef svn_error_t *(*svn_error_malfunction_handler_t)
  (svn_boolean_t can_return, const char *file, int line, const char *expr);
# 596 "./subversion/include/svn_error.h"
svn_error_malfunction_handler_t
svn_error_set_malfunction_handler(svn_error_malfunction_handler_t func);
# 607 "./subversion/include/svn_error.h"
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
# 1302 "./subversion/include/svn_types.h" 2
# 34 "./subversion/include/svn_pools.h" 2
# 54 "./subversion/include/svn_pools.h"
apr_pool_t *
svn_pool_create_ex(apr_pool_t *parent_pool,
                   apr_allocator_t *allocator);


apr_pool_t *
svn_pool_create_ex_debug(apr_pool_t *parent_pool,
                         apr_allocator_t *allocator,
                         const char *file_line);
# 104 "./subversion/include/svn_pools.h"
apr_allocator_t *
svn_pool_create_allocator(svn_boolean_t thread_safe);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2

# 1 "./subversion/include/svn_delta.h" 1
# 41 "./subversion/include/svn_delta.h"
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
# 202 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create(const char *cstring, apr_pool_t *pool);





svn_stringbuf_t *
svn_stringbuf_ncreate(const char *bytes, apr_size_t size, apr_pool_t *pool);





svn_stringbuf_t *
svn_stringbuf_create_empty(apr_pool_t *pool);
# 227 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create_ensure(apr_size_t minimum_size, apr_pool_t *pool);



svn_stringbuf_t *
svn_stringbuf_create_from_string(const svn_string_t *str, apr_pool_t *pool);




svn_stringbuf_t *
svn_stringbuf_createf(apr_pool_t *pool, const char *fmt, ...)
  __attribute__((format(printf, 2, 3)));





svn_stringbuf_t *
svn_stringbuf_createv(apr_pool_t *pool, const char *fmt, va_list ap)
  __attribute__((format(printf, 2, 0)));
# 261 "./subversion/include/svn_string.h"
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
# 294 "./subversion/include/svn_string.h"
void
svn_stringbuf_appendbyte(svn_stringbuf_t *targetstr,
                         char byte);





void
svn_stringbuf_appendbytes(svn_stringbuf_t *targetstr,
                          const char *bytes,
                          apr_size_t count);





void
svn_stringbuf_appendstr(svn_stringbuf_t *targetstr,
                        const svn_stringbuf_t *appendstr);





void
svn_stringbuf_appendcstr(svn_stringbuf_t *targetstr,
                         const char *cstr);
# 332 "./subversion/include/svn_string.h"
void
svn_stringbuf_insert(svn_stringbuf_t *str,
                     apr_size_t pos,
                     const char *bytes,
                     apr_size_t count);







void
svn_stringbuf_remove(svn_stringbuf_t *str,
                     apr_size_t pos,
                     apr_size_t count);







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
# 412 "./subversion/include/svn_string.h"
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
# 454 "./subversion/include/svn_string.h"
char *
svn_cstring_tokenize(const char *sep, char **str);







int
svn_cstring_count_newlines(const char *msg);
# 474 "./subversion/include/svn_string.h"
char *
svn_cstring_join(const apr_array_header_t *strings,
                 const char *separator,
                 apr_pool_t *pool);
# 489 "./subversion/include/svn_string.h"
int
svn_cstring_casecmp(const char *str1, const char *str2);
# 500 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoi64(apr_int64_t *n, const char *str,
                     apr_int64_t minval, apr_int64_t maxval,
                     int base);
# 512 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi64(apr_int64_t *n, const char *str);
# 522 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi(int *n, const char *str);
# 533 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoui64(apr_uint64_t *n, const char *str,
                      apr_uint64_t minval, apr_uint64_t maxval,
                      int base);
# 545 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui64(apr_uint64_t *n, const char *str);
# 555 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui(unsigned int *n, const char *str);
# 42 "./subversion/include/svn_delta.h" 2
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


  svn_checksum_sha1
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
# 108 "./subversion/include/svn_checksum.h"
svn_checksum_t *
svn_checksum_dup(const svn_checksum_t *checksum,
                 apr_pool_t *pool);







const char *
svn_checksum_to_cstring_display(const svn_checksum_t *checksum,
                                apr_pool_t *pool);
# 131 "./subversion/include/svn_checksum.h"
const char *
svn_checksum_to_cstring(const svn_checksum_t *checksum,
                        apr_pool_t *pool);
# 143 "./subversion/include/svn_checksum.h"
const char *
svn_checksum_serialize(const svn_checksum_t *checksum,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 155 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_deserialize(const svn_checksum_t **checksum,
                         const char *data,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 170 "./subversion/include/svn_checksum.h"
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
# 196 "./subversion/include/svn_checksum.h"
svn_checksum_t *
svn_checksum_empty_checksum(svn_checksum_kind_t kind,
                            apr_pool_t *pool);
# 207 "./subversion/include/svn_checksum.h"
svn_checksum_ctx_t *
svn_checksum_ctx_create(svn_checksum_kind_t kind,
                        apr_pool_t *pool);







svn_error_t *
svn_checksum_update(svn_checksum_ctx_t *ctx,
                    const void *data,
                    apr_size_t len);
# 229 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_final(svn_checksum_t **checksum,
                   const svn_checksum_ctx_t *ctx,
                   apr_pool_t *pool);







apr_size_t
svn_checksum_size(const svn_checksum_t *checksum);






svn_boolean_t
svn_checksum_is_empty_checksum(svn_checksum_t *checksum);
# 265 "./subversion/include/svn_checksum.h"
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
# 229 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_open_uniquely_named(apr_file_t **file,
                           const char **unique_name,
                           const char *dirpath,
                           const char *filename,
                           const char *suffix,
                           svn_io_file_del_t delete_when,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 265 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_open_unique_file3(apr_file_t **file,
                         const char **temp_path,
                         const char *dirpath,
                         svn_io_file_del_t delete_when,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 281 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_open_unique_file2(apr_file_t **f,
                         const char **unique_name_p,
                         const char *path,
                         const char *suffix,
                         svn_io_file_del_t delete_when,
                         apr_pool_t *pool);
# 298 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_open_unique_file(apr_file_t **f,
                        const char **unique_name_p,
                        const char *path,
                        const char *suffix,
                        svn_boolean_t delete_on_close,
                        apr_pool_t *pool);
# 314 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_create_unique_link(const char **unique_name_p,
                          const char *path,
                          const char *dest,
                          const char *suffix,
                          apr_pool_t *pool);
# 328 "./subversion/include/svn_io.h"
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
# 373 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_copy_link(const char *src,
                 const char *dst,
                 apr_pool_t *pool);
# 389 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_copy_dir_recursively(const char *src,
                            const char *dst_parent,
                            const char *dst_basename,
                            svn_boolean_t copy_perms,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *pool);
# 406 "./subversion/include/svn_io.h"
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
# 442 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_read_only(const char *path,
                          svn_boolean_t ignore_enoent,
                          apr_pool_t *pool);
# 463 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_read_write(const char *path,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *pool);
# 491 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_set_file_read_write_carefully(const char *path,
                                     svn_boolean_t enable_write,
                                     svn_boolean_t ignore_enoent,
                                     apr_pool_t *pool);
# 523 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_executable(const char *path,
                           svn_boolean_t executable,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *pool);







svn_error_t *
svn_io_is_file_executable(svn_boolean_t *executable,
                          const char *path,
                          apr_pool_t *pool);
# 549 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_length_line(apr_file_t *file,
                        char *buf,
                        apr_size_t *limit,
                        apr_pool_t *pool);
# 562 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_affected_time(apr_time_t *apr_time,
                          const char *path,
                          apr_pool_t *pool);







svn_error_t *
svn_io_set_file_affected_time(apr_time_t apr_time,
                              const char *path,
                              apr_pool_t *pool);
# 592 "./subversion/include/svn_io.h"
void
svn_io_sleep_for_timestamps(const char *path, apr_pool_t *pool);
# 604 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_filesizes_different_p(svn_boolean_t *different_p,
                             const char *file1,
                             const char *file2,
                             apr_pool_t *pool);
# 621 "./subversion/include/svn_io.h"
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
# 648 "./subversion/include/svn_io.h"
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






svn_error_t *
svn_io_files_contents_three_same_p(svn_boolean_t *same12,
                                   svn_boolean_t *same23,
                                   svn_boolean_t *same13,
                                   const char *file1,
                                   const char *file2,
                                   const char *file3,
                                   apr_pool_t *scratch_pool);





svn_error_t *
svn_io_file_create(const char *file,
                   const char *contents,
                   apr_pool_t *pool);
# 695 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_file_lock(const char *lock_file,
                 svn_boolean_t exclusive,
                 apr_pool_t *pool);
# 713 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_lock2(const char *lock_file,
                  svn_boolean_t exclusive,
                  svn_boolean_t nonblocking,
                  apr_pool_t *pool);
# 733 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_lock_open_file(apr_file_t *lockfile_handle,
                      svn_boolean_t exclusive,
                      svn_boolean_t nonblocking,
                      apr_pool_t *pool);
# 747 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_unlock_open_file(apr_file_t *lockfile_handle,
                        apr_pool_t *pool);







svn_error_t *
svn_io_file_flush_to_disk(apr_file_t *file,
                          apr_pool_t *pool);
# 769 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_dir_file_copy(const char *src_path,
                     const char *dest_path,
                     const char *file,
                     apr_pool_t *pool);
# 809 "./subversion/include/svn_io.h"
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
# 840 "./subversion/include/svn_io.h"
typedef struct svn_stream_mark_t svn_stream_mark_t;






typedef svn_error_t *(*svn_stream_mark_fn_t)(void *baton,
                                         svn_stream_mark_t **mark,
                                         apr_pool_t *pool);






typedef svn_error_t *(*svn_stream_seek_fn_t)(void *baton,
                                         const svn_stream_mark_t *mark);


svn_stream_t *
svn_stream_create(void *baton,
                  apr_pool_t *pool);


void
svn_stream_set_baton(svn_stream_t *stream,
                     void *baton);


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


svn_stream_t *
svn_stream_empty(apr_pool_t *pool);
# 919 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_disown(svn_stream_t *stream,
                  apr_pool_t *pool);
# 934 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_readonly(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 953 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_writable(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 977 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_unique(svn_stream_t **stream,
                       const char **temp_path,
                       const char *dirpath,
                       svn_io_file_del_t delete_when,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 997 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_from_aprfile2(apr_file_t *file,
                         svn_boolean_t disown,
                         apr_pool_t *pool);
# 1011 "./subversion/include/svn_io.h"
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




svn_stream_t *
svn_stream_from_stringbuf(svn_stringbuf_t *str,
                          apr_pool_t *pool);




svn_stream_t *
svn_stream_from_string(const svn_string_t *str,
                       apr_pool_t *pool);
# 1065 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_buffered(apr_pool_t *result_pool);
# 1078 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_compressed(svn_stream_t *stream,
                      apr_pool_t *pool);
# 1103 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_checksummed2(svn_stream_t *stream,
                        svn_checksum_t **read_checksum,
                        svn_checksum_t **write_checksum,
                        svn_checksum_kind_t checksum_kind,
                        svn_boolean_t read_all,
                        apr_pool_t *pool);
# 1118 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_stream_t *
svn_stream_checksummed(svn_stream_t *stream,
                       const unsigned char **read_digest,
                       const unsigned char **write_digest,
                       svn_boolean_t read_all,
                       apr_pool_t *pool);


svn_error_t *
svn_stream_read(svn_stream_t *stream,
                char *buffer,
                apr_size_t *len);
# 1144 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_skip(svn_stream_t *stream,
                apr_size_t len);


svn_error_t *
svn_stream_write(svn_stream_t *stream,
                 const char *data,
                 apr_size_t *len);


svn_error_t *
svn_stream_close(svn_stream_t *stream);
# 1165 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_reset(svn_stream_t *stream);






svn_boolean_t
svn_stream_supports_mark(svn_stream_t *stream);
# 1186 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_mark(svn_stream_t *stream,
                svn_stream_mark_t **mark,
                apr_pool_t *pool);
# 1199 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_seek(svn_stream_t *stream, const svn_stream_mark_t *mark);
# 1210 "./subversion/include/svn_io.h"
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
# 1243 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_printf_from_utf8(svn_stream_t *stream,
                            const char *encoding,
                            apr_pool_t *pool,
                            const char *fmt,
                            ...)
       __attribute__((format(printf, 4, 5)));
# 1259 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_readline(svn_stream_t *stream,
                    svn_stringbuf_t **stringbuf,
                    const char *eol,
                    svn_boolean_t *eof,
                    apr_pool_t *pool);
# 1280 "./subversion/include/svn_io.h"
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
# 1308 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_copy(svn_stream_t *from,
                svn_stream_t *to,
                apr_pool_t *pool);
# 1325 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_contents_same2(svn_boolean_t *same,
                          svn_stream_t *stream1,
                          svn_stream_t *stream2,
                          apr_pool_t *pool);
# 1338 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_contents_same(svn_boolean_t *same,
                         svn_stream_t *stream1,
                         svn_stream_t *stream2,
                         apr_pool_t *pool);
# 1358 "./subversion/include/svn_io.h"
svn_error_t *
svn_string_from_stream(svn_string_t **result,
                       svn_stream_t *stream,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);







typedef svn_error_t *
(*svn_stream_lazyopen_func_t)(svn_stream_t **stream,
                              void *baton,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);
# 1390 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_lazyopen_create(svn_stream_lazyopen_func_t open_func,
                           void *open_baton,
                           apr_pool_t *result_pool);
# 1412 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_file2(svn_stringbuf_t **result,
                         const char *filename,
                         apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_stringbuf_from_file(svn_stringbuf_t **result,
                        const char *filename,
                        apr_pool_t *pool);
# 1436 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_aprfile(svn_stringbuf_t **result,
                           apr_file_t *file,
                           apr_pool_t *pool);
# 1451 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_remove_file2(const char *path,
                    svn_boolean_t ignore_enoent,
                    apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_io_remove_file(const char *path,
                   apr_pool_t *pool);
# 1474 "./subversion/include/svn_io.h"
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
# 1501 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_get_dir_filenames(apr_hash_t **dirents,
                         const char *path,
                         apr_pool_t *pool);
# 1522 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_get_dirents3(apr_hash_t **dirents,
                    const char *path,
                    svn_boolean_t only_check_type,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);
# 1536 "./subversion/include/svn_io.h"
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
# 1567 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_stat_dirent2(const svn_io_dirent2_t **dirent_p,
                    const char *path,
                    svn_boolean_t verify_truename,
                    svn_boolean_t ignore_enoent,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);
# 1582 "./subversion/include/svn_io.h"
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
# 1616 "./subversion/include/svn_io.h"
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
# 1669 "./subversion/include/svn_io.h"
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
# 1690 "./subversion/include/svn_io.h"
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
# 1710 "./subversion/include/svn_io.h"
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
# 1738 "./subversion/include/svn_io.h"
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
# 1781 "./subversion/include/svn_io.h"
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
# 1850 "./subversion/include/svn_io.h"
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
# 1911 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_parse_mimetypes_file(apr_hash_t **type_map,
                            const char *mimetypes_file,
                            apr_pool_t *pool);
# 1930 "./subversion/include/svn_io.h"
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
# 1955 "./subversion/include/svn_io.h"
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
# 2014 "./subversion/include/svn_io.h"
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



svn_error_t *
svn_io_file_write(apr_file_t *file,
                  const void *buf,
                  apr_size_t *nbytes,
                  apr_pool_t *pool);



svn_error_t *
svn_io_file_write_full(apr_file_t *file,
                       const void *buf,
                       apr_size_t nbytes,
                       apr_size_t *bytes_written,
                       apr_pool_t *pool);
# 2075 "./subversion/include/svn_io.h"
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
# 2106 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_rename(const char *from_path,
                   const char *to_path,
                   apr_pool_t *pool);
# 2120 "./subversion/include/svn_io.h"
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
# 2149 "./subversion/include/svn_io.h"
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
# 2210 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_version_file(int *version,
                         const char *path,
                         apr_pool_t *pool);






svn_error_t *
svn_io_write_version_file(const char *path,
                          int version,
                          apr_pool_t *pool);
# 2246 "./subversion/include/svn_io.h"
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
# 253 "./subversion/include/svn_delta.h"
void
svn_txdelta_apply_instructions(svn_txdelta_window_t *window,
                               const char *sbuf, char *tbuf,
                               apr_size_t *tlen);







typedef svn_error_t *(*svn_txdelta_window_handler_t)(
  svn_txdelta_window_t *window, void *baton);
# 286 "./subversion/include/svn_delta.h"
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
# 315 "./subversion/include/svn_delta.h"
typedef svn_error_t *
(*svn_txdelta_next_window_fn_t)(svn_txdelta_window_t **window,
                                void *baton,
                                apr_pool_t *pool);
# 329 "./subversion/include/svn_delta.h"
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
# 377 "./subversion/include/svn_delta.h"
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
# 406 "./subversion/include/svn_delta.h"
svn_stream_t *
svn_txdelta_target_push(svn_txdelta_window_handler_t handler,
                        void *handler_baton,
                        svn_stream_t *source,
                        apr_pool_t *pool);
# 419 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_send_string(const svn_string_t *string,
                        svn_txdelta_window_handler_t handler,
                        void *handler_baton,
                        apr_pool_t *pool);
# 435 "./subversion/include/svn_delta.h"
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
# 461 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_send_contents(const unsigned char *contents,
                          apr_size_t len,
                          svn_txdelta_window_handler_t handler,
                          void *handler_baton,
                          apr_pool_t *pool);
# 488 "./subversion/include/svn_delta.h"
void
svn_txdelta_apply(svn_stream_t *source,
                  svn_stream_t *target,
                  unsigned char *result_digest,
                  const char *error_info,
                  apr_pool_t *pool,
                  svn_txdelta_window_handler_t *handler,
                  void **handler_baton);
# 512 "./subversion/include/svn_delta.h"
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
# 553 "./subversion/include/svn_delta.h"
svn_stream_t *
svn_txdelta_parse_svndiff(svn_txdelta_window_handler_t handler,
                          void *handler_baton,
                          svn_boolean_t error_on_early_close,
                          apr_pool_t *pool);
# 570 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_read_svndiff_window(svn_txdelta_window_t **window,
                                svn_stream_t *stream,
                                int svndiff_version,
                                apr_pool_t *pool);
# 587 "./subversion/include/svn_delta.h"
svn_error_t *
svn_txdelta_skip_svndiff_window(apr_file_t *file,
                                int svndiff_version,
                                apr_pool_t *pool);
# 829 "./subversion/include/svn_delta.h"
typedef struct svn_delta_editor_t
{
# 841 "./subversion/include/svn_delta.h"
  svn_error_t *(*set_target_revision)(void *edit_baton,
                                      svn_revnum_t target_revision,
                                      apr_pool_t *scratch_pool);
# 857 "./subversion/include/svn_delta.h"
  svn_error_t *(*open_root)(void *edit_baton,
                            svn_revnum_t base_revision,
                            apr_pool_t *result_pool,
                            void **root_baton);
# 878 "./subversion/include/svn_delta.h"
  svn_error_t *(*delete_entry)(const char *path,
                               svn_revnum_t revision,
                               void *parent_baton,
                               apr_pool_t *scratch_pool);
# 897 "./subversion/include/svn_delta.h"
  svn_error_t *(*add_directory)(const char *path,
                                void *parent_baton,
                                const char *copyfrom_path,
                                svn_revnum_t copyfrom_revision,
                                apr_pool_t *result_pool,
                                void **child_baton);
# 915 "./subversion/include/svn_delta.h"
  svn_error_t *(*open_directory)(const char *path,
                                 void *parent_baton,
                                 svn_revnum_t base_revision,
                                 apr_pool_t *result_pool,
                                 void **child_baton);
# 932 "./subversion/include/svn_delta.h"
  svn_error_t *(*change_dir_prop)(void *dir_baton,
                                  const char *name,
                                  const svn_string_t *value,
                                  apr_pool_t *scratch_pool);
# 944 "./subversion/include/svn_delta.h"
  svn_error_t *(*close_directory)(void *dir_baton,
                                  apr_pool_t *scratch_pool);
# 956 "./subversion/include/svn_delta.h"
  svn_error_t *(*absent_directory)(const char *path,
                                   void *parent_baton,
                                   apr_pool_t *scratch_pool);
# 983 "./subversion/include/svn_delta.h"
  svn_error_t *(*add_file)(const char *path,
                           void *parent_baton,
                           const char *copyfrom_path,
                           svn_revnum_t copyfrom_revision,
                           apr_pool_t *result_pool,
                           void **file_baton);
# 1005 "./subversion/include/svn_delta.h"
  svn_error_t *(*open_file)(const char *path,
                            void *parent_baton,
                            svn_revnum_t base_revision,
                            apr_pool_t *result_pool,
                            void **file_baton);
# 1034 "./subversion/include/svn_delta.h"
  svn_error_t *(*apply_textdelta)(void *file_baton,
                                  const char *base_checksum,
                                  apr_pool_t *result_pool,
                                  svn_txdelta_window_handler_t *handler,
                                  void **handler_baton);
# 1051 "./subversion/include/svn_delta.h"
  svn_error_t *(*change_file_prop)(void *file_baton,
                                   const char *name,
                                   const svn_string_t *value,
                                   apr_pool_t *scratch_pool);
# 1069 "./subversion/include/svn_delta.h"
  svn_error_t *(*close_file)(void *file_baton,
                             const char *text_checksum,
                             apr_pool_t *scratch_pool);
# 1081 "./subversion/include/svn_delta.h"
  svn_error_t *(*absent_file)(const char *path,
                              void *parent_baton,
                              apr_pool_t *scratch_pool);






  svn_error_t *(*close_edit)(void *edit_baton,
                             apr_pool_t *scratch_pool);






  svn_error_t *(*abort_edit)(void *edit_baton,
                             apr_pool_t *scratch_pool);



} svn_delta_editor_t;
# 1119 "./subversion/include/svn_delta.h"
svn_delta_editor_t *
svn_delta_default_editor(apr_pool_t *pool);






typedef svn_error_t *(*svn_delta_fetch_props_func_t)(
  apr_hash_t **props,
  void *baton,
  const char *path,
  svn_revnum_t base_revision,
  apr_pool_t *result_pool,
  apr_pool_t *scratch_pool
  );






typedef svn_error_t *(*svn_delta_fetch_kind_func_t)(
  svn_kind_t *kind,
  void *baton,
  const char *path,
  svn_revnum_t base_revision,
  apr_pool_t *scratch_pool
  );







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







svn_error_t *
svn_delta_noop_window_handler(svn_txdelta_window_t *window,
                              void *baton);
# 1205 "./subversion/include/svn_delta.h"
svn_error_t *
svn_delta_get_cancellation_editor(svn_cancel_func_t cancel_func,
                                  void *cancel_baton,
                                  const svn_delta_editor_t *wrapped_editor,
                                  void *wrapped_baton,
                                  const svn_delta_editor_t **editor,
                                  void **edit_baton,
                                  apr_pool_t *pool);
# 1248 "./subversion/include/svn_delta.h"
svn_error_t *
svn_delta_depth_filter_editor(const svn_delta_editor_t **editor,
                              void **edit_baton,
                              const svn_delta_editor_t *wrapped_editor,
                              void *wrapped_edit_baton,
                              svn_depth_t requested_depth,
                              svn_boolean_t has_target,
                              apr_pool_t *pool);
# 1288 "./subversion/include/svn_delta.h"
typedef svn_error_t *(*svn_delta_path_driver_cb_func_t)(
  void **dir_baton,
  void *parent_baton,
  void *callback_baton,
  const char *path,
  apr_pool_t *pool);
# 1313 "./subversion/include/svn_delta.h"
svn_error_t *
svn_delta_path_driver2(const svn_delta_editor_t *editor,
                       void *edit_baton,
                       const apr_array_header_t *paths,
                       svn_boolean_t sort_paths,
                       svn_delta_path_driver_cb_func_t callback_func,
                       void *callback_baton,
                       apr_pool_t *scratch_pool);
# 1332 "./subversion/include/svn_delta.h"
__attribute__((deprecated))
svn_error_t *
svn_delta_path_driver(const svn_delta_editor_t *editor,
                      void *edit_baton,
                      svn_revnum_t revision,
                      const apr_array_header_t *paths,
                      svn_delta_path_driver_cb_func_t callback_func,
                      void *callback_baton,
                      apr_pool_t *scratch_pool);
# 1372 "./subversion/include/svn_delta.h"
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
# 1394 "./subversion/include/svn_delta.h"
typedef svn_error_t *(*svn_file_rev_handler_old_t)(
  void *baton,
  const char *path,
  svn_revnum_t rev,
  apr_hash_t *rev_props,
  svn_txdelta_window_handler_t *delta_handler,
  void **delta_baton,
  apr_array_header_t *prop_diffs,
  apr_pool_t *pool);
# 1417 "./subversion/include/svn_delta.h"
void
svn_compat_wrap_file_rev_handler(svn_file_rev_handler_t *handler2,
                                 void **handler2_baton,
                                 svn_file_rev_handler_old_t handler,
                                 void *handler_baton,
                                 apr_pool_t *pool);
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2


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
                     ...);
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
# 376 "./subversion/include/svn_dirent_uri.h"
void
svn_uri_split(const char **dirpath,
              const char **base_name,
              const char *uri,
              apr_pool_t *result_pool);
# 393 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_basename(const char *uri,
                 apr_pool_t *result_pool);
# 407 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_dirname(const char *uri,
                apr_pool_t *result_pool);







svn_boolean_t
svn_dirent_is_absolute(const char *dirent);
# 431 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_root(const char *dirent,
                   apr_size_t len);





svn_boolean_t
svn_uri_is_root(const char *uri,
                apr_size_t len);
# 459 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_canonicalize(const char *dirent,
                        apr_pool_t *result_pool);
# 478 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_canonicalize(const char *relpath,
                         apr_pool_t *result_pool);
# 502 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_canonicalize(const char *uri,
                     apr_pool_t *result_pool);
# 517 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_canonical(const char *dirent,
                        apr_pool_t *scratch_pool);






svn_boolean_t
svn_relpath_is_canonical(const char *relpath);
# 536 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_uri_is_canonical(const char *uri,
                     apr_pool_t *scratch_pool);
# 548 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_get_longest_ancestor(const char *dirent1,
                                const char *dirent2,
                                apr_pool_t *result_pool);
# 561 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_get_longest_ancestor(const char *relpath1,
                                 const char *relpath2,
                                 apr_pool_t *result_pool);
# 578 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_get_longest_ancestor(const char *uri1,
                             const char *uri2,
                             apr_pool_t *result_pool);
# 591 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_get_absolute(const char **pabsolute,
                        const char *relative,
                        apr_pool_t *result_pool);
# 608 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_is_child(const char *parent_dirent,
                    const char *child_dirent,
                    apr_pool_t *result_pool);
# 621 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_ancestor(const char *parent_dirent,
                       const char *child_dirent);




svn_boolean_t
svn_uri__is_ancestor(const char *parent_uri,
                     const char *child_uri);
# 643 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_skip_ancestor(const char *parent_dirent,
                         const char *child_dirent);
# 654 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_skip_ancestor(const char *parent_relpath,
                          const char *child_relpath);
# 666 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_skip_ancestor(const char *parent_uri,
                      const char *child_uri,
                      apr_pool_t *result_pool);
# 704 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_condense_targets(const char **pcommon,
                            apr_array_header_t **pcondensed_targets,
                            const apr_array_header_t *targets,
                            svn_boolean_t remove_redundancies,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 745 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_condense_targets(const char **pcommon,
                         apr_array_header_t **pcondensed_targets,
                         const apr_array_header_t *targets,
                         svn_boolean_t remove_redundancies,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 770 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_is_under_root(svn_boolean_t *under_root,
                         const char **result_path,
                         const char *base_path,
                         const char *path,
                         apr_pool_t *result_pool);
# 784 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_get_dirent_from_file_url(const char **dirent,
                                 const char *url,
                                 apr_pool_t *result_pool);
# 796 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_get_file_url_from_dirent(const char **url,
                                 const char *dirent,
                                 apr_pool_t *result_pool);
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
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
svn_path_join_many(apr_pool_t *pool, const char *base, ...);
# 153 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_basename(const char *path, apr_pool_t *pool);
# 167 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_dirname(const char *path, apr_pool_t *pool);
# 180 "./subversion/include/svn_path.h"
void
svn_path_splitext(const char **path_root, const char **path_ext,
                  const char *path, apr_pool_t *pool);





apr_size_t
svn_path_component_count(const char *path);
# 201 "./subversion/include/svn_path.h"
void
svn_path_add_component(svn_stringbuf_t *path, const char *component);


void
svn_path_remove_component(svn_stringbuf_t *path);






void
svn_path_remove_components(svn_stringbuf_t *path, apr_size_t n);
# 239 "./subversion/include/svn_path.h"
__attribute__((deprecated))
void
svn_path_split(const char *path,
               const char **dirpath,
               const char **base_name,
               apr_pool_t *pool);






int
svn_path_is_empty(const char *path);
# 280 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_canonicalize(const char *path, apr_pool_t *pool);
# 292 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_boolean_t
svn_path_is_canonical(const char *path, apr_pool_t *pool);
# 304 "./subversion/include/svn_path.h"
int
svn_path_compare_paths(const char *path1, const char *path2);
# 323 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_get_longest_ancestor(const char *path1,
                              const char *path2,
                              apr_pool_t *pool);
# 338 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_get_absolute(const char **pabsolute,
                      const char *relative,
                      apr_pool_t *pool);
# 354 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_split_if_file(const char *path,
                       const char **pdirectory,
                       const char **pfile,
                       apr_pool_t *pool);
# 396 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_condense_targets(const char **pcommon,
                          apr_array_header_t **pcondensed_targets,
                          const apr_array_header_t *targets,
                          svn_boolean_t remove_redundancies,
                          apr_pool_t *pool);
# 442 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_remove_redundancies(apr_array_header_t **pcondensed_targets,
                             const apr_array_header_t *targets,
                             apr_pool_t *pool);







apr_array_header_t *
svn_path_decompose(const char *path, apr_pool_t *pool);
# 465 "./subversion/include/svn_path.h"
const char *
svn_path_compose(const apr_array_header_t *components, apr_pool_t *pool);






svn_boolean_t
svn_path_is_single_path_component(const char *name);
# 484 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_backpath_present(const char *path);
# 495 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_dotpath_present(const char *path);
# 520 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_is_child(const char *path1, const char *path2, apr_pool_t *pool);
# 533 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_boolean_t
svn_path_is_ancestor(const char *path1, const char *path2);
# 556 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_check_valid(const char *path, apr_pool_t *pool);
# 567 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_url(const char *path);


svn_boolean_t
svn_path_is_uri_safe(const char *path);




const char *
svn_path_uri_encode(const char *path, apr_pool_t *pool);


const char *
svn_path_uri_decode(const char *path, apr_pool_t *pool);
# 611 "./subversion/include/svn_path.h"
const char *
svn_path_url_add_component2(const char *url,
                            const char *component,
                            apr_pool_t *pool);






__attribute__((deprecated))
const char *
svn_path_url_add_component(const char *url,
                           const char *component,
                           apr_pool_t *pool);
# 634 "./subversion/include/svn_path.h"
const char *
svn_path_uri_from_iri(const char *iri, apr_pool_t *pool);
# 647 "./subversion/include/svn_path.h"
const char *
svn_path_uri_autoescape(const char *uri, apr_pool_t *pool);
# 659 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_cstring_from_utf8(const char **path_apr,
                           const char *path_utf8,
                           apr_pool_t *pool);


svn_error_t *
svn_path_cstring_to_utf8(const char **path_utf8,
                         const char *path_apr,
                         apr_pool_t *pool);
# 692 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_repos_relative_url(const char *path);
# 716 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_resolve_repos_relative_url(const char **absolute_url,
                                    const char *relative_url,
                                    const char *repos_root_url,
                                    apr_pool_t *pool);
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2

# 1 "./subversion/include/svn_config.h" 1
# 54 "./subversion/include/svn_config.h"
typedef struct svn_config_t svn_config_t;
# 201 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_config(apr_hash_t **cfg_hash,
                      const char *config_dir,
                      apr_pool_t *pool);
# 215 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_create(svn_config_t **cfgp,
                  svn_boolean_t section_names_case_sensitive,
                  apr_pool_t *result_pool);
# 232 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_read2(svn_config_t **cfgp,
                 const char *file,
                 svn_boolean_t must_exist,
                 svn_boolean_t section_names_case_sensitive,
                 apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_config_read(svn_config_t **cfgp,
                const char *file,
                svn_boolean_t must_exist,
                apr_pool_t *pool);
# 260 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_parse(svn_config_t **cfgp,
                 svn_stream_t *stream,
                 svn_boolean_t section_names_case_sensitive,
                 apr_pool_t *result_pool);







svn_error_t *
svn_config_merge(svn_config_t *cfg,
                 const char *file,
                 svn_boolean_t must_exist);
# 291 "./subversion/include/svn_config.h"
void
svn_config_get(svn_config_t *cfg,
               const char **valuep,
               const char *section,
               const char *option,
               const char *default_value);
# 305 "./subversion/include/svn_config.h"
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
# 341 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_int64(svn_config_t *cfg,
                     apr_int64_t *valuep,
                     const char *section,
                     const char *option,
                     apr_int64_t default_value);







void
svn_config_set_int64(svn_config_t *cfg,
                     const char *section,
                     const char *option,
                     apr_int64_t value);
# 376 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_yes_no_ask(svn_config_t *cfg,
                          const char **valuep,
                          const char *section,
                          const char *option,
                          const char* default_value);
# 391 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_tristate(svn_config_t *cfg, svn_tristate_t *valuep,
                        const char *section, const char *option,
                        const char *unknown_value,
                        svn_tristate_t default_value);
# 404 "./subversion/include/svn_config.h"
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
# 439 "./subversion/include/svn_config.h"
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
# 473 "./subversion/include/svn_config.h"
typedef svn_boolean_t (*svn_config_enumerator2_t)(const char *name,
                                                  const char *value,
                                                  void *baton,
                                                  apr_pool_t *pool);
# 496 "./subversion/include/svn_config.h"
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
# 531 "./subversion/include/svn_config.h"
const char *
svn_config_get_server_setting(svn_config_t *cfg,
                              const char* server_group,
                              const char* option_name,
                              const char* default_value);
# 545 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_server_setting_int(svn_config_t *cfg,
                                  const char *server_group,
                                  const char *option_name,
                                  apr_int64_t default_value,
                                  apr_int64_t *result_value,
                                  apr_pool_t *pool);
# 564 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_server_setting_bool(svn_config_t *cfg,
                                   svn_boolean_t *valuep,
                                   const char *server_group,
                                   const char *option_name,
                                   svn_boolean_t default_value);
# 587 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_ensure(const char *config_dir,
                  apr_pool_t *pool);
# 621 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_read_auth_data(apr_hash_t **hash,
                          const char *cred_kind,
                          const char *realmstring,
                          const char *config_dir,
                          apr_pool_t *pool);
# 640 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_write_auth_data(apr_hash_t *hash,
                           const char *cred_kind,
                           const char *realmstring,
                           const char *config_dir,
                           apr_pool_t *pool);
# 665 "./subversion/include/svn_config.h"
svn_error_t *
svn_config_get_user_config_path(const char **path,
                                const char *config_dir,
                                const char *fname,
                                apr_pool_t *pool);






svn_error_t *
svn_config_dup(svn_config_t **cfgp,
               svn_config_t *src,
               apr_pool_t *pool);






svn_error_t *
svn_config_copy_config(apr_hash_t **cfg_hash,
                       apr_hash_t *src_hash,
                       apr_pool_t *pool);
# 42 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
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
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "./subversion/include/svn_hash.h" 1
# 80 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_read2(apr_hash_t *hash,
               svn_stream_t *stream,
               const char *terminator,
               apr_pool_t *pool);
# 94 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_write2(apr_hash_t *hash,
                svn_stream_t *stream,
                const char *terminator,
                apr_pool_t *pool);
# 107 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_read_incremental(apr_hash_t *hash,
                          svn_stream_t *stream,
                          const char *terminator,
                          apr_pool_t *pool);
# 121 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_write_incremental(apr_hash_t *hash,
                           apr_hash_t *oldhash,
                           svn_stream_t *stream,
                           const char *terminator,
                           apr_pool_t *pool);
# 136 "./subversion/include/svn_hash.h"
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
# 164 "./subversion/include/svn_hash.h"
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
# 201 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_diff(apr_hash_t *hash_a,
              apr_hash_t *hash_b,
              svn_hash_diff_func_t diff_func,
              void *diff_func_baton,
              apr_pool_t *pool);
# 225 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_keys(apr_array_header_t **array,
              apr_hash_t *hash,
              apr_pool_t *pool);
# 238 "./subversion/include/svn_hash.h"
svn_error_t *
svn_hash_from_cstring_keys(apr_hash_t **hash,
                           const apr_array_header_t *keys,
                           apr_pool_t *pool);
# 44 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "./subversion/include/svn_sorts.h" 1
# 55 "./subversion/include/svn_sorts.h"
typedef struct svn_sort__item_t {

  const void *key;


  apr_ssize_t klen;


  void *value;
} svn_sort__item_t;
# 91 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_items_as_paths(const svn_sort__item_t *a,
                                const svn_sort__item_t *b);







int
svn_sort_compare_items_lexically(const svn_sort__item_t *a,
                                 const svn_sort__item_t *b);
# 116 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_revisions(const void *a,
                           const void *b);
# 130 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_paths(const void *a,
                       const void *b);
# 148 "./subversion/include/svn_sorts.h"
int
svn_sort_compare_ranges(const void *a,
                        const void *b);
# 168 "./subversion/include/svn_sorts.h"
apr_array_header_t *
svn_sort__hash(apr_hash_t *ht,
               int (*comparison_func)(const svn_sort__item_t *,
                                      const svn_sort__item_t *),
               apr_pool_t *pool);
# 181 "./subversion/include/svn_sorts.h"
int
svn_sort__bsearch_lower_bound(const void *key,
                              const apr_array_header_t *array,
                              int (*compare_func)(const void *, const void *));







void
svn_sort__array_insert(const void *new_element,
                       apr_array_header_t *array,
                       int insert_index);
# 206 "./subversion/include/svn_sorts.h"
void
svn_sort__array_delete(apr_array_header_t *arr,
                       int delete_index,
                       int elements_to_delete);
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2

# 1 "./subversion/svn_private_config.h" 1
# 237 "./subversion/svn_private_config.h"
# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
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
# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ ));
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));
# 238 "./subversion/svn_private_config.h" 2
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
# 239 "./subversion/svn_private_config.h" 2
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
# 1 "./subversion/include/svn_wc.h" 1
# 85 "./subversion/include/svn_wc.h"
# 1 "./subversion/include/svn_opt.h" 1
# 32 "./subversion/include/svn_opt.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_getopt.h" 1
# 42 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_getopt.h"
typedef void (apr_getopt_err_fn_t)(void *arg, const char *err, ...);


typedef struct apr_getopt_t apr_getopt_t;




struct apr_getopt_t {

    apr_pool_t *cont;

    apr_getopt_err_fn_t *errfn;

    void *errarg;

    int ind;

    int opt;

    int reset;

    int argc;

    const char **argv;

    char const* place;

    int interleave;

    int skip_start;

    int skip_end;
};


typedef struct apr_getopt_option_t apr_getopt_option_t;




struct apr_getopt_option_t {

    const char *name;

    int optch;

    int has_arg;

    const char *description;
};
# 103 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_getopt.h"
apr_status_t apr_getopt_init(apr_getopt_t **os, apr_pool_t *cont,
                                      int argc, const char * const *argv);
# 122 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_getopt.h"
apr_status_t apr_getopt(apr_getopt_t *os, const char *opts,
                                     char *option_ch, const char **option_arg);
# 150 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_getopt.h"
apr_status_t apr_getopt_long(apr_getopt_t *os,
       const apr_getopt_option_t *opts,
       int *option_ch,
                                          const char **option_arg);
# 33 "./subversion/include/svn_opt.h" 2






# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 1
# 40 "./subversion/include/svn_opt.h" 2
# 62 "./subversion/include/svn_opt.h"
typedef svn_error_t *(svn_opt_subcommand_t)(
  apr_getopt_t *os, void *baton, apr_pool_t *pool);
# 82 "./subversion/include/svn_opt.h"
typedef struct svn_opt_subcommand_desc2_t
{

  const char *name;


  svn_opt_subcommand_t *cmd_func;


  const char *aliases[3];


  const char *help;




  int valid_options[50];





  struct { int optch; const char *desc; } desc_overrides[50];
} svn_opt_subcommand_desc2_t;
# 116 "./subversion/include/svn_opt.h"
typedef struct svn_opt_subcommand_desc_t
{

  const char *name;


  svn_opt_subcommand_t *cmd_func;


  const char *aliases[3];


  const char *help;




  int valid_options[50];

} svn_opt_subcommand_desc_t;
# 144 "./subversion/include/svn_opt.h"
const svn_opt_subcommand_desc2_t *
svn_opt_get_canonical_subcommand2(const svn_opt_subcommand_desc2_t *table,
                                  const char *cmd_name);
# 158 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
const svn_opt_subcommand_desc_t *
svn_opt_get_canonical_subcommand(const svn_opt_subcommand_desc_t *table,
                                 const char *cmd_name);
# 175 "./subversion/include/svn_opt.h"
const apr_getopt_option_t *
svn_opt_get_option_from_code2(int code,
                              const apr_getopt_option_t *option_table,
                              const svn_opt_subcommand_desc2_t *command,
                              apr_pool_t *pool);
# 189 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
const apr_getopt_option_t *
svn_opt_get_option_from_code(int code,
                             const apr_getopt_option_t *option_table);
# 203 "./subversion/include/svn_opt.h"
svn_boolean_t
svn_opt_subcommand_takes_option3(const svn_opt_subcommand_desc2_t *command,
                                 int option_code,
                                 const int *global_options);







__attribute__((deprecated))
svn_boolean_t
svn_opt_subcommand_takes_option2(const svn_opt_subcommand_desc2_t *command,
                                 int option_code);
# 229 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
svn_boolean_t
svn_opt_subcommand_takes_option(const svn_opt_subcommand_desc_t *command,
                                int option_code);
# 249 "./subversion/include/svn_opt.h"
void
svn_opt_print_generic_help2(const char *header,
                            const svn_opt_subcommand_desc2_t *cmd_table,
                            const apr_getopt_option_t *opt_table,
                            const char *footer,
                            apr_pool_t *pool,
                            FILE *stream);
# 264 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
void
svn_opt_print_generic_help(const char *header,
                           const svn_opt_subcommand_desc_t *cmd_table,
                           const apr_getopt_option_t *opt_table,
                           const char *footer,
                           apr_pool_t *pool,
                           FILE *stream);







void
svn_opt_format_option(const char **string,
                      const apr_getopt_option_t *opt,
                      svn_boolean_t doc,
                      apr_pool_t *pool);
# 302 "./subversion/include/svn_opt.h"
void
svn_opt_subcommand_help3(const char *subcommand,
                         const svn_opt_subcommand_desc2_t *table,
                         const apr_getopt_option_t *options_table,
                         const int *global_options,
                         apr_pool_t *pool);







__attribute__((deprecated))
void
svn_opt_subcommand_help2(const char *subcommand,
                         const svn_opt_subcommand_desc2_t *table,
                         const apr_getopt_option_t *options_table,
                         apr_pool_t *pool);
# 329 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
void
svn_opt_subcommand_help(const char *subcommand,
                        const svn_opt_subcommand_desc_t *table,
                        const apr_getopt_option_t *options_table,
                        apr_pool_t *pool);
# 349 "./subversion/include/svn_opt.h"
enum svn_opt_revision_kind {

  svn_opt_revision_unspecified,


  svn_opt_revision_number,


  svn_opt_revision_date,


  svn_opt_revision_committed,


  svn_opt_revision_previous,


  svn_opt_revision_base,


  svn_opt_revision_working,


  svn_opt_revision_head


};
# 386 "./subversion/include/svn_opt.h"
typedef union svn_opt_revision_value_t
{

  svn_revnum_t number;


  apr_time_t date;
} svn_opt_revision_value_t;


typedef struct svn_opt_revision_t
{
  enum svn_opt_revision_kind kind;
  svn_opt_revision_value_t value;
} svn_opt_revision_t;


typedef struct svn_opt_revision_range_t
{

  svn_opt_revision_t start;


  svn_opt_revision_t end;
} svn_opt_revision_range_t;
# 433 "./subversion/include/svn_opt.h"
int
svn_opt_parse_revision(svn_opt_revision_t *start_revision,
                       svn_opt_revision_t *end_revision,
                       const char *arg,
                       apr_pool_t *pool);
# 458 "./subversion/include/svn_opt.h"
int
svn_opt_parse_revision_to_range(apr_array_header_t *opt_ranges,
                                const char *arg,
                                apr_pool_t *pool);
# 488 "./subversion/include/svn_opt.h"
svn_error_t *
svn_opt_resolve_revisions(svn_opt_revision_t *peg_rev,
                          svn_opt_revision_t *op_rev,
                          svn_boolean_t is_url,
                          svn_boolean_t notice_local_mods,
                          apr_pool_t *pool);
# 521 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
svn_error_t *
svn_opt_args_to_target_array3(apr_array_header_t **targets_p,
                              apr_getopt_t *os,
                              const apr_array_header_t *known_targets,
                              apr_pool_t *pool);
# 537 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
svn_error_t *
svn_opt_args_to_target_array2(apr_array_header_t **targets_p,
                              apr_getopt_t *os,
                              const apr_array_header_t *known_targets,
                              apr_pool_t *pool);
# 559 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
svn_error_t *
svn_opt_args_to_target_array(apr_array_header_t **targets_p,
                             apr_getopt_t *os,
                             const apr_array_header_t *known_targets,
                             svn_opt_revision_t *start_revision,
                             svn_opt_revision_t *end_revision,
                             svn_boolean_t extract_revisions,
                             apr_pool_t *pool);
# 579 "./subversion/include/svn_opt.h"
svn_error_t *
svn_opt_parse_revprop(apr_hash_t **revprops, const char *revprop_spec,
                      apr_pool_t *pool);
# 591 "./subversion/include/svn_opt.h"
void
svn_opt_push_implicit_dot_target(apr_array_header_t *targets,
                                 apr_pool_t *pool);







svn_error_t *
svn_opt_parse_num_args(apr_array_header_t **args_p,
                       apr_getopt_t *os,
                       int num_args,
                       apr_pool_t *pool);







svn_error_t *
svn_opt_parse_all_args(apr_array_header_t **args_p,
                       apr_getopt_t *os,
                       apr_pool_t *pool);
# 660 "./subversion/include/svn_opt.h"
svn_error_t *
svn_opt_parse_path(svn_opt_revision_t *rev,
                   const char **truepath,
                   const char *path,
                   apr_pool_t *pool);
# 702 "./subversion/include/svn_opt.h"
svn_error_t *
svn_opt_print_help4(apr_getopt_t *os,
                    const char *pgm_name,
                    svn_boolean_t print_version,
                    svn_boolean_t quiet,
                    svn_boolean_t verbose,
                    const char *version_footer,
                    const char *header,
                    const svn_opt_subcommand_desc2_t *cmd_table,
                    const apr_getopt_option_t *option_table,
                    const int *global_options,
                    const char *footer,
                    apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_opt_print_help3(apr_getopt_t *os,
                    const char *pgm_name,
                    svn_boolean_t print_version,
                    svn_boolean_t quiet,
                    const char *version_footer,
                    const char *header,
                    const svn_opt_subcommand_desc2_t *cmd_table,
                    const apr_getopt_option_t *option_table,
                    const int *global_options,
                    const char *footer,
                    apr_pool_t *pool);
# 743 "./subversion/include/svn_opt.h"
__attribute__((deprecated))
svn_error_t *
svn_opt_print_help2(apr_getopt_t *os,
                    const char *pgm_name,
                    svn_boolean_t print_version,
                    svn_boolean_t quiet,
                    const char *version_footer,
                    const char *header,
                    const svn_opt_subcommand_desc2_t *cmd_table,
                    const apr_getopt_option_t *option_table,
                    const char *footer,
                    apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_opt_print_help(apr_getopt_t *os,
                   const char *pgm_name,
                   svn_boolean_t print_version,
                   svn_boolean_t quiet,
                   const char *version_footer,
                   const char *header,
                   const svn_opt_subcommand_desc_t *cmd_table,
                   const apr_getopt_option_t *option_table,
                   const char *footer,
                   apr_pool_t *pool);
# 86 "./subversion/include/svn_wc.h" 2
# 1 "./subversion/include/svn_ra.h" 1
# 40 "./subversion/include/svn_ra.h"
# 1 "./subversion/include/svn_auth.h" 1
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
# 651 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_first_credentials(void **credentials,
                           svn_auth_iterstate_t **state,
                           const char *cred_kind,
                           const char *realmstring,
                           svn_auth_baton_t *auth_baton,
                           apr_pool_t *pool);
# 669 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_next_credentials(void **credentials,
                          svn_auth_iterstate_t *state,
                          apr_pool_t *pool);
# 682 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_save_credentials(svn_auth_iterstate_t *state,
                          apr_pool_t *pool);
# 703 "./subversion/include/svn_auth.h"
void
svn_auth_get_simple_prompt_provider(svn_auth_provider_object_t **provider,
                                    svn_auth_simple_prompt_func_t prompt_func,
                                    void *prompt_baton,
                                    int retry_limit,
                                    apr_pool_t *pool);
# 725 "./subversion/include/svn_auth.h"
void
svn_auth_get_username_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_username_prompt_func_t prompt_func,
  void *prompt_baton,
  int retry_limit,
  apr_pool_t *pool);
# 765 "./subversion/include/svn_auth.h"
void
svn_auth_get_simple_provider2(
  svn_auth_provider_object_t **provider,
  svn_auth_plaintext_prompt_func_t plaintext_prompt_func,
  void *prompt_baton,
  apr_pool_t *pool);
# 779 "./subversion/include/svn_auth.h"
__attribute__((deprecated))
void
svn_auth_get_simple_provider(svn_auth_provider_object_t **provider,
                             apr_pool_t *pool);
# 803 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_get_platform_specific_provider(
  svn_auth_provider_object_t **provider,
  const char *provider_name,
  const char *provider_type,
  apr_pool_t *pool);
# 828 "./subversion/include/svn_auth.h"
svn_error_t *
svn_auth_get_platform_specific_client_providers(
  apr_array_header_t **providers,
  svn_config_t *config,
  apr_pool_t *pool);
# 947 "./subversion/include/svn_auth.h"
typedef svn_error_t *(*svn_auth_gnome_keyring_unlock_prompt_func_t)(
  char **keyring_password,
  const char *keyring_name,
  void *baton,
  apr_pool_t *pool);
# 971 "./subversion/include/svn_auth.h"
const svn_version_t *
svn_auth_gnome_keyring_version(void);
# 996 "./subversion/include/svn_auth.h"
void
svn_auth_get_gnome_keyring_simple_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1023 "./subversion/include/svn_auth.h"
void
svn_auth_get_gnome_keyring_ssl_client_cert_pw_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);







const svn_version_t *
svn_auth_kwallet_version(void);
# 1051 "./subversion/include/svn_auth.h"
void
svn_auth_get_kwallet_simple_provider(svn_auth_provider_object_t **provider,
                                     apr_pool_t *pool);
# 1069 "./subversion/include/svn_auth.h"
void
svn_auth_get_kwallet_ssl_client_cert_pw_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1091 "./subversion/include/svn_auth.h"
void
svn_auth_get_gpg_agent_simple_provider
    (svn_auth_provider_object_t **provider,
     apr_pool_t *pool);
# 1109 "./subversion/include/svn_auth.h"
void
svn_auth_get_username_provider(svn_auth_provider_object_t **provider,
                               apr_pool_t *pool);
# 1123 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_server_trust_file_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1137 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_file_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1165 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_pw_file_provider2(
  svn_auth_provider_object_t **provider,
  svn_auth_plaintext_passphrase_prompt_func_t plaintext_passphrase_prompt_func,
  void *prompt_baton,
  apr_pool_t *pool);
# 1180 "./subversion/include/svn_auth.h"
__attribute__((deprecated))
void
svn_auth_get_ssl_client_cert_pw_file_provider(
  svn_auth_provider_object_t **provider,
  apr_pool_t *pool);
# 1196 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_server_trust_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_ssl_server_trust_prompt_func_t prompt_func,
  void *prompt_baton,
  apr_pool_t *pool);
# 1215 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_ssl_client_cert_prompt_func_t prompt_func,
  void *prompt_baton,
  int retry_limit,
  apr_pool_t *pool);
# 1235 "./subversion/include/svn_auth.h"
void
svn_auth_get_ssl_client_cert_pw_prompt_provider(
  svn_auth_provider_object_t **provider,
  svn_auth_ssl_client_cert_pw_prompt_func_t prompt_func,
  void *prompt_baton,
  int retry_limit,
  apr_pool_t *pool);
# 41 "./subversion/include/svn_ra.h" 2
# 1 "./subversion/include/svn_mergeinfo.h" 1
# 142 "./subversion/include/svn_mergeinfo.h"
typedef apr_array_header_t svn_rangelist_t;
typedef apr_hash_t *svn_mergeinfo_t;
typedef apr_hash_t *svn_mergeinfo_catalog_t;
# 165 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_parse(svn_mergeinfo_t *mergeinfo, const char *input,
                    apr_pool_t *pool);
# 192 "./subversion/include/svn_mergeinfo.h"
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
# 228 "./subversion/include/svn_mergeinfo.h"
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
# 253 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_catalog_merge(svn_mergeinfo_catalog_t mergeinfo_catalog,
                            svn_mergeinfo_catalog_t changes_catalog,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_mergeinfo_remove(svn_mergeinfo_t *mergeinfo, svn_mergeinfo_t eraser,
                     svn_mergeinfo_t whiteboard, apr_pool_t *pool);
# 279 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_remove2(svn_mergeinfo_t *mergeinfo,
                      svn_mergeinfo_t eraser,
                      svn_mergeinfo_t whiteboard,
                      svn_boolean_t consider_inheritance,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 298 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_diff(svn_rangelist_t **deleted, svn_rangelist_t **added,
                   const svn_rangelist_t *from, const svn_rangelist_t *to,
                   svn_boolean_t consider_inheritance,
                   apr_pool_t *pool);
# 325 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_merge2(svn_rangelist_t *rangelist,
                     const svn_rangelist_t *changes,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);
# 343 "./subversion/include/svn_mergeinfo.h"
__attribute__((deprecated))
svn_error_t *
svn_rangelist_merge(svn_rangelist_t **rangelist,
                    const svn_rangelist_t *changes,
                    apr_pool_t *pool);
# 362 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_remove(svn_rangelist_t **output, const svn_rangelist_t *eraser,
                     const svn_rangelist_t *whiteboard,
                     svn_boolean_t consider_inheritance,
                     apr_pool_t *pool);
# 379 "./subversion/include/svn_mergeinfo.h"
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
# 416 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_intersect(svn_rangelist_t **rangelist,
                        const svn_rangelist_t *rangelist1,
                        const svn_rangelist_t *rangelist2,
                        svn_boolean_t consider_inheritance,
                        apr_pool_t *pool);
# 433 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_rangelist_reverse(svn_rangelist_t *rangelist, apr_pool_t *pool);







svn_error_t *
svn_rangelist_to_string(svn_string_t **output,
                        const svn_rangelist_t *rangelist,
                        apr_pool_t *pool);
# 458 "./subversion/include/svn_mergeinfo.h"
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
# 494 "./subversion/include/svn_mergeinfo.h"
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
# 527 "./subversion/include/svn_mergeinfo.h"
svn_error_t *
svn_mergeinfo_to_string(svn_string_t **output,
                        svn_mergeinfo_t mergeinput,
                        apr_pool_t *pool);
# 540 "./subversion/include/svn_mergeinfo.h"
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
# 594 "./subversion/include/svn_mergeinfo.h"
const char *
svn_inheritance_to_word(svn_mergeinfo_inheritance_t inherit);
# 604 "./subversion/include/svn_mergeinfo.h"
svn_mergeinfo_inheritance_t
svn_inheritance_from_word(const char *word);
# 42 "./subversion/include/svn_ra.h" 2
# 56 "./subversion/include/svn_ra.h"
const svn_version_t *
svn_ra_version(void);
# 73 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_get_wc_prop_func_t)(void *baton,
                                                  const char *path,
                                                  const char *name,
                                                  const svn_string_t **value,
                                                  apr_pool_t *pool);







typedef svn_error_t *(*svn_ra_set_wc_prop_func_t)(void *baton,
                                                  const char *path,
                                                  const char *name,
                                                  const svn_string_t *value,
                                                  apr_pool_t *pool);
# 105 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_push_wc_prop_func_t)(void *baton,
                                                   const char *path,
                                                   const char *name,
                                                   const svn_string_t *value,
                                                   apr_pool_t *pool);
# 118 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_invalidate_wc_props_func_t)(void *baton,
                                                          const char *path,
                                                          const char *name,
                                                          apr_pool_t *pool);
# 130 "./subversion/include/svn_ra.h"
typedef svn_error_t *
(*svn_ra_get_wc_contents_func_t)(void *baton,
                                 svn_stream_t **contents,
                                 const svn_checksum_t *checksum,
                                 apr_pool_t *pool);



typedef svn_error_t *(*svn_ra_get_latest_revnum_func_t)(
  void *session_baton,
  svn_revnum_t *latest_revnum);
# 149 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_get_client_string_func_t)(void *baton,
                                                        const char **name,
                                                        apr_pool_t *pool);
# 171 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_file_rev_handler_t)(
  void *baton,
  const char *path,
  svn_revnum_t rev,
  apr_hash_t *rev_props,
  svn_txdelta_window_handler_t *delta_handler,
  void **delta_baton,
  apr_array_header_t *prop_diffs,
  apr_pool_t *pool);
# 200 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_lock_callback_t)(void *baton,
                                               const char *path,
                                               svn_boolean_t do_lock,
                                               const svn_lock_t *lock,
                                               svn_error_t *ra_err,
                                               apr_pool_t *pool);
# 216 "./subversion/include/svn_ra.h"
typedef void (*svn_ra_progress_notify_func_t)(apr_off_t progress,
                                              apr_off_t total,
                                              void *baton,
                                              apr_pool_t *pool);
# 238 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_replay_revstart_callback_t)(
  svn_revnum_t revision,
  void *replay_baton,
  const svn_delta_editor_t **editor,
  void **edit_baton,
  apr_hash_t *rev_props,
  apr_pool_t *pool);
# 262 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_replay_revfinish_callback_t)(
  svn_revnum_t revision,
  void *replay_baton,
  const svn_delta_editor_t *editor,
  void *edit_baton,
  apr_hash_t *rev_props,
  apr_pool_t *pool);
# 295 "./subversion/include/svn_ra.h"
typedef struct svn_ra_reporter3_t
{
# 317 "./subversion/include/svn_ra.h"
  svn_error_t *(*set_path)(void *report_baton,
                           const char *path,
                           svn_revnum_t revision,
                           svn_depth_t depth,
                           svn_boolean_t start_empty,
                           const char *lock_token,
                           apr_pool_t *pool);
# 332 "./subversion/include/svn_ra.h"
  svn_error_t *(*delete_path)(void *report_baton,
                              const char *path,
                              apr_pool_t *pool);
# 352 "./subversion/include/svn_ra.h"
  svn_error_t *(*link_path)(void *report_baton,
                            const char *path,
                            const char *url,
                            svn_revnum_t revision,
                            svn_depth_t depth,
                            svn_boolean_t start_empty,
                            const char *lock_token,
                            apr_pool_t *pool);







  svn_error_t *(*finish_report)(void *report_baton,
                                apr_pool_t *pool);





  svn_error_t *(*abort_report)(void *report_baton,
                               apr_pool_t *pool);

} svn_ra_reporter3_t;






typedef struct svn_ra_reporter2_t
{


  svn_error_t *(*set_path)(void *report_baton,
                           const char *path,
                           svn_revnum_t revision,
                           svn_boolean_t start_empty,
                           const char *lock_token,
                           apr_pool_t *pool);


  svn_error_t *(*delete_path)(void *report_baton,
                              const char *path,
                              apr_pool_t *pool);



  svn_error_t *(*link_path)(void *report_baton,
                            const char *path,
                            const char *url,
                            svn_revnum_t revision,
                            svn_boolean_t start_empty,
                            const char *lock_token,
                            apr_pool_t *pool);


  svn_error_t *(*finish_report)(void *report_baton,
                                apr_pool_t *pool);


  svn_error_t *(*abort_report)(void *report_baton,
                               apr_pool_t *pool);

} svn_ra_reporter2_t;






typedef struct svn_ra_reporter_t
{


  svn_error_t *(*set_path)(void *report_baton,
                           const char *path,
                           svn_revnum_t revision,
                           svn_boolean_t start_empty,
                           apr_pool_t *pool);


  svn_error_t *(*delete_path)(void *report_baton,
                              const char *path,
                              apr_pool_t *pool);



  svn_error_t *(*link_path)(void *report_baton,
                            const char *path,
                            const char *url,
                            svn_revnum_t revision,
                            svn_boolean_t start_empty,
                            apr_pool_t *pool);


  svn_error_t *(*finish_report)(void *report_baton,
                                apr_pool_t *pool);


  svn_error_t *(*abort_report)(void *report_baton,
                               apr_pool_t *pool);
} svn_ra_reporter_t;
# 472 "./subversion/include/svn_ra.h"
typedef struct svn_ra_callbacks2_t
{





  svn_error_t *(*open_tmp_file)(apr_file_t **fp,
                                void *callback_baton,
                                apr_pool_t *pool);




  svn_auth_baton_t *auth_baton;
# 501 "./subversion/include/svn_ra.h"
  svn_ra_get_wc_prop_func_t get_wc_prop;


  svn_ra_set_wc_prop_func_t set_wc_prop;


  svn_ra_push_wc_prop_func_t push_wc_prop;


  svn_ra_invalidate_wc_props_func_t invalidate_wc_props;




  svn_ra_progress_notify_func_t progress_func;


  void *progress_baton;







  svn_cancel_func_t cancel_func;




  svn_ra_get_client_string_func_t get_client_string;




  svn_ra_get_wc_contents_func_t get_wc_contents;

} svn_ra_callbacks2_t;






typedef struct svn_ra_callbacks_t
{
  svn_error_t *(*open_tmp_file)(apr_file_t **fp,
                                void *callback_baton,
                                apr_pool_t *pool);

  svn_auth_baton_t *auth_baton;

  svn_ra_get_wc_prop_func_t get_wc_prop;

  svn_ra_set_wc_prop_func_t set_wc_prop;

  svn_ra_push_wc_prop_func_t push_wc_prop;

  svn_ra_invalidate_wc_props_func_t invalidate_wc_props;

} svn_ra_callbacks_t;
# 578 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_initialize(apr_pool_t *pool);
# 589 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_create_callbacks(svn_ra_callbacks2_t **callbacks,
                        apr_pool_t *pool);







typedef struct svn_ra_session_t svn_ra_session_t;
# 647 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_open4(svn_ra_session_t **session_p,
             const char **corrected_url,
             const char *repos_URL,
             const char *uuid,
             const svn_ra_callbacks2_t *callbacks,
             void *callback_baton,
             apr_hash_t *config,
             apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_ra_open3(svn_ra_session_t **session_p,
             const char *repos_URL,
             const char *uuid,
             const svn_ra_callbacks2_t *callbacks,
             void *callback_baton,
             apr_hash_t *config,
             apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_ra_open2(svn_ra_session_t **session_p,
             const char *repos_URL,
             const svn_ra_callbacks2_t *callbacks,
             void *callback_baton,
             apr_hash_t *config,
             apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_ra_open(svn_ra_session_t **session_p,
            const char *repos_URL,
            const svn_ra_callbacks_t *callbacks,
            void *callback_baton,
            apr_hash_t *config,
            apr_pool_t *pool);
# 711 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_reparent(svn_ra_session_t *ra_session,
                const char *url,
                apr_pool_t *pool);






svn_error_t *
svn_ra_get_session_url(svn_ra_session_t *ra_session,
                       const char **url,
                       apr_pool_t *pool);
# 736 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_path_relative_to_session(svn_ra_session_t *ra_session,
                                    const char **rel_path,
                                    const char *url,
                                    apr_pool_t *pool);
# 752 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_path_relative_to_root(svn_ra_session_t *ra_session,
                                 const char **rel_path,
                                 const char *url,
                                 apr_pool_t *pool);
# 765 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_latest_revnum(svn_ra_session_t *session,
                         svn_revnum_t *latest_revnum,
                         apr_pool_t *pool);
# 778 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_dated_revision(svn_ra_session_t *session,
                          svn_revnum_t *revision,
                          apr_time_t tm,
                          apr_pool_t *pool);
# 808 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_change_rev_prop2(svn_ra_session_t *session,
                        svn_revnum_t rev,
                        const char *name,
                        const svn_string_t *const *old_value_p,
                        const svn_string_t *value,
                        apr_pool_t *pool);
# 823 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_change_rev_prop(svn_ra_session_t *session,
                       svn_revnum_t rev,
                       const char *name,
                       const svn_string_t *value,
                       apr_pool_t *pool);
# 840 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_rev_proplist(svn_ra_session_t *session,
                    svn_revnum_t rev,
                    apr_hash_t **props,
                    apr_pool_t *pool);
# 855 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_rev_prop(svn_ra_session_t *session,
                svn_revnum_t rev,
                const char *name,
                svn_string_t **value,
                apr_pool_t *pool);
# 903 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_commit_editor3(svn_ra_session_t *session,
                          const svn_delta_editor_t **editor,
                          void **edit_baton,
                          apr_hash_t *revprop_table,
                          svn_commit_callback2_t commit_callback,
                          void *commit_baton,
                          apr_hash_t *lock_tokens,
                          svn_boolean_t keep_locks,
                          apr_pool_t *pool);
# 923 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_commit_editor2(svn_ra_session_t *session,
                          const svn_delta_editor_t **editor,
                          void **edit_baton,
                          const char *log_msg,
                          svn_commit_callback2_t commit_callback,
                          void *commit_baton,
                          apr_hash_t *lock_tokens,
                          svn_boolean_t keep_locks,
                          apr_pool_t *pool);
# 942 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_commit_editor(svn_ra_session_t *session,
                         const svn_delta_editor_t **editor,
                         void **edit_baton,
                         const char *log_msg,
                         svn_commit_callback_t callback,
                         void *callback_baton,
                         apr_hash_t *lock_tokens,
                         svn_boolean_t keep_locks,
                         apr_pool_t *pool);
# 979 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_file(svn_ra_session_t *session,
                const char *path,
                svn_revnum_t revision,
                svn_stream_t *stream,
                svn_revnum_t *fetched_rev,
                apr_hash_t **props,
                apr_pool_t *pool);
# 1015 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_dir2(svn_ra_session_t *session,
                apr_hash_t **dirents,
                svn_revnum_t *fetched_rev,
                apr_hash_t **props,
                const char *path,
                svn_revnum_t revision,
                apr_uint32_t dirent_fields,
                apr_pool_t *pool);
# 1033 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_dir(svn_ra_session_t *session,
               const char *path,
               svn_revnum_t revision,
               apr_hash_t **dirents,
               svn_revnum_t *fetched_rev,
               apr_hash_t **props,
               apr_pool_t *pool);
# 1071 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_mergeinfo(svn_ra_session_t *session,
                     svn_mergeinfo_catalog_t *catalog,
                     const apr_array_header_t *paths,
                     svn_revnum_t revision,
                     svn_mergeinfo_inheritance_t inherit,
                     svn_boolean_t include_descendants,
                     apr_pool_t *pool);
# 1125 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_do_update2(svn_ra_session_t *session,
                  const svn_ra_reporter3_t **reporter,
                  void **report_baton,
                  svn_revnum_t revision_to_update_to,
                  const char *update_target,
                  svn_depth_t depth,
                  svn_boolean_t send_copyfrom_args,
                  const svn_delta_editor_t *update_editor,
                  void *update_baton,
                  apr_pool_t *pool);
# 1145 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_do_update(svn_ra_session_t *session,
                 const svn_ra_reporter2_t **reporter,
                 void **report_baton,
                 svn_revnum_t revision_to_update_to,
                 const char *update_target,
                 svn_boolean_t recurse,
                 const svn_delta_editor_t *update_editor,
                 void *update_baton,
                 apr_pool_t *pool);
# 1200 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_do_switch2(svn_ra_session_t *session,
                  const svn_ra_reporter3_t **reporter,
                  void **report_baton,
                  svn_revnum_t revision_to_switch_to,
                  const char *switch_target,
                  svn_depth_t depth,
                  const char *switch_url,
                  const svn_delta_editor_t *switch_editor,
                  void *switch_baton,
                  apr_pool_t *pool);
# 1221 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_do_switch(svn_ra_session_t *session,
                 const svn_ra_reporter2_t **reporter,
                 void **report_baton,
                 svn_revnum_t revision_to_switch_to,
                 const char *switch_target,
                 svn_boolean_t recurse,
                 const char *switch_url,
                 const svn_delta_editor_t *switch_editor,
                 void *switch_baton,
                 apr_pool_t *pool);
# 1275 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_do_status2(svn_ra_session_t *session,
                  const svn_ra_reporter3_t **reporter,
                  void **report_baton,
                  const char *status_target,
                  svn_revnum_t revision,
                  svn_depth_t depth,
                  const svn_delta_editor_t *status_editor,
                  void *status_baton,
                  apr_pool_t *pool);
# 1296 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_do_status(svn_ra_session_t *session,
                 const svn_ra_reporter2_t **reporter,
                 void **report_baton,
                 const char *status_target,
                 svn_revnum_t revision,
                 svn_boolean_t recurse,
                 const svn_delta_editor_t *status_editor,
                 void *status_baton,
                 apr_pool_t *pool);
# 1365 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_do_diff3(svn_ra_session_t *session,
                const svn_ra_reporter3_t **reporter,
                void **report_baton,
                svn_revnum_t revision,
                const char *diff_target,
                svn_depth_t depth,
                svn_boolean_t ignore_ancestry,
                svn_boolean_t text_deltas,
                const char *versus_url,
                const svn_delta_editor_t *diff_editor,
                void *diff_baton,
                apr_pool_t *pool);
# 1388 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_do_diff2(svn_ra_session_t *session,
                const svn_ra_reporter2_t **reporter,
                void **report_baton,
                svn_revnum_t revision,
                const char *diff_target,
                svn_boolean_t recurse,
                svn_boolean_t ignore_ancestry,
                svn_boolean_t text_deltas,
                const char *versus_url,
                const svn_delta_editor_t *diff_editor,
                void *diff_baton,
                apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_ra_do_diff(svn_ra_session_t *session,
               const svn_ra_reporter2_t **reporter,
               void **report_baton,
               svn_revnum_t revision,
               const char *diff_target,
               svn_boolean_t recurse,
               svn_boolean_t ignore_ancestry,
               const char *versus_url,
               const svn_delta_editor_t *diff_editor,
               void *diff_baton,
               apr_pool_t *pool);
# 1482 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_log2(svn_ra_session_t *session,
                const apr_array_header_t *paths,
                svn_revnum_t start,
                svn_revnum_t end,
                int limit,
                svn_boolean_t discover_changed_paths,
                svn_boolean_t strict_node_history,
                svn_boolean_t include_merged_revisions,
                const apr_array_header_t *revprops,
                svn_log_entry_receiver_t receiver,
                void *receiver_baton,
                apr_pool_t *pool);
# 1505 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_log(svn_ra_session_t *session,
               const apr_array_header_t *paths,
               svn_revnum_t start,
               svn_revnum_t end,
               int limit,
               svn_boolean_t discover_changed_paths,
               svn_boolean_t strict_node_history,
               svn_log_message_receiver_t receiver,
               void *receiver_baton,
               apr_pool_t *pool);
# 1527 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_check_path(svn_ra_session_t *session,
                  const char *path,
                  svn_revnum_t revision,
                  svn_node_kind_t *kind,
                  apr_pool_t *pool);
# 1543 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_stat(svn_ra_session_t *session,
            const char *path,
            svn_revnum_t revision,
            svn_dirent_t **dirent,
            apr_pool_t *pool);







svn_error_t *
svn_ra_get_uuid2(svn_ra_session_t *session,
                 const char **uuid,
                 apr_pool_t *pool);
# 1568 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_uuid(svn_ra_session_t *session,
                const char **uuid,
                apr_pool_t *pool);
# 1581 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_repos_root2(svn_ra_session_t *session,
                       const char **url,
                       apr_pool_t *pool);
# 1594 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_repos_root(svn_ra_session_t *session,
                      const char **url,
                      apr_pool_t *pool);
# 1613 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_locations(svn_ra_session_t *session,
                     apr_hash_t **locations,
                     const char *path,
                     svn_revnum_t peg_revision,
                     const apr_array_header_t *location_revisions,
                     apr_pool_t *pool);
# 1641 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_location_segments(svn_ra_session_t *session,
                             const char *path,
                             svn_revnum_t peg_revision,
                             svn_revnum_t start_rev,
                             svn_revnum_t end_rev,
                             svn_location_segment_receiver_t receiver,
                             void *receiver_baton,
                             apr_pool_t *pool);
# 1680 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_file_revs2(svn_ra_session_t *session,
                      const char *path,
                      svn_revnum_t start,
                      svn_revnum_t end,
                      svn_boolean_t include_merged_revisions,
                      svn_file_rev_handler_t handler,
                      void *handler_baton,
                      apr_pool_t *pool);
# 1697 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_file_revs(svn_ra_session_t *session,
                     const char *path,
                     svn_revnum_t start,
                     svn_revnum_t end,
                     svn_ra_file_rev_handler_t handler,
                     void *handler_baton,
                     apr_pool_t *pool);
# 1739 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_lock(svn_ra_session_t *session,
            apr_hash_t *path_revs,
            const char *comment,
            svn_boolean_t steal_lock,
            svn_ra_lock_callback_t lock_func,
            void *lock_baton,
            apr_pool_t *pool);
# 1771 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_unlock(svn_ra_session_t *session,
              apr_hash_t *path_tokens,
              svn_boolean_t break_lock,
              svn_ra_lock_callback_t lock_func,
              void *lock_baton,
              apr_pool_t *pool);
# 1786 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_lock(svn_ra_session_t *session,
                svn_lock_t **lock,
                const char *path,
                apr_pool_t *pool);
# 1814 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_locks2(svn_ra_session_t *session,
                  apr_hash_t **locks,
                  const char *path,
                  svn_depth_t depth,
                  apr_pool_t *pool);
# 1828 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_locks(svn_ra_session_t *session,
                 apr_hash_t **locks,
                 const char *path,
                 apr_pool_t *pool);
# 1862 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_replay_range(svn_ra_session_t *session,
                    svn_revnum_t start_revision,
                    svn_revnum_t end_revision,
                    svn_revnum_t low_water_mark,
                    svn_boolean_t send_deltas,
                    svn_ra_replay_revstart_callback_t revstart_func,
                    svn_ra_replay_revfinish_callback_t revfinish_func,
                    void *replay_baton,
                    apr_pool_t *pool);
# 1892 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_replay(svn_ra_session_t *session,
              svn_revnum_t revision,
              svn_revnum_t low_water_mark,
              svn_boolean_t send_deltas,
              const svn_delta_editor_t *editor,
              void *edit_baton,
              apr_pool_t *pool);
# 1916 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_deleted_rev(svn_ra_session_t *session,
                       const char *path,
                       svn_revnum_t peg_revision,
                       svn_revnum_t end_revision,
                       svn_revnum_t *revision_deleted,
                       apr_pool_t *pool);
# 1943 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_get_inherited_props(svn_ra_session_t *session,
                           apr_array_header_t **inherited_props,
                           const char *path,
                           svn_revnum_t revision,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 1969 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_has_capability(svn_ra_session_t *session,
                      svn_boolean_t *has,
                      const char *capability,
                      apr_pool_t *pool);
# 2059 "./subversion/include/svn_ra.h"
svn_error_t *
svn_ra_print_modules(svn_stringbuf_t *output,
                     apr_pool_t *pool);
# 2070 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_print_ra_libraries(svn_stringbuf_t **descriptions,
                          void *ra_baton,
                          apr_pool_t *pool);
# 2084 "./subversion/include/svn_ra.h"
typedef struct svn_ra_plugin_t
{

  const char *name;


  const char *description;






  svn_error_t *(*open)(void **session_baton,
                       const char *repos_URL,
                       const svn_ra_callbacks_t *callbacks,
                       void *callback_baton,
                       apr_hash_t *config,
                       apr_pool_t *pool);




  svn_error_t *(*get_latest_revnum)(void *session_baton,
                                    svn_revnum_t *latest_revnum,
                                    apr_pool_t *pool);




  svn_error_t *(*get_dated_revision)(void *session_baton,
                                     svn_revnum_t *revision,
                                     apr_time_t tm,
                                     apr_pool_t *pool);




  svn_error_t *(*change_rev_prop)(void *session_baton,
                                  svn_revnum_t rev,
                                  const char *name,
                                  const svn_string_t *value,
                                  apr_pool_t *pool);




  svn_error_t *(*rev_proplist)(void *session_baton,
                               svn_revnum_t rev,
                               apr_hash_t **props,
                               apr_pool_t *pool);




  svn_error_t *(*rev_prop)(void *session_baton,
                           svn_revnum_t rev,
                           const char *name,
                           svn_string_t **value,
                           apr_pool_t *pool);





  svn_error_t *(*get_commit_editor)(void *session_baton,
                                    const svn_delta_editor_t **editor,
                                    void **edit_baton,
                                    const char *log_msg,
                                    svn_commit_callback_t callback,
                                    void *callback_baton,
                                    apr_pool_t *pool);




  svn_error_t *(*get_file)(void *session_baton,
                           const char *path,
                           svn_revnum_t revision,
                           svn_stream_t *stream,
                           svn_revnum_t *fetched_rev,
                           apr_hash_t **props,
                           apr_pool_t *pool);




  svn_error_t *(*get_dir)(void *session_baton,
                          const char *path,
                          svn_revnum_t revision,
                          apr_hash_t **dirents,
                          svn_revnum_t *fetched_rev,
                          apr_hash_t **props,
                          apr_pool_t *pool);




  svn_error_t *(*do_update)(void *session_baton,
                            const svn_ra_reporter_t **reporter,
                            void **report_baton,
                            svn_revnum_t revision_to_update_to,
                            const char *update_target,
                            svn_boolean_t recurse,
                            const svn_delta_editor_t *update_editor,
                            void *update_baton,
                            apr_pool_t *pool);




  svn_error_t *(*do_switch)(void *session_baton,
                            const svn_ra_reporter_t **reporter,
                            void **report_baton,
                            svn_revnum_t revision_to_switch_to,
                            const char *switch_target,
                            svn_boolean_t recurse,
                            const char *switch_url,
                            const svn_delta_editor_t *switch_editor,
                            void *switch_baton,
                            apr_pool_t *pool);




  svn_error_t *(*do_status)(void *session_baton,
                            const svn_ra_reporter_t **reporter,
                            void **report_baton,
                            const char *status_target,
                            svn_revnum_t revision,
                            svn_boolean_t recurse,
                            const svn_delta_editor_t *status_editor,
                            void *status_baton,
                            apr_pool_t *pool);




  svn_error_t *(*do_diff)(void *session_baton,
                          const svn_ra_reporter_t **reporter,
                          void **report_baton,
                          svn_revnum_t revision,
                          const char *diff_target,
                          svn_boolean_t recurse,
                          svn_boolean_t ignore_ancestry,
                          const char *versus_url,
                          const svn_delta_editor_t *diff_editor,
                          void *diff_baton,
                          apr_pool_t *pool);




  svn_error_t *(*get_log)(void *session_baton,
                          const apr_array_header_t *paths,
                          svn_revnum_t start,
                          svn_revnum_t end,
                          svn_boolean_t discover_changed_paths,
                          svn_boolean_t strict_node_history,
                          svn_log_message_receiver_t receiver,
                          void *receiver_baton,
                          apr_pool_t *pool);




  svn_error_t *(*check_path)(void *session_baton,
                             const char *path,
                             svn_revnum_t revision,
                             svn_node_kind_t *kind,
                             apr_pool_t *pool);




  svn_error_t *(*get_uuid)(void *session_baton,
                           const char **uuid,
                           apr_pool_t *pool);




  svn_error_t *(*get_repos_root)(void *session_baton,
                                 const char **url,
                                 apr_pool_t *pool);







  svn_error_t *(*get_locations)(void *session_baton,
                                apr_hash_t **locations,
                                const char *path,
                                svn_revnum_t peg_revision,
                                apr_array_header_t *location_revisions,
                                apr_pool_t *pool);







  svn_error_t *(*get_file_revs)(void *session_baton,
                                const char *path,
                                svn_revnum_t start,
                                svn_revnum_t end,
                                svn_ra_file_rev_handler_t handler,
                                void *handler_baton,
                                apr_pool_t *pool);






  const svn_version_t *(*get_version)(void);


} svn_ra_plugin_t;
# 2324 "./subversion/include/svn_ra.h"
typedef svn_error_t *(*svn_ra_init_func_t)(int abi_version,
                                           apr_pool_t *pool,
                                           apr_hash_t *hash);
# 2360 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_dav_init(int abi_version,
                apr_pool_t *pool,
                apr_hash_t *hash);




__attribute__((deprecated))
svn_error_t *
svn_ra_local_init(int abi_version,
                  apr_pool_t *pool,
                  apr_hash_t *hash);




__attribute__((deprecated))
svn_error_t *
svn_ra_svn_init(int abi_version,
                apr_pool_t *pool,
                apr_hash_t *hash);





__attribute__((deprecated))
svn_error_t *
svn_ra_serf_init(int abi_version,
                 apr_pool_t *pool,
                 apr_hash_t *hash);
# 2401 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_init_ra_libs(void **ra_baton,
                    apr_pool_t *pool);
# 2414 "./subversion/include/svn_ra.h"
__attribute__((deprecated))
svn_error_t *
svn_ra_get_ra_library(svn_ra_plugin_t **library,
                      void *ra_baton,
                      const char *url,
                      apr_pool_t *pool);
# 87 "./subversion/include/svn_wc.h" 2
# 98 "./subversion/include/svn_wc.h"
const svn_version_t *
svn_wc_version(void);
# 179 "./subversion/include/svn_wc.h"
typedef struct svn_wc_context_t svn_wc_context_t;
# 200 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_context_create(svn_wc_context_t **wc_ctx,
                      const svn_config_t *config,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);







svn_error_t *
svn_wc_context_destroy(svn_wc_context_t *wc_ctx);
# 237 "./subversion/include/svn_wc.h"
typedef struct svn_wc_adm_access_t svn_wc_adm_access_t;
# 284 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_open3(svn_wc_adm_access_t **adm_access,
                 svn_wc_adm_access_t *associated,
                 const char *path,
                 svn_boolean_t write_lock,
                 int levels_to_lock,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_adm_open2(svn_wc_adm_access_t **adm_access,
                 svn_wc_adm_access_t *associated,
                 const char *path,
                 svn_boolean_t write_lock,
                 int levels_to_lock,
                 apr_pool_t *pool);
# 316 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_open(svn_wc_adm_access_t **adm_access,
                svn_wc_adm_access_t *associated,
                const char *path,
                svn_boolean_t write_lock,
                svn_boolean_t tree_lock,
                apr_pool_t *pool);
# 341 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_open3(svn_wc_adm_access_t **adm_access,
                       svn_wc_adm_access_t *associated,
                       const char *path,
                       svn_boolean_t write_lock,
                       int levels_to_lock,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_open2(svn_wc_adm_access_t **adm_access,
                       svn_wc_adm_access_t *associated,
                       const char *path,
                       svn_boolean_t write_lock,
                       int levels_to_lock,
                       apr_pool_t *pool);
# 374 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_open(svn_wc_adm_access_t **adm_access,
                      svn_wc_adm_access_t *associated,
                      const char *path,
                      svn_boolean_t write_lock,
                      svn_boolean_t tree_lock,
                      apr_pool_t *pool);
# 407 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_open_anchor(svn_wc_adm_access_t **anchor_access,
                       svn_wc_adm_access_t **target_access,
                       const char **target,
                       const char *path,
                       svn_boolean_t write_lock,
                       int levels_to_lock,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *pool);
# 430 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_retrieve(svn_wc_adm_access_t **adm_access,
                    svn_wc_adm_access_t *associated,
                    const char *path,
                    apr_pool_t *pool);
# 446 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_retrieve(svn_wc_adm_access_t **adm_access,
                          svn_wc_adm_access_t *associated,
                          const char *path,
                          apr_pool_t *pool);
# 478 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_try3(svn_wc_adm_access_t **adm_access,
                      svn_wc_adm_access_t *associated,
                      const char *path,
                      svn_boolean_t write_lock,
                      int levels_to_lock,
                      svn_cancel_func_t cancel_func,
                      void *cancel_baton,
                      apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_try2(svn_wc_adm_access_t **adm_access,
                      svn_wc_adm_access_t *associated,
                      const char *path,
                      svn_boolean_t write_lock,
                      int levels_to_lock,
                      apr_pool_t *pool);
# 511 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_probe_try(svn_wc_adm_access_t **adm_access,
                     svn_wc_adm_access_t *associated,
                     const char *path,
                     svn_boolean_t write_lock,
                     svn_boolean_t tree_lock,
                     apr_pool_t *pool);
# 532 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_adm_close2(svn_wc_adm_access_t *adm_access,
                  apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_adm_close(svn_wc_adm_access_t *adm_access);





__attribute__((deprecated))
const char *
svn_wc_adm_access_path(const svn_wc_adm_access_t *adm_access);





__attribute__((deprecated))
apr_pool_t *
svn_wc_adm_access_pool(const svn_wc_adm_access_t *adm_access);
# 570 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_boolean_t
svn_wc_adm_locked(const svn_wc_adm_access_t *adm_access);
# 589 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_locked2(svn_boolean_t *locked_here,
               svn_boolean_t *locked,
               svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_locked(svn_boolean_t *locked,
              const char *path,
              apr_pool_t *pool);
# 638 "./subversion/include/svn_wc.h"
svn_boolean_t
svn_wc_is_adm_dir(const char *name, apr_pool_t *pool);
# 651 "./subversion/include/svn_wc.h"
const char *
svn_wc_get_adm_dir(apr_pool_t *pool);
# 668 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_set_adm_dir(const char *name,
                   apr_pool_t *pool);
# 688 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_external_update_t)(void *baton,
                                                 const char *local_abspath,
                                                 const svn_string_t *old_val,
                                                 const svn_string_t *new_val,
                                                 svn_depth_t depth,
                                                 apr_pool_t *scratch_pool);
# 707 "./subversion/include/svn_wc.h"
typedef struct svn_wc_traversal_info_t svn_wc_traversal_info_t;
# 716 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_wc_traversal_info_t *
svn_wc_init_traversal_info(apr_pool_t *pool);
# 743 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
void
svn_wc_edited_externals(apr_hash_t **externals_old,
                        apr_hash_t **externals_new,
                        svn_wc_traversal_info_t *traversal_info);
# 773 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
void
svn_wc_traversed_depths(apr_hash_t **depths,
                        svn_wc_traversal_info_t *traversal_info);
# 789 "./subversion/include/svn_wc.h"
typedef struct svn_wc_external_item2_t
{





  const char *target_dir;



  const char *url;




  svn_opt_revision_t revision;




  svn_opt_revision_t peg_revision;

} svn_wc_external_item2_t;
# 828 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_external_item2_create(svn_wc_external_item2_t **item,
                             apr_pool_t *pool);
# 839 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_external_item_create(const svn_wc_external_item2_t **item,
                            apr_pool_t *pool);







svn_wc_external_item2_t *
svn_wc_external_item2_dup(const svn_wc_external_item2_t *item,
                          apr_pool_t *pool);
# 861 "./subversion/include/svn_wc.h"
typedef struct svn_wc_external_item_t
{

  const char *target_dir;


  const char *url;


  svn_opt_revision_t revision;

} svn_wc_external_item_t;
# 882 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_wc_external_item_t *
svn_wc_external_item_dup(const svn_wc_external_item_t *item,
                         apr_pool_t *pool);
# 914 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_parse_externals_description3(apr_array_header_t **externals_p,
                                    const char *parent_directory,
                                    const char *desc,
                                    svn_boolean_t canonicalize_url,
                                    apr_pool_t *pool);
# 931 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_parse_externals_description2(apr_array_header_t **externals_p,
                                    const char *parent_directory,
                                    const char *desc,
                                    apr_pool_t *pool);
# 946 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_parse_externals_description(apr_hash_t **externals_p,
                                   const char *parent_directory,
                                   const char *desc,
                                   apr_pool_t *pool);
# 979 "./subversion/include/svn_wc.h"
typedef enum svn_wc_notify_action_t
{

  svn_wc_notify_add = 0,


  svn_wc_notify_copy,


  svn_wc_notify_delete,


  svn_wc_notify_restore,


  svn_wc_notify_revert,


  svn_wc_notify_failed_revert,


  svn_wc_notify_resolved,


  svn_wc_notify_skip,


  svn_wc_notify_update_delete,


  svn_wc_notify_update_add,


  svn_wc_notify_update_update,


  svn_wc_notify_update_completed,


  svn_wc_notify_update_external,


  svn_wc_notify_status_completed,


  svn_wc_notify_status_external,


  svn_wc_notify_commit_modified,


  svn_wc_notify_commit_added,


  svn_wc_notify_commit_deleted,


  svn_wc_notify_commit_replaced,


  svn_wc_notify_commit_postfix_txdelta,


  svn_wc_notify_blame_revision,


  svn_wc_notify_locked,


  svn_wc_notify_unlocked,


  svn_wc_notify_failed_lock,


  svn_wc_notify_failed_unlock,


  svn_wc_notify_exists,


  svn_wc_notify_changelist_set,


  svn_wc_notify_changelist_clear,




  svn_wc_notify_changelist_moved,



  svn_wc_notify_merge_begin,



  svn_wc_notify_foreign_merge_begin,


  svn_wc_notify_update_replace,


  svn_wc_notify_property_added,


  svn_wc_notify_property_modified,


  svn_wc_notify_property_deleted,


  svn_wc_notify_property_deleted_nonexistent,


  svn_wc_notify_revprop_set,


  svn_wc_notify_revprop_deleted,


  svn_wc_notify_merge_completed,




  svn_wc_notify_tree_conflict,



  svn_wc_notify_failed_external,


  svn_wc_notify_update_started,



  svn_wc_notify_update_skip_obstruction,




  svn_wc_notify_update_skip_working_only,



  svn_wc_notify_update_skip_access_denied,



  svn_wc_notify_update_external_removed,



  svn_wc_notify_update_shadowed_add,



  svn_wc_notify_update_shadowed_update,



  svn_wc_notify_update_shadowed_delete,


  svn_wc_notify_merge_record_info,



  svn_wc_notify_upgraded_path,



  svn_wc_notify_merge_record_info_begin,



  svn_wc_notify_merge_elide_info,



  svn_wc_notify_patch,



  svn_wc_notify_patch_applied_hunk,



  svn_wc_notify_patch_rejected_hunk,



  svn_wc_notify_patch_hunk_already_applied,




  svn_wc_notify_commit_copied,




  svn_wc_notify_commit_copied_replaced,




  svn_wc_notify_url_redirect,



  svn_wc_notify_path_nonexistent,



  svn_wc_notify_exclude,



  svn_wc_notify_failed_conflict,



  svn_wc_notify_failed_missing,



  svn_wc_notify_failed_out_of_date,



  svn_wc_notify_failed_no_parent,



  svn_wc_notify_failed_locked,



  svn_wc_notify_failed_forbidden_by_server,



  svn_wc_notify_skip_conflicted,



  svn_wc_notify_update_broken_lock,



  svn_wc_notify_failed_obstruction,





  svn_wc_notify_conflict_resolver_starting,





  svn_wc_notify_conflict_resolver_done,




  svn_wc_notify_left_local_modifications,



  svn_wc_notify_foreign_copy_begin

} svn_wc_notify_action_t;



typedef enum svn_wc_notify_state_t
{
  svn_wc_notify_state_inapplicable = 0,


  svn_wc_notify_state_unknown,


  svn_wc_notify_state_unchanged,


  svn_wc_notify_state_missing,


  svn_wc_notify_state_obstructed,


  svn_wc_notify_state_changed,


  svn_wc_notify_state_merged,


  svn_wc_notify_state_conflicted,


  svn_wc_notify_state_source_missing

} svn_wc_notify_state_t;






typedef enum svn_wc_notify_lock_state_t
{
  svn_wc_notify_lock_state_inapplicable = 0,

  svn_wc_notify_lock_state_unknown,


  svn_wc_notify_lock_state_unchanged,


  svn_wc_notify_lock_state_locked,


  svn_wc_notify_lock_state_unlocked

} svn_wc_notify_lock_state_t;
# 1336 "./subversion/include/svn_wc.h"
typedef struct svn_wc_notify_t {





  const char *path;


  svn_wc_notify_action_t action;


  svn_node_kind_t kind;



  const char *mime_type;




  const svn_lock_t *lock;





  svn_error_t *err;


  svn_wc_notify_state_t content_state;


  svn_wc_notify_state_t prop_state;


  svn_wc_notify_lock_state_t lock_state;
# 1381 "./subversion/include/svn_wc.h"
  svn_revnum_t revision;



  const char *changelist_name;






  svn_merge_range_t *merge_range;



  const char *url;





  const char *path_prefix;



  const char *prop_name;




  apr_hash_t *rev_props;





  svn_revnum_t old_revision;






  svn_linenum_t hunk_original_start;
  svn_linenum_t hunk_original_length;
  svn_linenum_t hunk_modified_start;
  svn_linenum_t hunk_modified_length;




  svn_linenum_t hunk_matched_line;



  svn_linenum_t hunk_fuzz;




} svn_wc_notify_t;
# 1454 "./subversion/include/svn_wc.h"
svn_wc_notify_t *
svn_wc_create_notify(const char *path,
                     svn_wc_notify_action_t action,
                     apr_pool_t *pool);
# 1470 "./subversion/include/svn_wc.h"
svn_wc_notify_t *
svn_wc_create_notify_url(const char *url,
                         svn_wc_notify_action_t action,
                         apr_pool_t *pool);






svn_wc_notify_t *
svn_wc_dup_notify(const svn_wc_notify_t *notify,
                  apr_pool_t *pool);
# 1499 "./subversion/include/svn_wc.h"
typedef void (*svn_wc_notify_func2_t)(void *baton,
                                      const svn_wc_notify_t *notify,
                                      apr_pool_t *pool);







typedef void (*svn_wc_notify_func_t)(void *baton,
                                     const char *path,
                                     svn_wc_notify_action_t action,
                                     svn_node_kind_t kind,
                                     const char *mime_type,
                                     svn_wc_notify_state_t content_state,
                                     svn_wc_notify_state_t prop_state,
                                     svn_revnum_t revision);
# 1569 "./subversion/include/svn_wc.h"
typedef enum svn_wc_conflict_action_t
{
  svn_wc_conflict_action_edit,
  svn_wc_conflict_action_add,
  svn_wc_conflict_action_delete,
  svn_wc_conflict_action_replace

} svn_wc_conflict_action_t;






typedef enum svn_wc_conflict_reason_t
{

  svn_wc_conflict_reason_edited,

  svn_wc_conflict_reason_obstructed,

  svn_wc_conflict_reason_deleted,

  svn_wc_conflict_reason_missing,

  svn_wc_conflict_reason_unversioned,

  svn_wc_conflict_reason_added,

  svn_wc_conflict_reason_replaced,

  svn_wc_conflict_reason_moved_away,

  svn_wc_conflict_reason_moved_here

} svn_wc_conflict_reason_t;







typedef enum svn_wc_conflict_kind_t
{

  svn_wc_conflict_kind_text,

  svn_wc_conflict_kind_property,

  svn_wc_conflict_kind_tree
} svn_wc_conflict_kind_t;






typedef enum svn_wc_operation_t
{
  svn_wc_operation_none = 0,
  svn_wc_operation_update,
  svn_wc_operation_switch,
  svn_wc_operation_merge

} svn_wc_operation_t;
# 1653 "./subversion/include/svn_wc.h"
typedef struct svn_wc_conflict_version_t
{




  const char *repos_url;


  svn_revnum_t peg_rev;



  const char *path_in_repos;



  svn_node_kind_t node_kind;



  const char *repos_uuid;






} svn_wc_conflict_version_t;
# 1698 "./subversion/include/svn_wc.h"
svn_wc_conflict_version_t *
svn_wc_conflict_version_create2(const char *repos_root_url,
                                const char *repos_uuid,
                                const char *repos_relpath,
                                svn_revnum_t revision,
                                svn_node_kind_t kind,
                                apr_pool_t *result_pool);







__attribute__((deprecated))
svn_wc_conflict_version_t *
svn_wc_conflict_version_create(const char *repos_url,
                               const char *path_in_repos,
                               svn_revnum_t peg_rev,
                               svn_node_kind_t node_kind,
                               apr_pool_t *pool);






svn_wc_conflict_version_t *
svn_wc_conflict_version_dup(const svn_wc_conflict_version_t *version,
                            apr_pool_t *pool);
# 1748 "./subversion/include/svn_wc.h"
typedef struct svn_wc_conflict_description2_t
{

  const char *local_abspath;



  svn_node_kind_t node_kind;


  svn_wc_conflict_kind_t kind;



  const char *property_name;



  svn_boolean_t is_binary;




  const char *mime_type;



  svn_wc_conflict_action_t action;




  svn_wc_conflict_reason_t reason;
# 1804 "./subversion/include/svn_wc.h"
  const char *base_abspath;




  const char *their_abspath;


  const char *my_abspath;


  const char *merged_file;




  svn_wc_operation_t operation;


  const svn_wc_conflict_version_t *src_left_version;


  const svn_wc_conflict_version_t *src_right_version;



} svn_wc_conflict_description2_t;
# 1839 "./subversion/include/svn_wc.h"
typedef struct svn_wc_conflict_description_t
{

  const char *path;



  svn_node_kind_t node_kind;


  svn_wc_conflict_kind_t kind;



  const char *property_name;



  svn_boolean_t is_binary;




  const char *mime_type;







  svn_wc_adm_access_t *access;



  svn_wc_conflict_action_t action;




  svn_wc_conflict_reason_t reason;
# 1896 "./subversion/include/svn_wc.h"
  const char *base_file;


  const char *their_file;


  const char *my_file;


  const char *merged_file;






  svn_wc_operation_t operation;



  svn_wc_conflict_version_t *src_left_version;



  svn_wc_conflict_version_t *src_right_version;

} svn_wc_conflict_description_t;
# 1939 "./subversion/include/svn_wc.h"
svn_wc_conflict_description2_t *
svn_wc_conflict_description_create_text2(const char *local_abspath,
                                         apr_pool_t *result_pool);
# 1950 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_wc_conflict_description_t *
svn_wc_conflict_description_create_text(const char *path,
                                        svn_wc_adm_access_t *adm_access,
                                        apr_pool_t *pool);
# 1970 "./subversion/include/svn_wc.h"
svn_wc_conflict_description2_t *
svn_wc_conflict_description_create_prop2(const char *local_abspath,
                                         svn_node_kind_t node_kind,
                                         const char *property_name,
                                         apr_pool_t *result_pool);







__attribute__((deprecated))
svn_wc_conflict_description_t *
svn_wc_conflict_description_create_prop(const char *path,
                                        svn_wc_adm_access_t *adm_access,
                                        svn_node_kind_t node_kind,
                                        const char *property_name,
                                        apr_pool_t *pool);
# 2006 "./subversion/include/svn_wc.h"
svn_wc_conflict_description2_t *
svn_wc_conflict_description_create_tree2(
  const char *local_abspath,
  svn_node_kind_t node_kind,
  svn_wc_operation_t operation,
  const svn_wc_conflict_version_t *src_left_version,
  const svn_wc_conflict_version_t *src_right_version,
  apr_pool_t *result_pool);
# 2022 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_wc_conflict_description_t *
svn_wc_conflict_description_create_tree(
  const char *path,
  svn_wc_adm_access_t *adm_access,
  svn_node_kind_t node_kind,
  svn_wc_operation_t operation,
                  svn_wc_conflict_version_t *src_left_version,
                  svn_wc_conflict_version_t *src_right_version,
  apr_pool_t *pool);







svn_wc_conflict_description2_t *
svn_wc__conflict_description2_dup(
  const svn_wc_conflict_description2_t *conflict,
  apr_pool_t *result_pool);






typedef enum svn_wc_conflict_choice_t
{


  svn_wc_conflict_choose_postpone,





  svn_wc_conflict_choose_base,
  svn_wc_conflict_choose_theirs_full,
  svn_wc_conflict_choose_mine_full,
  svn_wc_conflict_choose_theirs_conflict,
  svn_wc_conflict_choose_mine_conflict,
  svn_wc_conflict_choose_merged,


  svn_wc_conflict_choose_unspecified

} svn_wc_conflict_choice_t;
# 2082 "./subversion/include/svn_wc.h"
typedef struct svn_wc_conflict_result_t
{


  svn_wc_conflict_choice_t choice;





  const char *merged_file;




  svn_boolean_t save_merged;

} svn_wc_conflict_result_t;
# 2113 "./subversion/include/svn_wc.h"
svn_wc_conflict_result_t *
svn_wc_create_conflict_result(svn_wc_conflict_choice_t choice,
                              const char *merged_file,
                              apr_pool_t *pool);
# 2145 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_conflict_resolver_func2_t)(
  svn_wc_conflict_result_t **result,
  const svn_wc_conflict_description2_t *description,
  void *baton,
  apr_pool_t *result_pool,
  apr_pool_t *scratch_pool);
# 2160 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_conflict_resolver_func_t)(
  svn_wc_conflict_result_t **result,
  const svn_wc_conflict_description_t *description,
  void *baton,
  apr_pool_t *pool);
# 2193 "./subversion/include/svn_wc.h"
typedef struct svn_wc_diff_callbacks4_t
{





  svn_error_t *(*file_opened)(svn_boolean_t *tree_conflicted,
                              svn_boolean_t *skip,
                              const char *path,
                              svn_revnum_t rev,
                              void *diff_baton,
                              apr_pool_t *scratch_pool);
# 2224 "./subversion/include/svn_wc.h"
  svn_error_t *(*file_changed)(svn_wc_notify_state_t *contentstate,
                               svn_wc_notify_state_t *propstate,
                               svn_boolean_t *tree_conflicted,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               svn_revnum_t rev1,
                               svn_revnum_t rev2,
                               const char *mimetype1,
                               const char *mimetype2,
                               const apr_array_header_t *propchanges,
                               apr_hash_t *originalprops,
                               void *diff_baton,
                               apr_pool_t *scratch_pool);
# 2258 "./subversion/include/svn_wc.h"
  svn_error_t *(*file_added)(svn_wc_notify_state_t *contentstate,
                             svn_wc_notify_state_t *propstate,
                             svn_boolean_t *tree_conflicted,
                             const char *path,
                             const char *tmpfile1,
                             const char *tmpfile2,
                             svn_revnum_t rev1,
                             svn_revnum_t rev2,
                             const char *mimetype1,
                             const char *mimetype2,
                             const char *copyfrom_path,
                             svn_revnum_t copyfrom_revision,
                             const apr_array_header_t *propchanges,
                             apr_hash_t *originalprops,
                             void *diff_baton,
                             apr_pool_t *scratch_pool);
# 2286 "./subversion/include/svn_wc.h"
  svn_error_t *(*file_deleted)(svn_wc_notify_state_t *state,
                               svn_boolean_t *tree_conflicted,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               const char *mimetype1,
                               const char *mimetype2,
                               apr_hash_t *originalprops,
                               void *diff_baton,
                               apr_pool_t *scratch_pool);




  svn_error_t *(*dir_deleted)(svn_wc_notify_state_t *state,
                              svn_boolean_t *tree_conflicted,
                              const char *path,
                              void *diff_baton,
                              apr_pool_t *scratch_pool);
# 2315 "./subversion/include/svn_wc.h"
  svn_error_t *(*dir_opened)(svn_boolean_t *tree_conflicted,
                             svn_boolean_t *skip,
                             svn_boolean_t *skip_children,
                             const char *path,
                             svn_revnum_t rev,
                             void *diff_baton,
                             apr_pool_t *scratch_pool);
# 2334 "./subversion/include/svn_wc.h"
  svn_error_t *(*dir_added)(svn_wc_notify_state_t *state,
                            svn_boolean_t *tree_conflicted,
                            svn_boolean_t *skip,
                            svn_boolean_t *skip_children,
                            const char *path,
                            svn_revnum_t rev,
                            const char *copyfrom_path,
                            svn_revnum_t copyfrom_revision,
                            void *diff_baton,
                            apr_pool_t *scratch_pool);
# 2354 "./subversion/include/svn_wc.h"
  svn_error_t *(*dir_props_changed)(svn_wc_notify_state_t *propstate,
                                    svn_boolean_t *tree_conflicted,
                                    const char *path,
                                    svn_boolean_t dir_was_added,
                                    const apr_array_header_t *propchanges,
                                    apr_hash_t *original_props,
                                    void *diff_baton,
                                    apr_pool_t *scratch_pool);
# 2370 "./subversion/include/svn_wc.h"
  svn_error_t *(*dir_closed)(svn_wc_notify_state_t *contentstate,
                             svn_wc_notify_state_t *propstate,
                             svn_boolean_t *tree_conflicted,
                             const char *path,
                             svn_boolean_t dir_was_added,
                             void *diff_baton,
                             apr_pool_t *scratch_pool);

} svn_wc_diff_callbacks4_t;
# 2388 "./subversion/include/svn_wc.h"
typedef struct svn_wc_diff_callbacks3_t
{

  svn_error_t *(*file_changed)(svn_wc_adm_access_t *adm_access,
                               svn_wc_notify_state_t *contentstate,
                               svn_wc_notify_state_t *propstate,
                               svn_boolean_t *tree_conflicted,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               svn_revnum_t rev1,
                               svn_revnum_t rev2,
                               const char *mimetype1,
                               const char *mimetype2,
                               const apr_array_header_t *propchanges,
                               apr_hash_t *originalprops,
                               void *diff_baton);



  svn_error_t *(*file_added)(svn_wc_adm_access_t *adm_access,
                             svn_wc_notify_state_t *contentstate,
                             svn_wc_notify_state_t *propstate,
                             svn_boolean_t *tree_conflicted,
                             const char *path,
                             const char *tmpfile1,
                             const char *tmpfile2,
                             svn_revnum_t rev1,
                             svn_revnum_t rev2,
                             const char *mimetype1,
                             const char *mimetype2,
                             const apr_array_header_t *propchanges,
                             apr_hash_t *originalprops,
                             void *diff_baton);


  svn_error_t *(*file_deleted)(svn_wc_adm_access_t *adm_access,
                               svn_wc_notify_state_t *state,
                               svn_boolean_t *tree_conflicted,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               const char *mimetype1,
                               const char *mimetype2,
                               apr_hash_t *originalprops,
                               void *diff_baton);



  svn_error_t *(*dir_added)(svn_wc_adm_access_t *adm_access,
                            svn_wc_notify_state_t *state,
                            svn_boolean_t *tree_conflicted,
                            const char *path,
                            svn_revnum_t rev,
                            void *diff_baton);


  svn_error_t *(*dir_deleted)(svn_wc_adm_access_t *adm_access,
                              svn_wc_notify_state_t *state,
                              svn_boolean_t *tree_conflicted,
                              const char *path,
                              void *diff_baton);


  svn_error_t *(*dir_props_changed)(svn_wc_adm_access_t *adm_access,
                                    svn_wc_notify_state_t *propstate,
                                    svn_boolean_t *tree_conflicted,
                                    const char *path,
                                    const apr_array_header_t *propchanges,
                                    apr_hash_t *original_props,
                                    void *diff_baton);


  svn_error_t *(*dir_opened)(svn_wc_adm_access_t *adm_access,
                             svn_boolean_t *tree_conflicted,
                             const char *path,
                             svn_revnum_t rev,
                             void *diff_baton);


  svn_error_t *(*dir_closed)(svn_wc_adm_access_t *adm_access,
                             svn_wc_notify_state_t *contentstate,
                             svn_wc_notify_state_t *propstate,
                             svn_boolean_t *tree_conflicted,
                             const char *path,
                             void *diff_baton);

} svn_wc_diff_callbacks3_t;
# 2484 "./subversion/include/svn_wc.h"
typedef struct svn_wc_diff_callbacks2_t
{

  svn_error_t *(*file_changed)(svn_wc_adm_access_t *adm_access,
                               svn_wc_notify_state_t *contentstate,
                               svn_wc_notify_state_t *propstate,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               svn_revnum_t rev1,
                               svn_revnum_t rev2,
                               const char *mimetype1,
                               const char *mimetype2,
                               const apr_array_header_t *propchanges,
                               apr_hash_t *originalprops,
                               void *diff_baton);


  svn_error_t *(*file_added)(svn_wc_adm_access_t *adm_access,
                             svn_wc_notify_state_t *contentstate,
                             svn_wc_notify_state_t *propstate,
                             const char *path,
                             const char *tmpfile1,
                             const char *tmpfile2,
                             svn_revnum_t rev1,
                             svn_revnum_t rev2,
                             const char *mimetype1,
                             const char *mimetype2,
                             const apr_array_header_t *propchanges,
                             apr_hash_t *originalprops,
                             void *diff_baton);


  svn_error_t *(*file_deleted)(svn_wc_adm_access_t *adm_access,
                               svn_wc_notify_state_t *state,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               const char *mimetype1,
                               const char *mimetype2,
                               apr_hash_t *originalprops,
                               void *diff_baton);


  svn_error_t *(*dir_added)(svn_wc_adm_access_t *adm_access,
                            svn_wc_notify_state_t *state,
                            const char *path,
                            svn_revnum_t rev,
                            void *diff_baton);


  svn_error_t *(*dir_deleted)(svn_wc_adm_access_t *adm_access,
                              svn_wc_notify_state_t *state,
                              const char *path,
                              void *diff_baton);


  svn_error_t *(*dir_props_changed)(svn_wc_adm_access_t *adm_access,
                                    svn_wc_notify_state_t *state,
                                    const char *path,
                                    const apr_array_header_t *propchanges,
                                    apr_hash_t *original_props,
                                    void *diff_baton);

} svn_wc_diff_callbacks2_t;







typedef struct svn_wc_diff_callbacks_t
{



  svn_error_t *(*file_changed)(svn_wc_adm_access_t *adm_access,
                               svn_wc_notify_state_t *state,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               svn_revnum_t rev1,
                               svn_revnum_t rev2,
                               const char *mimetype1,
                               const char *mimetype2,
                               void *diff_baton);



  svn_error_t *(*file_added)(svn_wc_adm_access_t *adm_access,
                             svn_wc_notify_state_t *state,
                             const char *path,
                             const char *tmpfile1,
                             const char *tmpfile2,
                             svn_revnum_t rev1,
                             svn_revnum_t rev2,
                             const char *mimetype1,
                             const char *mimetype2,
                             void *diff_baton);



  svn_error_t *(*file_deleted)(svn_wc_adm_access_t *adm_access,
                               svn_wc_notify_state_t *state,
                               const char *path,
                               const char *tmpfile1,
                               const char *tmpfile2,
                               const char *mimetype1,
                               const char *mimetype2,
                               void *diff_baton);


  svn_error_t *(*dir_added)(svn_wc_adm_access_t *adm_access,
                            svn_wc_notify_state_t *state,
                            const char *path,
                            svn_revnum_t rev,
                            void *diff_baton);


  svn_error_t *(*dir_deleted)(svn_wc_adm_access_t *adm_access,
                              svn_wc_notify_state_t *state,
                              const char *path,
                              void *diff_baton);



  svn_error_t *(*props_changed)(svn_wc_adm_access_t *adm_access,
                                svn_wc_notify_state_t *state,
                                const char *path,
                                const apr_array_header_t *propchanges,
                                apr_hash_t *original_props,
                                void *diff_baton);

} svn_wc_diff_callbacks_t;
# 2631 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_check_wc2(int *wc_format,
                 svn_wc_context_t *wc_ctx,
                 const char *local_abspath,
                 apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_check_wc(const char *path,
                int *wc_format,
                apr_pool_t *pool);
# 2658 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_has_binary_prop(svn_boolean_t *has_binary_prop,
                       const char *path,
                       svn_wc_adm_access_t *adm_access,
                       apr_pool_t *pool);
# 2683 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_text_modified_p2(svn_boolean_t *modified_p,
                        svn_wc_context_t *wc_ctx,
                        const char *local_abspath,
                        svn_boolean_t unused,
                        apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_text_modified_p(svn_boolean_t *modified_p,
                       const char *filename,
                       svn_boolean_t force_comparison,
                       svn_wc_adm_access_t *adm_access,
                       apr_pool_t *pool);







svn_error_t *
svn_wc_props_modified_p2(svn_boolean_t *modified_p,
                         svn_wc_context_t *wc_ctx,
                         const char *local_abspath,
                         apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_props_modified_p(svn_boolean_t *modified_p,
                        const char *path,
                        svn_wc_adm_access_t *adm_access,
                        apr_pool_t *pool);
# 2735 "./subversion/include/svn_wc.h"
typedef enum svn_wc_schedule_t
{

  svn_wc_schedule_normal,


  svn_wc_schedule_add,


  svn_wc_schedule_delete,


  svn_wc_schedule_replace

} svn_wc_schedule_t;
# 2771 "./subversion/include/svn_wc.h"
typedef struct svn_wc_entry_t
{





  const char *name;


  svn_revnum_t revision;


  const char *url;


  const char *repos;


  const char *uuid;


  svn_node_kind_t kind;




  svn_wc_schedule_t schedule;
# 2807 "./subversion/include/svn_wc.h"
  svn_boolean_t copied;
# 2816 "./subversion/include/svn_wc.h"
  svn_boolean_t deleted;



  svn_boolean_t absent;


  svn_boolean_t incomplete;


  const char *copyfrom_url;


  svn_revnum_t copyfrom_rev;



  const char *conflict_old;



  const char *conflict_new;



  const char *conflict_wrk;



  const char *prejfile;



  apr_time_t text_time;





  apr_time_t prop_time;




  const char *checksum;




  svn_revnum_t cmt_rev;


  apr_time_t cmt_date;


  const char *cmt_author;




  const char *lock_token;




  const char *lock_owner;




  const char *lock_comment;




  apr_time_t lock_creation_date;





  svn_boolean_t has_props;
# 2906 "./subversion/include/svn_wc.h"
  svn_boolean_t has_prop_mods;
# 2915 "./subversion/include/svn_wc.h"
  const char *cachable_props;
# 2925 "./subversion/include/svn_wc.h"
  const char *present_props;




  const char *changelist;







  apr_off_t working_size;






  svn_boolean_t keep_local;
# 2955 "./subversion/include/svn_wc.h"
  svn_depth_t depth;




  const char *tree_conflict_data;







  const char *file_external_path;
# 2980 "./subversion/include/svn_wc.h"
  svn_opt_revision_t file_external_peg_rev;
# 2992 "./subversion/include/svn_wc.h"
  svn_opt_revision_t file_external_rev;
# 3004 "./subversion/include/svn_wc.h"
} svn_wc_entry_t;
# 3039 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_entry(const svn_wc_entry_t **entry,
             const char *path,
             svn_wc_adm_access_t *adm_access,
             svn_boolean_t show_hidden,
             apr_pool_t *pool);
# 3081 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_entries_read(apr_hash_t **entries,
                    svn_wc_adm_access_t *adm_access,
                    svn_boolean_t show_hidden,
                    apr_pool_t *pool);







__attribute__((deprecated))
svn_wc_entry_t *
svn_wc_entry_dup(const svn_wc_entry_t *entry,
                 apr_pool_t *pool);
# 3111 "./subversion/include/svn_wc.h"
typedef struct svn_wc_info_t
{


  svn_wc_schedule_t schedule;


  const char *copyfrom_url;



  svn_revnum_t copyfrom_rev;


  const svn_checksum_t *checksum;



  const char *changelist;


  svn_depth_t depth;






  svn_filesize_t recorded_size;




  apr_time_t recorded_time;



  const apr_array_header_t *conflicts;


  const char *wcroot_abspath;



  const char *moved_from_abspath;



  const char *moved_to_abspath;
} svn_wc_info_t;







svn_wc_info_t *
svn_wc_info_dup(const svn_wc_info_t *info,
                apr_pool_t *pool);
# 3195 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_conflicted_p3(svn_boolean_t *text_conflicted_p,
                     svn_boolean_t *prop_conflicted_p,
                     svn_boolean_t *tree_conflicted_p,
                     svn_wc_context_t *wc_ctx,
                     const char *local_abspath,
                     apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_conflicted_p2(svn_boolean_t *text_conflicted_p,
                     svn_boolean_t *prop_conflicted_p,
                     svn_boolean_t *tree_conflicted_p,
                     const char *path,
                     svn_wc_adm_access_t *adm_access,
                     apr_pool_t *pool);
# 3235 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_conflicted_p(svn_boolean_t *text_conflicted_p,
                    svn_boolean_t *prop_conflicted_p,
                    const char *dir_path,
                    const svn_wc_entry_t *entry,
                    apr_pool_t *pool);
# 3252 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_ancestry(char **url,
                    svn_revnum_t *rev,
                    const char *path,
                    svn_wc_adm_access_t *adm_access,
                    apr_pool_t *pool);





typedef struct svn_wc_entry_callbacks2_t
{

  svn_error_t *(*found_entry)(const char *path,
                              const svn_wc_entry_t *entry,
                              void *walk_baton,
                              apr_pool_t *pool);





  svn_error_t *(*handle_error)(const char *path,
                               svn_error_t *err,
                               void *walk_baton,
                               apr_pool_t *pool);

} svn_wc_entry_callbacks2_t;


typedef struct svn_wc_entry_callbacks_t
{

  svn_error_t *(*found_entry)(const char *path,
                              const svn_wc_entry_t *entry,
                              void *walk_baton,
                              apr_pool_t *pool);

} svn_wc_entry_callbacks_t;
# 3331 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_walk_entries3(const char *path,
                     svn_wc_adm_access_t *adm_access,
                     const svn_wc_entry_callbacks2_t *walk_callbacks,
                     void *walk_baton,
                     svn_depth_t depth,
                     svn_boolean_t show_hidden,
                     svn_cancel_func_t cancel_func,
                     void *cancel_baton,
                     apr_pool_t *pool);
# 3351 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_walk_entries2(const char *path,
                     svn_wc_adm_access_t *adm_access,
                     const svn_wc_entry_callbacks_t *walk_callbacks,
                     void *walk_baton,
                     svn_boolean_t show_hidden,
                     svn_cancel_func_t cancel_func,
                     void *cancel_baton,
                     apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_walk_entries(const char *path,
                    svn_wc_adm_access_t *adm_access,
                    const svn_wc_entry_callbacks_t *walk_callbacks,
                    void *walk_baton,
                    svn_boolean_t show_hidden,
                    apr_pool_t *pool);
# 3387 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_mark_missing_deleted(const char *path,
                            svn_wc_adm_access_t *parent,
                            apr_pool_t *pool);
# 3419 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_ensure_adm4(svn_wc_context_t *wc_ctx,
                   const char *local_abspath,
                   const char *url,
                   const char *repos_root_url,
                   const char *repos_uuid,
                   svn_revnum_t revision,
                   svn_depth_t depth,
                   apr_pool_t *scratch_pool);
# 3439 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_ensure_adm3(const char *path,
                   const char *uuid,
                   const char *url,
                   const char *repos,
                   svn_revnum_t revision,
                   svn_depth_t depth,
                   apr_pool_t *pool);
# 3460 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_ensure_adm2(const char *path,
                   const char *uuid,
                   const char *url,
                   const char *repos,
                   svn_revnum_t revision,
                   apr_pool_t *pool);
# 3478 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_ensure_adm(const char *path,
                  const char *uuid,
                  const char *url,
                  svn_revnum_t revision,
                  apr_pool_t *pool);
# 3498 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_maybe_set_repos_root(svn_wc_adm_access_t *adm_access,
                            const char *path,
                            const char *repos,
                            apr_pool_t *pool);
# 3534 "./subversion/include/svn_wc.h"
enum svn_wc_status_kind
{

    svn_wc_status_none = 1,


    svn_wc_status_unversioned,


    svn_wc_status_normal,


    svn_wc_status_added,


    svn_wc_status_missing,


    svn_wc_status_deleted,


    svn_wc_status_replaced,


    svn_wc_status_modified,


    svn_wc_status_merged,


    svn_wc_status_conflicted,


    svn_wc_status_ignored,


    svn_wc_status_obstructed,



    svn_wc_status_external,


    svn_wc_status_incomplete
};
# 3589 "./subversion/include/svn_wc.h"
typedef struct svn_wc_status3_t
{

  svn_node_kind_t kind;



  svn_depth_t depth;



  svn_filesize_t filesize;



  svn_boolean_t versioned;


  svn_boolean_t conflicted;



  enum svn_wc_status_kind node_status;


  enum svn_wc_status_kind text_status;


  enum svn_wc_status_kind prop_status;




  svn_boolean_t copied;


  svn_revnum_t revision;


  svn_revnum_t changed_rev;


  apr_time_t changed_date;


  const char *changed_author;


  const char *repos_root_url;


  const char *repos_uuid;


  const char *repos_relpath;




  svn_boolean_t switched;


  svn_boolean_t locked;



  const svn_lock_t *lock;


  const char *changelist;
# 3673 "./subversion/include/svn_wc.h"
  svn_node_kind_t ood_kind;



  enum svn_wc_status_kind repos_node_status;


  enum svn_wc_status_kind repos_text_status;


  enum svn_wc_status_kind repos_prop_status;


  const svn_lock_t *repos_lock;



  svn_revnum_t ood_changed_rev;


  apr_time_t ood_changed_date;






  const char *ood_changed_author;
# 3713 "./subversion/include/svn_wc.h"
  const char *moved_from_abspath;
# 3735 "./subversion/include/svn_wc.h"
  const char *moved_to_abspath;



  svn_boolean_t file_external;


} svn_wc_status3_t;
# 3753 "./subversion/include/svn_wc.h"
typedef struct svn_wc_status2_t
{

  const svn_wc_entry_t *entry;


  enum svn_wc_status_kind text_status;


  enum svn_wc_status_kind prop_status;


  svn_boolean_t locked;




  svn_boolean_t copied;




  svn_boolean_t switched;


  enum svn_wc_status_kind repos_text_status;


  enum svn_wc_status_kind repos_prop_status;


  svn_lock_t *repos_lock;




  const char *url;
# 3806 "./subversion/include/svn_wc.h"
  svn_revnum_t ood_last_cmt_rev;




  apr_time_t ood_last_cmt_date;





  svn_node_kind_t ood_kind;
# 3826 "./subversion/include/svn_wc.h"
  const char *ood_last_cmt_author;






  svn_wc_conflict_description_t *tree_conflict;






  svn_boolean_t file_external;







  enum svn_wc_status_kind pristine_text_status;







  enum svn_wc_status_kind pristine_prop_status;

} svn_wc_status2_t;
# 3867 "./subversion/include/svn_wc.h"
typedef struct svn_wc_status_t
{

  const svn_wc_entry_t *entry;


  enum svn_wc_status_kind text_status;


  enum svn_wc_status_kind prop_status;


  svn_boolean_t locked;




  svn_boolean_t copied;




  svn_boolean_t switched;


  enum svn_wc_status_kind repos_text_status;


  enum svn_wc_status_kind repos_prop_status;

} svn_wc_status_t;
# 3906 "./subversion/include/svn_wc.h"
svn_wc_status3_t *
svn_wc_dup_status3(const svn_wc_status3_t *orig_stat,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_wc_status2_t *
svn_wc_dup_status2(const svn_wc_status2_t *orig_stat,
                   apr_pool_t *pool);







__attribute__((deprecated))
svn_wc_status_t *
svn_wc_dup_status(const svn_wc_status_t *orig_stat,
                  apr_pool_t *pool);
# 3957 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_status3(svn_wc_status3_t **status,
               svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               apr_pool_t *result_pool,
               apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_status2(svn_wc_status2_t **status,
               const char *path,
               svn_wc_adm_access_t *adm_access,
               apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_status(svn_wc_status_t **status,
              const char *path,
              svn_wc_adm_access_t *adm_access,
              apr_pool_t *pool);
# 4003 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_status_func4_t)(void *baton,
                                              const char *local_abspath,
                                              const svn_wc_status3_t *status,
                                              apr_pool_t *scratch_pool);
# 4015 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_status_func3_t)(void *baton,
                                              const char *path,
                                              svn_wc_status2_t *status,
                                              apr_pool_t *pool);
# 4027 "./subversion/include/svn_wc.h"
typedef void (*svn_wc_status_func2_t)(void *baton,
                                      const char *path,
                                      svn_wc_status2_t *status);






typedef void (*svn_wc_status_func_t)(void *baton,
                                     const char *path,
                                     svn_wc_status_t *status);
# 4083 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_walk_status(svn_wc_context_t *wc_ctx,
                   const char *local_abspath,
                   svn_depth_t depth,
                   svn_boolean_t get_all,
                   svn_boolean_t no_ignore,
                   svn_boolean_t ignore_text_mods,
                   const apr_array_header_t *ignore_patterns,
                   svn_wc_status_func4_t status_func,
                   void *status_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *scratch_pool);
# 4165 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_status_editor5(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          void **set_locks_baton,
                          svn_revnum_t *edit_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          svn_depth_t depth,
                          svn_boolean_t get_all,
                          svn_boolean_t no_ignore,
                          svn_boolean_t depth_as_sticky,
                          svn_boolean_t server_performs_filtering,
                          const apr_array_header_t *ignore_patterns,
                          svn_wc_status_func4_t status_func,
                          void *status_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 4198 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_status_editor4(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          void **set_locks_baton,
                          svn_revnum_t *edit_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          svn_depth_t depth,
                          svn_boolean_t get_all,
                          svn_boolean_t no_ignore,
                          const apr_array_header_t *ignore_patterns,
                          svn_wc_status_func3_t status_func,
                          void *status_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_traversal_info_t *traversal_info,
                          apr_pool_t *pool);
# 4224 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_status_editor3(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          void **set_locks_baton,
                          svn_revnum_t *edit_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          svn_depth_t depth,
                          svn_boolean_t get_all,
                          svn_boolean_t no_ignore,
                          const apr_array_header_t *ignore_patterns,
                          svn_wc_status_func2_t status_func,
                          void *status_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_traversal_info_t *traversal_info,
                          apr_pool_t *pool);
# 4253 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_status_editor2(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          void **set_locks_baton,
                          svn_revnum_t *edit_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          apr_hash_t *config,
                          svn_boolean_t recurse,
                          svn_boolean_t get_all,
                          svn_boolean_t no_ignore,
                          svn_wc_status_func2_t status_func,
                          void *status_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_traversal_info_t *traversal_info,
                          apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_status_editor(const svn_delta_editor_t **editor,
                         void **edit_baton,
                         svn_revnum_t *edit_revision,
                         svn_wc_adm_access_t *anchor,
                         const char *target,
                         apr_hash_t *config,
                         svn_boolean_t recurse,
                         svn_boolean_t get_all,
                         svn_boolean_t no_ignore,
                         svn_wc_status_func_t status_func,
                         void *status_baton,
                         svn_cancel_func_t cancel_func,
                         void *cancel_baton,
                         svn_wc_traversal_info_t *traversal_info,
                         apr_pool_t *pool);
# 4310 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_status_set_repos_locks(void *set_locks_baton,
                              apr_hash_t *locks,
                              const char *repos_root,
                              apr_pool_t *pool);
# 4346 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_copy3(svn_wc_context_t *wc_ctx,
             const char *src_abspath,
             const char *dst_abspath,
             svn_boolean_t metadata_only,
             svn_cancel_func_t cancel_func,
             void *cancel_baton,
             svn_wc_notify_func2_t notify_func,
             void *notify_baton,
             apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_copy2(const char *src,
             svn_wc_adm_access_t *dst_parent,
             const char *dst_basename,
             svn_cancel_func_t cancel_func,
             void *cancel_baton,
             svn_wc_notify_func2_t notify_func,
             void *notify_baton,
             apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_copy(const char *src,
            svn_wc_adm_access_t *dst_parent,
            const char *dst_basename,
            svn_cancel_func_t cancel_func,
            void *cancel_baton,
            svn_wc_notify_func_t notify_func,
            void *notify_baton,
            apr_pool_t *pool);
# 4420 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_move(svn_wc_context_t *wc_ctx,
            const char *src_abspath,
            const char *dst_abspath,
            svn_boolean_t metadata_only,
            svn_cancel_func_t cancel_func,
            void *cancel_baton,
            svn_wc_notify_func2_t notify_func,
            void *notify_baton,
            apr_pool_t *scratch_pool);
# 4470 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_delete4(svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               svn_boolean_t keep_local,
               svn_boolean_t delete_unversioned_target,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *scratch_pool);
# 4491 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_delete3(const char *path,
               svn_wc_adm_access_t *adm_access,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               svn_boolean_t keep_local,
               apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_delete2(const char *path,
               svn_wc_adm_access_t *adm_access,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_delete(const char *path,
              svn_wc_adm_access_t *adm_access,
              svn_cancel_func_t cancel_func,
              void *cancel_baton,
              svn_wc_notify_func_t notify_func,
              void *notify_baton,
              apr_pool_t *pool);
# 4557 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_add_from_disk2(svn_wc_context_t *wc_ctx,
                      const char *local_abspath,
                      const apr_hash_t *props,
                      svn_wc_notify_func2_t notify_func,
                      void *notify_baton,
                      apr_pool_t *scratch_pool);
# 4574 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_add_from_disk(svn_wc_context_t *wc_ctx,
                     const char *local_abspath,
                     svn_wc_notify_func2_t notify_func,
                     void *notify_baton,
                     apr_pool_t *scratch_pool);
# 4625 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_add4(svn_wc_context_t *wc_ctx,
            const char *local_abspath,
            svn_depth_t depth,
            const char *copyfrom_url,
            svn_revnum_t copyfrom_rev,
            svn_cancel_func_t cancel_func,
            void *cancel_baton,
            svn_wc_notify_func2_t notify_func,
            void *notify_baton,
            apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_add3(const char *path,
            svn_wc_adm_access_t *parent_access,
            svn_depth_t depth,
            const char *copyfrom_url,
            svn_revnum_t copyfrom_rev,
            svn_cancel_func_t cancel_func,
            void *cancel_baton,
            svn_wc_notify_func2_t notify_func,
            void *notify_baton,
            apr_pool_t *pool);
# 4663 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_add2(const char *path,
            svn_wc_adm_access_t *parent_access,
            const char *copyfrom_url,
            svn_revnum_t copyfrom_rev,
            svn_cancel_func_t cancel_func,
            void *cancel_baton,
            svn_wc_notify_func2_t notify_func,
            void *notify_baton,
            apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_add(const char *path,
           svn_wc_adm_access_t *parent_access,
           const char *copyfrom_url,
           svn_revnum_t copyfrom_rev,
           svn_cancel_func_t cancel_func,
           void *cancel_baton,
           svn_wc_notify_func_t notify_func,
           void *notify_baton,
           apr_pool_t *pool);
# 4736 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_add_repos_file4(svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       svn_stream_t *new_base_contents,
                       svn_stream_t *new_contents,
                       apr_hash_t *new_base_props,
                       apr_hash_t *new_props,
                       const char *copyfrom_url,
                       svn_revnum_t copyfrom_rev,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *scratch_pool);
# 4757 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_add_repos_file3(const char *dst_path,
                       svn_wc_adm_access_t *adm_access,
                       svn_stream_t *new_base_contents,
                       svn_stream_t *new_contents,
                       apr_hash_t *new_base_props,
                       apr_hash_t *new_props,
                       const char *copyfrom_url,
                       svn_revnum_t copyfrom_rev,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       svn_wc_notify_func2_t notify_func,
                       void *notify_baton,
                       apr_pool_t *scratch_pool);
# 4780 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_add_repos_file2(const char *dst_path,
                       svn_wc_adm_access_t *adm_access,
                       const char *new_text_base_path,
                       const char *new_text_path,
                       apr_hash_t *new_base_props,
                       apr_hash_t *new_props,
                       const char *copyfrom_url,
                       svn_revnum_t copyfrom_rev,
                       apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_add_repos_file(const char *dst_path,
                      svn_wc_adm_access_t *adm_access,
                      const char *new_text_path,
                      apr_hash_t *new_props,
                      const char *copyfrom_url,
                      svn_revnum_t copyfrom_rev,
                      apr_pool_t *pool);
# 4839 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_remove_from_revision_control2(svn_wc_context_t *wc_ctx,
                                     const char *local_abspath,
                                     svn_boolean_t destroy_wf,
                                     svn_boolean_t instant_error,
                                     svn_cancel_func_t cancel_func,
                                     void *cancel_baton,
                                     apr_pool_t *pool);
# 4858 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_remove_from_revision_control(svn_wc_adm_access_t *adm_access,
                                    const char *name,
                                    svn_boolean_t destroy_wf,
                                    svn_boolean_t instant_error,
                                    svn_cancel_func_t cancel_func,
                                    void *cancel_baton,
                                    apr_pool_t *pool);
# 4923 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_resolved_conflict5(svn_wc_context_t *wc_ctx,
                          const char *local_abspath,
                          svn_depth_t depth,
                          svn_boolean_t resolve_text,
                          const char *resolve_prop,
                          svn_boolean_t resolve_tree,
                          svn_wc_conflict_choice_t conflict_choice,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *scratch_pool);
# 4944 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_resolved_conflict4(const char *path,
                          svn_wc_adm_access_t *adm_access,
                          svn_boolean_t resolve_text,
                          svn_boolean_t resolve_props,
                          svn_boolean_t resolve_tree,
                          svn_depth_t depth,
                          svn_wc_conflict_choice_t conflict_choice,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *pool);
# 4967 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_resolved_conflict3(const char *path,
                          svn_wc_adm_access_t *adm_access,
                          svn_boolean_t resolve_text,
                          svn_boolean_t resolve_props,
                          svn_depth_t depth,
                          svn_wc_conflict_choice_t conflict_choice,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *pool);
# 4991 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_resolved_conflict2(const char *path,
                          svn_wc_adm_access_t *adm_access,
                          svn_boolean_t resolve_text,
                          svn_boolean_t resolve_props,
                          svn_boolean_t recurse,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_resolved_conflict(const char *path,
                         svn_wc_adm_access_t *adm_access,
                         svn_boolean_t resolve_text,
                         svn_boolean_t resolve_props,
                         svn_boolean_t recurse,
                         svn_wc_notify_func_t notify_func,
                         void *notify_baton,
                         apr_pool_t *pool);
# 5030 "./subversion/include/svn_wc.h"
typedef struct svn_wc_committed_queue_t svn_wc_committed_queue_t;
# 5042 "./subversion/include/svn_wc.h"
svn_wc_committed_queue_t *
svn_wc_committed_queue_create(apr_pool_t *pool);
# 5099 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_queue_committed3(svn_wc_committed_queue_t *queue,
                        svn_wc_context_t *wc_ctx,
                        const char *local_abspath,
                        svn_boolean_t recurse,
                        const apr_array_header_t *wcprop_changes,
                        svn_boolean_t remove_lock,
                        svn_boolean_t remove_changelist,
                        const svn_checksum_t *sha1_checksum,
                        apr_pool_t *scratch_pool);
# 5118 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_queue_committed2(svn_wc_committed_queue_t *queue,
                        const char *path,
                        svn_wc_adm_access_t *adm_access,
                        svn_boolean_t recurse,
                        const apr_array_header_t *wcprop_changes,
                        svn_boolean_t remove_lock,
                        svn_boolean_t remove_changelist,
                        const svn_checksum_t *md5_checksum,
                        apr_pool_t *scratch_pool);
# 5141 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_queue_committed(svn_wc_committed_queue_t **queue,
                       const char *path,
                       svn_wc_adm_access_t *adm_access,
                       svn_boolean_t recurse,
                       const apr_array_header_t *wcprop_changes,
                       svn_boolean_t remove_lock,
                       svn_boolean_t remove_changelist,
                       const unsigned char *digest,
                       apr_pool_t *pool);
# 5164 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_process_committed_queue2(svn_wc_committed_queue_t *queue,
                                svn_wc_context_t *wc_ctx,
                                svn_revnum_t new_revnum,
                                const char *rev_date,
                                const char *rev_author,
                                svn_cancel_func_t cancel_func,
                                void *cancel_baton,
                                apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_process_committed_queue(svn_wc_committed_queue_t *queue,
                               svn_wc_adm_access_t *adm_access,
                               svn_revnum_t new_revnum,
                               const char *rev_date,
                               const char *rev_author,
                               apr_pool_t *pool);
# 5198 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_process_committed4(const char *path,
                          svn_wc_adm_access_t *adm_access,
                          svn_boolean_t recurse,
                          svn_revnum_t new_revnum,
                          const char *rev_date,
                          const char *rev_author,
                          const apr_array_header_t *wcprop_changes,
                          svn_boolean_t remove_lock,
                          svn_boolean_t remove_changelist,
                          const unsigned char *digest,
                          apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_process_committed3(const char *path,
                          svn_wc_adm_access_t *adm_access,
                          svn_boolean_t recurse,
                          svn_revnum_t new_revnum,
                          const char *rev_date,
                          const char *rev_author,
                          const apr_array_header_t *wcprop_changes,
                          svn_boolean_t remove_lock,
                          const unsigned char *digest,
                          apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_process_committed2(const char *path,
                          svn_wc_adm_access_t *adm_access,
                          svn_boolean_t recurse,
                          svn_revnum_t new_revnum,
                          const char *rev_date,
                          const char *rev_author,
                          const apr_array_header_t *wcprop_changes,
                          svn_boolean_t remove_lock,
                          apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_process_committed(const char *path,
                         svn_wc_adm_access_t *adm_access,
                         svn_boolean_t recurse,
                         svn_revnum_t new_revnum,
                         const char *rev_date,
                         const char *rev_author,
                         const apr_array_header_t *wcprop_changes,
                         apr_pool_t *pool);
# 5326 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_crawl_revisions5(svn_wc_context_t *wc_ctx,
                        const char *local_abspath,
                        const svn_ra_reporter3_t *reporter,
                        void *report_baton,
                        svn_boolean_t restore_files,
                        svn_depth_t depth,
                        svn_boolean_t honor_depth_exclude,
                        svn_boolean_t depth_compatibility_trick,
                        svn_boolean_t use_commit_times,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        svn_wc_notify_func2_t notify_func,
                        void *notify_baton,
                        apr_pool_t *scratch_pool);
# 5351 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_crawl_revisions4(const char *path,
                        svn_wc_adm_access_t *adm_access,
                        const svn_ra_reporter3_t *reporter,
                        void *report_baton,
                        svn_boolean_t restore_files,
                        svn_depth_t depth,
                        svn_boolean_t honor_depth_exclude,
                        svn_boolean_t depth_compatibility_trick,
                        svn_boolean_t use_commit_times,
                        svn_wc_notify_func2_t notify_func,
                        void *notify_baton,
                        svn_wc_traversal_info_t *traversal_info,
                        apr_pool_t *pool);
# 5374 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_crawl_revisions3(const char *path,
                        svn_wc_adm_access_t *adm_access,
                        const svn_ra_reporter3_t *reporter,
                        void *report_baton,
                        svn_boolean_t restore_files,
                        svn_depth_t depth,
                        svn_boolean_t depth_compatibility_trick,
                        svn_boolean_t use_commit_times,
                        svn_wc_notify_func2_t notify_func,
                        void *notify_baton,
                        svn_wc_traversal_info_t *traversal_info,
                        apr_pool_t *pool);
# 5397 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_crawl_revisions2(const char *path,
                        svn_wc_adm_access_t *adm_access,
                        const svn_ra_reporter2_t *reporter,
                        void *report_baton,
                        svn_boolean_t restore_files,
                        svn_boolean_t recurse,
                        svn_boolean_t use_commit_times,
                        svn_wc_notify_func2_t notify_func,
                        void *notify_baton,
                        svn_wc_traversal_info_t *traversal_info,
                        apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_crawl_revisions(const char *path,
                       svn_wc_adm_access_t *adm_access,
                       const svn_ra_reporter_t *reporter,
                       void *report_baton,
                       svn_boolean_t restore_files,
                       svn_boolean_t recurse,
                       svn_boolean_t use_commit_times,
                       svn_wc_notify_func_t notify_func,
                       void *notify_baton,
                       svn_wc_traversal_info_t *traversal_info,
                       apr_pool_t *pool);
# 5451 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_check_root(svn_boolean_t *is_wcroot,
                  svn_boolean_t *is_switched,
                  svn_kind_t *kind,
                  svn_wc_context_t *wc_ctx,
                  const char *local_abspath,
                  apr_pool_t *scratch_pool);
# 5476 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_is_wc_root2(svn_boolean_t *wc_root,
                   svn_wc_context_t *wc_ctx,
                   const char *local_abspath,
                   apr_pool_t *scratch_pool);
# 5492 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_is_wc_root(svn_boolean_t *wc_root,
                  const char *path,
                  svn_wc_adm_access_t *adm_access,
                  apr_pool_t *pool);
# 5527 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_get_actual_target2(const char **anchor,
                          const char **target,
                          svn_wc_context_t *wc_ctx,
                          const char *path,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_actual_target(const char *path,
                         const char **anchor,
                         const char **target,
                         apr_pool_t *pool);
# 5565 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_get_file_t)(void *baton,
                                          const char *path,
                                          svn_revnum_t revision,
                                          svn_stream_t *stream,
                                          svn_revnum_t *fetched_rev,
                                          apr_hash_t **props,
                                          apr_pool_t *pool);
# 5587 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_dirents_func_t)(void *baton,
                                              apr_hash_t **dirents,
                                              const char *repos_root_url,
                                              const char *repos_relpath,
                                              apr_pool_t *result_pool,
                                              apr_pool_t *scratch_pool);
# 5675 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_update_editor4(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_revnum_t *target_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          svn_boolean_t use_commit_times,
                          svn_depth_t depth,
                          svn_boolean_t depth_is_sticky,
                          svn_boolean_t allow_unver_obstructions,
                          svn_boolean_t adds_as_modification,
                          svn_boolean_t server_performs_filtering,
                          svn_boolean_t clean_checkout,
                          const char *diff3_cmd,
                          const apr_array_header_t *preserved_exts,
                          svn_wc_dirents_func_t fetch_dirents_func,
                          void *fetch_dirents_baton,
                          svn_wc_conflict_resolver_func2_t conflict_func,
                          void *conflict_baton,
                          svn_wc_external_update_t external_func,
                          void *external_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 5730 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_update_editor3(svn_revnum_t *target_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          svn_boolean_t use_commit_times,
                          svn_depth_t depth,
                          svn_boolean_t depth_is_sticky,
                          svn_boolean_t allow_unver_obstructions,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_conflict_resolver_func_t conflict_func,
                          void *conflict_baton,
                          svn_wc_get_file_t fetch_func,
                          void *fetch_baton,
                          const char *diff3_cmd,
                          const apr_array_header_t *preserved_exts,
                          const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_wc_traversal_info_t *ti,
                          apr_pool_t *pool);
# 5765 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_update_editor2(svn_revnum_t *target_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          svn_boolean_t use_commit_times,
                          svn_boolean_t recurse,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          const char *diff3_cmd,
                          const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_wc_traversal_info_t *ti,
                          apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_update_editor(svn_revnum_t *target_revision,
                         svn_wc_adm_access_t *anchor,
                         const char *target,
                         svn_boolean_t use_commit_times,
                         svn_boolean_t recurse,
                         svn_wc_notify_func_t notify_func,
                         void *notify_baton,
                         svn_cancel_func_t cancel_func,
                         void *cancel_baton,
                         const char *diff3_cmd,
                         const svn_delta_editor_t **editor,
                         void **edit_baton,
                         svn_wc_traversal_info_t *ti,
                         apr_pool_t *pool);
# 5822 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_switch_editor4(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_revnum_t *target_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          const char *switch_url,
                          svn_boolean_t use_commit_times,
                          svn_depth_t depth,
                          svn_boolean_t depth_is_sticky,
                          svn_boolean_t allow_unver_obstructions,
                          svn_boolean_t server_performs_filtering,
                          const char *diff3_cmd,
                          const apr_array_header_t *preserved_exts,
                          svn_wc_dirents_func_t fetch_dirents_func,
                          void *fetch_dirents_baton,
                          svn_wc_conflict_resolver_func2_t conflict_func,
                          void *conflict_baton,
                          svn_wc_external_update_t external_func,
                          void *external_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 5872 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_switch_editor3(svn_revnum_t *target_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          const char *switch_url,
                          svn_boolean_t use_commit_times,
                          svn_depth_t depth,
                          svn_boolean_t depth_is_sticky,
                          svn_boolean_t allow_unver_obstructions,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_conflict_resolver_func_t conflict_func,
                          void *conflict_baton,
                          const char *diff3_cmd,
                          const apr_array_header_t *preserved_exts,
                          const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_wc_traversal_info_t *ti,
                          apr_pool_t *pool);
# 5905 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_switch_editor2(svn_revnum_t *target_revision,
                          svn_wc_adm_access_t *anchor,
                          const char *target,
                          const char *switch_url,
                          svn_boolean_t use_commit_times,
                          svn_boolean_t recurse,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          const char *diff3_cmd,
                          const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_wc_traversal_info_t *ti,
                          apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_switch_editor(svn_revnum_t *target_revision,
                         svn_wc_adm_access_t *anchor,
                         const char *target,
                         const char *switch_url,
                         svn_boolean_t use_commit_times,
                         svn_boolean_t recurse,
                         svn_wc_notify_func_t notify_func,
                         void *notify_baton,
                         svn_cancel_func_t cancel_func,
                         void *cancel_baton,
                         const char *diff3_cmd,
                         const svn_delta_editor_t **editor,
                         void **edit_baton,
                         svn_wc_traversal_info_t *ti,
                         apr_pool_t *pool);
# 5966 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_prop_list2(apr_hash_t **props,
                  svn_wc_context_t *wc_ctx,
                  const char *local_abspath,
                  apr_pool_t *result_pool,
                  apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_prop_list(apr_hash_t **props,
                 const char *path,
                 svn_wc_adm_access_t *adm_access,
                 apr_pool_t *pool);
# 6016 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_get_pristine_props(apr_hash_t **props,
                          svn_wc_context_t *wc_ctx,
                          const char *local_abspath,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 6035 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_prop_get2(const svn_string_t **value,
                 svn_wc_context_t *wc_ctx,
                 const char *local_abspath,
                 const char *name,
                 apr_pool_t *result_pool,
                 apr_pool_t *scratch_pool);
# 6050 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_prop_get(const svn_string_t **value,
                const char *name,
                const char *path,
                svn_wc_adm_access_t *adm_access,
                apr_pool_t *pool);
# 6113 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_prop_set4(svn_wc_context_t *wc_ctx,
                 const char *local_abspath,
                 const char *name,
                 const svn_string_t *value,
                 svn_depth_t depth,
                 svn_boolean_t skip_checks,
                 const apr_array_header_t *changelist_filter,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 svn_wc_notify_func2_t notify_func,
                 void *notify_baton,
                 apr_pool_t *scratch_pool);
# 6134 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_prop_set3(const char *name,
                 const svn_string_t *value,
                 const char *path,
                 svn_wc_adm_access_t *adm_access,
                 svn_boolean_t skip_checks,
                 svn_wc_notify_func2_t notify_func,
                 void *notify_baton,
                 apr_pool_t *pool);
# 6152 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_prop_set2(const char *name,
                 const svn_string_t *value,
                 const char *path,
                 svn_wc_adm_access_t *adm_access,
                 svn_boolean_t skip_checks,
                 apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_prop_set(const char *name,
                const svn_string_t *value,
                const char *path,
                svn_wc_adm_access_t *adm_access,
                apr_pool_t *pool);
# 6189 "./subversion/include/svn_wc.h"
svn_boolean_t
svn_wc_is_normal_prop(const char *name);




svn_boolean_t
svn_wc_is_wc_prop(const char *name);


svn_boolean_t
svn_wc_is_entry_prop(const char *name);
# 6216 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_canonicalize_svn_prop_get_file_t)(
  const svn_string_t **mime_type,
  svn_stream_t *stream,
  void *baton,
  apr_pool_t *pool);
# 6284 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_canonicalize_svn_prop(const svn_string_t **propval_p,
                             const char *propname,
                             const svn_string_t *propval,
                             const char *path,
                             svn_node_kind_t kind,
                             svn_boolean_t skip_some_checks,
                             svn_wc_canonicalize_svn_prop_get_file_t prop_getter,
                             void *getter_baton,
                             apr_pool_t *pool);
# 6363 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_diff_editor6(const svn_delta_editor_t **editor,
                        void **edit_baton,
                        svn_wc_context_t *wc_ctx,
                        const char *anchor_abspath,
                        const char *target,
                        svn_depth_t depth,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t show_copies_as_adds,
                        svn_boolean_t use_git_diff_format,
                        svn_boolean_t use_text_base,
                        svn_boolean_t reverse_order,
                        svn_boolean_t server_performs_filtering,
                        const apr_array_header_t *changelist_filter,
                        const svn_wc_diff_callbacks4_t *callbacks,
                        void *callback_baton,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);
# 6397 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_diff_editor5(svn_wc_adm_access_t *anchor,
                        const char *target,
                        const svn_wc_diff_callbacks3_t *callbacks,
                        void *callback_baton,
                        svn_depth_t depth,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t use_text_base,
                        svn_boolean_t reverse_order,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        const apr_array_header_t *changelist_filter,
                        const svn_delta_editor_t **editor,
                        void **edit_baton,
                        apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_diff_editor4(svn_wc_adm_access_t *anchor,
                        const char *target,
                        const svn_wc_diff_callbacks2_t *callbacks,
                        void *callback_baton,
                        svn_depth_t depth,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t use_text_base,
                        svn_boolean_t reverse_order,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        const apr_array_header_t *changelist_filter,
                        const svn_delta_editor_t **editor,
                        void **edit_baton,
                        apr_pool_t *pool);
# 6446 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_diff_editor3(svn_wc_adm_access_t *anchor,
                        const char *target,
                        const svn_wc_diff_callbacks2_t *callbacks,
                        void *callback_baton,
                        svn_boolean_t recurse,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t use_text_base,
                        svn_boolean_t reverse_order,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        const svn_delta_editor_t **editor,
                        void **edit_baton,
                        apr_pool_t *pool);
# 6469 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_diff_editor2(svn_wc_adm_access_t *anchor,
                        const char *target,
                        const svn_wc_diff_callbacks_t *callbacks,
                        void *callback_baton,
                        svn_boolean_t recurse,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t use_text_base,
                        svn_boolean_t reverse_order,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        const svn_delta_editor_t **editor,
                        void **edit_baton,
                        apr_pool_t *pool);
# 6492 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_diff_editor(svn_wc_adm_access_t *anchor,
                       const char *target,
                       const svn_wc_diff_callbacks_t *callbacks,
                       void *callback_baton,
                       svn_boolean_t recurse,
                       svn_boolean_t use_text_base,
                       svn_boolean_t reverse_order,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       const svn_delta_editor_t **editor,
                       void **edit_baton,
                       apr_pool_t *pool);
# 6548 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_diff6(svn_wc_context_t *wc_ctx,
             const char *target_abspath,
             const svn_wc_diff_callbacks4_t *callbacks,
             void *callback_baton,
             svn_depth_t depth,
             svn_boolean_t ignore_ancestry,
             svn_boolean_t show_copies_as_adds,
             svn_boolean_t use_git_diff_format,
             const apr_array_header_t *changelist_filter,
             svn_cancel_func_t cancel_func,
             void *cancel_baton,
             apr_pool_t *scratch_pool);
# 6571 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_diff5(svn_wc_adm_access_t *anchor,
             const char *target,
             const svn_wc_diff_callbacks3_t *callbacks,
             void *callback_baton,
             svn_depth_t depth,
             svn_boolean_t ignore_ancestry,
             const apr_array_header_t *changelist_filter,
             apr_pool_t *pool);
# 6589 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_diff4(svn_wc_adm_access_t *anchor,
             const char *target,
             const svn_wc_diff_callbacks2_t *callbacks,
             void *callback_baton,
             svn_depth_t depth,
             svn_boolean_t ignore_ancestry,
             const apr_array_header_t *changelist_filter,
             apr_pool_t *pool);
# 6608 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_diff3(svn_wc_adm_access_t *anchor,
             const char *target,
             const svn_wc_diff_callbacks2_t *callbacks,
             void *callback_baton,
             svn_boolean_t recurse,
             svn_boolean_t ignore_ancestry,
             apr_pool_t *pool);
# 6625 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_diff2(svn_wc_adm_access_t *anchor,
             const char *target,
             const svn_wc_diff_callbacks_t *callbacks,
             void *callback_baton,
             svn_boolean_t recurse,
             svn_boolean_t ignore_ancestry,
             apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_diff(svn_wc_adm_access_t *anchor,
            const char *target,
            const svn_wc_diff_callbacks_t *callbacks,
            void *callback_baton,
            svn_boolean_t recurse,
            apr_pool_t *pool);
# 6667 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_get_prop_diffs2(apr_array_header_t **propchanges,
                       apr_hash_t **original_props,
                       svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_get_prop_diffs(apr_array_header_t **propchanges,
                      apr_hash_t **original_props,
                      const char *path,
                      svn_wc_adm_access_t *adm_access,
                      apr_pool_t *pool);
# 6699 "./subversion/include/svn_wc.h"
typedef enum svn_wc_merge_outcome_t
{



   svn_wc_merge_unchanged,


   svn_wc_merge_merged,




   svn_wc_merge_conflict,




   svn_wc_merge_no_merge

} svn_wc_merge_outcome_t;
# 6801 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_merge5(enum svn_wc_merge_outcome_t *merge_content_outcome,
              enum svn_wc_notify_state_t *merge_props_state,
              svn_wc_context_t *wc_ctx,
              const char *left_abspath,
              const char *right_abspath,
              const char *target_abspath,
              const char *left_label,
              const char *right_label,
              const char *target_label,
              const svn_wc_conflict_version_t *left_version,
              const svn_wc_conflict_version_t *right_version,
              svn_boolean_t dry_run,
              const char *diff3_cmd,
              const apr_array_header_t *merge_options,
              apr_hash_t *original_props,
              const apr_array_header_t *prop_diff,
              svn_wc_conflict_resolver_func2_t conflict_func,
              void *conflict_baton,
              svn_cancel_func_t cancel_func,
              void *cancel_baton,
              apr_pool_t *scratch_pool);
# 6831 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_merge4(enum svn_wc_merge_outcome_t *merge_outcome,
              svn_wc_context_t *wc_ctx,
              const char *left_abspath,
              const char *right_abspath,
              const char *target_abspath,
              const char *left_label,
              const char *right_label,
              const char *target_label,
              const svn_wc_conflict_version_t *left_version,
              const svn_wc_conflict_version_t *right_version,
              svn_boolean_t dry_run,
              const char *diff3_cmd,
              const apr_array_header_t *merge_options,
              const apr_array_header_t *prop_diff,
              svn_wc_conflict_resolver_func2_t conflict_func,
              void *conflict_baton,
              svn_cancel_func_t cancel_func,
              void *cancel_baton,
              apr_pool_t *scratch_pool);
# 6867 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_merge3(enum svn_wc_merge_outcome_t *merge_outcome,
              const char *left,
              const char *right,
              const char *merge_target,
              svn_wc_adm_access_t *adm_access,
              const char *left_label,
              const char *right_label,
              const char *target_label,
              svn_boolean_t dry_run,
              const char *diff3_cmd,
              const apr_array_header_t *merge_options,
              const apr_array_header_t *prop_diff,
              svn_wc_conflict_resolver_func_t conflict_func,
              void *conflict_baton,
              apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_merge2(enum svn_wc_merge_outcome_t *merge_outcome,
              const char *left,
              const char *right,
              const char *merge_target,
              svn_wc_adm_access_t *adm_access,
              const char *left_label,
              const char *right_label,
              const char *target_label,
              svn_boolean_t dry_run,
              const char *diff3_cmd,
              const apr_array_header_t *merge_options,
              apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_merge(const char *left,
             const char *right,
             const char *merge_target,
             svn_wc_adm_access_t *adm_access,
             const char *left_label,
             const char *right_label,
             const char *target_label,
             svn_boolean_t dry_run,
             enum svn_wc_merge_outcome_t *merge_outcome,
             const char *diff3_cmd,
             apr_pool_t *pool);
# 6953 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_merge_props3(svn_wc_notify_state_t *state,
                    svn_wc_context_t *wc_ctx,
                    const char *local_abspath,
                    const svn_wc_conflict_version_t *left_version,
                    const svn_wc_conflict_version_t *right_version,
                    apr_hash_t *baseprops,
                    const apr_array_header_t *propchanges,
                    svn_boolean_t dry_run,
                    svn_wc_conflict_resolver_func2_t conflict_func,
                    void *conflict_baton,
                    svn_cancel_func_t cancel_func,
                    void *cancel_baton,
                    apr_pool_t *scratch_pool);
# 6988 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_merge_props2(svn_wc_notify_state_t *state,
                    const char *path,
                    svn_wc_adm_access_t *adm_access,
                    apr_hash_t *baseprops,
                    const apr_array_header_t *propchanges,
                    svn_boolean_t base_merge,
                    svn_boolean_t dry_run,
                    svn_wc_conflict_resolver_func_t conflict_func,
                    void *conflict_baton,
                    apr_pool_t *pool);
# 7009 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_merge_props(svn_wc_notify_state_t *state,
                   const char *path,
                   svn_wc_adm_access_t *adm_access,
                   apr_hash_t *baseprops,
                   const apr_array_header_t *propchanges,
                   svn_boolean_t base_merge,
                   svn_boolean_t dry_run,
                   apr_pool_t *pool);
# 7032 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_merge_prop_diffs(svn_wc_notify_state_t *state,
                        const char *path,
                        svn_wc_adm_access_t *adm_access,
                        const apr_array_header_t *propchanges,
                        svn_boolean_t base_merge,
                        svn_boolean_t dry_run,
                        apr_pool_t *pool);
# 7065 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_get_pristine_contents2(svn_stream_t **contents,
                              svn_wc_context_t *wc_ctx,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_pristine_contents(svn_stream_t **contents,
                             const char *path,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);
# 7101 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_get_pristine_copy_path(const char *path,
                              const char **pristine_path,
                              apr_pool_t *pool);
# 7122 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_cleanup3(svn_wc_context_t *wc_ctx,
                const char *local_abspath,
                svn_cancel_func_t cancel_func,
                void *cancel_baton,
                apr_pool_t *scratch_pool);
# 7136 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_cleanup2(const char *path,
                const char *diff3_cmd,
                svn_cancel_func_t cancel_func,
                void *cancel_baton,
                apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_cleanup(const char *path,
               svn_wc_adm_access_t *optional_adm_access,
               const char *diff3_cmd,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               apr_pool_t *pool);
# 7167 "./subversion/include/svn_wc.h"
typedef svn_error_t * (*svn_wc_upgrade_get_repos_info_t)(
                                    const char **repos_root,
                                    const char **repos_uuid,
                                    void *baton,
                                    const char *url,
                                    apr_pool_t *result_pool,
                                    apr_pool_t *scratch_pool);
# 7196 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_upgrade(svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               svn_wc_upgrade_get_repos_info_t repos_info_func,
               void *repos_info_baton,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *scratch_pool);
# 7222 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_relocation_validator3_t)(void *baton,
                                                       const char *uuid,
                                                       const char *url,
                                                       const char *root_url,
                                                       apr_pool_t *pool);
# 7236 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_wc_relocation_validator2_t)(void *baton,
                                                       const char *uuid,
                                                       const char *url,
                                                       svn_boolean_t root,
                                                       apr_pool_t *pool);







typedef svn_error_t *(*svn_wc_relocation_validator_t)(void *baton,
                                                      const char *uuid,
                                                      const char *url);
# 7265 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_relocate4(svn_wc_context_t *wc_ctx,
                 const char *wcroot_abspath,
                 const char *from,
                 const char *to,
                 svn_wc_relocation_validator3_t validator,
                 void *validator_baton,
                 apr_pool_t *scratch_pool);
# 7284 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_relocate3(const char *path,
                 svn_wc_adm_access_t *adm_access,
                 const char *from,
                 const char *to,
                 svn_boolean_t recurse,
                 svn_wc_relocation_validator3_t validator,
                 void *validator_baton,
                 apr_pool_t *pool);





__attribute__((deprecated))
svn_error_t *
svn_wc_relocate2(const char *path,
                 svn_wc_adm_access_t *adm_access,
                 const char *from,
                 const char *to,
                 svn_boolean_t recurse,
                 svn_wc_relocation_validator2_t validator,
                 void *validator_baton,
                 apr_pool_t *pool);




__attribute__((deprecated))
svn_error_t *
svn_wc_relocate(const char *path,
                svn_wc_adm_access_t *adm_access,
                const char *from,
                const char *to,
                svn_boolean_t recurse,
                svn_wc_relocation_validator_t validator,
                void *validator_baton,
                apr_pool_t *pool);
# 7364 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_revert4(svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               svn_depth_t depth,
               svn_boolean_t use_commit_times,
               const apr_array_header_t *changelist_filter,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_revert3(const char *path,
               svn_wc_adm_access_t *parent_access,
               svn_depth_t depth,
               svn_boolean_t use_commit_times,
               const apr_array_header_t *changelist_filter,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *pool);
# 7406 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_revert2(const char *path,
               svn_wc_adm_access_t *parent_access,
               svn_boolean_t recursive,
               svn_boolean_t use_commit_times,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_wc_revert(const char *path,
              svn_wc_adm_access_t *parent_access,
              svn_boolean_t recursive,
              svn_boolean_t use_commit_times,
              svn_cancel_func_t cancel_func,
              void *cancel_baton,
              svn_wc_notify_func_t notify_func,
              void *notify_baton,
              apr_pool_t *pool);
# 7448 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_restore(svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               svn_boolean_t use_commit_times,
               apr_pool_t *scratch_pool);
# 7470 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_create_tmp_file2(apr_file_t **fp,
                        const char **new_name,
                        const char *path,
                        svn_io_file_del_t delete_when,
                        apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_create_tmp_file(apr_file_t **fp,
                       const char *path,
                       svn_boolean_t delete_on_close,
                       apr_pool_t *pool);
# 7534 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_translated_file2(const char **xlated_path,
                        const char *src,
                        const char *versioned_file,
                        svn_wc_adm_access_t *adm_access,
                        apr_uint32_t flags,
                        apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_translated_file(const char **xlated_p,
                       const char *vfile,
                       svn_wc_adm_access_t *adm_access,
                       svn_boolean_t force_repair,
                       apr_pool_t *pool);
# 7575 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_translated_stream(svn_stream_t **stream,
                         const char *path,
                         const char *versioned_file,
                         svn_wc_adm_access_t *adm_access,
                         apr_uint32_t flags,
                         apr_pool_t *pool);
# 7618 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_transmit_text_deltas3(const svn_checksum_t **new_text_base_md5_checksum,
                             const svn_checksum_t **new_text_base_sha1_checksum,
                             svn_wc_context_t *wc_ctx,
                             const char *local_abspath,
                             svn_boolean_t fulltext,
                             const svn_delta_editor_t *editor,
                             void *file_baton,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);
# 7644 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_transmit_text_deltas2(const char **tempfile,
                             unsigned char digest[],
                             const char *path,
                             svn_wc_adm_access_t *adm_access,
                             svn_boolean_t fulltext,
                             const svn_delta_editor_t *editor,
                             void *file_baton,
                             apr_pool_t *pool);





__attribute__((deprecated))
svn_error_t *
svn_wc_transmit_text_deltas(const char *path,
                            svn_wc_adm_access_t *adm_access,
                            svn_boolean_t fulltext,
                            const svn_delta_editor_t *editor,
                            void *file_baton,
                            const char **tempfile,
                            apr_pool_t *pool);
# 7676 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_transmit_prop_deltas2(svn_wc_context_t *wc_ctx,
                             const char *local_abspath,
                             const svn_delta_editor_t *editor,
                             void *baton,
                             apr_pool_t *scratch_pool);
# 7696 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_transmit_prop_deltas(const char *path,
                            svn_wc_adm_access_t *adm_access,
                            const svn_wc_entry_t *entry,
                            const svn_delta_editor_t *editor,
                            void *baton,
                            const char **tempfile,
                            apr_pool_t *pool);
# 7718 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_get_default_ignores(apr_array_header_t **patterns,
                           apr_hash_t *config,
                           apr_pool_t *pool);
# 7731 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_get_ignores2(apr_array_header_t **patterns,
                    svn_wc_context_t *wc_ctx,
                    const char *local_abspath,
                    apr_hash_t *config,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_get_ignores(apr_array_header_t **patterns,
                   apr_hash_t *config,
                   svn_wc_adm_access_t *adm_access,
                   apr_pool_t *pool);






svn_boolean_t
svn_wc_match_ignore_list(const char *str,
                         const apr_array_header_t *list,
                         apr_pool_t *pool);
# 7776 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_add_lock2(svn_wc_context_t *wc_ctx,
                 const char *abspath,
                 const svn_lock_t *lock,
                 apr_pool_t *scratch_pool);
# 7789 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_add_lock(const char *path,
                const svn_lock_t *lock,
                svn_wc_adm_access_t *adm_access,
                apr_pool_t *pool);
# 7803 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_remove_lock2(svn_wc_context_t *wc_ctx,
                    const char *local_abspath,
                    apr_pool_t *scratch_pool);
# 7815 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_remove_lock(const char *path,
                   svn_wc_adm_access_t *adm_access,
                   apr_pool_t *pool);
# 7834 "./subversion/include/svn_wc.h"
typedef struct svn_wc_revision_status_t
{
  svn_revnum_t min_rev;
  svn_revnum_t max_rev;

  svn_boolean_t switched;
  svn_boolean_t modified;




  svn_boolean_t sparse_checkout;
} svn_wc_revision_status_t;
# 7879 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_revision_status2(svn_wc_revision_status_t **result_p,
                        svn_wc_context_t *wc_ctx,
                        const char *local_abspath,
                        const char *trail_url,
                        svn_boolean_t committed,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);
# 7897 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_revision_status(svn_wc_revision_status_t **result_p,
                       const char *wc_path,
                       const char *trail_url,
                       svn_boolean_t committed,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *pool);
# 7940 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_set_changelist2(svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       const char *changelist,
                       svn_depth_t depth,
                       const apr_array_header_t *changelist_filter,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       svn_wc_notify_func2_t notify_func,
                       void *notify_baton,
                       apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_wc_set_changelist(const char *path,
                      const char *changelist,
                      svn_wc_adm_access_t *adm_access,
                      svn_cancel_func_t cancel_func,
                      void *cancel_baton,
                      svn_wc_notify_func2_t notify_func,
                      void *notify_baton,
                      apr_pool_t *pool);
# 7980 "./subversion/include/svn_wc.h"
typedef svn_error_t *(*svn_changelist_receiver_t) (void *baton,
                                                   const char *path,
                                                   const char *changelist,
                                                   apr_pool_t *pool);







svn_error_t *
svn_wc_get_changelists(svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       svn_depth_t depth,
                       const apr_array_header_t *changelist_filter,
                       svn_changelist_receiver_t callback_func,
                       void *callback_baton,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *scratch_pool);
# 8031 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_crop_tree2(svn_wc_context_t *wc_ctx,
                  const char *local_abspath,
                  svn_depth_t depth,
                  svn_cancel_func_t cancel_func,
                  void *cancel_baton,
                  svn_wc_notify_func2_t notify_func,
                  void *notify_baton,
                  apr_pool_t *scratch_pool);
# 8051 "./subversion/include/svn_wc.h"
__attribute__((deprecated))
svn_error_t *
svn_wc_crop_tree(svn_wc_adm_access_t *anchor,
                 const char *target,
                 svn_depth_t depth,
                 svn_wc_notify_func2_t notify_func,
                 void *notify_baton,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *pool);
# 8081 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_exclude(svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               svn_wc_notify_func2_t notify_func,
               void *notify_baton,
               apr_pool_t *scratch_pool);
# 8111 "./subversion/include/svn_wc.h"
svn_error_t *
svn_wc_read_kind(svn_node_kind_t *kind,
                 svn_wc_context_t *wc_ctx,
                 const char *abspath,
                 svn_boolean_t show_hidden,
                 apr_pool_t *scratch_pool);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h" 2

# 1 "./subversion/include/private/svn_sqlite.h" 1
# 33 "./subversion/include/private/svn_sqlite.h"
# 1 "./subversion/include/private/svn_token.h" 1
# 39 "./subversion/include/private/svn_token.h"
typedef struct svn_token_map_t
{
  const char *str;
  int val;
} svn_token_map_t;
# 52 "./subversion/include/private/svn_token.h"
const char *
svn_token__to_word(const svn_token_map_t *map,
                   int value);
# 66 "./subversion/include/private/svn_token.h"
int
svn_token__from_word_strict(const svn_token_map_t *map,
                            const char *word);




svn_error_t *
svn_token__from_word_err(int *value,
                         const svn_token_map_t *map,
                         const char *word);




int
svn_token__from_word(const svn_token_map_t *map,
                     const char *word);




int
svn_token__from_mem(const svn_token_map_t *map,
                    const char *word,
                    apr_size_t len);
# 34 "./subversion/include/private/svn_sqlite.h" 2
# 45 "./subversion/include/private/svn_sqlite.h"
const char *svn_sqlite__compiled_version(void);


const char *svn_sqlite__runtime_version(void);


typedef struct svn_sqlite__db_t svn_sqlite__db_t;
typedef struct svn_sqlite__stmt_t svn_sqlite__stmt_t;
typedef struct svn_sqlite__context_t svn_sqlite__context_t;
typedef struct svn_sqlite__value_t svn_sqlite__value_t;

typedef enum svn_sqlite__mode_e {
    svn_sqlite__mode_readonly,
    svn_sqlite__mode_readwrite,
    svn_sqlite__mode_rwcreate
} svn_sqlite__mode_t;


typedef svn_error_t *(*svn_sqlite__func_t)(svn_sqlite__context_t *sctx,
                                           int argc,
                                           svn_sqlite__value_t *values[],
                                           apr_pool_t *scatch_pool);




svn_error_t *
svn_sqlite__step_done(svn_sqlite__stmt_t *stmt);



svn_error_t *
svn_sqlite__step_row(svn_sqlite__stmt_t *stmt);





svn_error_t *
svn_sqlite__step(svn_boolean_t *got_row, svn_sqlite__stmt_t *stmt);




svn_error_t *
svn_sqlite__insert(apr_int64_t *row_id, svn_sqlite__stmt_t *stmt);





svn_error_t *
svn_sqlite__update(int *affected_rows, svn_sqlite__stmt_t *stmt);



svn_error_t *
svn_sqlite__read_schema_version(int *version,
                                svn_sqlite__db_t *db,
                                apr_pool_t *scratch_pool);
# 122 "./subversion/include/private/svn_sqlite.h"
svn_error_t *
svn_sqlite__open(svn_sqlite__db_t **db, const char *repos_path,
                 svn_sqlite__mode_t mode, const char * const statements[],
                 int latest_schema, const char * const *upgrade_sql,
                 apr_pool_t *result_pool, apr_pool_t *scratch_pool);


svn_error_t *
svn_sqlite__close(svn_sqlite__db_t *db);



svn_error_t *
svn_sqlite__create_scalar_function(svn_sqlite__db_t *db,
                                   const char *func_name,
                                   int argc,
                                   svn_sqlite__func_t func,
                                   void *baton);


svn_error_t *
svn_sqlite__exec_statements(svn_sqlite__db_t *db, int stmt_idx);





svn_error_t *
svn_sqlite__get_statement(svn_sqlite__stmt_t **stmt, svn_sqlite__db_t *db,
                          int stmt_idx);
# 178 "./subversion/include/private/svn_sqlite.h"
svn_error_t *
svn_sqlite__bindf(svn_sqlite__stmt_t *stmt, const char *fmt, ...);


svn_error_t *
svn_sqlite__bind_int(svn_sqlite__stmt_t *stmt, int slot, int val);


svn_error_t *
svn_sqlite__bind_int64(svn_sqlite__stmt_t *stmt, int slot,
                       apr_int64_t val);



svn_error_t *
svn_sqlite__bind_text(svn_sqlite__stmt_t *stmt, int slot,
                      const char *val);


svn_error_t *
svn_sqlite__bind_blob(svn_sqlite__stmt_t *stmt,
                      int slot,
                      const void *val,
                      apr_size_t len);


svn_error_t *
svn_sqlite__bind_token(svn_sqlite__stmt_t *stmt,
                       int slot,
                       const svn_token_map_t *map,
                       int value);



svn_error_t *
svn_sqlite__bind_revnum(svn_sqlite__stmt_t *stmt, int slot,
                        svn_revnum_t value);



svn_error_t *
svn_sqlite__bind_properties(svn_sqlite__stmt_t *stmt,
                            int slot,
                            const apr_hash_t *props,
                            apr_pool_t *scratch_pool);




svn_error_t *
svn_sqlite__bind_iprops(svn_sqlite__stmt_t *stmt,
                        int slot,
                        const apr_array_header_t *inherited_props,
                        apr_pool_t *scratch_pool);



svn_error_t *
svn_sqlite__bind_checksum(svn_sqlite__stmt_t *stmt,
                          int slot,
                          const svn_checksum_t *checksum,
                          apr_pool_t *scratch_pool);
# 252 "./subversion/include/private/svn_sqlite.h"
const void *
svn_sqlite__column_blob(svn_sqlite__stmt_t *stmt, int column,
                        apr_size_t *len, apr_pool_t *result_pool);





const char *
svn_sqlite__column_text(svn_sqlite__stmt_t *stmt, int column,
                        apr_pool_t *result_pool);



svn_revnum_t
svn_sqlite__column_revnum(svn_sqlite__stmt_t *stmt, int column);



svn_boolean_t
svn_sqlite__column_boolean(svn_sqlite__stmt_t *stmt, int column);



int
svn_sqlite__column_int(svn_sqlite__stmt_t *stmt, int column);



apr_int64_t
svn_sqlite__column_int64(svn_sqlite__stmt_t *stmt, int column);



int
svn_sqlite__column_token(svn_sqlite__stmt_t *stmt,
                         int column,
                         const svn_token_map_t *map);




int
svn_sqlite__column_token_null(svn_sqlite__stmt_t *stmt,
                              int column,
                              const svn_token_map_t *map,
                              int null_val);





svn_error_t *
svn_sqlite__column_properties(apr_hash_t **props,
                              svn_sqlite__stmt_t *stmt,
                              int column,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);





svn_error_t *
svn_sqlite__column_iprops(apr_array_header_t **iprops,
                          svn_sqlite__stmt_t *stmt,
                          int column,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);



svn_error_t *
svn_sqlite__column_checksum(const svn_checksum_t **checksum,
                            svn_sqlite__stmt_t *stmt,
                            int column,
                            apr_pool_t *result_pool);



svn_boolean_t
svn_sqlite__column_is_null(svn_sqlite__stmt_t *stmt, int column);



int
svn_sqlite__column_bytes(svn_sqlite__stmt_t *stmt, int column);
# 350 "./subversion/include/private/svn_sqlite.h"
int
svn_sqlite__value_type(svn_sqlite__value_t *val);


const char *
svn_sqlite__value_text(svn_sqlite__value_t *val);





void
svn_sqlite__result_null(svn_sqlite__context_t *sctx);

void
svn_sqlite__result_int64(svn_sqlite__context_t *sctx, apr_int64_t val);






svn_error_t *
svn_sqlite__finalize(svn_sqlite__stmt_t *stmt);





svn_error_t *
svn_sqlite__reset(svn_sqlite__stmt_t *stmt);



svn_error_t *
svn_sqlite__begin_transaction(svn_sqlite__db_t *db);



svn_error_t *
svn_sqlite__begin_immediate_transaction(svn_sqlite__db_t *db);


svn_error_t *
svn_sqlite__begin_savepoint(svn_sqlite__db_t *db);




svn_error_t *
svn_sqlite__finish_transaction(svn_sqlite__db_t *db,
                               svn_error_t *err);




svn_error_t *
svn_sqlite__finish_savepoint(svn_sqlite__db_t *db,
                             svn_error_t *err);
# 428 "./subversion/include/private/svn_sqlite.h"
typedef svn_error_t *(*svn_sqlite__transaction_callback_t)(
  void *baton, svn_sqlite__db_t *db, apr_pool_t *scratch_pool);






svn_error_t *
svn_sqlite__with_transaction(svn_sqlite__db_t *db,
                             svn_sqlite__transaction_callback_t cb_func,
                             void *cb_baton, apr_pool_t *scratch_pool);
# 455 "./subversion/include/private/svn_sqlite.h"
svn_error_t *
svn_sqlite__with_immediate_transaction(svn_sqlite__db_t *db,
                                       svn_sqlite__transaction_callback_t cb_func,
                                       void *cb_baton,
                                       apr_pool_t *scratch_pool);
# 494 "./subversion/include/private/svn_sqlite.h"
svn_error_t *
svn_sqlite__with_lock(svn_sqlite__db_t *db,
                      svn_sqlite__transaction_callback_t cb_func,
                      void *cb_baton,
                      apr_pool_t *scratch_pool);



svn_error_t *
svn_sqlite__hotcopy(const char *src_path,
                    const char *dst_path,
                    apr_pool_t *scratch_pool);
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h" 2
# 1 "./subversion/include/private/svn_wc_private.h" 1
# 51 "./subversion/include/private/svn_wc_private.h"
svn_boolean_t
svn_wc__changelist_match(svn_wc_context_t *wc_ctx,
                         const char *local_abspath,
                         const apr_hash_t *clhash,
                         apr_pool_t *scratch_pool);
# 66 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_file_external_editor(const svn_delta_editor_t **editor,
                                 void **edit_baton,
                                 svn_revnum_t *target_revision,
                                 svn_wc_context_t *wc_ctx,
                                 const char *local_abspath,
                                 const char *wri_abspath,
                                 const char *url,
                                 const char *repos_root_url,
                                 const char *repos_uuid,
                                 apr_array_header_t *iprops,
                                 svn_boolean_t use_commit_times,
                                 const char *diff3_cmd,
                                 const apr_array_header_t *preserved_exts,
                                 const char *record_ancestor_abspath,
                                 const char *recorded_url,
                                 const svn_opt_revision_t *recorded_peg_rev,
                                 const svn_opt_revision_t *recorded_rev,
                                 svn_wc_conflict_resolver_func2_t conflict_func,
                                 void *conflict_baton,
                                 svn_cancel_func_t cancel_func,
                                 void *cancel_baton,
                                 svn_wc_notify_func2_t notify_func,
                                 void *notify_baton,
                                 apr_pool_t *result_pool,
                                 apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__crawl_file_external(svn_wc_context_t *wc_ctx,
                            const char *local_abspath,
                            const svn_ra_reporter3_t *reporter,
                            void *report_baton,
                            svn_boolean_t restore_files,
                            svn_boolean_t use_commit_times,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            svn_wc_notify_func2_t notify_func,
                            void *notify_baton,
                            apr_pool_t *scratch_pool);
# 129 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__read_external_info(svn_node_kind_t *external_kind,
                           const char **defining_abspath,
                           const char **defining_url,
                           svn_revnum_t *defining_operational_revision,
                           svn_revnum_t *defining_revision,
                           svn_wc_context_t *wc_ctx,
                           const char *wri_abspath,
                           const char *local_abspath,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);


typedef struct svn_wc__committable_external_info_t {


  const char *local_abspath;



  const char *repos_relpath;



  const char *repos_root_url;


  svn_kind_t kind;

} svn_wc__committable_external_info_t;
# 183 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__committable_externals_below(apr_array_header_t **externals,
                                    svn_wc_context_t *wc_ctx,
                                    const char *local_abspath,
                                    svn_depth_t depth,
                                    apr_pool_t *result_pool,
                                    apr_pool_t *scratch_pool);
# 199 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__externals_defined_below(apr_hash_t **externals,
                                svn_wc_context_t *wc_ctx,
                                const char *local_abspath,
                                apr_pool_t *result_pool,
                                apr_pool_t *scratch_pool);
# 224 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__external_register(svn_wc_context_t *wc_ctx,
                          const char *defining_abspath,
                          const char *local_abspath,
                          svn_node_kind_t kind,
                          const char *repos_root_url,
                          const char *repos_uuid,
                          const char *repos_relpath,
                          svn_revnum_t operational_revision,
                          svn_revnum_t revision,
                          apr_pool_t *scratch_pool);
# 247 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__external_remove(svn_wc_context_t *wc_ctx,
                        const char *wri_abspath,
                        const char *local_abspath,
                        svn_boolean_t declaration_only,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        apr_pool_t *scratch_pool);
# 269 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__externals_gather_definitions(apr_hash_t **externals,
                                     apr_hash_t **ambient_depths,
                                     svn_wc_context_t *wc_ctx,
                                     const char *local_abspath,
                                     svn_depth_t depth,
                                     apr_pool_t *result_pool,
                                     apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__close_db(const char *external_abspath,
                 svn_wc_context_t *wc_ctx,
                 apr_pool_t *scratch_pool);
# 294 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_tree_conflict(const svn_wc_conflict_description2_t **tree_conflict,
                          svn_wc_context_t *wc_ctx,
                          const char *victim_abspath,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__add_tree_conflict(svn_wc_context_t *wc_ctx,
                          const svn_wc_conflict_description2_t *conflict,
                          apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__del_tree_conflict(svn_wc_context_t *wc_ctx,
                          const char *victim_abspath,
                          apr_pool_t *scratch_pool);
# 327 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__is_wcroot(svn_boolean_t *is_wcroot,
                  svn_wc_context_t *wc_ctx,
                  const char *local_abspath,
                  apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__get_wcroot(const char **wcroot_abspath,
                   svn_wc_context_t *wc_ctx,
                   const char *local_abspath,
                   apr_pool_t *result_pool,
                   apr_pool_t *scratch_pool);
# 358 "./subversion/include/private/svn_wc_private.h"
svn_wc_conflict_description_t *
svn_wc__cd2_to_cd(const svn_wc_conflict_description2_t *conflict,
                  apr_pool_t *result_pool);






svn_error_t *
svn_wc__status2_from_3(svn_wc_status2_t **status,
                       const svn_wc_status3_t *old_status,
                       svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 393 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_children_of_working_node(const apr_array_header_t **children,
                                          svn_wc_context_t *wc_ctx,
                                          const char *dir_abspath,
                                          svn_boolean_t show_hidden,
                                          apr_pool_t *result_pool,
                                          apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__node_get_children(const apr_array_header_t **children,
                          svn_wc_context_t *wc_ctx,
                          const char *dir_abspath,
                          svn_boolean_t show_hidden,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 427 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_repos_info(const char **repos_root_url,
                            const char **repos_uuid,
                            svn_wc_context_t *wc_ctx,
                            const char *local_abspath,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__node_get_depth(svn_depth_t *depth,
                       svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       apr_pool_t *scratch_pool);
# 456 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_changed_info(svn_revnum_t *changed_rev,
                              apr_time_t *changed_date,
                              const char **changed_author,
                              svn_wc_context_t *wc_ctx,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);
# 473 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_url(const char **url,
                     svn_wc_context_t *wc_ctx,
                     const char *local_abspath,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);
# 506 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_origin(svn_boolean_t *is_copy,
                        svn_revnum_t *revision,
                        const char **repos_relpath,
                        const char **repos_root_url,
                        const char **repos_uuid,
                        const char **copy_root_abspath,
                        svn_wc_context_t *wc_ctx,
                        const char *local_abspath,
                        svn_boolean_t scan_deleted,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);
# 528 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_repos_relpath(const char **repos_relpath,
                               svn_wc_context_t *wc_ctx,
                               const char *local_abspath,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__node_is_status_deleted(svn_boolean_t *is_deleted,
                               svn_wc_context_t *wc_ctx,
                               const char *local_abspath,
                               apr_pool_t *scratch_pool);
# 560 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_deleted_ancestor(const char **deleted_ancestor_abspath,
                                  svn_wc_context_t *wc_ctx,
                                  const char *local_abspath,
                                  apr_pool_t *result_pool,
                                  apr_pool_t *scratch_pool);
# 580 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_is_not_present(svn_boolean_t *not_present,
                            svn_boolean_t *user_excluded,
                            svn_boolean_t *server_excluded,
                            svn_wc_context_t *wc_ctx,
                            const char *local_abspath,
                            apr_pool_t *scratch_pool);
# 600 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_is_added(svn_boolean_t *is_added,
                      svn_wc_context_t *wc_ctx,
                      const char *local_abspath,
                      apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__node_has_working(svn_boolean_t *has_working,
                         svn_wc_context_t *wc_ctx,
                         const char *local_abspath,
                         apr_pool_t *scratch_pool);
# 636 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_base(svn_revnum_t *revision,
                      const char **repos_relpath,
                      const char **repos_root_url,
                      const char **repos_uuid,
                      svn_wc_context_t *wc_ctx,
                      const char *local_abspath,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 670 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_pre_ng_status_data(svn_revnum_t *revision,
                                    svn_revnum_t *changed_rev,
                                    apr_time_t *changed_date,
                                    const char **changed_author,
                                    svn_wc_context_t *wc_ctx,
                                    const char *local_abspath,
                                    apr_pool_t *result_pool,
                                    apr_pool_t *scratch_pool);
# 694 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_lock_info(const char **lock_token,
                           const char **lock_owner,
                           const char **lock_comment,
                           apr_time_t *lock_date,
                           svn_wc_context_t *wc_ctx,
                           const char *local_abspath,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 720 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__acquire_write_lock(const char **lock_root_abspath,
                           svn_wc_context_t *wc_ctx,
                           const char *local_abspath,
                           svn_boolean_t lock_anchor,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 737 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__release_write_lock(svn_wc_context_t *wc_ctx,
                           const char *local_abspath,
                           apr_pool_t *scratch_pool);


typedef svn_error_t *(*svn_wc__with_write_lock_func_t)(void *baton,
                                                       apr_pool_t *result_pool,
                                                       apr_pool_t *scratch_pool);
# 758 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__call_with_write_lock(svn_wc__with_write_lock_func_t func,
                             void *baton,
                             svn_wc_context_t *wc_ctx,
                             const char *local_abspath,
                             svn_boolean_t lock_anchor,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);
# 803 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_get_schedule(svn_wc_schedule_t *schedule,
                          svn_boolean_t *copied,
                          svn_wc_context_t *wc_ctx,
                          const char *local_abspath,
                          apr_pool_t *scratch_pool);







typedef svn_error_t *(*svn_wc__proplist_receiver_t)(void *baton,
                                                    const char *local_abspath,
                                                    apr_hash_t *props,
                                                    apr_pool_t *scratch_pool);
# 845 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__prop_list_recursive(svn_wc_context_t *wc_ctx,
                            const char *local_abspath,
                            const char *propname,
                            svn_depth_t depth,
                            svn_boolean_t pristine,
                            const apr_array_header_t *changelists,
                            svn_wc__proplist_receiver_t receiver_func,
                            void *receiver_baton,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *scratch_pool);
# 874 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_iprops(apr_array_header_t **inherited_props,
                   svn_wc_context_t *wc_ctx,
                   const char *local_abspath,
                   const char *propname,
                   apr_pool_t *result_pool,
                   apr_pool_t *scratch_pool);
# 889 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__prop_retrieve_recursive(apr_hash_t **values,
                                svn_wc_context_t *wc_ctx,
                                const char *local_abspath,
                                const char *propname,
                                apr_pool_t *result_pool,
                                apr_pool_t *scratch_pool);
# 906 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_cached_iprop_children(apr_hash_t **iprop_paths,
                                  svn_depth_t depth,
                                  svn_wc_context_t *wc_ctx,
                                  const char *local_abspath,
                                  apr_pool_t *result_pool,
                                  apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__read_entries_old(apr_hash_t **entries,
                         const char *dir_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__node_clear_dav_cache_recursive(svn_wc_context_t *wc_ctx,
                                       const char *local_abspath,
                                       apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__node_get_lock_tokens_recursive(apr_hash_t **lock_tokens,
                                       svn_wc_context_t *wc_ctx,
                                       const char *local_abspath,
                                       apr_pool_t *result_pool,
                                       apr_pool_t *scratch_pool);
# 958 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__min_max_revisions(svn_revnum_t *min_revision,
                          svn_revnum_t *max_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *local_abspath,
                          svn_boolean_t committed,
                          apr_pool_t *scratch_pool);
# 979 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__has_switched_subtrees(svn_boolean_t *is_switched,
                              svn_wc_context_t *wc_ctx,
                              const char *local_abspath,
                              const char *trail_url,
                              apr_pool_t *scratch_pool);
# 994 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_excluded_subtrees(apr_hash_t **server_excluded_subtrees,
                              svn_wc_context_t *wc_ctx,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);
# 1008 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__has_local_mods(svn_boolean_t *is_modified,
                       svn_wc_context_t *wc_ctx,
                       const char *local_abspath,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__rename_wc(svn_wc_context_t *wc_ctx,
                  const char *from_abspath,
                  const char *dst_abspath,
                  apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__get_tmpdir(const char **tmpdir_abspath,
                   svn_wc_context_t *wc_ctx,
                   const char *wri_abspath,
                   apr_pool_t *result_pool,
                   apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__node_get_commit_status(svn_boolean_t *added,
                               svn_boolean_t *deleted,
                               svn_boolean_t *is_replace_root,
                               svn_boolean_t *is_op_root,
                               svn_revnum_t *revision,
                               svn_revnum_t *original_revision,
                               const char **original_repos_relpath,
                               svn_wc_context_t *wc_ctx,
                               const char *local_abspath,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__node_get_md5_from_sha1(const svn_checksum_t **md5_checksum,
                               svn_wc_context_t *wc_ctx,
                               const char *wri_abspath,
                               const svn_checksum_t *sha1_checksum,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__get_pristine_contents_by_checksum(svn_stream_t **contents,
                                          svn_wc_context_t *wc_ctx,
                                          const char *wri_abspath,
                                          const svn_checksum_t *checksum,
                                          apr_pool_t *result_pool,
                                          apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__get_not_present_descendants(const apr_array_header_t **descendants,
                                    svn_wc_context_t *wc_ctx,
                                    const char *local_abspath,
                                    apr_pool_t *result_pool,
                                    apr_pool_t *scratch_pool);
# 1118 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__check_for_obstructions(svn_wc_notify_state_t *obstruction_state,
                               svn_node_kind_t *kind,
                               svn_boolean_t *deleted,
                               svn_wc_context_t *wc_ctx,
                               const char *local_abspath,
                               svn_boolean_t no_wcroot_check,
                               apr_pool_t *scratch_pool);
# 1138 "./subversion/include/private/svn_wc_private.h"
typedef struct svn_wc__info2_t
{

  const char *URL;


  const char *repos_root_URL;


  const char *repos_UUID;




  svn_revnum_t rev;


  svn_node_kind_t kind;





  svn_filesize_t size;


  svn_revnum_t last_changed_rev;


  apr_time_t last_changed_date;


  const char *last_changed_author;


  svn_lock_t *lock;


  struct svn_wc_info_t *wc_info;

} svn_wc__info2_t;







typedef svn_error_t *(*svn_wc__info_receiver2_t)(void *baton,
                                                 const char *local_abspath,
                                                 const svn_wc__info2_t *info,
                                                 apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__get_info(svn_wc_context_t *wc_ctx,
                 const char *local_abspath,
                 svn_depth_t depth,
                 svn_boolean_t fetch_excluded,
                 svn_boolean_t fetch_actual_only,
                 const apr_array_header_t *changelists,
                 svn_wc__info_receiver2_t receiver,
                 void *receiver_baton,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *scratch_pool);
# 1218 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__delete_internal(svn_wc_context_t *wc_ctx,
                        const char *local_abspath,
                        svn_boolean_t keep_local,
                        svn_boolean_t delete_unversioned_target,
                        const char *moved_to_abspath,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        svn_wc_notify_func2_t notify_func,
                        void *notify_baton,
                        apr_pool_t *scratch_pool);
# 1239 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__delete_many(svn_wc_context_t *wc_ctx,
                    const apr_array_header_t *targets,
                    svn_boolean_t keep_local,
                    svn_boolean_t delete_unversioned_target,
                    svn_cancel_func_t cancel_func,
                    void *cancel_baton,
                    svn_wc_notify_func2_t notify_func,
                    void *notify_baton,
                    apr_pool_t *scratch_pool);
# 1261 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_was_moved_away(const char **moved_to_abspath,
                            const char **copy_op_root_abspath,
                            svn_wc_context_t *wc_ctx,
                            const char *local_abspath,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 1280 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__node_was_moved_here(const char **moved_from_abspath,
                            const char **delete_op_root_abspath,
                            svn_wc_context_t *wc_ctx,
                            const char *local_abspath,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__upgrade_add_external_info(svn_wc_context_t *wc_ctx,
                                  const char *local_abspath,
                                  svn_node_kind_t kind,
                                  const char *def_local_abspath,
                                  const char *repos_relpath,
                                  const char *repos_root_url,
                                  const char *repos_uuid,
                                  svn_revnum_t def_peg_revision,
                                  svn_revnum_t def_revision,
                                  apr_pool_t *scratch_pool);
# 1324 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__resolve_relative_external_url(const char **resolved_url,
                                      const svn_wc_external_item2_t *item,
                                      const char *repos_root_url,
                                      const char *parent_dir_url,
                                      apr_pool_t *result_pool,
                                      apr_pool_t *scratch_pool);
# 1396 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_status_editor(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          void **set_locks_baton,
                          svn_revnum_t *edit_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          svn_depth_t depth,
                          svn_boolean_t get_all,
                          svn_boolean_t no_ignore,
                          svn_boolean_t depth_as_sticky,
                          svn_boolean_t server_performs_filtering,
                          const apr_array_header_t *ignore_patterns,
                          svn_wc_status_func4_t status_func,
                          void *status_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 1502 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_update_editor(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_revnum_t *target_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          apr_hash_t *wcroot_iprops,
                          svn_boolean_t use_commit_times,
                          svn_depth_t depth,
                          svn_boolean_t depth_is_sticky,
                          svn_boolean_t allow_unver_obstructions,
                          svn_boolean_t adds_as_modification,
                          svn_boolean_t server_performs_filtering,
                          svn_boolean_t clean_checkout,
                          const char *diff3_cmd,
                          const apr_array_header_t *preserved_exts,
                          svn_wc_dirents_func_t fetch_dirents_func,
                          void *fetch_dirents_baton,
                          svn_wc_conflict_resolver_func2_t conflict_func,
                          void *conflict_baton,
                          svn_wc_external_update_t external_func,
                          void *external_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 1545 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_switch_editor(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          svn_revnum_t *target_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          const char *switch_url,
                          apr_hash_t *wcroot_iprops,
                          svn_boolean_t use_commit_times,
                          svn_depth_t depth,
                          svn_boolean_t depth_is_sticky,
                          svn_boolean_t allow_unver_obstructions,
                          svn_boolean_t server_performs_filtering,
                          const char *diff3_cmd,
                          const apr_array_header_t *preserved_exts,
                          svn_wc_dirents_func_t fetch_dirents_func,
                          void *fetch_dirents_baton,
                          svn_wc_conflict_resolver_func2_t conflict_func,
                          void *conflict_baton,
                          svn_wc_external_update_t external_func,
                          void *external_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 1654 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__get_diff_editor(const svn_delta_editor_t **editor,
                        void **edit_baton,
                        svn_wc_context_t *wc_ctx,
                        const char *anchor_abspath,
                        const char *target,
                        svn_depth_t depth,
                        svn_boolean_t ignore_ancestry,
                        svn_boolean_t show_copies_as_adds,
                        svn_boolean_t use_git_diff_format,
                        svn_boolean_t use_text_base,
                        svn_boolean_t reverse_order,
                        svn_boolean_t server_performs_filtering,
                        const apr_array_header_t *changelist_filter,
                        const svn_wc_diff_callbacks4_t *callbacks,
                        void *callback_baton,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);
# 1730 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__resolve_conflicts(svn_wc_context_t *wc_ctx,
                          const char *local_abspath,
                          svn_depth_t depth,
                          svn_boolean_t resolve_text,
                          const char *resolve_prop,
                          svn_boolean_t resolve_tree,
                          svn_wc_conflict_choice_t conflict_choice,
                          svn_wc_conflict_resolver_func2_t conflict_func,
                          void *conflict_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *scratch_pool);
# 1780 "./subversion/include/private/svn_wc_private.h"
svn_error_t *
svn_wc__move2(svn_wc_context_t *wc_ctx,
              const char *src_abspath,
              const char *dst_abspath,
              svn_boolean_t metadata_only,
              svn_boolean_t allow_mixed_revisions,
              svn_cancel_func_t cancel_func,
              void *cancel_baton,
              svn_wc_notify_func2_t notify_func,
              void *notify_baton,
              apr_pool_t *scratch_pool);
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h" 2
# 1 "./subversion/include/private/svn_skel.h" 1
# 84 "./subversion/include/private/svn_skel.h"
struct svn_skel_t {
# 93 "./subversion/include/private/svn_skel.h"
  svn_boolean_t is_atom;

  const char *data;
  apr_size_t len;




  struct svn_skel_t *children;
  struct svn_skel_t *next;
};
typedef struct svn_skel_t svn_skel_t;
# 118 "./subversion/include/private/svn_skel.h"
svn_skel_t *svn_skel__parse(const char *data, apr_size_t len,
                            apr_pool_t *pool);




svn_skel_t *svn_skel__str_atom(const char *str, apr_pool_t *pool);




svn_skel_t *svn_skel__mem_atom(const void *addr, apr_size_t len,
                               apr_pool_t *pool);



svn_skel_t *svn_skel__make_empty_list(apr_pool_t *pool);



svn_skel_t *svn_skel__dup(const svn_skel_t *src_skel, svn_boolean_t dup_data,
                          apr_pool_t *result_pool);



void svn_skel__prepend(svn_skel_t *skel, svn_skel_t *list);






void svn_skel__append(svn_skel_t *list, svn_skel_t *skel);





void svn_skel__prepend_int(apr_int64_t value,
                           svn_skel_t *skel,
                           apr_pool_t *result_pool);







void svn_skel__prepend_str(const char *value,
                           svn_skel_t *skel,
                           apr_pool_t *result_pool);




svn_error_t *
svn_skel__parse_int(apr_int64_t *n, const svn_skel_t *skel,
                    apr_pool_t *scratch_pool);




svn_stringbuf_t *svn_skel__unparse(const svn_skel_t *skel, apr_pool_t *pool);



svn_boolean_t svn_skel__matches_atom(const svn_skel_t *skel, const char *str);



int svn_skel__list_length(const svn_skel_t *skel);





svn_error_t *
svn_skel__parse_proplist(apr_hash_t **proplist_p,
                         const svn_skel_t *skel,
                         apr_pool_t *result_pool);




svn_error_t *
svn_skel__parse_iprops(apr_array_header_t **iprops,
                       const svn_skel_t *skel,
                       apr_pool_t *result_pool);



svn_error_t *
svn_skel__parse_prop(svn_string_t **propval,
                     const svn_skel_t *skel,
                     const char *propname,
                     apr_pool_t *result_pool);




svn_error_t *
svn_skel__unparse_proplist(svn_skel_t **skel_p,
                           const apr_hash_t *proplist,
                           apr_pool_t *pool);




svn_error_t *
svn_skel__unparse_iproplist(svn_skel_t **skel_p,
                            const apr_array_header_t *inherited_props,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h" 1
# 50 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
# 1 "./subversion/svn_private_config.h" 1
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h" 2
# 128 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
typedef struct svn_wc__db_t svn_wc__db_t;



typedef enum svn_wc__db_status_t {

    svn_wc__db_status_normal,
# 144 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
    svn_wc__db_status_added,




    svn_wc__db_status_moved_here,




    svn_wc__db_status_copied,



    svn_wc__db_status_deleted,


    svn_wc__db_status_server_excluded,


    svn_wc__db_status_excluded,





    svn_wc__db_status_not_present,
# 181 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
    svn_wc__db_status_incomplete,



    svn_wc__db_status_base_deleted

} svn_wc__db_status_t;



typedef struct svn_wc__db_lock_t {

  const char *token;


  const char *owner;


  const char *comment;


  apr_time_t date;
} svn_wc__db_lock_t;
# 257 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_open(svn_wc__db_t **db,
                svn_config_t *config,
                svn_boolean_t auto_upgrade,
                svn_boolean_t enforce_empty_wq,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_close(svn_wc__db_t *db);
# 291 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_init(svn_wc__db_t *db,
                const char *local_abspath,
                const char *repos_relpath,
                const char *repos_root_url,
                const char *repos_uuid,
                svn_revnum_t initial_rev,
                svn_depth_t depth,
                apr_pool_t *scratch_pool);
# 319 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_to_relpath(const char **local_relpath,
                      svn_wc__db_t *db,
                      const char *wri_abspath,
                      const char *local_abspath,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 337 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_from_relpath(const char **local_abspath,
                        svn_wc__db_t *db,
                        const char *wri_abspath,
                        const char *local_relpath,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_get_wcroot(const char **wcroot_abspath,
                      svn_wc__db_t *db,
                      const char *wri_abspath,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 422 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_add_directory(svn_wc__db_t *db,
                              const char *local_abspath,
                              const char *wri_abspath,
                              const char *repos_relpath,
                              const char *repos_root_url,
                              const char *repos_uuid,
                              svn_revnum_t revision,
                              const apr_hash_t *props,
                              svn_revnum_t changed_rev,
                              apr_time_t changed_date,
                              const char *changed_author,
                              const apr_array_header_t *children,
                              svn_depth_t depth,
                              apr_hash_t *dav_cache,
                              const svn_skel_t *conflict,
                              svn_boolean_t update_actual_props,
                              apr_hash_t *new_actual_props,
                              apr_array_header_t *new_iprops,
                              const svn_skel_t *work_items,
                              apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__db_base_add_incomplete_directory(svn_wc__db_t *db,
                                         const char *local_abspath,
                                         const char *repos_relpath,
                                         const char *repos_root_url,
                                         const char *repos_uuid,
                                         svn_revnum_t revision,
                                         svn_depth_t depth,
                                         svn_boolean_t insert_base_deleted,
                                         svn_boolean_t delete_working,
                                         svn_skel_t *conflict,
                                         svn_skel_t *work_items,
                                         apr_pool_t *scratch_pool);
# 498 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_add_file(svn_wc__db_t *db,
                         const char *local_abspath,
                         const char *wri_abspath,
                         const char *repos_relpath,
                         const char *repos_root_url,
                         const char *repos_uuid,
                         svn_revnum_t revision,
                         const apr_hash_t *props,
                         svn_revnum_t changed_rev,
                         apr_time_t changed_date,
                         const char *changed_author,
                         const svn_checksum_t *checksum,
                         apr_hash_t *dav_cache,
                         svn_boolean_t delete_working,
                         svn_boolean_t update_actual_props,
                         apr_hash_t *new_actual_props,
                         apr_array_header_t *new_iprops,
                         svn_boolean_t keep_recorded_info,
                         svn_boolean_t insert_base_deleted,
                         const svn_skel_t *conflict,
                         const svn_skel_t *work_items,
                         apr_pool_t *scratch_pool);
# 581 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_add_symlink(svn_wc__db_t *db,
                            const char *local_abspath,
                            const char *wri_abspath,
                            const char *repos_relpath,
                            const char *repos_root_url,
                            const char *repos_uuid,
                            svn_revnum_t revision,
                            const apr_hash_t *props,
                            svn_revnum_t changed_rev,
                            apr_time_t changed_date,
                            const char *changed_author,
                            const char *target,
                            apr_hash_t *dav_cache,
                            svn_boolean_t delete_working,
                            svn_boolean_t update_actual_props,
                            apr_hash_t *new_actual_props,
                            apr_array_header_t *new_iprops,
                            svn_boolean_t keep_recorded_info,
                            svn_boolean_t insert_base_deleted,
                            const svn_skel_t *conflict,
                            const svn_skel_t *work_items,
                            apr_pool_t *scratch_pool);
# 626 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_add_excluded_node(svn_wc__db_t *db,
                                  const char *local_abspath,
                                  const char *repos_relpath,
                                  const char *repos_root_url,
                                  const char *repos_uuid,
                                  svn_revnum_t revision,
                                  svn_kind_t kind,
                                  svn_wc__db_status_t status,
                                  const svn_skel_t *conflict,
                                  const svn_skel_t *work_items,
                                  apr_pool_t *scratch_pool);
# 657 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_add_not_present_node(svn_wc__db_t *db,
                                     const char *local_abspath,
                                     const char *repos_relpath,
                                     const char *repos_root_url,
                                     const char *repos_uuid,
                                     svn_revnum_t revision,
                                     svn_kind_t kind,
                                     const svn_skel_t *conflict,
                                     const svn_skel_t *work_items,
                                     apr_pool_t *scratch_pool);
# 703 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_remove(svn_wc__db_t *db,
                       const char *local_abspath,
                       svn_boolean_t keep_as_working,
                       svn_boolean_t queue_deletes,
                       svn_revnum_t not_present_revision,
                       svn_skel_t *conflict,
                       svn_skel_t *work_items,
                       apr_pool_t *scratch_pool);
# 766 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_get_info(svn_wc__db_status_t *status,
                         svn_kind_t *kind,
                         svn_revnum_t *revision,
                         const char **repos_relpath,
                         const char **repos_root_url,
                         const char **repos_uuid,
                         svn_revnum_t *changed_rev,
                         apr_time_t *changed_date,
                         const char **changed_author,
                         svn_depth_t *depth,
                         const svn_checksum_t **checksum,
                         const char **target,
                         svn_wc__db_lock_t **lock,
                         svn_boolean_t *had_props,
                         apr_hash_t **props,
                         svn_boolean_t *update_root,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);



struct svn_wc__db_base_info_t {
  svn_wc__db_status_t status;
  svn_kind_t kind;
  svn_revnum_t revnum;
  const char *repos_relpath;
  const char *repos_root_url;
  svn_depth_t depth;
  svn_boolean_t update_root;
  svn_wc__db_lock_t *lock;
};




svn_error_t *
svn_wc__db_base_get_children_info(apr_hash_t **nodes,
                                  svn_wc__db_t *db,
                                  const char *dir_abspath,
                                  apr_pool_t *result_pool,
                                  apr_pool_t *scratch_pool);
# 821 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_get_props(apr_hash_t **props,
                          svn_wc__db_t *db,
                          const char *local_abspath,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);
# 841 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_base_get_children(const apr_array_header_t **children,
                             svn_wc__db_t *db,
                             const char *local_abspath,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_base_set_dav_cache(svn_wc__db_t *db,
                              const char *local_abspath,
                              const apr_hash_t *props,
                              apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__db_base_get_dav_cache(apr_hash_t **props,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_base_clear_dav_cache_recursive(svn_wc__db_t *db,
                                          const char *local_abspath,
                                          apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_base_get_lock_tokens_recursive(apr_hash_t **lock_tokens,
                                          svn_wc__db_t *db,
                                          const char *local_abspath,
                                          apr_pool_t *result_pool,
                                          apr_pool_t *scratch_pool);
# 903 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_pristine_get_path(const char **pristine_abspath,
                             svn_wc__db_t *db,
                             const char *wri_abspath,
                             const svn_checksum_t *checksum,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_pristine_get_future_path(const char **pristine_abspath,
                                    const char *wcroot_abspath,
                                    const svn_checksum_t *sha1_checksum,
                                    apr_pool_t *result_pool,
                                    apr_pool_t *scratch_pool);
# 933 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_pristine_read(svn_stream_t **contents,
                         svn_filesize_t *size,
                         svn_wc__db_t *db,
                         const char *wri_abspath,
                         const svn_checksum_t *sha1_checksum,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 950 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_pristine_get_tempdir(const char **temp_dir_abspath,
                                svn_wc__db_t *db,
                                const char *wri_abspath,
                                apr_pool_t *result_pool,
                                apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__db_pristine_install(svn_wc__db_t *db,
                            const char *tempfile_abspath,
                            const svn_checksum_t *sha1_checksum,
                            const svn_checksum_t *md5_checksum,
                            apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__db_pristine_get_md5(const svn_checksum_t **md5_checksum,
                            svn_wc__db_t *db,
                            const char *wri_abspath,
                            const svn_checksum_t *sha1_checksum,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 995 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_pristine_get_sha1(const svn_checksum_t **sha1_checksum,
                             svn_wc__db_t *db,
                             const char *wri_abspath,
                             const svn_checksum_t *md5_checksum,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_pristine_transfer(svn_wc__db_t *db,
                             const char *src_local_abspath,
                             const char *dst_wri_abspath,
                             svn_cancel_func_t cancel_func,
                             void *cancel_baton,
                             apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_pristine_remove(svn_wc__db_t *db,
                           const char *wri_abspath,
                           const svn_checksum_t *sha1_checksum,
                           apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_pristine_cleanup(svn_wc__db_t *db,
                            const char *wri_abspath,
                            apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_pristine_check(svn_boolean_t *present,
                          svn_wc__db_t *db,
                          const char *wri_abspath,
                          const svn_checksum_t *sha1_checksum,
                          apr_pool_t *scratch_pool);
# 1049 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_external_add_file(svn_wc__db_t *db,
                             const char *local_abspath,
                             const char *wri_abspath,

                             const char *repos_relpath,
                             const char *repos_root_url,
                             const char *repos_uuid,
                             svn_revnum_t revision,

                             const apr_hash_t *props,
                             apr_array_header_t *iprops,

                             svn_revnum_t changed_rev,
                             apr_time_t changed_date,
                             const char *changed_author,

                             const svn_checksum_t *checksum,

                             const apr_hash_t *dav_cache,

                             const char *record_ancestor_abspath,
                             const char *recorded_repos_relpath,
                             svn_revnum_t recorded_peg_revision,
                             svn_revnum_t recorded_revision,

                             svn_boolean_t update_actual_props,
                             apr_hash_t *new_actual_props,

                             svn_boolean_t keep_recorded_info,
                             const svn_skel_t *conflict,
                             const svn_skel_t *work_items,
                             apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_external_add_symlink(svn_wc__db_t *db,
                                const char *local_abspath,
                                const char *wri_abspath,

                                const char *repos_relpath,
                                const char *repos_root_url,
                                const char *repos_uuid,
                                svn_revnum_t revision,

                                const apr_hash_t *props,

                                svn_revnum_t changed_rev,
                                apr_time_t changed_date,
                                const char *changed_author,

                                const char *target,

                                const apr_hash_t *dav_cache,

                                const char *record_ancestor_abspath,
                                const char *recorded_repos_relpath,
                                svn_revnum_t recorded_peg_revision,
                                svn_revnum_t recorded_revision,

                                svn_boolean_t update_actual_props,
                                apr_hash_t *new_actual_props,

                                svn_boolean_t keep_recorded_info,
                                const svn_skel_t *work_items,
                                apr_pool_t *scratch_pool);
# 1125 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_external_add_dir(svn_wc__db_t *db,
                            const char *local_abspath,
                            const char *wri_abspath,

                            const char *repos_root_url,
                            const char *repos_uuid,

                            const char *record_ancestor_abspath,
                            const char *recorded_repos_relpath,
                            svn_revnum_t recorded_peg_revision,
                            svn_revnum_t recorded_revision,

                            const svn_skel_t *work_items,
                            apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_external_remove(svn_wc__db_t *db,
                           const char *local_abspath,
                           const char *wri_abspath,

                           const svn_skel_t *work_items,
                           apr_pool_t *scratch_pool);
# 1188 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_external_read(svn_wc__db_status_t *status,
                         svn_kind_t *kind,
                         const char **defining_abspath,

                         const char **repos_root_url,
                         const char **repos_uuid,

                         const char **recorded_repos_relpath,
                         svn_revnum_t *recorded_peg_revision,
                         svn_revnum_t *recorded_revision,

                         svn_wc__db_t *db,
                         const char *local_abspath,
                         const char *wri_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 1229 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_committable_externals_below(apr_array_header_t **externals,
                                       svn_wc__db_t *db,
                                       const char *local_abspath,
                                       svn_boolean_t immediates_only,
                                       apr_pool_t *result_pool,
                                       apr_pool_t *scratch_pool);
# 1245 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_externals_defined_below(apr_hash_t **externals,
                                   svn_wc__db_t *db,
                                   const char *local_abspath,
                                   apr_pool_t *result_pool,
                                   apr_pool_t *scratch_pool);
# 1261 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_externals_gather_definitions(apr_hash_t **externals,
                                        apr_hash_t **depths,
                                        svn_wc__db_t *db,
                                        const char *local_abspath,
                                        apr_pool_t *result_pool,
                                        apr_pool_t *scratch_pool);
# 1287 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_copy(svn_wc__db_t *db,
                   const char *src_abspath,
                   const char *dst_abspath,
                   const char *dst_op_root_abspath,
                   svn_boolean_t is_move,
                   const svn_skel_t *work_items,
                   apr_pool_t *scratch_pool);
# 1307 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_copy_shadowed_layer(svn_wc__db_t *db,
                                  const char *src_abspath,
                                  const char *dst_abspath,
                                  svn_boolean_t is_move,
                                  apr_pool_t *scratch_pool);
# 1322 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_copy_dir(svn_wc__db_t *db,
                       const char *local_abspath,
                       const apr_hash_t *props,
                       svn_revnum_t changed_rev,
                       apr_time_t changed_date,
                       const char *changed_author,
                       const char *original_repos_relpath,
                       const char *original_root_url,
                       const char *original_uuid,
                       svn_revnum_t original_revision,
                       const apr_array_header_t *children,
                       svn_boolean_t is_move,
                       svn_depth_t depth,
                       const svn_skel_t *conflict,
                       const svn_skel_t *work_items,
                       apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_op_copy_file(svn_wc__db_t *db,
                        const char *local_abspath,
                        const apr_hash_t *props,
                        svn_revnum_t changed_rev,
                        apr_time_t changed_date,
                        const char *changed_author,
                        const char *original_repos_relpath,
                        const char *original_root_url,
                        const char *original_uuid,
                        svn_revnum_t original_revision,
                        const svn_checksum_t *checksum,
                        svn_boolean_t update_actual_props,
                        const apr_hash_t *new_actual_props,
                        svn_boolean_t is_move,
                        const svn_skel_t *conflict,
                        const svn_skel_t *work_items,
                        apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__db_op_copy_symlink(svn_wc__db_t *db,
                           const char *local_abspath,
                           const apr_hash_t *props,
                           svn_revnum_t changed_rev,
                           apr_time_t changed_date,
                           const char *changed_author,
                           const char *original_repos_relpath,
                           const char *original_root_url,
                           const char *original_uuid,
                           svn_revnum_t original_revision,
                           const char *target,
                           const svn_skel_t *conflict,
                           const svn_skel_t *work_items,
                           apr_pool_t *scratch_pool);
# 1388 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_add_directory(svn_wc__db_t *db,
                            const char *local_abspath,
                            const apr_hash_t *props,
                            const svn_skel_t *work_items,
                            apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__db_op_add_file(svn_wc__db_t *db,
                       const char *local_abspath,
                       const apr_hash_t *props,
                       const svn_skel_t *work_items,
                       apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_op_add_symlink(svn_wc__db_t *db,
                          const char *local_abspath,
                          const char *target,
                          const apr_hash_t *props,
                          const svn_skel_t *work_items,
                          apr_pool_t *scratch_pool);
# 1450 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_set_props(svn_wc__db_t *db,
                        const char *local_abspath,
                        apr_hash_t *props,
                        svn_boolean_t clear_recorded_info,
                        const svn_skel_t *conflict,
                        const svn_skel_t *work_items,
                        apr_pool_t *scratch_pool);
# 1476 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_delete(svn_wc__db_t *db,
                     const char *local_abspath,
                     const char *moved_to_abspath,
                     svn_boolean_t delete_dir_externals,
                     svn_skel_t *conflict,
                     svn_skel_t *work_items,
                     svn_cancel_func_t cancel_func,
                     void *cancel_baton,
                     svn_wc_notify_func2_t notify_func,
                     void *notify_baton,
                     apr_pool_t *scratch_pool);
# 1510 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_delete_many(svn_wc__db_t *db,
                          apr_array_header_t *targets,
                          svn_boolean_t delete_dir_externals,
                          const svn_skel_t *conflict,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          svn_wc_notify_func2_t notify_func,
                          void *notify_baton,
                          apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_op_modified(svn_wc__db_t *db,
                       const char *local_abspath,
                       apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__db_op_set_changelist(svn_wc__db_t *db,
                             const char *local_abspath,
                             const char *new_changelist,
                             const apr_array_header_t *changelist_filter,
                             svn_depth_t depth,

                             svn_wc_notify_func2_t notify_func,
                             void *notify_baton,
                             svn_cancel_func_t cancel_func,
                             void *cancel_baton,
                             apr_pool_t *scratch_pool);
# 1556 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_mark_conflict(svn_wc__db_t *db,
                            const char *local_abspath,
                            const svn_skel_t *conflict,
                            const svn_skel_t *work_items,
                            apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__db_op_mark_resolved(svn_wc__db_t *db,
                            const char *local_abspath,
                            svn_boolean_t resolved_text,
                            svn_boolean_t resolved_props,
                            svn_boolean_t resolved_tree,
                            const svn_skel_t *work_items,
                            apr_pool_t *scratch_pool);
# 1591 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_revert(svn_wc__db_t *db,
                     const char *local_abspath,
                     svn_depth_t depth,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);
# 1608 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_revert_list_read(svn_boolean_t *reverted,
                            const apr_array_header_t **marker_files,
                            svn_boolean_t *copied_here,
                            svn_kind_t *kind,
                            svn_wc__db_t *db,
                            const char *local_abspath,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);



typedef struct svn_wc__db_revert_list_copied_child_info_t {
  const char *abspath;
  svn_kind_t kind;
} svn_wc__db_revert_list_copied_child_info_t ;





svn_error_t *
svn_wc__db_revert_list_read_copied_children(const apr_array_header_t **children,
                                            svn_wc__db_t *db,
                                            const char *local_abspath,
                                            apr_pool_t *result_pool,
                                            apr_pool_t *scratch_pool);
# 1644 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_revert_list_notify(svn_wc_notify_func2_t notify_func,
                              void *notify_baton,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_revert_list_done(svn_wc__db_t *db,
                            const char *local_abspath,
                            apr_pool_t *scratch_pool);
# 1836 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_info(svn_wc__db_status_t *status,
                     svn_kind_t *kind,
                     svn_revnum_t *revision,
                     const char **repos_relpath,
                     const char **repos_root_url,
                     const char **repos_uuid,
                     svn_revnum_t *changed_rev,
                     apr_time_t *changed_date,
                     const char **changed_author,
                     svn_depth_t *depth,
                     const svn_checksum_t **checksum,
                     const char **target,


                     const char **original_repos_relpath,
                     const char **original_root_url,
                     const char **original_uuid,
                     svn_revnum_t *original_revision,


                     svn_wc__db_lock_t **lock,


                     svn_filesize_t *recorded_size,
                     apr_time_t *recorded_time,


                     const char **changelist,
                     svn_boolean_t *conflicted,


                     svn_boolean_t *op_root,

                     svn_boolean_t *had_props,
                     svn_boolean_t *props_mod,

                     svn_boolean_t *have_base,
                     svn_boolean_t *have_more_work,
                     svn_boolean_t *have_work,

                     svn_wc__db_t *db,
                     const char *local_abspath,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool);



struct svn_wc__db_info_t {
  svn_wc__db_status_t status;
  svn_kind_t kind;
  svn_revnum_t revnum;
  const char *repos_relpath;
  const char *repos_root_url;
  const char *repos_uuid;
  svn_revnum_t changed_rev;
  const char *changed_author;
  apr_time_t changed_date;
  svn_depth_t depth;

  svn_filesize_t recorded_size;
  apr_time_t recorded_time;

  const char *changelist;
  svn_boolean_t conflicted;

  svn_boolean_t special;

  svn_boolean_t op_root;

  svn_boolean_t has_checksum;
  svn_boolean_t copied;
  svn_boolean_t had_props;
  svn_boolean_t props_mod;

  svn_boolean_t have_base;
  svn_boolean_t have_more_work;

  svn_boolean_t locked;
  svn_wc__db_lock_t *lock;
  svn_boolean_t incomplete;

  const char *moved_to_abspath;
  svn_boolean_t moved_here;

  svn_boolean_t file_external;
};
# 1932 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_children_info(apr_hash_t **nodes,
                              apr_hash_t **conflicts,
                              svn_wc__db_t *db,
                              const char *dir_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);




struct svn_wc__db_walker_info_t {
  svn_wc__db_status_t status;
  svn_kind_t kind;
};
# 1967 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_pristine_info(svn_wc__db_status_t *status,
                              svn_kind_t *kind,
                              svn_revnum_t *changed_rev,
                              apr_time_t *changed_date,
                              const char **changed_author,
                              svn_depth_t *depth,
                              const svn_checksum_t **checksum,
                              const char **target,
                              svn_boolean_t *had_props,
                              apr_hash_t **props,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);
# 1993 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_node_install_info(const char **wcroot_abspath,
                                  const svn_checksum_t **sha1_checksum,
                                  apr_hash_t **pristine_props,
                                  apr_time_t *changed_date,
                                  svn_wc__db_t *db,
                                  const char *local_abspath,
                                  const char *wri_abspath,
                                  apr_pool_t *result_pool,
                                  apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_read_children_walker_info(apr_hash_t **nodes,
                                     svn_wc__db_t *db,
                                     const char *dir_abspath,
                                     apr_pool_t *result_pool,
                                     apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__db_read_url(const char **url,
                    svn_wc__db_t *db,
                    const char *local_abspath,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);
# 2038 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_props(apr_hash_t **props,
                      svn_wc__db_t *db,
                      const char *local_abspath,
                      apr_pool_t *result_pool,
                      apr_pool_t *scratch_pool);
# 2052 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_props_streamily(svn_wc__db_t *db,
                                const char *local_abspath,
                                svn_depth_t depth,
                                svn_boolean_t pristine,
                                const apr_array_header_t *changelists,
                                svn_wc__proplist_receiver_t receiver_func,
                                void *receiver_baton,
                                svn_cancel_func_t cancel_func,
                                void *cancel_baton,
                                apr_pool_t *scratch_pool);
# 2076 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_pristine_props(apr_hash_t **props,
                               svn_wc__db_t *db,
                               const char *local_abspath,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);
# 2100 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_inherited_props(apr_array_header_t **iprops,
                                svn_wc__db_t *db,
                                const char *local_abspath,
                                const char *propname,
                                apr_pool_t *result_pool,
                                apr_pool_t *scratch_pool);
# 2120 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_cached_iprops(apr_array_header_t **iprops,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool);
# 2136 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_get_children_with_cached_iprops(apr_hash_t **iprop_paths,
                                           svn_depth_t depth,
                                           const char *local_abspath,
                                           svn_wc__db_t *db,
                                           apr_pool_t *result_pool,
                                           apr_pool_t *scratch_pool);
# 2151 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_prop_retrieve_recursive(apr_hash_t **values,
                                   svn_wc__db_t *db,
                                   const char *local_abspath,
                                   const char *propname,
                                   apr_pool_t *result_pool,
                                   apr_pool_t *scratch_pool);
# 2177 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_children_of_working_node(const apr_array_header_t **children,
                                         svn_wc__db_t *db,
                                         const char *local_abspath,
                                         apr_pool_t *result_pool,
                                         apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__db_read_children(const apr_array_header_t **children,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 2205 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_conflict_victims(const apr_array_header_t **victims,
                                 svn_wc__db_t *db,
                                 const char *local_abspath,
                                 apr_pool_t *result_pool,
                                 apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__db_get_conflict_marker_files(apr_hash_t **markers,
                                     svn_wc__db_t *db,
                                     const char *local_abspath,
                                     apr_pool_t *result_pool,
                                     apr_pool_t *scratch_pool);
# 2233 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_conflict(svn_skel_t **conflict,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 2251 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_read_kind(svn_kind_t *kind,
                     svn_wc__db_t *db,
                     const char *local_abspath,
                     svn_boolean_t allow_missing,
                     svn_boolean_t show_hidden,
                     apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_node_hidden(svn_boolean_t *hidden,
                       svn_wc__db_t *db,
                       const char *local_abspath,
                       apr_pool_t *scratch_pool);
# 2283 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_node_check_replace(svn_boolean_t *is_replace_root,
                              svn_boolean_t *base_replace,
                              svn_boolean_t *is_replace,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *scratch_pool);
# 2298 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_is_wcroot(svn_boolean_t *is_wcroot,
                     svn_wc__db_t *db,
                     const char *local_abspath,
                     apr_pool_t *scratch_pool);
# 2319 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_is_switched(svn_boolean_t *is_wcroot,
                       svn_boolean_t *is_switched,
                       svn_kind_t *kind,
                       svn_wc__db_t *db,
                       const char *local_abspath,
                       apr_pool_t *scratch_pool);
# 2354 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_global_relocate(svn_wc__db_t *db,
                           const char *local_dir_abspath,
                           const char *repos_root_url,
                           apr_pool_t *scratch_pool);
# 2387 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_global_commit(svn_wc__db_t *db,
                         const char *local_abspath,
                         svn_revnum_t new_revision,
                         svn_revnum_t changed_revision,
                         apr_time_t changed_date,
                         const char *changed_author,
                         const svn_checksum_t *new_checksum,
                         const apr_array_header_t *new_children,
                         apr_hash_t *new_dav_cache,
                         svn_boolean_t keep_changelist,
                         svn_boolean_t no_unlock,
                         const svn_skel_t *work_items,
                         apr_pool_t *scratch_pool);
# 2430 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_global_update(svn_wc__db_t *db,
                         const char *local_abspath,
                         svn_kind_t new_kind,
                         const char *new_repos_relpath,
                         svn_revnum_t new_revision,
                         const apr_hash_t *new_props,
                         svn_revnum_t new_changed_rev,
                         apr_time_t new_changed_date,
                         const char *new_changed_author,
                         const apr_array_header_t *new_children,
                         const svn_checksum_t *new_checksum,
                         const char *new_target,
                         const apr_hash_t *new_dav_cache,
                         const svn_skel_t *conflict,
                         const svn_skel_t *work_items,
                         apr_pool_t *scratch_pool);
# 2482 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_bump_revisions_post_update(svn_wc__db_t *db,
                                         const char *local_abspath,
                                         svn_depth_t depth,
                                         const char *new_repos_relpath,
                                         const char *new_repos_root_url,
                                         const char *new_repos_uuid,
                                         svn_revnum_t new_revision,
                                         apr_hash_t *exclude_relpaths,
                                         apr_hash_t *wcroot_iprops,
                                         apr_pool_t *scratch_pool);
# 2507 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_global_record_fileinfo(svn_wc__db_t *db,
                                  const char *local_abspath,
                                  svn_filesize_t recorded_size,
                                  apr_time_t recorded_time,
                                  apr_pool_t *scratch_pool);
# 2532 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_lock_add(svn_wc__db_t *db,
                    const char *local_abspath,
                    const svn_wc__db_lock_t *lock,
                    apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_lock_remove(svn_wc__db_t *db,
                       const char *local_abspath,
                       apr_pool_t *scratch_pool);
# 2567 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_scan_base_repos(const char **repos_relpath,
                           const char **repos_root_url,
                           const char **repos_uuid,
                           svn_wc__db_t *db,
                           const char *local_abspath,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 2631 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_scan_addition(svn_wc__db_status_t *status,
                         const char **op_root_abspath,
                         const char **repos_relpath,
                         const char **repos_root_url,
                         const char **repos_uuid,
                         const char **original_repos_relpath,
                         const char **original_root_url,
                         const char **original_uuid,
                         svn_revnum_t *original_revision,
                         const char **moved_from_abspath,
                         const char **moved_from_oproot_abspath,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 2742 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_scan_deletion(const char **base_del_abspath,
                         const char **moved_to_abspath,
                         const char **work_del_abspath,
                         const char **moved_to_op_root_abspath,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 2766 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_upgrade_begin(svn_sqlite__db_t **sdb,
                         apr_int64_t *repos_id,
                         apr_int64_t *wc_id,
                         svn_wc__db_t *wc_db,
                         const char *local_dir_abspath,
                         const char *repos_root_url,
                         const char *repos_uuid,
                         apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__db_upgrade_apply_dav_cache(svn_sqlite__db_t *sdb,
                                   const char *dir_relpath,
                                   apr_hash_t *cache_values,
                                   apr_pool_t *scratch_pool);
# 2793 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_upgrade_apply_props(svn_sqlite__db_t *sdb,
                               const char *dir_abspath,
                               const char *local_relpath,
                               apr_hash_t *base_props,
                               apr_hash_t *revert_props,
                               apr_hash_t *working_props,
                               int original_format,
                               apr_int64_t wc_id,
                               apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__db_upgrade_insert_external(svn_wc__db_t *db,
                                   const char *local_abspath,
                                   svn_kind_t kind,
                                   const char *parent_abspath,
                                   const char *def_local_abspath,
                                   const char *repos_relpath,
                                   const char *repos_root_url,
                                   const char *repos_uuid,
                                   svn_revnum_t def_peg_revision,
                                   svn_revnum_t def_revision,
                                   apr_pool_t *scratch_pool);
# 2826 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_upgrade_get_repos_id(apr_int64_t *repos_id,
                                svn_sqlite__db_t *sdb,
                                const char *repos_root_url,
                                apr_pool_t *scratch_pool);
# 2843 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_bump_format(int *result_format,
                       const char *wcroot_abspath,
                       svn_wc__db_t *db,
                       apr_pool_t *scratch_pool);
# 2858 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_wq_add(svn_wc__db_t *db,
                  const char *wri_abspath,
                  const svn_skel_t *work_item,
                  apr_pool_t *scratch_pool);
# 2881 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_wq_fetch_next(apr_uint64_t *id,
                         svn_skel_t **work_item,
                         svn_wc__db_t *db,
                         const char *wri_abspath,
                         apr_uint64_t completed_id,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 2902 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_wclock_obtain(svn_wc__db_t *db,
                         const char *local_abspath,
                         int levels_to_lock,
                         svn_boolean_t steal_lock,
                         apr_pool_t *scratch_pool);



svn_error_t*
svn_wc__db_wclock_find_root(const char **lock_abspath,
                            svn_wc__db_t *db,
                            const char *local_abspath,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__db_wclocked(svn_boolean_t *locked,
                    svn_wc__db_t *db,
                    const char *local_abspath,
                    apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__db_wclock_release(svn_wc__db_t *db,
                          const char *local_abspath,
                          apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_wclock_owns_lock(svn_boolean_t *own_lock,
                            svn_wc__db_t *db,
                            const char *local_abspath,
                            svn_boolean_t exact,
                            apr_pool_t *scratch_pool);
# 2970 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_op_remove_node(svn_boolean_t *left_changes,
                          svn_wc__db_t *db,
                          const char *local_abspath,
                          svn_boolean_t destroy_wc,
                          svn_boolean_t destroy_changes,
                          svn_revnum_t not_present_revision,
                          svn_wc__db_status_t not_present_status,
                          svn_kind_t not_present_kind,
                          const svn_skel_t *conflict,
                          const svn_skel_t *work_items,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_op_set_base_depth(svn_wc__db_t *db,
                             const char *local_abspath,
                             svn_depth_t depth,
                             apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__db_temp_get_format(int *format,
                           svn_wc__db_t *db,
                           const char *local_dir_abspath,
                           apr_pool_t *scratch_pool);


svn_wc_adm_access_t *
svn_wc__db_temp_get_access(svn_wc__db_t *db,
                           const char *local_dir_abspath,
                           apr_pool_t *scratch_pool);
void
svn_wc__db_temp_set_access(svn_wc__db_t *db,
                           const char *local_dir_abspath,
                           svn_wc_adm_access_t *adm_access,
                           apr_pool_t *scratch_pool);
svn_error_t *
svn_wc__db_temp_close_access(svn_wc__db_t *db,
                             const char *local_dir_abspath,
                             svn_wc_adm_access_t *adm_access,
                             apr_pool_t *scratch_pool);
void
svn_wc__db_temp_clear_access(svn_wc__db_t *db,
                             const char *local_dir_abspath,
                             apr_pool_t *scratch_pool);


apr_hash_t *
svn_wc__db_temp_get_all_access(svn_wc__db_t *db,
                               apr_pool_t *result_pool);
# 3037 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_temp_borrow_sdb(svn_sqlite__db_t **sdb,
                           svn_wc__db_t *db,
                           const char *local_dir_abspath,
                           apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_temp_wcroot_tempdir(const char **temp_dir_abspath,
                               svn_wc__db_t *db,
                               const char *wri_abspath,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_temp_op_start_directory_update(svn_wc__db_t *db,
                                          const char *local_abspath,
                                          const char *new_repos_relpath,
                                          svn_revnum_t new_rev,
                                          apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_temp_op_end_directory_update(svn_wc__db_t *db,
                                        const char *local_dir_abspath,
                                        apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_op_make_copy(svn_wc__db_t *db,
                        const char *local_abspath,
                        const svn_skel_t *conflicts,
                        const svn_skel_t *work_items,
                        apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_drop_root(svn_wc__db_t *db,
                     const char *local_abspath,
                     apr_pool_t *scratch_pool);


int
svn_wc__db_op_depth_for_upgrade(const char *local_relpath);




svn_error_t *
svn_wc__db_info_below_working(svn_boolean_t *have_base,
                              svn_boolean_t *have_work,
                              svn_wc__db_status_t *status,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__db_get_not_present_descendants(const apr_array_header_t **descendants,
                                       svn_wc__db_t *db,
                                       const char *local_abspath,
                                       apr_pool_t *result_pool,
                                       apr_pool_t *scratch_pool);
# 3140 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_revision_status(svn_revnum_t *min_revision,
                           svn_revnum_t *max_revision,
                           svn_boolean_t *is_sparse_checkout,
                           svn_boolean_t *is_modified,
                           svn_boolean_t *is_switched,
                           svn_wc__db_t *db,
                           const char *local_abspath,
                           const char *trail_url,
                           svn_boolean_t committed,
                           svn_cancel_func_t cancel_func,
                           void *cancel_baton,
                           apr_pool_t *scratch_pool);
# 3168 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_min_max_revisions(svn_revnum_t *min_revision,
                             svn_revnum_t *max_revision,
                             svn_wc__db_t *db,
                             const char *local_abspath,
                             svn_boolean_t committed,
                             apr_pool_t *scratch_pool);
# 3188 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_has_switched_subtrees(svn_boolean_t *is_switched,
                                 svn_wc__db_t *db,
                                 const char *local_abspath,
                                 const char *trail_url,
                                 apr_pool_t *scratch_pool);
# 3202 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc_db.h"
svn_error_t *
svn_wc__db_get_excluded_subtrees(apr_hash_t **server_excluded_subtrees,
                                 svn_wc__db_t *db,
                                 const char *local_abspath,
                                 apr_pool_t *result_pool,
                                 apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__db_has_local_mods(svn_boolean_t *is_modified,
                          svn_wc__db_t *db,
                          const char *local_abspath,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__db_verify(svn_wc__db_t *db,
                  const char *wri_abspath,
                  apr_pool_t *scratch_pool);




struct svn_wc__db_moved_to_t {
  const char *local_relpath;
  int op_depth;
};




svn_error_t *
svn_wc__db_follow_moved_to(apr_array_header_t **moved_tos,
                           svn_wc__db_t *db,
                           const char *local_abspath,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__db_update_moved_away_conflict_victim(svn_skel_t **work_items,
                                             svn_wc__db_t *db,
                                             const char *victim_abspath,
                                             svn_wc_notify_func2_t notify_func,
                                             void *notify_baton,
                                             svn_cancel_func_t cancel_func,
                                             void *cancel_baton,
                                             apr_pool_t *result_pool,
                                             apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__db_vacuum(svn_wc__db_t *db,
                  const char *local_abspath,
                  apr_pool_t *scratch_pool);
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h" 2
# 198 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
const char *
svn_wc__version_string_from_format(int wc_format);
# 212 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
struct svn_wc_context_t
{

  svn_wc__db_t *db;




  svn_boolean_t close_db_on_destroy;


  apr_pool_t *state_pool;
};
# 233 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__context_create_with_db(svn_wc_context_t **wc_ctx,
                               svn_config_t *config,
                               svn_wc__db_t *db,
                               apr_pool_t *result_pool);
# 247 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
apr_pool_t *
svn_wc__get_committed_queue_pool(const struct svn_wc_committed_queue_t *queue);
# 281 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__process_committed_internal(svn_wc__db_t *db,
                                   const char *local_abspath,
                                   svn_boolean_t recurse,
                                   svn_boolean_t top_of_recurse,
                                   svn_revnum_t new_revnum,
                                   apr_time_t new_date,
                                   const char *rev_author,
                                   apr_hash_t *new_dav_cache,
                                   svn_boolean_t no_unlock,
                                   svn_boolean_t keep_changelist,
                                   const svn_checksum_t *sha1_checksum,
                                   const svn_wc_committed_queue_t *queue,
                                   apr_pool_t *scratch_pool);




struct svn_wc_traversal_info_t
{


  apr_pool_t *pool;
# 312 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
  apr_hash_t *externals_old;
  apr_hash_t *externals_new;




  apr_hash_t *depths;
};
# 341 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *svn_wc__ensure_directory(const char *path, apr_pool_t *pool);
# 359 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
apr_hash_t *
svn_wc__prop_array_to_hash(const apr_array_header_t *props,
                           apr_pool_t *result_pool);
# 383 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__internal_file_modified_p(svn_boolean_t *modified_p,
                                 svn_wc__db_t *db,
                                 const char *local_abspath,
                                 svn_boolean_t exact_comparison,
                                 apr_pool_t *scratch_pool);
# 438 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__internal_merge(svn_skel_t **work_items,
                       svn_skel_t **conflict_skel,
                       enum svn_wc_merge_outcome_t *merge_outcome,
                       svn_wc__db_t *db,
                       const char *left_abspath,
                       const char *right_abspath,
                       const char *target_abspath,
                       const char *wri_abspath,
                       const char *left_label,
                       const char *right_label,
                       const char *target_label,
                       apr_hash_t *old_actual_props,
                       svn_boolean_t dry_run,
                       const char *diff3_cmd,
                       const apr_array_header_t *merge_options,
                       const apr_array_header_t *prop_diff,
                       svn_cancel_func_t cancel_func,
                       void *cancel_baton,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__walker_default_error_handler(const char *path,
                                     svn_error_t *err,
                                     void *walk_baton,
                                     apr_pool_t *pool);
# 483 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__ambient_depth_filter_editor(const svn_delta_editor_t **editor,
                                    void **edit_baton,
                                    svn_wc__db_t *db,
                                    const char *anchor_abspath,
                                    const char *target,
                                    const svn_delta_editor_t *wrapped_editor,
                                    void *wrapped_edit_baton,
                                    apr_pool_t *result_pool);




svn_error_t *
svn_wc__internal_conflicted_p(svn_boolean_t *text_conflicted_p,
                              svn_boolean_t *prop_conflicted_p,
                              svn_boolean_t *tree_conflicted_p,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__internal_transmit_text_deltas(const char **tempfile,
                                      const svn_checksum_t **new_text_base_md5_checksum,
                                      const svn_checksum_t **new_text_base_sha1_checksum,
                                      svn_wc__db_t *db,
                                      const char *local_abspath,
                                      svn_boolean_t fulltext,
                                      const svn_delta_editor_t *editor,
                                      void *file_baton,
                                      apr_pool_t *result_pool,
                                      apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_transmit_prop_deltas(svn_wc__db_t *db,
                                     const char *local_abspath,
                                     const svn_delta_editor_t *editor,
                                     void *baton,
                                     apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_ensure_adm(svn_wc__db_t *db,
                            const char *local_abspath,
                            const char *url,
                            const char *repos_root_url,
                            const char *repos_uuid,
                            svn_revnum_t revision,
                            svn_depth_t depth,
                            apr_pool_t *scratch_pool);



svn_boolean_t
svn_wc__internal_changelist_match(svn_wc__db_t *db,
                                  const char *local_abspath,
                                  const apr_hash_t *clhash,
                                  apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_walk_status(svn_wc__db_t *db,
                             const char *local_abspath,
                             svn_depth_t depth,
                             svn_boolean_t get_all,
                             svn_boolean_t no_ignore,
                             svn_boolean_t ignore_text_mods,
                             const apr_array_header_t *ignore_patterns,
                             svn_wc_status_func4_t status_func,
                             void *status_baton,
                             svn_cancel_func_t cancel_func,
                             void *cancel_baton,
                             apr_pool_t *scratch_pool);


typedef svn_error_t *(*svn_wc__node_found_func_t)(const char *local_abspath,
                                                  svn_node_kind_t kind,
                                                  void *walk_baton,
                                                  apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__internal_walk_children(svn_wc__db_t *db,
                               const char *local_abspath,
                               svn_boolean_t show_hidden,
                               const apr_array_header_t *changelists,
                               svn_wc__node_found_func_t walk_callback,
                               void *walk_baton,
                               svn_depth_t walk_depth,
                               svn_cancel_func_t cancel_func,
                               void *cancel_baton,
                               apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__internal_remove_from_revision_control(svn_wc__db_t *db,
                                              const char *local_abspath,
                                              svn_boolean_t destroy_wf,
                                              svn_cancel_func_t cancel_func,
                                              void *cancel_baton,
                                              apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_node_get_schedule(svn_wc_schedule_t *schedule,
                                   svn_boolean_t *copied,
                                   svn_wc__db_t *db,
                                   const char *local_abspath,
                                   apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_get_origin(svn_boolean_t *is_copy,
                            svn_revnum_t *revision,
                            const char **repos_relpath,
                            const char **repos_root_url,
                            const char **repos_uuid,
                            const char **copy_root_abspath,
                            svn_wc__db_t *db,
                            const char *local_abspath,
                            svn_boolean_t scan_deleted,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_get_repos_info(const char **repos_root_url,
                                const char **repos_uuid,
                                svn_wc__db_t *db,
                                const char *local_abspath,
                                apr_pool_t *result_pool,
                                apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_get_repos_relpath(const char **repos_relpath,
                                   svn_wc__db_t *db,
                                   const char *local_abspath,
                                   apr_pool_t *result_pool,
                                   apr_pool_t *scratch_pool);






svn_error_t *
svn_wc__upgrade_sdb(int *result_format,
                    const char *wcroot_abspath,
                    svn_sqlite__db_t *sdb,
                    int start_format,
                    apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__upgrade_conflict_skel_from_raw(svn_skel_t **conflicts,
                                       svn_wc__db_t *db,
                                       const char *wri_abspath,
                                       const char *local_relpath,
                                       const char *conflict_old,
                                       const char *conflict_wrk,
                                       const char *conflict_new,
                                       const char *prej_file,
                                       const char *tree_conflict_data,
                                       apr_size_t tree_conflict_len,
                                       apr_pool_t *result_pool,
                                       apr_pool_t *scratch_pool);

svn_error_t *
svn_wc__wipe_postupgrade(const char *dir_abspath,
                         svn_boolean_t whole_admin,
                         svn_cancel_func_t cancel_func,
                         void *cancel_baton,
                         apr_pool_t *scratch_pool);




svn_error_t *
svn_wc__write_check(svn_wc__db_t *db,
                    const char *local_abspath,
                    apr_pool_t *scratch_pool);
# 685 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__read_conflicts(const apr_array_header_t **conflicts,
                       svn_wc__db_t *db,
                       const char *local_abspath,
                       svn_boolean_t create_tempfiles,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 707 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/wc.h"
svn_error_t *
svn_wc__perform_file_merge(svn_skel_t **work_items,
                           svn_skel_t **conflict_skel,
                           svn_boolean_t *found_conflict,
                           svn_wc__db_t *db,
                           const char *local_abspath,
                           const char *wri_abspath,
                           const svn_checksum_t *new_checksum,
                           const svn_checksum_t *original_checksum,
                           apr_hash_t *old_actual_props,
                           const apr_array_header_t *ext_patterns,
                           svn_revnum_t old_revision,
                           svn_revnum_t target_revision,
                           const apr_array_header_t *propchanges,
                           const char *diff3_cmd,
                           svn_cancel_func_t cancel_func,
                           void *cancel_baton,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);




struct svn_wc__shim_fetch_baton_t
{
  svn_wc__db_t *db;
  const char *base_abspath;
  svn_boolean_t fetch_base;
};


svn_error_t *
svn_wc__fetch_kind_func(svn_kind_t *kind,
                        void *baton,
                        const char *path,
                        svn_revnum_t base_revision,
                        apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__fetch_props_func(apr_hash_t **props,
                         void *baton,
                         const char *path,
                         svn_revnum_t base_revision,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__fetch_base_func(const char **filename,
                        void *baton,
                        const char *path,
                        svn_revnum_t base_revision,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);





svn_error_t *
svn_wc__externals_find_target_dups(apr_array_header_t **duplicate_targets,
                                   apr_array_header_t *externals,
                                   apr_pool_t *pool,
                                   apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__revert_internal(svn_wc__db_t *db,
                        const char *local_abspath,
                        svn_depth_t depth,
                        svn_boolean_t use_commit_times,
                        svn_cancel_func_t cancel_func,
                        void *cancel_baton,
                        svn_wc_notify_func2_t notify_func,
                        void *notify_baton,
                        apr_pool_t *scratch_pool);

svn_error_t *
svn_wc__node_has_local_mods(svn_boolean_t *modified,
                            svn_boolean_t *all_edits_are_deletes,
                            svn_wc__db_t *db,
                            const char *local_abspath,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *scratch_pool);
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/props.h" 1
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/props.h"
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
# 112 "./subversion/include/svn_props.h"
apr_array_header_t *
svn_prop_hash_to_array(const apr_hash_t *hash,
                       apr_pool_t *pool);
# 125 "./subversion/include/svn_props.h"
apr_hash_t *
svn_prop_array_to_hash(const apr_array_header_t *properties,
                       apr_pool_t *result);







apr_hash_t *
svn_prop_hash_dup(const apr_hash_t *hash,
                  apr_pool_t *pool);
# 146 "./subversion/include/svn_props.h"
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
# 204 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_has_svn_prop(const apr_hash_t *props,
                      apr_pool_t *pool);






svn_boolean_t
svn_prop_is_boolean(const char *prop_name);
# 225 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_rev_prop(const char *prop_name);
# 238 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_node_prop(const char *prop_name);
# 251 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_file_prop(const char *prop_name);
# 264 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_is_known_svn_dir_prop(const char *prop_name);
# 274 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_needs_translation(const char *prop_name);
# 289 "./subversion/include/svn_props.h"
svn_error_t *
svn_categorize_props(const apr_array_header_t *proplist,
                     apr_array_header_t **entry_props,
                     apr_array_header_t **wc_props,
                     apr_array_header_t **regular_props,
                     apr_pool_t *pool);
# 318 "./subversion/include/svn_props.h"
svn_error_t *
svn_prop_diffs(apr_array_header_t **propdiffs,
               const apr_hash_t *target_props,
               const apr_hash_t *source_props,
               apr_pool_t *pool);
# 333 "./subversion/include/svn_props.h"
svn_boolean_t
svn_prop_name_is_valid(const char *prop_name);
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/props.h" 2








svn_error_t *
svn_wc__internal_propdiff(apr_array_header_t **propchanges,
                          apr_hash_t **original_props,
                          svn_wc__db_t *db,
                          const char *local_abspath,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__internal_propget(const svn_string_t **value,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         const char *name,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 74 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/props.h"
svn_error_t *
svn_wc__canonicalize_props(apr_hash_t **prepared_props,
                           const char *local_abspath,
                           svn_node_kind_t node_kind,
                           const apr_hash_t *props,
                           svn_boolean_t skip_some_checks,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 102 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/props.h"
svn_error_t *
svn_wc__merge_props(svn_skel_t **conflict_skel,
                    svn_wc_notify_state_t *state,
                    apr_hash_t **new_actual_props,
                    svn_wc__db_t *db,
                    const char *local_abspath,
                              apr_hash_t *server_baseprops,
                              apr_hash_t *pristine_props,
                              apr_hash_t *actual_props,
                    const apr_array_header_t *propchanges,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);





svn_boolean_t svn_wc__has_magic_property(const apr_array_header_t *properties);


svn_error_t *
svn_wc__props_modified(svn_boolean_t *modified_p,
                       svn_wc__db_t *db,
                       const char *local_abspath,
                       apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__get_actual_props(apr_hash_t **props,
                         svn_wc__db_t *db,
                         const char *local_abspath,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);

svn_error_t *
svn_wc__create_prejfile(const char **tmp_prejfile_abspath,
                        svn_wc__db_t *db,
                        const char *local_abspath,
                        const svn_skel_t *conflict_skel,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);
# 50 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/entries.h" 1
# 68 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/entries.h"
svn_error_t *
svn_wc__get_entry(const svn_wc_entry_t **entry,
                  svn_wc__db_t *db,
                  const char *local_abspath,
                  svn_boolean_t allow_unversioned,
                  svn_node_kind_t kind,
                  apr_pool_t *result_pool,
                  apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__entry_is_hidden(svn_boolean_t *hidden, const svn_wc_entry_t *entry);




typedef struct svn_wc__text_base_file_info_t
{
  svn_checksum_t *sha1_checksum;
  svn_checksum_t *md5_checksum;
} svn_wc__text_base_file_info_t;



typedef struct svn_wc__text_base_info_t
{
  svn_wc__text_base_file_info_t normal_base;
  svn_wc__text_base_file_info_t revert_base;
} svn_wc__text_base_info_t;
# 107 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/entries.h"
svn_error_t *
svn_wc__write_upgraded_entries(void **dir_baton,
                               void *parent_baton,
                               svn_wc__db_t *db,
                               svn_sqlite__db_t *sdb,
                               apr_int64_t repos_id,
                               apr_int64_t wc_id,
                               const char *dir_abspath,
                               const char *new_root_abspath,
                               apr_hash_t *entries,
                               apr_hash_t *text_bases_info,
                               apr_pool_t *result_pool,
                               apr_pool_t *scratch_pool);
# 129 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/entries.h"
svn_error_t *
svn_wc__unserialize_file_external(const char **path_result,
                                  svn_opt_revision_t *peg_rev_result,
                                  svn_opt_revision_t *rev_result,
                                  const char *str,
                                  apr_pool_t *pool);
# 144 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/entries.h"
svn_error_t *
svn_wc__serialize_file_external(const char **str,
                                const char *path,
                                const svn_opt_revision_t *peg_rev,
                                const svn_opt_revision_t *rev,
                                apr_pool_t *pool);




svn_error_t *
svn_wc__entries_read_internal(apr_hash_t **entries,
                              svn_wc_adm_access_t *adm_access,
                              svn_boolean_t show_hidden,
                              apr_pool_t *pool);
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/translate.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/translate.h"
# 1 "./subversion/include/svn_subst.h" 1
# 53 "./subversion/include/svn_subst.h"
typedef enum svn_subst_eol_style
{

  svn_subst_eol_style_unknown,


  svn_subst_eol_style_none,


  svn_subst_eol_style_native,


  svn_subst_eol_style_fixed

} svn_subst_eol_style_t;
# 84 "./subversion/include/svn_subst.h"
void
svn_subst_eol_style_from_value(svn_subst_eol_style_t *style,
                               const char **eol,
                               const char *value);
# 97 "./subversion/include/svn_subst.h"
svn_boolean_t
svn_subst_translation_required(svn_subst_eol_style_t style,
                               const char *eol,
                               apr_hash_t *keywords,
                               svn_boolean_t special,
                               svn_boolean_t force_eol_check);






typedef struct svn_subst_keywords_t
{






  const svn_string_t *revision;
  const svn_string_t *date;
  const svn_string_t *author;
  const svn_string_t *url;
  const svn_string_t *id;

} svn_subst_keywords_t;
# 147 "./subversion/include/svn_subst.h"
svn_error_t *
svn_subst_build_keywords2(apr_hash_t **kw,
                          const char *keywords_string,
                          const char *rev,
                          const char *url,
                          apr_time_t date,
                          const char *author,
                          apr_pool_t *pool);






__attribute__((deprecated))
svn_error_t *
svn_subst_build_keywords(svn_subst_keywords_t *kw,
                         const char *keywords_string,
                         const char *rev,
                         const char *url,
                         apr_time_t date,
                         const char *author,
                         apr_pool_t *pool);
# 188 "./subversion/include/svn_subst.h"
svn_boolean_t
svn_subst_keywords_differ2(apr_hash_t *a,
                           apr_hash_t *b,
                           svn_boolean_t compare_values,
                           apr_pool_t *pool);






__attribute__((deprecated))
svn_boolean_t
svn_subst_keywords_differ(const svn_subst_keywords_t *a,
                          const svn_subst_keywords_t *b,
                          svn_boolean_t compare_values);
# 234 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_translate_stream3(svn_stream_t *src_stream,
                            svn_stream_t *dst_stream,
                            const char *eol_str,
                            svn_boolean_t repair,
                            apr_hash_t *keywords,
                            svn_boolean_t expand,
                            apr_pool_t *scratch_pool);







__attribute__((deprecated))
svn_error_t *
svn_subst_translate_stream2(svn_stream_t *src_stream,
                            svn_stream_t *dst_stream,
                            const char *eol_str,
                            svn_boolean_t repair,
                            const svn_subst_keywords_t *keywords,
                            svn_boolean_t expand,
                            apr_pool_t *scratch_pool);
# 268 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_translate_stream(svn_stream_t *src_stream,
                           svn_stream_t *dst_stream,
                           const char *eol_str,
                           svn_boolean_t repair,
                           const svn_subst_keywords_t *keywords,
                           svn_boolean_t expand);
# 321 "./subversion/include/svn_subst.h"
svn_stream_t *
svn_subst_stream_translated(svn_stream_t *stream,
                            const char *eol_str,
                            svn_boolean_t repair,
                            apr_hash_t *keywords,
                            svn_boolean_t expand,
                            apr_pool_t *result_pool);
# 346 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_stream_translated_to_normal_form(svn_stream_t **stream,
                                           svn_stream_t *source,
                                           svn_subst_eol_style_t eol_style,
                                           const char *eol_str,
                                           svn_boolean_t always_repair_eols,
                                           apr_hash_t *keywords,
                                           apr_pool_t *pool);
# 369 "./subversion/include/svn_subst.h"
svn_error_t *
svn_subst_read_specialfile(svn_stream_t **stream,
                           const char *path,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);
# 392 "./subversion/include/svn_subst.h"
svn_error_t *
svn_subst_create_specialfile(svn_stream_t **stream,
                             const char *path,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);
# 410 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_stream_from_specialfile(svn_stream_t **stream,
                                  const char *path,
                                  apr_pool_t *pool);
# 439 "./subversion/include/svn_subst.h"
svn_error_t *
svn_subst_copy_and_translate4(const char *src,
                              const char *dst,
                              const char *eol_str,
                              svn_boolean_t repair,
                              apr_hash_t *keywords,
                              svn_boolean_t expand,
                              svn_boolean_t special,
                              svn_cancel_func_t cancel_func,
                              void *cancel_baton,
                              apr_pool_t *pool);
# 459 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_copy_and_translate3(const char *src,
                              const char *dst,
                              const char *eol_str,
                              svn_boolean_t repair,
                              apr_hash_t *keywords,
                              svn_boolean_t expand,
                              svn_boolean_t special,
                              apr_pool_t *pool);
# 478 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_copy_and_translate2(const char *src,
                              const char *dst,
                              const char *eol_str,
                              svn_boolean_t repair,
                              const svn_subst_keywords_t *keywords,
                              svn_boolean_t expand,
                              svn_boolean_t special,
                              apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_subst_copy_and_translate(const char *src,
                             const char *dst,
                             const char *eol_str,
                             svn_boolean_t repair,
                             const svn_subst_keywords_t *keywords,
                             svn_boolean_t expand,
                             apr_pool_t *pool);
# 521 "./subversion/include/svn_subst.h"
svn_error_t *
svn_subst_translate_cstring2(const char *src,
                             const char **dst,
                             const char *eol_str,
                             svn_boolean_t repair,
                             apr_hash_t *keywords,
                             svn_boolean_t expand,
                             apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_subst_translate_cstring(const char *src,
                            const char **dst,
                            const char *eol_str,
                            svn_boolean_t repair,
                            const svn_subst_keywords_t *keywords,
                            svn_boolean_t expand,
                            apr_pool_t *pool);
# 566 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_translate_to_normal_form(const char *src,
                                   const char *dst,
                                   svn_subst_eol_style_t eol_style,
                                   const char *eol_str,
                                   svn_boolean_t always_repair_eols,
                                   apr_hash_t *keywords,
                                   svn_boolean_t special,
                                   apr_pool_t *pool);
# 597 "./subversion/include/svn_subst.h"
__attribute__((deprecated))
svn_error_t *
svn_subst_stream_detranslated(svn_stream_t **stream_p,
                              const char *src,
                              svn_subst_eol_style_t eol_style,
                              const char *eol_str,
                              svn_boolean_t always_repair_eols,
                              apr_hash_t *keywords,
                              svn_boolean_t special,
                              apr_pool_t *pool);
# 634 "./subversion/include/svn_subst.h"
svn_error_t *
svn_subst_translate_string2(svn_string_t **new_value,
                            svn_boolean_t *translated_to_utf8,
                            svn_boolean_t *translated_line_endings,
                            const svn_string_t *value,
                            const char *encoding,
                            svn_boolean_t repair,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);






__attribute__((deprecated))
svn_error_t *svn_subst_translate_string(svn_string_t **new_value,
                                        const svn_string_t *value,
                                        const char *encoding,
                                        apr_pool_t *pool);
# 662 "./subversion/include/svn_subst.h"
svn_error_t *svn_subst_detranslate_string(svn_string_t **new_value,
                                          const svn_string_t *value,
                                          svn_boolean_t for_output,
                                          apr_pool_t *pool);
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/translate.h" 2
# 79 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/translate.h"
svn_error_t *
svn_wc__get_translate_info(svn_subst_eol_style_t *style,
                           const char **eol,
                           apr_hash_t **keywords,
                           svn_boolean_t *special,
                           svn_wc__db_t *db,
                           const char *local_abspath,
                           apr_hash_t *props,
                           svn_boolean_t for_normalization,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);




void svn_wc__eol_value_from_string(const char **value,
                                   const char *eol);
# 124 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/translate.h"
svn_error_t *
svn_wc__expand_keywords(apr_hash_t **keywords,
                        svn_wc__db_t *db,
                        const char *local_abspath,
                        const char *wri_abspath,
                        const char *keyword_list,
                        svn_boolean_t for_normalization,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool);
# 155 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/translate.h"
svn_error_t *
svn_wc__sync_flags_with_props(svn_boolean_t *did_set,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *scratch_pool);


svn_error_t *
svn_wc__internal_translated_stream(svn_stream_t **stream,
                                   svn_wc__db_t *db,
                                   const char *local_abspath,
                                   const char *versioned_abspath,
                                   apr_uint32_t flags,
                                   apr_pool_t *result_pool,
                                   apr_pool_t *scratch_pool);



svn_error_t *
svn_wc__internal_translated_file(const char **xlated_abspath,
                                 const char *src_abspath,
                                 svn_wc__db_t *db,
                                 const char *versioned_abspath,
                                 apr_uint32_t flags,
                                 svn_cancel_func_t cancel_func,
                                 void *cancel_baton,
                                 apr_pool_t *result_pool,
                                 apr_pool_t *scratch_pool);
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/tree_conflicts.h" 1
# 63 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/tree_conflicts.h"
svn_error_t *
svn_wc__serialize_conflict(svn_skel_t **skel,
                           const svn_wc_conflict_description2_t *conflict,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool);







svn_error_t *
svn_wc__deserialize_conflict(const svn_wc_conflict_description2_t **conflict,
                             const svn_skel_t *skel,
                             const char *dir_path,
                             apr_pool_t *result_pool,
                             apr_pool_t *scratch_pool);



extern const svn_token_map_t svn_wc__operation_map[];
extern const svn_token_map_t svn_wc__conflict_action_map[];
extern const svn_token_map_t svn_wc__conflict_reason_map[];
# 53 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2


# 1 "./subversion/include/private/svn_fspath.h" 1
# 47 "./subversion/include/private/svn_fspath.h"
svn_boolean_t
svn_fspath__is_canonical(const char *fspath);
# 63 "./subversion/include/private/svn_fspath.h"
const char *
svn_fspath__canonicalize(const char *fspath,
                         apr_pool_t *pool);
# 74 "./subversion/include/private/svn_fspath.h"
const char *
svn_fspath__dirname(const char *fspath,
                    apr_pool_t *pool);
# 86 "./subversion/include/private/svn_fspath.h"
const char *
svn_fspath__basename(const char *fspath,
                     apr_pool_t *pool);
# 103 "./subversion/include/private/svn_fspath.h"
void
svn_fspath__split(const char **dirpath,
                  const char **base_name,
                  const char *fspath,
                  apr_pool_t *result_pool);






char *
svn_fspath__join(const char *fspath,
                 const char *relpath,
                 apr_pool_t *result_pool);







svn_boolean_t
svn_fspath__is_root(const char *fspath,
                    apr_size_t len);
# 136 "./subversion/include/private/svn_fspath.h"
const char *
svn_fspath__skip_ancestor(const char *parent_fspath,
                          const char *child_fspath);






char *
svn_fspath__get_longest_ancestor(const char *fspath1,
                                 const char *fspath2,
                                 apr_pool_t *result_pool);
# 167 "./subversion/include/private/svn_fspath.h"
const char *
svn_urlpath__canonicalize(const char *uri, apr_pool_t *pool);
# 56 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2
# 1 "./subversion/include/private/svn_editor.h" 1
# 402 "./subversion/include/private/svn_editor.h"
typedef struct svn_editor_t svn_editor_t;
# 439 "./subversion/include/private/svn_editor.h"
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
  svn_kind_t kind,
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
  apr_hash_t *props,
  const svn_checksum_t *checksum,
  svn_stream_t *contents,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_alter_symlink_t)(
  void *baton,
  const char *relpath,
  svn_revnum_t revision,
  apr_hash_t *props,
  const char *target,
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




typedef svn_error_t *(*svn_editor_cb_rotate_t)(
  void *baton,
  const apr_array_header_t *relpaths,
  const apr_array_header_t *revisions,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_complete_t)(
  void *baton,
  apr_pool_t *scratch_pool);




typedef svn_error_t *(*svn_editor_cb_abort_t)(
  void *baton,
  apr_pool_t *scratch_pool);
# 585 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_create(svn_editor_t **editor,
                  void *editor_baton,
                  svn_cancel_func_t cancel_func,
                  void *cancel_baton,
                  apr_pool_t *result_pool,
                  apr_pool_t *scratch_pool);
# 601 "./subversion/include/private/svn_editor.h"
void *
svn_editor_get_baton(const svn_editor_t *editor);
# 611 "./subversion/include/private/svn_editor.h"
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
svn_editor_setcb_rotate(svn_editor_t *editor,
                        svn_editor_cb_rotate_t callback,
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
  svn_editor_cb_rotate_t cb_rotate;
  svn_editor_cb_complete_t cb_complete;
  svn_editor_cb_abort_t cb_abort;

} svn_editor_cb_many_t;






svn_error_t *
svn_editor_setcb_many(svn_editor_t *editor,
                      const svn_editor_cb_many_t *many,
                      apr_pool_t *scratch_pool);
# 809 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_directory(svn_editor_t *editor,
                         const char *relpath,
                         const apr_array_header_t *children,
                         apr_hash_t *props,
                         svn_revnum_t replaces_rev);
# 840 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_file(svn_editor_t *editor,
                    const char *relpath,
                    const svn_checksum_t *checksum,
                    svn_stream_t *contents,
                    apr_hash_t *props,
                    svn_revnum_t replaces_rev);
# 859 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_symlink(svn_editor_t *editor,
                       const char *relpath,
                       const char *target,
                       apr_hash_t *props,
                       svn_revnum_t replaces_rev);
# 878 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_add_absent(svn_editor_t *editor,
                      const char *relpath,
                      svn_kind_t kind,
                      svn_revnum_t replaces_rev);
# 911 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_alter_directory(svn_editor_t *editor,
                           const char *relpath,
                           svn_revnum_t revision,
                           const apr_array_header_t *children,
                           apr_hash_t *props);
# 941 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_alter_file(svn_editor_t *editor,
                      const char *relpath,
                      svn_revnum_t revision,
                      apr_hash_t *props,
                      const svn_checksum_t *checksum,
                      svn_stream_t *contents);
# 968 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_alter_symlink(svn_editor_t *editor,
                         const char *relpath,
                         svn_revnum_t revision,
                         apr_hash_t *props,
                         const char *target);
# 983 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_delete(svn_editor_t *editor,
                  const char *relpath,
                  svn_revnum_t revision);
# 1003 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_copy(svn_editor_t *editor,
                const char *src_relpath,
                svn_revnum_t src_revision,
                const char *dst_relpath,
                svn_revnum_t replaces_rev);
# 1028 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_move(svn_editor_t *editor,
                const char *src_relpath,
                svn_revnum_t src_revision,
                const char *dst_relpath,
                svn_revnum_t replaces_rev);
# 1060 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_rotate(svn_editor_t *editor,
                  const apr_array_header_t *relpaths,
                  const apr_array_header_t *revisions);
# 1072 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_complete(svn_editor_t *editor);
# 1083 "./subversion/include/private/svn_editor.h"
svn_error_t *
svn_editor_abort(svn_editor_t *editor);
# 1100 "./subversion/include/private/svn_editor.h"
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
# 57 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c" 2




struct walk_status_baton
{

  svn_wc__db_t *db;



  const char *target_abspath;


  svn_boolean_t ignore_text_mods;


  apr_hash_t *externals;



  const char *repos_root;


  apr_hash_t *repos_locks;
};



struct edit_baton
{

  const char *anchor_abspath;
  const char *target_abspath;
  const char *target_basename;


  svn_wc__db_t *db;
  svn_wc_context_t *wc_ctx;
# 105 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  svn_depth_t default_depth;


  svn_boolean_t get_all;


  svn_boolean_t no_ignore;




  svn_revnum_t *target_revision;


  svn_wc_status_func4_t status_func;
  void *status_baton;


  svn_cancel_func_t cancel_func;
  void *cancel_baton;


  const apr_array_header_t *ignores;


  svn_wc_status3_t *anchor_status;


  svn_boolean_t root_opened;


  struct walk_status_baton wb;
};


struct dir_baton
{

  const char *local_abspath;


  const char *name;


  struct edit_baton *edit_baton;



  struct dir_baton *parent_baton;







  svn_depth_t depth;



  svn_boolean_t excluded;





  svn_boolean_t added;



  svn_boolean_t prop_changed;



  svn_boolean_t text_changed;




  apr_hash_t *statii;


  apr_pool_t *pool;


  const char *repos_relpath;


  svn_node_kind_t ood_kind;
  svn_revnum_t ood_changed_rev;
  apr_time_t ood_changed_date;
  const char *ood_changed_author;
};


struct file_baton
{

  const char *local_abspath;


  struct edit_baton *edit_baton;


  struct dir_baton *dir_baton;


  apr_pool_t *pool;


  const char *name;





  svn_boolean_t added;



  svn_boolean_t text_changed;



  svn_boolean_t prop_changed;


  const char *repos_relpath;


  svn_node_kind_t ood_kind;
  svn_revnum_t ood_changed_rev;
  apr_time_t ood_changed_date;

  const char *ood_changed_author;
};






static svn_error_t *
read_info(const struct svn_wc__db_info_t **info,
          const char *local_abspath,
          svn_wc__db_t *db,
          apr_pool_t *result_pool,
          apr_pool_t *scratch_pool)
{
  struct svn_wc__db_info_t *mtb = memset(apr_palloc(result_pool, sizeof(*mtb)), 0, sizeof(*mtb));
  const svn_checksum_t *checksum;
  const char *original_repos_relpath;

  do { svn_error_t *svn_err__temp = (svn_wc__db_read_info(&mtb->status, &mtb->kind, &mtb->revnum, &mtb->repos_relpath, &mtb->repos_root_url, &mtb->repos_uuid, &mtb->changed_rev, &mtb->changed_date, &mtb->changed_author, &mtb->depth, &checksum, ((void*)0), &original_repos_relpath, ((void*)0), ((void*)0), ((void*)0), &mtb->lock, &mtb->recorded_size, &mtb->recorded_time, &mtb->changelist, &mtb->conflicted, &mtb->op_root, &mtb->had_props, &mtb->props_mod, &mtb->have_base, &mtb->have_more_work, ((void*)0), db, local_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 272 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  do { svn_error_t *svn_err__temp = (svn_wc__db_wclocked(&mtb->locked, db, local_abspath, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  if (mtb->have_base
      && (mtb->status == svn_wc__db_status_added
          || mtb->status == svn_wc__db_status_deleted
          || mtb->kind == svn_kind_file))
    {
      svn_boolean_t update_root;
      svn_wc__db_lock_t **lock_arg = ((void*)0);

      if (mtb->status == svn_wc__db_status_added
          || mtb->status == svn_wc__db_status_deleted)
        lock_arg = &mtb->lock;

      do { svn_error_t *svn_err__temp = (svn_wc__db_base_get_info(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), lock_arg, ((void*)0), ((void*)0), &update_root, db, local_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





      mtb->file_external = (update_root && mtb->kind == svn_kind_file);

      if (mtb->status == svn_wc__db_status_deleted)
        {
          const char *moved_to_abspath;
          const char *moved_to_op_root_abspath;
# 314 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
          do { svn_error_t *svn_err__temp = (svn_wc__db_scan_deletion(((void*)0), &moved_to_abspath, ((void*)0), &moved_to_op_root_abspath, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





          if (moved_to_abspath != ((void*)0)
              && moved_to_op_root_abspath != ((void*)0)
              && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (moved_to_abspath) && __builtin_constant_p (moved_to_op_root_abspath) && (__s1_len = __builtin_strlen (moved_to_abspath), __s2_len = __builtin_strlen (moved_to_op_root_abspath), (!((size_t)(const void *)((moved_to_abspath) + 1) - (size_t)(const void *)(moved_to_abspath) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((moved_to_op_root_abspath) + 1) - (size_t)(const void *)(moved_to_op_root_abspath) == 1) || __s2_len >= 4)) ? __builtin_strcmp (moved_to_abspath, moved_to_op_root_abspath) : (__builtin_constant_p (moved_to_abspath) && ((size_t)(const void *)((moved_to_abspath) + 1) - (size_t)(const void *)(moved_to_abspath) == 1) && (__s1_len = __builtin_strlen (moved_to_abspath), __s1_len < 4) ? (__builtin_constant_p (moved_to_op_root_abspath) && ((size_t)(const void *)((moved_to_op_root_abspath) + 1) - (size_t)(const void *)(moved_to_op_root_abspath) == 1) ? __builtin_strcmp (moved_to_abspath, moved_to_op_root_abspath) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (moved_to_op_root_abspath); int __result = (((const unsigned char *) (const char *) (moved_to_abspath))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (moved_to_abspath))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (moved_to_abspath))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (moved_to_abspath))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (moved_to_op_root_abspath) && ((size_t)(const void *)((moved_to_op_root_abspath) + 1) - (size_t)(const void *)(moved_to_op_root_abspath) == 1) && (__s2_len = __builtin_strlen (moved_to_op_root_abspath), __s2_len < 4) ? (__builtin_constant_p (moved_to_abspath) && ((size_t)(const void *)((moved_to_abspath) + 1) - (size_t)(const void *)(moved_to_abspath) == 1) ? __builtin_strcmp (moved_to_abspath, moved_to_op_root_abspath) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (moved_to_abspath); int __result = (((const unsigned char *) (const char *) (moved_to_op_root_abspath))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (moved_to_op_root_abspath))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (moved_to_op_root_abspath))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (moved_to_op_root_abspath))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (moved_to_abspath, moved_to_op_root_abspath)))); }) == 0)
            {
              mtb->moved_to_abspath = apr_pstrdup(result_pool,
                                                  moved_to_abspath);
            }
# 338 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
        }
    }







  if (mtb->status == svn_wc__db_status_added)
    {
      const char *moved_from_abspath = ((void*)0);
      svn_wc__db_status_t status;

      do { svn_error_t *svn_err__temp = (svn_wc__db_scan_addition(&status, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &moved_from_abspath, ((void*)0), db, local_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





      mtb->moved_here = (moved_from_abspath != ((void*)0));
      mtb->incomplete = (status == svn_wc__db_status_incomplete);
    }

  mtb->has_checksum = (checksum != ((void*)0));
  mtb->copied = (original_repos_relpath != ((void*)0));


  if (mtb->kind == svn_kind_file
      && (mtb->had_props || mtb->props_mod))
    {
      apr_hash_t *properties;

      if (mtb->props_mod)
        do { svn_error_t *svn_err__temp = (svn_wc__db_read_props(&properties, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      else
        do { svn_error_t *svn_err__temp = (svn_wc__db_read_pristine_props(&properties, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


      mtb->special = (((void*)0) != apr_hash_get(properties, "svn:" "special",
                                           (-1)));
    }

  *info = mtb;

  return 0;
}





static svn_error_t *
get_repos_root_url_relpath(const char **repos_relpath,
                           const char **repos_root_url,
                           const char **repos_uuid,
                           const struct svn_wc__db_info_t *info,
                           const char *parent_repos_relpath,
                           const char *parent_repos_root_url,
                           const char *parent_repos_uuid,
                           svn_wc__db_t *db,
                           const char *local_abspath,
                           apr_pool_t *result_pool,
                           apr_pool_t *scratch_pool)
{
  if (info->repos_relpath && info->repos_root_url)
    {
      *repos_relpath = info->repos_relpath;
      *repos_root_url = info->repos_root_url;
      *repos_uuid = info->repos_uuid;
    }
  else if (parent_repos_relpath && parent_repos_root_url)
    {
      *repos_relpath = svn_relpath_join(parent_repos_relpath,
                                        svn_dirent_basename(local_abspath,
                                                            ((void*)0)),
                                        result_pool);
      *repos_root_url = parent_repos_root_url;
      *repos_uuid = parent_repos_uuid;
    }
  else if (info->status == svn_wc__db_status_added)
    {
      do { svn_error_t *svn_err__temp = (svn_wc__db_scan_addition(((void*)0), ((void*)0), repos_relpath, repos_root_url, repos_uuid, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), db, local_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




    }
  else if (info->have_base)
    {
      do { svn_error_t *svn_err__temp = (svn_wc__db_scan_base_repos(repos_relpath, repos_root_url, repos_uuid, db, local_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



    }
  else
    {
      *repos_relpath = ((void*)0);
      *repos_root_url = ((void*)0);
      *repos_uuid = ((void*)0);
    }
  return 0;
}

static svn_error_t *
internal_status(svn_wc_status3_t **status,
                svn_wc__db_t *db,
                const char *local_abspath,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool);
# 468 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
assemble_status(svn_wc_status3_t **status,
                svn_wc__db_t *db,
                const char *local_abspath,
                const char *parent_repos_root_url,
                const char *parent_repos_relpath,
                const char *parent_repos_uuid,
                const struct svn_wc__db_info_t *info,
                const svn_io_dirent2_t *dirent,
                svn_boolean_t get_all,
                svn_boolean_t ignore_text_mods,
                const svn_lock_t *repos_lock,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool)
{
  svn_wc_status3_t *stat;
  svn_boolean_t switched_p = 0;
  svn_boolean_t copied = 0;
  svn_boolean_t conflicted;
  svn_error_t *err;
  const char *repos_relpath;
  const char *repos_root_url;
  const char *repos_uuid;
  const char *moved_from_abspath = ((void*)0);
  svn_filesize_t filesize = (dirent && (dirent->kind == svn_node_file))
                                ? dirent->filesize
                                : ((svn_filesize_t) -1);


  enum svn_wc_status_kind node_status = svn_wc_status_normal;
  enum svn_wc_status_kind text_status = svn_wc_status_normal;
  enum svn_wc_status_kind prop_status = svn_wc_status_none;


  if (!info)
    do { svn_error_t *svn_err__temp = (read_info(&info, local_abspath, db, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (!info->repos_relpath || !parent_repos_relpath)
    switched_p = 0;
  else
    {

      const char *name = svn_relpath_skip_ancestor(parent_repos_relpath,
                                                   info->repos_relpath);
      switched_p = !name || (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p (svn_dirent_basename(local_abspath, ((void*)0))) && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen (svn_dirent_basename(local_abspath, ((void*)0))), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((svn_dirent_basename(local_abspath, ((void*)0))) + 1) - (size_t)(const void *)(svn_dirent_basename(local_abspath, ((void*)0))) == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, svn_dirent_basename(local_abspath, ((void*)0))) : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p (svn_dirent_basename(local_abspath, ((void*)0))) && ((size_t)(const void *)((svn_dirent_basename(local_abspath, ((void*)0))) + 1) - (size_t)(const void *)(svn_dirent_basename(local_abspath, ((void*)0))) == 1) ? __builtin_strcmp (name, svn_dirent_basename(local_abspath, ((void*)0))) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (svn_dirent_basename(local_abspath, ((void*)0))); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (svn_dirent_basename(local_abspath, ((void*)0))) && ((size_t)(const void *)((svn_dirent_basename(local_abspath, ((void*)0))) + 1) - (size_t)(const void *)(svn_dirent_basename(local_abspath, ((void*)0))) == 1) && (__s2_len = __builtin_strlen (svn_dirent_basename(local_abspath, ((void*)0))), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, svn_dirent_basename(local_abspath, ((void*)0))) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) (svn_dirent_basename(local_abspath, ((void*)0))))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (svn_dirent_basename(local_abspath, ((void*)0))))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (svn_dirent_basename(local_abspath, ((void*)0))))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (svn_dirent_basename(local_abspath, ((void*)0))))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, svn_dirent_basename(local_abspath, ((void*)0)))))); })

                             != 0);
    }

  if (info->status == svn_wc__db_status_incomplete || info->incomplete)
    {

      node_status = svn_wc_status_incomplete;
    }
  else if (info->status == svn_wc__db_status_deleted)
    {
      node_status = svn_wc_status_deleted;

      if (!info->have_base || info->have_more_work || info->copied)
        copied = (!0);
      else if (!info->have_more_work && info->have_base)
        copied = 0;
      else
        {
          const char *work_del_abspath;


          do { svn_error_t *svn_err__temp = (svn_wc__db_scan_deletion(((void*)0), ((void*)0), &work_del_abspath, ((void*)0), db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



          if (work_del_abspath)
            copied = (!0);
        }
    }
  else
    {


      svn_node_kind_t expected_kind = (info->kind == svn_kind_dir)
                                        ? svn_node_dir
                                        : svn_node_file;

      if (!dirent || dirent->kind != expected_kind)
        {


          if (!dirent || dirent->kind == svn_node_none)
            node_status = svn_wc_status_missing;
          else
            node_status = svn_wc_status_obstructed;
        }
    }


  if (info->status != svn_wc__db_status_deleted)
    {
      if (info->props_mod)
        prop_status = svn_wc_status_modified;
      else if (info->had_props)
        prop_status = svn_wc_status_normal;
    }






  if (info->kind != svn_kind_dir
      && node_status == svn_wc_status_normal)
    {
      svn_boolean_t text_modified_p = 0;
# 588 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
      if ((info->kind == svn_kind_file
          || info->kind == svn_kind_symlink)

             && (info->special == (dirent && dirent->special))

          )
        {





          if (!info->has_checksum)
            text_modified_p = (!0);
          else if (ignore_text_mods
                  ||(dirent
                     && info->recorded_size != ((svn_filesize_t) -1)
                     && info->recorded_time != 0
                     && info->recorded_size == dirent->filesize
                     && info->recorded_time == dirent->mtime))
            text_modified_p = 0;
          else
            {
              err = svn_wc__internal_file_modified_p(&text_modified_p,
                                                     db, local_abspath,
                                                     0, scratch_pool);

              if (err)
                {
                  if (err->apr_err != SVN_ERR_WC_PATH_ACCESS_DENIED)
                    return (err);





                  svn_error_clear(err);
                  text_modified_p = (!0);
                }
            }
        }

      else if (info->special != (dirent && dirent->special))
        node_status = svn_wc_status_obstructed;


      if (text_modified_p)
        text_status = svn_wc_status_modified;
    }

  conflicted = info->conflicted;
  if (conflicted)
    {
      svn_boolean_t text_conflicted, prop_conflicted, tree_conflicted;



      do { svn_error_t *svn_err__temp = (svn_wc__internal_conflicted_p(&text_conflicted, &prop_conflicted, &tree_conflicted, db, local_abspath, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



      if (!text_conflicted && !prop_conflicted && !tree_conflicted)
        conflicted = 0;
    }

  if (node_status == svn_wc_status_normal)
    {





      if (info->status == svn_wc__db_status_added)
        {
          copied = info->copied;
          if (!info->op_root)
            { }
          else if (!info->have_base && !info->have_more_work)
            {

              node_status = svn_wc_status_added;
            }
          else
            {
              svn_wc__db_status_t below_working;
              svn_boolean_t have_base, have_work;

              do { svn_error_t *svn_err__temp = (svn_wc__db_info_below_working(&have_base, &have_work, &below_working, db, local_abspath, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);






              if (below_working != svn_wc__db_status_not_present
                  && below_working != svn_wc__db_status_deleted)
                {
                  node_status = svn_wc_status_replaced;
                }
              else
                node_status = svn_wc_status_added;
            }


          if (info->moved_here && info->op_root)
            do { svn_error_t *svn_err__temp = (svn_wc__db_scan_addition(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &moved_from_abspath, ((void*)0), db, local_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





        }
    }


  if (node_status == svn_wc_status_normal)
    node_status = text_status;

  if (node_status == svn_wc_status_normal
      && prop_status != svn_wc_status_none)
    node_status = prop_status;




  if (! get_all)
    if (((node_status == svn_wc_status_none)
         || (node_status == svn_wc_status_normal))

        && (! switched_p)
        && (! info->locked )
        && (! info->lock)
        && (! repos_lock)
        && (! info->changelist)
        && (! conflicted))
      {
        *status = ((void*)0);
        return 0;
      }

  do { svn_error_t *svn_err__temp = (get_repos_root_url_relpath(&repos_relpath, &repos_root_url, &repos_uuid, info, parent_repos_relpath, parent_repos_root_url, parent_repos_uuid, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 738 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  stat = memset(apr_palloc(result_pool, sizeof(**status)), 0, sizeof(**status));

  switch (info->kind)
    {
      case svn_kind_dir:
        stat->kind = svn_node_dir;
        break;
      case svn_kind_file:
      case svn_kind_symlink:
        stat->kind = svn_node_file;
        break;
      case svn_kind_unknown:
      default:
        stat->kind = svn_node_unknown;
    }
  stat->depth = info->depth;
  stat->filesize = filesize;
  stat->node_status = node_status;
  stat->text_status = text_status;
  stat->prop_status = prop_status;
  stat->repos_node_status = svn_wc_status_none;
  stat->repos_text_status = svn_wc_status_none;
  stat->repos_prop_status = svn_wc_status_none;
  stat->switched = switched_p;
  stat->copied = copied;
  stat->repos_lock = repos_lock;
  stat->revision = info->revnum;
  stat->changed_rev = info->changed_rev;
  stat->changed_author = info->changed_author;
  stat->changed_date = info->changed_date;

  stat->ood_kind = svn_node_none;
  stat->ood_changed_rev = ((svn_revnum_t) -1);
  stat->ood_changed_date = 0;
  stat->ood_changed_author = ((void*)0);

  if (info->lock)
    {
      svn_lock_t *lck = memset(apr_palloc(result_pool, sizeof(*lck)), 0, sizeof(*lck));
      lck->path = repos_relpath;
      lck->token = info->lock->token;
      lck->owner = info->lock->owner;
      lck->comment = info->lock->comment;
      lck->creation_date = info->lock->date;
      stat->lock = lck;
    }
  else
    stat->lock = ((void*)0);

  stat->locked = info->locked;
  stat->conflicted = conflicted;
  stat->versioned = (!0);
  stat->changelist = info->changelist;
  stat->repos_root_url = repos_root_url;
  stat->repos_relpath = repos_relpath;
  stat->repos_uuid = repos_uuid;

  stat->moved_from_abspath = moved_from_abspath;
  stat->moved_to_abspath = info->moved_to_abspath;

  stat->file_external = info->file_external;

  *status = stat;

  return 0;
}
# 813 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
assemble_unversioned(svn_wc_status3_t **status,
                     svn_wc__db_t *db,
                     const char *local_abspath,
                     const svn_io_dirent2_t *dirent,
                     svn_boolean_t tree_conflicted,
                     svn_boolean_t is_ignored,
                     apr_pool_t *result_pool,
                     apr_pool_t *scratch_pool)
{
  svn_wc_status3_t *stat;


  stat = memset(apr_palloc(result_pool, sizeof(*stat)), 0, sizeof(*stat));


  stat->kind = svn_node_unknown;
  stat->depth = svn_depth_unknown;
  stat->filesize = (dirent && dirent->kind == svn_node_file)
                        ? dirent->filesize
                        : ((svn_filesize_t) -1);
  stat->node_status = svn_wc_status_none;
  stat->text_status = svn_wc_status_none;
  stat->prop_status = svn_wc_status_none;
  stat->repos_node_status = svn_wc_status_none;
  stat->repos_text_status = svn_wc_status_none;
  stat->repos_prop_status = svn_wc_status_none;






  if (dirent && dirent->kind != svn_node_none)
    {
      if (is_ignored)
        stat->node_status = svn_wc_status_ignored;
      else
        stat->node_status = svn_wc_status_unversioned;
    }
  else if (tree_conflicted)
    {


      stat->node_status = svn_wc_status_conflicted;
    }

  stat->revision = ((svn_revnum_t) -1);
  stat->changed_rev = ((svn_revnum_t) -1);
  stat->ood_changed_rev = ((svn_revnum_t) -1);
  stat->ood_kind = svn_node_none;



  stat->conflicted = tree_conflicted;
  stat->changelist = ((void*)0);

  *status = stat;
  return 0;
}





static svn_error_t *
send_status_structure(const struct walk_status_baton *wb,
                      const char *local_abspath,
                      const char *parent_repos_root_url,
                      const char *parent_repos_relpath,
                      const char *parent_repos_uuid,
                      const struct svn_wc__db_info_t *info,
                      const svn_io_dirent2_t *dirent,
                      svn_boolean_t get_all,
                      svn_wc_status_func4_t status_func,
                      void *status_baton,
                      apr_pool_t *scratch_pool)
{
  svn_wc_status3_t *statstruct;
  const svn_lock_t *repos_lock = ((void*)0);


  if (wb->repos_locks)
    {
      const char *repos_relpath, *repos_root_url, *repos_uuid;

      do { svn_error_t *svn_err__temp = (get_repos_root_url_relpath(&repos_relpath, &repos_root_url, &repos_uuid, info, parent_repos_relpath, parent_repos_root_url, parent_repos_uuid, wb->db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);






      if (repos_relpath)
        {


          repos_lock = apr_hash_get(wb->repos_locks,
                                    svn_fspath__join("/", repos_relpath,
                                                     scratch_pool),
                                    (-1));
        }
    }

  do { svn_error_t *svn_err__temp = (assemble_status(&statstruct, wb->db, local_abspath, parent_repos_root_url, parent_repos_relpath, parent_repos_uuid, info, dirent, get_all, wb->ignore_text_mods, repos_lock, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  if (statstruct && status_func)
    return ((*status_func)(status_baton, local_abspath, statstruct, scratch_pool));


  return 0;
}
# 955 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
collect_ignore_patterns(apr_array_header_t **patterns,
                        apr_array_header_t **inherited_patterns,
                        svn_wc__db_t *db,
                        const char *local_abspath,
                        const apr_array_header_t *ignores,
                        svn_boolean_t may_have_props,
                        apr_pool_t *result_pool,
                        apr_pool_t *scratch_pool)
{
  int i;
  const svn_string_t *value;
  apr_hash_t *props = ((void*)0);



  *patterns = apr_array_make(result_pool, 1, sizeof(const char *));


  for (i = 0; i < ignores->nelts; i++)
    {
      const char *ignore = (((const char * *)(ignores)->elts)[i]);
      (*((const char * *)apr_array_push(*patterns))) = apr_pstrdup(result_pool,
                                                            ignore);
    }

  if (may_have_props)
    {

      do { svn_error_t *svn_err__temp = (svn_wc__db_read_props(&props, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


      if (!props)
        return 0;

      value = apr_hash_get(props, "svn:" "ignore", (-1));

      if (value != ((void*)0))
        svn_cstring_split_append(*patterns, value->data, "\n\r", 0,
                                 result_pool);
    }

  if (inherited_patterns)
    {
      apr_array_header_t *inherited_props;

      *inherited_patterns = apr_array_make(result_pool, 1,
                                           sizeof(const char *));
      if (props)
        {
          value = apr_hash_get(props, "svn:" "global-ignores",
                               (-1));
          if (value != ((void*)0))
            svn_cstring_split_append(*inherited_patterns, value->data, "\n\r",
                                     0, result_pool);
        }

      do { svn_error_t *svn_err__temp = (svn_wc__db_read_inherited_props(&inherited_props, db, local_abspath, "svn:" "global-ignores", scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



      for (i = 0; i < inherited_props->nelts; i++)
        {
          apr_hash_index_t *hi;
          svn_prop_inherited_item_t *elt = (((svn_prop_inherited_item_t * *)(inherited_props)->elts)[i]);


          for (hi = apr_hash_first(scratch_pool, elt->prop_hash);
               hi;
               hi = apr_hash_next(hi))
            {
              const svn_string_t *propval = svn__apr_hash_index_val(hi);
              svn_cstring_split_append(*inherited_patterns, propval->data,
                                       "\n\r", 0, result_pool);
            }
        }
    }

  return 0;
}






static svn_boolean_t
is_external_path(apr_hash_t *externals,
                 const char *local_abspath,
                 apr_pool_t *scratch_pool)
{
  apr_hash_index_t *hi;


  if (apr_hash_get(externals, local_abspath, (-1)))
    return (!0);



  for (hi = apr_hash_first(scratch_pool, externals);
       hi;
       hi = apr_hash_next(hi))
    {
      const char *external_abspath = svn__apr_hash_index_key(hi);

      if (svn_dirent_is_child(local_abspath, external_abspath, ((void*)0)))
        return (!0);
    }

  return 0;
}
# 1086 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
send_unversioned_item(const struct walk_status_baton *wb,
                      const char *local_abspath,
                      const svn_io_dirent2_t *dirent,
                      svn_boolean_t tree_conflicted,
                      const apr_array_header_t *patterns,
                      const apr_array_header_t *inherited_patterns,
                      svn_boolean_t no_ignore,
                      svn_wc_status_func4_t status_func,
                      void *status_baton,
                      apr_pool_t *scratch_pool)
{
  svn_boolean_t is_ignored;
  svn_boolean_t is_mandatory_ignored;
  svn_boolean_t is_external;
  svn_wc_status3_t *status;
  const char *base_name = svn_dirent_basename(local_abspath, ((void*)0));

  is_ignored = svn_wc_match_ignore_list(base_name, patterns, scratch_pool);
  is_mandatory_ignored = svn_wc_match_ignore_list(base_name,
                                                  inherited_patterns,
                                                  scratch_pool);
  do { svn_error_t *svn_err__temp = (assemble_unversioned(&status, wb->db, local_abspath, dirent, tree_conflicted, is_ignored || is_mandatory_ignored, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  is_external = is_external_path(wb->externals, local_abspath, scratch_pool);
  if (is_external)
    status->node_status = svn_wc_status_external;




  if (status->conflicted)
    is_ignored = 0;



  if (no_ignore
      || !(is_ignored || is_mandatory_ignored)
      || is_external)
    return ((*status_func)(status_baton, local_abspath, status, scratch_pool));


  return 0;
}

static svn_error_t *
get_dir_status(const struct walk_status_baton *wb,
               const char *local_abspath,
               svn_boolean_t skip_this_dir,
               const char *parent_repos_root_url,
               const char *parent_repos_relpath,
               const char *parent_repos_uuid,
               const struct svn_wc__db_info_t *dir_info,
               const svn_io_dirent2_t *dirent,
               const apr_array_header_t *ignore_patterns,
               svn_depth_t depth,
               svn_boolean_t get_all,
               svn_boolean_t no_ignore,
               svn_wc_status_func4_t status_func,
               void *status_baton,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               apr_pool_t *scratch_pool);
# 1189 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t*
one_child_status(const struct walk_status_baton *wb,
                 const char *local_abspath,
                 const char *parent_abspath,
                 const struct svn_wc__db_info_t *info,
                 const svn_io_dirent2_t *dirent,
                 const char *dir_repos_root_url,
                 const char *dir_repos_relpath,
                 const char *dir_repos_uuid,
                 svn_boolean_t dir_has_props,
                 svn_boolean_t unversioned_tree_conflicted,
                 apr_array_header_t **collected_ignore_patterns,
                 apr_array_header_t **collected_inherited_ignore_patterns,
                 const apr_array_header_t *ignore_patterns,
                 svn_depth_t depth,
                 svn_boolean_t get_all,
                 svn_boolean_t no_ignore,
                 svn_wc_status_func4_t status_func,
                 void *status_baton,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *result_pool,
                 apr_pool_t *scratch_pool)
{
  svn_boolean_t conflicted = info ? info->conflicted
                                  : unversioned_tree_conflicted;

  if (info
      && info->status != svn_wc__db_status_not_present
      && info->status != svn_wc__db_status_excluded
      && info->status != svn_wc__db_status_server_excluded
      && !(info->kind == svn_kind_unknown
           && info->status == svn_wc__db_status_normal))
    {
      if (depth == svn_depth_files
          && info->kind == svn_kind_dir)
        {
          return 0;
        }

      do { svn_error_t *svn_err__temp = (send_status_structure(wb, local_abspath, dir_repos_root_url, dir_repos_relpath, dir_repos_uuid, info, dirent, get_all, status_func, status_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1238 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
      if (depth == svn_depth_infinity
          && info->kind == svn_kind_dir)
        {
          do { svn_error_t *svn_err__temp = (get_dir_status(wb, local_abspath, (!0), dir_repos_root_url, dir_repos_relpath, dir_repos_uuid, info, dirent, ignore_patterns, svn_depth_infinity, get_all, no_ignore, status_func, status_baton, cancel_func, cancel_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1250 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
        }

      return 0;
    }






  if (! conflicted)
    {

      if (dirent == ((void*)0))
        return 0;

      if (depth == svn_depth_files && dirent->kind == svn_node_dir)
        return 0;

      if (svn_wc_is_adm_dir(svn_dirent_basename(local_abspath, scratch_pool),
                            scratch_pool))
        return 0;
    }
# 1284 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  if ((ignore_patterns && ! *collected_ignore_patterns)
      || (collected_inherited_ignore_patterns
          && ! collected_inherited_ignore_patterns))
    do { svn_error_t *svn_err__temp = (collect_ignore_patterns(collected_ignore_patterns, collected_inherited_ignore_patterns, wb->db, parent_abspath, ignore_patterns, dir_has_props, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  do { svn_error_t *svn_err__temp = (send_unversioned_item(wb, local_abspath, dirent, conflicted, *collected_ignore_patterns, *collected_inherited_ignore_patterns, no_ignore, status_func, status_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1303 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  return 0;
}
# 1326 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
get_dir_status(const struct walk_status_baton *wb,
               const char *local_abspath,
               svn_boolean_t skip_this_dir,
               const char *parent_repos_root_url,
               const char *parent_repos_relpath,
               const char *parent_repos_uuid,
               const struct svn_wc__db_info_t *dir_info,
               const svn_io_dirent2_t *dirent,
               const apr_array_header_t *ignore_patterns,
               svn_depth_t depth,
               svn_boolean_t get_all,
               svn_boolean_t no_ignore,
               svn_wc_status_func4_t status_func,
               void *status_baton,
               svn_cancel_func_t cancel_func,
               void *cancel_baton,
               apr_pool_t *scratch_pool)
{
  const char *dir_repos_root_url;
  const char *dir_repos_relpath;
  const char *dir_repos_uuid;
  svn_boolean_t dir_has_props;
  apr_hash_t *dirents, *nodes, *conflicts, *all_children;
  apr_array_header_t *sorted_children;
  apr_array_header_t *collected_ignore_patterns = ((void*)0);
  apr_array_header_t *collected_inherited_ignore_patterns = ((void*)0);
  apr_pool_t *iterpool;
  svn_error_t *err;
  int i;

  if (cancel_func)
    do { svn_error_t *svn_err__temp = (cancel_func(cancel_baton)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (depth == svn_depth_unknown)
    depth = svn_depth_infinity;

  iterpool = svn_pool_create_ex(scratch_pool, ((void*)0));

  err = svn_io_get_dirents3(&dirents, local_abspath, 0, scratch_pool,
                            iterpool);
  if (err
      && (((err->apr_err) == 2)
         || ((err->apr_err) == 20)))
    {
      svn_error_clear(err);
      dirents = apr_hash_make(scratch_pool);
    }
  else
    do { svn_error_t *svn_err__temp = (err); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (!dir_info)
    do { svn_error_t *svn_err__temp = (read_info(&dir_info, local_abspath, wb->db, scratch_pool, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (get_repos_root_url_relpath(&dir_repos_relpath, &dir_repos_root_url, &dir_repos_uuid, dir_info, parent_repos_relpath, parent_repos_root_url, parent_repos_uuid, wb->db, local_abspath, scratch_pool, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1391 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  do { svn_error_t *svn_err__temp = (svn_wc__db_read_children_info(&nodes, &conflicts, wb->db, local_abspath, scratch_pool, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  all_children = apr_hash_overlay(scratch_pool, nodes, dirents);
  if (apr_hash_count(conflicts) > 0)
    all_children = apr_hash_overlay(scratch_pool, conflicts, all_children);


  if (! skip_this_dir)
    {
# 1415 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
      if (dirent->special)
        {
          svn_io_dirent2_t *this_dirent = svn_io_dirent2_dup(dirent, iterpool);





          do { svn_error_t *svn_err__temp = (svn_io_check_resolved_path(local_abspath, &this_dirent->kind, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);

          this_dirent->special = 0;
          do { svn_error_t *svn_err__temp = (send_status_structure(wb, local_abspath, parent_repos_root_url, parent_repos_relpath, parent_repos_uuid, dir_info, this_dirent, get_all, status_func, status_baton, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);






        }
     else
        do { svn_error_t *svn_err__temp = (send_status_structure(wb, local_abspath, parent_repos_root_url, parent_repos_relpath, parent_repos_uuid, dir_info, dirent, get_all, status_func, status_baton, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);






    }


  if (depth == svn_depth_empty)
    return 0;

  dir_has_props = (dir_info->had_props || dir_info->props_mod);


  sorted_children = svn_sort__hash(all_children,
                                   svn_sort_compare_items_lexically,
                                   scratch_pool);
  for (i = 0; i < sorted_children->nelts; i++)
    {
      const void *key;
      apr_ssize_t klen;
      svn_sort__item_t item;
      const char *child_abspath;
      svn_io_dirent2_t *child_dirent;
      const struct svn_wc__db_info_t *child_info;

      apr_pool_clear(iterpool);

      item = (((svn_sort__item_t *)(sorted_children)->elts)[i]);
      key = item.key;
      klen = item.klen;

      child_abspath = svn_dirent_join(local_abspath, key, iterpool);
      child_dirent = apr_hash_get(dirents, key, klen);
      child_info = apr_hash_get(nodes, key, klen);

      do { svn_error_t *svn_err__temp = (one_child_status(wb, child_abspath, local_abspath, child_info, child_dirent, dir_repos_root_url, dir_repos_relpath, dir_repos_uuid, dir_has_props, apr_hash_get(conflicts, key, klen) != ((void*)0), &collected_ignore_patterns, &collected_inherited_ignore_patterns, ignore_patterns, depth, get_all, no_ignore, status_func, status_baton, cancel_func, cancel_baton, scratch_pool, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1495 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
    }


  apr_pool_destroy(iterpool);

  return 0;
}
# 1516 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
get_child_status(const struct walk_status_baton *wb,
                 const char *local_abspath,
                 const struct svn_wc__db_info_t *info,
                 const svn_io_dirent2_t *dirent,
                 const apr_array_header_t *ignore_patterns,
                 svn_boolean_t get_all,
                 svn_wc_status_func4_t status_func,
                 void *status_baton,
                 svn_cancel_func_t cancel_func,
                 void *cancel_baton,
                 apr_pool_t *scratch_pool)
{
  const char *dir_repos_root_url;
  const char *dir_repos_relpath;
  const char *dir_repos_uuid;
  const struct svn_wc__db_info_t *dir_info;
  apr_array_header_t *collected_ignore_patterns = ((void*)0);
  apr_array_header_t *collected_inherited_ignore_patterns = ((void*)0);
  const char *parent_abspath = svn_dirent_dirname(local_abspath,
                                                  scratch_pool);

  if (cancel_func)
    do { svn_error_t *svn_err__temp = (cancel_func(cancel_baton)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (dirent->kind == svn_node_none)
    dirent = ((void*)0);

  do { svn_error_t *svn_err__temp = (read_info(&dir_info, parent_abspath, wb->db, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  do { svn_error_t *svn_err__temp = (get_repos_root_url_relpath(&dir_repos_relpath, &dir_repos_root_url, &dir_repos_uuid, dir_info, ((void*)0), ((void*)0), ((void*)0), wb->db, parent_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1558 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  do { svn_error_t *svn_err__temp = (one_child_status(wb, local_abspath, parent_abspath, info, dirent, dir_repos_root_url, dir_repos_relpath, dir_repos_uuid, (dir_info->had_props || dir_info->props_mod), 0, &collected_ignore_patterns, &collected_inherited_ignore_patterns, ignore_patterns, svn_depth_empty, get_all, (!0), status_func, status_baton, cancel_func, cancel_baton, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1580 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  return 0;
}
# 1590 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
hash_stash(void *baton,
           const char *path,
           const svn_wc_status3_t *status,
           apr_pool_t *scratch_pool)
{
  apr_hash_t *stat_hash = baton;
  apr_pool_t *hash_pool = apr_hash_pool_get(stat_hash);
  ((! apr_hash_get(stat_hash, path, (-1))) ? (void) (0) : __assert_fail ("! apr_hash_get(stat_hash, path, (-1))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c", 1598, __PRETTY_FUNCTION__));
  apr_hash_set(stat_hash, apr_pstrdup(hash_pool, path),
               (-1), svn_wc_dup_status3(status, hash_pool));

  return 0;
}
# 1635 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
tweak_statushash(void *baton,
                 void *this_dir_baton,
                 svn_boolean_t is_dir_baton,
                 svn_wc__db_t *db,
                 const char *local_abspath,
                 enum svn_wc_status_kind repos_node_status,
                 enum svn_wc_status_kind repos_text_status,
                 enum svn_wc_status_kind repos_prop_status,
                 svn_revnum_t deleted_rev,
                 const svn_lock_t *repos_lock,
                 apr_pool_t *scratch_pool)
{
  svn_wc_status3_t *statstruct;
  apr_pool_t *pool;
  apr_hash_t *statushash;

  if (is_dir_baton)
    statushash = ((struct dir_baton *) baton)->statii;
  else
    statushash = ((struct file_baton *) baton)->dir_baton->statii;
  pool = apr_hash_pool_get(statushash);


  statstruct = apr_hash_get(statushash, local_abspath, (-1));


  if (! statstruct)
    {
# 1675 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
      if (repos_node_status != svn_wc_status_added)
        return 0;


      do { svn_error_t *svn_err__temp = (internal_status(&statstruct, db, local_abspath, pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      statstruct->repos_lock = repos_lock;
      apr_hash_set(statushash, apr_pstrdup(pool, local_abspath),
                   (-1), statstruct);
    }


  if ((repos_node_status == svn_wc_status_added)
      && (statstruct->repos_node_status == svn_wc_status_deleted))
    repos_node_status = svn_wc_status_replaced;


  if (repos_node_status)
    statstruct->repos_node_status = repos_node_status;
  if (repos_text_status)
    statstruct->repos_text_status = repos_text_status;
  if (repos_prop_status)
    statstruct->repos_prop_status = repos_prop_status;


  if (is_dir_baton)
    {
      struct dir_baton *b = this_dir_baton;

      if (!statstruct->repos_relpath && b->repos_relpath)
        {
          if (statstruct->repos_node_status == svn_wc_status_deleted)
            {


              statstruct->repos_relpath =
                            svn_relpath_join(b->repos_relpath,
                                             svn_dirent_basename(local_abspath,
                                                                 ((void*)0)),
                                             pool);
            }
          else
            statstruct->repos_relpath = apr_pstrdup(pool, b->repos_relpath);

          statstruct->repos_root_url =
                              b->edit_baton->anchor_status->repos_root_url;
          statstruct->repos_uuid =
                              b->edit_baton->anchor_status->repos_uuid;
        }



      if (statstruct->repos_node_status == svn_wc_status_deleted)
        {
          statstruct->ood_kind = statstruct->kind;






          if (deleted_rev == ((svn_revnum_t) -1))
            statstruct->ood_changed_rev =
              ((struct dir_baton *) baton)->ood_changed_rev;
          else
            statstruct->ood_changed_rev = deleted_rev;
        }
      else
        {
          statstruct->ood_kind = b->ood_kind;
          statstruct->ood_changed_rev = b->ood_changed_rev;
          statstruct->ood_changed_date = b->ood_changed_date;
          if (b->ood_changed_author)
            statstruct->ood_changed_author =
              apr_pstrdup(pool, b->ood_changed_author);
        }

    }
  else
    {
      struct file_baton *b = baton;
      statstruct->ood_changed_rev = b->ood_changed_rev;
      statstruct->ood_changed_date = b->ood_changed_date;
      if (!statstruct->repos_relpath && b->repos_relpath)
        {
          statstruct->repos_relpath = apr_pstrdup(pool, b->repos_relpath);
          statstruct->repos_root_url =
                          b->edit_baton->anchor_status->repos_root_url;
          statstruct->repos_uuid =
                          b->edit_baton->anchor_status->repos_uuid;
        }
      statstruct->ood_kind = b->ood_kind;
      if (b->ood_changed_author)
        statstruct->ood_changed_author =
          apr_pstrdup(pool, b->ood_changed_author);
    }
  return 0;
}


static const char *
find_dir_repos_relpath(const struct dir_baton *db, apr_pool_t *pool)
{

  if (! db->name)
    return db->edit_baton->anchor_status->repos_relpath;
  else
    {
      const char *repos_relpath;
      struct dir_baton *pb = db->parent_baton;
      const svn_wc_status3_t *status = apr_hash_get(pb->statii,
                                                    db->local_abspath,
                                                    (-1));



      if (status && status->repos_relpath)
        return status->repos_relpath;

      repos_relpath = find_dir_repos_relpath(pb, pool);
      return svn_relpath_join(repos_relpath, db->name, pool);
    }
}




static svn_error_t *
make_dir_baton(void **dir_baton,
               const char *path,
               struct edit_baton *edit_baton,
               struct dir_baton *parent_baton,
               apr_pool_t *result_pool)
{
  struct dir_baton *pb = parent_baton;
  struct edit_baton *eb = edit_baton;
  struct dir_baton *d;
  const char *local_abspath;
  const svn_wc_status3_t *status_in_parent;
  apr_pool_t *dir_pool;

  if (parent_baton)
    dir_pool = svn_pool_create_ex(parent_baton->pool, ((void*)0));
  else
    dir_pool = svn_pool_create_ex(result_pool, ((void*)0));

  d = memset(apr_palloc(dir_pool, sizeof(*d)), 0, sizeof(*d));

  do { if (!(path || (! pb))) do { svn_error_t *svn_err__temp = (svn_error__malfunction((!0), "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c", 1823, "path || (! pb)")); if (svn_err__temp) return (svn_err__temp); } while (0); } while (0);


  if (pb)
    local_abspath = svn_dirent_join(eb->anchor_abspath, path, dir_pool);
  else
    local_abspath = eb->anchor_abspath;


  d->pool = dir_pool;
  d->local_abspath = local_abspath;
  d->name = path ? svn_dirent_basename(path, dir_pool) : ((void*)0);
  d->edit_baton = edit_baton;
  d->parent_baton = parent_baton;
  d->statii = apr_hash_make(dir_pool);
  d->ood_changed_rev = ((svn_revnum_t) -1);
  d->ood_changed_date = 0;
  d->repos_relpath = find_dir_repos_relpath(d, dir_pool);
  d->ood_kind = svn_node_dir;
  d->ood_changed_author = ((void*)0);

  if (pb)
    {
      if (pb->excluded)
        d->excluded = (!0);
      else if (pb->depth == svn_depth_immediates)
        d->depth = svn_depth_empty;
      else if (pb->depth == svn_depth_files || pb->depth == svn_depth_empty)
        d->excluded = (!0);
      else if (pb->depth == svn_depth_unknown)


        d->depth = svn_depth_unknown;
      else
        d->depth = svn_depth_infinity;
    }
  else
    {
      d->depth = eb->default_depth;
    }



  if (pb)
    status_in_parent = apr_hash_get(pb->statii, d->local_abspath,
                                    (-1));
  else
    status_in_parent = eb->anchor_status;

  if (status_in_parent
      && status_in_parent->versioned
      && (status_in_parent->kind == svn_node_dir)
      && (! d->excluded)
      && (d->depth == svn_depth_unknown
          || d->depth == svn_depth_infinity
          || d->depth == svn_depth_files
          || d->depth == svn_depth_immediates)
          )
    {
      const svn_wc_status3_t *this_dir_status;
      const apr_array_header_t *ignores = eb->ignores;

      do { svn_error_t *svn_err__temp = (get_dir_status(&eb->wb, local_abspath, (!0), status_in_parent->repos_root_url, ((void*)0) , status_in_parent->repos_uuid, ((void*)0), ((void*)0) , ignores, d->depth == svn_depth_files ? svn_depth_files : svn_depth_immediates, (!0), (!0), hash_stash, d->statii, eb->cancel_func, eb->cancel_baton, dir_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 1900 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
      this_dir_status = apr_hash_get(d->statii, d->local_abspath,
                                     (-1));
      if (this_dir_status && this_dir_status->versioned
          && (d->depth == svn_depth_unknown
              || d->depth > status_in_parent->depth))
        {
          d->depth = this_dir_status->depth;
        }
    }

  *dir_baton = d;
  return 0;
}




static struct file_baton *
make_file_baton(struct dir_baton *parent_dir_baton,
                const char *path,
                apr_pool_t *pool)
{
  struct dir_baton *pb = parent_dir_baton;
  struct edit_baton *eb = pb->edit_baton;
  struct file_baton *f = memset(apr_palloc(pool, sizeof(*f)), 0, sizeof(*f));


  f->local_abspath = svn_dirent_join(eb->anchor_abspath, path, pool);
  f->name = svn_dirent_basename(f->local_abspath, ((void*)0));
  f->pool = pool;
  f->dir_baton = pb;
  f->edit_baton = eb;
  f->ood_changed_rev = ((svn_revnum_t) -1);
  f->ood_changed_date = 0;
  f->repos_relpath = svn_relpath_join(find_dir_repos_relpath(pb, pool),
                                      f->name, pool);
  f->ood_kind = svn_node_file;
  f->ood_changed_author = ((void*)0);
  return f;
}







static svn_boolean_t
is_sendable_status(const svn_wc_status3_t *status,
                   svn_boolean_t no_ignore,
                   svn_boolean_t get_all)
{

  if (status->repos_node_status != svn_wc_status_none)
    return (!0);


  if (status->repos_lock)
    return (!0);

  if (status->conflicted)
    return (!0);


  if ((status->node_status == svn_wc_status_ignored) && (! no_ignore))
    return 0;



  if (get_all)
    return (!0);


  if (status->node_status == svn_wc_status_unversioned)
    return (!0);


  if ((status->node_status != svn_wc_status_none
       && (status->node_status != svn_wc_status_normal)))
    return (!0);


  if (status->switched)
    return (!0);


  if (status->versioned && status->lock)
    return (!0);


  if (status->changelist)
    return (!0);


  return 0;
}



struct status_baton
{
  svn_wc_status_func4_t real_status_func;
  void *real_status_baton;
};





static svn_error_t *
mark_deleted(void *baton,
             const char *local_abspath,
             const svn_wc_status3_t *status,
             apr_pool_t *scratch_pool)
{
  struct status_baton *sb = baton;
  svn_wc_status3_t *new_status = svn_wc_dup_status3(status, scratch_pool);
  new_status->repos_node_status = svn_wc_status_deleted;
  return sb->real_status_func(sb->real_status_baton, local_abspath,
                              new_status, scratch_pool);
}
# 2029 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
static svn_error_t *
handle_statii(struct edit_baton *eb,
              const char *dir_repos_root_url,
              const char *dir_repos_relpath,
              const char *dir_repos_uuid,
              apr_hash_t *statii,
              svn_boolean_t dir_was_deleted,
              svn_depth_t depth,
              apr_pool_t *pool)
{
  const apr_array_header_t *ignores = eb->ignores;
  apr_hash_index_t *hi;
  apr_pool_t *iterpool = svn_pool_create_ex(pool, ((void*)0));
  svn_wc_status_func4_t status_func = eb->status_func;
  void *status_baton = eb->status_baton;
  struct status_baton sb;

  if (dir_was_deleted)
    {
      sb.real_status_func = eb->status_func;
      sb.real_status_baton = eb->status_baton;
      status_func = mark_deleted;
      status_baton = &sb;
    }


  for (hi = apr_hash_first(pool, statii); hi; hi = apr_hash_next(hi))
    {
      const char *local_abspath = svn__apr_hash_index_key(hi);
      svn_wc_status3_t *status = svn__apr_hash_index_val(hi);


      apr_pool_clear(iterpool);



      if (status->versioned && status->kind == svn_node_dir
          && (depth == svn_depth_unknown
              || depth == svn_depth_infinity))
        {
          do { svn_error_t *svn_err__temp = (get_dir_status(&eb->wb, local_abspath, (!0), dir_repos_root_url, dir_repos_relpath, dir_repos_uuid, ((void*)0), ((void*)0) , ignores, depth, eb->get_all, eb->no_ignore, status_func, status_baton, eb->cancel_func, eb->cancel_baton, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 2079 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
        }
      if (dir_was_deleted)
        status->repos_node_status = svn_wc_status_deleted;
      if (is_sendable_status(status, eb->no_ignore, eb->get_all))
        do { svn_error_t *svn_err__temp = ((eb->status_func)(eb->status_baton, local_abspath, status, iterpool)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }


  apr_pool_destroy(iterpool);

  return 0;
}







static svn_error_t *
set_target_revision(void *edit_baton,
                    svn_revnum_t target_revision,
                    apr_pool_t *pool)
{
  struct edit_baton *eb = edit_baton;
  *(eb->target_revision) = target_revision;
  return 0;
}



static svn_error_t *
open_root(void *edit_baton,
          svn_revnum_t base_revision,
          apr_pool_t *pool,
          void **dir_baton)
{
  struct edit_baton *eb = edit_baton;
  eb->root_opened = (!0);
  return make_dir_baton(dir_baton, ((void*)0), eb, ((void*)0), pool);
}



static svn_error_t *
delete_entry(const char *path,
             svn_revnum_t revision,
             void *parent_baton,
             apr_pool_t *pool)
{
  struct dir_baton *db = parent_baton;
  struct edit_baton *eb = db->edit_baton;
  const char *local_abspath = svn_dirent_join(eb->anchor_abspath, path, pool);





  do { svn_error_t *svn_err__temp = (tweak_statushash(db, db, (!0), eb->db, local_abspath, svn_wc_status_deleted, 0, 0, revision, ((void*)0), pool)); if (svn_err__temp) return (svn_err__temp); } while (0);






  if (db->parent_baton && (! *eb->target_basename))
    do { svn_error_t *svn_err__temp = (tweak_statushash(db->parent_baton, db, (!0),eb->db, db->local_abspath, svn_wc_status_modified, svn_wc_status_modified, 0, ((svn_revnum_t) -1), ((void*)0), pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  return 0;
}



static svn_error_t *
add_directory(const char *path,
              void *parent_baton,
              const char *copyfrom_path,
              svn_revnum_t copyfrom_revision,
              apr_pool_t *pool,
              void **child_baton)
{
  struct dir_baton *pb = parent_baton;
  struct edit_baton *eb = pb->edit_baton;
  struct dir_baton *new_db;

  do { svn_error_t *svn_err__temp = (make_dir_baton(child_baton, path, eb, pb, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  new_db = *child_baton;
  new_db->added = (!0);


  pb->text_changed = (!0);

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
  return make_dir_baton(child_baton, path, pb->edit_baton, pb, pool);
}



static svn_error_t *
change_dir_prop(void *dir_baton,
                const char *name,
                const svn_string_t *value,
                apr_pool_t *pool)
{
  struct dir_baton *db = dir_baton;
  if (svn_wc_is_normal_prop(name))
    db->prop_changed = (!0);


  if (value != ((void*)0))
    {
      if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p ("svn:" "entry:" "committed-rev") && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen ("svn:" "entry:" "committed-rev"), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:" "entry:" "committed-rev") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-rev") == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, "svn:" "entry:" "committed-rev") : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p ("svn:" "entry:" "committed-rev") && ((size_t)(const void *)(("svn:" "entry:" "committed-rev") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-rev") == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-rev") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:" "entry:" "committed-rev") && ((size_t)(const void *)(("svn:" "entry:" "committed-rev") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-rev") == 1) && (__s2_len = __builtin_strlen ("svn:" "entry:" "committed-rev"), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-rev") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, "svn:" "entry:" "committed-rev")))); }) == 0)
        db->ood_changed_rev = ((svn_revnum_t) atol(value->data));
      else if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p ("svn:" "entry:" "last-author") && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen ("svn:" "entry:" "last-author"), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:" "entry:" "last-author") + 1) - (size_t)(const void *)("svn:" "entry:" "last-author") == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, "svn:" "entry:" "last-author") : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p ("svn:" "entry:" "last-author") && ((size_t)(const void *)(("svn:" "entry:" "last-author") + 1) - (size_t)(const void *)("svn:" "entry:" "last-author") == 1) ? __builtin_strcmp (name, "svn:" "entry:" "last-author") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:" "entry:" "last-author"); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:" "entry:" "last-author") && ((size_t)(const void *)(("svn:" "entry:" "last-author") + 1) - (size_t)(const void *)("svn:" "entry:" "last-author") == 1) && (__s2_len = __builtin_strlen ("svn:" "entry:" "last-author"), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, "svn:" "entry:" "last-author") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, "svn:" "entry:" "last-author")))); }) == 0)
        db->ood_changed_author = apr_pstrdup(db->pool, value->data);
      else if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p ("svn:" "entry:" "committed-date") && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen ("svn:" "entry:" "committed-date"), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:" "entry:" "committed-date") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-date") == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, "svn:" "entry:" "committed-date") : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p ("svn:" "entry:" "committed-date") && ((size_t)(const void *)(("svn:" "entry:" "committed-date") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-date") == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-date") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:" "entry:" "committed-date") && ((size_t)(const void *)(("svn:" "entry:" "committed-date") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-date") == 1) && (__s2_len = __builtin_strlen ("svn:" "entry:" "committed-date"), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-date") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, "svn:" "entry:" "committed-date")))); }) == 0)
        {
          apr_time_t tm;
          do { svn_error_t *svn_err__temp = (svn_time_from_cstring(&tm, value->data, db->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
          db->ood_changed_date = tm;
        }
    }

  return 0;
}




static svn_error_t *
close_directory(void *dir_baton,
                apr_pool_t *pool)
{
  struct dir_baton *db = dir_baton;
  struct dir_baton *pb = db->parent_baton;
  struct edit_baton *eb = db->edit_baton;
  apr_pool_t *scratch_pool = db->pool;



  if (db->added || db->prop_changed || db->text_changed
      || db->ood_changed_rev != ((svn_revnum_t) -1))
    {
      enum svn_wc_status_kind repos_node_status;
      enum svn_wc_status_kind repos_text_status;
      enum svn_wc_status_kind repos_prop_status;


      if (db->added)
        {
          repos_node_status = svn_wc_status_added;
          repos_text_status = svn_wc_status_none;
          repos_prop_status = db->prop_changed ? svn_wc_status_added
                              : svn_wc_status_none;
        }
      else
        {
          repos_node_status = (db->text_changed || db->prop_changed)
                                       ? svn_wc_status_modified
                                       : svn_wc_status_none;
          repos_text_status = db->text_changed ? svn_wc_status_modified
                              : svn_wc_status_none;
          repos_prop_status = db->prop_changed ? svn_wc_status_modified
                              : svn_wc_status_none;
        }




      if (pb)
        {


          do { svn_error_t *svn_err__temp = (tweak_statushash(pb, db, (!0), eb->db, db->local_abspath, repos_node_status, repos_text_status, repos_prop_status, ((svn_revnum_t) -1), ((void*)0), scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



        }
      else
        {



          eb->anchor_status->repos_node_status = repos_node_status;
          eb->anchor_status->repos_prop_status = repos_prop_status;
          eb->anchor_status->repos_text_status = repos_text_status;


          if (db->ood_changed_rev != eb->anchor_status->revision)
            {
              eb->anchor_status->ood_changed_rev = db->ood_changed_rev;
              eb->anchor_status->ood_changed_date = db->ood_changed_date;
              eb->anchor_status->ood_kind = db->ood_kind;
              eb->anchor_status->ood_changed_author =
                apr_pstrdup(pool, db->ood_changed_author);
            }
        }
    }



  if (pb && ! db->excluded)
    {
      svn_boolean_t was_deleted = 0;
      const svn_wc_status3_t *dir_status;


      dir_status = apr_hash_get(pb->statii, db->local_abspath,
                                (-1));
      if (dir_status &&
          ((dir_status->repos_node_status == svn_wc_status_deleted)
           || (dir_status->repos_node_status == svn_wc_status_replaced)))
        was_deleted = (!0);


      do { svn_error_t *svn_err__temp = (handle_statii(eb, dir_status ? dir_status->repos_root_url : ((void*)0), dir_status ? dir_status->repos_relpath : ((void*)0), dir_status ? dir_status->repos_uuid : ((void*)0), db->statii, was_deleted, db->depth, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




      if (dir_status && is_sendable_status(dir_status, eb->no_ignore,
                                           eb->get_all))
        do { svn_error_t *svn_err__temp = ((eb->status_func)(eb->status_baton, db->local_abspath, dir_status, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

      apr_hash_set(pb->statii, db->local_abspath, (-1), ((void*)0));
    }
  else if (! pb)
    {


      if (*eb->target_basename)
        {
          const svn_wc_status3_t *tgt_status;

          tgt_status = apr_hash_get(db->statii, eb->target_abspath,
                                    (-1));
          if (tgt_status)
            {
              if (tgt_status->versioned
                  && tgt_status->kind == svn_node_dir)
                {
                  do { svn_error_t *svn_err__temp = (get_dir_status(&eb->wb, eb->target_abspath, (!0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0) , eb->ignores, eb->default_depth, eb->get_all, eb->no_ignore, eb->status_func, eb->status_baton, eb->cancel_func, eb->cancel_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 2348 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
                }
              if (is_sendable_status(tgt_status, eb->no_ignore, eb->get_all))
                do { svn_error_t *svn_err__temp = ((eb->status_func)(eb->status_baton, eb->target_abspath, tgt_status, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

            }
        }
      else
        {



          do { svn_error_t *svn_err__temp = (handle_statii(eb, eb->anchor_status->repos_root_url, eb->anchor_status->repos_relpath, eb->anchor_status->repos_uuid, db->statii, 0, eb->default_depth, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





          if (is_sendable_status(eb->anchor_status, eb->no_ignore,
                                 eb->get_all))
            do { svn_error_t *svn_err__temp = ((eb->status_func)(eb->status_baton, db->local_abspath, eb->anchor_status, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

          eb->anchor_status = ((void*)0);
        }
    }

  apr_pool_clear(scratch_pool);

  return 0;
}




static svn_error_t *
add_file(const char *path,
         void *parent_baton,
         const char *copyfrom_path,
         svn_revnum_t copyfrom_revision,
         apr_pool_t *pool,
         void **file_baton)
{
  struct dir_baton *pb = parent_baton;
  struct file_baton *new_fb = make_file_baton(pb, path, pool);


  pb->text_changed = (!0);


  new_fb->added = (!0);

  *file_baton = new_fb;
  return 0;
}



static svn_error_t *
open_file(const char *path,
          void *parent_baton,
          svn_revnum_t base_revision,
          apr_pool_t *pool,
          void **file_baton)
{
  struct dir_baton *pb = parent_baton;
  struct file_baton *new_fb = make_file_baton(pb, path, pool);

  *file_baton = new_fb;
  return 0;
}



static svn_error_t *
apply_textdelta(void *file_baton,
                const char *base_checksum,
                apr_pool_t *pool,
                svn_txdelta_window_handler_t *handler,
                void **handler_baton)
{
  struct file_baton *fb = file_baton;


  fb->text_changed = (!0);


  *handler_baton = ((void*)0);
  *handler = svn_delta_noop_window_handler;

  return 0;
}



static svn_error_t *
change_file_prop(void *file_baton,
                 const char *name,
                 const svn_string_t *value,
                 apr_pool_t *pool)
{
  struct file_baton *fb = file_baton;
  if (svn_wc_is_normal_prop(name))
    fb->prop_changed = (!0);


  if (value != ((void*)0))
    {
      if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p ("svn:" "entry:" "committed-rev") && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen ("svn:" "entry:" "committed-rev"), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:" "entry:" "committed-rev") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-rev") == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, "svn:" "entry:" "committed-rev") : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p ("svn:" "entry:" "committed-rev") && ((size_t)(const void *)(("svn:" "entry:" "committed-rev") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-rev") == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-rev") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:" "entry:" "committed-rev") && ((size_t)(const void *)(("svn:" "entry:" "committed-rev") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-rev") == 1) && (__s2_len = __builtin_strlen ("svn:" "entry:" "committed-rev"), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-rev") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-rev"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, "svn:" "entry:" "committed-rev")))); }) == 0)
        fb->ood_changed_rev = ((svn_revnum_t) atol(value->data));
      else if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p ("svn:" "entry:" "last-author") && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen ("svn:" "entry:" "last-author"), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:" "entry:" "last-author") + 1) - (size_t)(const void *)("svn:" "entry:" "last-author") == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, "svn:" "entry:" "last-author") : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p ("svn:" "entry:" "last-author") && ((size_t)(const void *)(("svn:" "entry:" "last-author") + 1) - (size_t)(const void *)("svn:" "entry:" "last-author") == 1) ? __builtin_strcmp (name, "svn:" "entry:" "last-author") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:" "entry:" "last-author"); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:" "entry:" "last-author") && ((size_t)(const void *)(("svn:" "entry:" "last-author") + 1) - (size_t)(const void *)("svn:" "entry:" "last-author") == 1) && (__s2_len = __builtin_strlen ("svn:" "entry:" "last-author"), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, "svn:" "entry:" "last-author") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "last-author"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, "svn:" "entry:" "last-author")))); }) == 0)
        fb->ood_changed_author = apr_pstrdup(fb->dir_baton->pool,
                                              value->data);
      else if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (name) && __builtin_constant_p ("svn:" "entry:" "committed-date") && (__s1_len = __builtin_strlen (name), __s2_len = __builtin_strlen ("svn:" "entry:" "committed-date"), (!((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:" "entry:" "committed-date") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-date") == 1) || __s2_len >= 4)) ? __builtin_strcmp (name, "svn:" "entry:" "committed-date") : (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) && (__s1_len = __builtin_strlen (name), __s1_len < 4) ? (__builtin_constant_p ("svn:" "entry:" "committed-date") && ((size_t)(const void *)(("svn:" "entry:" "committed-date") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-date") == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-date") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"); int __result = (((const unsigned char *) (const char *) (name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:" "entry:" "committed-date") && ((size_t)(const void *)(("svn:" "entry:" "committed-date") + 1) - (size_t)(const void *)("svn:" "entry:" "committed-date") == 1) && (__s2_len = __builtin_strlen ("svn:" "entry:" "committed-date"), __s2_len < 4) ? (__builtin_constant_p (name) && ((size_t)(const void *)((name) + 1) - (size_t)(const void *)(name) == 1) ? __builtin_strcmp (name, "svn:" "entry:" "committed-date") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (name); int __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:" "entry:" "committed-date"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (name, "svn:" "entry:" "committed-date")))); }) == 0)
        {
          apr_time_t tm;
          do { svn_error_t *svn_err__temp = (svn_time_from_cstring(&tm, value->data, fb->dir_baton->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

          fb->ood_changed_date = tm;
        }
    }

  return 0;
}



static svn_error_t *
close_file(void *file_baton,
           const char *text_checksum,
           apr_pool_t *pool)
{
  struct file_baton *fb = file_baton;
  enum svn_wc_status_kind repos_node_status;
  enum svn_wc_status_kind repos_text_status;
  enum svn_wc_status_kind repos_prop_status;
  const svn_lock_t *repos_lock = ((void*)0);


  if (! (fb->added || fb->prop_changed || fb->text_changed))
    return 0;


  if (fb->added)
    {
      repos_node_status = svn_wc_status_added;
      repos_text_status = fb->text_changed ? svn_wc_status_modified
                                           : 0 ;
      repos_prop_status = fb->prop_changed ? svn_wc_status_modified
                                           : 0 ;

      if (fb->edit_baton->wb.repos_locks)
        {
          const char *dir_repos_relpath = find_dir_repos_relpath(fb->dir_baton,
                                                                 pool);



          const char *repos_relpath = svn_relpath_join(dir_repos_relpath,
                                                       fb->name, pool);

          repos_lock = apr_hash_get(fb->edit_baton->wb.repos_locks,
                                    svn_fspath__join("/", repos_relpath,
                                                     pool),
                                    (-1));
        }
    }
  else
    {
      repos_node_status = (fb->text_changed || fb->prop_changed)
                                 ? svn_wc_status_modified
                                 : 0 ;
      repos_text_status = fb->text_changed ? svn_wc_status_modified
                                           : 0 ;
      repos_prop_status = fb->prop_changed ? svn_wc_status_modified
                                           : 0 ;
    }

  return tweak_statushash(fb, ((void*)0), 0, fb->edit_baton->db,
                          fb->local_abspath, repos_node_status,
                          repos_text_status, repos_prop_status,
                          ((svn_revnum_t) -1), repos_lock, pool);
}


static svn_error_t *
close_edit(void *edit_baton,
           apr_pool_t *pool)
{
  struct edit_baton *eb = edit_baton;




  if (eb->root_opened)
    return 0;

  do { svn_error_t *svn_err__temp = (svn_wc_walk_status(eb->wc_ctx, eb->target_abspath, eb->default_depth, eb->get_all, eb->no_ignore, 0, eb->ignores, eb->status_func, eb->status_baton, eb->cancel_func, eb->cancel_baton, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 2556 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  return 0;
}





svn_error_t *
svn_wc__get_status_editor(const svn_delta_editor_t **editor,
                          void **edit_baton,
                          void **set_locks_baton,
                          svn_revnum_t *edit_revision,
                          svn_wc_context_t *wc_ctx,
                          const char *anchor_abspath,
                          const char *target_basename,
                          svn_depth_t depth,
                          svn_boolean_t get_all,
                          svn_boolean_t no_ignore,
                          svn_boolean_t depth_as_sticky,
                          svn_boolean_t server_performs_filtering,
                          const apr_array_header_t *ignore_patterns,
                          svn_wc_status_func4_t status_func,
                          void *status_baton,
                          svn_cancel_func_t cancel_func,
                          void *cancel_baton,
                          apr_pool_t *result_pool,
                          apr_pool_t *scratch_pool)
{
  struct edit_baton *eb;
  svn_delta_editor_t *tree_editor = svn_delta_default_editor(result_pool);
  void *inner_baton;
  struct svn_wc__shim_fetch_baton_t *sfb;
  const svn_delta_editor_t *inner_editor;
  svn_delta_shim_callbacks_t *shim_callbacks =
                                svn_delta_shim_callbacks_default(result_pool);


  eb = memset(apr_palloc(result_pool, sizeof(*eb)), 0, sizeof(*eb));
  eb->default_depth = depth;
  eb->target_revision = edit_revision;
  eb->db = wc_ctx->db;
  eb->wc_ctx = wc_ctx;
  eb->get_all = get_all;
  eb->no_ignore = no_ignore;
  eb->status_func = status_func;
  eb->status_baton = status_baton;
  eb->cancel_func = cancel_func;
  eb->cancel_baton = cancel_baton;
  eb->anchor_abspath = apr_pstrdup(result_pool, anchor_abspath);
  eb->target_abspath = svn_dirent_join(anchor_abspath, target_basename,
                                          result_pool);

  eb->target_basename = apr_pstrdup(result_pool, target_basename);
  eb->root_opened = 0;

  eb->wb.db = wc_ctx->db;
  eb->wb.target_abspath = eb->target_abspath;
  eb->wb.ignore_text_mods = 0;
  eb->wb.repos_locks = ((void*)0);
  eb->wb.repos_root = ((void*)0);

  do { svn_error_t *svn_err__temp = (svn_wc__db_externals_defined_below(&eb->wb.externals, wc_ctx->db, eb->target_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);





  if (ignore_patterns)
    {
      eb->ignores = ignore_patterns;
    }
  else
    {
      apr_array_header_t *ignores;

      do { svn_error_t *svn_err__temp = (svn_wc_get_default_ignores(&ignores, ((void*)0), result_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      eb->ignores = ignores;
    }



  do { svn_error_t *svn_err__temp = (internal_status(&(eb->anchor_status), wc_ctx->db, anchor_abspath, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  tree_editor->set_target_revision = set_target_revision;
  tree_editor->open_root = open_root;
  tree_editor->delete_entry = delete_entry;
  tree_editor->add_directory = add_directory;
  tree_editor->open_directory = open_directory;
  tree_editor->change_dir_prop = change_dir_prop;
  tree_editor->close_directory = close_directory;
  tree_editor->add_file = add_file;
  tree_editor->open_file = open_file;
  tree_editor->apply_textdelta = apply_textdelta;
  tree_editor->change_file_prop = change_file_prop;
  tree_editor->close_file = close_file;
  tree_editor->close_edit = close_edit;

  inner_editor = tree_editor;
  inner_baton = eb;

  if (!server_performs_filtering
      && !depth_as_sticky)
    do { svn_error_t *svn_err__temp = (svn_wc__ambient_depth_filter_editor(&inner_editor, &inner_baton, wc_ctx->db, anchor_abspath, target_basename, inner_editor, inner_baton, result_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 2670 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
  do { svn_error_t *svn_err__temp = (svn_delta_get_cancellation_editor(cancel_func, cancel_baton, inner_editor, inner_baton, editor, edit_baton, result_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  if (set_locks_baton)
    *set_locks_baton = eb;

  sfb = apr_palloc(result_pool, sizeof(*sfb));
  sfb->db = wc_ctx->db;
  sfb->base_abspath = eb->anchor_abspath;
  sfb->fetch_base = 0;

  shim_callbacks->fetch_kind_func = svn_wc__fetch_kind_func;
  shim_callbacks->fetch_props_func = svn_wc__fetch_props_func;
  shim_callbacks->fetch_base_func = svn_wc__fetch_base_func;
  shim_callbacks->fetch_baton = sfb;

  do { svn_error_t *svn_err__temp = (svn_editor__insert_shims(editor, edit_baton, *editor, *edit_baton, ((void*)0), ((void*)0), shim_callbacks, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



  return 0;
}




static svn_error_t *
stat_wc_dirent_case_sensitive(const svn_io_dirent2_t **dirent,
                              svn_wc__db_t *db,
                              const char *local_abspath,
                              apr_pool_t *result_pool,
                              apr_pool_t *scratch_pool)
{
  svn_boolean_t is_wcroot;






  do { svn_error_t *svn_err__temp = (svn_wc__db_is_wcroot(&is_wcroot, db, local_abspath, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  return (svn_io_stat_dirent2(dirent, local_abspath, ! is_wcroot , (!0) , result_pool, scratch_pool));




}

svn_error_t *
svn_wc__internal_walk_status(svn_wc__db_t *db,
                             const char *local_abspath,
                             svn_depth_t depth,
                             svn_boolean_t get_all,
                             svn_boolean_t no_ignore,
                             svn_boolean_t ignore_text_mods,
                             const apr_array_header_t *ignore_patterns,
                             svn_wc_status_func4_t status_func,
                             void *status_baton,
                             svn_cancel_func_t cancel_func,
                             void *cancel_baton,
                             apr_pool_t *scratch_pool)
{
  struct walk_status_baton wb;
  const svn_io_dirent2_t *dirent;
  const struct svn_wc__db_info_t *info;
  svn_error_t *err;

  wb.db = db;
  wb.target_abspath = local_abspath;
  wb.ignore_text_mods = ignore_text_mods;
  wb.repos_root = ((void*)0);
  wb.repos_locks = ((void*)0);



  if (!ignore_patterns)
    {
      apr_array_header_t *ignores;

      do { svn_error_t *svn_err__temp = (svn_wc_get_default_ignores(&ignores, ((void*)0), scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      ignore_patterns = ignores;
    }

  err = read_info(&info, local_abspath, db, scratch_pool, scratch_pool);

  if (err)
    {
      if (err->apr_err == SVN_ERR_WC_PATH_NOT_FOUND)
        {
          svn_error_clear(err);
          info = ((void*)0);
        }
      else
        return (err);

      wb.externals = apr_hash_make(scratch_pool);

      do { svn_error_t *svn_err__temp = (svn_io_stat_dirent2(&dirent, local_abspath, 0, (!0), scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }
  else
    {
      do { svn_error_t *svn_err__temp = (svn_wc__db_externals_defined_below(&wb.externals, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);



      do { svn_error_t *svn_err__temp = (stat_wc_dirent_case_sensitive(&dirent, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }

  if (info
      && info->kind == svn_kind_dir
      && info->status != svn_wc__db_status_not_present
      && info->status != svn_wc__db_status_excluded
      && info->status != svn_wc__db_status_server_excluded)
    {
      do { svn_error_t *svn_err__temp = (get_dir_status(&wb, local_abspath, 0 , ((void*)0), ((void*)0), ((void*)0), info, dirent, ignore_patterns, depth, get_all, no_ignore, status_func, status_baton, cancel_func, cancel_baton, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
# 2803 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
    }
  else
    {



      err = get_child_status(&wb,
                             local_abspath,
                             info,
                             dirent,
                             ignore_patterns,
                             get_all,
                             status_func, status_baton,
                             cancel_func, cancel_baton,
                             scratch_pool);

      if (!info && err && err->apr_err == SVN_ERR_WC_PATH_NOT_FOUND)
        {


          svn_error_clear(err);
          return svn_error_createf(SVN_ERR_WC_PATH_NOT_FOUND, ((void*)0),
                                   dcgettext ("subversion", "The node '%s' was not found.", 5),
                                   svn_dirent_local_style(local_abspath,
                                                          scratch_pool));
        }
      do { svn_error_t *svn_err__temp = (err); if (svn_err__temp) return (svn_err__temp); } while (0);
    }

  return 0;
}

svn_error_t *
svn_wc_walk_status(svn_wc_context_t *wc_ctx,
                   const char *local_abspath,
                   svn_depth_t depth,
                   svn_boolean_t get_all,
                   svn_boolean_t no_ignore,
                   svn_boolean_t ignore_text_mods,
                   const apr_array_header_t *ignore_patterns,
                   svn_wc_status_func4_t status_func,
                   void *status_baton,
                   svn_cancel_func_t cancel_func,
                   void *cancel_baton,
                   apr_pool_t *scratch_pool)
{
  return (svn_wc__internal_walk_status(wc_ctx->db, local_abspath, depth, get_all, no_ignore, ignore_text_mods, ignore_patterns, status_func, status_baton, cancel_func, cancel_baton, scratch_pool));
# 2862 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
}


svn_error_t *
svn_wc_status_set_repos_locks(void *edit_baton,
                              apr_hash_t *locks,
                              const char *repos_root,
                              apr_pool_t *pool)
{
  struct edit_baton *eb = edit_baton;

  eb->wb.repos_locks = locks;
  eb->wb.repos_root = apr_pstrdup(pool, repos_root);

  return 0;
}


svn_error_t *
svn_wc_get_default_ignores(apr_array_header_t **patterns,
                           apr_hash_t *config,
                           apr_pool_t *pool)
{
  svn_config_t *cfg = config ? apr_hash_get(config,
                                            "config",
                                            (-1)) : ((void*)0);
  const char *val;



  svn_config_get(cfg, &val, "miscellany",
                 "global-ignores",
                 "*.o *.lo *.la *.al .libs *.so *.so.[0-9]* *.a *.pyc *.pyo __pycache__" " " "*.rej *~ #*# .#* .*.swp .DS_Store");
  *patterns = apr_array_make(pool, 16, sizeof(const char *));


  svn_cstring_split_append(*patterns, val, "\n\r\t\v ", 0, pool);
  return 0;
}



static svn_error_t *
internal_status(svn_wc_status3_t **status,
                svn_wc__db_t *db,
                const char *local_abspath,
                apr_pool_t *result_pool,
                apr_pool_t *scratch_pool)
{
  const svn_io_dirent2_t *dirent;
  svn_kind_t node_kind;
  const char *parent_repos_relpath;
  const char *parent_repos_root_url;
  const char *parent_repos_uuid;
  svn_wc__db_status_t node_status;
  svn_boolean_t conflicted;
  svn_boolean_t is_root = 0;
  svn_error_t *err;

  do { if (!(svn_dirent_is_absolute(local_abspath))) do { svn_error_t *svn_err__temp = (svn_error__malfunction((!0), "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c", 2921, "svn_dirent_is_absolute(local_abspath)")); if (svn_err__temp) return (svn_err__temp); } while (0); } while (0);

  err = svn_wc__db_read_info(&node_status, &node_kind, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &conflicted,
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             db, local_abspath,
                             scratch_pool, scratch_pool);

  if (err)
    {
      if (err->apr_err != SVN_ERR_WC_PATH_NOT_FOUND)
        return (err);

      svn_error_clear(err);
      node_kind = svn_kind_unknown;


      conflicted = 0;

      do { svn_error_t *svn_err__temp = (svn_io_stat_dirent(&dirent, local_abspath, (!0), scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

    }
  else
    do { svn_error_t *svn_err__temp = (stat_wc_dirent_case_sensitive(&dirent, db, local_abspath, scratch_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  if (node_kind != svn_kind_unknown
      && (node_status == svn_wc__db_status_not_present
          || node_status == svn_wc__db_status_server_excluded
          || node_status == svn_wc__db_status_excluded))
    {
      node_kind = svn_kind_unknown;
    }

  if (node_kind == svn_kind_unknown)
    return (assemble_unversioned(status, db, local_abspath, dirent, conflicted, 0 , result_pool, scratch_pool));





  if (svn_dirent_is_root(local_abspath, strlen(local_abspath)))
    is_root = (!0);
  else
    do { svn_error_t *svn_err__temp = (svn_wc__db_is_wcroot(&is_root, db, local_abspath, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (!is_root)
    {
      svn_wc__db_status_t parent_status;
      const char *parent_abspath = svn_dirent_dirname(local_abspath,
                                                      scratch_pool);

      err = svn_wc__db_read_info(&parent_status, ((void*)0), ((void*)0),
                                 &parent_repos_relpath, &parent_repos_root_url,
                                 &parent_repos_uuid, ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 db, parent_abspath,
                                 result_pool, scratch_pool);

      if (err && (err->apr_err == SVN_ERR_WC_PATH_NOT_FOUND
                  || ((err->apr_err == SVN_ERR_WC_NOT_WORKING_COPY) || (err->apr_err == SVN_ERR_WC_UPGRADE_REQUIRED))))
        {
          svn_error_clear(err);
          parent_repos_root_url = ((void*)0);
          parent_repos_relpath = ((void*)0);
          parent_repos_uuid = ((void*)0);
        }
      else do { svn_error_t *svn_err__temp = (err); if (svn_err__temp) return (svn_err__temp); } while (0);
    }
  else
    {
      parent_repos_root_url = ((void*)0);
      parent_repos_relpath = ((void*)0);
      parent_repos_uuid = ((void*)0);
    }

  return (assemble_status(status, db, local_abspath, parent_repos_root_url, parent_repos_relpath, parent_repos_uuid, ((void*)0), dirent, (!0) , 0, ((void*)0) , result_pool, scratch_pool));
# 3010 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/subversion/libsvn_wc/status.c"
}


svn_error_t *
svn_wc_status3(svn_wc_status3_t **status,
               svn_wc_context_t *wc_ctx,
               const char *local_abspath,
               apr_pool_t *result_pool,
               apr_pool_t *scratch_pool)
{
  return (internal_status(status, wc_ctx->db, local_abspath, result_pool, scratch_pool));


}

svn_wc_status3_t *
svn_wc_dup_status3(const svn_wc_status3_t *orig_stat,
                   apr_pool_t *pool)
{
  svn_wc_status3_t *new_stat = apr_palloc(pool, sizeof(*new_stat));


  *new_stat = *orig_stat;


  if (orig_stat->repos_lock)
    new_stat->repos_lock = svn_lock_dup(orig_stat->repos_lock, pool);

  if (orig_stat->changed_author)
    new_stat->changed_author = apr_pstrdup(pool, orig_stat->changed_author);

  if (orig_stat->ood_changed_author)
    new_stat->ood_changed_author
      = apr_pstrdup(pool, orig_stat->ood_changed_author);

  if (orig_stat->lock)
    new_stat->lock = svn_lock_dup(orig_stat->lock, pool);

  if (orig_stat->changelist)
    new_stat->changelist
      = apr_pstrdup(pool, orig_stat->changelist);

  if (orig_stat->repos_root_url)
    new_stat->repos_root_url
      = apr_pstrdup(pool, orig_stat->repos_root_url);

  if (orig_stat->repos_relpath)
    new_stat->repos_relpath
      = apr_pstrdup(pool, orig_stat->repos_relpath);

  if (orig_stat->repos_uuid)
    new_stat->repos_uuid
      = apr_pstrdup(pool, orig_stat->repos_uuid);

  if (orig_stat->moved_from_abspath)
    new_stat->moved_from_abspath
      = apr_pstrdup(pool, orig_stat->moved_from_abspath);

  if (orig_stat->moved_to_abspath)
    new_stat->moved_to_abspath
      = apr_pstrdup(pool, orig_stat->moved_to_abspath);


  return new_stat;
}

svn_error_t *
svn_wc_get_ignores2(apr_array_header_t **patterns,
                    svn_wc_context_t *wc_ctx,
                    const char *local_abspath,
                    apr_hash_t *config,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool)
{
  apr_array_header_t *default_ignores;

  do { svn_error_t *svn_err__temp = (svn_wc_get_default_ignores(&default_ignores, config, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  return (collect_ignore_patterns(patterns, ((void*)0), wc_ctx->db, local_abspath, default_ignores, (!0), result_pool, scratch_pool));



}
