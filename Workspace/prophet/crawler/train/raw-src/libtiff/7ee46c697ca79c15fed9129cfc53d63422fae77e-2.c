# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c" 2
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
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

extern uint32 TIFFFieldTag(const TIFFField*);
extern const char* TIFFFieldName(const TIFFField*);
extern TIFFDataType TIFFFieldDataType(const TIFFField*);
extern int TIFFFieldPassCount(const TIFFField*);
extern int TIFFFieldReadCount(const TIFFField*);
extern int TIFFFieldWriteCount(const TIFFField*);

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
# 424 "./tiffio.h"
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
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c" 2
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
static void
setByteArray(void** vpp, void* vp, size_t nmemb, size_t elem_size)
{
 if (*vpp)
  _TIFFfree(*vpp), *vpp = 0;
 if (vp) {
  tmsize_t bytes = (tmsize_t)(nmemb * elem_size);
  if (elem_size && bytes / elem_size == nmemb)
   *vpp = (void*) _TIFFmalloc(bytes);
  if (*vpp)
   _TIFFmemcpy(*vpp, vp, bytes);
 }
}
void _TIFFsetByteArray(void** vpp, void* vp, uint32 n)
    { setByteArray(vpp, vp, n, 1); }
void _TIFFsetString(char** cpp, char* cp)
    { setByteArray((void**) cpp, (void*) cp, strlen(cp)+1, 1); }
void _TIFFsetNString(char** cpp, char* cp, uint32 n)
    { setByteArray((void**) cpp, (void*) cp, n, 1); }
void _TIFFsetShortArray(uint16** wpp, uint16* wp, uint32 n)
    { setByteArray((void**) wpp, (void*) wp, n, sizeof (uint16)); }
void _TIFFsetLongArray(uint32** lpp, uint32* lp, uint32 n)
    { setByteArray((void**) lpp, (void*) lp, n, sizeof (uint32)); }
void _TIFFsetLong8Array(uint64** lpp, uint64* lp, uint32 n)
    { setByteArray((void**) lpp, (void*) lp, n, sizeof (uint64)); }
void _TIFFsetFloatArray(float** fpp, float* fp, uint32 n)
    { setByteArray((void**) fpp, (void*) fp, n, sizeof (float)); }
void _TIFFsetDoubleArray(double** dpp, double* dp, uint32 n)
    { setByteArray((void**) dpp, (void*) dp, n, sizeof (double)); }

static void
setDoubleArrayOneValue(double** vpp, double value, size_t nmemb)
{
 if (*vpp)
  _TIFFfree(*vpp);
 *vpp = _TIFFmalloc(nmemb*sizeof(double));
 if (*vpp)
 {
  while (nmemb--)
   ((double*)*vpp)[nmemb] = value;
 }
}




static int
setExtraSamples(TIFFDirectory* td, va_list ap, uint32* v)
{



 uint16* va;
 uint32 i;

 *v = (uint16) __builtin_va_arg(ap, uint16_vap);
 if ((uint16) *v > td->td_samplesperpixel)
  return 0;
 va = __builtin_va_arg(ap, uint16*);
 if (*v > 0 && va == ((void*)0))
  return 0;
 for (i = 0; i < *v; i++) {
  if (va[i] > 2) {






   if (va[i] == 999)
    va[i] = 2;
   else
    return 0;
  }
 }
 td->td_extrasamples = (uint16) *v;
 _TIFFsetShortArray(&td->td_sampleinfo, va, td->td_extrasamples);
 return 1;


}





static uint32
checkInkNamesString(TIFF* tif, uint32 slen, const char* s)
{
 TIFFDirectory* td = &tif->tif_dir;
 uint16 i = td->td_samplesperpixel;

 if (slen > 0) {
  const char* ep = s+slen;
  const char* cp = s;
  for (; i > 0; i--) {
   for (; cp < ep && *cp != '\0'; cp++) {}
   if (cp >= ep)
    goto bad;
   cp++;
  }
  return ((uint32)(cp-s));
 }
bad:
 TIFFErrorExt(tif->tif_clientdata, "TIFFSetField",
     "%s: Invalid InkNames value; expecting %d names, found %d",
     tif->tif_name,
     td->td_samplesperpixel,
     td->td_samplesperpixel-i);
 return (0);
}

static int
_TIFFVSetField(TIFF* tif, uint32 tag, va_list ap)
{
 static const char module[] = "_TIFFVSetField";

 TIFFDirectory* td = &tif->tif_dir;
 int status = 1;
 uint32 v32, i, v;
 char* s;
 const TIFFField *fip = TIFFFindField(tif, tag, TIFF_NOTYPE);
 uint32 standard_tag = tag;







 if (fip->field_bit == 65) {
  standard_tag = 0;
 }

 switch (standard_tag) {
 case 254:
  td->td_subfiletype = (uint32) __builtin_va_arg(ap, uint32);
  break;
 case 256:
  td->td_imagewidth = (uint32) __builtin_va_arg(ap, uint32);
  break;
 case 257:
  td->td_imagelength = (uint32) __builtin_va_arg(ap, uint32);
  break;
 case 258:
  td->td_bitspersample = (uint16) __builtin_va_arg(ap, uint16_vap);







  if (tif->tif_flags & 0x00080) {
   if (td->td_bitspersample == 8)
    tif->tif_postdecode = _TIFFNoPostDecode;
   else if (td->td_bitspersample == 16)
    tif->tif_postdecode = _TIFFSwab16BitData;
   else if (td->td_bitspersample == 24)
    tif->tif_postdecode = _TIFFSwab24BitData;
   else if (td->td_bitspersample == 32)
    tif->tif_postdecode = _TIFFSwab32BitData;
   else if (td->td_bitspersample == 64)
    tif->tif_postdecode = _TIFFSwab64BitData;
   else if (td->td_bitspersample == 128)
    tif->tif_postdecode = _TIFFSwab64BitData;
  }
  break;
 case 259:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);





  if ((((tif)->tif_dir.td_fieldsset[(7)/32]) & (((unsigned long)1L)<<((7)&0x1f)))) {
   if ((uint32)td->td_compression == v)
    break;
   (*tif->tif_cleanup)(tif);
   tif->tif_flags &= ~0x00020;
  }



  if( (status = TIFFSetCompressionScheme(tif, v)) != 0 )
      td->td_compression = (uint16) v;
  else
      status = 0;
  break;
 case 262:
  td->td_photometric = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 263:
  td->td_threshholding = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 266:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if (v != 2 && v != 1)
   goto badvalue;
  td->td_fillorder = (uint16) v;
  break;
 case 274:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if (v < 1 || 8 < v)
   goto badvalue;
  else
   td->td_orientation = (uint16) v;
  break;
 case 277:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if (v == 0)
   goto badvalue;
  td->td_samplesperpixel = (uint16) v;
  break;
 case 278:
  v32 = (uint32) __builtin_va_arg(ap, uint32);
  if (v32 == 0)
   goto badvalue32;
  td->td_rowsperstrip = v32;
  if (!(((tif)->tif_dir.td_fieldsset[(2)/32]) & (((unsigned long)1L)<<((2)&0x1f)))) {
   td->td_tilelength = v32;
   td->td_tilewidth = td->td_imagewidth;
  }
  break;
 case 280:
  td->td_minsamplevalue = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 281:
  td->td_maxsamplevalue = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 340:
  if (tif->tif_flags & 0x400000)
   _TIFFsetDoubleArray(&td->td_sminsamplevalue, __builtin_va_arg(ap, double*), td->td_samplesperpixel);
  else
   setDoubleArrayOneValue(&td->td_sminsamplevalue, __builtin_va_arg(ap, double), td->td_samplesperpixel);
  break;
 case 341:
  if (tif->tif_flags & 0x400000)
   _TIFFsetDoubleArray(&td->td_smaxsamplevalue, __builtin_va_arg(ap, double*), td->td_samplesperpixel);
  else
   setDoubleArrayOneValue(&td->td_smaxsamplevalue, __builtin_va_arg(ap, double), td->td_samplesperpixel);
  break;
 case 282:
  td->td_xresolution = (float) __builtin_va_arg(ap, double);
  break;
 case 283:
  td->td_yresolution = (float) __builtin_va_arg(ap, double);
  break;
 case 284:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if (v != 1 && v != 2)
   goto badvalue;
  td->td_planarconfig = (uint16) v;
  break;
 case 286:
  td->td_xposition = (float) __builtin_va_arg(ap, double);
  break;
 case 287:
  td->td_yposition = (float) __builtin_va_arg(ap, double);
  break;
 case 296:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if (v < 1 || 3 < v)
   goto badvalue;
  td->td_resolutionunit = (uint16) v;
  break;
 case 297:
  td->td_pagenumber[0] = (uint16) __builtin_va_arg(ap, uint16_vap);
  td->td_pagenumber[1] = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 321:
  td->td_halftonehints[0] = (uint16) __builtin_va_arg(ap, uint16_vap);
  td->td_halftonehints[1] = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 320:
  v32 = (uint32)(1L<<td->td_bitspersample);
  _TIFFsetShortArray(&td->td_colormap[0], __builtin_va_arg(ap, uint16*), v32);
  _TIFFsetShortArray(&td->td_colormap[1], __builtin_va_arg(ap, uint16*), v32);
  _TIFFsetShortArray(&td->td_colormap[2], __builtin_va_arg(ap, uint16*), v32);
  break;
 case 338:
  if (!setExtraSamples(td, ap, &v))
   goto badvalue;
  break;
 case 32995:
  td->td_extrasamples = (((uint16) __builtin_va_arg(ap, uint16_vap)) != 0);
  if (td->td_extrasamples) {
   uint16 sv = 1;
   _TIFFsetShortArray(&td->td_sampleinfo, &sv, 1);
  }
  break;
 case 322:
  v32 = (uint32) __builtin_va_arg(ap, uint32);
  if (v32 % 16) {
   if (tif->tif_mode != 00)
    goto badvalue32;
   TIFFWarningExt(tif->tif_clientdata, tif->tif_name,
    "Nonstandard tile width %d, convert file", v32);
  }
  td->td_tilewidth = v32;
  tif->tif_flags |= 0x00400;
  break;
 case 323:
  v32 = (uint32) __builtin_va_arg(ap, uint32);
  if (v32 % 16) {
   if (tif->tif_mode != 00)
    goto badvalue32;
   TIFFWarningExt(tif->tif_clientdata, tif->tif_name,
       "Nonstandard tile length %d, convert file", v32);
  }
  td->td_tilelength = v32;
  tif->tif_flags |= 0x00400;
  break;
 case 32998:
  v32 = (uint32) __builtin_va_arg(ap, uint32);
  if (v32 == 0)
   goto badvalue32;
  td->td_tiledepth = v32;
  break;
 case 32996:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  switch (v) {
  case 0: v = 4; break;
  case 1: v = 2; break;
  case 2: v = 1; break;
  case 3: v = 3;break;
  default: goto badvalue;
  }
  td->td_sampleformat = (uint16) v;
  break;
 case 339:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if (v < 1 || 6 < v)
   goto badvalue;
  td->td_sampleformat = (uint16) v;


  if( td->td_sampleformat == 5
      && td->td_bitspersample == 32
      && tif->tif_postdecode == _TIFFSwab32BitData )
      tif->tif_postdecode = _TIFFSwab16BitData;
  else if( (td->td_sampleformat == 5
     || td->td_sampleformat == 6)
    && td->td_bitspersample == 64
    && tif->tif_postdecode == _TIFFSwab64BitData )
      tif->tif_postdecode = _TIFFSwab32BitData;
  break;
 case 32997:
  td->td_imagedepth = (uint32) __builtin_va_arg(ap, uint32);
  break;
 case 330:
  if ((tif->tif_flags & 0x02000) == 0) {
   td->td_nsubifd = (uint16) __builtin_va_arg(ap, uint16_vap);
   _TIFFsetLong8Array(&td->td_subifd, (uint64*) __builtin_va_arg(ap, uint64*),
       (long) td->td_nsubifd);
  } else {
   TIFFErrorExt(tif->tif_clientdata, module,
         "%s: Sorry, cannot nest SubIFDs",
         tif->tif_name);
   status = 0;
  }
  break;
 case 531:
  td->td_ycbcrpositioning = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 530:
  td->td_ycbcrsubsampling[0] = (uint16) __builtin_va_arg(ap, uint16_vap);
  td->td_ycbcrsubsampling[1] = (uint16) __builtin_va_arg(ap, uint16_vap);
  break;
 case 301:
  v = (td->td_samplesperpixel - td->td_extrasamples) > 1 ? 3 : 1;
  for (i = 0; i < v; i++)
   _TIFFsetShortArray(&td->td_transferfunction[i],
       __builtin_va_arg(ap, uint16*), 1L<<td->td_bitspersample);
  break;
 case 532:

  _TIFFsetFloatArray(&td->td_refblackwhite, __builtin_va_arg(ap, float*), 6);
  break;
 case 333:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  s = __builtin_va_arg(ap, char*);
  v = checkInkNamesString(tif, v, s);
  status = v > 0;
  if( v > 0 ) {
   _TIFFsetNString(&td->td_inknames, s, v);
   td->td_inknameslen = v;
  }
  break;
 case 65563:
  v = (uint16) __builtin_va_arg(ap, uint16_vap);
  if( v == 1 )
   tif->tif_flags |= 0x400000;
  else
   tif->tif_flags &= ~0x400000;
  break;
 default: {
  TIFFTagValue *tv;
  int tv_size, iCustom;
# 452 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
  if(fip == ((void*)0) || fip->field_bit != 65) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Invalid %stag \"%s\" (not supported by codec)",
       tif->tif_name, (tag > 0xffff) ? "pseudo-" : "",
       fip ? fip->field_name : "Unknown");
   status = 0;
   break;
  }




  tv = ((void*)0);
  for (iCustom = 0; iCustom < td->td_customValueCount; iCustom++) {
   if (td->td_customValues[iCustom].info->field_tag == tag) {
    tv = td->td_customValues + iCustom;
    if (tv->value != ((void*)0)) {
     _TIFFfree(tv->value);
     tv->value = ((void*)0);
    }
    break;
   }
  }




  if(tv == ((void*)0)) {
   TIFFTagValue *new_customValues;

   td->td_customValueCount++;
   new_customValues = (TIFFTagValue *)
       _TIFFrealloc(td->td_customValues,
       sizeof(TIFFTagValue) * td->td_customValueCount);
   if (!new_customValues) {
    TIFFErrorExt(tif->tif_clientdata, module,
        "%s: Failed to allocate space for list of custom values",
        tif->tif_name);
    status = 0;
    goto end;
   }

   td->td_customValues = new_customValues;

   tv = td->td_customValues + (td->td_customValueCount - 1);
   tv->info = fip;
   tv->value = ((void*)0);
   tv->count = 0;
  }




  tv_size = _TIFFDataSize(fip->field_type);
  if (tv_size == 0) {
   status = 0;
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Bad field type %d for \"%s\"",
       tif->tif_name, fip->field_type,
       fip->field_name);
   goto end;
  }

  if (fip->field_type == TIFF_ASCII)
  {
   uint32 ma;
   char* mb;
   if (fip->field_passcount)
   {
    ((fip->field_writecount==-3) ? (void) (0) : __assert_fail ("fip->field_writecount==-3", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c", 521, __PRETTY_FUNCTION__));
    ma=(uint32)__builtin_va_arg(ap, uint32);
    mb=(char*)__builtin_va_arg(ap, char*);
   }
   else
   {
    mb=(char*)__builtin_va_arg(ap, char*);
    ma=(uint32)(strlen(mb)+1);
   }
   tv->count=ma;
   setByteArray(&tv->value,mb,ma,1);
  }
  else
  {
   if (fip->field_passcount) {
    if (fip->field_writecount == -3)
     tv->count = (uint32) __builtin_va_arg(ap, uint32);
    else
     tv->count = (int) __builtin_va_arg(ap, int);
   } else if (fip->field_writecount == -1
      || fip->field_writecount == -3)
    tv->count = 1;
   else if (fip->field_writecount == -2)
    tv->count = td->td_samplesperpixel;
   else
    tv->count = fip->field_writecount;

   if (tv->count == 0) {
    status = 0;
    TIFFErrorExt(tif->tif_clientdata, module,
          "%s: Null count for \"%s\" (type "
          "%d, writecount %d, passcount %d)",
          tif->tif_name,
          fip->field_name,
          fip->field_type,
          fip->field_writecount,
          fip->field_passcount);
    goto end;
   }

   tv->value = _TIFFCheckMalloc(tif, tv->count, tv_size,
       "custom tag binary object");
   if (!tv->value) {
    status = 0;
    goto end;
   }

   if (fip->field_tag == 336
       && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (fip->field_name) && __builtin_constant_p ("DotRange") && (__s1_len = __builtin_strlen (fip->field_name), __s2_len = __builtin_strlen ("DotRange"), (!((size_t)(const void *)((fip->field_name) + 1) - (size_t)(const void *)(fip->field_name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("DotRange") + 1) - (size_t)(const void *)("DotRange") == 1) || __s2_len >= 4)) ? __builtin_strcmp (fip->field_name, "DotRange") : (__builtin_constant_p (fip->field_name) && ((size_t)(const void *)((fip->field_name) + 1) - (size_t)(const void *)(fip->field_name) == 1) && (__s1_len = __builtin_strlen (fip->field_name), __s1_len < 4) ? (__builtin_constant_p ("DotRange") && ((size_t)(const void *)(("DotRange") + 1) - (size_t)(const void *)("DotRange") == 1) ? __builtin_strcmp (fip->field_name, "DotRange") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("DotRange"); int __result = (((const unsigned char *) (const char *) (fip->field_name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (fip->field_name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (fip->field_name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (fip->field_name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("DotRange") && ((size_t)(const void *)(("DotRange") + 1) - (size_t)(const void *)("DotRange") == 1) && (__s2_len = __builtin_strlen ("DotRange"), __s2_len < 4) ? (__builtin_constant_p (fip->field_name) && ((size_t)(const void *)((fip->field_name) + 1) - (size_t)(const void *)(fip->field_name) == 1) ? __builtin_strcmp (fip->field_name, "DotRange") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (fip->field_name); int __result = (((const unsigned char *) (const char *) ("DotRange"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("DotRange"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("DotRange"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("DotRange"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (fip->field_name, "DotRange")))); }) == 0) {




    uint16 v[2];
    v[0] = (uint16)__builtin_va_arg(ap, int);
    v[1] = (uint16)__builtin_va_arg(ap, int);
    _TIFFmemcpy(tv->value, &v, 4);
   }

   else if (fip->field_passcount
      || fip->field_writecount == -1
      || fip->field_writecount == -3
      || fip->field_writecount == -2
      || tv->count > 1) {
    _TIFFmemcpy(tv->value, __builtin_va_arg(ap, void *),
        tv->count * tv_size);
   } else {
    char *val = (char *)tv->value;
    ((tv->count == 1) ? (void) (0) : __assert_fail ("tv->count == 1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c", 589, __PRETTY_FUNCTION__));

    switch (fip->field_type) {
    case TIFF_BYTE:
    case TIFF_UNDEFINED:
     {
      uint8 v = (uint8)__builtin_va_arg(ap, int);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_SBYTE:
     {
      int8 v = (int8)__builtin_va_arg(ap, int);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_SHORT:
     {
      uint16 v = (uint16)__builtin_va_arg(ap, int);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_SSHORT:
     {
      int16 v = (int16)__builtin_va_arg(ap, int);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_LONG:
    case TIFF_IFD:
     {
      uint32 v = __builtin_va_arg(ap, uint32);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_SLONG:
     {
      int32 v = __builtin_va_arg(ap, int32);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_LONG8:
    case TIFF_IFD8:
     {
      uint64 v = __builtin_va_arg(ap, uint64);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_SLONG8:
     {
      int64 v = __builtin_va_arg(ap, int64);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_RATIONAL:
    case TIFF_SRATIONAL:
    case TIFF_FLOAT:
     {
      float v = (float)__builtin_va_arg(ap, double);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    case TIFF_DOUBLE:
     {
      double v = __builtin_va_arg(ap, double);
      _TIFFmemcpy(val, &v, tv_size);
     }
     break;
    default:
     _TIFFmemset(val, 0, tv_size);
     status = 0;
     break;
    }
   }
  }
 }
 }
 if (status) {
  const TIFFField* fip=TIFFFieldWithTag(tif,tag);
  if (fip)
   (((tif)->tif_dir.td_fieldsset[(fip->field_bit)/32]) |= (((unsigned long)1L)<<((fip->field_bit)&0x1f)));
  tif->tif_flags |= 0x00008;
 }

end:
 __builtin_va_end(ap);
 return (status);
badvalue:
        {
  const TIFFField* fip=TIFFFieldWithTag(tif,tag);
  TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Bad value %u for \"%s\" tag",
       tif->tif_name, v,
       fip ? fip->field_name : "Unknown");
  __builtin_va_end(ap);
        }
 return (0);
badvalue32:
        {
  const TIFFField* fip=TIFFFieldWithTag(tif,tag);
  TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Bad value %u for \"%s\" tag",
       tif->tif_name, v32,
       fip ? fip->field_name : "Unknown");
  __builtin_va_end(ap);
        }
 return (0);
}
# 707 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
static int
OkToChangeTag(TIFF* tif, uint32 tag)
{
 const TIFFField* fip = TIFFFindField(tif, tag, TIFF_NOTYPE);
 if (!fip) {
  TIFFErrorExt(tif->tif_clientdata, "TIFFSetField", "%s: Unknown %stag %u",
      tif->tif_name, (tag > 0xffff) ? "pseudo-" : "", tag);
  return (0);
 }
 if (tag != 257 && (tif->tif_flags & 0x00040) &&
     !fip->field_oktochange) {






  TIFFErrorExt(tif->tif_clientdata, "TIFFSetField",
      "%s: Cannot modify tag \"%s\" while writing",
      tif->tif_name, fip->field_name);
  return (0);
 }
 return (1);
}
# 739 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
int
TIFFSetField(TIFF* tif, uint32 tag, ...)
{
 va_list ap;
 int status;

 __builtin_va_start(ap, tag);
 status = TIFFVSetField(tif, tag, ap);
 __builtin_va_end(ap);
 return (status);
}




int
TIFFUnsetField(TIFF* tif, uint32 tag)
{
    const TIFFField *fip = TIFFFieldWithTag(tif, tag);
    TIFFDirectory* td = &tif->tif_dir;

    if( !fip )
        return 0;

    if( fip->field_bit != 65 )
        (((tif)->tif_dir.td_fieldsset[(fip->field_bit)/32]) &= ~(((unsigned long)1L)<<((fip->field_bit)&0x1f)));
    else
    {
        TIFFTagValue *tv = ((void*)0);
        int i;

        for (i = 0; i < td->td_customValueCount; i++) {

            tv = td->td_customValues + i;
            if( tv->info->field_tag == tag )
                break;
        }

        if( i < td->td_customValueCount )
        {
            _TIFFfree(tv->value);
            for( ; i < td->td_customValueCount-1; i++) {
                td->td_customValues[i] = td->td_customValues[i+1];
            }
            td->td_customValueCount--;
        }
    }

    tif->tif_flags |= 0x00008;

    return (1);
}







int
TIFFVSetField(TIFF* tif, uint32 tag, va_list ap)
{
 return OkToChangeTag(tif, tag) ?
     (*tif->tif_tagmethods.vsetfield)(tif, tag, ap) : 0;
}

static int
_TIFFVGetField(TIFF* tif, uint32 tag, va_list ap)
{
 TIFFDirectory* td = &tif->tif_dir;
 int ret_val = 1;
 uint32 standard_tag = tag;
 const TIFFField* fip = TIFFFindField(tif, tag, TIFF_NOTYPE);







 if (fip->field_bit == 65) {
  standard_tag = 0;
 }

 switch (standard_tag) {
  case 254:
   *__builtin_va_arg(ap, uint32*) = td->td_subfiletype;
   break;
  case 256:
   *__builtin_va_arg(ap, uint32*) = td->td_imagewidth;
   break;
  case 257:
   *__builtin_va_arg(ap, uint32*) = td->td_imagelength;
   break;
  case 258:
   *__builtin_va_arg(ap, uint16*) = td->td_bitspersample;
   break;
  case 259:
   *__builtin_va_arg(ap, uint16*) = td->td_compression;
   break;
  case 262:
   *__builtin_va_arg(ap, uint16*) = td->td_photometric;
   break;
  case 263:
   *__builtin_va_arg(ap, uint16*) = td->td_threshholding;
   break;
  case 266:
   *__builtin_va_arg(ap, uint16*) = td->td_fillorder;
   break;
  case 274:
   *__builtin_va_arg(ap, uint16*) = td->td_orientation;
   break;
  case 277:
   *__builtin_va_arg(ap, uint16*) = td->td_samplesperpixel;
   break;
  case 278:
   *__builtin_va_arg(ap, uint32*) = td->td_rowsperstrip;
   break;
  case 280:
   *__builtin_va_arg(ap, uint16*) = td->td_minsamplevalue;
   break;
  case 281:
   *__builtin_va_arg(ap, uint16*) = td->td_maxsamplevalue;
   break;
  case 340:
   if (tif->tif_flags & 0x400000)
    *__builtin_va_arg(ap, double**) = td->td_sminsamplevalue;
   else
   {

    uint16 i;
    double v = td->td_sminsamplevalue[0];
    for (i=1; i < td->td_samplesperpixel; ++i)
     if( td->td_sminsamplevalue[i] < v )
      v = td->td_sminsamplevalue[i];
    *__builtin_va_arg(ap, double*) = v;
   }
   break;
  case 341:
   if (tif->tif_flags & 0x400000)
    *__builtin_va_arg(ap, double**) = td->td_smaxsamplevalue;
   else
   {

    uint16 i;
    double v = td->td_smaxsamplevalue[0];
    for (i=1; i < td->td_samplesperpixel; ++i)
     if( td->td_smaxsamplevalue[i] > v )
      v = td->td_smaxsamplevalue[i];
    *__builtin_va_arg(ap, double*) = v;
   }
   break;
  case 282:
   *__builtin_va_arg(ap, float*) = td->td_xresolution;
   break;
  case 283:
   *__builtin_va_arg(ap, float*) = td->td_yresolution;
   break;
  case 284:
   *__builtin_va_arg(ap, uint16*) = td->td_planarconfig;
   break;
  case 286:
   *__builtin_va_arg(ap, float*) = td->td_xposition;
   break;
  case 287:
   *__builtin_va_arg(ap, float*) = td->td_yposition;
   break;
  case 296:
   *__builtin_va_arg(ap, uint16*) = td->td_resolutionunit;
   break;
  case 297:
   *__builtin_va_arg(ap, uint16*) = td->td_pagenumber[0];
   *__builtin_va_arg(ap, uint16*) = td->td_pagenumber[1];
   break;
  case 321:
   *__builtin_va_arg(ap, uint16*) = td->td_halftonehints[0];
   *__builtin_va_arg(ap, uint16*) = td->td_halftonehints[1];
   break;
  case 320:
   *__builtin_va_arg(ap, uint16**) = td->td_colormap[0];
   *__builtin_va_arg(ap, uint16**) = td->td_colormap[1];
   *__builtin_va_arg(ap, uint16**) = td->td_colormap[2];
   break;
  case 273:
  case 324:
   _TIFFFillStriles( tif );
   *__builtin_va_arg(ap, uint64**) = td->td_stripoffset;
   break;
  case 279:
  case 325:
   _TIFFFillStriles( tif );
   *__builtin_va_arg(ap, uint64**) = td->td_stripbytecount;
   break;
  case 32995:
   *__builtin_va_arg(ap, uint16*) =
       (td->td_extrasamples == 1 &&
       td->td_sampleinfo[0] == 1);
   break;
  case 338:
   *__builtin_va_arg(ap, uint16*) = td->td_extrasamples;
   *__builtin_va_arg(ap, uint16**) = td->td_sampleinfo;
   break;
  case 322:
   *__builtin_va_arg(ap, uint32*) = td->td_tilewidth;
   break;
  case 323:
   *__builtin_va_arg(ap, uint32*) = td->td_tilelength;
   break;
  case 32998:
   *__builtin_va_arg(ap, uint32*) = td->td_tiledepth;
   break;
  case 32996:
   switch (td->td_sampleformat) {
    case 1:
     *__builtin_va_arg(ap, uint16*) = 2;
     break;
    case 2:
     *__builtin_va_arg(ap, uint16*) = 1;
     break;
    case 3:
     *__builtin_va_arg(ap, uint16*) = 3;
     break;
    case 4:
     *__builtin_va_arg(ap, uint16*) = 0;
     break;
   }
   break;
  case 339:
   *__builtin_va_arg(ap, uint16*) = td->td_sampleformat;
   break;
  case 32997:
   *__builtin_va_arg(ap, uint32*) = td->td_imagedepth;
   break;
  case 330:
   *__builtin_va_arg(ap, uint16*) = td->td_nsubifd;
   *__builtin_va_arg(ap, uint64**) = td->td_subifd;
   break;
  case 531:
   *__builtin_va_arg(ap, uint16*) = td->td_ycbcrpositioning;
   break;
  case 530:
   *__builtin_va_arg(ap, uint16*) = td->td_ycbcrsubsampling[0];
   *__builtin_va_arg(ap, uint16*) = td->td_ycbcrsubsampling[1];
   break;
  case 301:
   *__builtin_va_arg(ap, uint16**) = td->td_transferfunction[0];
   if (td->td_samplesperpixel - td->td_extrasamples > 1) {
    *__builtin_va_arg(ap, uint16**) = td->td_transferfunction[1];
    *__builtin_va_arg(ap, uint16**) = td->td_transferfunction[2];
   }
   break;
  case 532:
   *__builtin_va_arg(ap, float**) = td->td_refblackwhite;
   break;
  case 333:
   *__builtin_va_arg(ap, char**) = td->td_inknames;
   break;
  default:
   {
    int i;
# 1009 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
    if( fip == ((void*)0) || fip->field_bit != 65 )
    {
     TIFFErrorExt(tif->tif_clientdata, "_TIFFVGetField",
         "%s: Invalid %stag \"%s\" "
         "(not supported by codec)",
         tif->tif_name,
         (tag > 0xffff) ? "pseudo-" : "",
         fip ? fip->field_name : "Unknown");
     ret_val = 0;
     break;
    }




    ret_val = 0;
    for (i = 0; i < td->td_customValueCount; i++) {
     TIFFTagValue *tv = td->td_customValues + i;

     if (tv->info->field_tag != tag)
      continue;

     if (fip->field_passcount) {
      if (fip->field_readcount == -3)
       *__builtin_va_arg(ap, uint32*) = (uint32)tv->count;
      else
       *__builtin_va_arg(ap, uint16*) = (uint16)tv->count;
      *__builtin_va_arg(ap, void **) = tv->value;
      ret_val = 1;
     } else if (fip->field_tag == 336
         && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (fip->field_name) && __builtin_constant_p ("DotRange") && (__s1_len = __builtin_strlen (fip->field_name), __s2_len = __builtin_strlen ("DotRange"), (!((size_t)(const void *)((fip->field_name) + 1) - (size_t)(const void *)(fip->field_name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("DotRange") + 1) - (size_t)(const void *)("DotRange") == 1) || __s2_len >= 4)) ? __builtin_strcmp (fip->field_name, "DotRange") : (__builtin_constant_p (fip->field_name) && ((size_t)(const void *)((fip->field_name) + 1) - (size_t)(const void *)(fip->field_name) == 1) && (__s1_len = __builtin_strlen (fip->field_name), __s1_len < 4) ? (__builtin_constant_p ("DotRange") && ((size_t)(const void *)(("DotRange") + 1) - (size_t)(const void *)("DotRange") == 1) ? __builtin_strcmp (fip->field_name, "DotRange") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("DotRange"); int __result = (((const unsigned char *) (const char *) (fip->field_name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (fip->field_name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (fip->field_name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (fip->field_name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("DotRange") && ((size_t)(const void *)(("DotRange") + 1) - (size_t)(const void *)("DotRange") == 1) && (__s2_len = __builtin_strlen ("DotRange"), __s2_len < 4) ? (__builtin_constant_p (fip->field_name) && ((size_t)(const void *)((fip->field_name) + 1) - (size_t)(const void *)(fip->field_name) == 1) ? __builtin_strcmp (fip->field_name, "DotRange") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (fip->field_name); int __result = (((const unsigned char *) (const char *) ("DotRange"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("DotRange"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("DotRange"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("DotRange"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (fip->field_name, "DotRange")))); }) == 0) {




      *__builtin_va_arg(ap, uint16*) = ((uint16 *)tv->value)[0];
      *__builtin_va_arg(ap, uint16*) = ((uint16 *)tv->value)[1];
      ret_val = 1;
     } else {
      if (fip->field_type == TIFF_ASCII
          || fip->field_readcount == -1
          || fip->field_readcount == -3
          || fip->field_readcount == -2
          || tv->count > 1) {
       *__builtin_va_arg(ap, void **) = tv->value;
       ret_val = 1;
      } else {
       char *val = (char *)tv->value;
       ((tv->count == 1) ? (void) (0) : __assert_fail ("tv->count == 1", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c", 1057, __PRETTY_FUNCTION__));
       switch (fip->field_type) {
       case TIFF_BYTE:
       case TIFF_UNDEFINED:
        *__builtin_va_arg(ap, uint8*) =
         *(uint8 *)val;
        ret_val = 1;
        break;
       case TIFF_SBYTE:
        *__builtin_va_arg(ap, int8*) =
         *(int8 *)val;
        ret_val = 1;
        break;
       case TIFF_SHORT:
        *__builtin_va_arg(ap, uint16*) =
         *(uint16 *)val;
        ret_val = 1;
        break;
       case TIFF_SSHORT:
        *__builtin_va_arg(ap, int16*) =
         *(int16 *)val;
        ret_val = 1;
        break;
       case TIFF_LONG:
       case TIFF_IFD:
        *__builtin_va_arg(ap, uint32*) =
         *(uint32 *)val;
        ret_val = 1;
        break;
       case TIFF_SLONG:
        *__builtin_va_arg(ap, int32*) =
         *(int32 *)val;
        ret_val = 1;
        break;
       case TIFF_LONG8:
       case TIFF_IFD8:
        *__builtin_va_arg(ap, uint64*) =
         *(uint64 *)val;
        ret_val = 1;
        break;
       case TIFF_SLONG8:
        *__builtin_va_arg(ap, int64*) =
         *(int64 *)val;
        ret_val = 1;
        break;
       case TIFF_RATIONAL:
       case TIFF_SRATIONAL:
       case TIFF_FLOAT:
        *__builtin_va_arg(ap, float*) =
         *(float *)val;
        ret_val = 1;
        break;
       case TIFF_DOUBLE:
        *__builtin_va_arg(ap, double*) =
         *(double *)val;
        ret_val = 1;
        break;
       default:
        ret_val = 0;
        break;
       }
      }
     }
     break;
    }
   }
 }
 return(ret_val);
}





int
TIFFGetField(TIFF* tif, uint32 tag, ...)
{
 int status;
 va_list ap;

 __builtin_va_start(ap, tag);
 status = TIFFVGetField(tif, tag, ap);
 __builtin_va_end(ap);
 return (status);
}







int
TIFFVGetField(TIFF* tif, uint32 tag, va_list ap)
{
 const TIFFField* fip = TIFFFindField(tif, tag, TIFF_NOTYPE);
 return (fip && ((tag > 0xffff) || (((tif)->tif_dir.td_fieldsset[(fip->field_bit)/32]) & (((unsigned long)1L)<<((fip->field_bit)&0x1f)))) ?
     (*tif->tif_tagmethods.vgetfield)(tif, tag, ap) : 0);
}
# 1167 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
void
TIFFFreeDirectory(TIFF* tif)
{
 TIFFDirectory *td = &tif->tif_dir;
 int i;

 _TIFFmemset(td->td_fieldsset, 0, 4);
 { if (td->td_sminsamplevalue) { _TIFFfree(td->td_sminsamplevalue); td->td_sminsamplevalue = 0; } };
 { if (td->td_smaxsamplevalue) { _TIFFfree(td->td_smaxsamplevalue); td->td_smaxsamplevalue = 0; } };
 { if (td->td_colormap[0]) { _TIFFfree(td->td_colormap[0]); td->td_colormap[0] = 0; } };
 { if (td->td_colormap[1]) { _TIFFfree(td->td_colormap[1]); td->td_colormap[1] = 0; } };
 { if (td->td_colormap[2]) { _TIFFfree(td->td_colormap[2]); td->td_colormap[2] = 0; } };
 { if (td->td_sampleinfo) { _TIFFfree(td->td_sampleinfo); td->td_sampleinfo = 0; } };
 { if (td->td_subifd) { _TIFFfree(td->td_subifd); td->td_subifd = 0; } };
 { if (td->td_inknames) { _TIFFfree(td->td_inknames); td->td_inknames = 0; } };
 { if (td->td_refblackwhite) { _TIFFfree(td->td_refblackwhite); td->td_refblackwhite = 0; } };
 { if (td->td_transferfunction[0]) { _TIFFfree(td->td_transferfunction[0]); td->td_transferfunction[0] = 0; } };
 { if (td->td_transferfunction[1]) { _TIFFfree(td->td_transferfunction[1]); td->td_transferfunction[1] = 0; } };
 { if (td->td_transferfunction[2]) { _TIFFfree(td->td_transferfunction[2]); td->td_transferfunction[2] = 0; } };
 { if (td->td_stripoffset) { _TIFFfree(td->td_stripoffset); td->td_stripoffset = 0; } };
 { if (td->td_stripbytecount) { _TIFFfree(td->td_stripbytecount); td->td_stripbytecount = 0; } };
 (((tif)->tif_dir.td_fieldsset[(39)/32]) &= ~(((unsigned long)1L)<<((39)&0x1f)));
 (((tif)->tif_dir.td_fieldsset[(40)/32]) &= ~(((unsigned long)1L)<<((40)&0x1f)));


 for( i = 0; i < td->td_customValueCount; i++ ) {
  if (td->td_customValues[i].value)
   _TIFFfree(td->td_customValues[i].value);
 }

 td->td_customValueCount = 0;
 { if (td->td_customValues) { _TIFFfree(td->td_customValues); td->td_customValues = 0; } };





}





static TIFFExtendProc _TIFFextender = (TIFFExtendProc) ((void*)0);

TIFFExtendProc
TIFFSetTagExtender(TIFFExtendProc extender)
{
 TIFFExtendProc prev = _TIFFextender;
 _TIFFextender = extender;
 return (prev);
}
# 1227 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
int
TIFFCreateDirectory(TIFF* tif)
{
 TIFFDefaultDirectory(tif);
 tif->tif_diroff = 0;
 tif->tif_nextdiroff = 0;
 tif->tif_curoff = 0;
 tif->tif_row = (uint32) -1;
 tif->tif_curstrip = (uint32) -1;

 return 0;
}

int
TIFFCreateCustomDirectory(TIFF* tif, const TIFFFieldArray* infoarray)
{
 TIFFDefaultDirectory(tif);






 _TIFFSetupFields(tif, infoarray);

 tif->tif_diroff = 0;
 tif->tif_nextdiroff = 0;
 tif->tif_curoff = 0;
 tif->tif_row = (uint32) -1;
 tif->tif_curstrip = (uint32) -1;

 return 0;
}

int
TIFFCreateEXIFDirectory(TIFF* tif)
{
 const TIFFFieldArray* exifFieldArray;
 exifFieldArray = _TIFFGetExifFields();
 return TIFFCreateCustomDirectory(tif, exifFieldArray);
}




int
TIFFDefaultDirectory(TIFF* tif)
{
 register TIFFDirectory* td = &tif->tif_dir;
 const TIFFFieldArray* tiffFieldArray;

 tiffFieldArray = _TIFFGetFields();
 _TIFFSetupFields(tif, tiffFieldArray);

 _TIFFmemset(td, 0, sizeof (*td));
 td->td_fillorder = 1;
 td->td_bitspersample = 1;
 td->td_threshholding = 1;
 td->td_orientation = 1;
 td->td_samplesperpixel = 1;
 td->td_rowsperstrip = (uint32) -1;
 td->td_tilewidth = 0;
 td->td_tilelength = 0;
 td->td_tiledepth = 1;
 td->td_stripbytecountsorted = 1;
 td->td_resolutionunit = 2;
 td->td_sampleformat = 1;
 td->td_imagedepth = 1;
 td->td_ycbcrsubsampling[0] = 2;
 td->td_ycbcrsubsampling[1] = 2;
 td->td_ycbcrpositioning = 1;
 tif->tif_postdecode = _TIFFNoPostDecode;
 tif->tif_foundfield = ((void*)0);
 tif->tif_tagmethods.vsetfield = _TIFFVSetField;
 tif->tif_tagmethods.vgetfield = _TIFFVGetField;
 tif->tif_tagmethods.printdir = ((void*)0);




 if (_TIFFextender)
  (*_TIFFextender)(tif);
 (void) TIFFSetField(tif, 259, 1);
# 1318 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c"
 tif->tif_flags &= ~0x00008;






 tif->tif_flags &= ~0x00400;

 return (1);
}

static int
TIFFAdvanceDirectory(TIFF* tif, uint64* nextdir, uint64* off)
{
 static const char module[] = "TIFFAdvanceDirectory";
 if ((((tif)->tif_flags & 0x00800) != 0))
 {
  uint64 poff=*nextdir;
  if (!(tif->tif_flags&0x80000))
  {
   tmsize_t poffa,poffb,poffc,poffd;
   uint16 dircount;
   uint32 nextdir32;
   poffa=(tmsize_t)poff;
   poffb=poffa+sizeof(uint16);
   if (((uint64)poffa!=poff)||(poffb<poffa)||(poffb<(tmsize_t)sizeof(uint16))||(poffb>tif->tif_size))
   {
    TIFFErrorExt(tif->tif_clientdata,module,"Error fetching directory count");
                                  *nextdir=0;
    return(0);
   }
   _TIFFmemcpy(&dircount,tif->tif_base+poffa,sizeof(uint16));
   if (tif->tif_flags&0x00080)
    TIFFSwabShort(&dircount);
   poffc=poffb+dircount*12;
   poffd=poffc+sizeof(uint32);
   if ((poffc<poffb)||(poffc<dircount*12)||(poffd<poffc)||(poffd<(tmsize_t)sizeof(uint32))||(poffd>tif->tif_size))
   {
    TIFFErrorExt(tif->tif_clientdata,module,"Error fetching directory link");
    return(0);
   }
   if (off!=((void*)0))
    *off=(uint64)poffc;
   _TIFFmemcpy(&nextdir32,tif->tif_base+poffc,sizeof(uint32));
   if (tif->tif_flags&0x00080)
    TIFFSwabLong(&nextdir32);
   *nextdir=nextdir32;
  }
  else
  {
   tmsize_t poffa,poffb,poffc,poffd;
   uint64 dircount64;
   uint16 dircount16;
   poffa=(tmsize_t)poff;
   poffb=poffa+sizeof(uint64);
   if (((uint64)poffa!=poff)||(poffb<poffa)||(poffb<(tmsize_t)sizeof(uint64))||(poffb>tif->tif_size))
   {
    TIFFErrorExt(tif->tif_clientdata,module,"Error fetching directory count");
    return(0);
   }
   _TIFFmemcpy(&dircount64,tif->tif_base+poffa,sizeof(uint64));
   if (tif->tif_flags&0x00080)
    TIFFSwabLong8(&dircount64);
   if (dircount64>0xFFFF)
   {
    TIFFErrorExt(tif->tif_clientdata,module,"Sanity check on directory count failed");
    return(0);
   }
   dircount16=(uint16)dircount64;
   poffc=poffb+dircount16*20;
   poffd=poffc+sizeof(uint64);
   if ((poffc<poffb)||(poffc<dircount16*20)||(poffd<poffc)||(poffd<(tmsize_t)sizeof(uint64))||(poffd>tif->tif_size))
   {
    TIFFErrorExt(tif->tif_clientdata,module,"Error fetching directory link");
    return(0);
   }
   if (off!=((void*)0))
    *off=(uint64)poffc;
   _TIFFmemcpy(nextdir,tif->tif_base+poffc,sizeof(uint64));
   if (tif->tif_flags&0x00080)
    TIFFSwabLong8(nextdir);
  }
  return(1);
 }
 else
 {
  if (!(tif->tif_flags&0x80000))
  {
   uint16 dircount;
   uint32 nextdir32;
   if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((*nextdir)),(0)))==(*nextdir)) ||
       !(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((&dircount)),((sizeof (uint16)))))==(sizeof (uint16)))) {
    TIFFErrorExt(tif->tif_clientdata, module, "%s: Error fetching directory count",
        tif->tif_name);
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabShort(&dircount);
   if (off != ((void*)0))
    *off = ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(dircount*12),(1)));

   else
    (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(dircount*12),(1)));

   if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((&nextdir32)),((sizeof (uint32)))))==(sizeof (uint32)))) {
    TIFFErrorExt(tif->tif_clientdata, module, "%s: Error fetching directory link",
        tif->tif_name);
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong(&nextdir32);
   *nextdir=nextdir32;
  }
  else
  {
   uint64 dircount64;
   uint16 dircount16;
   if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((*nextdir)),(0)))==(*nextdir)) ||
       !(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((&dircount64)),((sizeof (uint64)))))==(sizeof (uint64)))) {
    TIFFErrorExt(tif->tif_clientdata, module, "%s: Error fetching directory count",
        tif->tif_name);
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(&dircount64);
   if (dircount64>0xFFFF)
   {
    TIFFErrorExt(tif->tif_clientdata, module, "Error fetching directory count");
    return(0);
   }
   dircount16 = (uint16)dircount64;
   if (off != ((void*)0))
    *off = ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(dircount16*20),(1)));

   else
    (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(dircount16*20),(1)));

   if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,((nextdir)),((sizeof (uint64)))))==(sizeof (uint64)))) {
    TIFFErrorExt(tif->tif_clientdata, module, "%s: Error fetching directory link",
        tif->tif_name);
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(nextdir);
  }
  return (1);
 }
}




uint16
TIFFNumberOfDirectories(TIFF* tif)
{
 uint64 nextdir;
 uint16 n;
 if (!(tif->tif_flags&0x80000))
  nextdir = tif->tif_header.classic.tiff_diroff;
 else
  nextdir = tif->tif_header.big.tiff_diroff;
 n = 0;
 while (nextdir != 0 && TIFFAdvanceDirectory(tif, &nextdir, ((void*)0)))
  n++;
 return (n);
}





int
TIFFSetDirectory(TIFF* tif, uint16 dirn)
{
 uint64 nextdir;
 uint16 n;

 if (!(tif->tif_flags&0x80000))
  nextdir = tif->tif_header.classic.tiff_diroff;
 else
  nextdir = tif->tif_header.big.tiff_diroff;
 for (n = dirn; n > 0 && nextdir != 0; n--)
  if (!TIFFAdvanceDirectory(tif, &nextdir, ((void*)0)))
   return (0);
 tif->tif_nextdiroff = nextdir;





 tif->tif_curdir = (dirn - n) - 1;




 tif->tif_dirnumber = 0;
 return (TIFFReadDirectory(tif));
}







int
TIFFSetSubDirectory(TIFF* tif, uint64 diroff)
{
 tif->tif_nextdiroff = diroff;




 tif->tif_dirnumber = 0;
 return (TIFFReadDirectory(tif));
}




uint64
TIFFCurrentDirOffset(TIFF* tif)
{
 return (tif->tif_diroff);
}





int
TIFFLastDirectory(TIFF* tif)
{
 return (tif->tif_nextdiroff == 0);
}




int
TIFFUnlinkDirectory(TIFF* tif, uint16 dirn)
{
 static const char module[] = "TIFFUnlinkDirectory";
 uint64 nextdir;
 uint64 off;
 uint16 n;

 if (tif->tif_mode == 00) {
  TIFFErrorExt(tif->tif_clientdata, module,
                             "Can not unlink directory in read-only file");
  return (0);
 }





 if (!(tif->tif_flags&0x80000))
 {
  nextdir = tif->tif_header.classic.tiff_diroff;
  off = 4;
 }
 else
 {
  nextdir = tif->tif_header.big.tiff_diroff;
  off = 8;
 }
 for (n = dirn-1; n > 0; n--) {
  if (nextdir == 0) {
   TIFFErrorExt(tif->tif_clientdata, module, "Directory %d does not exist", dirn);
   return (0);
  }
  if (!TIFFAdvanceDirectory(tif, &nextdir, &off))
   return (0);
 }




 if (!TIFFAdvanceDirectory(tif, &nextdir, ((void*)0)))
  return (0);





 (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(off),(0)));
 if (!(tif->tif_flags&0x80000))
 {
  uint32 nextdir32;
  nextdir32=(uint32)nextdir;
  (((uint64)nextdir32==nextdir) ? (void) (0) : __assert_fail ("(uint64)nextdir32==nextdir", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/libtiff/tif_dir.c", 1610, __PRETTY_FUNCTION__));
  if (tif->tif_flags & 0x00080)
   TIFFSwabLong(&nextdir32);
  if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&nextdir32)),((sizeof (uint32)))))==(sizeof (uint32)))) {
   TIFFErrorExt(tif->tif_clientdata, module, "Error writing directory link");
   return (0);
  }
 }
 else
 {
  if (tif->tif_flags & 0x00080)
   TIFFSwabLong8(&nextdir);
  if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&nextdir)),((sizeof (uint64)))))==(sizeof (uint64)))) {
   TIFFErrorExt(tif->tif_clientdata, module, "Error writing directory link");
   return (0);
  }
 }







 (*tif->tif_cleanup)(tif);
 if ((tif->tif_flags & 0x00200) && tif->tif_rawdata) {
  _TIFFfree(tif->tif_rawdata);
  tif->tif_rawdata = ((void*)0);
  tif->tif_rawcc = 0;
                tif->tif_rawdataoff = 0;
                tif->tif_rawdataloaded = 0;
 }
 tif->tif_flags &= ~(0x00040|0x00010|0x01000|0x100000);
 TIFFFreeDirectory(tif);
 TIFFDefaultDirectory(tif);
 tif->tif_diroff = 0;
 tif->tif_nextdiroff = 0;
 tif->tif_curoff = 0;
 tif->tif_row = (uint32) -1;
 tif->tif_curstrip = (uint32) -1;
 return (1);
}
