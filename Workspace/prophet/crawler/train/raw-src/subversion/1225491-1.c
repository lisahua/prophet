# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 313 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
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
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
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
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2

# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h" 1
# 29 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apu.h" 1
# 30 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h" 2

# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h" 1
# 24 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
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

    __extension__ unsigned char __cmsg_data [];

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
# 25 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h" 1
# 44 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_pools.h"
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
# 26 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h" 2
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
# 27 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h" 2




# 1 "/usr/include/netinet/in.h" 1 3 4
# 30 "/usr/include/netinet/in.h" 3 4
typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };



# 1 "/usr/include/x86_64-linux-gnu/bits/in.h" 1 3 4
# 112 "/usr/include/x86_64-linux-gnu/bits/in.h" 3 4
struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };
# 38 "/usr/include/netinet/in.h" 2 3 4


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
# 209 "/usr/include/netinet/in.h" 3 4
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
# 237 "/usr/include/netinet/in.h" 3 4
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
# 374 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 386 "/usr/include/netinet/in.h" 2 3 4
# 501 "/usr/include/netinet/in.h" 3 4
extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) __attribute__ ((__nothrow__ ));


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     __attribute__ ((__nothrow__ ));
# 531 "/usr/include/netinet/in.h" 3 4
struct cmsghdr;


struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
  };



extern int inet6_option_space (int __nbytes)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
         int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_append (struct cmsghdr *__cmsg,
    const uint8_t *__typep, int __multx,
    int __plusy) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
        int __multx, int __plusy)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_next (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
extern int inet6_option_find (const struct cmsghdr *__cmsg,
         uint8_t **__tptrp, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) __attribute__ ((__nothrow__ ));
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
        uint8_t __type, socklen_t __len, uint8_t __align,
        void **__databufp) __attribute__ ((__nothrow__ ));
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     __attribute__ ((__nothrow__ ));
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ ));
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t *__typep, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ ));
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
      uint8_t __type, socklen_t *__lenp,
      void **__databufp) __attribute__ ((__nothrow__ ));
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
         socklen_t __vallen) __attribute__ ((__nothrow__ ));



extern socklen_t inet6_rth_space (int __type, int __segments) __attribute__ ((__nothrow__ ));
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
        int __segments) __attribute__ ((__nothrow__ ));
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) __attribute__ ((__nothrow__ ));
extern int inet6_rth_reverse (const void *__in, void *__out) __attribute__ ((__nothrow__ ));
extern int inet6_rth_segments (const void *__bp) __attribute__ ((__nothrow__ ));
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     __attribute__ ((__nothrow__ ));





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t *__fmode,
    uint32_t *__numsrc, struct in_addr *__slist)
     __attribute__ ((__nothrow__ ));


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
    struct in_addr __group, uint32_t __fmode,
    uint32_t __numsrc,
    const struct in_addr *__slist)
     __attribute__ ((__nothrow__ ));



extern int getsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t *__fmode,
       uint32_t *__numsrc,
       struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ ));


extern int setsourcefilter (int __s, uint32_t __interface_addr,
       const struct sockaddr *__group,
       socklen_t __grouplen, uint32_t __fmode,
       uint32_t __numsrc,
       const struct sockaddr_storage *__slist) __attribute__ ((__nothrow__ ));
# 32 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h" 2
# 108 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
typedef enum {
    APR_SHUTDOWN_READ,
    APR_SHUTDOWN_WRITE,
    APR_SHUTDOWN_READWRITE
} apr_shutdown_how_e;
# 172 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
typedef enum {
    APR_LOCAL,
    APR_REMOTE
} apr_interface_e;
# 193 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
typedef struct apr_socket_t apr_socket_t;



typedef struct apr_hdtr_t apr_hdtr_t;

typedef struct in_addr apr_in_addr_t;

typedef struct apr_ipsubnet_t apr_ipsubnet_t;


typedef apr_uint16_t apr_port_t;




typedef struct apr_sockaddr_t apr_sockaddr_t;



struct apr_sockaddr_t {

    apr_pool_t *pool;

    char *hostname;

    char *servname;

    apr_port_t port;

    apr_int32_t family;

    apr_socklen_t salen;

    int ipaddr_len;


    int addr_str_len;


    void *ipaddr_ptr;


    apr_sockaddr_t *next;

    union {

        struct sockaddr_in sin;


        struct sockaddr_in6 sin6;




        struct sockaddr_storage sas;

    } sa;
};
# 263 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
struct apr_hdtr_t {

    struct iovec* headers;

    int numheaders;

    struct iovec* trailers;

    int numtrailers;
};
# 287 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_create(apr_socket_t **new_sock,
                                            int family, int type,
                                            int protocol,
                                            apr_pool_t *cont);
# 305 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_shutdown(apr_socket_t *thesocket,
                                              apr_shutdown_how_e how);





apr_status_t apr_socket_close(apr_socket_t *thesocket);
# 321 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_bind(apr_socket_t *sock,
                                          apr_sockaddr_t *sa);
# 331 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_listen(apr_socket_t *sock,
                                            apr_int32_t backlog);
# 345 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_accept(apr_socket_t **new_sock,
                                            apr_socket_t *sock,
                                            apr_pool_t *connection_pool);







apr_status_t apr_socket_connect(apr_socket_t *sock,
                                             apr_sockaddr_t *sa);
# 370 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_atreadeof(apr_socket_t *sock,
                                               int *atreadeof);
# 396 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_sockaddr_info_get(apr_sockaddr_t **sa,
                                          const char *hostname,
                                          apr_int32_t family,
                                          apr_port_t port,
                                          apr_int32_t flags,
                                          apr_pool_t *p);
# 411 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_getnameinfo(char **hostname,
                                          apr_sockaddr_t *sa,
                                          apr_int32_t flags);
# 445 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_parse_addr_port(char **addr,
                                              char **scope_id,
                                              apr_port_t *port,
                                              const char *str,
                                              apr_pool_t *p);
# 459 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_gethostname(char *buf, int len, apr_pool_t *cont);







apr_status_t apr_socket_data_get(void **data, const char *key,
                                              apr_socket_t *sock);
# 477 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_data_set(apr_socket_t *sock, void *data,
                                              const char *key,
                                              apr_status_t (*cleanup)(void*));
# 498 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_send(apr_socket_t *sock, const char *buf,
                                          apr_size_t *len);
# 519 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_sendv(apr_socket_t *sock,
                                           const struct iovec *vec,
                                           apr_int32_t nvec, apr_size_t *len);
# 530 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_sendto(apr_socket_t *sock,
                                            apr_sockaddr_t *where,
                                            apr_int32_t flags, const char *buf,
                                            apr_size_t *len);
# 548 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_recvfrom(apr_sockaddr_t *from,
                                              apr_socket_t *sock,
                                              apr_int32_t flags, char *buf,
                                              apr_size_t *len);
# 573 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_sendfile(apr_socket_t *sock,
                                              apr_file_t *file,
                                              apr_hdtr_t *hdtr,
                                              apr_off_t *offset,
                                              apr_size_t *len,
                                              apr_int32_t flags);
# 601 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_recv(apr_socket_t *sock,
                                   char *buf, apr_size_t *len);
# 626 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_opt_set(apr_socket_t *sock,
                                             apr_int32_t opt, apr_int32_t on);
# 640 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_timeout_set(apr_socket_t *sock,
                                                 apr_interval_time_t t);
# 662 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_opt_get(apr_socket_t *sock,
                                             apr_int32_t opt, apr_int32_t *on);






apr_status_t apr_socket_timeout_get(apr_socket_t *sock,
                                                 apr_interval_time_t *t);







apr_status_t apr_socket_atmark(apr_socket_t *sock,
                                            int *atmark);
# 690 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_addr_get(apr_sockaddr_t **sa,
                                              apr_interface_e which,
                                              apr_socket_t *sock);
# 701 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_sockaddr_ip_get(char **addr,
                                              apr_sockaddr_t *sockaddr);






apr_status_t apr_sockaddr_ip_getbuf(char *buf, apr_size_t buflen,
                                                 apr_sockaddr_t *sockaddr);
# 722 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
int apr_sockaddr_equal(const apr_sockaddr_t *addr1,
                                    const apr_sockaddr_t *addr2);
# 733 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
int apr_sockaddr_is_wildcard(const apr_sockaddr_t *addr);






apr_status_t apr_socket_type_get(apr_socket_t *sock,
                                              int *type);






apr_status_t apr_getservbyname(apr_sockaddr_t *sockaddr,
                                            const char *servname);
# 758 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_ipsubnet_create(apr_ipsubnet_t **ipsub,
                                              const char *ipstr,
                                              const char *mask_or_numbits,
                                              apr_pool_t *p);
# 770 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
int apr_ipsubnet_test(apr_ipsubnet_t *ipsub, apr_sockaddr_t *sa);
# 791 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_socket_protocol_get(apr_socket_t *sock,
                                                  int *protocol);




apr_pool_t * apr_socket_pool_get (const apr_socket_t *thesocket);




apr_status_t apr_socket_inherit_set( apr_socket_t *thesocket);




apr_status_t apr_socket_inherit_unset( apr_socket_t *thesocket);
# 823 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_mcast_join(apr_socket_t *sock,
                                         apr_sockaddr_t *join,
                                         apr_sockaddr_t *iface,
                                         apr_sockaddr_t *source);
# 838 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_mcast_leave(apr_socket_t *sock,
                                          apr_sockaddr_t *addr,
                                          apr_sockaddr_t *iface,
                                          apr_sockaddr_t *source);
# 850 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_network_io.h"
apr_status_t apr_mcast_hops(apr_socket_t *sock,
                                         apr_byte_t ttl);






apr_status_t apr_mcast_loopback(apr_socket_t *sock,
                                             apr_byte_t opt);







apr_status_t apr_mcast_interface(apr_socket_t *sock,
                                              apr_sockaddr_t *iface);
# 32 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h" 2
# 80 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h"
typedef struct apr_uri_t apr_uri_t;




struct apr_uri_t {

    char *scheme;

    char *hostinfo;

    char *user;

    char *password;

    char *hostname;

    char *port_str;

    char *path;

    char *query;

    char *fragment;


    struct hostent *hostent;


    apr_port_t port;


    unsigned is_initialized:1;


    unsigned dns_looked_up:1;

    unsigned dns_resolved:1;
};
# 127 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h"
apr_port_t apr_uri_port_of_scheme(const char *scheme_str);
# 146 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h"
char * apr_uri_unparse(apr_pool_t *p,
                                    const apr_uri_t *uptr,
                                    unsigned flags);
# 159 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h"
apr_status_t apr_uri_parse(apr_pool_t *p, const char *uri,
                                        apr_uri_t *uptr);
# 169 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_uri.h"
apr_status_t apr_uri_parse_hostinfo(apr_pool_t *p,
                                                 const char *hostinfo,
                                                 apr_uri_t *uptr);
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_lib.h" 1
# 59 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_lib.h"
typedef struct apr_vformatter_buff_t apr_vformatter_buff_t;




struct apr_vformatter_buff_t {

    char *curpos;

    char *endpos;
};
# 84 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_lib.h"
const char * apr_filepath_name_get(const char *pathname);
# 174 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_lib.h"
int apr_vformatter(int (*flush_func)(apr_vformatter_buff_t *b),
           apr_vformatter_buff_t *c, const char *fmt,
           va_list ap);
# 189 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_lib.h"
apr_status_t apr_password_get(const char *prompt, char *pwbuf,
                                           apr_size_t *bufsize);
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2

# 1 "./subversion/svn_private_config.h" 1
# 216 "./subversion/svn_private_config.h"
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
# 217 "./subversion/svn_private_config.h" 2
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
# 218 "./subversion/svn_private_config.h" 2
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
# 1 "./subversion/include/svn_string.h" 1
# 82 "./subversion/include/svn_string.h"
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
# 37 "./subversion/include/svn_types.h" 2


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
# 592 "./subversion/include/svn_types.h"
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
# 710 "./subversion/include/svn_types.h"
typedef struct svn_commit_info_t
{

  svn_revnum_t revision;


  const char *date;


  const char *author;


  const char *post_commit_err;



  const char *repos_root;

} svn_commit_info_t;
# 744 "./subversion/include/svn_types.h"
svn_commit_info_t *
svn_create_commit_info(apr_pool_t *pool);






svn_commit_info_t *
svn_commit_info_dup(const svn_commit_info_t *src_commit_info,
                    apr_pool_t *pool);
# 767 "./subversion/include/svn_types.h"
typedef struct svn_log_changed_path2_t
{

  char action;


  const char *copyfrom_path;


  svn_revnum_t copyfrom_rev;


  svn_node_kind_t node_kind;



  svn_tristate_t text_modified;



  svn_tristate_t props_modified;




} svn_log_changed_path2_t;
# 804 "./subversion/include/svn_types.h"
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
# 854 "./subversion/include/svn_types.h"
typedef struct svn_log_entry_t
{
# 864 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths;


  svn_revnum_t revision;




  apr_hash_t *revprops;
# 890 "./subversion/include/svn_types.h"
  svn_boolean_t has_children;
# 907 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths2;







  svn_boolean_t non_inheritable;






  svn_boolean_t subtractive_merge;




} svn_log_entry_t;
# 938 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_create(apr_pool_t *pool);
# 949 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_dup(const svn_log_entry_t *log_entry, apr_pool_t *pool);
# 984 "./subversion/include/svn_types.h"
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
# 1014 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_commit_callback2_t)(
  const svn_commit_info_t *commit_info,
  void *baton,
  apr_pool_t *pool);






typedef svn_error_t *(*svn_commit_callback_t)(
  svn_revnum_t new_revision,
  const char *date,
  const char *author,
  void *baton);
# 1079 "./subversion/include/svn_types.h"
svn_error_t *
svn_mime_type_validate(const char *mime_type,
                       apr_pool_t *pool);






svn_boolean_t
svn_mime_type_is_binary(const char *mime_type);
# 1098 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_cancel_func_t)(void *cancel_baton);
# 1121 "./subversion/include/svn_types.h"
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
# 1142 "./subversion/include/svn_types.h"
svn_lock_t *
svn_lock_create(apr_pool_t *pool);






svn_lock_t *
svn_lock_dup(const svn_lock_t *lock, apr_pool_t *pool);
# 1160 "./subversion/include/svn_types.h"
const char *
svn_uuid_generate(apr_pool_t *pool);
# 1170 "./subversion/include/svn_types.h"
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
# 1217 "./subversion/include/svn_types.h"
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
# 1258 "./subversion/include/svn_types.h"
typedef unsigned long svn_linenum_t;
# 1284 "./subversion/include/svn_types.h"
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
# 730 "./subversion/include/svn_error_codes.h"
  SVN_ERR_FS_UNSUPPORTED_FORMAT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 43,




  SVN_ERR_FS_REP_BEING_WRITTEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 44,




  SVN_ERR_FS_TXN_NAME_TOO_LONG = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 45,




  SVN_ERR_FS_NO_SUCH_NODE_ORIGIN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 46,




  SVN_ERR_FS_UNSUPPORTED_UPGRADE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 47,




  SVN_ERR_FS_NO_SUCH_CHECKSUM_REP = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 48,




  SVN_ERR_FS_PROP_BASEVALUE_MISMATCH = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 49,






  SVN_ERR_REPOS_LOCKED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 0,



  SVN_ERR_REPOS_HOOK_FAILURE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 1,



  SVN_ERR_REPOS_BAD_ARGS = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 2,



  SVN_ERR_REPOS_NO_DATA_FOR_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 3,



  SVN_ERR_REPOS_BAD_REVISION_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 4,
# 792 "./subversion/include/svn_error_codes.h"
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
# 343 "./subversion/include/svn_error.h"
svn_error_t *svn_error_purge_tracing(svn_error_t *err);
# 522 "./subversion/include/svn_error.h"
svn_error_t *
svn_error__malfunction(svn_boolean_t can_return,
                       const char *file,
                       int line,
                       const char *expr);
# 549 "./subversion/include/svn_error.h"
typedef svn_error_t *(*svn_error_malfunction_handler_t)
  (svn_boolean_t can_return, const char *file, int line, const char *expr);
# 563 "./subversion/include/svn_error.h"
svn_error_malfunction_handler_t
svn_error_set_malfunction_handler(svn_error_malfunction_handler_t func);
# 574 "./subversion/include/svn_error.h"
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
# 1285 "./subversion/include/svn_types.h" 2
# 83 "./subversion/include/svn_string.h" 2
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
# 129 "./subversion/include/svn_string.h"
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
# 194 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create(const char *cstring, apr_pool_t *pool);




svn_stringbuf_t *
svn_stringbuf_ncreate(const char *bytes, apr_size_t size, apr_pool_t *pool);




svn_stringbuf_t *
svn_stringbuf_create_empty(apr_pool_t *pool);
# 217 "./subversion/include/svn_string.h"
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
# 275 "./subversion/include/svn_string.h"
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
# 354 "./subversion/include/svn_string.h"
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
# 396 "./subversion/include/svn_string.h"
char *
svn_cstring_tokenize(const char *sep, char **str);







int
svn_cstring_count_newlines(const char *msg);
# 416 "./subversion/include/svn_string.h"
char *
svn_cstring_join(const apr_array_header_t *strings,
                 const char *separator,
                 apr_pool_t *pool);
# 431 "./subversion/include/svn_string.h"
int
svn_cstring_casecmp(const char *str1, const char *str2);
# 442 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoi64(apr_int64_t *n, const char *str,
                     apr_int64_t minval, apr_int64_t maxval,
                     int base);
# 454 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi64(apr_int64_t *n, const char *str);
# 464 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoi(int *n, const char *str);
# 475 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_strtoui64(apr_uint64_t *n, const char *str,
                      apr_uint64_t minval, apr_uint64_t maxval,
                      int base);
# 487 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui64(apr_uint64_t *n, const char *str);
# 497 "./subversion/include/svn_string.h"
svn_error_t *
svn_cstring_atoui(unsigned int *n, const char *str);
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
# 1 "./subversion/include/svn_dirent_uri.h" 1
# 152 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_internal_style(const char *dirent,
                          apr_pool_t *result_pool);
# 164 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_local_style(const char *dirent,
                       apr_pool_t *result_pool);
# 175 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath__internal_style(const char *relpath,
                            apr_pool_t *result_pool);
# 197 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_join(const char *base,
                const char *component,
                apr_pool_t *result_pool);
# 216 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_join_many(apr_pool_t *result_pool,
                     const char *base,
                     ...);
# 232 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_join(const char *base,
                 const char *component,
                 apr_pool_t *result_pool);
# 250 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_basename(const char *dirent,
                    apr_pool_t *result_pool);
# 264 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_dirname(const char *dirent,
                   apr_pool_t *result_pool);
# 293 "./subversion/include/svn_dirent_uri.h"
void
svn_dirent_split(const char **dirpath,
                 const char **base_name,
                 const char *dirent,
                 apr_pool_t *result_pool);
# 318 "./subversion/include/svn_dirent_uri.h"
void
svn_relpath_split(const char **dirpath,
                  const char **base_name,
                  const char *relpath,
                  apr_pool_t *result_pool);
# 338 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_basename(const char *relpath,
                     apr_pool_t *result_pool);
# 351 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_dirname(const char *relpath,
                    apr_pool_t *result_pool);
# 374 "./subversion/include/svn_dirent_uri.h"
void
svn_uri_split(const char **dirpath,
              const char **base_name,
              const char *uri,
              apr_pool_t *result_pool);
# 391 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_basename(const char *uri,
                 apr_pool_t *result_pool);
# 405 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_dirname(const char *uri,
                apr_pool_t *result_pool);







svn_boolean_t
svn_dirent_is_absolute(const char *dirent);
# 429 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_root(const char *dirent,
                   apr_size_t len);





svn_boolean_t
svn_uri_is_root(const char *uri,
                apr_size_t len);
# 457 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_canonicalize(const char *dirent,
                        apr_pool_t *result_pool);
# 476 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_canonicalize(const char *relpath,
                         apr_pool_t *result_pool);
# 500 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_canonicalize(const char *uri,
                     apr_pool_t *result_pool);
# 515 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_canonical(const char *dirent,
                        apr_pool_t *scratch_pool);






svn_boolean_t
svn_relpath_is_canonical(const char *relpath);
# 534 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_uri_is_canonical(const char *uri,
                     apr_pool_t *scratch_pool);
# 546 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_get_longest_ancestor(const char *dirent1,
                                const char *dirent2,
                                apr_pool_t *result_pool);
# 559 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_get_longest_ancestor(const char *relpath1,
                                 const char *relpath2,
                                 apr_pool_t *result_pool);
# 576 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_get_longest_ancestor(const char *uri1,
                             const char *uri2,
                             apr_pool_t *result_pool);
# 589 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_get_absolute(const char **pabsolute,
                        const char *relative,
                        apr_pool_t *result_pool);
# 606 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_is_child(const char *parent_dirent,
                    const char *child_dirent,
                    apr_pool_t *result_pool);
# 619 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_ancestor(const char *parent_dirent,
                       const char *child_dirent);




svn_boolean_t
svn_uri__is_ancestor(const char *parent_uri,
                     const char *child_uri);
# 641 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_skip_ancestor(const char *parent_dirent,
                         const char *child_dirent);
# 652 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_skip_ancestor(const char *parent_relpath,
                          const char *child_relpath);
# 664 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_skip_ancestor(const char *parent_uri,
                      const char *child_uri,
                      apr_pool_t *result_pool);
# 702 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_condense_targets(const char **pcommon,
                            apr_array_header_t **pcondensed_targets,
                            const apr_array_header_t *targets,
                            svn_boolean_t remove_redundancies,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 743 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_condense_targets(const char **pcommon,
                         apr_array_header_t **pcondensed_targets,
                         const apr_array_header_t *targets,
                         svn_boolean_t remove_redundancies,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 768 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_is_under_root(svn_boolean_t *under_root,
                         const char **result_path,
                         const char *base_path,
                         const char *path,
                         apr_pool_t *result_pool);
# 782 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_get_dirent_from_file_url(const char **dirent,
                                 const char *url,
                                 apr_pool_t *result_pool);
# 794 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_get_file_url_from_dirent(const char **url,
                                 const char *dirent,
                                 apr_pool_t *result_pool);
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
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





int
svn_path_compare_paths(const char *path1, const char *path2);
# 319 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_get_longest_ancestor(const char *path1,
                              const char *path2,
                              apr_pool_t *pool);
# 334 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_get_absolute(const char **pabsolute,
                      const char *relative,
                      apr_pool_t *pool);
# 350 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_split_if_file(const char *path,
                       const char **pdirectory,
                       const char **pfile,
                       apr_pool_t *pool);
# 392 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_condense_targets(const char **pcommon,
                          apr_array_header_t **pcondensed_targets,
                          const apr_array_header_t *targets,
                          svn_boolean_t remove_redundancies,
                          apr_pool_t *pool);
# 438 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_remove_redundancies(apr_array_header_t **pcondensed_targets,
                             const apr_array_header_t *targets,
                             apr_pool_t *pool);







apr_array_header_t *
svn_path_decompose(const char *path, apr_pool_t *pool);
# 461 "./subversion/include/svn_path.h"
const char *
svn_path_compose(const apr_array_header_t *components, apr_pool_t *pool);






svn_boolean_t
svn_path_is_single_path_component(const char *name);
# 480 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_backpath_present(const char *path);
# 491 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_dotpath_present(const char *path);
# 516 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_is_child(const char *path1, const char *path2, apr_pool_t *pool);
# 529 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_boolean_t
svn_path_is_ancestor(const char *path1, const char *path2);
# 552 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_check_valid(const char *path, apr_pool_t *pool);
# 563 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_url(const char *path);


svn_boolean_t
svn_path_is_uri_safe(const char *path);




const char *
svn_path_uri_encode(const char *path, apr_pool_t *pool);


const char *
svn_path_uri_decode(const char *path, apr_pool_t *pool);
# 607 "./subversion/include/svn_path.h"
const char *
svn_path_url_add_component2(const char *url,
                            const char *component,
                            apr_pool_t *pool);






__attribute__((deprecated))
const char *
svn_path_url_add_component(const char *url,
                           const char *component,
                           apr_pool_t *pool);
# 630 "./subversion/include/svn_path.h"
const char *
svn_path_uri_from_iri(const char *iri, apr_pool_t *pool);
# 643 "./subversion/include/svn_path.h"
const char *
svn_path_uri_autoescape(const char *uri, apr_pool_t *pool);
# 655 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_cstring_from_utf8(const char **path_apr,
                           const char *path_utf8,
                           apr_pool_t *pool);


svn_error_t *
svn_path_cstring_to_utf8(const char **path_utf8,
                         const char *path_apr,
                         apr_pool_t *pool);
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
# 1 "./subversion/include/svn_ctype.h" 1
# 41 "./subversion/include/svn_ctype.h"
extern const apr_uint32_t *const svn_ctype_table;
# 185 "./subversion/include/svn_ctype.h"
int
svn_ctype_casecmp(int a,
                  int b);
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.h"
extern const char svn_uri__char_validity[256];
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
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
# 41 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c" 2
# 62 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
typedef enum path_type_t {
  type_uri,
  type_dirent,
  type_relpath
} path_type_t;




static svn_boolean_t
relpath_is_canonical(const char *relpath);
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
static const char *
internal_style(const char *path, apr_pool_t *pool)
{
# 96 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return path;
}



static char
canonicalize_to_lower(char c)
{
  if (c < 'A' || c > 'Z')
    return c;
  else
    return c - 'A' + 'a';
}



static char
canonicalize_to_upper(char c)
{
  if (c < 'a' || c > 'z')
    return c;
  else
    return c - 'a' + 'A';
}



static apr_size_t
dirent_root_length(const char *dirent, apr_size_t len)
{
# 152 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (len >= 1 && dirent[0] == '/')
    return 1;

  return 0;
}
# 166 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
static apr_size_t
dirent_previous_segment(const char *dirent,
                        apr_size_t len)
{
  if (len == 0)
    return 0;

  --len;
  while (len > 0 && dirent[len] != '/'



        )
    --len;


  if (dirent_root_length(dirent, len+1) == len + 1)
    return len + 1;
  else
    return len;
}


static apr_size_t
uri_schema_root_length(const char *uri, apr_size_t len)
{
  apr_size_t i;

  for (i = 0; i < len; i++)
    {
      if (uri[i] == '/')
        {
          if (i > 0 && uri[i-1] == ':' && i < len-1 && uri[i+1] == '/')
            {

              if (i == 5 && (__extension__ (__builtin_constant_p (4) && ((__builtin_constant_p ("file") && strlen ("file") < ((size_t) (4))) || (__builtin_constant_p (uri) && strlen (uri) < ((size_t) (4)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p ("file") && __builtin_constant_p (uri) && (__s1_len = __builtin_strlen ("file"), __s2_len = __builtin_strlen (uri), (!((size_t)(const void *)(("file") + 1) - (size_t)(const void *)("file") == 1) || __s1_len >= 4) && (!((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) || __s2_len >= 4)) ? __builtin_strcmp ("file", uri) : (__builtin_constant_p ("file") && ((size_t)(const void *)(("file") + 1) - (size_t)(const void *)("file") == 1) && (__s1_len = __builtin_strlen ("file"), __s1_len < 4) ? (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) ? __builtin_strcmp ("file", uri) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri); int __result = (((const unsigned char *) (const char *) ("file"))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("file"))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("file"))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("file"))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) && (__s2_len = __builtin_strlen (uri), __s2_len < 4) ? (__builtin_constant_p ("file") && ((size_t)(const void *)(("file") + 1) - (size_t)(const void *)("file") == 1) ? __builtin_strcmp ("file", uri) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("file"); int __result = (((const unsigned char *) (const char *) (uri))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp ("file", uri)))); }) : strncmp ("file", uri, 4))) == 0)
                return 7;
              else
                {
                  for (i += 2; i < len; i++)
                    if (uri[i] == '/')
                      return i;

                  return len;
                }
            }
          else
            return 0;
        }
    }

  return 0;
}



static svn_boolean_t
dirent_is_rooted(const char *dirent)
{
  if (! dirent)
    return 0;


  if (dirent[0] == '/')
    return (!0);
# 241 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return 0;
}






static apr_size_t
relpath_previous_segment(const char *relpath,
                         apr_size_t len)
{
  if (len == 0)
    return 0;

  --len;
  while (len > 0 && relpath[len] != '/')
    --len;

  return len;
}
# 270 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
static apr_size_t
uri_previous_segment(const char *uri,
                     apr_size_t len)
{
  apr_size_t root_length;
  apr_size_t i = len;
  if (len == 0)
    return 0;

  root_length = uri_schema_root_length(uri, len);

  --i;
  while (len > root_length && uri[i] != '/')
    --i;

  if (i == 0 && len > 1 && *uri == '/')
    return 1;

  return i;
}




static const char *
canonicalize(path_type_t type, const char *path, apr_pool_t *pool)
{
  char *canon, *dst;
  const char *src;
  apr_size_t seglen;
  apr_size_t schemelen = 0;
  apr_size_t canon_segments = 0;
  svn_boolean_t url = 0;
  char *schema_data = ((void*)0);



  if (((path)[0] == '\0'))
    {
      ((type != type_uri) ? (void) (0) : __assert_fail ("type != type_uri", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 309, __PRETTY_FUNCTION__));
      return "";
    }

  dst = canon = memset(apr_palloc(pool, strlen(path) + 1), 0, strlen(path) + 1);




  src = path;
  if (type == type_uri)
    {
      ((*src != '/') ? (void) (0) : __assert_fail ("*src != '/'", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 321, __PRETTY_FUNCTION__));

      while (*src && (*src != '/') && (*src != ':'))
        src++;

      if (*src == ':' && *(src+1) == '/' && *(src+2) == '/')
        {
          const char *seg;

          url = (!0);


          src = path;
          while (*src != ':')
            {
              *(dst++) = canonicalize_to_lower((*src++));
              schemelen++;
            }
          *(dst++) = ':';
          *(dst++) = '/';
          *(dst++) = '/';
          src += 3;
          schemelen += 3;


          seg = src;
          while (*src && (*src != '/') && (*src != '@'))
            src++;

          if (*src == '@')
            {

              seglen = src - seg + 1;
              memcpy(dst, seg, seglen);
              dst += seglen;
              src++;
            }
          else
            src = seg;


          while (*src && (*src != '/') && (*src != ':'))
            *(dst++) = canonicalize_to_lower((*src++));

          if (*src == ':')
            {


              if (src[1] == '8' && src[2] == '0'
                  && (src[3]== '/'|| !src[3])
                  && !(__extension__ (__builtin_constant_p (5) && ((__builtin_constant_p (canon) && strlen (canon) < ((size_t) (5))) || (__builtin_constant_p ("http:") && strlen ("http:") < ((size_t) (5)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (canon) && __builtin_constant_p ("http:") && (__s1_len = __builtin_strlen (canon), __s2_len = __builtin_strlen ("http:"), (!((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("http:") + 1) - (size_t)(const void *)("http:") == 1) || __s2_len >= 4)) ? __builtin_strcmp (canon, "http:") : (__builtin_constant_p (canon) && ((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) && (__s1_len = __builtin_strlen (canon), __s1_len < 4) ? (__builtin_constant_p ("http:") && ((size_t)(const void *)(("http:") + 1) - (size_t)(const void *)("http:") == 1) ? __builtin_strcmp (canon, "http:") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("http:"); int __result = (((const unsigned char *) (const char *) (canon))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (canon))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (canon))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (canon))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("http:") && ((size_t)(const void *)(("http:") + 1) - (size_t)(const void *)("http:") == 1) && (__s2_len = __builtin_strlen ("http:"), __s2_len < 4) ? (__builtin_constant_p (canon) && ((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) ? __builtin_strcmp (canon, "http:") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (canon); int __result = (((const unsigned char *) (const char *) ("http:"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("http:"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("http:"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("http:"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (canon, "http:")))); }) : strncmp (canon, "http:", 5))))
                {
                  src += 3;
                }
              else if (src[1] == '4' && src[2] == '4' && src[3] == '3'
                       && (src[4]== '/'|| !src[4])
                       && !(__extension__ (__builtin_constant_p (6) && ((__builtin_constant_p (canon) && strlen (canon) < ((size_t) (6))) || (__builtin_constant_p ("https:") && strlen ("https:") < ((size_t) (6)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (canon) && __builtin_constant_p ("https:") && (__s1_len = __builtin_strlen (canon), __s2_len = __builtin_strlen ("https:"), (!((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("https:") + 1) - (size_t)(const void *)("https:") == 1) || __s2_len >= 4)) ? __builtin_strcmp (canon, "https:") : (__builtin_constant_p (canon) && ((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) && (__s1_len = __builtin_strlen (canon), __s1_len < 4) ? (__builtin_constant_p ("https:") && ((size_t)(const void *)(("https:") + 1) - (size_t)(const void *)("https:") == 1) ? __builtin_strcmp (canon, "https:") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("https:"); int __result = (((const unsigned char *) (const char *) (canon))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (canon))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (canon))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (canon))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("https:") && ((size_t)(const void *)(("https:") + 1) - (size_t)(const void *)("https:") == 1) && (__s2_len = __builtin_strlen ("https:"), __s2_len < 4) ? (__builtin_constant_p (canon) && ((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) ? __builtin_strcmp (canon, "https:") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (canon); int __result = (((const unsigned char *) (const char *) ("https:"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("https:"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("https:"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("https:"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (canon, "https:")))); }) : strncmp (canon, "https:", 6))))
                {
                  src += 4;
                }
              else if (src[1] == '3' && src[2] == '6'
                       && src[3] == '9' && src[4] == '0'
                       && (src[5]== '/'|| !src[5])
                       && !(__extension__ (__builtin_constant_p (4) && ((__builtin_constant_p (canon) && strlen (canon) < ((size_t) (4))) || (__builtin_constant_p ("svn:") && strlen ("svn:") < ((size_t) (4)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (canon) && __builtin_constant_p ("svn:") && (__s1_len = __builtin_strlen (canon), __s2_len = __builtin_strlen ("svn:"), (!((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:") + 1) - (size_t)(const void *)("svn:") == 1) || __s2_len >= 4)) ? __builtin_strcmp (canon, "svn:") : (__builtin_constant_p (canon) && ((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) && (__s1_len = __builtin_strlen (canon), __s1_len < 4) ? (__builtin_constant_p ("svn:") && ((size_t)(const void *)(("svn:") + 1) - (size_t)(const void *)("svn:") == 1) ? __builtin_strcmp (canon, "svn:") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:"); int __result = (((const unsigned char *) (const char *) (canon))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (canon))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (canon))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (canon))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:") && ((size_t)(const void *)(("svn:") + 1) - (size_t)(const void *)("svn:") == 1) && (__s2_len = __builtin_strlen ("svn:"), __s2_len < 4) ? (__builtin_constant_p (canon) && ((size_t)(const void *)((canon) + 1) - (size_t)(const void *)(canon) == 1) ? __builtin_strcmp (canon, "svn:") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (canon); int __result = (((const unsigned char *) (const char *) ("svn:"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (canon, "svn:")))); }) : strncmp (canon, "svn:", 4))))
                {
                  src += 5;
                }
              else if (src[1] == '/' || !src[1])
                {
                  src += 1;
                }

              while (*src && (*src != '/'))
                *(dst++) = canonicalize_to_lower((*src++));
            }


          *(dst) = *(src);



          if (*src)
            {
              src++;
              dst++;
              schema_data = dst;
            }

          canon_segments = 1;
        }
    }



  if (! url && type != type_relpath)
    {
      src = path;


      if (*src == '/')
        {
          *(dst++) = *(src++);







        }
# 445 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
    }

  while (*src)
    {


      const char *next = src;
      apr_size_t slash_len = 0;

      while (*next
             && (next[0] != '/')
             && (! (type == type_uri && next[0] == '%' && next[1] == '2' &&
                    canonicalize_to_upper(next[2]) == 'F')))
        {
          ++next;
        }


      if (next[0] == '/')
        slash_len = 1;
      else if (type == type_uri && next[0] == '%')
        slash_len = 3;

      seglen = next - src;

      if (seglen == 0
          || (seglen == 1 && src[0] == '.')
          || (type == type_uri && seglen == 3 && src[0] == '%' && src[1] == '2'
              && canonicalize_to_upper(src[2]) == 'E'))
        {


        }
# 492 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
      else
        {

          memcpy(dst, src, seglen);
          dst += seglen;
          if (slash_len)
            *(dst++) = '/';
          canon_segments++;
        }


      src = next + slash_len;
    }







  if ((canon_segments > 0 && *(dst - 1) == '/')
      && ! (url && path[schemelen] == '\0'))
    {
      dst --;
    }

  *dst = '\0';
# 542 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (schema_data)
    {
      int need_extra = 0;
      src = schema_data;

      while (*src)
        {
          switch (*src)
            {
              case '/':
                break;
              case '%':
                if (!(0 != (svn_ctype_table[(unsigned char)((*(src+1)))] & ((0x0004 | 0x0040)))) ||
                    !(0 != (svn_ctype_table[(unsigned char)((*(src+2)))] & ((0x0004 | 0x0040)))))
                  need_extra += 2;
                else
                  src += 2;
                break;
              default:
                if (!svn_uri__char_validity[(unsigned char)*src])
                  need_extra += 2;
                break;
            }
          src++;
        }

      if (need_extra > 0)
        {
          apr_size_t pre_schema_size = (apr_size_t)(schema_data - canon);

          dst = apr_palloc(pool, (apr_size_t)(src - canon) + need_extra + 1);
          memcpy(dst, canon, pre_schema_size);
          canon = dst;

          dst += pre_schema_size;
        }
      else
        dst = schema_data;

      src = schema_data;

      while (*src)
        {
          switch (*src)
            {
              case '/':
                *(dst++) = '/';
                break;
              case '%':
                if (!(0 != (svn_ctype_table[(unsigned char)((*(src+1)))] & ((0x0004 | 0x0040)))) ||
                    !(0 != (svn_ctype_table[(unsigned char)((*(src+2)))] & ((0x0004 | 0x0040)))))
                  {
                    *(dst++) = '%';
                    *(dst++) = '2';
                    *(dst++) = '5';
                  }
                else
                  {
                    char digitz[3];
                    int val;

                    digitz[0] = *(++src);
                    digitz[1] = *(++src);
                    digitz[2] = 0;

                    val = (int)strtol(digitz, ((void*)0), 16);

                    if (svn_uri__char_validity[(unsigned char)val])
                      *(dst++) = (char)val;
                    else
                      {
                        *(dst++) = '%';
                        *(dst++) = canonicalize_to_upper(digitz[0]);
                        *(dst++) = canonicalize_to_upper(digitz[1]);
                      }
                  }
                break;
              default:
                if (!svn_uri__char_validity[(unsigned char)*src])
                  {
                    apr_snprintf(dst, 4, "%%%02X", (unsigned char)*src);
                    dst += 3;
                  }
                else
                  *(dst++) = *src;
                break;
            }
          src++;
        }
      *dst = '\0';
    }

  return canon;
}
# 645 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
static apr_size_t
get_longest_ancestor_length(path_type_t types,
                            const char *path1,
                            const char *path2,
                            apr_pool_t *pool)
{
  apr_size_t path1_len, path2_len;
  apr_size_t i = 0;
  apr_size_t last_dirsep = 0;




  path1_len = strlen(path1);
  path2_len = strlen(path2);

  if (((path1)[0] == '\0') || ((path2)[0] == '\0'))
    return 0;

  while (path1[i] == path2[i])
    {

      if (path1[i] == '/')
        last_dirsep = i;

      i++;


      if ((i == path1_len) || (i == path2_len))
        break;
    }



  if (i == 1 && path1[0] == '/' && path2[0] == '/')
    return 1;


  if (types == type_dirent && i == 0)
    return 0;
# 722 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (((i == path1_len) && (path2[i] == '/'))
           || ((i == path2_len) && (path1[i] == '/'))
           || ((i == path1_len) && (i == path2_len)))
    return i;
  else
    {
# 739 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
          if (last_dirsep == 0 && path1[0] == '/' && path2[0] == '/')
            return 1;



    }

  return last_dirsep;
}
# 770 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
static const char *
is_child(path_type_t type, const char *path1, const char *path2,
         apr_pool_t *pool)
{
  apr_size_t i;


  if (((path1)[0] == '\0'))
    {
      if (((path2)[0] == '\0'))
        return ((void*)0);


      if ((type == type_uri) ||
          (type == type_dirent && dirent_is_rooted(path2)))
        return ((void*)0);
      else

        return pool ? apr_pstrdup(pool, path2) : path2;
    }







  for (i = 0; path1[i] && path2[i]; i++)
    if (path1[i] != path2[i])
      return ((void*)0);
# 816 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (path1[i] == '\0' && path2[i])
    {
      if (path1[i - 1] == '/'



           )
        {
          if (path2[i] == '/')



            return ((void*)0);
          else



            return pool ? apr_pstrdup(pool, path2 + i) : path2 + i;
        }
      else if (path2[i] == '/')
        {
          if (path2[i + 1])



            return pool ? apr_pstrdup(pool, path2 + i + 1) : path2 + i + 1;
          else



            return ((void*)0);
        }
    }


  return ((void*)0);
}




const char *
svn_dirent_internal_style(const char *dirent, apr_pool_t *pool)
{
  return svn_dirent_canonicalize(internal_style(dirent, pool), pool);
}

const char *
svn_dirent_local_style(const char *dirent, apr_pool_t *pool)
{


  if (((dirent)[0] == '\0'))
    return ".";
# 883 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return dirent;
}

const char *
svn_relpath__internal_style(const char *relpath,
                            apr_pool_t *pool)
{
  return svn_relpath_canonicalize(internal_style(relpath, pool), pool);
}




svn_boolean_t
svn_dirent_is_root(const char *dirent, apr_size_t len)
{
# 933 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (len == 1 && dirent[0] == '/')
    return (!0);

  return 0;
}

svn_boolean_t
svn_uri_is_root(const char *uri, apr_size_t len)
{
  ((svn_uri_is_canonical(uri, ((void*)0))) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(uri, ((void*)0))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 942, __PRETTY_FUNCTION__));
  return (len == uri_schema_root_length(uri, len));
}

char *svn_dirent_join(const char *base,
                      const char *component,
                      apr_pool_t *pool)
{
  apr_size_t blen = strlen(base);
  apr_size_t clen = strlen(component);
  char *dirent;
  int add_separator;

  ((svn_dirent_is_canonical(base, pool)) ? (void) (0) : __assert_fail ("svn_dirent_is_canonical(base, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 955, __PRETTY_FUNCTION__));
  ((svn_dirent_is_canonical(component, pool)) ? (void) (0) : __assert_fail ("svn_dirent_is_canonical(component, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 956, __PRETTY_FUNCTION__));


  if (svn_dirent_is_absolute(component))
    return apr_pmemdup(pool, component, clen + 1);


  if (((base)[0] == '\0'))
    return apr_pmemdup(pool, component, clen + 1);
  if (((component)[0] == '\0'))
    return apr_pmemdup(pool, base, blen + 1);
# 999 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  add_separator = 1;
  if (base[blen - 1] == '/'



        )
          add_separator = 0;


  dirent = apr_palloc(pool, blen + add_separator + clen + 1);
  memcpy(dirent, base, blen);
  if (add_separator)
    dirent[blen] = '/';
  memcpy(dirent + blen + add_separator, component, clen + 1);

  return dirent;
}

char *svn_dirent_join_many(apr_pool_t *pool, const char *base, ...)
{

  apr_size_t saved_lengths[10];
  apr_size_t total_len;
  int nargs;
  va_list va;
  const char *s;
  apr_size_t len;
  char *dirent;
  char *p;
  int add_separator;
  int base_arg = 0;

  total_len = strlen(base);

  ((svn_dirent_is_canonical(base, pool)) ? (void) (0) : __assert_fail ("svn_dirent_is_canonical(base, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1033, __PRETTY_FUNCTION__));


  add_separator = 1;
  if (total_len == 0
       || base[total_len - 1] == '/'



        )
          add_separator = 0;

  saved_lengths[0] = total_len;



  nargs = 0;
  __builtin_va_start(va, base);
  while ((s = __builtin_va_arg(va, const char *)) != ((void*)0))
    {
      len = strlen(s);

      ((svn_dirent_is_canonical(s, pool)) ? (void) (0) : __assert_fail ("svn_dirent_is_canonical(s, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1055, __PRETTY_FUNCTION__));

      if (((s)[0] == '\0'))
        continue;

      if (nargs++ < 10)
        saved_lengths[nargs] = len;

      if (dirent_is_rooted(s))
        {
          total_len = len;
          base_arg = nargs;
# 1078 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
            {
              base = "";
              saved_lengths[0] = 0;
            }

          add_separator = 1;
          if (s[len - 1] == '/'



              )
             add_separator = 0;
        }
      else if (nargs <= base_arg + 1)
        {
          total_len += add_separator + len;
        }
      else
        {
          total_len += 1 + len;
        }
    }
  __builtin_va_end(va);


  if (add_separator == 0 && total_len == 1)
    return apr_pmemdup(pool, "/", 2);


  dirent = p = apr_palloc(pool, total_len + 1);




  if (! ((base)[0] == '\0'))
    {
      memcpy(p, base, len = saved_lengths[0]);
      p += len;
    }

  nargs = 0;
  __builtin_va_start(va, base);
  while ((s = __builtin_va_arg(va, const char *)) != ((void*)0))
    {
      if (((s)[0] == '\0'))
        continue;

      if (++nargs < base_arg)
        continue;

      if (nargs < 10)
        len = saved_lengths[nargs];
      else
        len = strlen(s);





      if (p != dirent &&
          ( ! (nargs - 1 <= base_arg) || add_separator))
        *p++ = '/';


      memcpy(p, s, len);
      p += len;
    }
  __builtin_va_end(va);

  *p = '\0';
  (((apr_size_t)(p - dirent) == total_len) ? (void) (0) : __assert_fail ("(apr_size_t)(p - dirent) == total_len", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1148, __PRETTY_FUNCTION__));

  return dirent;
}

char *
svn_relpath_join(const char *base,
                 const char *component,
                 apr_pool_t *pool)
{
  apr_size_t blen = strlen(base);
  apr_size_t clen = strlen(component);
  char *path;

  ((relpath_is_canonical(base)) ? (void) (0) : __assert_fail ("relpath_is_canonical(base)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1162, __PRETTY_FUNCTION__));
  ((relpath_is_canonical(component)) ? (void) (0) : __assert_fail ("relpath_is_canonical(component)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1163, __PRETTY_FUNCTION__));


  if (blen == 0)
    return apr_pmemdup(pool, component, clen + 1);
  if (clen == 0)
    return apr_pmemdup(pool, base, blen + 1);

  path = apr_palloc(pool, blen + 1 + clen + 1);
  memcpy(path, base, blen);
  path[blen] = '/';
  memcpy(path + blen + 1, component, clen + 1);

  return path;
}

char *
svn_dirent_dirname(const char *dirent, apr_pool_t *pool)
{
  apr_size_t len = strlen(dirent);

  ((svn_dirent_is_canonical(dirent, pool)) ? (void) (0) : __assert_fail ("svn_dirent_is_canonical(dirent, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1184, __PRETTY_FUNCTION__));

  if (len == dirent_root_length(dirent, len))
    return apr_pstrmemdup(pool, dirent, len);
  else
    return apr_pstrmemdup(pool, dirent, dirent_previous_segment(dirent, len));
}

const char *
svn_dirent_basename(const char *dirent, apr_pool_t *pool)
{
  apr_size_t len = strlen(dirent);
  apr_size_t start;

  ((!pool || svn_dirent_is_canonical(dirent, pool)) ? (void) (0) : __assert_fail ("!pool || svn_dirent_is_canonical(dirent, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1198, __PRETTY_FUNCTION__));

  if (svn_dirent_is_root(dirent, len))
    return "";
  else
    {
      start = len;
      while (start > 0 && dirent[start - 1] != '/'



            )
        --start;
    }

  if (pool)
    return apr_pstrmemdup(pool, dirent + start, len - start);
  else
    return dirent + start;
}

void
svn_dirent_split(const char **dirpath,
                 const char **base_name,
                 const char *dirent,
                 apr_pool_t *pool)
{
  ((dirpath != base_name) ? (void) (0) : __assert_fail ("dirpath != base_name", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1225, __PRETTY_FUNCTION__));

  if (dirpath)
    *dirpath = svn_dirent_dirname(dirent, pool);

  if (base_name)
    *base_name = svn_dirent_basename(dirent, pool);
}

char *
svn_relpath_dirname(const char *relpath,
                    apr_pool_t *pool)
{
  apr_size_t len = strlen(relpath);

  ((relpath_is_canonical(relpath)) ? (void) (0) : __assert_fail ("relpath_is_canonical(relpath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1240, __PRETTY_FUNCTION__));

  return apr_pstrmemdup(pool, relpath,
                        relpath_previous_segment(relpath, len));
}

const char *
svn_relpath_basename(const char *relpath,
                     apr_pool_t *pool)
{
  apr_size_t len = strlen(relpath);
  apr_size_t start;

  ((relpath_is_canonical(relpath)) ? (void) (0) : __assert_fail ("relpath_is_canonical(relpath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1253, __PRETTY_FUNCTION__));

  start = len;
  while (start > 0 && relpath[start - 1] != '/')
    --start;

  if (pool)
    return apr_pstrmemdup(pool, relpath + start, len - start);
  else
    return relpath + start;
}

void
svn_relpath_split(const char **dirpath,
                  const char **base_name,
                  const char *relpath,
                  apr_pool_t *pool)
{
  ((dirpath != base_name) ? (void) (0) : __assert_fail ("dirpath != base_name", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1271, __PRETTY_FUNCTION__));

  if (dirpath)
    *dirpath = svn_relpath_dirname(relpath, pool);

  if (base_name)
    *base_name = svn_relpath_basename(relpath, pool);
}

char *
svn_uri_dirname(const char *uri, apr_pool_t *pool)
{
  apr_size_t len = strlen(uri);

  ((svn_uri_is_canonical(uri, pool)) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(uri, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1285, __PRETTY_FUNCTION__));

  if (svn_uri_is_root(uri, len))
    return apr_pstrmemdup(pool, uri, len);
  else
    return apr_pstrmemdup(pool, uri, uri_previous_segment(uri, len));
}

const char *
svn_uri_basename(const char *uri, apr_pool_t *pool)
{
  apr_size_t len = strlen(uri);
  apr_size_t start;

  ((svn_uri_is_canonical(uri, ((void*)0))) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(uri, ((void*)0))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1299, __PRETTY_FUNCTION__));

  if (svn_uri_is_root(uri, len))
    return "";

  start = len;
  while (start > 0 && uri[start - 1] != '/')
    --start;

  return svn_path_uri_decode(uri + start, pool);
}

void
svn_uri_split(const char **dirpath,
              const char **base_name,
              const char *uri,
              apr_pool_t *pool)
{
  ((dirpath != base_name) ? (void) (0) : __assert_fail ("dirpath != base_name", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1317, __PRETTY_FUNCTION__));

  if (dirpath)
    *dirpath = svn_uri_dirname(uri, pool);

  if (base_name)
    *base_name = svn_uri_basename(uri, pool);
}

char *
svn_dirent_get_longest_ancestor(const char *dirent1,
                                const char *dirent2,
                                apr_pool_t *pool)
{
  return apr_pstrndup(pool, dirent1,
                      get_longest_ancestor_length(type_dirent, dirent1,
                                                  dirent2, pool));
}

char *
svn_relpath_get_longest_ancestor(const char *relpath1,
                                 const char *relpath2,
                                 apr_pool_t *pool)
{
  ((relpath_is_canonical(relpath1)) ? (void) (0) : __assert_fail ("relpath_is_canonical(relpath1)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1341, __PRETTY_FUNCTION__));
  ((relpath_is_canonical(relpath2)) ? (void) (0) : __assert_fail ("relpath_is_canonical(relpath2)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1342, __PRETTY_FUNCTION__));

  return apr_pstrndup(pool, relpath1,
                      get_longest_ancestor_length(type_relpath, relpath1,
                                                  relpath2, pool));
}

char *
svn_uri_get_longest_ancestor(const char *uri1,
                             const char *uri2,
                             apr_pool_t *pool)
{
  apr_size_t uri_ancestor_len;
  apr_size_t i = 0;

  ((svn_uri_is_canonical(uri1, ((void*)0))) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(uri1, ((void*)0))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1357, __PRETTY_FUNCTION__));
  ((svn_uri_is_canonical(uri2, ((void*)0))) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(uri2, ((void*)0))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1358, __PRETTY_FUNCTION__));


  while (1)
    {

      if (uri1[i] != uri2[i])
        return apr_pmemdup(pool, "",
                           sizeof(""));

      if (uri1[i] == ':')
        break;


      (((uri1[i] != '\0') && (uri2[i] != '\0')) ? (void) (0) : __assert_fail ("(uri1[i] != '\\0') && (uri2[i] != '\\0')", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1372, __PRETTY_FUNCTION__));

      i++;
    }

  i += 3;

  uri_ancestor_len = get_longest_ancestor_length(type_uri, uri1 + i,
                                                 uri2 + i, pool);

  if (uri_ancestor_len == 0 ||
      (uri_ancestor_len == 1 && (uri1 + i)[0] == '/'))
    return apr_pmemdup(pool, "", sizeof(""));
  else
    return apr_pstrndup(pool, uri1, uri_ancestor_len + i);
}

const char *
svn_dirent_is_child(const char *parent_dirent,
                    const char *child_dirent,
                    apr_pool_t *pool)
{
  return is_child(type_dirent, parent_dirent, child_dirent, pool);
}

const char *
svn_dirent_skip_ancestor(const char *parent_dirent,
                         const char *child_dirent)
{
  apr_size_t len = strlen(parent_dirent);
  apr_size_t root_len;

  if (0 != memcmp(parent_dirent, child_dirent, len))
    return ((void*)0);

  if (child_dirent[len] == 0)
    return "";



  root_len = dirent_root_length(child_dirent, strlen(child_dirent));
  if (root_len > len)

    return ((void*)0);
# 1438 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (child_dirent[len] == '/')


    return child_dirent + len + 1;

  if (root_len == len)

    return child_dirent + len;

  return ((void*)0);
}

const char *
svn_relpath_skip_ancestor(const char *parent_relpath,
                          const char *child_relpath)
{
  apr_size_t len = strlen(parent_relpath);

  ((relpath_is_canonical(parent_relpath)) ? (void) (0) : __assert_fail ("relpath_is_canonical(parent_relpath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1456, __PRETTY_FUNCTION__));
  ((relpath_is_canonical(child_relpath)) ? (void) (0) : __assert_fail ("relpath_is_canonical(child_relpath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1457, __PRETTY_FUNCTION__));

  if (len == 0)
    return child_relpath;

  if (0 != memcmp(parent_relpath, child_relpath, len))
    return ((void*)0);

  if (child_relpath[len] == 0)
    return "";

  if (child_relpath[len] == '/')
    return child_relpath + len + 1;

  return ((void*)0);
}



static const char *
uri_skip_ancestor(const char *parent_uri,
                  const char *child_uri)
{
  apr_size_t len = strlen(parent_uri);

  ((svn_uri_is_canonical(parent_uri, ((void*)0))) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(parent_uri, ((void*)0))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1482, __PRETTY_FUNCTION__));
  ((svn_uri_is_canonical(child_uri, ((void*)0))) ? (void) (0) : __assert_fail ("svn_uri_is_canonical(child_uri, ((void*)0))", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1483, __PRETTY_FUNCTION__));

  if (0 != memcmp(parent_uri, child_uri, len))
    return ((void*)0);

  if (child_uri[len] == 0)
    return "";

  if (child_uri[len] == '/')
    return child_uri + len + 1;

  return ((void*)0);
}

const char *
svn_uri_skip_ancestor(const char *parent_uri,
                      const char *child_uri,
                      apr_pool_t *result_pool)
{
  const char *result = uri_skip_ancestor(parent_uri, child_uri);

  return result ? svn_path_uri_decode(result, result_pool) : ((void*)0);
}

svn_boolean_t
svn_dirent_is_ancestor(const char *parent_dirent, const char *child_dirent)
{
  return svn_dirent_skip_ancestor(parent_dirent, child_dirent) != ((void*)0);
}

svn_boolean_t
svn_uri__is_ancestor(const char *parent_uri, const char *child_uri)
{
  return uri_skip_ancestor(parent_uri, child_uri) != ((void*)0);
}


svn_boolean_t
svn_dirent_is_absolute(const char *dirent)
{
  if (! dirent)
    return 0;



  if (dirent[0] == '/'



      )
    return (!0);
# 1543 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return 0;
}

svn_error_t *
svn_dirent_get_absolute(const char **pabsolute,
                        const char *relative,
                        apr_pool_t *pool)
{
  char *buffer;
  apr_status_t apr_err;
  const char *path_apr;

  do { if (!(! svn_path_is_url(relative))) do { svn_error_t *svn_err__temp = (svn_error__malfunction((!0), "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 1555, "! svn_path_is_url(relative)")); if (svn_err__temp) return (svn_err__temp); } while (0); } while (0);


  do { svn_error_t *svn_err__temp = (svn_path_cstring_from_utf8(&path_apr, relative, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  apr_err = apr_filepath_merge(&buffer, ((void*)0),
                               path_apr,
                               0x04,
                               pool);
  if (apr_err)
    return svn_error_createf(SVN_ERR_BAD_FILENAME,
                             svn_error_create(apr_err, ((void*)0), ((void*)0)),
                             dcgettext ("subversion", "Couldn't determine absolute path of '%s'", 5),
                             svn_dirent_local_style(relative, pool));

  do { svn_error_t *svn_err__temp = (svn_path_cstring_to_utf8(pabsolute, buffer, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  *pabsolute = svn_dirent_canonicalize(*pabsolute, pool);
  return 0;
}

const char *
svn_uri_canonicalize(const char *uri, apr_pool_t *pool)
{
  return canonicalize(type_uri, uri, pool);
}

const char *
svn_relpath_canonicalize(const char *relpath, apr_pool_t *pool)
{
  return canonicalize(type_relpath, relpath, pool);
}

const char *
svn_dirent_canonicalize(const char *dirent, apr_pool_t *pool)
{
  const char *dst = canonicalize(type_dirent, dirent, pool);
# 1610 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return dst;
}

svn_boolean_t
svn_dirent_is_canonical(const char *dirent, apr_pool_t *scratch_pool)
{
  const char *ptr = dirent;
  if (*ptr == '/')
    {
      ptr++;
# 1631 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
    }
# 1647 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return relpath_is_canonical(ptr);
}

static svn_boolean_t
relpath_is_canonical(const char *relpath)
{
  const char *ptr = relpath, *seg = relpath;







  if (*relpath == '\0')
    return (!0);

  if (*ptr == '/')
    return 0;


  while(1)
    {
      apr_size_t seglen = ptr - seg;

      if (seglen == 1 && *seg == '.')
        return 0;

      if (*ptr == '/' && *(ptr+1) == '/')
        return 0;

      if (! *ptr && *(ptr - 1) == '/')
        return 0;

      if (! *ptr)
        break;

      if (*ptr == '/')
        ptr++;
      seg = ptr;

      while (*ptr && (*ptr != '/'))
        ptr++;
    }

  return (!0);
}

svn_boolean_t
svn_relpath_is_canonical(const char *relpath)
{
  return relpath_is_canonical(relpath);
}

svn_boolean_t
svn_uri_is_canonical(const char *uri, apr_pool_t *scratch_pool)
{
  const char *ptr = uri, *seg = uri;
  const char *schema_data = ((void*)0);
# 1716 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (*uri == '\0')
    return 0;

  if (! svn_path_is_url(uri))
    return 0;


  while (*ptr && (*ptr != '/') && (*ptr != ':'))
    ptr++;


  if (! (*ptr == ':' && *(ptr+1) == '/' && *(ptr+2) == '/'))
    return 0;


  ptr = uri;
  while (*ptr != ':')
    {
      if (*ptr >= 'A' && *ptr <= 'Z')
        return 0;
      ptr++;
    }

  ptr += 3;


  if (! *ptr)
    return (!0);


  seg = ptr;
  while (*ptr && (*ptr != '/') && (*ptr != '@'))
    ptr++;

  if (*ptr == '@')
    seg = ptr + 1;


  ptr = seg;
  while (*ptr && *ptr != '/' && *ptr != ':')
    {
      if (*ptr >= 'A' && *ptr <= 'Z')
        return 0;
      ptr++;
    }


  if (*ptr == ':')
    {
      apr_int64_t port = 0;

      ptr++;
      schema_data = ptr;

      while (*ptr >= '0' && *ptr <= '9')
        {
          port = 10 * port + (*ptr - '0');
          ptr++;
        }

      if (ptr == schema_data)
        return 0;

      if (*ptr && *ptr != '/')
        return 0;

      if (port == 80 && (__extension__ (__builtin_constant_p (5) && ((__builtin_constant_p (uri) && strlen (uri) < ((size_t) (5))) || (__builtin_constant_p ("http:") && strlen ("http:") < ((size_t) (5)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (uri) && __builtin_constant_p ("http:") && (__s1_len = __builtin_strlen (uri), __s2_len = __builtin_strlen ("http:"), (!((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("http:") + 1) - (size_t)(const void *)("http:") == 1) || __s2_len >= 4)) ? __builtin_strcmp (uri, "http:") : (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) && (__s1_len = __builtin_strlen (uri), __s1_len < 4) ? (__builtin_constant_p ("http:") && ((size_t)(const void *)(("http:") + 1) - (size_t)(const void *)("http:") == 1) ? __builtin_strcmp (uri, "http:") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("http:"); int __result = (((const unsigned char *) (const char *) (uri))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("http:") && ((size_t)(const void *)(("http:") + 1) - (size_t)(const void *)("http:") == 1) && (__s2_len = __builtin_strlen ("http:"), __s2_len < 4) ? (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) ? __builtin_strcmp (uri, "http:") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri); int __result = (((const unsigned char *) (const char *) ("http:"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("http:"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("http:"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("http:"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (uri, "http:")))); }) : strncmp (uri, "http:", 5))) == 0)
        return 0;
      else if (port == 443 && (__extension__ (__builtin_constant_p (6) && ((__builtin_constant_p (uri) && strlen (uri) < ((size_t) (6))) || (__builtin_constant_p ("https:") && strlen ("https:") < ((size_t) (6)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (uri) && __builtin_constant_p ("https:") && (__s1_len = __builtin_strlen (uri), __s2_len = __builtin_strlen ("https:"), (!((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("https:") + 1) - (size_t)(const void *)("https:") == 1) || __s2_len >= 4)) ? __builtin_strcmp (uri, "https:") : (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) && (__s1_len = __builtin_strlen (uri), __s1_len < 4) ? (__builtin_constant_p ("https:") && ((size_t)(const void *)(("https:") + 1) - (size_t)(const void *)("https:") == 1) ? __builtin_strcmp (uri, "https:") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("https:"); int __result = (((const unsigned char *) (const char *) (uri))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("https:") && ((size_t)(const void *)(("https:") + 1) - (size_t)(const void *)("https:") == 1) && (__s2_len = __builtin_strlen ("https:"), __s2_len < 4) ? (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) ? __builtin_strcmp (uri, "https:") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri); int __result = (((const unsigned char *) (const char *) ("https:"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("https:"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("https:"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("https:"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (uri, "https:")))); }) : strncmp (uri, "https:", 6))) == 0)
        return 0;
      else if (port == 3690 && (__extension__ (__builtin_constant_p (4) && ((__builtin_constant_p (uri) && strlen (uri) < ((size_t) (4))) || (__builtin_constant_p ("svn:") && strlen ("svn:") < ((size_t) (4)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (uri) && __builtin_constant_p ("svn:") && (__s1_len = __builtin_strlen (uri), __s2_len = __builtin_strlen ("svn:"), (!((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("svn:") + 1) - (size_t)(const void *)("svn:") == 1) || __s2_len >= 4)) ? __builtin_strcmp (uri, "svn:") : (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) && (__s1_len = __builtin_strlen (uri), __s1_len < 4) ? (__builtin_constant_p ("svn:") && ((size_t)(const void *)(("svn:") + 1) - (size_t)(const void *)("svn:") == 1) ? __builtin_strcmp (uri, "svn:") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("svn:"); int __result = (((const unsigned char *) (const char *) (uri))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("svn:") && ((size_t)(const void *)(("svn:") + 1) - (size_t)(const void *)("svn:") == 1) && (__s2_len = __builtin_strlen ("svn:"), __s2_len < 4) ? (__builtin_constant_p (uri) && ((size_t)(const void *)((uri) + 1) - (size_t)(const void *)(uri) == 1) ? __builtin_strcmp (uri, "svn:") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri); int __result = (((const unsigned char *) (const char *) ("svn:"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("svn:"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("svn:"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (uri, "svn:")))); }) : strncmp (uri, "svn:", 4))) == 0)
        return 0;
    }

  schema_data = ptr;
# 1806 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  while(1)
    {
      apr_size_t seglen = ptr - seg;

      if (seglen == 1 && *seg == '.')
        return 0;

      if (*ptr == '/' && *(ptr+1) == '/')
        return 0;

      if (! *ptr && *(ptr - 1) == '/' && ptr - 1 != uri)
        return 0;

      if (! *ptr)
        break;

      if (*ptr == '/')
        ptr++;
      seg = ptr;


      while (*ptr && (*ptr != '/'))
        ptr++;
    }

  ptr = schema_data;

  while (*ptr)
    {
      if (*ptr == '%')
        {
          char digitz[3];
          int val;



          if (((*(ptr+1) < '0' || *(ptr+1) > '9'))
              && (*(ptr+1) < 'A' || *(ptr+1) > 'F'))
            return 0;
          else if (((*(ptr+2) < '0' || *(ptr+2) > '9'))
                   && (*(ptr+2) < 'A' || *(ptr+2) > 'F'))
            return 0;

          digitz[0] = *(++ptr);
          digitz[1] = *(++ptr);
          digitz[2] = '\0';
          val = (int)strtol(digitz, ((void*)0), 16);

          if (svn_uri__char_validity[val])
            return 0;
        }
      else if (*ptr != '/' && !svn_uri__char_validity[(unsigned char)*ptr])
        return 0;
      ptr++;
    }

  return (!0);
}

svn_error_t *
svn_dirent_condense_targets(const char **pcommon,
                            apr_array_header_t **pcondensed_targets,
                            const apr_array_header_t *targets,
                            svn_boolean_t remove_redundancies,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool)
{
  int i, num_condensed = targets->nelts;
  svn_boolean_t *removed;
  apr_array_header_t *abs_targets;


  if (targets->nelts <= 0)
    {
      *pcommon = ((void*)0);
      if (pcondensed_targets)
        *pcondensed_targets = ((void*)0);
      return 0;
    }


  do { svn_error_t *svn_err__temp = (svn_dirent_get_absolute(pcommon, (((const char * *)(targets)->elts)[0]), scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);




  if (targets->nelts == 1)
    {
      *pcommon = apr_pstrdup(result_pool, *pcommon);
      if (pcondensed_targets)
        *pcondensed_targets = apr_array_make(result_pool, 0,
                                             sizeof(const char *));
      return 0;
    }
# 1910 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  removed = memset(apr_palloc(scratch_pool, (targets->nelts * sizeof(svn_boolean_t))), 0, (targets->nelts * sizeof(svn_boolean_t)));

  abs_targets = apr_array_make(scratch_pool, targets->nelts,
                               sizeof(const char *));

  (*((const char * *)apr_array_push(abs_targets))) = *pcommon;

  for (i = 1; i < targets->nelts; ++i)
    {
      const char *rel = (((const char * *)(targets)->elts)[i]);
      const char *absolute;
      do { svn_error_t *svn_err__temp = (svn_dirent_get_absolute(&absolute, rel, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      (*((const char * *)apr_array_push(abs_targets))) = absolute;
      *pcommon = svn_dirent_get_longest_ancestor(*pcommon, absolute,
                                                 scratch_pool);
    }

  *pcommon = apr_pstrdup(result_pool, *pcommon);

  if (pcondensed_targets != ((void*)0))
    {
      size_t basedir_len;

      if (remove_redundancies)
        {







          for (i = 0; i < abs_targets->nelts; ++i)
            {
              int j;

              if (removed[i])
                continue;

              for (j = i + 1; j < abs_targets->nelts; ++j)
                {
                  const char *abs_targets_i;
                  const char *abs_targets_j;
                  const char *ancestor;

                  if (removed[j])
                    continue;

                  abs_targets_i = (((const char * *)(abs_targets)->elts)[i]);
                  abs_targets_j = (((const char * *)(abs_targets)->elts)[j]);

                  ancestor = svn_dirent_get_longest_ancestor
                    (abs_targets_i, abs_targets_j, scratch_pool);

                  if (*ancestor == '\0')
                    continue;

                  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (ancestor) && __builtin_constant_p (abs_targets_i) && (__s1_len = __builtin_strlen (ancestor), __s2_len = __builtin_strlen (abs_targets_i), (!((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((abs_targets_i) + 1) - (size_t)(const void *)(abs_targets_i) == 1) || __s2_len >= 4)) ? __builtin_strcmp (ancestor, abs_targets_i) : (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) && (__s1_len = __builtin_strlen (ancestor), __s1_len < 4) ? (__builtin_constant_p (abs_targets_i) && ((size_t)(const void *)((abs_targets_i) + 1) - (size_t)(const void *)(abs_targets_i) == 1) ? __builtin_strcmp (ancestor, abs_targets_i) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (abs_targets_i); int __result = (((const unsigned char *) (const char *) (ancestor))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (ancestor))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (abs_targets_i) && ((size_t)(const void *)((abs_targets_i) + 1) - (size_t)(const void *)(abs_targets_i) == 1) && (__s2_len = __builtin_strlen (abs_targets_i), __s2_len < 4) ? (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) ? __builtin_strcmp (ancestor, abs_targets_i) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (ancestor); int __result = (((const unsigned char *) (const char *) (abs_targets_i))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (abs_targets_i))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (abs_targets_i))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (abs_targets_i))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (ancestor, abs_targets_i)))); }) == 0)
                    {
                      removed[j] = (!0);
                      num_condensed--;
                    }
                  else if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (ancestor) && __builtin_constant_p (abs_targets_j) && (__s1_len = __builtin_strlen (ancestor), __s2_len = __builtin_strlen (abs_targets_j), (!((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((abs_targets_j) + 1) - (size_t)(const void *)(abs_targets_j) == 1) || __s2_len >= 4)) ? __builtin_strcmp (ancestor, abs_targets_j) : (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) && (__s1_len = __builtin_strlen (ancestor), __s1_len < 4) ? (__builtin_constant_p (abs_targets_j) && ((size_t)(const void *)((abs_targets_j) + 1) - (size_t)(const void *)(abs_targets_j) == 1) ? __builtin_strcmp (ancestor, abs_targets_j) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (abs_targets_j); int __result = (((const unsigned char *) (const char *) (ancestor))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (ancestor))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (abs_targets_j) && ((size_t)(const void *)((abs_targets_j) + 1) - (size_t)(const void *)(abs_targets_j) == 1) && (__s2_len = __builtin_strlen (abs_targets_j), __s2_len < 4) ? (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) ? __builtin_strcmp (ancestor, abs_targets_j) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (ancestor); int __result = (((const unsigned char *) (const char *) (abs_targets_j))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (abs_targets_j))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (abs_targets_j))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (abs_targets_j))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (ancestor, abs_targets_j)))); }) == 0)
                    {
                      removed[i] = (!0);
                      num_condensed--;
                    }
                }
            }



          for (i = 0; i < abs_targets->nelts; ++i)
            {
              const char *abs_targets_i = (((const char * *)(abs_targets)->elts)[i]);


              if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (abs_targets_i) && __builtin_constant_p (*pcommon) && (__s1_len = __builtin_strlen (abs_targets_i), __s2_len = __builtin_strlen (*pcommon), (!((size_t)(const void *)((abs_targets_i) + 1) - (size_t)(const void *)(abs_targets_i) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((*pcommon) + 1) - (size_t)(const void *)(*pcommon) == 1) || __s2_len >= 4)) ? __builtin_strcmp (abs_targets_i, *pcommon) : (__builtin_constant_p (abs_targets_i) && ((size_t)(const void *)((abs_targets_i) + 1) - (size_t)(const void *)(abs_targets_i) == 1) && (__s1_len = __builtin_strlen (abs_targets_i), __s1_len < 4) ? (__builtin_constant_p (*pcommon) && ((size_t)(const void *)((*pcommon) + 1) - (size_t)(const void *)(*pcommon) == 1) ? __builtin_strcmp (abs_targets_i, *pcommon) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (*pcommon); int __result = (((const unsigned char *) (const char *) (abs_targets_i))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (abs_targets_i))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (abs_targets_i))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (abs_targets_i))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (*pcommon) && ((size_t)(const void *)((*pcommon) + 1) - (size_t)(const void *)(*pcommon) == 1) && (__s2_len = __builtin_strlen (*pcommon), __s2_len < 4) ? (__builtin_constant_p (abs_targets_i) && ((size_t)(const void *)((abs_targets_i) + 1) - (size_t)(const void *)(abs_targets_i) == 1) ? __builtin_strcmp (abs_targets_i, *pcommon) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (abs_targets_i); int __result = (((const unsigned char *) (const char *) (*pcommon))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (*pcommon))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (*pcommon))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (*pcommon))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (abs_targets_i, *pcommon)))); }) == 0) && (! removed[i]))
                {
                  removed[i] = (!0);
                  num_condensed--;
                }
            }
        }


      basedir_len = strlen(*pcommon);
      *pcondensed_targets = apr_array_make(result_pool, num_condensed,
                                           sizeof(const char *));

      for (i = 0; i < abs_targets->nelts; ++i)
        {
          const char *rel_item = (((const char * *)(abs_targets)->elts)[i]);


          if (removed[i])
            continue;



          if (basedir_len > 0)
            {







              rel_item += basedir_len;
              if (rel_item[0] &&
                  ! svn_dirent_is_root(*pcommon, basedir_len))
                rel_item++;
            }

          (*((const char * *)apr_array_push(*pcondensed_targets)))
            = apr_pstrdup(result_pool, rel_item);
        }
    }

  return 0;
}

svn_error_t *
svn_uri_condense_targets(const char **pcommon,
                         apr_array_header_t **pcondensed_targets,
                         const apr_array_header_t *targets,
                         svn_boolean_t remove_redundancies,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool)
{
  int i, num_condensed = targets->nelts;
  apr_array_header_t *uri_targets;
  svn_boolean_t *removed;


  if (targets->nelts <= 0)
    {
      *pcommon = ((void*)0);
      if (pcondensed_targets)
        *pcondensed_targets = ((void*)0);
      return 0;
    }

  *pcommon = svn_uri_canonicalize((((const char * *)(targets)->elts)[0]),
                                  scratch_pool);


  if (targets->nelts == 1)
    {
      *pcommon = apr_pstrdup(result_pool, *pcommon);
      if (pcondensed_targets)
        *pcondensed_targets = apr_array_make(result_pool, 0,
                                             sizeof(const char *));
      return 0;
    }
# 2074 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  removed = memset(apr_palloc(scratch_pool, (targets->nelts * sizeof(svn_boolean_t))), 0, (targets->nelts * sizeof(svn_boolean_t)));

  uri_targets = apr_array_make(scratch_pool, targets->nelts,
                               sizeof(const char *));

  (*((const char * *)apr_array_push(uri_targets))) = *pcommon;

  for (i = 1; i < targets->nelts; ++i)
    {
      const char *uri = svn_uri_canonicalize(
                           (((const char * *)(targets)->elts)[i]),
                           scratch_pool);
      (*((const char * *)apr_array_push(uri_targets))) = uri;





      if (**pcommon != '\0')
        *pcommon = svn_uri_get_longest_ancestor(*pcommon, uri,
                                                scratch_pool);
    }

  *pcommon = apr_pstrdup(result_pool, *pcommon);

  if (pcondensed_targets != ((void*)0))
    {
      size_t basedir_len;

      if (remove_redundancies)
        {







          for (i = 0; i < uri_targets->nelts; ++i)
            {
              int j;

              if (removed[i])
                continue;

              for (j = i + 1; j < uri_targets->nelts; ++j)
                {
                  const char *uri_i;
                  const char *uri_j;
                  const char *ancestor;

                  if (removed[j])
                    continue;

                  uri_i = (((const char * *)(uri_targets)->elts)[i]);
                  uri_j = (((const char * *)(uri_targets)->elts)[j]);

                  ancestor = svn_uri_get_longest_ancestor(uri_i,
                                                          uri_j,
                                                          scratch_pool);

                  if (*ancestor == '\0')
                    continue;

                  if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (ancestor) && __builtin_constant_p (uri_i) && (__s1_len = __builtin_strlen (ancestor), __s2_len = __builtin_strlen (uri_i), (!((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((uri_i) + 1) - (size_t)(const void *)(uri_i) == 1) || __s2_len >= 4)) ? __builtin_strcmp (ancestor, uri_i) : (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) && (__s1_len = __builtin_strlen (ancestor), __s1_len < 4) ? (__builtin_constant_p (uri_i) && ((size_t)(const void *)((uri_i) + 1) - (size_t)(const void *)(uri_i) == 1) ? __builtin_strcmp (ancestor, uri_i) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri_i); int __result = (((const unsigned char *) (const char *) (ancestor))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (ancestor))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (uri_i) && ((size_t)(const void *)((uri_i) + 1) - (size_t)(const void *)(uri_i) == 1) && (__s2_len = __builtin_strlen (uri_i), __s2_len < 4) ? (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) ? __builtin_strcmp (ancestor, uri_i) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (ancestor); int __result = (((const unsigned char *) (const char *) (uri_i))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri_i))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri_i))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri_i))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (ancestor, uri_i)))); }) == 0)
                    {
                      removed[j] = (!0);
                      num_condensed--;
                    }
                  else if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (ancestor) && __builtin_constant_p (uri_j) && (__s1_len = __builtin_strlen (ancestor), __s2_len = __builtin_strlen (uri_j), (!((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((uri_j) + 1) - (size_t)(const void *)(uri_j) == 1) || __s2_len >= 4)) ? __builtin_strcmp (ancestor, uri_j) : (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) && (__s1_len = __builtin_strlen (ancestor), __s1_len < 4) ? (__builtin_constant_p (uri_j) && ((size_t)(const void *)((uri_j) + 1) - (size_t)(const void *)(uri_j) == 1) ? __builtin_strcmp (ancestor, uri_j) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri_j); int __result = (((const unsigned char *) (const char *) (ancestor))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (ancestor))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (ancestor))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (uri_j) && ((size_t)(const void *)((uri_j) + 1) - (size_t)(const void *)(uri_j) == 1) && (__s2_len = __builtin_strlen (uri_j), __s2_len < 4) ? (__builtin_constant_p (ancestor) && ((size_t)(const void *)((ancestor) + 1) - (size_t)(const void *)(ancestor) == 1) ? __builtin_strcmp (ancestor, uri_j) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (ancestor); int __result = (((const unsigned char *) (const char *) (uri_j))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri_j))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri_j))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri_j))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (ancestor, uri_j)))); }) == 0)
                    {
                      removed[i] = (!0);
                      num_condensed--;
                    }
                }
            }



          for (i = 0; i < uri_targets->nelts; ++i)
            {
              const char *uri_targets_i = (((const char * *)(uri_targets)->elts)[i]);


              if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (uri_targets_i) && __builtin_constant_p (*pcommon) && (__s1_len = __builtin_strlen (uri_targets_i), __s2_len = __builtin_strlen (*pcommon), (!((size_t)(const void *)((uri_targets_i) + 1) - (size_t)(const void *)(uri_targets_i) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((*pcommon) + 1) - (size_t)(const void *)(*pcommon) == 1) || __s2_len >= 4)) ? __builtin_strcmp (uri_targets_i, *pcommon) : (__builtin_constant_p (uri_targets_i) && ((size_t)(const void *)((uri_targets_i) + 1) - (size_t)(const void *)(uri_targets_i) == 1) && (__s1_len = __builtin_strlen (uri_targets_i), __s1_len < 4) ? (__builtin_constant_p (*pcommon) && ((size_t)(const void *)((*pcommon) + 1) - (size_t)(const void *)(*pcommon) == 1) ? __builtin_strcmp (uri_targets_i, *pcommon) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (*pcommon); int __result = (((const unsigned char *) (const char *) (uri_targets_i))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri_targets_i))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (uri_targets_i))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (uri_targets_i))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (*pcommon) && ((size_t)(const void *)((*pcommon) + 1) - (size_t)(const void *)(*pcommon) == 1) && (__s2_len = __builtin_strlen (*pcommon), __s2_len < 4) ? (__builtin_constant_p (uri_targets_i) && ((size_t)(const void *)((uri_targets_i) + 1) - (size_t)(const void *)(uri_targets_i) == 1) ? __builtin_strcmp (uri_targets_i, *pcommon) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (uri_targets_i); int __result = (((const unsigned char *) (const char *) (*pcommon))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (*pcommon))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (*pcommon))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (*pcommon))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (uri_targets_i, *pcommon)))); }) == 0) && (! removed[i]))
                {
                  removed[i] = (!0);
                  num_condensed--;
                }
            }
        }


      basedir_len = strlen(*pcommon);
      *pcondensed_targets = apr_array_make(result_pool, num_condensed,
                                           sizeof(const char *));

      for (i = 0; i < uri_targets->nelts; ++i)
        {
          const char *rel_item = (((const char * *)(uri_targets)->elts)[i]);


          if (removed[i])
            continue;



          if (basedir_len > 0)
            {







              rel_item += basedir_len;
              if ((rel_item[0] == '/') ||
                  (rel_item[0] && !svn_uri_is_root(*pcommon, basedir_len)))
                {
                  rel_item++;
                }
            }

          (*((const char * *)apr_array_push(*pcondensed_targets)))
            = svn_path_uri_decode(rel_item, result_pool);
        }
    }

  return 0;
}

svn_error_t *
svn_dirent_is_under_root(svn_boolean_t *under_root,
                         const char **result_path,
                         const char *base_path,
                         const char *path,
                         apr_pool_t *result_pool)
{
  apr_status_t status;
  char *full_path;

  *under_root = 0;
  if (result_path)
    *result_path = ((void*)0);

  status = apr_filepath_merge(&full_path,
                              base_path,
                              path,
                              0x01
                              | 0x02,
                              result_pool);

  if (status == 0)
    {
      if (result_path)
        *result_path = svn_dirent_canonicalize(full_path, result_pool);
      *under_root = (!0);
      return 0;
    }
  else if (status == (20000 + 23))
    {
      *under_root = 0;
      return 0;
    }

  return svn_error_wrap_apr(status, ((void*)0));
}

svn_error_t *
svn_uri_get_dirent_from_file_url(const char **dirent,
                                 const char *url,
                                 apr_pool_t *pool)
{
  const char *hostname, *path;

  do { if (!(svn_uri_is_canonical(url, pool))) do { svn_error_t *svn_err__temp = (svn_error__malfunction((!0), "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2250, "svn_uri_is_canonical(url, pool)")); if (svn_err__temp) return (svn_err__temp); } while (0); } while (0);




  if ((__extension__ (__builtin_constant_p (7) && ((__builtin_constant_p (url) && strlen (url) < ((size_t) (7))) || (__builtin_constant_p ("file://") && strlen ("file://") < ((size_t) (7)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (url) && __builtin_constant_p ("file://") && (__s1_len = __builtin_strlen (url), __s2_len = __builtin_strlen ("file://"), (!((size_t)(const void *)((url) + 1) - (size_t)(const void *)(url) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("file://") + 1) - (size_t)(const void *)("file://") == 1) || __s2_len >= 4)) ? __builtin_strcmp (url, "file://") : (__builtin_constant_p (url) && ((size_t)(const void *)((url) + 1) - (size_t)(const void *)(url) == 1) && (__s1_len = __builtin_strlen (url), __s1_len < 4) ? (__builtin_constant_p ("file://") && ((size_t)(const void *)(("file://") + 1) - (size_t)(const void *)("file://") == 1) ? __builtin_strcmp (url, "file://") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("file://"); int __result = (((const unsigned char *) (const char *) (url))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (url))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (url))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (url))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("file://") && ((size_t)(const void *)(("file://") + 1) - (size_t)(const void *)("file://") == 1) && (__s2_len = __builtin_strlen ("file://"), __s2_len < 4) ? (__builtin_constant_p (url) && ((size_t)(const void *)((url) + 1) - (size_t)(const void *)(url) == 1) ? __builtin_strcmp (url, "file://") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (url); int __result = (((const unsigned char *) (const char *) ("file://"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("file://"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("file://"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("file://"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (url, "file://")))); }) : strncmp (url, "file://", 7))) != 0)
    return svn_error_createf(SVN_ERR_RA_ILLEGAL_URL, ((void*)0),
                             dcgettext ("subversion", "Local URL '%s' does not contain 'file://' " "prefix", 5), url);







  hostname = url + 7;
  path = (__extension__ (__builtin_constant_p ('/') && !__builtin_constant_p (hostname) && ('/') == '\0' ? (char *) __rawmemchr (hostname, '/') : __builtin_strchr (hostname, '/')));
  if (path)
    hostname = apr_pstrmemdup(pool, hostname, path - hostname);
  else
    path = "/";


  if (*hostname == '\0')
    hostname = ((void*)0);
  else
    {
      hostname = svn_path_uri_decode(hostname, pool);
      if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (hostname) && __builtin_constant_p ("localhost") && (__s1_len = __builtin_strlen (hostname), __s2_len = __builtin_strlen ("localhost"), (!((size_t)(const void *)((hostname) + 1) - (size_t)(const void *)(hostname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("localhost") + 1) - (size_t)(const void *)("localhost") == 1) || __s2_len >= 4)) ? __builtin_strcmp (hostname, "localhost") : (__builtin_constant_p (hostname) && ((size_t)(const void *)((hostname) + 1) - (size_t)(const void *)(hostname) == 1) && (__s1_len = __builtin_strlen (hostname), __s1_len < 4) ? (__builtin_constant_p ("localhost") && ((size_t)(const void *)(("localhost") + 1) - (size_t)(const void *)("localhost") == 1) ? __builtin_strcmp (hostname, "localhost") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("localhost"); int __result = (((const unsigned char *) (const char *) (hostname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (hostname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (hostname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (hostname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("localhost") && ((size_t)(const void *)(("localhost") + 1) - (size_t)(const void *)("localhost") == 1) && (__s2_len = __builtin_strlen ("localhost"), __s2_len < 4) ? (__builtin_constant_p (hostname) && ((size_t)(const void *)((hostname) + 1) - (size_t)(const void *)(hostname) == 1) ? __builtin_strcmp (hostname, "localhost") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (hostname); int __result = (((const unsigned char *) (const char *) ("localhost"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("localhost"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("localhost"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("localhost"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (hostname, "localhost")))); }) == 0)
        hostname = ((void*)0);
    }
# 2348 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  if (hostname)
    return svn_error_createf(SVN_ERR_RA_ILLEGAL_URL, ((void*)0),
                             dcgettext ("subversion", "Local URL '%s' contains unsupported hostname", 5),
                             url);

  *dirent = svn_path_uri_decode(path, pool);

  return 0;
}

svn_error_t *
svn_uri_get_file_url_from_dirent(const char **url,
                                 const char *dirent,
                                 apr_pool_t *pool)
{
  ((svn_dirent_is_canonical(dirent, pool)) ? (void) (0) : __assert_fail ("svn_dirent_is_canonical(dirent, pool)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2363, __PRETTY_FUNCTION__));

  do { svn_error_t *svn_err__temp = (svn_dirent_get_absolute(&dirent, dirent, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  dirent = svn_path_uri_encode(dirent, pool);


  if (dirent[0] == '/' && dirent[1] == '\0')
    dirent = ((void*)0);

  *url = apr_pstrcat(pool, "file://", dirent, (char *)((void*)0));
# 2386 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c"
  return 0;
}





svn_boolean_t
svn_fspath__is_canonical(const char *fspath)
{
  return fspath[0] == '/' && relpath_is_canonical(fspath + 1);
}


const char *
svn_fspath__canonicalize(const char *fspath,
                         apr_pool_t *pool)
{
  if ((fspath[0] == '/') && (fspath[1] == '\0'))
    return "/";

  return apr_pstrcat(pool, "/", svn_relpath_canonicalize(fspath, pool),
                     (char *)((void*)0));
}


svn_boolean_t
svn_fspath__is_root(const char *fspath, apr_size_t len)
{

  return (len == 1 && fspath[0] == '/');
}


const char *
svn_fspath__skip_ancestor(const char *parent_fspath,
                          const char *child_fspath)
{
  ((svn_fspath__is_canonical(parent_fspath)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(parent_fspath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2424, __PRETTY_FUNCTION__));
  ((svn_fspath__is_canonical(child_fspath)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(child_fspath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2425, __PRETTY_FUNCTION__));

  return svn_relpath_skip_ancestor(parent_fspath + 1, child_fspath + 1);
}


const char *
svn_fspath__dirname(const char *fspath,
                    apr_pool_t *pool)
{
  ((svn_fspath__is_canonical(fspath)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(fspath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2435, __PRETTY_FUNCTION__));

  if (fspath[0] == '/' && fspath[1] == '\0')
    return apr_pstrdup(pool, fspath);
  else
    return apr_pstrcat(pool, "/", svn_relpath_dirname(fspath + 1, pool),
                       (char *)((void*)0));
}


const char *
svn_fspath__basename(const char *fspath,
                     apr_pool_t *pool)
{
  const char *result;
  ((svn_fspath__is_canonical(fspath)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(fspath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2450, __PRETTY_FUNCTION__));

  result = svn_relpath_basename(fspath + 1, pool);

  (((__extension__ (__builtin_constant_p ('/') && !__builtin_constant_p (result) && ('/') == '\0' ? (char *) __rawmemchr (result, '/') : __builtin_strchr (result, '/'))) == ((void*)0)) ? (void) (0) : __assert_fail ("(__extension__ (__builtin_constant_p ('/') && !__builtin_constant_p (result) && ('/') == '\\0' ? (char *) __rawmemchr (result, '/') : __builtin_strchr (result, '/'))) == ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2454, __PRETTY_FUNCTION__));
  return result;
}

void
svn_fspath__split(const char **dirpath,
                  const char **base_name,
                  const char *fspath,
                  apr_pool_t *result_pool)
{
  ((dirpath != base_name) ? (void) (0) : __assert_fail ("dirpath != base_name", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2464, __PRETTY_FUNCTION__));

  if (dirpath)
    *dirpath = svn_fspath__dirname(fspath, result_pool);

  if (base_name)
    *base_name = svn_fspath__basename(fspath, result_pool);
}

char *
svn_fspath__join(const char *fspath,
                 const char *relpath,
                 apr_pool_t *result_pool)
{
  char *result;
  ((svn_fspath__is_canonical(fspath)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(fspath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2479, __PRETTY_FUNCTION__));
  ((svn_relpath_is_canonical(relpath)) ? (void) (0) : __assert_fail ("svn_relpath_is_canonical(relpath)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2480, __PRETTY_FUNCTION__));

  if (relpath[0] == '\0')
    result = apr_pstrdup(result_pool, fspath);
  else if (fspath[1] == '\0')
    result = apr_pstrcat(result_pool, "/", relpath, (char *)((void*)0));
  else
    result = apr_pstrcat(result_pool, fspath, "/", relpath, (char *)((void*)0));

  ((svn_fspath__is_canonical(result)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(result)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2489, __PRETTY_FUNCTION__));
  return result;
}

char *
svn_fspath__get_longest_ancestor(const char *fspath1,
                                 const char *fspath2,
                                 apr_pool_t *result_pool)
{
  char *result;
  ((svn_fspath__is_canonical(fspath1)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(fspath1)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2499, __PRETTY_FUNCTION__));
  ((svn_fspath__is_canonical(fspath2)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(fspath2)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2500, __PRETTY_FUNCTION__));

  result = apr_pstrcat(result_pool, "/",
                       svn_relpath_get_longest_ancestor(fspath1 + 1,
                                                        fspath2 + 1,
                                                        result_pool),
                       (char *)((void*)0));

  ((svn_fspath__is_canonical(result)) ? (void) (0) : __assert_fail ("svn_fspath__is_canonical(result)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/dirent_uri.c", 2508, __PRETTY_FUNCTION__));
  return result;
}






const char *
svn_urlpath__canonicalize(const char *uri,
                          apr_pool_t *pool)
{
  if (svn_path_is_url(uri))
    {
      uri = svn_uri_canonicalize(uri, pool);
    }
  else
    {
      uri = svn_fspath__canonicalize(uri, pool);

      uri = svn_path_uri_decode(uri, pool);
      uri = svn_path_uri_encode(uri, pool);
    }
  return uri;
}
