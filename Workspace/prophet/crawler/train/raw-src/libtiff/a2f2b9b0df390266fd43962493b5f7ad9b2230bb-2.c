# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c" 2
# 42 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
# 1 "./tiffiop.h" 1
# 33 "./tiffiop.h"
# 1 "./tif_config.h" 1
# 34 "./tiffiop.h" 2


# 1 "/usr/include/fcntl.h" 1 3 4
# 25 "/usr/include/fcntl.h" 3 4
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
# 26 "/usr/include/fcntl.h" 2 3 4





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
# 32 "/usr/include/fcntl.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 62 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4





typedef __mode_t mode_t;





typedef __off_t off_t;
# 60 "/usr/include/fcntl.h" 3 4
typedef __pid_t pid_t;







# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 68 "/usr/include/fcntl.h" 2 3 4
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
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 146 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 170 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 192 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 221 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 238 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ ));
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 37 "./tiffiop.h" 2



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
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;
# 75 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 58 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
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
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


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
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


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
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 41 "./tiffiop.h" 2



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
# 129 "/usr/include/string.h" 3 4
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
# 285 "/usr/include/string.h" 3 4
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
# 399 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
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
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
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
# 45 "./tiffiop.h" 2



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
# 49 "./tiffiop.h" 2





# 1 "/usr/include/search.h" 1 3 4
# 25 "/usr/include/search.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 26 "/usr/include/search.h" 2 3 4
# 44 "/usr/include/search.h" 3 4
extern void insque (void *__elem, void *__prev) __attribute__ ((__nothrow__ ));


extern void remque (void *__elem) __attribute__ ((__nothrow__ ));






typedef int (*__compar_fn_t) (const void *, const void *);







typedef enum
  {
    FIND,
    ENTER
  }
ACTION;

typedef struct entry
  {
    char *key;
    void *data;
  }
ENTRY;


struct _ENTRY;
# 87 "/usr/include/search.h" 3 4
extern ENTRY *hsearch (ENTRY __item, ACTION __action) __attribute__ ((__nothrow__ ));


extern int hcreate (size_t __nel) __attribute__ ((__nothrow__ ));


extern void hdestroy (void) __attribute__ ((__nothrow__ ));
# 118 "/usr/include/search.h" 3 4
typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;



extern void *tsearch (const void *__key, void **__rootp,
        __compar_fn_t __compar);



extern void *tfind (const void *__key, void *const *__rootp,
      __compar_fn_t __compar);


extern void *tdelete (const void *__restrict __key,
        void **__restrict __rootp,
        __compar_fn_t __compar);



typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,
          int __level);




extern void twalk (const void *__root, __action_fn_t __action);
# 164 "/usr/include/search.h" 3 4
extern void *lfind (const void *__key, const void *__base,
      size_t *__nmemb, size_t __size, __compar_fn_t __compar);



extern void *lsearch (const void *__key, void *__base,
        size_t *__nmemb, size_t __size, __compar_fn_t __compar);
# 55 "./tiffiop.h" 2





# 1 "./tiffio.h" 1
# 33 "./tiffio.h"
# 1 "./tiff.h" 1
# 30 "./tiff.h"
# 1 "./tiffconf.h" 1
# 31 "./tiff.h" 2
# 68 "./tiff.h"
typedef signed char int8;
typedef unsigned char uint8;

typedef signed short int16;
typedef unsigned short uint16;

typedef signed int int32;
typedef unsigned int uint32;

typedef signed long int64;
typedef unsigned long uint64;
# 88 "./tiff.h"
typedef int uint16_vap;




typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
} TIFFHeaderCommon;
typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
 uint32 tiff_diroff;
} TIFFHeaderClassic;
typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
 uint16 tiff_offsetsize;
 uint16 tiff_unused;
 uint64 tiff_diroff;
} TIFFHeaderBig;
# 125 "./tiff.h"
typedef enum {
 TIFF_NOTYPE = 0,
 TIFF_BYTE = 1,
 TIFF_ASCII = 2,
 TIFF_SHORT = 3,
 TIFF_LONG = 4,
 TIFF_RATIONAL = 5,
 TIFF_SBYTE = 6,
 TIFF_UNDEFINED = 7,
 TIFF_SSHORT = 8,
 TIFF_SLONG = 9,
 TIFF_SRATIONAL = 10,
 TIFF_FLOAT = 11,
 TIFF_DOUBLE = 12,
 TIFF_IFD = 13,
 TIFF_LONG8 = 16,
 TIFF_SLONG8 = 17,
 TIFF_IFD8 = 18
} TIFFDataType;
# 34 "./tiffio.h" 2
# 1 "./tiffvers.h" 1
# 35 "./tiffio.h" 2





typedef struct tiff TIFF;
# 67 "./tiffio.h"
typedef signed long tmsize_t;
typedef uint64 toff_t;


typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrile_t;
typedef tstrile_t tstrip_t;
typedef tstrile_t ttile_t;
typedef tmsize_t tsize_t;
typedef void* tdata_t;
# 106 "./tiffio.h"
typedef void* thandle_t;
# 138 "./tiffio.h"
typedef unsigned char TIFFRGBValue;

typedef struct {
 float d_mat[3][3];
 float d_YCR;
 float d_YCG;
 float d_YCB;
 uint32 d_Vrwr;
 uint32 d_Vrwg;
 uint32 d_Vrwb;
 float d_Y0R;
 float d_Y0G;
 float d_Y0B;
 float d_gammaR;
 float d_gammaG;
 float d_gammaB;
} TIFFDisplay;

typedef struct {
 TIFFRGBValue* clamptab;
 int* Cr_r_tab;
 int* Cb_b_tab;
 int32* Cr_g_tab;
 int32* Cb_g_tab;
 int32* Y_tab;
} TIFFYCbCrToRGB;

typedef struct {
 int range;

 float rstep, gstep, bstep;
 float X0, Y0, Z0;
 TIFFDisplay display;
 float Yr2r[1500 + 1];
 float Yg2g[1500 + 1];
 float Yb2b[1500 + 1];
} TIFFCIELabToRGB;




typedef struct _TIFFRGBAImage TIFFRGBAImage;
# 190 "./tiffio.h"
typedef void (*tileContigRoutine)
    (TIFFRGBAImage*, uint32*, uint32, uint32, uint32, uint32, int32, int32,
 unsigned char*);
typedef void (*tileSeparateRoutine)
    (TIFFRGBAImage*, uint32*, uint32, uint32, uint32, uint32, int32, int32,
 unsigned char*, unsigned char*, unsigned char*, unsigned char*);



struct _TIFFRGBAImage {
 TIFF* tif;
 int stoponerr;
 int isContig;
 int alpha;
 uint32 width;
 uint32 height;
 uint16 bitspersample;
 uint16 samplesperpixel;
 uint16 orientation;
 uint16 req_orientation;
 uint16 photometric;
 uint16* redcmap;
 uint16* greencmap;
 uint16* bluecmap;

 int (*get)(TIFFRGBAImage*, uint32*, uint32, uint32);

 union {
     void (*any)(TIFFRGBAImage*);
     tileContigRoutine contig;
     tileSeparateRoutine separate;
 } put;
 TIFFRGBValue* Map;
 uint32** BWmap;
 uint32** PALmap;
 TIFFYCbCrToRGB* ycbcr;
 TIFFCIELabToRGB* cielab;

 uint8* UaToAa;
 uint8* Bitdepth16To8;

 int row_offset;
 int col_offset;
};
# 251 "./tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;


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
# 390 "/usr/include/libio.h" 3 4
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
# 209 "/usr/include/stdio.h" 3 4
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
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) ;
# 319 "/usr/include/stdio.h" 3 4
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
# 412 "/usr/include/stdio.h" 3 4
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
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
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
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
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
# 826 "/usr/include/stdio.h" 3 4
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
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));
# 913 "/usr/include/stdio.h" 3 4
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
# 124 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
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
# 259 "./tiffio.h" 2
# 273 "./tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef void (*TIFFErrorHandlerExt)(thandle_t, const char*, const char*, va_list);
typedef tmsize_t (*TIFFReadWriteProc)(thandle_t, void*, tmsize_t);
typedef toff_t (*TIFFSeekProc)(thandle_t, toff_t, int);
typedef int (*TIFFCloseProc)(thandle_t);
typedef toff_t (*TIFFSizeProc)(thandle_t);
typedef int (*TIFFMapFileProc)(thandle_t, void** base, toff_t* size);
typedef void (*TIFFUnmapFileProc)(thandle_t, void* base, toff_t size);
typedef void (*TIFFExtendProc)(TIFF*);

extern const char* TIFFGetVersion(void);

extern const TIFFCodec* TIFFFindCODEC(uint16);
extern TIFFCodec* TIFFRegisterCODEC(uint16, const char*, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec*);
extern int TIFFIsCODECConfigured(uint16);
extern TIFFCodec* TIFFGetConfiguredCODECs(void);





extern void* _TIFFmalloc(tmsize_t s);
extern void* _TIFFrealloc(void* p, tmsize_t s);
extern void _TIFFmemset(void* p, int v, tmsize_t c);
extern void _TIFFmemcpy(void* d, const void* s, tmsize_t c);
extern int _TIFFmemcmp(const void* p1, const void* p2, tmsize_t c);
extern void _TIFFfree(void* p);




extern int TIFFGetTagListCount( TIFF * );
extern uint32 TIFFGetTagListEntry( TIFF *, int tag_index );
# 315 "./tiffio.h"
typedef struct _TIFFField TIFFField;
typedef struct _TIFFFieldArray TIFFFieldArray;

extern const TIFFField* TIFFFindField(TIFF *, uint32, TIFFDataType);
extern const TIFFField* TIFFFieldWithTag(TIFF*, uint32);
extern const TIFFField* TIFFFieldWithName(TIFF*, const char *);

typedef int (*TIFFVSetMethod)(TIFF*, uint32, va_list);
typedef int (*TIFFVGetMethod)(TIFF*, uint32, va_list);
typedef void (*TIFFPrintMethod)(TIFF*, FILE*, long);

typedef struct {
    TIFFVSetMethod vsetfield;
    TIFFVGetMethod vgetfield;
    TIFFPrintMethod printdir;
} TIFFTagMethods;

extern TIFFTagMethods *TIFFAccessTagMethods(TIFF *);
extern void *TIFFGetClientInfo(TIFF *, const char *);
extern void TIFFSetClientInfo(TIFF *, void *, const char *);

extern void TIFFCleanup(TIFF* tif);
extern void TIFFClose(TIFF* tif);
extern int TIFFFlush(TIFF* tif);
extern int TIFFFlushData(TIFF* tif);
extern int TIFFGetField(TIFF* tif, uint32 tag, ...);
extern int TIFFVGetField(TIFF* tif, uint32 tag, va_list ap);
extern int TIFFGetFieldDefaulted(TIFF* tif, uint32 tag, ...);
extern int TIFFVGetFieldDefaulted(TIFF* tif, uint32 tag, va_list ap);
extern int TIFFReadDirectory(TIFF* tif);
extern int TIFFReadCustomDirectory(TIFF* tif, toff_t diroff, const TIFFFieldArray* infoarray);
extern int TIFFReadEXIFDirectory(TIFF* tif, toff_t diroff);
extern uint64 TIFFScanlineSize64(TIFF* tif);
extern tmsize_t TIFFScanlineSize(TIFF* tif);
extern uint64 TIFFRasterScanlineSize64(TIFF* tif);
extern tmsize_t TIFFRasterScanlineSize(TIFF* tif);
extern uint64 TIFFStripSize64(TIFF* tif);
extern tmsize_t TIFFStripSize(TIFF* tif);
extern uint64 TIFFRawStripSize64(TIFF* tif, uint32 strip);
extern tmsize_t TIFFRawStripSize(TIFF* tif, uint32 strip);
extern uint64 TIFFVStripSize64(TIFF* tif, uint32 nrows);
extern tmsize_t TIFFVStripSize(TIFF* tif, uint32 nrows);
extern uint64 TIFFTileRowSize64(TIFF* tif);
extern tmsize_t TIFFTileRowSize(TIFF* tif);
extern uint64 TIFFTileSize64(TIFF* tif);
extern tmsize_t TIFFTileSize(TIFF* tif);
extern uint64 TIFFVTileSize64(TIFF* tif, uint32 nrows);
extern tmsize_t TIFFVTileSize(TIFF* tif, uint32 nrows);
extern uint32 TIFFDefaultStripSize(TIFF* tif, uint32 request);
extern void TIFFDefaultTileSize(TIFF*, uint32*, uint32*);
extern int TIFFFileno(TIFF*);
extern int TIFFSetFileno(TIFF*, int);
extern thandle_t TIFFClientdata(TIFF*);
extern thandle_t TIFFSetClientdata(TIFF*, thandle_t);
extern int TIFFGetMode(TIFF*);
extern int TIFFSetMode(TIFF*, int);
extern int TIFFIsTiled(TIFF*);
extern int TIFFIsByteSwapped(TIFF*);
extern int TIFFIsUpSampled(TIFF*);
extern int TIFFIsMSB2LSB(TIFF*);
extern int TIFFIsBigEndian(TIFF*);
extern TIFFReadWriteProc TIFFGetReadProc(TIFF*);
extern TIFFReadWriteProc TIFFGetWriteProc(TIFF*);
extern TIFFSeekProc TIFFGetSeekProc(TIFF*);
extern TIFFCloseProc TIFFGetCloseProc(TIFF*);
extern TIFFSizeProc TIFFGetSizeProc(TIFF*);
extern TIFFMapFileProc TIFFGetMapFileProc(TIFF*);
extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF*);
extern uint32 TIFFCurrentRow(TIFF*);
extern uint16 TIFFCurrentDirectory(TIFF*);
extern uint16 TIFFNumberOfDirectories(TIFF*);
extern uint64 TIFFCurrentDirOffset(TIFF*);
extern uint32 TIFFCurrentStrip(TIFF*);
extern uint32 TIFFCurrentTile(TIFF* tif);
extern int TIFFReadBufferSetup(TIFF* tif, void* bp, tmsize_t size);
extern int TIFFWriteBufferSetup(TIFF* tif, void* bp, tmsize_t size);
extern int TIFFSetupStrips(TIFF *);
extern int TIFFWriteCheck(TIFF*, int, const char *);
extern void TIFFFreeDirectory(TIFF*);
extern int TIFFCreateDirectory(TIFF*);
extern int TIFFLastDirectory(TIFF*);
extern int TIFFSetDirectory(TIFF*, uint16);
extern int TIFFSetSubDirectory(TIFF*, uint64);
extern int TIFFUnlinkDirectory(TIFF*, uint16);
extern int TIFFSetField(TIFF*, uint32, ...);
extern int TIFFVSetField(TIFF*, uint32, va_list);
extern int TIFFUnsetField(TIFF*, uint32);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
# 414 "./tiffio.h"
extern void TIFFPrintDirectory(TIFF*, FILE*, long);
extern int TIFFReadScanline(TIFF* tif, void* buf, uint32 row, uint16 sample);
extern int TIFFWriteScanline(TIFF* tif, void* buf, uint32 row, uint16 sample);
extern int TIFFReadRGBAImage(TIFF*, uint32, uint32, uint32*, int);
extern int TIFFReadRGBAImageOriented(TIFF*, uint32, uint32, uint32*, int, int);


extern int TIFFReadRGBAStrip(TIFF*, uint32, uint32 * );
extern int TIFFReadRGBATile(TIFF*, uint32, uint32, uint32 * );
extern int TIFFRGBAImageOK(TIFF*, char [1024]);
extern int TIFFRGBAImageBegin(TIFFRGBAImage*, TIFF*, int, char [1024]);
extern int TIFFRGBAImageGet(TIFFRGBAImage*, uint32*, uint32, uint32);
extern void TIFFRGBAImageEnd(TIFFRGBAImage*);
extern TIFF* TIFFOpen(const char*, const char*);



extern TIFF* TIFFFdOpen(int, const char*, const char*);
extern TIFF* TIFFClientOpen(const char*, const char*,
     thandle_t,
     TIFFReadWriteProc, TIFFReadWriteProc,
     TIFFSeekProc, TIFFCloseProc,
     TIFFSizeProc,
     TIFFMapFileProc, TIFFUnmapFileProc);
extern const char* TIFFFileName(TIFF*);
extern const char* TIFFSetFileName(TIFF*, const char *);
extern void TIFFError(const char*, const char*, ...) __attribute__((format (printf,2,3)));
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...) __attribute__((format (printf,3,4)));
extern void TIFFWarning(const char*, const char*, ...) __attribute__((format (printf,2,3)));
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...) __attribute__((format (printf,3,4)));
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(TIFFErrorHandlerExt);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern uint32 TIFFComputeTile(TIFF* tif, uint32 x, uint32 y, uint32 z, uint16 s);
extern int TIFFCheckTile(TIFF* tif, uint32 x, uint32 y, uint32 z, uint16 s);
extern uint32 TIFFNumberOfTiles(TIFF*);
extern tmsize_t TIFFReadTile(TIFF* tif, void* buf, uint32 x, uint32 y, uint32 z, uint16 s);
extern tmsize_t TIFFWriteTile(TIFF* tif, void* buf, uint32 x, uint32 y, uint32 z, uint16 s);
extern uint32 TIFFComputeStrip(TIFF*, uint32, uint16);
extern uint32 TIFFNumberOfStrips(TIFF*);
extern tmsize_t TIFFReadEncodedStrip(TIFF* tif, uint32 strip, void* buf, tmsize_t size);
extern tmsize_t TIFFReadRawStrip(TIFF* tif, uint32 strip, void* buf, tmsize_t size);
extern tmsize_t TIFFReadEncodedTile(TIFF* tif, uint32 tile, void* buf, tmsize_t size);
extern tmsize_t TIFFReadRawTile(TIFF* tif, uint32 tile, void* buf, tmsize_t size);
extern tmsize_t TIFFWriteEncodedStrip(TIFF* tif, uint32 strip, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteRawStrip(TIFF* tif, uint32 strip, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteEncodedTile(TIFF* tif, uint32 tile, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteRawTile(TIFF* tif, uint32 tile, void* data, tmsize_t cc);
extern int TIFFDataWidth(TIFFDataType);
extern void TIFFSetWriteOffset(TIFF* tif, toff_t off);
extern void TIFFSwabShort(uint16*);
extern void TIFFSwabLong(uint32*);
extern void TIFFSwabLong8(uint64*);
extern void TIFFSwabFloat(float*);
extern void TIFFSwabDouble(double*);
extern void TIFFSwabArrayOfShort(uint16* wp, tmsize_t n);
extern void TIFFSwabArrayOfTriples(uint8* tp, tmsize_t n);
extern void TIFFSwabArrayOfLong(uint32* lp, tmsize_t n);
extern void TIFFSwabArrayOfLong8(uint64* lp, tmsize_t n);
extern void TIFFSwabArrayOfFloat(float* fp, tmsize_t n);
extern void TIFFSwabArrayOfDouble(double* dp, tmsize_t n);
extern void TIFFReverseBits(uint8* cp, tmsize_t n);
extern const unsigned char* TIFFGetBitRevTable(int);





extern double LogL16toY(int);
extern double LogL10toY(int);
extern void XYZtoRGB24(float*, uint8*);
extern int uv_decode(double*, double*, int);
extern void LogLuv24toXYZ(uint32, float*);
extern void LogLuv32toXYZ(uint32, float*);







extern int LogL16fromY(double, int);
extern int LogL10fromY(double, int);
extern int uv_encode(double, double, int);
extern uint32 LogLuv24fromXYZ(float*, int);
extern uint32 LogLuv32fromXYZ(float*, int);



extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB*, const TIFFDisplay *, float*);
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB *, uint32, int32, int32,
    float *, float *, float *);
extern void TIFFXYZToRGB(TIFFCIELabToRGB *, float, float, float,
    uint32 *, uint32 *, uint32 *);

extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB*, float*, float*);
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB *, uint32, int32, int32,
    uint32 *, uint32 *, uint32 *);







typedef struct {
 ttag_t field_tag;
 short field_readcount;
 short field_writecount;
 TIFFDataType field_type;
        unsigned short field_bit;
 unsigned char field_oktochange;
 unsigned char field_passcount;
 char *field_name;
} TIFFFieldInfo;

extern int TIFFMergeFieldInfo(TIFF*, const TIFFFieldInfo[], uint32);
extern const TIFFFieldInfo* TIFFFindFieldInfo(TIFF*, uint32, TIFFDataType);
extern const TIFFFieldInfo* TIFFFindFieldInfoByName(TIFF* , const char *,
          TIFFDataType);
# 61 "./tiffiop.h" 2
# 1 "./tif_dir.h" 1
# 33 "./tif_dir.h"
typedef struct {
 const TIFFField *info;
 int count;
 void *value;
} TIFFTagValue;




typedef struct {


 unsigned long td_fieldsset[4];

 uint32 td_imagewidth, td_imagelength, td_imagedepth;
 uint32 td_tilewidth, td_tilelength, td_tiledepth;
 uint32 td_subfiletype;
 uint16 td_bitspersample;
 uint16 td_sampleformat;
 uint16 td_compression;
 uint16 td_photometric;
 uint16 td_threshholding;
 uint16 td_fillorder;
 uint16 td_orientation;
 uint16 td_samplesperpixel;
 uint32 td_rowsperstrip;
 uint16 td_minsamplevalue, td_maxsamplevalue;
 double td_sminsamplevalue, td_smaxsamplevalue;
 float td_xresolution, td_yresolution;
 uint16 td_resolutionunit;
 uint16 td_planarconfig;
 float td_xposition, td_yposition;
 uint16 td_pagenumber[2];
 uint16* td_colormap[3];
 uint16 td_halftonehints[2];
 uint16 td_extrasamples;
 uint16* td_sampleinfo;



 uint32 td_stripsperimage;
 uint32 td_nstrips;
 uint64* td_stripoffset;
 uint64* td_stripbytecount;
 int td_stripbytecountsorted;
 uint16 td_nsubifd;
 uint64* td_subifd;

 uint16 td_ycbcrsubsampling[2];
 uint16 td_ycbcrpositioning;

 uint16* td_transferfunction[3];
 float* td_refblackwhite;

 int td_inknameslen;
 char* td_inknames;

 int td_customValueCount;
        TIFFTagValue *td_customValues;
} TIFFDirectory;
# 170 "./tif_dir.h"
typedef enum {
 TIFF_SETGET_UNDEFINED = 0,
 TIFF_SETGET_ASCII = 1,
 TIFF_SETGET_UINT8 = 2,
 TIFF_SETGET_SINT8 = 3,
 TIFF_SETGET_UINT16 = 4,
 TIFF_SETGET_SINT16 = 5,
 TIFF_SETGET_UINT32 = 6,
 TIFF_SETGET_SINT32 = 7,
 TIFF_SETGET_UINT64 = 8,
 TIFF_SETGET_SINT64 = 9,
 TIFF_SETGET_FLOAT = 10,
 TIFF_SETGET_DOUBLE = 11,
 TIFF_SETGET_IFD8 = 12,
 TIFF_SETGET_INT = 13,
 TIFF_SETGET_UINT16_PAIR = 14,
 TIFF_SETGET_C0_ASCII = 15,
 TIFF_SETGET_C0_UINT8 = 16,
 TIFF_SETGET_C0_SINT8 = 17,
 TIFF_SETGET_C0_UINT16 = 18,
 TIFF_SETGET_C0_SINT16 = 19,
 TIFF_SETGET_C0_UINT32 = 20,
 TIFF_SETGET_C0_SINT32 = 21,
 TIFF_SETGET_C0_UINT64 = 22,
 TIFF_SETGET_C0_SINT64 = 23,
 TIFF_SETGET_C0_FLOAT = 24,
 TIFF_SETGET_C0_DOUBLE = 25,
 TIFF_SETGET_C0_IFD8 = 26,
 TIFF_SETGET_C16_ASCII = 27,
 TIFF_SETGET_C16_UINT8 = 28,
 TIFF_SETGET_C16_SINT8 = 29,
 TIFF_SETGET_C16_UINT16 = 30,
 TIFF_SETGET_C16_SINT16 = 31,
 TIFF_SETGET_C16_UINT32 = 32,
 TIFF_SETGET_C16_SINT32 = 33,
 TIFF_SETGET_C16_UINT64 = 34,
 TIFF_SETGET_C16_SINT64 = 35,
 TIFF_SETGET_C16_FLOAT = 36,
 TIFF_SETGET_C16_DOUBLE = 37,
 TIFF_SETGET_C16_IFD8 = 38,
 TIFF_SETGET_C32_ASCII = 39,
 TIFF_SETGET_C32_UINT8 = 40,
 TIFF_SETGET_C32_SINT8 = 41,
 TIFF_SETGET_C32_UINT16 = 42,
 TIFF_SETGET_C32_SINT16 = 43,
 TIFF_SETGET_C32_UINT32 = 44,
 TIFF_SETGET_C32_SINT32 = 45,
 TIFF_SETGET_C32_UINT64 = 46,
 TIFF_SETGET_C32_SINT64 = 47,
 TIFF_SETGET_C32_FLOAT = 48,
 TIFF_SETGET_C32_DOUBLE = 49,
 TIFF_SETGET_C32_IFD8 = 50,
 TIFF_SETGET_OTHER = 51
} TIFFSetGetFieldType;





extern const TIFFFieldArray* _TIFFGetFields(void);
extern const TIFFFieldArray* _TIFFGetExifFields(void);
extern void _TIFFSetupFields(TIFF* tif, const TIFFFieldArray* infoarray);
extern void _TIFFPrintFieldInfo(TIFF*, FILE*);

typedef enum {
 tfiatImage,
 tfiatExif,
 tfiatOther
} TIFFFieldArrayType;

struct _TIFFFieldArray {
 TIFFFieldArrayType type;
 uint32 allocated_size;
 uint32 count;
 TIFFField* fields;
};

struct _TIFFField {
 uint32 field_tag;
 short field_readcount;
 short field_writecount;
 TIFFDataType field_type;
 uint32 reserved;
 TIFFSetGetFieldType set_field_type;
 TIFFSetGetFieldType get_field_type;
 unsigned short field_bit;
 unsigned char field_oktochange;
 unsigned char field_passcount;
 char* field_name;
 TIFFFieldArray* field_subfields;
};

extern int _TIFFMergeFields(TIFF*, const TIFFField[], uint32);
extern const TIFFField* _TIFFFindOrRegisterField(TIFF *, uint32, TIFFDataType);
extern TIFFField* _TIFFCreateAnonField(TIFF *, uint32, TIFFDataType);
# 62 "./tiffiop.h" 2
# 85 "./tiffiop.h"
typedef struct {
 uint16 tdir_tag;
 uint16 tdir_type;
 uint64 tdir_count;
 union {
  uint16 toff_short;
  uint32 toff_long;
  uint64 toff_long8;
 } tdir_offset;
} TIFFDirEntry;

typedef struct client_info {
    struct client_info *next;
    void *data;
    char *name;
} TIFFClientInfoLink;





typedef unsigned char tidataval_t;
typedef tidataval_t* tidata_t;

typedef void (*TIFFVoidMethod)(TIFF*);
typedef int (*TIFFBoolMethod)(TIFF*);
typedef int (*TIFFPreMethod)(TIFF*, uint16);
typedef int (*TIFFCodeMethod)(TIFF* tif, uint8* buf, tmsize_t size, uint16 sample);
typedef int (*TIFFSeekMethod)(TIFF*, uint32);
typedef void (*TIFFPostMethod)(TIFF* tif, uint8* buf, tmsize_t size);
typedef uint32 (*TIFFStripMethod)(TIFF*, uint32);
typedef void (*TIFFTileMethod)(TIFF*, uint32*, uint32*);

struct tiff {
 char* tif_name;
 int tif_fd;
 int tif_mode;
 uint32 tif_flags;
# 144 "./tiffiop.h"
 uint64 tif_diroff;
 uint64 tif_nextdiroff;
 uint64* tif_dirlist;
 uint16 tif_dirlistsize;
 uint16 tif_dirnumber;
 TIFFDirectory tif_dir;
 TIFFDirectory tif_customdir;
 union {
  TIFFHeaderCommon common;
  TIFFHeaderClassic classic;
  TIFFHeaderBig big;
 } tif_header;
 uint16 tif_header_size;
 uint32 tif_row;
 uint16 tif_curdir;
 uint32 tif_curstrip;
 uint64 tif_curoff;
 uint64 tif_dataoff;

 uint16 tif_nsubifd;
 uint64 tif_subifdoff;

 uint32 tif_col;
 uint32 tif_curtile;
 tmsize_t tif_tilesize;

 int tif_decodestatus;
 TIFFBoolMethod tif_fixuptags;
 TIFFBoolMethod tif_setupdecode;
 TIFFPreMethod tif_predecode;
 TIFFBoolMethod tif_setupencode;
 int tif_encodestatus;
 TIFFPreMethod tif_preencode;
 TIFFBoolMethod tif_postencode;
 TIFFCodeMethod tif_decoderow;
 TIFFCodeMethod tif_encoderow;
 TIFFCodeMethod tif_decodestrip;
 TIFFCodeMethod tif_encodestrip;
 TIFFCodeMethod tif_decodetile;
 TIFFCodeMethod tif_encodetile;
 TIFFVoidMethod tif_close;
 TIFFSeekMethod tif_seek;
 TIFFVoidMethod tif_cleanup;
 TIFFStripMethod tif_defstripsize;
 TIFFTileMethod tif_deftilesize;
 uint8* tif_data;

 tmsize_t tif_scanlinesize;
 tmsize_t tif_scanlineskew;
 uint8* tif_rawdata;
 tmsize_t tif_rawdatasize;
        tmsize_t tif_rawdataoff;
        tmsize_t tif_rawdataloaded;
 uint8* tif_rawcp;
 tmsize_t tif_rawcc;

 uint8* tif_base;
 tmsize_t tif_size;
 TIFFMapFileProc tif_mapproc;
 TIFFUnmapFileProc tif_unmapproc;

 thandle_t tif_clientdata;
 TIFFReadWriteProc tif_readproc;
 TIFFReadWriteProc tif_writeproc;
 TIFFSeekProc tif_seekproc;
 TIFFCloseProc tif_closeproc;
 TIFFSizeProc tif_sizeproc;

 TIFFPostMethod tif_postdecode;

 TIFFField** tif_fields;
 size_t tif_nfields;
 const TIFFField* tif_foundfield;
 TIFFTagMethods tif_tagmethods;
 TIFFClientInfoLink* tif_clientinfo;


 TIFFFieldArray* tif_fieldscompat;
 size_t tif_nfieldscompat;
};
# 283 "./tiffiop.h"
extern int _TIFFgetMode(const char* mode, const char* module);
extern int _TIFFNoRowEncode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoStripEncode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoTileEncode(TIFF*, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoRowDecode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoStripDecode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoTileDecode(TIFF*, uint8* pp, tmsize_t cc, uint16 s);
extern void _TIFFNoPostDecode(TIFF* tif, uint8* buf, tmsize_t cc);
extern int _TIFFNoPreCode(TIFF* tif, uint16 s);
extern int _TIFFNoSeek(TIFF* tif, uint32 off);
extern void _TIFFSwab16BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern void _TIFFSwab24BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern void _TIFFSwab32BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern void _TIFFSwab64BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern int TIFFFlushData1(TIFF* tif);
extern int TIFFDefaultDirectory(TIFF* tif);
extern void _TIFFSetDefaultCompressionState(TIFF* tif);
extern int _TIFFRewriteField(TIFF *, uint16, TIFFDataType, tmsize_t, void *);
extern int TIFFSetCompressionScheme(TIFF* tif, int scheme);
extern int TIFFSetDefaultCompressionState(TIFF* tif);
extern uint32 _TIFFDefaultStripSize(TIFF* tif, uint32 s);
extern void _TIFFDefaultTileSize(TIFF* tif, uint32* tw, uint32* th);
extern int _TIFFDataSize(TIFFDataType type);

extern void _TIFFsetByteArray(void**, void*, uint32);
extern void _TIFFsetString(char**, char*);
extern void _TIFFsetShortArray(uint16**, uint16*, uint32);
extern void _TIFFsetLongArray(uint32**, uint32*, uint32);
extern void _TIFFsetFloatArray(float**, float*, uint32);
extern void _TIFFsetDoubleArray(double**, double*, uint32);

extern void _TIFFprintAscii(FILE*, const char*);
extern void _TIFFprintAsciiTag(FILE*, const char*, const char*);

extern TIFFErrorHandler _TIFFwarningHandler;
extern TIFFErrorHandler _TIFFerrorHandler;
extern TIFFErrorHandlerExt _TIFFwarningHandlerExt;
extern TIFFErrorHandlerExt _TIFFerrorHandlerExt;

extern uint32 _TIFFMultiply32(TIFF*, uint32, uint32, const char*);
extern uint64 _TIFFMultiply64(TIFF*, uint64, uint64, const char*);
extern void* _TIFFCheckMalloc(TIFF*, tmsize_t, tmsize_t, const char*);
extern void* _TIFFCheckRealloc(TIFF*, void*, tmsize_t, tmsize_t, const char*);

extern double _TIFFUInt64ToDouble(uint64);
extern float _TIFFUInt64ToFloat(uint64);

extern int TIFFInitDumpMode(TIFF*, int);

extern int TIFFInitPackBits(TIFF*, int);


extern int TIFFInitCCITTRLE(TIFF*, int), TIFFInitCCITTRLEW(TIFF*, int);
extern int TIFFInitCCITTFax3(TIFF*, int), TIFFInitCCITTFax4(TIFF*, int);


extern int TIFFInitThunderScan(TIFF*, int);


extern int TIFFInitNeXT(TIFF*, int);


extern int TIFFInitLZW(TIFF*, int);


extern int TIFFInitOJPEG(TIFF*, int);


extern int TIFFInitJPEG(TIFF*, int);





extern int TIFFInitZIP(TIFF*, int);


extern int TIFFInitPixarLog(TIFF*, int);


extern int TIFFInitSGILog(TIFF*, int);







extern TIFFCodec _TIFFBuiltinCODECS[];
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c" 2
# 55 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
enum TIFFReadDirEntryErr {
 TIFFReadDirEntryErrOk = 0,
 TIFFReadDirEntryErrCount = 1,
 TIFFReadDirEntryErrType = 2,
 TIFFReadDirEntryErrIo = 3,
 TIFFReadDirEntryErrRange = 4,
 TIFFReadDirEntryErrPsdif = 5,
 TIFFReadDirEntryErrSizesan = 6,
 TIFFReadDirEntryErrAlloc = 7,
};

static enum TIFFReadDirEntryErr TIFFReadDirEntryByte(TIFF* tif, TIFFDirEntry* direntry, uint8* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryShort(TIFF* tif, TIFFDirEntry* direntry, uint16* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryLong(TIFF* tif, TIFFDirEntry* direntry, uint32* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryLong8(TIFF* tif, TIFFDirEntry* direntry, uint64* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryFloat(TIFF* tif, TIFFDirEntry* direntry, float* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryDouble(TIFF* tif, TIFFDirEntry* direntry, double* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryIfd8(TIFF* tif, TIFFDirEntry* direntry, uint64* value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryArray(TIFF* tif, TIFFDirEntry* direntry, uint32* count, uint32 desttypesize, void** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryByteArray(TIFF* tif, TIFFDirEntry* direntry, uint8** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntrySbyteArray(TIFF* tif, TIFFDirEntry* direntry, int8** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryShortArray(TIFF* tif, TIFFDirEntry* direntry, uint16** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntrySshortArray(TIFF* tif, TIFFDirEntry* direntry, int16** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryLongArray(TIFF* tif, TIFFDirEntry* direntry, uint32** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntrySlongArray(TIFF* tif, TIFFDirEntry* direntry, int32** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryLong8Array(TIFF* tif, TIFFDirEntry* direntry, uint64** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntrySlong8Array(TIFF* tif, TIFFDirEntry* direntry, int64** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryFloatArray(TIFF* tif, TIFFDirEntry* direntry, float** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryDoubleArray(TIFF* tif, TIFFDirEntry* direntry, double** value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryIfd8Array(TIFF* tif, TIFFDirEntry* direntry, uint64** value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryPersampleShort(TIFF* tif, TIFFDirEntry* direntry, uint16* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryPersampleDouble(TIFF* tif, TIFFDirEntry* direntry, double* value);

static void TIFFReadDirEntryCheckedByte(TIFF* tif, TIFFDirEntry* direntry, uint8* value);
static void TIFFReadDirEntryCheckedSbyte(TIFF* tif, TIFFDirEntry* direntry, int8* value);
static void TIFFReadDirEntryCheckedShort(TIFF* tif, TIFFDirEntry* direntry, uint16* value);
static void TIFFReadDirEntryCheckedSshort(TIFF* tif, TIFFDirEntry* direntry, int16* value);
static void TIFFReadDirEntryCheckedLong(TIFF* tif, TIFFDirEntry* direntry, uint32* value);
static void TIFFReadDirEntryCheckedSlong(TIFF* tif, TIFFDirEntry* direntry, int32* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedLong8(TIFF* tif, TIFFDirEntry* direntry, uint64* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedSlong8(TIFF* tif, TIFFDirEntry* direntry, int64* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedRational(TIFF* tif, TIFFDirEntry* direntry, double* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedSrational(TIFF* tif, TIFFDirEntry* direntry, double* value);
static void TIFFReadDirEntryCheckedFloat(TIFF* tif, TIFFDirEntry* direntry, float* value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedDouble(TIFF* tif, TIFFDirEntry* direntry, double* value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSbyte(int8 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteShort(uint16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSshort(int16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteLong(uint32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSlong(int32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteLong8(uint64 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSlong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteByte(uint8 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteShort(uint16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteSshort(int16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteLong(uint32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteSlong(int32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteLong8(uint64 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteSlong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSbyte(int8 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSshort(int16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortLong(uint32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSlong(int32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortLong8(uint64 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSlong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortShort(uint16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortLong(uint32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortSlong(int32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortLong8(uint64 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortSlong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSbyte(int8 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSshort(int16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSlong(int32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongLong8(uint64 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSlong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSlongLong(uint32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSlongLong8(uint64 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSlongSlong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLong8Sbyte(int8 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLong8Sshort(int16 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLong8Slong(int32 value);
static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLong8Slong8(int64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSlong8Long8(uint64 value);

static enum TIFFReadDirEntryErr TIFFReadDirEntryData(TIFF* tif, uint64 offset, tmsize_t size, void* dest);
static void TIFFReadDirEntryOutputErr(TIFF* tif, enum TIFFReadDirEntryErr err, const char* module, const char* tagname, int recover);

static void TIFFReadDirectoryCheckOrder(TIFF* tif, TIFFDirEntry* dir, uint16 dircount);
static TIFFDirEntry* TIFFReadDirectoryFindEntry(TIFF* tif, TIFFDirEntry* dir, uint16 dircount, uint16 tagid);
static void TIFFReadDirectoryFindFieldInfo(TIFF* tif, uint16 tagid, uint32* fii);

static int EstimateStripByteCounts(TIFF* tif, TIFFDirEntry* dir, uint16 dircount);
static void MissingRequired(TIFF*, const char*);
static int TIFFCheckDirOffset(TIFF* tif, uint64 diroff);
static int CheckDirCount(TIFF*, TIFFDirEntry*, uint32);
static uint16 TIFFFetchDirectory(TIFF* tif, uint64 diroff, TIFFDirEntry** pdir, uint64* nextdiroff);
static int TIFFFetchNormalTag(TIFF*, TIFFDirEntry*, int recover);
static int TIFFFetchStripThing(TIFF* tif, TIFFDirEntry* dir, uint32 nstrips, uint64** lpp);
static int TIFFFetchSubjectDistance(TIFF*, TIFFDirEntry*);
static void ChopUpSingleUncompressedStrip(TIFF*);
static uint64 TIFFReadUInt64(const uint8 *value);

typedef union _UInt64Aligned_t
{
        double d;
 uint64 l;
 uint32 i[2];
 uint16 s[4];
 uint8 c[8];
} UInt64Aligned_t;




static uint64 TIFFReadUInt64(const uint8 *value)
{
 UInt64Aligned_t result;

 result.c[0]=value[0];
 result.c[1]=value[1];
 result.c[2]=value[2];
 result.c[3]=value[3];
 result.c[4]=value[4];
 result.c[5]=value[5];
 result.c[6]=value[6];
 result.c[7]=value[7];

 return result.l;
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryByte(TIFF* tif, TIFFDirEntry* direntry, uint8* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   TIFFReadDirEntryCheckedByte(tif,direntry,value);
   return(TIFFReadDirEntryErrOk);
  case TIFF_SBYTE:
   {
    int8 m;
    TIFFReadDirEntryCheckedSbyte(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeByteSbyte(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SHORT:
   {
    uint16 m;
    TIFFReadDirEntryCheckedShort(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeByteShort(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SSHORT:
   {
    int16 m;
    TIFFReadDirEntryCheckedSshort(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeByteSshort(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG:
   {
    uint32 m;
    TIFFReadDirEntryCheckedLong(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeByteLong(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG:
   {
    int32 m;
    TIFFReadDirEntryCheckedSlong(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeByteSlong(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
   {
    uint64 m;
    err=TIFFReadDirEntryCheckedLong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeByteLong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG8:
   {
    int64 m;
    err=TIFFReadDirEntryCheckedSlong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeByteSlong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint8)m;
    return(TIFFReadDirEntryErrOk);
   }
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryShort(TIFF* tif, TIFFDirEntry* direntry, uint16* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8 m;
    TIFFReadDirEntryCheckedByte(tif,direntry,&m);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SBYTE:
   {
    int8 m;
    TIFFReadDirEntryCheckedSbyte(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeShortSbyte(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SHORT:
   TIFFReadDirEntryCheckedShort(tif,direntry,value);
   return(TIFFReadDirEntryErrOk);
  case TIFF_SSHORT:
   {
    int16 m;
    TIFFReadDirEntryCheckedSshort(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeShortSshort(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG:
   {
    uint32 m;
    TIFFReadDirEntryCheckedLong(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeShortLong(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG:
   {
    int32 m;
    TIFFReadDirEntryCheckedSlong(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeShortSlong(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
   {
    uint64 m;
    err=TIFFReadDirEntryCheckedLong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeShortLong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG8:
   {
    int64 m;
    err=TIFFReadDirEntryCheckedSlong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeShortSlong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint16)m;
    return(TIFFReadDirEntryErrOk);
   }
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryLong(TIFF* tif, TIFFDirEntry* direntry, uint32* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8 m;
    TIFFReadDirEntryCheckedByte(tif,direntry,&m);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SBYTE:
   {
    int8 m;
    TIFFReadDirEntryCheckedSbyte(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeLongSbyte(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SHORT:
   {
    uint16 m;
    TIFFReadDirEntryCheckedShort(tif,direntry,&m);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SSHORT:
   {
    int16 m;
    TIFFReadDirEntryCheckedSshort(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeLongSshort(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG:
   TIFFReadDirEntryCheckedLong(tif,direntry,value);
   return(TIFFReadDirEntryErrOk);
  case TIFF_SLONG:
   {
    int32 m;
    TIFFReadDirEntryCheckedSlong(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeLongSlong(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
   {
    uint64 m;
    err=TIFFReadDirEntryCheckedLong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeLongLong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG8:
   {
    int64 m;
    err=TIFFReadDirEntryCheckedSlong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeLongSlong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint32)m;
    return(TIFFReadDirEntryErrOk);
   }
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryLong8(TIFF* tif, TIFFDirEntry* direntry, uint64* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8 m;
    TIFFReadDirEntryCheckedByte(tif,direntry,&m);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SBYTE:
   {
    int8 m;
    TIFFReadDirEntryCheckedSbyte(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeLong8Sbyte(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SHORT:
   {
    uint16 m;
    TIFFReadDirEntryCheckedShort(tif,direntry,&m);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SSHORT:
   {
    int16 m;
    TIFFReadDirEntryCheckedSshort(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeLong8Sshort(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG:
   {
    uint32 m;
    TIFFReadDirEntryCheckedLong(tif,direntry,&m);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG:
   {
    int32 m;
    TIFFReadDirEntryCheckedSlong(tif,direntry,&m);
    err=TIFFReadDirEntryCheckRangeLong8Slong(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
   err=TIFFReadDirEntryCheckedLong8(tif,direntry,value);
   return(err);
  case TIFF_SLONG8:
   {
    int64 m;
    err=TIFFReadDirEntryCheckedSlong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    err=TIFFReadDirEntryCheckRangeLong8Slong8(m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryFloat(TIFF* tif, TIFFDirEntry* direntry, float* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8 m;
    TIFFReadDirEntryCheckedByte(tif,direntry,&m);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SBYTE:
   {
    int8 m;
    TIFFReadDirEntryCheckedSbyte(tif,direntry,&m);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SHORT:
   {
    uint16 m;
    TIFFReadDirEntryCheckedShort(tif,direntry,&m);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SSHORT:
   {
    int16 m;
    TIFFReadDirEntryCheckedSshort(tif,direntry,&m);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG:
   {
    uint32 m;
    TIFFReadDirEntryCheckedLong(tif,direntry,&m);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG:
   {
    int32 m;
    TIFFReadDirEntryCheckedSlong(tif,direntry,&m);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
   {
    uint64 m;
    err=TIFFReadDirEntryCheckedLong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG8:
   {
    int64 m;
    err=TIFFReadDirEntryCheckedSlong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_RATIONAL:
   {
    double m;
    err=TIFFReadDirEntryCheckedRational(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SRATIONAL:
   {
    double m;
    err=TIFFReadDirEntryCheckedSrational(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_FLOAT:
   TIFFReadDirEntryCheckedFloat(tif,direntry,value);
   return(TIFFReadDirEntryErrOk);
  case TIFF_DOUBLE:
   {
    double m;
    err=TIFFReadDirEntryCheckedDouble(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(float)m;
    return(TIFFReadDirEntryErrOk);
   }
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryDouble(TIFF* tif, TIFFDirEntry* direntry, double* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8 m;
    TIFFReadDirEntryCheckedByte(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SBYTE:
   {
    int8 m;
    TIFFReadDirEntryCheckedSbyte(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SHORT:
   {
    uint16 m;
    TIFFReadDirEntryCheckedShort(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SSHORT:
   {
    int16 m;
    TIFFReadDirEntryCheckedSshort(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG:
   {
    uint32 m;
    TIFFReadDirEntryCheckedLong(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG:
   {
    int32 m;
    TIFFReadDirEntryCheckedSlong(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
   {
    uint64 m;
    err=TIFFReadDirEntryCheckedLong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
# 696 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
    *value = (double)m;

    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG8:
   {
    int64 m;
    err=TIFFReadDirEntryCheckedSlong8(tif,direntry,&m);
    if (err!=TIFFReadDirEntryErrOk)
     return(err);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_RATIONAL:
   err=TIFFReadDirEntryCheckedRational(tif,direntry,value);
   return(err);
  case TIFF_SRATIONAL:
   err=TIFFReadDirEntryCheckedSrational(tif,direntry,value);
   return(err);
  case TIFF_FLOAT:
   {
    float m;
    TIFFReadDirEntryCheckedFloat(tif,direntry,&m);
    *value=(double)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_DOUBLE:
   err=TIFFReadDirEntryCheckedDouble(tif,direntry,value);
   return(err);
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryIfd8(TIFF* tif, TIFFDirEntry* direntry, uint64* value)
{
 enum TIFFReadDirEntryErr err;
 if (direntry->tdir_count!=1)
  return(TIFFReadDirEntryErrCount);
 switch (direntry->tdir_type)
 {
  case TIFF_LONG:
  case TIFF_IFD:
   {
    uint32 m;
    TIFFReadDirEntryCheckedLong(tif,direntry,&m);
    *value=(uint64)m;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_LONG8:
  case TIFF_IFD8:
   err=TIFFReadDirEntryCheckedLong8(tif,direntry,value);
   return(err);
  default:
   return(TIFFReadDirEntryErrType);
 }
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryArray(TIFF* tif, TIFFDirEntry* direntry, uint32* count, uint32 desttypesize, void** value)
{
 int typesize;
 uint32 datasize;
 void* data;
 typesize=TIFFDataWidth(direntry->tdir_type);
 if ((direntry->tdir_count==0)||(typesize==0))
 {
  *value=0;
  return(TIFFReadDirEntryErrOk);
 }
        (void) desttypesize;






 if ((uint64)(2147483647/typesize)<direntry->tdir_count)
  return(TIFFReadDirEntryErrSizesan);
 if ((uint64)(2147483647/desttypesize)<direntry->tdir_count)
  return(TIFFReadDirEntryErrSizesan);

 *count=(uint32)direntry->tdir_count;
 datasize=(*count)*typesize;
 (((tmsize_t)datasize>0) ? (void) (0) : __assert_fail ("(tmsize_t)datasize>0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 779, __PRETTY_FUNCTION__));
 data=_TIFFCheckMalloc(tif, *count, typesize, "ReadDirEntryArray");
 if (data==0)
  return(TIFFReadDirEntryErrAlloc);
 if (!(tif->tif_flags&0x80000))
 {
  if (datasize<=4)
   _TIFFmemcpy(data,&direntry->tdir_offset,datasize);
  else
  {
   enum TIFFReadDirEntryErr err;
   uint32 offset = direntry->tdir_offset.toff_long;
   if (tif->tif_flags&0x00080)
    TIFFSwabLong(&offset);
   err=TIFFReadDirEntryData(tif,(uint64)offset,(tmsize_t)datasize,data);
   if (err!=TIFFReadDirEntryErrOk)
   {
    _TIFFfree(data);
    return(err);
   }
  }
 }
 else
 {
  if (datasize<=8)
   _TIFFmemcpy(data,&direntry->tdir_offset,datasize);
  else
  {
   enum TIFFReadDirEntryErr err;
   uint64 offset = direntry->tdir_offset.toff_long8;
   if (tif->tif_flags&0x00080)
    TIFFSwabLong8(&offset);
   err=TIFFReadDirEntryData(tif,offset,(tmsize_t)datasize,data);
   if (err!=TIFFReadDirEntryErrOk)
   {
    _TIFFfree(data);
    return(err);
   }
  }
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryByteArray(TIFF* tif, TIFFDirEntry* direntry, uint8** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 uint8* data;
 switch (direntry->tdir_type)
 {
  case TIFF_ASCII:
  case TIFF_UNDEFINED:
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,1,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_ASCII:
  case TIFF_UNDEFINED:
  case TIFF_BYTE:
   *value=(uint8*)origdata;
   return(TIFFReadDirEntryErrOk);
  case TIFF_SBYTE:
   {
    int8* m;
    uint32 n;
    m=(int8*)origdata;
    for (n=0; n<count; n++)
    {
     err=TIFFReadDirEntryCheckRangeByteSbyte(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(uint8*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
 }
 data=(uint8*)_TIFFmalloc(count);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_SHORT:
   {
    uint16* ma;
    uint8* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     err=TIFFReadDirEntryCheckRangeByteShort(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint8)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    uint8* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     err=TIFFReadDirEntryCheckRangeByteSshort(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint8)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    uint8* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     err=TIFFReadDirEntryCheckRangeByteLong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint8)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    uint8* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     err=TIFFReadDirEntryCheckRangeByteSlong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint8)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    uint8* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
     err=TIFFReadDirEntryCheckRangeByteLong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint8)(*ma++);
    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    uint8* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     err=TIFFReadDirEntryCheckRangeByteSlong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint8)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntrySbyteArray(TIFF* tif, TIFFDirEntry* direntry, int8** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 int8* data;
 switch (direntry->tdir_type)
 {
  case TIFF_UNDEFINED:
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,1,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_UNDEFINED:
  case TIFF_BYTE:
   {
    uint8* m;
    uint32 n;
    m=(uint8*)origdata;
    for (n=0; n<count; n++)
    {
     err=TIFFReadDirEntryCheckRangeSbyteByte(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(int8*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SBYTE:
   *value=(int8*)origdata;
   return(TIFFReadDirEntryErrOk);
 }
 data=(int8*)_TIFFmalloc(count);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_SHORT:
   {
    uint16* ma;
    int8* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     err=TIFFReadDirEntryCheckRangeSbyteShort(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int8)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    int8* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     err=TIFFReadDirEntryCheckRangeSbyteSshort(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int8)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    int8* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     err=TIFFReadDirEntryCheckRangeSbyteLong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int8)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    int8* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     err=TIFFReadDirEntryCheckRangeSbyteSlong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int8)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    int8* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
     err=TIFFReadDirEntryCheckRangeSbyteLong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int8)(*ma++);
    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    int8* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     err=TIFFReadDirEntryCheckRangeSbyteSlong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int8)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryShortArray(TIFF* tif, TIFFDirEntry* direntry, uint16** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 uint16* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,2,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_SHORT:
   *value=(uint16*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfShort(*value,count);
   return(TIFFReadDirEntryErrOk);
  case TIFF_SSHORT:
   {
    int16* m;
    uint32 n;
    m=(int16*)origdata;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)m);
     err=TIFFReadDirEntryCheckRangeShortSshort(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(uint16*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
 }
 data=(uint16*)_TIFFmalloc(count*2);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    uint16* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(uint16)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    uint16* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     err=TIFFReadDirEntryCheckRangeShortSbyte(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint16)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    uint16* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     err=TIFFReadDirEntryCheckRangeShortLong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint16)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    uint16* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     err=TIFFReadDirEntryCheckRangeShortSlong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint16)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    uint16* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
     err=TIFFReadDirEntryCheckRangeShortLong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint16)(*ma++);
    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    uint16* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     err=TIFFReadDirEntryCheckRangeShortSlong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint16)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntrySshortArray(TIFF* tif, TIFFDirEntry* direntry, int16** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 int16* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,2,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_SHORT:
   {
    uint16* m;
    uint32 n;
    m=(uint16*)origdata;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(m);
     err=TIFFReadDirEntryCheckRangeSshortShort(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(int16*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SSHORT:
   *value=(int16*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfShort((uint16*)(*value),count);
   return(TIFFReadDirEntryErrOk);
 }
 data=(int16*)_TIFFmalloc(count*2);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    int16* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(int16)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    int16* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(int16)(*ma++);
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    int16* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     err=TIFFReadDirEntryCheckRangeSshortLong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int16)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    int16* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     err=TIFFReadDirEntryCheckRangeSshortSlong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int16)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    int16* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
     err=TIFFReadDirEntryCheckRangeSshortLong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int16)(*ma++);
    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    int16* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     err=TIFFReadDirEntryCheckRangeSshortSlong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int16)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryLongArray(TIFF* tif, TIFFDirEntry* direntry, uint32** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 uint32* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,4,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_LONG:
   *value=(uint32*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong(*value,count);
   return(TIFFReadDirEntryErrOk);
  case TIFF_SLONG:
   {
    int32* m;
    uint32 n;
    m=(int32*)origdata;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)m);
     err=TIFFReadDirEntryCheckRangeLongSlong(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(uint32*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
 }
 data=(uint32*)_TIFFmalloc(count*4);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    uint32* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(uint32)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    uint32* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     err=TIFFReadDirEntryCheckRangeLongSbyte(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint32)(*ma++);
    }
   }
   break;
  case TIFF_SHORT:
   {
    uint16* ma;
    uint32* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     *mb++=(uint32)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    uint32* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     err=TIFFReadDirEntryCheckRangeLongSshort(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint32)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    uint32* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
     err=TIFFReadDirEntryCheckRangeLongLong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint32)(*ma++);
    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    uint32* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     err=TIFFReadDirEntryCheckRangeLongSlong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint32)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntrySlongArray(TIFF* tif, TIFFDirEntry* direntry, int32** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 int32* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,4,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_LONG:
   {
    uint32* m;
    uint32 n;
    m=(uint32*)origdata;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)m);
     err=TIFFReadDirEntryCheckRangeSlongLong(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(int32*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG:
   *value=(int32*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong((uint32*)(*value),count);
   return(TIFFReadDirEntryErrOk);
 }
 data=(int32*)_TIFFmalloc(count*4);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    int32* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(int32)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    int32* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(int32)(*ma++);
   }
   break;
  case TIFF_SHORT:
   {
    uint16* ma;
    int32* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     *mb++=(int32)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    int32* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     *mb++=(int32)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    int32* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
     err=TIFFReadDirEntryCheckRangeSlongLong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int32)(*ma++);
    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    int32* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     err=TIFFReadDirEntryCheckRangeSlongSlong8(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(int32)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryLong8Array(TIFF* tif, TIFFDirEntry* direntry, uint64** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 uint64* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,8,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_LONG8:
   *value=(uint64*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong8(*value,count);
   return(TIFFReadDirEntryErrOk);
  case TIFF_SLONG8:
   {
    int64* m;
    uint32 n;
    m=(int64*)origdata;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)m);
     err=TIFFReadDirEntryCheckRangeLong8Slong8(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(uint64*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
 }
 data=(uint64*)_TIFFmalloc(count*8);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    uint64* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(uint64)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    uint64* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     err=TIFFReadDirEntryCheckRangeLong8Sbyte(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint64)(*ma++);
    }
   }
   break;
  case TIFF_SHORT:
   {
    uint16* ma;
    uint64* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     *mb++=(uint64)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    uint64* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     err=TIFFReadDirEntryCheckRangeLong8Sshort(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint64)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    uint64* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     *mb++=(uint64)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    uint64* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     err=TIFFReadDirEntryCheckRangeLong8Slong(*ma);
     if (err!=TIFFReadDirEntryErrOk)
      break;
     *mb++=(uint64)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntrySlong8Array(TIFF* tif, TIFFDirEntry* direntry, int64** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 int64* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,8,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_LONG8:
   {
    uint64* m;
    uint32 n;
    m=(uint64*)origdata;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(m);
     err=TIFFReadDirEntryCheckRangeSlong8Long8(*m);
     if (err!=TIFFReadDirEntryErrOk)
     {
      _TIFFfree(origdata);
      return(err);
     }
     m++;
    }
    *value=(int64*)origdata;
    return(TIFFReadDirEntryErrOk);
   }
  case TIFF_SLONG8:
   *value=(int64*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong8((uint64*)(*value),count);
   return(TIFFReadDirEntryErrOk);
 }
 data=(int64*)_TIFFmalloc(count*8);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    int64* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(int64)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    int64* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(int64)(*ma++);
   }
   break;
  case TIFF_SHORT:
   {
    uint16* ma;
    int64* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     *mb++=(int64)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    int64* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     *mb++=(int64)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    int64* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     *mb++=(int64)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    int64* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     *mb++=(int64)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryFloatArray(TIFF* tif, TIFFDirEntry* direntry, float** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 float* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
  case TIFF_FLOAT:
  case TIFF_DOUBLE:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,4,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_FLOAT:
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong((uint32*)origdata,count);
                                                        ;
   *value=(float*)origdata;
   return(TIFFReadDirEntryErrOk);
 }
 data=(float*)_TIFFmalloc(count*sizeof(float));
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    float* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(float)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    float* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(float)(*ma++);
   }
   break;
  case TIFF_SHORT:
   {
    uint16* ma;
    float* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     *mb++=(float)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    float* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     *mb++=(float)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    float* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     *mb++=(float)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    float* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     *mb++=(float)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    float* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
# 2321 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
     *mb++ = (float)(*ma++);

    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    float* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     *mb++=(float)(*ma++);
    }
   }
   break;
  case TIFF_RATIONAL:
   {
    uint32* ma;
    uint32 maa;
    uint32 mab;
    float* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     maa=*ma++;
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     mab=*ma++;
     if (mab==0)
      *mb++=0.0;
     else
      *mb++=(float)maa/(float)mab;
    }
   }
   break;
  case TIFF_SRATIONAL:
   {
    uint32* ma;
    int32 maa;
    uint32 mab;
    float* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     maa=*(int32*)ma;
     ma++;
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     mab=*ma++;
     if (mab==0)
      *mb++=0.0;
     else
      *mb++=(float)maa/(float)mab;
    }
   }
   break;
  case TIFF_DOUBLE:
   {
    double* ma;
    float* mb;
    uint32 n;
    if (tif->tif_flags&0x00080)
     TIFFSwabArrayOfLong8((uint64*)origdata,count);
                                                          ;
    ma=(double*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(float)(*ma++);
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryDoubleArray(TIFF* tif, TIFFDirEntry* direntry, double** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 double* data;
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_SHORT:
  case TIFF_SSHORT:
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_LONG8:
  case TIFF_SLONG8:
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
  case TIFF_FLOAT:
  case TIFF_DOUBLE:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,8,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_DOUBLE:
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong8((uint64*)origdata,count);
                                                         ;
   *value=(double*)origdata;
   return(TIFFReadDirEntryErrOk);
 }
 data=(double*)_TIFFmalloc(count*sizeof(double));
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_BYTE:
   {
    uint8* ma;
    double* mb;
    uint32 n;
    ma=(uint8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(double)(*ma++);
   }
   break;
  case TIFF_SBYTE:
   {
    int8* ma;
    double* mb;
    uint32 n;
    ma=(int8*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(double)(*ma++);
   }
   break;
  case TIFF_SHORT:
   {
    uint16* ma;
    double* mb;
    uint32 n;
    ma=(uint16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort(ma);
     *mb++=(double)(*ma++);
    }
   }
   break;
  case TIFF_SSHORT:
   {
    int16* ma;
    double* mb;
    uint32 n;
    ma=(int16*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabShort((uint16*)ma);
     *mb++=(double)(*ma++);
    }
   }
   break;
  case TIFF_LONG:
   {
    uint32* ma;
    double* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     *mb++=(double)(*ma++);
    }
   }
   break;
  case TIFF_SLONG:
   {
    int32* ma;
    double* mb;
    uint32 n;
    ma=(int32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong((uint32*)ma);
     *mb++=(double)(*ma++);
    }
   }
   break;
  case TIFF_LONG8:
   {
    uint64* ma;
    double* mb;
    uint32 n;
    ma=(uint64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8(ma);
# 2564 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
     *mb++ = (double)(*ma++);

    }
   }
   break;
  case TIFF_SLONG8:
   {
    int64* ma;
    double* mb;
    uint32 n;
    ma=(int64*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong8((uint64*)ma);
     *mb++=(double)(*ma++);
    }
   }
   break;
  case TIFF_RATIONAL:
   {
    uint32* ma;
    uint32 maa;
    uint32 mab;
    double* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     maa=*ma++;
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     mab=*ma++;
     if (mab==0)
      *mb++=0.0;
     else
      *mb++=(double)maa/(double)mab;
    }
   }
   break;
  case TIFF_SRATIONAL:
   {
    uint32* ma;
    int32 maa;
    uint32 mab;
    double* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     maa=*(int32*)ma;
     ma++;
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     mab=*ma++;
     if (mab==0)
      *mb++=0.0;
     else
      *mb++=(double)maa/(double)mab;
    }
   }
   break;
  case TIFF_FLOAT:
   {
    float* ma;
    double* mb;
    uint32 n;
    if (tif->tif_flags&0x00080)
     TIFFSwabArrayOfLong((uint32*)origdata,count);
                                                        ;
    ma=(float*)origdata;
    mb=data;
    for (n=0; n<count; n++)
     *mb++=(double)(*ma++);
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryIfd8Array(TIFF* tif, TIFFDirEntry* direntry, uint64** value)
{
 enum TIFFReadDirEntryErr err;
 uint32 count;
 void* origdata;
 uint64* data;
 switch (direntry->tdir_type)
 {
  case TIFF_LONG:
  case TIFF_LONG8:
  case TIFF_IFD:
  case TIFF_IFD8:
   break;
  default:
   return(TIFFReadDirEntryErrType);
 }
 err=TIFFReadDirEntryArray(tif,direntry,&count,8,&origdata);
 if ((err!=TIFFReadDirEntryErrOk)||(origdata==0))
 {
  *value=0;
  return(err);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_LONG8:
  case TIFF_IFD8:
   *value=(uint64*)origdata;
   if (tif->tif_flags&0x00080)
    TIFFSwabArrayOfLong8(*value,count);
   return(TIFFReadDirEntryErrOk);
 }
 data=(uint64*)_TIFFmalloc(count*8);
 if (data==0)
 {
  _TIFFfree(origdata);
  return(TIFFReadDirEntryErrAlloc);
 }
 switch (direntry->tdir_type)
 {
  case TIFF_LONG:
  case TIFF_IFD:
   {
    uint32* ma;
    uint64* mb;
    uint32 n;
    ma=(uint32*)origdata;
    mb=data;
    for (n=0; n<count; n++)
    {
     if (tif->tif_flags&0x00080)
      TIFFSwabLong(ma);
     *mb++=(uint64)(*ma++);
    }
   }
   break;
 }
 _TIFFfree(origdata);
 if (err!=TIFFReadDirEntryErrOk)
 {
  _TIFFfree(data);
  return(err);
 }
 *value=data;
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryPersampleShort(TIFF* tif, TIFFDirEntry* direntry, uint16* value)
{
 enum TIFFReadDirEntryErr err;
 uint16* m;
 uint16* na;
 uint16 nb;
 if (direntry->tdir_count<(uint64)tif->tif_dir.td_samplesperpixel)
  return(TIFFReadDirEntryErrCount);
 err=TIFFReadDirEntryShortArray(tif,direntry,&m);
 if (err!=TIFFReadDirEntryErrOk)
  return(err);
 na=m;
 nb=tif->tif_dir.td_samplesperpixel;
 *value=*na++;
 nb--;
 while (nb>0)
 {
  if (*na++!=*value)
  {
   err=TIFFReadDirEntryErrPsdif;
   break;
  }
  nb--;
 }
 _TIFFfree(m);
 return(err);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryPersampleDouble(TIFF* tif, TIFFDirEntry* direntry, double* value)
{
 enum TIFFReadDirEntryErr err;
 double* m;
 double* na;
 uint16 nb;
 if (direntry->tdir_count<(uint64)tif->tif_dir.td_samplesperpixel)
  return(TIFFReadDirEntryErrCount);
 err=TIFFReadDirEntryDoubleArray(tif,direntry,&m);
 if (err!=TIFFReadDirEntryErrOk)
  return(err);
 na=m;
 nb=tif->tif_dir.td_samplesperpixel;
 *value=*na++;
 nb--;
 while (nb>0)
 {
  if (*na++!=*value)
  {
   err=TIFFReadDirEntryErrPsdif;
   break;
  }
  nb--;
 }
 _TIFFfree(m);
 return(err);
}

static void TIFFReadDirEntryCheckedByte(TIFF* tif, TIFFDirEntry* direntry, uint8* value)
{
 (void) tif;
 *value=*(uint8*)(&direntry->tdir_offset);
}

static void TIFFReadDirEntryCheckedSbyte(TIFF* tif, TIFFDirEntry* direntry, int8* value)
{
 (void) tif;
 *value=*(int8*)(&direntry->tdir_offset);
}

static void TIFFReadDirEntryCheckedShort(TIFF* tif, TIFFDirEntry* direntry, uint16* value)
{
 *value = direntry->tdir_offset.toff_short;

 if (tif->tif_flags&0x00080)
  TIFFSwabShort(value);
}

static void TIFFReadDirEntryCheckedSshort(TIFF* tif, TIFFDirEntry* direntry, int16* value)
{
 *value=*(int16*)(&direntry->tdir_offset);
 if (tif->tif_flags&0x00080)
  TIFFSwabShort((uint16*)value);
}

static void TIFFReadDirEntryCheckedLong(TIFF* tif, TIFFDirEntry* direntry, uint32* value)
{
 *value=*(uint32*)(&direntry->tdir_offset);
 if (tif->tif_flags&0x00080)
  TIFFSwabLong(value);
}

static void TIFFReadDirEntryCheckedSlong(TIFF* tif, TIFFDirEntry* direntry, int32* value)
{
 *value=*(int32*)(&direntry->tdir_offset);
 if (tif->tif_flags&0x00080)
  TIFFSwabLong((uint32*)value);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedLong8(TIFF* tif, TIFFDirEntry* direntry, uint64* value)
{
 if (!(tif->tif_flags&0x80000))
 {
  enum TIFFReadDirEntryErr err;
  uint32 offset = direntry->tdir_offset.toff_long;
  if (tif->tif_flags&0x00080)
   TIFFSwabLong(&offset);
  err=TIFFReadDirEntryData(tif,offset,8,value);
  if (err!=TIFFReadDirEntryErrOk)
   return(err);
 }
 else
  *value = direntry->tdir_offset.toff_long8;
 if (tif->tif_flags&0x00080)
  TIFFSwabLong8(value);
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedSlong8(TIFF* tif, TIFFDirEntry* direntry, int64* value)
{
 if (!(tif->tif_flags&0x80000))
 {
  enum TIFFReadDirEntryErr err;
  uint32 offset = direntry->tdir_offset.toff_long;
  if (tif->tif_flags&0x00080)
   TIFFSwabLong(&offset);
  err=TIFFReadDirEntryData(tif,offset,8,value);
  if (err!=TIFFReadDirEntryErrOk)
   return(err);
 }
 else
  *value=*(int64*)(&direntry->tdir_offset);
 if (tif->tif_flags&0x00080)
  TIFFSwabLong8((uint64*)value);
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedRational(TIFF* tif, TIFFDirEntry* direntry, double* value)
{
 UInt64Aligned_t m;

 ((sizeof(double)==8) ? (void) (0) : __assert_fail ("sizeof(double)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2863, __PRETTY_FUNCTION__));
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2864, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2865, __PRETTY_FUNCTION__));
 if (!(tif->tif_flags&0x80000))
 {
  enum TIFFReadDirEntryErr err;
  uint32 offset = direntry->tdir_offset.toff_long;
  if (tif->tif_flags&0x00080)
   TIFFSwabLong(&offset);
  err=TIFFReadDirEntryData(tif,offset,8,m.i);
  if (err!=TIFFReadDirEntryErrOk)
   return(err);
 }
 else
  m.l = direntry->tdir_offset.toff_long8;
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong(m.i,2);
 if (m.i[0]==0)
  *value=0.0;
 else
  *value=(double)m.i[0]/(double)m.i[1];
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedSrational(TIFF* tif, TIFFDirEntry* direntry, double* value)
{
 UInt64Aligned_t m;
 ((sizeof(double)==8) ? (void) (0) : __assert_fail ("sizeof(double)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2890, __PRETTY_FUNCTION__));
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2891, __PRETTY_FUNCTION__));
 ((sizeof(int32)==4) ? (void) (0) : __assert_fail ("sizeof(int32)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2892, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2893, __PRETTY_FUNCTION__));
 if (!(tif->tif_flags&0x80000))
 {
  enum TIFFReadDirEntryErr err;
  uint32 offset = direntry->tdir_offset.toff_long;
  if (tif->tif_flags&0x00080)
   TIFFSwabLong(&offset);
  err=TIFFReadDirEntryData(tif,offset,8,m.i);
  if (err!=TIFFReadDirEntryErrOk)
   return(err);
 }
 else
  m.l=direntry->tdir_offset.toff_long8;
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong(m.i,2);
 if ((int32)m.i[0]==0)
  *value=0.0;
 else
  *value=(double)((int32)m.i[0])/(double)m.i[1];
 return(TIFFReadDirEntryErrOk);
}

static void TIFFReadDirEntryCheckedFloat(TIFF* tif, TIFFDirEntry* direntry, float* value)
{
         union
  {
    float f;
    uint32 i;
  } float_union;
 ((sizeof(float)==4) ? (void) (0) : __assert_fail ("sizeof(float)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2922, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2923, __PRETTY_FUNCTION__));
 ((sizeof(float_union)==4) ? (void) (0) : __assert_fail ("sizeof(float_union)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2924, __PRETTY_FUNCTION__));
 float_union.i=*(uint32*)(&direntry->tdir_offset);
 *value=float_union.f;
 if (tif->tif_flags&0x00080)
  TIFFSwabLong((uint32*)value);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckedDouble(TIFF* tif, TIFFDirEntry* direntry, double* value)
{
 ((sizeof(double)==8) ? (void) (0) : __assert_fail ("sizeof(double)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2933, __PRETTY_FUNCTION__));
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2934, __PRETTY_FUNCTION__));
 ((sizeof(UInt64Aligned_t)==8) ? (void) (0) : __assert_fail ("sizeof(UInt64Aligned_t)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 2935, __PRETTY_FUNCTION__));
 if (!(tif->tif_flags&0x80000))
 {
  enum TIFFReadDirEntryErr err;
  uint32 offset = direntry->tdir_offset.toff_long;
  if (tif->tif_flags&0x00080)
   TIFFSwabLong(&offset);
  err=TIFFReadDirEntryData(tif,offset,8,value);
  if (err!=TIFFReadDirEntryErrOk)
   return(err);
 }
 else
 {
        UInt64Aligned_t uint64_union;
        uint64_union.l=direntry->tdir_offset.toff_long8;
        *value=uint64_union.d;
 }
 if (tif->tif_flags&0x00080)
  TIFFSwabLong8((uint64*)value);
 return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSbyte(int8 value)
{
 if (value<0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteShort(uint16 value)
{
 if (value>0xFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSshort(int16 value)
{
 if ((value<0)||(value>0xFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteLong(uint32 value)
{
 if (value>0xFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSlong(int32 value)
{
 if ((value<0)||(value>0xFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteLong8(uint64 value)
{
 if (value>0xFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeByteSlong8(int64 value)
{
 if ((value<0)||(value>0xFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteByte(uint8 value)
{
 if (value>0x7F)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteShort(uint16 value)
{
 if (value>0x7F)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteSshort(int16 value)
{
 if ((value<-0x80)||(value>0x7F))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteLong(uint32 value)
{
 if (value>0x7F)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteSlong(int32 value)
{
 if ((value<-0x80)||(value>0x7F))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteLong8(uint64 value)
{
 if (value>0x7F)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSbyteSlong8(int64 value)
{
 if ((value<-0x80)||(value>0x7F))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSbyte(int8 value)
{
 if (value<0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSshort(int16 value)
{
 if (value<0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortLong(uint32 value)
{
 if (value>0xFFFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSlong(int32 value)
{
 if ((value<0)||(value>0xFFFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortLong8(uint64 value)
{
 if (value>0xFFFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeShortSlong8(int64 value)
{
 if ((value<0)||(value>0xFFFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortShort(uint16 value)
{
 if (value>0x7FFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortLong(uint32 value)
{
 if (value>0x7FFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortSlong(int32 value)
{
 if ((value<-0x8000)||(value>0x7FFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortLong8(uint64 value)
{
 if (value>0x7FFF)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeSshortSlong8(int64 value)
{
 if ((value<-0x8000)||(value>0x7FFF))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSbyte(int8 value)
{
 if (value<0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSshort(int16 value)
{
 if (value<0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr TIFFReadDirEntryCheckRangeLongSlong(int32 value)
{
 if (value<0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}
# 3190 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeLongLong8(uint64 value)
{
 if (value > 0xFFFFFFFFLL)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeLongSlong8(int64 value)
{
 if ((value<0) || (value > 0xFFFFFFFFLL))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}



static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeSlongLong(uint32 value)
{
 if (value > 0x7FFFFFFFUL)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeSlongLong8(uint64 value)
{
 if (value > 0x7FFFFFFFUL)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeSlongSlong8(int64 value)
{
 if ((value < 0L-0x80000000L) || (value > 0x7FFFFFFFL))
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeLong8Sbyte(int8 value)
{
 if (value < 0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeLong8Sshort(int16 value)
{
 if (value < 0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeLong8Slong(int32 value)
{
 if (value < 0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}

static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeLong8Slong8(int64 value)
{
 if (value < 0)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}
# 3282 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
static enum TIFFReadDirEntryErr
TIFFReadDirEntryCheckRangeSlong8Long8(uint64 value)
{
 if (value > 0x7FFFFFFFFFFFFFFFLL)
  return(TIFFReadDirEntryErrRange);
 else
  return(TIFFReadDirEntryErrOk);
}



static enum TIFFReadDirEntryErr
TIFFReadDirEntryData(TIFF* tif, uint64 offset, tmsize_t size, void* dest)
{
 ((size>0) ? (void) (0) : __assert_fail ("size>0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 3296, __PRETTY_FUNCTION__));
 if (!(((tif)->tif_flags & 0x00800) != 0)) {
  if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((offset)),(0)))==(offset)))
   return(TIFFReadDirEntryErrIo);
  if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((dest)),((size))))==(size)))
   return(TIFFReadDirEntryErrIo);
 } else {
  tmsize_t ma,mb;
  ma=(tmsize_t)offset;
  mb=ma+size;
  if (((uint64)ma!=offset)||(mb<ma)||(mb<size)||(mb>tif->tif_size))
   return(TIFFReadDirEntryErrIo);
  _TIFFmemcpy(dest,tif->tif_base+ma,size);
 }
 return(TIFFReadDirEntryErrOk);
}

static void TIFFReadDirEntryOutputErr(TIFF* tif, enum TIFFReadDirEntryErr err, const char* module, const char* tagname, int recover)
{
 if (!recover) {
  switch (err) {
   case TIFFReadDirEntryErrCount:
    TIFFErrorExt(tif->tif_clientdata, module,
          "Incorrect count for \"%s\"",
          tagname);
    break;
   case TIFFReadDirEntryErrType:
    TIFFErrorExt(tif->tif_clientdata, module,
          "Incompatible type for \"%s\"",
          tagname);
    break;
   case TIFFReadDirEntryErrIo:
    TIFFErrorExt(tif->tif_clientdata, module,
          "IO error during reading of \"%s\"",
          tagname);
    break;
   case TIFFReadDirEntryErrRange:
    TIFFErrorExt(tif->tif_clientdata, module,
          "Incorrect value for \"%s\"",
          tagname);
    break;
   case TIFFReadDirEntryErrPsdif:
    TIFFErrorExt(tif->tif_clientdata, module,
   "Cannot handle different values per sample for \"%s\"",
          tagname);
    break;
   case TIFFReadDirEntryErrSizesan:
    TIFFErrorExt(tif->tif_clientdata, module,
    "Sanity check on size of \"%s\" value failed",
          tagname);
    break;
   case TIFFReadDirEntryErrAlloc:
    TIFFErrorExt(tif->tif_clientdata, module,
          "Out of memory reading of \"%s\"",
          tagname);
    break;
   default:
    ((0) ? (void) (0) : __assert_fail ("0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 3353, __PRETTY_FUNCTION__));
    break;
  }
 } else {
  switch (err) {
   case TIFFReadDirEntryErrCount:
    TIFFErrorExt(tif->tif_clientdata, module,
    "Incorrect count for \"%s\"; tag ignored",
          tagname);
    break;
   case TIFFReadDirEntryErrType:
    TIFFWarningExt(tif->tif_clientdata, module,
    "Incompatible type for \"%s\"; tag ignored",
            tagname);
    break;
   case TIFFReadDirEntryErrIo:
    TIFFWarningExt(tif->tif_clientdata, module,
   "IO error during reading of \"%s\"; tag ignored",
            tagname);
    break;
   case TIFFReadDirEntryErrRange:
    TIFFWarningExt(tif->tif_clientdata, module,
    "Incorrect value for \"%s\"; tag ignored",
            tagname);
    break;
   case TIFFReadDirEntryErrPsdif:
    TIFFWarningExt(tif->tif_clientdata, module,
 "Cannot handle different values per sample for \"%s\"; tag ignored",
            tagname);
    break;
   case TIFFReadDirEntryErrSizesan:
    TIFFWarningExt(tif->tif_clientdata, module,
  "Sanity check on size of \"%s\" value failed; tag ignored",
            tagname);
    break;
   case TIFFReadDirEntryErrAlloc:
    TIFFWarningExt(tif->tif_clientdata, module,
    "Out of memory reading of \"%s\"; tag ignored",
            tagname);
    break;
   default:
    ((0) ? (void) (0) : __assert_fail ("0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 3394, __PRETTY_FUNCTION__));
    break;
  }
 }
}





int
TIFFReadDirectory(TIFF* tif)
{
 static const char module[] = "TIFFReadDirectory";
 TIFFDirEntry* dir;
 uint16 dircount;
 TIFFDirEntry* dp;
 uint16 di;
 const TIFFField* fip;
 uint32 fii=((uint32) -1);
        toff_t nextdiroff;
 tif->tif_diroff=tif->tif_nextdiroff;
 if (!TIFFCheckDirOffset(tif,tif->tif_nextdiroff))
  return 0;
 (*tif->tif_cleanup)(tif);
 tif->tif_curdir++;
        nextdiroff = tif->tif_nextdiroff;
 dircount=TIFFFetchDirectory(tif,nextdiroff,&dir,&tif->tif_nextdiroff);
 if (!dircount)
 {
  TIFFErrorExt(tif->tif_clientdata,module,
      "Failed to read directory at offset " "%lu",nextdiroff);
  return 0;
 }
 TIFFReadDirectoryCheckOrder(tif,dir,dircount);
 {
  TIFFDirEntry* ma;
  uint16 mb;
  for (ma=dir, mb=0; mb<dircount; ma++, mb++)
  {
   TIFFDirEntry* na;
   uint16 nb;
   for (na=ma+1, nb=mb+1; nb<dircount; na++, nb++)
   {
    if (ma->tdir_tag==na->tdir_tag)
     na->tdir_tag=0;
   }
  }
 }
 tif->tif_flags &= ~0x00040;
 tif->tif_flags &= ~0x100000;

 TIFFFreeDirectory(tif);
 TIFFDefaultDirectory(tif);






 TIFFSetField(tif,284,1);
# 3472 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
 dp=TIFFReadDirectoryFindEntry(tif,dir,dircount,277);
 if (dp)
 {
  if (!TIFFFetchNormalTag(tif,dp,0))
   goto bad;
  dp->tdir_tag=0;
 }
 dp=TIFFReadDirectoryFindEntry(tif,dir,dircount,259);
 if (dp)
 {






  uint16 value;
  enum TIFFReadDirEntryErr err;
  err=TIFFReadDirEntryShort(tif,dp,&value);
  if (err==TIFFReadDirEntryErrCount)
   err=TIFFReadDirEntryPersampleShort(tif,dp,&value);
  if (err!=TIFFReadDirEntryErrOk)
  {
   TIFFReadDirEntryOutputErr(tif,err,module,"Compression",0);
   goto bad;
  }
  if (!TIFFSetField(tif,259,value))
   goto bad;
  dp->tdir_tag=0;
 }
 else
 {
  if (!TIFFSetField(tif,259,1))
   goto bad;
 }



 for (di=0, dp=dir; di<dircount; di++, dp++)
 {
  if (dp->tdir_tag!=0)
  {
   TIFFReadDirectoryFindFieldInfo(tif,dp->tdir_tag,&fii);
   if (fii == ((uint32) -1))
   {
    TIFFWarningExt(tif->tif_clientdata, module,
        "Unknown field with tag %d (0x%x) encountered",
        dp->tdir_tag,dp->tdir_tag);


    if (!_TIFFMergeFields(tif,
     _TIFFCreateAnonField(tif,
      dp->tdir_tag,
      (TIFFDataType) dp->tdir_type),
     1)) {
     TIFFWarningExt(tif->tif_clientdata,
         module,
         "Registering anonymous field with tag %d (0x%x) failed",
         dp->tdir_tag,
         dp->tdir_tag);
     dp->tdir_tag=0;
    } else {
     TIFFReadDirectoryFindFieldInfo(tif,dp->tdir_tag,&fii);
     ((fii != ((uint32) -1)) ? (void) (0) : __assert_fail ("fii != ((uint32) -1)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 3535, __PRETTY_FUNCTION__));
    }
   }
  }
  if (dp->tdir_tag!=0)
  {
   fip=tif->tif_fields[fii];
   if (fip->field_bit==0)
    dp->tdir_tag=0;
   else
   {
    switch (dp->tdir_tag)
    {
     case 273:
     case 279:
     case 324:
     case 325:
      (((tif)->tif_dir.td_fieldsset[(fip->field_bit)/32]) |= (((unsigned long)1L)<<((fip->field_bit)&0x1f)));
      break;
     case 256:
     case 257:
     case 32997:
     case 323:
     case 322:
     case 32998:
     case 284:
     case 278:
     case 338:
      if (!TIFFFetchNormalTag(tif,dp,0))
       goto bad;
      dp->tdir_tag=0;
      break;
    }
   }
  }
 }
# 3579 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
 if ((tif->tif_dir.td_compression==6)&&
     (tif->tif_dir.td_planarconfig==2))
 {
  dp=TIFFReadDirectoryFindEntry(tif,dir,dircount,273);
  if ((dp!=0)&&(dp->tdir_count==1))
  {
   dp=TIFFReadDirectoryFindEntry(tif,dir,dircount,
       279);
   if ((dp!=0)&&(dp->tdir_count==1))
   {
    tif->tif_dir.td_planarconfig=1;
    TIFFWarningExt(tif->tif_clientdata,module,
        "Planarconfig tag value assumed incorrect, "
        "assuming data is contig instead of chunky");
   }
  }
 }



 if (!(((tif)->tif_dir.td_fieldsset[(1)/32]) & (((unsigned long)1L)<<((1)&0x1f))))
 {
  MissingRequired(tif,"ImageLength");
  goto bad;
 }



 if (!(((tif)->tif_dir.td_fieldsset[(2)/32]) & (((unsigned long)1L)<<((2)&0x1f)))) {
  tif->tif_dir.td_nstrips = TIFFNumberOfStrips(tif);
  tif->tif_dir.td_tilewidth = tif->tif_dir.td_imagewidth;
  tif->tif_dir.td_tilelength = tif->tif_dir.td_rowsperstrip;
  tif->tif_dir.td_tiledepth = tif->tif_dir.td_imagedepth;
  tif->tif_flags &= ~0x00400;
 } else {
  tif->tif_dir.td_nstrips = TIFFNumberOfTiles(tif);
  tif->tif_flags |= 0x00400;
 }
 if (!tif->tif_dir.td_nstrips) {
  TIFFErrorExt(tif->tif_clientdata, module,
      "Cannot handle zero number of %s",
      (((tif)->tif_flags & 0x00400) != 0) ? "tiles" : "strips");
  goto bad;
 }
 tif->tif_dir.td_stripsperimage = tif->tif_dir.td_nstrips;
 if (tif->tif_dir.td_planarconfig == 2)
  tif->tif_dir.td_stripsperimage /= tif->tif_dir.td_samplesperpixel;
 if (!(((tif)->tif_dir.td_fieldsset[(25)/32]) & (((unsigned long)1L)<<((25)&0x1f)))) {
  if ((tif->tif_dir.td_compression==6) &&
      ((((tif)->tif_flags & 0x00400) != 0)==0) &&
      (tif->tif_dir.td_nstrips==1)) {
# 3638 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
   (((tif)->tif_dir.td_fieldsset[(25)/32]) |= (((unsigned long)1L)<<((25)&0x1f)));
  } else {
   MissingRequired(tif,
    (((tif)->tif_flags & 0x00400) != 0) ? "TileOffsets" : "StripOffsets");
   goto bad;
  }
 }



 for (di=0, dp=dir; di<dircount; di++, dp++)
 {
  switch (dp->tdir_tag)
  {
   case 0:
    break;
   case 280:
   case 281:
   case 258:
   case 32996:
   case 339:
# 3669 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
    {
     uint16 value;
     enum TIFFReadDirEntryErr err;
     err=TIFFReadDirEntryShort(tif,dp,&value);
     if (err==TIFFReadDirEntryErrCount)
      err=TIFFReadDirEntryPersampleShort(tif,dp,&value);
     if (err!=TIFFReadDirEntryErrOk)
     {
      TIFFReadDirEntryOutputErr(tif,err,module,TIFFFieldWithTag(tif,dp->tdir_tag)->field_name,0);
      goto bad;
     }
     if (!TIFFSetField(tif,dp->tdir_tag,value))
      goto bad;
    }
    break;
   case 340:
   case 341:
    {
     double value;
     enum TIFFReadDirEntryErr err;
     err=TIFFReadDirEntryPersampleDouble(tif,dp,&value);
     if (err!=TIFFReadDirEntryErrOk)
     {
      TIFFReadDirEntryOutputErr(tif,err,module,TIFFFieldWithTag(tif,dp->tdir_tag)->field_name,0);
      goto bad;
     }
     if (!TIFFSetField(tif,dp->tdir_tag,value))
      goto bad;
    }
    break;
   case 273:
   case 324:
    if (!TIFFFetchStripThing(tif,dp,tif->tif_dir.td_nstrips,&tif->tif_dir.td_stripoffset))
     goto bad;
    break;
   case 279:
   case 325:
    if (!TIFFFetchStripThing(tif,dp,tif->tif_dir.td_nstrips,&tif->tif_dir.td_stripbytecount))
     goto bad;
    break;
   case 320:
   case 301:
    {
     enum TIFFReadDirEntryErr err;
     uint32 countpersample;
     uint32 countrequired;
     uint32 incrementpersample;
     uint16* value=((void*)0);
     countpersample=(1L<<tif->tif_dir.td_bitspersample);
     if ((dp->tdir_tag==301)&&(dp->tdir_count==(uint64)countpersample))
     {
      countrequired=countpersample;
      incrementpersample=0;
     }
     else
     {
      countrequired=3*countpersample;
      incrementpersample=countpersample;
     }
     if (dp->tdir_count!=(uint64)countrequired)
      err=TIFFReadDirEntryErrCount;
     else
      err=TIFFReadDirEntryShortArray(tif,dp,&value);
     if (err!=TIFFReadDirEntryErrOk)
      TIFFReadDirEntryOutputErr(tif,err,module,TIFFFieldWithTag(tif,dp->tdir_tag)->field_name,1);
     else
     {
      TIFFSetField(tif,dp->tdir_tag,value,value+incrementpersample,value+2*incrementpersample);
      _TIFFfree(value);
     }
    }
    break;

   case 255:
    {
     uint16 valueo;
     uint32 value;
     if (TIFFReadDirEntryShort(tif,dp,&valueo)==TIFFReadDirEntryErrOk)
     {
      switch (valueo)
      {
       case 2: value=0x1; break;
       case 3: value=0x2; break;
       default: value=0; break;
      }
      if (value!=0)
       TIFFSetField(tif,254,value);
     }
    }
    break;

   default:
    (void) TIFFFetchNormalTag(tif, dp, 1);
    break;
  }
 }
# 3781 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
 if (tif->tif_dir.td_compression==6)
 {
  if (!(((tif)->tif_dir.td_fieldsset[(8)/32]) & (((unsigned long)1L)<<((8)&0x1f))))
  {
   TIFFWarningExt(tif->tif_clientdata, module,
       "Photometric tag is missing, assuming data is YCbCr");
   if (!TIFFSetField(tif,262,6))
    goto bad;
  }
  else if (tif->tif_dir.td_photometric==2)
  {
   tif->tif_dir.td_photometric=6;
   TIFFWarningExt(tif->tif_clientdata, module,
       "Photometric tag value assumed incorrect, "
       "assuming data is YCbCr instead of RGB");
  }
  if (!(((tif)->tif_dir.td_fieldsset[(6)/32]) & (((unsigned long)1L)<<((6)&0x1f))))
  {
   TIFFWarningExt(tif->tif_clientdata,module,
       "BitsPerSample tag is missing, assuming 8 bits per sample");
   if (!TIFFSetField(tif,258,8))
    goto bad;
  }
  if (!(((tif)->tif_dir.td_fieldsset[(16)/32]) & (((unsigned long)1L)<<((16)&0x1f))))
  {
   if (tif->tif_dir.td_photometric==2)
   {
    TIFFWarningExt(tif->tif_clientdata,module,
        "SamplesPerPixel tag is missing, "
        "assuming correct SamplesPerPixel value is 3");
    if (!TIFFSetField(tif,277,3))
     goto bad;
   }
   if (tif->tif_dir.td_photometric==6)
   {
    TIFFWarningExt(tif->tif_clientdata,module,
        "SamplesPerPixel tag is missing, "
        "applying correct SamplesPerPixel value of 3");
    if (!TIFFSetField(tif,277,3))
     goto bad;
   }
   else if ((tif->tif_dir.td_photometric==0)
     || (tif->tif_dir.td_photometric==1))
   {




    if (!TIFFSetField(tif,277,1))
     goto bad;
   }
  }
 }



 if (tif->tif_dir.td_photometric == 3 &&
     !(((tif)->tif_dir.td_fieldsset[(26)/32]) & (((unsigned long)1L)<<((26)&0x1f)))) {
  MissingRequired(tif, "Colormap");
  goto bad;
 }





 if (tif->tif_dir.td_compression!=6)
 {



  if (!(((tif)->tif_dir.td_fieldsset[(24)/32]) & (((unsigned long)1L)<<((24)&0x1f)))) {





   if ((tif->tif_dir.td_planarconfig == 1 &&
       tif->tif_dir.td_nstrips > 1) ||
       (tif->tif_dir.td_planarconfig == 2 &&
        tif->tif_dir.td_nstrips != (uint32)tif->tif_dir.td_samplesperpixel)) {
       MissingRequired(tif, "StripByteCounts");
       goto bad;
   }
   TIFFWarningExt(tif->tif_clientdata, module,
    "TIFF directory is missing required "
    "\"%s\" field, calculating from imagelength",
    TIFFFieldWithTag(tif,279)->field_name);
   if (EstimateStripByteCounts(tif, dir, dircount) < 0)
       goto bad;
# 3892 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
  } else if (tif->tif_dir.td_nstrips == 1
      && tif->tif_dir.td_stripoffset[0] != 0
      && ( (tif->tif_dir.td_stripbytecount[0] == 0 && tif->tif_dir.td_stripoffset[0] != 0) || (tif->tif_dir.td_compression == 1 && tif->tif_dir.td_stripbytecount[0] > ((*(tif)->tif_sizeproc)((tif)->tif_clientdata)) - tif->tif_dir.td_stripoffset[0]) || (tif->tif_mode == 00 && tif->tif_dir.td_compression == 1 && tif->tif_dir.td_stripbytecount[0] < TIFFScanlineSize64(tif) * tif->tif_dir.td_imagelength) )) {






   TIFFWarningExt(tif->tif_clientdata, module,
       "Bogus \"%s\" field, ignoring and calculating from imagelength",
       TIFFFieldWithTag(tif,279)->field_name);
   if(EstimateStripByteCounts(tif, dir, dircount) < 0)
       goto bad;
  } else if (tif->tif_dir.td_planarconfig == 1
      && tif->tif_dir.td_nstrips > 2
      && tif->tif_dir.td_compression == 1
      && tif->tif_dir.td_stripbytecount[0] != tif->tif_dir.td_stripbytecount[1]
      && tif->tif_dir.td_stripbytecount[0] != 0
      && tif->tif_dir.td_stripbytecount[1] != 0 ) {






   TIFFWarningExt(tif->tif_clientdata, module,
       "Wrong \"%s\" field, ignoring and calculating from imagelength",
       TIFFFieldWithTag(tif,279)->field_name);
   if (EstimateStripByteCounts(tif, dir, dircount) < 0)
       goto bad;
  }
 }
 if (dir)
 {
  _TIFFfree(dir);
  dir=((void*)0);
 }
 if (!(((tif)->tif_dir.td_fieldsset[(19)/32]) & (((unsigned long)1L)<<((19)&0x1f))))
 {
  if (tif->tif_dir.td_bitspersample>=16)
   tif->tif_dir.td_maxsamplevalue=0xFFFF;
  else
   tif->tif_dir.td_maxsamplevalue = (uint16)((1L<<tif->tif_dir.td_bitspersample)-1);
 }





 if (tif->tif_dir.td_nstrips > 1) {
  uint32 strip;

  tif->tif_dir.td_stripbytecountsorted = 1;
  for (strip = 1; strip < tif->tif_dir.td_nstrips; strip++) {
   if (tif->tif_dir.td_stripoffset[strip - 1] >
       tif->tif_dir.td_stripoffset[strip]) {
    tif->tif_dir.td_stripbytecountsorted = 0;
    break;
   }
  }
 }



 (*tif->tif_fixuptags)(tif);
# 3968 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
 if ((tif->tif_dir.td_planarconfig==1)&&
     (tif->tif_dir.td_nstrips==1)&&
     (tif->tif_dir.td_compression==1)&&
     ((tif->tif_flags&(0x08000|0x00400))==0x08000))
  ChopUpSingleUncompressedStrip(tif);




 tif->tif_flags &= ~0x00008;
 tif->tif_flags &= ~0x200000;




 tif->tif_row = (uint32) -1;
 tif->tif_curstrip = (uint32) -1;
 tif->tif_col = (uint32) -1;
 tif->tif_curtile = (uint32) -1;
 tif->tif_tilesize = (tmsize_t) -1;

 tif->tif_scanlinesize = TIFFScanlineSize(tif);
 if (!tif->tif_scanlinesize) {
  TIFFErrorExt(tif->tif_clientdata, module,
      "Cannot handle zero scanline size");
  return (0);
 }

 if ((((tif)->tif_flags & 0x00400) != 0)) {
  tif->tif_tilesize = TIFFTileSize(tif);
  if (!tif->tif_tilesize) {
   TIFFErrorExt(tif->tif_clientdata, module,
        "Cannot handle zero tile size");
   return (0);
  }
 } else {
  if (!TIFFStripSize(tif)) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "Cannot handle zero strip size");
   return (0);
  }
 }
 return (1);
bad:
 if (dir)
  _TIFFfree(dir);
 return (0);
}

static void
TIFFReadDirectoryCheckOrder(TIFF* tif, TIFFDirEntry* dir, uint16 dircount)
{
 static const char module[] = "TIFFReadDirectoryCheckOrder";
 uint16 m;
 uint16 n;
 TIFFDirEntry* o;
 m=0;
 for (n=0, o=dir; n<dircount; n++, o++)
 {
  if (o->tdir_tag<m)
  {
   TIFFWarningExt(tif->tif_clientdata,module,
       "Invalid TIFF directory; tags are not sorted in ascending order");
   break;
  }
  m=o->tdir_tag+1;
 }
}

static TIFFDirEntry*
TIFFReadDirectoryFindEntry(TIFF* tif, TIFFDirEntry* dir, uint16 dircount, uint16 tagid)
{
 TIFFDirEntry* m;
 uint16 n;
 (void) tif;
 for (m=dir, n=0; n<dircount; m++, n++)
 {
  if (m->tdir_tag==tagid)
   return(m);
 }
 return(0);
}

static void
TIFFReadDirectoryFindFieldInfo(TIFF* tif, uint16 tagid, uint32* fii)
{
 int32 ma,mb,mc;
 ma=-1;
 mc=(int32)tif->tif_nfields;
 while (1)
 {
  if (ma+1==mc)
  {
   *fii = ((uint32) -1);
   return;
  }
  mb=(ma+mc)/2;
  if (tif->tif_fields[mb]->field_tag==(uint32)tagid)
   break;
  if (tif->tif_fields[mb]->field_tag<(uint32)tagid)
   ma=mb;
  else
   mc=mb;
 }
 while (1)
 {
  if (mb==0)
   break;
  if (tif->tif_fields[mb-1]->field_tag!=(uint32)tagid)
   break;
  mb--;
 }
 *fii=mb;
}





int
TIFFReadCustomDirectory(TIFF* tif, toff_t diroff,
   const TIFFFieldArray* infoarray)
{
 static const char module[] = "TIFFReadCustomDirectory";
 TIFFDirEntry* dir;
 uint16 dircount;
 TIFFDirEntry* dp;
 uint16 di;
 const TIFFField* fip;
 uint32 fii;
 _TIFFSetupFields(tif, infoarray);
 dircount=TIFFFetchDirectory(tif,diroff,&dir,((void*)0));
 if (!dircount)
 {
  TIFFErrorExt(tif->tif_clientdata,module,
      "Failed to read custom directory at offset " "%lu",diroff);
  return 0;
 }
 TIFFFreeDirectory(tif);
 _TIFFmemset(&tif->tif_dir, 0, sizeof(TIFFDirectory));
 TIFFReadDirectoryCheckOrder(tif,dir,dircount);
 for (di=0, dp=dir; di<dircount; di++, dp++)
 {
  TIFFReadDirectoryFindFieldInfo(tif,dp->tdir_tag,&fii);
  if (fii == ((uint32) -1))
  {
   TIFFWarningExt(tif->tif_clientdata, module,
       "Unknown field with tag %d (0x%x) encountered",
       dp->tdir_tag, dp->tdir_tag);
   if (!_TIFFMergeFields(tif, _TIFFCreateAnonField(tif,
      dp->tdir_tag,
      (TIFFDataType) dp->tdir_type),
          1)) {
    TIFFWarningExt(tif->tif_clientdata, module,
        "Registering anonymous field with tag %d (0x%x) failed",
        dp->tdir_tag, dp->tdir_tag);
    dp->tdir_tag=0;
   } else {
    TIFFReadDirectoryFindFieldInfo(tif,dp->tdir_tag,&fii);
    ((fii != ((uint32) -1)) ? (void) (0) : __assert_fail ("fii != ((uint32) -1)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4127, __PRETTY_FUNCTION__));
   }
  }
  if (dp->tdir_tag!=0)
  {
   fip=tif->tif_fields[fii];
   if (fip->field_bit==0)
    dp->tdir_tag=0;
   else
   {

    while ((fip->field_type!=TIFF_NOTYPE)&&(fip->field_type!=dp->tdir_type))
    {
     fii++;
     if ((fii==tif->tif_nfields)||
         (tif->tif_fields[fii]->field_tag!=(uint32)dp->tdir_tag))
     {
      fii=0xFFFF;
      break;
     }
     fip=tif->tif_fields[fii];
    }
    if (fii==0xFFFF)
    {
     TIFFWarningExt(tif->tif_clientdata, module,
         "Wrong data type %d for \"%s\"; tag ignored",
         dp->tdir_type,fip->field_name);
     dp->tdir_tag=0;
    }
    else
    {

     if ((fip->field_readcount!=-1)&&
         (fip->field_readcount!=-3))
     {
      uint32 expected;
      if (fip->field_readcount==-2)
       expected=(uint32)tif->tif_dir.td_samplesperpixel;
      else
       expected=(uint32)fip->field_readcount;
      if (!CheckDirCount(tif,dp,expected))
       dp->tdir_tag=0;
     }
    }
   }
   switch (dp->tdir_tag)
   {
    case 0:
     break;
    case 37382:
     (void) TIFFFetchSubjectDistance(tif,dp);
     break;
    default:
     (void) TIFFFetchNormalTag(tif, dp, 1);
     break;
   }
  }
 }
 if (dir)
  _TIFFfree(dir);
 return 1;
}





int
TIFFReadEXIFDirectory(TIFF* tif, toff_t diroff)
{
 const TIFFFieldArray* exifFieldArray;
 exifFieldArray = _TIFFGetExifFields();
 return TIFFReadCustomDirectory(tif, diroff, exifFieldArray);
}

static int
EstimateStripByteCounts(TIFF* tif, TIFFDirEntry* dir, uint16 dircount)
{
 static const char module[] = "EstimateStripByteCounts";

 TIFFDirEntry *dp;
 TIFFDirectory *td = &tif->tif_dir;
 uint32 strip;

 if (td->td_stripbytecount)
  _TIFFfree(td->td_stripbytecount);
 td->td_stripbytecount = (uint64*)
     _TIFFCheckMalloc(tif, td->td_nstrips, sizeof (uint64),
  "for \"StripByteCounts\" array");
        if( td->td_stripbytecount == ((void*)0) )
            return -1;

 if (td->td_compression != 1) {
  uint64 space;
  uint64 filesize;
  uint16 n;
  filesize = ((*(tif)->tif_sizeproc)((tif)->tif_clientdata));
  if (!(tif->tif_flags&0x80000))
   space=sizeof(TIFFHeaderClassic)+2+dircount*12+4;
  else
   space=sizeof(TIFFHeaderBig)+8+dircount*20+8;

  for (dp = dir, n = dircount; n > 0; n--, dp++)
  {
   uint32 typewidth = TIFFDataWidth((TIFFDataType) dp->tdir_type);
   uint64 datasize;
   typewidth = TIFFDataWidth((TIFFDataType) dp->tdir_type);
   if (typewidth == 0) {
    TIFFErrorExt(tif->tif_clientdata, module,
        "Cannot determine size of unknown tag type %d",
        dp->tdir_type);
    return -1;
   }
   datasize=(uint64)typewidth*dp->tdir_count;
   if (!(tif->tif_flags&0x80000))
   {
    if (datasize<=4)
     datasize=0;
   }
   else
   {
    if (datasize<=8)
     datasize=0;
   }
   space+=datasize;
  }
  space = filesize - space;
  if (td->td_planarconfig == 2)
   space /= td->td_samplesperpixel;
  for (strip = 0; strip < td->td_nstrips; strip++)
   td->td_stripbytecount[strip] = space;







  strip--;
  if (td->td_stripoffset[strip]+td->td_stripbytecount[strip] > filesize)
   td->td_stripbytecount[strip] = filesize - td->td_stripoffset[strip];
 } else if ((((tif)->tif_flags & 0x00400) != 0)) {
  uint64 bytespertile = TIFFTileSize64(tif);

  for (strip = 0; strip < td->td_nstrips; strip++)
      td->td_stripbytecount[strip] = bytespertile;
 } else {
  uint64 rowbytes = TIFFScanlineSize64(tif);
  uint32 rowsperstrip = td->td_imagelength/td->td_stripsperimage;
  for (strip = 0; strip < td->td_nstrips; strip++)
   td->td_stripbytecount[strip] = rowbytes * rowsperstrip;
 }
 (((tif)->tif_dir.td_fieldsset[(24)/32]) |= (((unsigned long)1L)<<((24)&0x1f)));
 if (!(((tif)->tif_dir.td_fieldsset[(17)/32]) & (((unsigned long)1L)<<((17)&0x1f))))
  td->td_rowsperstrip = td->td_imagelength;
 return 1;
}

static void
MissingRequired(TIFF* tif, const char* tagname)
{
 static const char module[] = "MissingRequired";

 TIFFErrorExt(tif->tif_clientdata, module,
     "TIFF directory is missing required \"%s\" field",
     tagname);
}







static int
TIFFCheckDirOffset(TIFF* tif, uint64 diroff)
{
 uint16 n;

 if (diroff == 0)
  return 0;

 for (n = 0; n < tif->tif_dirnumber && tif->tif_dirlist; n++) {
  if (tif->tif_dirlist[n] == diroff)
   return 0;
 }

 tif->tif_dirnumber++;

 if (tif->tif_dirnumber > tif->tif_dirlistsize) {
  uint64* new_dirlist;





  new_dirlist = (uint64*)_TIFFCheckRealloc(tif, tif->tif_dirlist,
      tif->tif_dirnumber, 2 * sizeof(uint64), "for IFD list");
  if (!new_dirlist)
   return 0;
  tif->tif_dirlistsize = 2 * tif->tif_dirnumber;
  tif->tif_dirlist = new_dirlist;
 }

 tif->tif_dirlist[tif->tif_dirnumber - 1] = diroff;

 return 1;
}





static int
CheckDirCount(TIFF* tif, TIFFDirEntry* dir, uint32 count)
{
 if ((uint64)count > dir->tdir_count) {
  TIFFWarningExt(tif->tif_clientdata, tif->tif_name,
 "incorrect count for field \"%s\" (" "%lu" ", expecting %u); tag ignored",
      TIFFFieldWithTag(tif, dir->tdir_tag)->field_name,
      dir->tdir_count, count);
  return (0);
 } else if ((uint64)count < dir->tdir_count) {
  TIFFWarningExt(tif->tif_clientdata, tif->tif_name,
 "incorrect count for field \"%s\" (" "%lu" ", expecting %u); tag trimmed",
      TIFFFieldWithTag(tif, dir->tdir_tag)->field_name,
      dir->tdir_count, count);
  dir->tdir_count = count;
  return (1);
 }
 return (1);
}






static uint16
TIFFFetchDirectory(TIFF* tif, uint64 diroff, TIFFDirEntry** pdir,
                   uint64 *nextdiroff)
{
 static const char module[] = "TIFFFetchDirectory";

 void* origdir;
 uint16 dircount16;
 uint32 dirsize;
 TIFFDirEntry* dir;
 uint8* ma;
 TIFFDirEntry* mb;
 uint16 n;

 ((pdir) ? (void) (0) : __assert_fail ("pdir", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4379, __PRETTY_FUNCTION__));

 tif->tif_diroff = diroff;
 if (nextdiroff)
  *nextdiroff = 0;
 if (!(((tif)->tif_flags & 0x00800) != 0)) {
  if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((tif->tif_diroff)),(0)))==(tif->tif_diroff))) {
   TIFFErrorExt(tif->tif_clientdata, module,
    "%s: Seek error accessing TIFF directory",
    tif->tif_name);
   return 0;
  }
  if (!(tif->tif_flags&0x80000))
  {
   if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((&dircount16)),((sizeof (uint16)))))==(sizeof (uint16)))) {
    TIFFErrorExt(tif->tif_clientdata, module,
        "%s: Can not read TIFF directory count",
        tif->tif_name);
    return 0;
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabShort(&dircount16);
   if (dircount16>4096)
   {
    TIFFErrorExt(tif->tif_clientdata, module,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   dirsize = 12;
  } else {
   uint64 dircount64;
   if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((&dircount64)),((sizeof (uint64)))))==(sizeof (uint64)))) {
    TIFFErrorExt(tif->tif_clientdata, module,
     "%s: Can not read TIFF directory count",
     tif->tif_name);
    return 0;
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(&dircount64);
   if (dircount64>4096)
   {
    TIFFErrorExt(tif->tif_clientdata, module,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   dircount16 = (uint16)dircount64;
   dirsize = 20;
  }
  origdir = _TIFFCheckMalloc(tif, dircount16,
      dirsize, "to read TIFF directory");
  if (origdir == ((void*)0))
   return 0;
  if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((origdir)),(((tmsize_t)(dircount16*dirsize)))))==((tmsize_t)(dircount16*dirsize)))) {
   TIFFErrorExt(tif->tif_clientdata, module,
    "%.100s: Can not read TIFF directory",
    tif->tif_name);
   _TIFFfree(origdir);
   return 0;
  }




  if (nextdiroff)
  {
   if (!(tif->tif_flags&0x80000))
   {
    uint32 nextdiroff32;
    if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((&nextdiroff32)),((sizeof(uint32)))))==(sizeof(uint32))))
     nextdiroff32 = 0;
    if (tif->tif_flags&0x00080)
     TIFFSwabLong(&nextdiroff32);
    *nextdiroff=nextdiroff32;
   } else {
    if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((nextdiroff)),((sizeof(uint64)))))==(sizeof(uint64))))
     *nextdiroff = 0;
    if (tif->tif_flags&0x00080)
     TIFFSwabLong8(nextdiroff);
   }
  }
 } else {
  tmsize_t m;
  tmsize_t off = (tmsize_t) tif->tif_diroff;
  if ((uint64)off!=tif->tif_diroff)
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Can not read TIFF directory count");
   return(0);
  }
# 4477 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c"
  if (!(tif->tif_flags&0x80000))
  {
   m=off+sizeof(uint16);
   if ((m<off)||(m<(tmsize_t)sizeof(uint16))||(m>tif->tif_size)) {
    TIFFErrorExt(tif->tif_clientdata, module,
     "Can not read TIFF directory count");
    return 0;
   } else {
    _TIFFmemcpy(&dircount16, tif->tif_base + off,
         sizeof(uint16));
   }
   off += sizeof (uint16);
   if (tif->tif_flags & 0x00080)
    TIFFSwabShort(&dircount16);
   if (dircount16>4096)
   {
    TIFFErrorExt(tif->tif_clientdata, module,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   dirsize = 12;
  }
  else
  {
   tmsize_t m;
   uint64 dircount64;
   m=off+sizeof(uint64);
   if ((m<off)||(m<(tmsize_t)sizeof(uint64))||(m>tif->tif_size)) {
    TIFFErrorExt(tif->tif_clientdata, module,
     "Can not read TIFF directory count");
    return 0;
   } else {
    _TIFFmemcpy(&dircount64, tif->tif_base + off,
         sizeof(uint64));
   }
   off += sizeof (uint64);
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(&dircount64);
   if (dircount64>4096)
   {
    TIFFErrorExt(tif->tif_clientdata, module,
        "Sanity check on directory count failed, this is probably not a valid IFD offset");
    return 0;
   }
   dircount16 = (uint16)dircount64;
   dirsize = 20;
  }
  origdir = _TIFFCheckMalloc(tif, dircount16,
      dirsize,
      "to read TIFF directory");
  if (origdir == ((void*)0))
   return 0;
  m=off+dircount16*dirsize;
  if ((m<off)||(m<(tmsize_t)(dircount16*dirsize))||(m>tif->tif_size)) {
   TIFFErrorExt(tif->tif_clientdata, module,
         "Can not read TIFF directory");
   _TIFFfree(origdir);
   return 0;
  } else {
   _TIFFmemcpy(origdir, tif->tif_base + off,
        dircount16 * dirsize);
  }
  if (nextdiroff) {
   off += dircount16 * dirsize;
   if (!(tif->tif_flags&0x80000))
   {
    uint32 nextdiroff32;
    m=off+sizeof(uint32);
    if ((m<off)||(m<(tmsize_t)sizeof(uint32))||(m>tif->tif_size))
     nextdiroff32 = 0;
    else
     _TIFFmemcpy(&nextdiroff32, tif->tif_base + off,
          sizeof (uint32));
    if (tif->tif_flags&0x00080)
     TIFFSwabLong(&nextdiroff32);
    *nextdiroff = nextdiroff32;
   }
   else
   {
    m=off+sizeof(uint64);
    if ((m<off)||(m<(tmsize_t)sizeof(uint64))||(m>tif->tif_size))
     *nextdiroff = 0;
    else
     _TIFFmemcpy(nextdiroff, tif->tif_base + off,
          sizeof (uint64));
    if (tif->tif_flags&0x00080)
     TIFFSwabLong8(nextdiroff);
   }
  }
 }
 dir = (TIFFDirEntry*)_TIFFCheckMalloc(tif, dircount16,
      sizeof(TIFFDirEntry),
      "to read TIFF directory");
 if (dir==0)
 {
  _TIFFfree(origdir);
  return 0;
 }
 ma=(uint8*)origdir;
 mb=dir;
 for (n=0; n<dircount16; n++)
 {
  if (tif->tif_flags&0x00080)
   TIFFSwabShort((uint16*)ma);
  mb->tdir_tag=*(uint16*)ma;
  ma+=sizeof(uint16);
  if (tif->tif_flags&0x00080)
   TIFFSwabShort((uint16*)ma);
  mb->tdir_type=*(uint16*)ma;
  ma+=sizeof(uint16);
  if (!(tif->tif_flags&0x80000))
  {
   if (tif->tif_flags&0x00080)
    TIFFSwabLong((uint32*)ma);
   mb->tdir_count=(uint64)(*(uint32*)ma);
   ma+=sizeof(uint32);
   *(uint32*)(&mb->tdir_offset)=*(uint32*)ma;
   ma+=sizeof(uint32);
  }
  else
  {
   if (tif->tif_flags&0x00080)
    TIFFSwabLong8((uint64*)ma);
                        mb->tdir_count=TIFFReadUInt64(ma);
   ma+=sizeof(uint64);
   mb->tdir_offset.toff_long8=TIFFReadUInt64(ma);
   ma+=sizeof(uint64);
  }
  mb++;
 }
 _TIFFfree(origdir);
 *pdir = dir;
 return dircount16;
}




static int
TIFFFetchNormalTag(TIFF* tif, TIFFDirEntry* dp, int recover)
{
 static const char module[] = "TIFFFetchNormalTag";
 enum TIFFReadDirEntryErr err;
 uint32 fii;
 const TIFFField* fip;
 TIFFReadDirectoryFindFieldInfo(tif,dp->tdir_tag,&fii);
        if( fii == ((uint32) -1) )
        {
            TIFFErrorExt(tif->tif_clientdata, "TIFFFetchNormalTag",
                         "No definition found for tag %d",
                         dp->tdir_tag);
            return 0;
        }
 fip=tif->tif_fields[fii];
 ((fip->set_field_type!=TIFF_SETGET_OTHER) ? (void) (0) : __assert_fail ("fip->set_field_type!=TIFF_SETGET_OTHER", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4631, __PRETTY_FUNCTION__));
 ((fip->set_field_type!=TIFF_SETGET_INT) ? (void) (0) : __assert_fail ("fip->set_field_type!=TIFF_SETGET_INT", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4632, __PRETTY_FUNCTION__));
 err=TIFFReadDirEntryErrOk;
 switch (fip->set_field_type)
 {
  case TIFF_SETGET_UNDEFINED:
   break;
  case TIFF_SETGET_ASCII:
   {
    uint8* data;
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4641, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryByteArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     uint8* ma;
     uint32 mb;
     int n;
     ma=data;
     mb=0;
     while (mb<(uint32)dp->tdir_count)
     {
      if (*ma==0)
       break;
      ma++;
      mb++;
     }
     if (mb+1<(uint32)dp->tdir_count)
      TIFFWarningExt(tif->tif_clientdata,module,"ASCII value for tag \"%s\" contains null byte in value; value incorrectly truncated during reading due to implementation limitations",fip->field_name);
     else if (mb+1>(uint32)dp->tdir_count)
     {
      uint8* o;
      TIFFWarningExt(tif->tif_clientdata,module,"ASCII value for tag \"%s\" does not end in null byte",fip->field_name);
      if ((uint32)dp->tdir_count+1!=dp->tdir_count+1)
       o=((void*)0);
      else
       o=_TIFFmalloc((uint32)dp->tdir_count+1);
      if (o==((void*)0))
      {
       if (data!=((void*)0))
        _TIFFfree(data);
       return(0);
      }
      _TIFFmemcpy(o,data,(uint32)dp->tdir_count);
      o[(uint32)dp->tdir_count]=0;
      if (data!=0)
       _TIFFfree(data);
      data=o;
     }
     n=TIFFSetField(tif,dp->tdir_tag,data);
     if (data!=0)
      _TIFFfree(data);
     if (!n)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_UINT8:
   {
    uint8 data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4690, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4691, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryByte(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_UINT16:
   {
    uint16 data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4703, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4704, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryShort(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_UINT32:
   {
    uint32 data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4716, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4717, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryLong(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_UINT64:
   {
    uint64 data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4729, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4730, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryLong8(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_FLOAT:
   {
    float data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4742, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4743, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryFloat(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_DOUBLE:
   {
    double data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4755, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4756, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryDouble(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_IFD8:
   {
    uint64 data;
    ((fip->field_readcount==1) ? (void) (0) : __assert_fail ("fip->field_readcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4768, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4769, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryIfd8(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     if (!TIFFSetField(tif,dp->tdir_tag,data))
      return(0);
    }
   }
   break;
  case TIFF_SETGET_UINT16_PAIR:
   {
    uint16* data;
    ((fip->field_readcount==2) ? (void) (0) : __assert_fail ("fip->field_readcount==2", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4781, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4782, __PRETTY_FUNCTION__));
    if (dp->tdir_count!=2)
     return(0);
    err=TIFFReadDirEntryShortArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,data[0],data[1]);
     _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C0_UINT8:
   {
    uint8* data;
    ((fip->field_readcount>=1) ? (void) (0) : __assert_fail ("fip->field_readcount>=1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4799, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4800, __PRETTY_FUNCTION__));
    if (dp->tdir_count!=(uint64)fip->field_readcount)
                                                      ;
    else
    {
     err=TIFFReadDirEntryByteArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C0_UINT16:
   {
    uint16* data;
    ((fip->field_readcount>=1) ? (void) (0) : __assert_fail ("fip->field_readcount>=1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4821, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4822, __PRETTY_FUNCTION__));
    if (dp->tdir_count!=(uint64)fip->field_readcount)
                                                      ;
    else
    {
     err=TIFFReadDirEntryShortArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C0_UINT32:
   {
    uint32* data;
    ((fip->field_readcount>=1) ? (void) (0) : __assert_fail ("fip->field_readcount>=1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4843, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4844, __PRETTY_FUNCTION__));
    if (dp->tdir_count!=(uint64)fip->field_readcount)
                                                      ;
    else
    {
     err=TIFFReadDirEntryLongArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C0_FLOAT:
   {
    float* data;
    ((fip->field_readcount>=1) ? (void) (0) : __assert_fail ("fip->field_readcount>=1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4865, __PRETTY_FUNCTION__));
    ((fip->field_passcount==0) ? (void) (0) : __assert_fail ("fip->field_passcount==0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4866, __PRETTY_FUNCTION__));
    if (dp->tdir_count!=(uint64)fip->field_readcount)
                                                      ;
    else
    {
     err=TIFFReadDirEntryFloatArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_ASCII:
   {
    uint8* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4887, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4888, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryByteArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_UINT8:
   {
    uint8* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4909, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4910, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryByteArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_UINT16:
   {
    uint16* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4931, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4932, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryShortArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_UINT32:
   {
    uint32* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4953, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4954, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryLongArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_UINT64:
   {
    uint64* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4975, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4976, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryLong8Array(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_FLOAT:
   {
    float* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4997, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 4998, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryFloatArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_DOUBLE:
   {
    double* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5019, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5020, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryDoubleArray(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C16_IFD8:
   {
    uint64* data;
    ((fip->field_readcount==-1) ? (void) (0) : __assert_fail ("fip->field_readcount==-1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5041, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5042, __PRETTY_FUNCTION__));
    if (dp->tdir_count>0xFFFF)
     err=TIFFReadDirEntryErrCount;
    else
    {
     err=TIFFReadDirEntryIfd8Array(tif,dp,&data);
     if (err==TIFFReadDirEntryErrOk)
     {
      int m;
      m=TIFFSetField(tif,dp->tdir_tag,(uint16)(dp->tdir_count),data);
      if (data!=0)
       _TIFFfree(data);
      if (!m)
       return(0);
     }
    }
   }
   break;
  case TIFF_SETGET_C32_ASCII:
   {
    uint8* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5063, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5064, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryByteArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_UINT8:
   {
    uint8* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5080, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5081, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryByteArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_SINT8:
   {
    int8* data = ((void*)0);
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5097, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5098, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntrySbyteArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_UINT16:
   {
    uint16* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5114, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5115, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryShortArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_SINT16:
   {
    int16* data = ((void*)0);
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5131, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5132, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntrySshortArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_UINT32:
   {
    uint32* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5148, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5149, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryLongArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_SINT32:
   {
    int32* data = ((void*)0);
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5165, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5166, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntrySlongArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_UINT64:
   {
    uint64* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5182, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5183, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryLong8Array(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_SINT64:
   {
    int64* data = ((void*)0);
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5199, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5200, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntrySlong8Array(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_FLOAT:
   {
    float* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5216, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5217, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryFloatArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_DOUBLE:
   {
    double* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5233, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5234, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryDoubleArray(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  case TIFF_SETGET_C32_IFD8:
   {
    uint64* data;
    ((fip->field_readcount==-3) ? (void) (0) : __assert_fail ("fip->field_readcount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5250, __PRETTY_FUNCTION__));
    ((fip->field_passcount==1) ? (void) (0) : __assert_fail ("fip->field_passcount==1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5251, __PRETTY_FUNCTION__));
    err=TIFFReadDirEntryIfd8Array(tif,dp,&data);
    if (err==TIFFReadDirEntryErrOk)
    {
     int m;
     m=TIFFSetField(tif,dp->tdir_tag,(uint32)(dp->tdir_count),data);
     if (data!=0)
      _TIFFfree(data);
     if (!m)
      return(0);
    }
   }
   break;
  default:
   ((0) ? (void) (0) : __assert_fail ("0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5265, __PRETTY_FUNCTION__));
   break;
 }
 if (err!=TIFFReadDirEntryErrOk)
 {
  TIFFReadDirEntryOutputErr(tif,err,module,fip->field_name,recover);
  return(0);
 }
 return(1);
}





static int
TIFFFetchStripThing(TIFF* tif, TIFFDirEntry* dir, uint32 nstrips, uint64** lpp)
{
 static const char module[] = "TIFFFetchStripThing";
 enum TIFFReadDirEntryErr err;
 uint64* data;
 err=TIFFReadDirEntryLong8Array(tif,dir,&data);
 if (err!=TIFFReadDirEntryErrOk)
 {
  TIFFReadDirEntryOutputErr(tif,err,module,TIFFFieldWithTag(tif,dir->tdir_tag)->field_name,0);
  return(0);
 }
 if (dir->tdir_count!=(uint64)nstrips)
 {
  uint64* resizeddata;
  resizeddata=(uint64*)_TIFFCheckMalloc(tif,nstrips,sizeof(uint64),"for strip array");
  if (resizeddata==0)
   return(0);
  if (dir->tdir_count<(uint64)nstrips)
  {
   _TIFFmemcpy(resizeddata,data,(uint32)dir->tdir_count*sizeof(uint64));
   _TIFFmemset(resizeddata+(uint32)dir->tdir_count,0,(nstrips-(uint32)dir->tdir_count)*sizeof(uint64));
  }
  else
   _TIFFmemcpy(resizeddata,data,nstrips*sizeof(uint64));
  _TIFFfree(data);
  data=resizeddata;
 }
 *lpp=data;
 return(1);
}




static int
TIFFFetchSubjectDistance(TIFF* tif, TIFFDirEntry* dir)
{
 static const char module[] = "TIFFFetchSubjectDistance";
 enum TIFFReadDirEntryErr err;
 UInt64Aligned_t m;
    m.l=0;
 ((sizeof(double)==8) ? (void) (0) : __assert_fail ("sizeof(double)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5322, __PRETTY_FUNCTION__));
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5323, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5324, __PRETTY_FUNCTION__));
 if (dir->tdir_count!=1)
  err=TIFFReadDirEntryErrCount;
 else if (dir->tdir_type!=TIFF_RATIONAL)
  err=TIFFReadDirEntryErrType;
 else
 {
  if (!(tif->tif_flags&0x80000))
  {
   uint32 offset;
   offset=*(uint32*)(&dir->tdir_offset);
   if (tif->tif_flags&0x00080)
    TIFFSwabLong(&offset);
   err=TIFFReadDirEntryData(tif,offset,8,m.i);
  }
  else
  {
   m.l=dir->tdir_offset.toff_long8;
   err=TIFFReadDirEntryErrOk;
  }
 }
 if (err==TIFFReadDirEntryErrOk)
 {
  double n;
  if (tif->tif_flags&0x00080)
   TIFFSwabArrayOfLong(m.i,2);
  if (m.i[0]==0)
   n=0.0;
  else if (m.i[0]==0xFFFFFFFF)





   n=-1.0;
  else
   n=(double)m.i[0]/(double)m.i[1];
  return(TIFFSetField(tif,dir->tdir_tag,n));
 }
 else
 {
  TIFFReadDirEntryOutputErr(tif,err,module,"SubjectDistance",1);
  return(0);
 }
}







static void
ChopUpSingleUncompressedStrip(TIFF* tif)
{
 register TIFFDirectory *td = &tif->tif_dir;
 uint64 bytecount;
 uint64 offset;
 uint32 rowblock;
 uint64 rowblockbytes;
 uint64 stripbytes;
 uint32 strip;
 uint64 nstrips64;
 uint32 nstrips32;
 uint32 rowsperstrip;
 uint64* newcounts;
 uint64* newoffsets;

 bytecount = td->td_stripbytecount[0];
 offset = td->td_stripoffset[0];
 ((td->td_planarconfig == 1) ? (void) (0) : __assert_fail ("td->td_planarconfig == 1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dirread.c", 5394, __PRETTY_FUNCTION__));
 if ((td->td_photometric == 6)&&
     (!(((tif)->tif_flags & 0x04000) != 0)))
  rowblock = td->td_ycbcrsubsampling[1];
 else
  rowblock = 1;
 rowblockbytes = TIFFVTileSize64(tif, rowblock);




 if (rowblockbytes > 8192) {
  stripbytes = rowblockbytes;
  rowsperstrip = rowblock;
 } else if (rowblockbytes > 0 ) {
  uint32 rowblocksperstrip;
  rowblocksperstrip = (uint32) (8192 / rowblockbytes);
  rowsperstrip = rowblocksperstrip * rowblock;
  stripbytes = rowblocksperstrip * rowblockbytes;
 }
 else
     return;




 if (rowsperstrip >= td->td_rowsperstrip)
  return;
 nstrips64 = ((((uint64)(bytecount))+(((uint64)(stripbytes))-1))/((uint64)(stripbytes)));
 if ((nstrips64==0)||(nstrips64>0xFFFFFFFF))
     return;
 nstrips32 = (uint32)nstrips64;

 newcounts = (uint64*) _TIFFCheckMalloc(tif, nstrips32, sizeof (uint64),
    "for chopped \"StripByteCounts\" array");
 newoffsets = (uint64*) _TIFFCheckMalloc(tif, nstrips32, sizeof (uint64),
    "for chopped \"StripOffsets\" array");
 if (newcounts == ((void*)0) || newoffsets == ((void*)0)) {




  if (newcounts != ((void*)0))
   _TIFFfree(newcounts);
  if (newoffsets != ((void*)0))
   _TIFFfree(newoffsets);
  return;
 }




 for (strip = 0; strip < nstrips32; strip++) {
  if (stripbytes > bytecount)
   stripbytes = bytecount;
  newcounts[strip] = stripbytes;
  newoffsets[strip] = offset;
  offset += stripbytes;
  bytecount -= stripbytes;
 }



 td->td_stripsperimage = td->td_nstrips = nstrips32;
 TIFFSetField(tif, 278, rowsperstrip);

 _TIFFfree(td->td_stripbytecount);
 _TIFFfree(td->td_stripoffset);
 td->td_stripbytecount = newcounts;
 td->td_stripoffset = newoffsets;
 td->td_stripbytecountsorted = 1;
}