# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c" 2
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
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
extern int TIFFCreateCustomDirectory(TIFF*,const TIFFFieldArray*);
extern int TIFFCreateEXIFDirectory(TIFF*);
extern int TIFFLastDirectory(TIFF*);
extern int TIFFSetDirectory(TIFF*, uint16);
extern int TIFFSetSubDirectory(TIFF*, uint64);
extern int TIFFUnlinkDirectory(TIFF*, uint16);
extern int TIFFSetField(TIFF*, uint32, ...);
extern int TIFFVSetField(TIFF*, uint32, va_list);
extern int TIFFUnsetField(TIFF*, uint32);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFWriteCustomDirectory(TIFF *, uint64 *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
# 417 "./tiffio.h"
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
extern void TIFFError(const char*, const char*, ...) __attribute__((__format__ (__printf__,2,3)));
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...) __attribute__((__format__ (__printf__,3,4)));
extern void TIFFWarning(const char*, const char*, ...) __attribute__((__format__ (__printf__,2,3)));
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...) __attribute__((__format__ (__printf__,3,4)));
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
# 61 "./tiffiop.h" 2

# 1 "./tif_dir.h" 1
# 33 "./tif_dir.h"
typedef struct {
 const TIFFField *info;
 int count;
 void *value;
} TIFFTagValue;
# 50 "./tif_dir.h"
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
 double* td_sminsamplevalue;
 double* td_smaxsamplevalue;
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
# 197 "./tif_dir.h"
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

extern int _TIFFFillStriles(TIFF*);

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
# 63 "./tiffiop.h" 2
# 75 "./tiffiop.h"
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
# 125 "./tiffiop.h"
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
# 264 "./tiffiop.h"
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
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c" 2
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
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
# 46 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c" 2

int TIFFFillStrip(TIFF* tif, uint32 strip);
int TIFFFillTile(TIFF* tif, uint32 tile);
int TIFFReInitJPEG_12( TIFF *tif, int scheme, int is_encode );
# 88 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
# 1 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jconfig.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h" 1
# 69 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef unsigned char JSAMPLE;
# 151 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef short JCOEF;
# 162 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef unsigned char JOCTET;
# 187 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef unsigned char UINT8;
# 199 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef unsigned short UINT16;







typedef short INT16;
# 216 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef long INT32;
# 229 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef unsigned int JDIMENSION;
# 280 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef void noreturn_t;
# 309 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jmorecfg.h"
typedef int boolean;
# 28 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h" 2
# 75 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;

typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef JBLOCKARRAY *JBLOCKIMAGE;

typedef JCOEF *JCOEFPTR;







typedef struct {




  UINT16 quantval[64];





  boolean sent_table;
} JQUANT_TBL;




typedef struct {

  UINT8 bits[17];

  UINT8 huffval[256];





  boolean sent_table;
} JHUFF_TBL;




typedef struct {



  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;




  int dc_tbl_no;
  int ac_tbl_no;
# 148 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  JDIMENSION width_in_blocks;
  JDIMENSION height_in_blocks;





  int DCT_h_scaled_size;
  int DCT_v_scaled_size;







  JDIMENSION downsampled_width;
  JDIMENSION downsampled_height;
# 174 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  boolean component_needed;



  int MCU_width;
  int MCU_height;
  int MCU_blocks;
  int MCU_sample_width;
  int last_col_width;
  int last_row_height;





  JQUANT_TBL * quant_table;


  void * dct_table;
} jpeg_component_info;




typedef struct {
  int comps_in_scan;
  int component_index[4];
  int Ss, Se;
  int Ah, Al;
} jpeg_scan_info;



typedef struct jpeg_marker_struct * jpeg_saved_marker_ptr;

struct jpeg_marker_struct {
  jpeg_saved_marker_ptr next;
  UINT8 marker;
  unsigned int original_length;
  unsigned int data_length;
  JOCTET * data;

};



typedef enum {
 JCS_UNKNOWN,
 JCS_GRAYSCALE,
 JCS_RGB,
 JCS_YCbCr,
 JCS_CMYK,
 JCS_YCCK,
 JCS_BG_RGB,
 JCS_BG_YCC
} J_COLOR_SPACE;



typedef enum {
 JCT_NONE = 0,
 JCT_SUBTRACT_GREEN = 1
} J_COLOR_TRANSFORM;



typedef enum {
 JDCT_ISLOW,
 JDCT_IFAST,
 JDCT_FLOAT
} J_DCT_METHOD;
# 255 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
typedef enum {
 JDITHER_NONE,
 JDITHER_ORDERED,
 JDITHER_FS
} J_DITHER_MODE;
# 276 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
struct jpeg_common_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;




};

typedef struct jpeg_common_struct * j_common_ptr;
typedef struct jpeg_compress_struct * j_compress_ptr;
typedef struct jpeg_decompress_struct * j_decompress_ptr;




struct jpeg_compress_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;


  struct jpeg_destination_mgr * dest;






  JDIMENSION image_width;
  JDIMENSION image_height;
  int input_components;
  J_COLOR_SPACE in_color_space;

  double input_gamma;
# 317 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  unsigned int scale_num, scale_denom;

  JDIMENSION jpeg_width;
  JDIMENSION jpeg_height;







  int data_precision;

  int num_components;
  J_COLOR_SPACE jpeg_color_space;

  jpeg_component_info * comp_info;


  JQUANT_TBL * quant_tbl_ptrs[4];
  int q_scale_factor[4];




  JHUFF_TBL * dc_huff_tbl_ptrs[4];
  JHUFF_TBL * ac_huff_tbl_ptrs[4];


  UINT8 arith_dc_L[16];
  UINT8 arith_dc_U[16];
  UINT8 arith_ac_K[16];

  int num_scans;
  const jpeg_scan_info * scan_info;





  boolean raw_data_in;
  boolean arith_code;
  boolean optimize_coding;
  boolean CCIR601_sampling;
  boolean do_fancy_downsampling;
  int smoothing_factor;
  J_DCT_METHOD dct_method;






  unsigned int restart_interval;
  int restart_in_rows;



  boolean write_JFIF_header;
  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;




  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean write_Adobe_marker;

  J_COLOR_TRANSFORM color_transform;







  JDIMENSION next_scanline;
# 404 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  boolean progressive_mode;
  int max_h_samp_factor;
  int max_v_samp_factor;

  int min_DCT_h_scaled_size;
  int min_DCT_v_scaled_size;

  JDIMENSION total_iMCU_rows;
# 422 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  int comps_in_scan;
  jpeg_component_info * cur_comp_info[4];


  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;

  int blocks_in_MCU;
  int MCU_membership[10];



  int Ss, Se, Ah, Al;

  int block_size;
  const int * natural_order;
  int lim_Se;




  struct jpeg_comp_master * master;
  struct jpeg_c_main_controller * main;
  struct jpeg_c_prep_controller * prep;
  struct jpeg_c_coef_controller * coef;
  struct jpeg_marker_writer * marker;
  struct jpeg_color_converter * cconvert;
  struct jpeg_downsampler * downsample;
  struct jpeg_forward_dct * fdct;
  struct jpeg_entropy_encoder * entropy;
  jpeg_scan_info * script_space;
  int script_space_size;
};




struct jpeg_decompress_struct {
  struct jpeg_error_mgr * err; struct jpeg_memory_mgr * mem; struct jpeg_progress_mgr * progress; void * client_data; boolean is_decompressor; int global_state;


  struct jpeg_source_mgr * src;




  JDIMENSION image_width;
  JDIMENSION image_height;
  int num_components;
  J_COLOR_SPACE jpeg_color_space;






  J_COLOR_SPACE out_color_space;

  unsigned int scale_num, scale_denom;

  double output_gamma;

  boolean buffered_image;
  boolean raw_data_out;

  J_DCT_METHOD dct_method;
  boolean do_fancy_upsampling;
  boolean do_block_smoothing;

  boolean quantize_colors;

  J_DITHER_MODE dither_mode;
  boolean two_pass_quantize;
  int desired_number_of_colors;

  boolean enable_1pass_quant;
  boolean enable_external_quant;
  boolean enable_2pass_quant;







  JDIMENSION output_width;
  JDIMENSION output_height;
  int out_color_components;
  int output_components;



  int rec_outbuf_height;
# 526 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  int actual_number_of_colors;
  JSAMPARRAY colormap;
# 537 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  JDIMENSION output_scanline;




  int input_scan_number;
  JDIMENSION input_iMCU_row;





  int output_scan_number;
  JDIMENSION output_iMCU_row;
# 559 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  int (*coef_bits)[64];
# 570 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  JQUANT_TBL * quant_tbl_ptrs[4];


  JHUFF_TBL * dc_huff_tbl_ptrs[4];
  JHUFF_TBL * ac_huff_tbl_ptrs[4];






  int data_precision;

  jpeg_component_info * comp_info;


  boolean is_baseline;
  boolean progressive_mode;
  boolean arith_code;

  UINT8 arith_dc_L[16];
  UINT8 arith_dc_U[16];
  UINT8 arith_ac_K[16];

  unsigned int restart_interval;




  boolean saw_JFIF_marker;

  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;
  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean saw_Adobe_marker;
  UINT8 Adobe_transform;

  J_COLOR_TRANSFORM color_transform;


  boolean CCIR601_sampling;





  jpeg_saved_marker_ptr marker_list;
# 627 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  int max_h_samp_factor;
  int max_v_samp_factor;

  int min_DCT_h_scaled_size;
  int min_DCT_v_scaled_size;

  JDIMENSION total_iMCU_rows;
# 642 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  JSAMPLE * sample_range_limit;






  int comps_in_scan;
  jpeg_component_info * cur_comp_info[4];


  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;

  int blocks_in_MCU;
  int MCU_membership[10];



  int Ss, Se, Ah, Al;



  int block_size;
  const int * natural_order;
  int lim_Se;





  int unread_marker;




  struct jpeg_decomp_master * master;
  struct jpeg_d_main_controller * main;
  struct jpeg_d_coef_controller * coef;
  struct jpeg_d_post_controller * post;
  struct jpeg_input_controller * inputctl;
  struct jpeg_marker_reader * marker;
  struct jpeg_entropy_decoder * entropy;
  struct jpeg_inverse_dct * idct;
  struct jpeg_upsampler * upsample;
  struct jpeg_color_deconverter * cconvert;
  struct jpeg_color_quantizer * cquantize;
};
# 702 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
struct jpeg_error_mgr {

  noreturn_t (*error_exit) (j_common_ptr cinfo);

  void (*emit_message) (j_common_ptr cinfo, int msg_level);

  void (*output_message) (j_common_ptr cinfo);

  void (*format_message) (j_common_ptr cinfo, char * buffer);


  void (*reset_error_mgr) (j_common_ptr cinfo);




  int msg_code;

  union {
    int i[8];
    char s[80];
  } msg_parm;



  int trace_level;







  long num_warnings;
# 747 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
  const char * const * jpeg_message_table;
  int last_jpeg_message;



  const char * const * addon_message_table;
  int first_addon_message;
  int last_addon_message;
};




struct jpeg_progress_mgr {
  void (*progress_monitor) (j_common_ptr cinfo);

  long pass_counter;
  long pass_limit;
  int completed_passes;
  int total_passes;
};




struct jpeg_destination_mgr {
  JOCTET * next_output_byte;
  size_t free_in_buffer;

  void (*init_destination) (j_compress_ptr cinfo);
  boolean (*empty_output_buffer) (j_compress_ptr cinfo);
  void (*term_destination) (j_compress_ptr cinfo);
};




struct jpeg_source_mgr {
  const JOCTET * next_input_byte;
  size_t bytes_in_buffer;

  void (*init_source) (j_decompress_ptr cinfo);
  boolean (*fill_input_buffer) (j_decompress_ptr cinfo);
  void (*skip_input_data) (j_decompress_ptr cinfo, long num_bytes);
  boolean (*resync_to_restart) (j_decompress_ptr cinfo, int desired);
  void (*term_source) (j_decompress_ptr cinfo);
};
# 811 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
typedef struct jvirt_sarray_control * jvirt_sarray_ptr;
typedef struct jvirt_barray_control * jvirt_barray_ptr;


struct jpeg_memory_mgr {

  void * (*alloc_small) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);

  void * (*alloc_large) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);

  JSAMPARRAY (*alloc_sarray) (j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows);


  JBLOCKARRAY (*alloc_barray) (j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows);


  jvirt_sarray_ptr (*request_virt_sarray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess);





  jvirt_barray_ptr (*request_virt_barray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess);





  void (*realize_virt_arrays) (j_common_ptr cinfo);
  JSAMPARRAY (*access_virt_sarray) (j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);




  JBLOCKARRAY (*access_virt_barray) (j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);




  void (*free_pool) (j_common_ptr cinfo, int pool_id);
  void (*self_destruct) (j_common_ptr cinfo);






  long max_memory_to_use;


  long max_alloc_chunk;
};





typedef boolean (*jpeg_marker_parser_method) (j_decompress_ptr cinfo);
# 948 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
extern struct jpeg_error_mgr * jpeg_std_error
 (struct jpeg_error_mgr * err);
# 964 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
extern void jpeg_CreateCompress (j_compress_ptr cinfo, int version, size_t structsize);

extern void jpeg_CreateDecompress (j_decompress_ptr cinfo, int version, size_t structsize);


extern void jpeg_destroy_compress (j_compress_ptr cinfo);
extern void jpeg_destroy_decompress (j_decompress_ptr cinfo);



extern void jpeg_stdio_dest (j_compress_ptr cinfo, FILE * outfile);
extern void jpeg_stdio_src (j_decompress_ptr cinfo, FILE * infile);


extern void jpeg_mem_dest (j_compress_ptr cinfo, unsigned char ** outbuffer, unsigned long * outsize);


extern void jpeg_mem_src (j_decompress_ptr cinfo, unsigned char * inbuffer, unsigned long insize);




extern void jpeg_set_defaults (j_compress_ptr cinfo);

extern void jpeg_set_colorspace (j_compress_ptr cinfo, J_COLOR_SPACE colorspace);

extern void jpeg_default_colorspace (j_compress_ptr cinfo);
extern void jpeg_set_quality (j_compress_ptr cinfo, int quality, boolean force_baseline);

extern void jpeg_set_linear_quality (j_compress_ptr cinfo, int scale_factor, boolean force_baseline);


extern void jpeg_default_qtables (j_compress_ptr cinfo, boolean force_baseline);

extern void jpeg_add_quant_table (j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline);



extern int jpeg_quality_scaling (int quality);
extern void jpeg_simple_progression (j_compress_ptr cinfo);
extern void jpeg_suppress_tables (j_compress_ptr cinfo, boolean suppress);

extern JQUANT_TBL * jpeg_alloc_quant_table (j_common_ptr cinfo);
extern JHUFF_TBL * jpeg_alloc_huff_table (j_common_ptr cinfo);


extern void jpeg_start_compress (j_compress_ptr cinfo, boolean write_all_tables);

extern JDIMENSION jpeg_write_scanlines (j_compress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION num_lines);


extern void jpeg_finish_compress (j_compress_ptr cinfo);


extern void jpeg_calc_jpeg_dimensions (j_compress_ptr cinfo);


extern JDIMENSION jpeg_write_raw_data (j_compress_ptr cinfo, JSAMPIMAGE data, JDIMENSION num_lines);




extern void jpeg_write_marker
 (j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen);


extern void jpeg_write_m_header
 (j_compress_ptr cinfo, int marker, unsigned int datalen);
extern void jpeg_write_m_byte
 (j_compress_ptr cinfo, int val);


extern void jpeg_write_tables (j_compress_ptr cinfo);


extern int jpeg_read_header (j_decompress_ptr cinfo, boolean require_image);
# 1052 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
extern boolean jpeg_start_decompress (j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_scanlines (j_decompress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION max_lines);


extern boolean jpeg_finish_decompress (j_decompress_ptr cinfo);


extern JDIMENSION jpeg_read_raw_data (j_decompress_ptr cinfo, JSAMPIMAGE data, JDIMENSION max_lines);




extern boolean jpeg_has_multiple_scans (j_decompress_ptr cinfo);
extern boolean jpeg_start_output (j_decompress_ptr cinfo, int scan_number);

extern boolean jpeg_finish_output (j_decompress_ptr cinfo);
extern boolean jpeg_input_complete (j_decompress_ptr cinfo);
extern void jpeg_new_colormap (j_decompress_ptr cinfo);
extern int jpeg_consume_input (j_decompress_ptr cinfo);
# 1079 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
extern void jpeg_core_output_dimensions (j_decompress_ptr cinfo);
extern void jpeg_calc_output_dimensions (j_decompress_ptr cinfo);


extern void jpeg_save_markers
 (j_decompress_ptr cinfo, int marker_code, unsigned int length_limit);



extern void jpeg_set_marker_processor
 (j_decompress_ptr cinfo, int marker_code, jpeg_marker_parser_method routine);



extern jvirt_barray_ptr * jpeg_read_coefficients (j_decompress_ptr cinfo);
extern void jpeg_write_coefficients (j_compress_ptr cinfo, jvirt_barray_ptr * coef_arrays);

extern void jpeg_copy_critical_parameters (j_decompress_ptr srcinfo, j_compress_ptr dstinfo);
# 1105 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jpeglib.h"
extern void jpeg_abort_compress (j_compress_ptr cinfo);
extern void jpeg_abort_decompress (j_decompress_ptr cinfo);




extern void jpeg_abort (j_common_ptr cinfo);
extern void jpeg_destroy (j_common_ptr cinfo);


extern boolean jpeg_resync_to_restart (j_decompress_ptr cinfo, int desired);
# 89 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jerror.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/../build/benchmarks/libtiff-deps/jpeg-9a-build/include/jerror.h"
typedef enum {





JMSG_NOMESSAGE ,


JERR_BAD_ALIGN_TYPE ,
JERR_BAD_ALLOC_CHUNK ,
JERR_BAD_BUFFER_MODE ,
JERR_BAD_COMPONENT_ID ,
JERR_BAD_CROP_SPEC ,
JERR_BAD_DCT_COEF ,
JERR_BAD_DCTSIZE ,
JERR_BAD_DROP_SAMPLING ,

JERR_BAD_HUFF_TABLE ,
JERR_BAD_IN_COLORSPACE ,
JERR_BAD_J_COLORSPACE ,
JERR_BAD_LENGTH ,
JERR_BAD_LIB_VERSION ,

JERR_BAD_MCU_SIZE ,
JERR_BAD_POOL_ID ,
JERR_BAD_PRECISION ,
JERR_BAD_PROGRESSION ,

JERR_BAD_PROG_SCRIPT ,

JERR_BAD_SAMPLING ,
JERR_BAD_SCAN_SCRIPT ,
JERR_BAD_STATE ,
JERR_BAD_STRUCT_SIZE ,

JERR_BAD_VIRTUAL_ACCESS ,
JERR_BUFFER_SIZE ,
JERR_CANT_SUSPEND ,
JERR_CCIR601_NOTIMPL ,
JERR_COMPONENT_COUNT ,
JERR_CONVERSION_NOTIMPL ,
JERR_DAC_INDEX ,
JERR_DAC_VALUE ,
JERR_DHT_INDEX ,
JERR_DQT_INDEX ,
JERR_EMPTY_IMAGE ,
JERR_EMS_READ ,
JERR_EMS_WRITE ,
JERR_EOI_EXPECTED ,
JERR_FILE_READ ,
JERR_FILE_WRITE ,
JERR_FRACT_SAMPLE_NOTIMPL ,
JERR_HUFF_CLEN_OVERFLOW ,
JERR_HUFF_MISSING_CODE ,
JERR_IMAGE_TOO_BIG ,
JERR_INPUT_EMPTY ,
JERR_INPUT_EOF ,
JERR_MISMATCHED_QUANT_TABLE ,

JERR_MISSING_DATA ,
JERR_MODE_CHANGE ,
JERR_NOTIMPL ,
JERR_NOT_COMPILED ,
JERR_NO_ARITH_TABLE ,
JERR_NO_BACKING_STORE ,
JERR_NO_HUFF_TABLE ,
JERR_NO_IMAGE ,
JERR_NO_QUANT_TABLE ,
JERR_NO_SOI ,
JERR_OUT_OF_MEMORY ,
JERR_QUANT_COMPONENTS ,

JERR_QUANT_FEW_COLORS ,
JERR_QUANT_MANY_COLORS ,
JERR_SOF_BEFORE ,
JERR_SOF_DUPLICATE ,
JERR_SOF_NO_SOS ,
JERR_SOF_UNSUPPORTED ,
JERR_SOI_DUPLICATE ,
JERR_TFILE_CREATE ,
JERR_TFILE_READ ,
JERR_TFILE_SEEK ,
JERR_TFILE_WRITE ,

JERR_TOO_LITTLE_DATA ,
JERR_UNKNOWN_MARKER ,
JERR_VIRTUAL_BUG ,
JERR_WIDTH_OVERFLOW ,
JERR_XMS_READ ,
JERR_XMS_WRITE ,
JMSG_COPYRIGHT ,
JMSG_VERSION ,
JTRC_16BIT_TABLES ,

JTRC_ADOBE ,

JTRC_APP0 ,
JTRC_APP14 ,
JTRC_DAC ,
JTRC_DHT ,
JTRC_DQT ,
JTRC_DRI ,
JTRC_EMS_CLOSE ,
JTRC_EMS_OPEN ,
JTRC_EOI ,
JTRC_HUFFBITS ,
JTRC_JFIF ,
JTRC_JFIF_BADTHUMBNAILSIZE ,

JTRC_JFIF_EXTENSION ,

JTRC_JFIF_THUMBNAIL ,
JTRC_MISC_MARKER ,
JTRC_PARMLESS_MARKER ,
JTRC_QUANTVALS ,
JTRC_QUANT_3_NCOLORS ,
JTRC_QUANT_NCOLORS ,
JTRC_QUANT_SELECTED ,
JTRC_RECOVERY_ACTION ,
JTRC_RST ,
JTRC_SMOOTH_NOTIMPL ,

JTRC_SOF ,
JTRC_SOF_COMPONENT ,
JTRC_SOI ,
JTRC_SOS ,
JTRC_SOS_COMPONENT ,
JTRC_SOS_PARAMS ,
JTRC_TFILE_CLOSE ,
JTRC_TFILE_OPEN ,
JTRC_THUMB_JPEG ,

JTRC_THUMB_PALETTE ,

JTRC_THUMB_RGB ,

JTRC_UNKNOWN_IDS ,

JTRC_XMS_CLOSE ,
JTRC_XMS_OPEN ,
JWRN_ADOBE_XFORM ,
JWRN_ARITH_BAD_CODE ,
JWRN_BOGUS_PROGRESSION ,

JWRN_EXTRANEOUS_DATA ,

JWRN_HIT_MARKER ,
JWRN_HUFF_BAD_CODE ,
JWRN_JFIF_MAJOR ,
JWRN_JPEG_EOF ,
JWRN_MUST_RESYNC ,

JWRN_NOT_SEQUENTIAL ,
JWRN_TOO_MUCH_DATA ,



  JMSG_LASTMSGCODE
} J_MESSAGE_CODE;
# 90 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c" 2
# 121 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
typedef struct jpeg_destination_mgr jpeg_destination_mgr;
typedef struct jpeg_source_mgr jpeg_source_mgr;
typedef struct jpeg_error_mgr jpeg_error_mgr;
# 138 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
typedef struct {
 union {
  struct jpeg_compress_struct c;
  struct jpeg_decompress_struct d;
  struct jpeg_common_struct comm;
 } cinfo;
 int cinfo_initialized;

 jpeg_error_mgr err;
 jmp_buf exit_jmpbuf;




 jpeg_destination_mgr dest;
 jpeg_source_mgr src;

 TIFF* tif;
 uint16 photometric;
 uint16 h_sampling;
 uint16 v_sampling;
 tmsize_t bytesperline;

 JSAMPARRAY ds_buffer[10];
 int scancount;
 int samplesperclump;

 TIFFVGetMethod vgetparent;
 TIFFVSetMethod vsetparent;
 TIFFPrintMethod printdir;
 TIFFStripMethod defsparent;
 TIFFTileMethod deftparent;

 void* jpegtables;
 uint32 jpegtables_length;
 int jpegquality;
 int jpegcolormode;
 int jpegtablesmode;

        int ycbcrsampling_fetched;
} JPEGState;



static int JPEGDecode(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s);
static int JPEGDecodeRaw(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s);
static int JPEGEncode(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s);
static int JPEGEncodeRaw(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s);
static int JPEGInitializeLibJPEG(TIFF * tif, int decode );
static int DecodeRowError(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s);



static const TIFFField jpegFields[] = {
    { 347, -3, -3, TIFF_UNDEFINED, 0, TIFF_SETGET_C32_UINT8, TIFF_SETGET_C32_UINT8, (66 +0), 0, 1, "JPEGTables", ((void*)0) },
    { 65537, 0, 0, TIFF_NOTYPE, 0, TIFF_SETGET_INT, TIFF_SETGET_UNDEFINED, 0, 1, 0, "", ((void*)0) },
    { 65538, 0, 0, TIFF_NOTYPE, 0, TIFF_SETGET_INT, TIFF_SETGET_UNDEFINED, 0, 0, 0, "", ((void*)0) },
    { 65539, 0, 0, TIFF_NOTYPE, 0, TIFF_SETGET_INT, TIFF_SETGET_UNDEFINED, 0, 0, 0, "", ((void*)0) }
};
# 212 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
static void
TIFFjpeg_error_exit(j_common_ptr cinfo)
{
 JPEGState *sp = (JPEGState *) cinfo;
 char buffer[200];

 (*cinfo->err->format_message) (cinfo, buffer);
 TIFFErrorExt(sp->tif->tif_clientdata, "JPEGLib", "%s", buffer);
 jpeg_abort(cinfo);
 longjmp(sp->exit_jmpbuf,1);
}






static void
TIFFjpeg_output_message(j_common_ptr cinfo)
{
 char buffer[200];

 (*cinfo->err->format_message) (cinfo, buffer);
 TIFFWarningExt(((JPEGState *) cinfo)->tif->tif_clientdata, "JPEGLib", "%s", buffer);
}
# 247 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
static int
TIFFjpeg_create_compress(JPEGState* sp)
{

 sp->cinfo.c.err = jpeg_std_error(&sp->err);
 sp->err.error_exit = TIFFjpeg_error_exit;
 sp->err.output_message = TIFFjpeg_output_message;

 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_CreateCompress((&sp->cinfo.c), 90, (size_t) sizeof(struct jpeg_compress_struct))),1)));
}

static int
TIFFjpeg_create_decompress(JPEGState* sp)
{

 sp->cinfo.d.err = jpeg_std_error(&sp->err);
 sp->err.error_exit = TIFFjpeg_error_exit;
 sp->err.output_message = TIFFjpeg_output_message;

 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_CreateDecompress((&sp->cinfo.d), 90, (size_t) sizeof(struct jpeg_decompress_struct))),1)));
}

static int
TIFFjpeg_set_defaults(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_set_defaults(&sp->cinfo.c)),1)));
}

static int
TIFFjpeg_set_colorspace(JPEGState* sp, J_COLOR_SPACE colorspace)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_set_colorspace(&sp->cinfo.c, colorspace)),1)));
}

static int
TIFFjpeg_set_quality(JPEGState* sp, int quality, boolean force_baseline)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_set_quality(&sp->cinfo.c, quality, force_baseline)),1)));

}

static int
TIFFjpeg_suppress_tables(JPEGState* sp, boolean suppress)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_suppress_tables(&sp->cinfo.c, suppress)),1)));
}

static int
TIFFjpeg_start_compress(JPEGState* sp, boolean write_all_tables)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_start_compress(&sp->cinfo.c, write_all_tables)),1)));

}

static int
TIFFjpeg_write_scanlines(JPEGState* sp, JSAMPARRAY scanlines, int num_lines)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (-1) : ((int) jpeg_write_scanlines(&sp->cinfo.c, scanlines, (JDIMENSION) num_lines)));

}

static int
TIFFjpeg_write_raw_data(JPEGState* sp, JSAMPIMAGE data, int num_lines)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (-1) : ((int) jpeg_write_raw_data(&sp->cinfo.c, data, (JDIMENSION) num_lines)));

}

static int
TIFFjpeg_finish_compress(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_finish_compress(&sp->cinfo.c)),1)));
}

static int
TIFFjpeg_write_tables(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_write_tables(&sp->cinfo.c)),1)));
}

static int
TIFFjpeg_read_header(JPEGState* sp, boolean require_image)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (-1) : (jpeg_read_header(&sp->cinfo.d, require_image)));
}

static int
TIFFjpeg_start_decompress(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_start_decompress(&sp->cinfo.d)),1)));
}

static int
TIFFjpeg_read_scanlines(JPEGState* sp, JSAMPARRAY scanlines, int max_lines)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (-1) : ((int) jpeg_read_scanlines(&sp->cinfo.d, scanlines, (JDIMENSION) max_lines)));

}

static int
TIFFjpeg_read_raw_data(JPEGState* sp, JSAMPIMAGE data, int max_lines)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (-1) : ((int) jpeg_read_raw_data(&sp->cinfo.d, data, (JDIMENSION) max_lines)));

}

static int
TIFFjpeg_finish_decompress(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (-1) : ((int) jpeg_finish_decompress(&sp->cinfo.d)));
}

static int
TIFFjpeg_abort(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_abort(&sp->cinfo.comm)),1)));
}

static int
TIFFjpeg_destroy(JPEGState* sp)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? (0) : (((jpeg_destroy(&sp->cinfo.comm)),1)));
}

static JSAMPARRAY
TIFFjpeg_alloc_sarray(JPEGState* sp, int pool_id,
        JDIMENSION samplesperrow, JDIMENSION numrows)
{
 return (_setjmp ((sp)->exit_jmpbuf) ? ((JSAMPARRAY) ((void*)0)) : ((*sp->cinfo.comm.mem->alloc_sarray) (&sp->cinfo.comm, pool_id, samplesperrow, numrows)));


}







static void
std_init_destination(j_compress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;
 TIFF* tif = sp->tif;

 sp->dest.next_output_byte = (JOCTET*) tif->tif_rawdata;
 sp->dest.free_in_buffer = (size_t) tif->tif_rawdatasize;
}

static boolean
std_empty_output_buffer(j_compress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;
 TIFF* tif = sp->tif;


 tif->tif_rawcc = tif->tif_rawdatasize;
# 417 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
 TIFFFlushData1(tif);
 sp->dest.next_output_byte = (JOCTET*) tif->tif_rawdata;
 sp->dest.free_in_buffer = (size_t) tif->tif_rawdatasize;

 return (1);
}

static void
std_term_destination(j_compress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;
 TIFF* tif = sp->tif;

 tif->tif_rawcp = (uint8*) sp->dest.next_output_byte;
 tif->tif_rawcc =
     tif->tif_rawdatasize - (tmsize_t) sp->dest.free_in_buffer;

}

static void
TIFFjpeg_data_dest(JPEGState* sp, TIFF* tif)
{
 (void) tif;
 sp->cinfo.c.dest = &sp->dest;
 sp->dest.init_destination = std_init_destination;
 sp->dest.empty_output_buffer = std_empty_output_buffer;
 sp->dest.term_destination = std_term_destination;
}





static void
tables_init_destination(j_compress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;


 sp->dest.next_output_byte = (JOCTET*) sp->jpegtables;
 sp->dest.free_in_buffer = (size_t) sp->jpegtables_length;
}

static boolean
tables_empty_output_buffer(j_compress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;
 void* newbuf;


 newbuf = _TIFFrealloc((void*) sp->jpegtables,
         (tmsize_t) (sp->jpegtables_length + 1000));
 if (newbuf == ((void*)0))
  ((cinfo)->err->msg_code = (JERR_OUT_OF_MEMORY), (cinfo)->err->msg_parm.i[0] = (100), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
 sp->dest.next_output_byte = (JOCTET*) newbuf + sp->jpegtables_length;
 sp->dest.free_in_buffer = (size_t) 1000;
 sp->jpegtables = newbuf;
 sp->jpegtables_length += 1000;
 return (1);
}

static void
tables_term_destination(j_compress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;


 sp->jpegtables_length -= (uint32) sp->dest.free_in_buffer;
}

static int
TIFFjpeg_tables_dest(JPEGState* sp, TIFF* tif)
{
 (void) tif;




 if (sp->jpegtables)
  _TIFFfree(sp->jpegtables);
 sp->jpegtables_length = 1000;
 sp->jpegtables = (void*) _TIFFmalloc((tmsize_t) sp->jpegtables_length);
 if (sp->jpegtables == ((void*)0)) {
  sp->jpegtables_length = 0;
  TIFFErrorExt(sp->tif->tif_clientdata, "TIFFjpeg_tables_dest", "No space for JPEGTables");
  return (0);
 }
 sp->cinfo.c.dest = &sp->dest;
 sp->dest.init_destination = tables_init_destination;
 sp->dest.empty_output_buffer = tables_empty_output_buffer;
 sp->dest.term_destination = tables_term_destination;
 return (1);
}






static void
std_init_source(j_decompress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;
 TIFF* tif = sp->tif;

 sp->src.next_input_byte = (const JOCTET*) tif->tif_rawdata;
 sp->src.bytes_in_buffer = (size_t) tif->tif_rawcc;
}

static boolean
std_fill_input_buffer(j_decompress_ptr cinfo)
{
 JPEGState* sp = (JPEGState* ) cinfo;
 static const JOCTET dummy_EOI[2] = { 0xFF, 0xD9 };
# 555 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
 ((cinfo)->err->msg_code = (JWRN_JPEG_EOF), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), -1));

 sp->src.next_input_byte = dummy_EOI;
 sp->src.bytes_in_buffer = 2;
 return (1);
}

static void
std_skip_input_data(j_decompress_ptr cinfo, long num_bytes)
{
 JPEGState* sp = (JPEGState*) cinfo;

 if (num_bytes > 0) {
  if ((size_t)num_bytes > sp->src.bytes_in_buffer) {

   (void) std_fill_input_buffer(cinfo);
  } else {
   sp->src.next_input_byte += (size_t) num_bytes;
   sp->src.bytes_in_buffer -= (size_t) num_bytes;
  }
 }
}

static void
std_term_source(j_decompress_ptr cinfo)
{

 (void) cinfo;
}

static void
TIFFjpeg_data_src(JPEGState* sp, TIFF* tif)
{
 (void) tif;
 sp->cinfo.d.src = &sp->src;
 sp->src.init_source = std_init_source;
 sp->src.fill_input_buffer = std_fill_input_buffer;
 sp->src.skip_input_data = std_skip_input_data;
 sp->src.resync_to_restart = jpeg_resync_to_restart;
 sp->src.term_source = std_term_source;
 sp->src.bytes_in_buffer = 0;
 sp->src.next_input_byte = ((void*)0);
}






static void
tables_init_source(j_decompress_ptr cinfo)
{
 JPEGState* sp = (JPEGState*) cinfo;

 sp->src.next_input_byte = (const JOCTET*) sp->jpegtables;
 sp->src.bytes_in_buffer = (size_t) sp->jpegtables_length;
}

static void
TIFFjpeg_tables_src(JPEGState* sp, TIFF* tif)
{
 TIFFjpeg_data_src(sp, tif);
 sp->src.init_source = tables_init_source;
}
# 627 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
static int
alloc_downsampled_buffers(TIFF* tif, jpeg_component_info* comp_info,
     int num_components)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 int ci;
 jpeg_component_info* compptr;
 JSAMPARRAY buf;
 int samples_per_clump = 0;

 for (ci = 0, compptr = comp_info; ci < num_components;
      ci++, compptr++) {
  samples_per_clump += compptr->h_samp_factor *
   compptr->v_samp_factor;
  buf = TIFFjpeg_alloc_sarray(sp, 1,
    compptr->width_in_blocks * 8,
    (JDIMENSION) (compptr->v_samp_factor*8));
  if (buf == ((void*)0))
   return (0);
  sp->ds_buffer[ci] = buf;
 }
 sp->samplesperclump = samples_per_clump;
 return (1);
}
# 669 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
struct JPEGFixupTagsSubsamplingData
{
 TIFF* tif;
 void* buffer;
 uint32 buffersize;
 uint8* buffercurrentbyte;
 uint32 bufferbytesleft;
 uint64 fileoffset;
 uint64 filebytesleft;
 uint8 filepositioned;
};
static void JPEGFixupTagsSubsampling(TIFF* tif);
static int JPEGFixupTagsSubsamplingSec(struct JPEGFixupTagsSubsamplingData* data);
static int JPEGFixupTagsSubsamplingReadByte(struct JPEGFixupTagsSubsamplingData* data, uint8* result);
static int JPEGFixupTagsSubsamplingReadWord(struct JPEGFixupTagsSubsamplingData* data, uint16* result);
static void JPEGFixupTagsSubsamplingSkip(struct JPEGFixupTagsSubsamplingData* data, uint16 skiplength);



static int
JPEGFixupTags(TIFF* tif)
{

 if ((tif->tif_dir.td_photometric==6)&&
     (tif->tif_dir.td_planarconfig==1)&&
     (tif->tif_dir.td_samplesperpixel==3))
  JPEGFixupTagsSubsampling(tif);


 return(1);
}



static void
JPEGFixupTagsSubsampling(TIFF* tif)
{
# 726 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
 static const char module[] = "JPEGFixupTagsSubsampling";
 struct JPEGFixupTagsSubsamplingData m;

        _TIFFFillStriles( tif );

        if( tif->tif_dir.td_stripbytecount == ((void*)0)
            || tif->tif_dir.td_stripbytecount[0] == 0 )
        {



            return;
        }

 m.tif=tif;
 m.buffersize=2048;
 m.buffer=_TIFFmalloc(m.buffersize);
 if (m.buffer==((void*)0))
 {
  TIFFWarningExt(tif->tif_clientdata,module,
      "Unable to allocate memory for auto-correcting of subsampling values; auto-correcting skipped");
  return;
 }
 m.buffercurrentbyte=((void*)0);
 m.bufferbytesleft=0;
 m.fileoffset=tif->tif_dir.td_stripoffset[0];
 m.filepositioned=0;
 m.filebytesleft=tif->tif_dir.td_stripbytecount[0];
 if (!JPEGFixupTagsSubsamplingSec(&m))
  TIFFWarningExt(tif->tif_clientdata,module,
      "Unable to auto-correct subsampling values, likely corrupt JPEG compressed data in first strip/tile; auto-correcting skipped");
 _TIFFfree(m.buffer);
}

static int
JPEGFixupTagsSubsamplingSec(struct JPEGFixupTagsSubsamplingData* data)
{
 static const char module[] = "JPEGFixupTagsSubsamplingSec";
 uint8 m;
 while (1)
 {
  while (1)
  {
   if (!JPEGFixupTagsSubsamplingReadByte(data,&m))
    return(0);
   if (m==255)
    break;
  }
  while (1)
  {
   if (!JPEGFixupTagsSubsamplingReadByte(data,&m))
    return(0);
   if (m!=255)
    break;
  }
  switch (m)
  {
   case 0xD8:

    break;
   case 0xFE:
   case 0xE0:
   case 0xE0 +1:
   case 0xE0 +2:
   case 0xE0 +3:
   case 0xE0 +4:
   case 0xE0 +5:
   case 0xE0 +6:
   case 0xE0 +7:
   case 0xE0 +8:
   case 0xE0 +9:
   case 0xE0 +10:
   case 0xE0 +11:
   case 0xE0 +12:
   case 0xE0 +13:
   case 0xE0 +14:
   case 0xE0 +15:
   case 0xDB:
   case 0xDA:
   case 0xC4:
   case 0xDD:

    {
     uint16 n;
     if (!JPEGFixupTagsSubsamplingReadWord(data,&n))
      return(0);
     if (n<2)
      return(0);
     n-=2;
     if (n>0)
      JPEGFixupTagsSubsamplingSkip(data,n);
    }
    break;
   case 0xC0:
   case 0xC1:

    {
     uint16 n;
     uint16 o;
     uint8 p;
     uint8 ph,pv;
     if (!JPEGFixupTagsSubsamplingReadWord(data,&n))
      return(0);
     if (n!=8+data->tif->tif_dir.td_samplesperpixel*3)
      return(0);
     JPEGFixupTagsSubsamplingSkip(data,7);
     if (!JPEGFixupTagsSubsamplingReadByte(data,&p))
      return(0);
     ph=(p>>4);
     pv=(p&15);
     JPEGFixupTagsSubsamplingSkip(data,1);
     for (o=1; o<data->tif->tif_dir.td_samplesperpixel; o++)
     {
      JPEGFixupTagsSubsamplingSkip(data,1);
      if (!JPEGFixupTagsSubsamplingReadByte(data,&p))
       return(0);
      if (p!=0x11)
      {
       TIFFWarningExt(data->tif->tif_clientdata,module,
           "Subsampling values inside JPEG compressed data have no TIFF equivalent, auto-correction of TIFF subsampling values failed");
       return(1);
      }
      JPEGFixupTagsSubsamplingSkip(data,1);
     }
     if (((ph!=1)&&(ph!=2)&&(ph!=4))||((pv!=1)&&(pv!=2)&&(pv!=4)))
     {
      TIFFWarningExt(data->tif->tif_clientdata,module,
          "Subsampling values inside JPEG compressed data have no TIFF equivalent, auto-correction of TIFF subsampling values failed");
      return(1);
     }
     if ((ph!=data->tif->tif_dir.td_ycbcrsubsampling[0])||(pv!=data->tif->tif_dir.td_ycbcrsubsampling[1]))
     {
      TIFFWarningExt(data->tif->tif_clientdata,module,
          "Auto-corrected former TIFF subsampling values [%d,%d] to match subsampling values inside JPEG compressed data [%d,%d]",
          (int)data->tif->tif_dir.td_ycbcrsubsampling[0],
          (int)data->tif->tif_dir.td_ycbcrsubsampling[1],
          (int)ph,(int)pv);
      data->tif->tif_dir.td_ycbcrsubsampling[0]=ph;
      data->tif->tif_dir.td_ycbcrsubsampling[1]=pv;
     }
    }
    return(1);
   default:
    return(0);
  }
 }
}

static int
JPEGFixupTagsSubsamplingReadByte(struct JPEGFixupTagsSubsamplingData* data, uint8* result)
{
 if (data->bufferbytesleft==0)
 {
  uint32 m;
  if (data->filebytesleft==0)
   return(0);
  if (!data->filepositioned)
  {
   ((*(data->tif)->tif_seekproc)((data->tif)->tif_clientdata,(data->fileoffset),(0)));
   data->filepositioned=1;
  }
  m=data->buffersize;
  if ((uint64)m>data->filebytesleft)
   m=(uint32)data->filebytesleft;
  ((m<0x80000000UL) ? (void) (0) : __assert_fail ("m<0x80000000UL", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 890, __PRETTY_FUNCTION__));
  if (((*(data->tif)->tif_readproc)((data->tif)->tif_clientdata,(data->buffer),((tmsize_t)m)))!=(tmsize_t)m)
   return(0);
  data->buffercurrentbyte=data->buffer;
  data->bufferbytesleft=m;
  data->fileoffset+=m;
  data->filebytesleft-=m;
 }
 *result=*data->buffercurrentbyte;
 data->buffercurrentbyte++;
 data->bufferbytesleft--;
 return(1);
}

static int
JPEGFixupTagsSubsamplingReadWord(struct JPEGFixupTagsSubsamplingData* data, uint16* result)
{
 uint8 ma;
 uint8 mb;
 if (!JPEGFixupTagsSubsamplingReadByte(data,&ma))
  return(0);
 if (!JPEGFixupTagsSubsamplingReadByte(data,&mb))
  return(0);
 *result=(ma<<8)|mb;
 return(1);
}

static void
JPEGFixupTagsSubsamplingSkip(struct JPEGFixupTagsSubsamplingData* data, uint16 skiplength)
{
 if ((uint32)skiplength<=data->bufferbytesleft)
 {
  data->buffercurrentbyte+=skiplength;
  data->bufferbytesleft-=skiplength;
 }
 else
 {
  uint16 m;
  m=skiplength-data->bufferbytesleft;
  if (m<=data->filebytesleft)
  {
   data->bufferbytesleft=0;
   data->fileoffset+=m;
   data->filebytesleft-=m;
   data->filepositioned=0;
  }
  else
  {
   data->bufferbytesleft=0;
   data->filebytesleft=0;
  }
 }
}




static int
JPEGSetupDecode(TIFF* tif)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory *td = &tif->tif_dir;






 JPEGInitializeLibJPEG( tif, 1 );

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 960, __PRETTY_FUNCTION__));
 ((sp->cinfo.comm.is_decompressor) ? (void) (0) : __assert_fail ("sp->cinfo.comm.is_decompressor", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 961, __PRETTY_FUNCTION__));


 if ((((tif)->tif_dir.td_fieldsset[((66 +0))/32]) & (((unsigned long)1L)<<(((66 +0))&0x1f)))) {
  TIFFjpeg_tables_src(sp, tif);
  if(TIFFjpeg_read_header(sp,0) != 2) {
   TIFFErrorExt(tif->tif_clientdata, "JPEGSetupDecode", "Bogus JPEGTables field");
   return (0);
  }
 }


 sp->photometric = td->td_photometric;
 switch (sp->photometric) {
 case 6:
  sp->h_sampling = td->td_ycbcrsubsampling[0];
  sp->v_sampling = td->td_ycbcrsubsampling[1];
  break;
 default:

  sp->h_sampling = 1;
  sp->v_sampling = 1;
  break;
 }


 TIFFjpeg_data_src(sp, tif);
 tif->tif_postdecode = _TIFFNoPostDecode;
 return (1);
}




static int
JPEGPreDecode(TIFF* tif, uint16 s)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory *td = &tif->tif_dir;
 static const char module[] = "JPEGPreDecode";
 uint32 segment_width, segment_height;
 int downsampled_output;
 int ci;

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1005, __PRETTY_FUNCTION__));

 if (sp->cinfo.comm.is_decompressor == 0)
 {
  tif->tif_setupdecode( tif );
 }

 ((sp->cinfo.comm.is_decompressor) ? (void) (0) : __assert_fail ("sp->cinfo.comm.is_decompressor", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1012, __PRETTY_FUNCTION__));




 if (!TIFFjpeg_abort(sp))
  return (0);




 if (TIFFjpeg_read_header(sp, 1) != 1)
  return (0);

        tif->tif_rawcp = (uint8*) sp->src.next_input_byte;
        tif->tif_rawcc = sp->src.bytes_in_buffer;




 segment_width = td->td_imagewidth;
 segment_height = td->td_imagelength - tif->tif_row;
 if ((((tif)->tif_flags & 0x00400) != 0)) {
                segment_width = td->td_tilewidth;
                segment_height = td->td_tilelength;
  sp->bytesperline = TIFFTileRowSize(tif);
 } else {
  if (segment_height > td->td_rowsperstrip)
   segment_height = td->td_rowsperstrip;
  sp->bytesperline = TIFFScanlineSize(tif);
 }
 if (td->td_planarconfig == 2 && s > 0) {




  segment_width = (((uint32)segment_width < (0xffffffff - (uint32)(sp->h_sampling-1))) ? ((((uint32)(segment_width))+(((uint32)(sp->h_sampling))-1))/((uint32)(sp->h_sampling))) : 0U);
  segment_height = (((uint32)segment_height < (0xffffffff - (uint32)(sp->v_sampling-1))) ? ((((uint32)(segment_height))+(((uint32)(sp->v_sampling))-1))/((uint32)(sp->v_sampling))) : 0U);
 }
 if (sp->cinfo.d.image_width < segment_width ||
     sp->cinfo.d.image_height < segment_height) {
  TIFFWarningExt(tif->tif_clientdata, module,
          "Improper JPEG strip/tile size, "
          "expected %dx%d, got %dx%d",
          segment_width, segment_height,
          sp->cinfo.d.image_width,
          sp->cinfo.d.image_height);
 }
 if (sp->cinfo.d.image_width > segment_width ||
     sp->cinfo.d.image_height > segment_height) {






  TIFFErrorExt(tif->tif_clientdata, module,
        "JPEG strip/tile size exceeds expected dimensions,"
        " expected %dx%d, got %dx%d",
        segment_width, segment_height,
        sp->cinfo.d.image_width, sp->cinfo.d.image_height);
  return (0);
 }
 if (sp->cinfo.d.num_components !=
     (td->td_planarconfig == 1 ?
      td->td_samplesperpixel : 1)) {
  TIFFErrorExt(tif->tif_clientdata, module, "Improper JPEG component count");
  return (0);
 }
# 1089 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
 if (sp->cinfo.d.data_precision != td->td_bitspersample) {
  TIFFErrorExt(tif->tif_clientdata, module, "Improper JPEG data precision");
  return (0);
 }

 if (td->td_planarconfig == 1) {

  if (sp->cinfo.d.comp_info[0].h_samp_factor != sp->h_sampling ||
      sp->cinfo.d.comp_info[0].v_samp_factor != sp->v_sampling) {
   TIFFErrorExt(tif->tif_clientdata, module,
           "Improper JPEG sampling factors %d,%d\n"
           "Apparently should be %d,%d.",
           sp->cinfo.d.comp_info[0].h_samp_factor,
           sp->cinfo.d.comp_info[0].v_samp_factor,
           sp->h_sampling, sp->v_sampling);
   return (0);
  }

  for (ci = 1; ci < sp->cinfo.d.num_components; ci++) {
   if (sp->cinfo.d.comp_info[ci].h_samp_factor != 1 ||
       sp->cinfo.d.comp_info[ci].v_samp_factor != 1) {
    TIFFErrorExt(tif->tif_clientdata, module, "Improper JPEG sampling factors");
    return (0);
   }
  }
 } else {

  if (sp->cinfo.d.comp_info[0].h_samp_factor != 1 ||
      sp->cinfo.d.comp_info[0].v_samp_factor != 1) {
   TIFFErrorExt(tif->tif_clientdata, module, "Improper JPEG sampling factors");
   return (0);
  }
 }
 downsampled_output = 0;
 if (td->td_planarconfig == 1 &&
     sp->photometric == 6 &&
     sp->jpegcolormode == 0x0001) {

  sp->cinfo.d.jpeg_color_space = JCS_YCbCr;
  sp->cinfo.d.out_color_space = JCS_RGB;
 } else {

  sp->cinfo.d.jpeg_color_space = JCS_UNKNOWN;
  sp->cinfo.d.out_color_space = JCS_UNKNOWN;
  if (td->td_planarconfig == 1 &&
      (sp->h_sampling != 1 || sp->v_sampling != 1))
   downsampled_output = 1;

 }
 if (downsampled_output) {

  sp->cinfo.d.raw_data_out = 1;

  sp->cinfo.d.do_fancy_upsampling = 0;

  tif->tif_decoderow = DecodeRowError;
  tif->tif_decodestrip = JPEGDecodeRaw;
  tif->tif_decodetile = JPEGDecodeRaw;
 } else {

  sp->cinfo.d.raw_data_out = 0;
  tif->tif_decoderow = JPEGDecode;
  tif->tif_decodestrip = JPEGDecode;
  tif->tif_decodetile = JPEGDecode;
 }

 if (!TIFFjpeg_start_decompress(sp))
  return (0);

 if (downsampled_output) {
  if (!alloc_downsampled_buffers(tif, sp->cinfo.d.comp_info,
            sp->cinfo.d.num_components))
   return (0);
  sp->scancount = 8;
 }
 return (1);
}





             static int
JPEGDecode(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);
 tmsize_t nrows;
 (void) s;





 sp->src.next_input_byte = (const JOCTET*) tif->tif_rawcp;
 sp->src.bytes_in_buffer = (size_t) tif->tif_rawcc;

        if( sp->bytesperline == 0 )
                return 0;

 nrows = cc / sp->bytesperline;
 if (cc % sp->bytesperline)
  TIFFWarningExt(tif->tif_clientdata, tif->tif_name, "fractional scanline not read");

 if( nrows > (tmsize_t) sp->cinfo.d.image_height )
  nrows = sp->cinfo.d.image_height;


 if (nrows)
 {
  JSAMPROW line_work_buf = ((void*)0);






  if( sp->cinfo.d.data_precision == 12 )

  {
   line_work_buf = (JSAMPROW)
       _TIFFmalloc(sizeof(short) * sp->cinfo.d.output_width
       * sp->cinfo.d.num_components );
  }

  do {
   if( line_work_buf != ((void*)0) )
   {





    if (TIFFjpeg_read_scanlines(sp, &line_work_buf, 1) != 1)
     return (0);

    if( sp->cinfo.d.data_precision == 12 )
    {
     int value_pairs = (sp->cinfo.d.output_width
         * sp->cinfo.d.num_components) / 2;
     int iPair;

     for( iPair = 0; iPair < value_pairs; iPair++ )
     {
      unsigned char *out_ptr =
          ((unsigned char *) buf) + iPair * 3;
      JSAMPLE *in_ptr = line_work_buf + iPair * 2;

      out_ptr[0] = (in_ptr[0] & 0xff0) >> 4;
      out_ptr[1] = ((in_ptr[0] & 0xf) << 4)
          | ((in_ptr[1] & 0xf00) >> 8);
      out_ptr[2] = ((in_ptr[1] & 0xff) >> 0);
     }
    }
    else if( sp->cinfo.d.data_precision == 8 )
    {
     int value_count = (sp->cinfo.d.output_width
         * sp->cinfo.d.num_components);
     int iValue;

     for( iValue = 0; iValue < value_count; iValue++ )
     {
      ((unsigned char *) buf)[iValue] =
          line_work_buf[iValue] & 0xff;
     }
    }
   }
   else
   {




    JSAMPROW bufptr = (JSAMPROW)buf;

    if (TIFFjpeg_read_scanlines(sp, &bufptr, 1) != 1)
     return (0);
   }

   ++tif->tif_row;
   buf += sp->bytesperline;
   cc -= sp->bytesperline;
  } while (--nrows > 0);

  if( line_work_buf != ((void*)0) )
   _TIFFfree( line_work_buf );
 }


        tif->tif_rawcp = (uint8*) sp->src.next_input_byte;
        tif->tif_rawcc = sp->src.bytes_in_buffer;


 return sp->cinfo.d.output_scanline < sp->cinfo.d.output_height
     || TIFFjpeg_finish_decompress(sp);
}

             static int
DecodeRowError(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s)

{
    (void) buf;
    (void) cc;
    (void) s;

    TIFFErrorExt(tif->tif_clientdata, "TIFFReadScanline",
                 "scanline oriented access is not supported for downsampled JPEG compressed images, consider enabling TIFF_JPEGCOLORMODE as JPEGCOLORMODE_RGB." );
    return 0;
}





             static int
JPEGDecodeRaw(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);
 tmsize_t nrows;
 (void) s;


 if ( (nrows = sp->cinfo.d.image_height) ) {


  JDIMENSION clumps_per_line = sp->cinfo.d.comp_info[1].downsampled_width;
  int samples_per_clump = sp->samplesperclump;
# 1327 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
  do {
   jpeg_component_info *compptr;
   int ci, clumpoffset;

                        if( cc < sp->bytesperline ) {
    TIFFErrorExt(tif->tif_clientdata, "JPEGDecodeRaw",
          "application buffer not large enough for all data.");
    return 0;
                        }


   if (sp->scancount >= 8) {
    int n = sp->cinfo.d.max_v_samp_factor * 8;
    if (TIFFjpeg_read_raw_data(sp, sp->ds_buffer, n) != n)
     return (0);
    sp->scancount = 0;
   }




   clumpoffset = 0;
   for (ci = 0, compptr = sp->cinfo.d.comp_info;
        ci < sp->cinfo.d.num_components;
        ci++, compptr++) {
    int hsamp = compptr->h_samp_factor;
    int vsamp = compptr->v_samp_factor;
    int ypos;

    for (ypos = 0; ypos < vsamp; ypos++) {
     JSAMPLE *inptr = sp->ds_buffer[ci][sp->scancount*vsamp + ypos];
     JDIMENSION nclump;



     JSAMPLE *outptr = (JSAMPLE*)buf + clumpoffset;
     if (cc < clumpoffset + samples_per_clump*(clumps_per_line-1) + hsamp) {
      TIFFErrorExt(tif->tif_clientdata, "JPEGDecodeRaw",
            "application buffer not large enough for all data, possible subsampling issue");
      return 0;
     }


     if (hsamp == 1) {

      for (nclump = clumps_per_line; nclump-- > 0; ) {
       outptr[0] = *inptr++;
       outptr += samples_per_clump;
      }
     } else {
      int xpos;


      for (nclump = clumps_per_line; nclump-- > 0; ) {
       for (xpos = 0; xpos < hsamp; xpos++)
        outptr[xpos] = *inptr++;
       outptr += samples_per_clump;
      }
     }
     clumpoffset += hsamp;
    }
   }
# 1419 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
   sp->scancount ++;
   tif->tif_row += sp->v_sampling;

   buf += sp->bytesperline;
   cc -= sp->bytesperline;

   nrows -= sp->v_sampling;
  } while (nrows > 0);





 }


 return sp->cinfo.d.output_scanline < sp->cinfo.d.output_height
  || TIFFjpeg_finish_decompress(sp);
}






static void
unsuppress_quant_table (JPEGState* sp, int tblno)
{
 JQUANT_TBL* qtbl;

 if ((qtbl = sp->cinfo.c.quant_tbl_ptrs[tblno]) != ((void*)0))
  qtbl->sent_table = 0;
}

static void
unsuppress_huff_table (JPEGState* sp, int tblno)
{
 JHUFF_TBL* htbl;

 if ((htbl = sp->cinfo.c.dc_huff_tbl_ptrs[tblno]) != ((void*)0))
  htbl->sent_table = 0;
 if ((htbl = sp->cinfo.c.ac_huff_tbl_ptrs[tblno]) != ((void*)0))
  htbl->sent_table = 0;
}

static int
prepare_JPEGTables(TIFF* tif)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);


 if (!TIFFjpeg_set_quality(sp, sp->jpegquality, 0))
  return (0);


 if (!TIFFjpeg_suppress_tables(sp, 1))
  return (0);
 if (sp->jpegtablesmode & 0x0001) {
  unsuppress_quant_table(sp, 0);
  if (sp->photometric == 6)
   unsuppress_quant_table(sp, 1);
 }
 if (sp->jpegtablesmode & 0x0002) {
  unsuppress_huff_table(sp, 0);
  if (sp->photometric == 6)
   unsuppress_huff_table(sp, 1);
 }

 if (!TIFFjpeg_tables_dest(sp, tif))
  return (0);

 if (!TIFFjpeg_write_tables(sp))
  return (0);

 return (1);
}

static int
JPEGSetupEncode(TIFF* tif)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory *td = &tif->tif_dir;
 static const char module[] = "JPEGSetupEncode";






        JPEGInitializeLibJPEG( tif, 0 );

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1510, __PRETTY_FUNCTION__));
 ((!sp->cinfo.comm.is_decompressor) ? (void) (0) : __assert_fail ("!sp->cinfo.comm.is_decompressor", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1511, __PRETTY_FUNCTION__));






 sp->cinfo.c.in_color_space = JCS_UNKNOWN;
 sp->cinfo.c.input_components = 1;
 if (!TIFFjpeg_set_defaults(sp))
  return (0);

 sp->photometric = td->td_photometric;
 switch (sp->photometric) {
 case 6:
  sp->h_sampling = td->td_ycbcrsubsampling[0];
  sp->v_sampling = td->td_ycbcrsubsampling[1];





  {
   float *ref;
   if (!TIFFGetField(tif, 532,
       &ref)) {
    float refbw[6];
    long top = 1L << td->td_bitspersample;
    refbw[0] = 0;
    refbw[1] = (float)(top-1L);
    refbw[2] = (float)(top>>1);
    refbw[3] = refbw[1];
    refbw[4] = refbw[2];
    refbw[5] = refbw[1];
    TIFFSetField(tif, 532,
          refbw);
   }
  }
  break;
 case 3:
 case 4:
  TIFFErrorExt(tif->tif_clientdata, module,
     "PhotometricInterpretation %d not allowed for JPEG",
     (int) sp->photometric);
  return (0);
 default:

  sp->h_sampling = 1;
  sp->v_sampling = 1;
  break;
 }
# 1574 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
 if (td->td_bitspersample != 8 )

 {
  TIFFErrorExt(tif->tif_clientdata, module, "BitsPerSample %d not allowed for JPEG",
     (int) td->td_bitspersample);
  return (0);
 }
 sp->cinfo.c.data_precision = td->td_bitspersample;



 if ((((tif)->tif_flags & 0x00400) != 0)) {
  if ((td->td_tilelength % (sp->v_sampling * 8)) != 0) {
   TIFFErrorExt(tif->tif_clientdata, module,
      "JPEG tile height must be multiple of %d",
      sp->v_sampling * 8);
   return (0);
  }
  if ((td->td_tilewidth % (sp->h_sampling * 8)) != 0) {
   TIFFErrorExt(tif->tif_clientdata, module,
      "JPEG tile width must be multiple of %d",
      sp->h_sampling * 8);
   return (0);
  }
 } else {
  if (td->td_rowsperstrip < td->td_imagelength &&
      (td->td_rowsperstrip % (sp->v_sampling * 8)) != 0) {
   TIFFErrorExt(tif->tif_clientdata, module,
      "RowsPerStrip must be multiple of %d for JPEG",
      sp->v_sampling * 8);
   return (0);
  }
 }


 if (sp->jpegtablesmode & (0x0001|0x0002)) {
                if( sp->jpegtables == ((void*)0)
                    || memcmp(sp->jpegtables,"\0\0\0\0\0\0\0\0\0",8) == 0 )
                {
                        if (!prepare_JPEGTables(tif))
                                return (0);


                        tif->tif_flags |= 0x00008;
                        (((tif)->tif_dir.td_fieldsset[((66 +0))/32]) |= (((unsigned long)1L)<<(((66 +0))&0x1f)));
                }
 } else {


  (((tif)->tif_dir.td_fieldsset[((66 +0))/32]) &= ~(((unsigned long)1L)<<(((66 +0))&0x1f)));
 }


 TIFFjpeg_data_dest(sp, tif);

 return (1);
}




static int
JPEGPreEncode(TIFF* tif, uint16 s)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory *td = &tif->tif_dir;
 static const char module[] = "JPEGPreEncode";
 uint32 segment_width, segment_height;
 int downsampled_input;

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1644, __PRETTY_FUNCTION__));

 if (sp->cinfo.comm.is_decompressor == 1)
 {
  tif->tif_setupencode( tif );
 }

 ((!sp->cinfo.comm.is_decompressor) ? (void) (0) : __assert_fail ("!sp->cinfo.comm.is_decompressor", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1651, __PRETTY_FUNCTION__));



 if ((((tif)->tif_flags & 0x00400) != 0)) {
  segment_width = td->td_tilewidth;
  segment_height = td->td_tilelength;
  sp->bytesperline = TIFFTileRowSize(tif);
 } else {
  segment_width = td->td_imagewidth;
  segment_height = td->td_imagelength - tif->tif_row;
  if (segment_height > td->td_rowsperstrip)
   segment_height = td->td_rowsperstrip;
  sp->bytesperline = TIFFScanlineSize(tif);
 }
 if (td->td_planarconfig == 2 && s > 0) {



  segment_width = (((uint32)segment_width < (0xffffffff - (uint32)(sp->h_sampling-1))) ? ((((uint32)(segment_width))+(((uint32)(sp->h_sampling))-1))/((uint32)(sp->h_sampling))) : 0U);
  segment_height = (((uint32)segment_height < (0xffffffff - (uint32)(sp->v_sampling-1))) ? ((((uint32)(segment_height))+(((uint32)(sp->v_sampling))-1))/((uint32)(sp->v_sampling))) : 0U);
 }
 if (segment_width > 65535 || segment_height > 65535) {
  TIFFErrorExt(tif->tif_clientdata, module, "Strip/tile too large for JPEG");
  return (0);
 }
 sp->cinfo.c.image_width = segment_width;
 sp->cinfo.c.image_height = segment_height;
 downsampled_input = 0;
 if (td->td_planarconfig == 1) {
  sp->cinfo.c.input_components = td->td_samplesperpixel;
  if (sp->photometric == 6) {
   if (sp->jpegcolormode == 0x0001) {
    sp->cinfo.c.in_color_space = JCS_RGB;
   } else {
    sp->cinfo.c.in_color_space = JCS_YCbCr;
    if (sp->h_sampling != 1 || sp->v_sampling != 1)
     downsampled_input = 1;
   }
   if (!TIFFjpeg_set_colorspace(sp, JCS_YCbCr))
    return (0);




   sp->cinfo.c.comp_info[0].h_samp_factor = sp->h_sampling;
   sp->cinfo.c.comp_info[0].v_samp_factor = sp->v_sampling;
  } else {
   if ((td->td_photometric == 0 || td->td_photometric == 1) && td->td_samplesperpixel == 1)
    sp->cinfo.c.in_color_space = JCS_GRAYSCALE;
   else if (td->td_photometric == 2 && td->td_samplesperpixel == 3)
    sp->cinfo.c.in_color_space = JCS_RGB;
   else if (td->td_photometric == 5 && td->td_samplesperpixel == 4)
    sp->cinfo.c.in_color_space = JCS_CMYK;
   else
    sp->cinfo.c.in_color_space = JCS_UNKNOWN;
   if (!TIFFjpeg_set_colorspace(sp, sp->cinfo.c.in_color_space))
    return (0);

  }
 } else {
  sp->cinfo.c.input_components = 1;
  sp->cinfo.c.in_color_space = JCS_UNKNOWN;
  if (!TIFFjpeg_set_colorspace(sp, JCS_UNKNOWN))
   return (0);
  sp->cinfo.c.comp_info[0].component_id = s;

  if (sp->photometric == 6 && s > 0) {
   sp->cinfo.c.comp_info[0].quant_tbl_no = 1;
   sp->cinfo.c.comp_info[0].dc_tbl_no = 1;
   sp->cinfo.c.comp_info[0].ac_tbl_no = 1;
  }
 }

 sp->cinfo.c.write_JFIF_header = 0;
 sp->cinfo.c.write_Adobe_marker = 0;

        if (!TIFFjpeg_set_quality(sp, sp->jpegquality, 0))
  return (0);
 if (! (sp->jpegtablesmode & 0x0001)) {
  unsuppress_quant_table(sp, 0);
  unsuppress_quant_table(sp, 1);
 }
 if (sp->jpegtablesmode & 0x0002)
  sp->cinfo.c.optimize_coding = 0;
 else
  sp->cinfo.c.optimize_coding = 1;
 if (downsampled_input) {

  sp->cinfo.c.raw_data_in = 1;
  tif->tif_encoderow = JPEGEncodeRaw;
  tif->tif_encodestrip = JPEGEncodeRaw;
  tif->tif_encodetile = JPEGEncodeRaw;
 } else {

  sp->cinfo.c.raw_data_in = 0;
  tif->tif_encoderow = JPEGEncode;
  tif->tif_encodestrip = JPEGEncode;
  tif->tif_encodetile = JPEGEncode;
 }

 if (!TIFFjpeg_start_compress(sp, 0))
  return (0);

 if (downsampled_input) {
  if (!alloc_downsampled_buffers(tif, sp->cinfo.c.comp_info,
            sp->cinfo.c.num_components))
   return (0);
 }
 sp->scancount = 0;

 return (1);
}





static int
JPEGEncode(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);
 tmsize_t nrows;
 JSAMPROW bufptr[1];
        short *line16 = ((void*)0);
        int line16_count = 0;

 (void) s;
 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1779, __PRETTY_FUNCTION__));

 nrows = cc / sp->bytesperline;
 if (cc % sp->bytesperline)
            TIFFWarningExt(tif->tif_clientdata, tif->tif_name,
                           "fractional scanline discarded");


        if( !(((tif)->tif_flags & 0x00400) != 0) && tif->tif_row+nrows > tif->tif_dir.td_imagelength )
            nrows = tif->tif_dir.td_imagelength - tif->tif_row;

        if( sp->cinfo.c.data_precision == 12 )
        {
            line16_count = (sp->bytesperline * 2) / 3;
            line16 = (short *) _TIFFmalloc(sizeof(short) * line16_count);

        }

 while (nrows-- > 0) {

            if( sp->cinfo.c.data_precision == 12 )
            {

                int value_pairs = line16_count / 2;
                int iPair;

  bufptr[0] = (JSAMPROW) line16;

                for( iPair = 0; iPair < value_pairs; iPair++ )
                {
                    unsigned char *in_ptr =
                        ((unsigned char *) buf) + iPair * 3;
                    JSAMPLE *out_ptr = (JSAMPLE *) (line16 + iPair * 2);

                    out_ptr[0] = (in_ptr[0] << 4) | ((in_ptr[1] & 0xf0) >> 4);
                    out_ptr[1] = ((in_ptr[1] & 0x0f) << 8) | in_ptr[2];
                }
            }
            else
            {
  bufptr[0] = (JSAMPROW) buf;
            }
            if (TIFFjpeg_write_scanlines(sp, bufptr, 1) != 1)
                return (0);
            if (nrows > 0)
                tif->tif_row++;
            buf += sp->bytesperline;
 }

        if( sp->cinfo.c.data_precision == 12 )
        {
            _TIFFfree( line16 );
        }

 return (1);
}





static int
JPEGEncodeRaw(TIFF* tif, uint8* buf, tmsize_t cc, uint16 s)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);
 JSAMPLE* inptr;
 JSAMPLE* outptr;
 tmsize_t nrows;
 JDIMENSION clumps_per_line, nclump;
 int clumpoffset, ci, xpos, ypos;
 jpeg_component_info* compptr;
 int samples_per_clump = sp->samplesperclump;
 tmsize_t bytesperclumpline;

 (void) s;
 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1854, __PRETTY_FUNCTION__));



 bytesperclumpline = (((sp->cinfo.c.image_width+sp->h_sampling-1)/sp->h_sampling)
        *(sp->h_sampling*sp->v_sampling+2)*sp->cinfo.c.data_precision+7)
       /8;

 nrows = ( cc / bytesperclumpline ) * sp->v_sampling;
 if (cc % bytesperclumpline)
  TIFFWarningExt(tif->tif_clientdata, tif->tif_name, "fractional scanline discarded");


 clumps_per_line = sp->cinfo.c.comp_info[1].downsampled_width;

 while (nrows > 0) {




  clumpoffset = 0;
  for (ci = 0, compptr = sp->cinfo.c.comp_info;
       ci < sp->cinfo.c.num_components;
       ci++, compptr++) {
      int hsamp = compptr->h_samp_factor;
      int vsamp = compptr->v_samp_factor;
      int padding = (int) (compptr->width_in_blocks * 8 -
      clumps_per_line * hsamp);
      for (ypos = 0; ypos < vsamp; ypos++) {
   inptr = ((JSAMPLE*) buf) + clumpoffset;
   outptr = sp->ds_buffer[ci][sp->scancount*vsamp + ypos];
   if (hsamp == 1) {

       for (nclump = clumps_per_line; nclump-- > 0; ) {
    *outptr++ = inptr[0];
    inptr += samples_per_clump;
       }
   } else {

       for (nclump = clumps_per_line; nclump-- > 0; ) {
    for (xpos = 0; xpos < hsamp; xpos++)
        *outptr++ = inptr[xpos];
    inptr += samples_per_clump;
       }
   }

   for (xpos = 0; xpos < padding; xpos++) {
       *outptr = outptr[-1];
       outptr++;
   }
   clumpoffset += hsamp;
      }
  }
  sp->scancount++;
  if (sp->scancount >= 8) {
   int n = sp->cinfo.c.max_v_samp_factor * 8;
   if (TIFFjpeg_write_raw_data(sp, sp->ds_buffer, n) != n)
    return (0);
   sp->scancount = 0;
  }
  tif->tif_row += sp->v_sampling;
  buf += bytesperclumpline;
  nrows -= sp->v_sampling;
 }
 return (1);
}




static int
JPEGPostEncode(TIFF* tif)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);

 if (sp->scancount > 0) {




  int ci, ypos, n;
  jpeg_component_info* compptr;

  for (ci = 0, compptr = sp->cinfo.c.comp_info;
       ci < sp->cinfo.c.num_components;
       ci++, compptr++) {
   int vsamp = compptr->v_samp_factor;
   tmsize_t row_width = compptr->width_in_blocks * 8
    * sizeof(JSAMPLE);
   for (ypos = sp->scancount * vsamp;
        ypos < 8 * vsamp; ypos++) {
    _TIFFmemcpy((void*)sp->ds_buffer[ci][ypos],
         (void*)sp->ds_buffer[ci][ypos-1],
         row_width);

   }
  }
  n = sp->cinfo.c.max_v_samp_factor * 8;
  if (TIFFjpeg_write_raw_data(sp, sp->ds_buffer, n) != n)
   return (0);
 }

 return (TIFFjpeg_finish_compress(((JPEGState*)(tif)->tif_data)));
}

static void
JPEGCleanup(TIFF* tif)
{
 JPEGState *sp = ((JPEGState*)(tif)->tif_data);

 ((sp != 0) ? (void) (0) : __assert_fail ("sp != 0", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 1964, __PRETTY_FUNCTION__));

 tif->tif_tagmethods.vgetfield = sp->vgetparent;
 tif->tif_tagmethods.vsetfield = sp->vsetparent;
 tif->tif_tagmethods.printdir = sp->printdir;

 if( sp != ((void*)0) ) {
  if( sp->cinfo_initialized )
      TIFFjpeg_destroy(sp);
  if (sp->jpegtables)
   _TIFFfree(sp->jpegtables);
 }
 _TIFFfree(tif->tif_data);
 tif->tif_data = ((void*)0);

 _TIFFSetDefaultCompressionState(tif);
}

static void
JPEGResetUpsampled( TIFF* tif )
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory* td = &tif->tif_dir;






 tif->tif_flags &= ~0x04000;
 if (td->td_planarconfig == 1) {
  if (td->td_photometric == 6 &&
      sp->jpegcolormode == 0x0001) {
   tif->tif_flags |= 0x04000;
  } else {





  }
 }





        if( tif->tif_tilesize > 0 )
            tif->tif_tilesize = (((tif)->tif_flags & 0x00400) != 0) ? TIFFTileSize(tif) : (tmsize_t)(-1);
        if( tif->tif_scanlinesize > 0 )
            tif->tif_scanlinesize = TIFFScanlineSize(tif);
}

static int
JPEGVSetField(TIFF* tif, uint32 tag, va_list ap)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 const TIFFField* fip;
 uint32 v32;

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 2024, __PRETTY_FUNCTION__));

 switch (tag) {
 case 347:
  v32 = (uint32) __builtin_va_arg(ap, uint32);
  if (v32 == 0) {

   return (0);
  }
  _TIFFsetByteArray(&sp->jpegtables, __builtin_va_arg(ap, void*),
      (long) v32);
  sp->jpegtables_length = v32;
  (((tif)->tif_dir.td_fieldsset[((66 +0))/32]) |= (((unsigned long)1L)<<(((66 +0))&0x1f)));
  break;
 case 65537:
  sp->jpegquality = (int) __builtin_va_arg(ap, int);
  return (1);
 case 65538:
  sp->jpegcolormode = (int) __builtin_va_arg(ap, int);
  JPEGResetUpsampled( tif );
  return (1);
 case 262:
 {
  int ret_value = (*sp->vsetparent)(tif, tag, ap);
  JPEGResetUpsampled( tif );
  return ret_value;
 }
 case 65539:
  sp->jpegtablesmode = (int) __builtin_va_arg(ap, int);
  return (1);
 case 530:

  sp->ycbcrsampling_fetched = 1;

  return (*sp->vsetparent)(tif, tag, ap);
 default:
  return (*sp->vsetparent)(tif, tag, ap);
 }

 if ((fip = TIFFFieldWithTag(tif, tag))) {
  (((tif)->tif_dir.td_fieldsset[(fip->field_bit)/32]) |= (((unsigned long)1L)<<((fip->field_bit)&0x1f)));
 } else {
  return (0);
 }

 tif->tif_flags |= 0x00008;
 return (1);
}

static int
JPEGVGetField(TIFF* tif, uint32 tag, va_list ap)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 2078, __PRETTY_FUNCTION__));

 switch (tag) {
  case 347:
   *__builtin_va_arg(ap, uint32*) = sp->jpegtables_length;
   *__builtin_va_arg(ap, void**) = sp->jpegtables;
   break;
  case 65537:
   *__builtin_va_arg(ap, int*) = sp->jpegquality;
   break;
  case 65538:
   *__builtin_va_arg(ap, int*) = sp->jpegcolormode;
   break;
  case 65539:
   *__builtin_va_arg(ap, int*) = sp->jpegtablesmode;
   break;
  default:
   return (*sp->vgetparent)(tif, tag, ap);
 }
 return (1);
}

static void
JPEGPrintDir(TIFF* tif, FILE* fd, long flags)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);

 ((sp != ((void*)0)) ? (void) (0) : __assert_fail ("sp != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 2105, __PRETTY_FUNCTION__));
 (void) flags;

        if( sp != ((void*)0) ) {
  if ((((tif)->tif_dir.td_fieldsset[((66 +0))/32]) & (((unsigned long)1L)<<(((66 +0))&0x1f))))
   fprintf(fd, "  JPEG Tables: (%lu bytes)\n",
    (unsigned long) sp->jpegtables_length);
  if (sp->printdir)
   (*sp->printdir)(tif, fd, flags);
 }
}

static uint32
JPEGDefaultStripSize(TIFF* tif, uint32 s)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory *td = &tif->tif_dir;

 s = (*sp->defsparent)(tif, s);
 if (s < td->td_imagelength)
  s = ((((uint32)s < (0xffffffff - (uint32)(td->td_ycbcrsubsampling[1] * 8 -1))) ? ((((uint32)(s))+(((uint32)(td->td_ycbcrsubsampling[1] * 8))-1))/((uint32)(td->td_ycbcrsubsampling[1] * 8))) : 0U)*(td->td_ycbcrsubsampling[1] * 8));
 return (s);
}

static void
JPEGDefaultTileSize(TIFF* tif, uint32* tw, uint32* th)
{
 JPEGState* sp = ((JPEGState*)(tif)->tif_data);
 TIFFDirectory *td = &tif->tif_dir;

 (*sp->deftparent)(tif, tw, th);
 *tw = ((((uint32)*tw < (0xffffffff - (uint32)(td->td_ycbcrsubsampling[0] * 8 -1))) ? ((((uint32)(*tw))+(((uint32)(td->td_ycbcrsubsampling[0] * 8))-1))/((uint32)(td->td_ycbcrsubsampling[0] * 8))) : 0U)*(td->td_ycbcrsubsampling[0] * 8));
 *th = ((((uint32)*th < (0xffffffff - (uint32)(td->td_ycbcrsubsampling[1] * 8 -1))) ? ((((uint32)(*th))+(((uint32)(td->td_ycbcrsubsampling[1] * 8))-1))/((uint32)(td->td_ycbcrsubsampling[1] * 8))) : 0U)*(td->td_ycbcrsubsampling[1] * 8));
}
# 2162 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
static int JPEGInitializeLibJPEG( TIFF * tif, int decompress )
{
    JPEGState* sp = ((JPEGState*)(tif)->tif_data);

    if(sp->cinfo_initialized)
    {
        if( !decompress && sp->cinfo.comm.is_decompressor )
            TIFFjpeg_destroy( sp );
        else if( decompress && !sp->cinfo.comm.is_decompressor )
            TIFFjpeg_destroy( sp );
        else
            return 1;

        sp->cinfo_initialized = 0;
    }




    if ( decompress ) {
        if (!TIFFjpeg_create_decompress(sp))
            return (0);
    } else {
        if (!TIFFjpeg_create_compress(sp))
            return (0);
    }

    sp->cinfo_initialized = 1;

    return 1;
}

int
TIFFInitJPEG(TIFF* tif, int scheme)
{
 JPEGState* sp;

 ((scheme == 7) ? (void) (0) : __assert_fail ("scheme == 7", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c", 2199, __PRETTY_FUNCTION__));




 if (!_TIFFMergeFields(tif, jpegFields, (sizeof (jpegFields) / sizeof ((jpegFields)[0])))) {
  TIFFErrorExt(tif->tif_clientdata,
        "TIFFInitJPEG",
        "Merging JPEG codec-specific tags failed");
  return 0;
 }




 tif->tif_data = (uint8*) _TIFFmalloc(sizeof (JPEGState));

 if (tif->tif_data == ((void*)0)) {
  TIFFErrorExt(tif->tif_clientdata,
        "TIFFInitJPEG", "No space for JPEG state block");
  return 0;
 }
        _TIFFmemset(tif->tif_data, 0, sizeof(JPEGState));

 sp = ((JPEGState*)(tif)->tif_data);
 sp->tif = tif;




 sp->vgetparent = tif->tif_tagmethods.vgetfield;
 tif->tif_tagmethods.vgetfield = JPEGVGetField;
 sp->vsetparent = tif->tif_tagmethods.vsetfield;
 tif->tif_tagmethods.vsetfield = JPEGVSetField;
 sp->printdir = tif->tif_tagmethods.printdir;
 tif->tif_tagmethods.printdir = JPEGPrintDir;


 sp->jpegtables = ((void*)0);
 sp->jpegtables_length = 0;
 sp->jpegquality = 75;
 sp->jpegcolormode = 0x0000;
 sp->jpegtablesmode = 0x0001 | 0x0002;
        sp->ycbcrsampling_fetched = 0;




 tif->tif_fixuptags = JPEGFixupTags;
 tif->tif_setupdecode = JPEGSetupDecode;
 tif->tif_predecode = JPEGPreDecode;
 tif->tif_decoderow = JPEGDecode;
 tif->tif_decodestrip = JPEGDecode;
 tif->tif_decodetile = JPEGDecode;
 tif->tif_setupencode = JPEGSetupEncode;
 tif->tif_preencode = JPEGPreEncode;
 tif->tif_postencode = JPEGPostEncode;
 tif->tif_encoderow = JPEGEncode;
 tif->tif_encodestrip = JPEGEncode;
 tif->tif_encodetile = JPEGEncode;
 tif->tif_cleanup = JPEGCleanup;
 sp->defsparent = tif->tif_defstripsize;
 tif->tif_defstripsize = JPEGDefaultStripSize;
 sp->deftparent = tif->tif_deftilesize;
 tif->tif_deftilesize = JPEGDefaultTileSize;
 tif->tif_flags |= 0x00100;

        sp->cinfo_initialized = 0;







        if( tif->tif_diroff == 0 )
        {
# 2285 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/libtiff/tif_jpeg.c"
            sp->jpegtables_length = 2000;
            sp->jpegtables = (void *) _TIFFmalloc(sp->jpegtables_length);

     _TIFFmemset(sp->jpegtables, 0, 2000);

        }

 return 1;
}
