# 1 "sapi/cli/php_cli_server.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "sapi/cli/php_cli_server.c" 2
# 22 "sapi/cli/php_cli_server.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
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
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 58 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

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
# 36 "/usr/include/stdio.h" 2 3 4








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
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







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
# 23 "sapi/cli/php_cli_server.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 35 "/usr/include/fcntl.h" 3 4
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
# 24 "sapi/cli/php_cli_server.c" 2
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
# 25 "sapi/cli/php_cli_server.c" 2








# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 1
# 2429 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
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
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
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
# 277 "/usr/include/stdlib.h" 3 4
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
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;
# 75 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 515 "/usr/include/stdlib.h" 3 4
extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
# 557 "/usr/include/stdlib.h" 3 4
extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 755 "/usr/include/stdlib.h" 3 4
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
# 775 "/usr/include/stdlib.h" 3 4
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
# 951 "/usr/include/stdlib.h" 3 4
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
# 2430 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 2
# 2445 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h"
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
# 1278 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 1297 "/usr/include/x86_64-linux-gnu/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 636 "/usr/include/string.h" 2 3 4
# 2446 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 2
# 2456 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h"
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
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acosh (double __x) __attribute__ ((__nothrow__ )); extern double __acosh (double __x) __attribute__ ((__nothrow__ ));

extern double asinh (double __x) __attribute__ ((__nothrow__ )); extern double __asinh (double __x) __attribute__ ((__nothrow__ ));

extern double atanh (double __x) __attribute__ ((__nothrow__ )); extern double __atanh (double __x) __attribute__ ((__nothrow__ ));







extern double exp (double __x) __attribute__ ((__nothrow__ )); extern double __exp (double __x) __attribute__ ((__nothrow__ ));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ )); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern double log (double __x) __attribute__ ((__nothrow__ )); extern double __log (double __x) __attribute__ ((__nothrow__ ));


extern double log10 (double __x) __attribute__ ((__nothrow__ )); extern double __log10 (double __x) __attribute__ ((__nothrow__ ));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acoshf (float __x) __attribute__ ((__nothrow__ )); extern float __acoshf (float __x) __attribute__ ((__nothrow__ ));

extern float asinhf (float __x) __attribute__ ((__nothrow__ )); extern float __asinhf (float __x) __attribute__ ((__nothrow__ ));

extern float atanhf (float __x) __attribute__ ((__nothrow__ )); extern float __atanhf (float __x) __attribute__ ((__nothrow__ ));







extern float expf (float __x) __attribute__ ((__nothrow__ )); extern float __expf (float __x) __attribute__ ((__nothrow__ ));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ )); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ )); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ ));


extern float logf (float __x) __attribute__ ((__nothrow__ )); extern float __logf (float __x) __attribute__ ((__nothrow__ ));


extern float log10f (float __x) __attribute__ ((__nothrow__ )); extern float __log10f (float __x) __attribute__ ((__nothrow__ ));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ )); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ ));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ ));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ )); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ ));







extern long double expl (long double __x) __attribute__ ((__nothrow__ )); extern long double __expl (long double __x) __attribute__ ((__nothrow__ ));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ )); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ ));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ )); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ ));


extern long double logl (long double __x) __attribute__ ((__nothrow__ )); extern long double __logl (long double __x) __attribute__ ((__nothrow__ ));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ )); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ ));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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
# 2457 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 2
# 34 "sapi/cli/php_cli_server.c" 2








# 1 "/usr/include/time.h" 1 3 4
# 37 "/usr/include/time.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 133 "/usr/include/time.h" 3 4
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 161 "/usr/include/time.h" 3 4
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 189 "/usr/include/time.h" 3 4
extern clock_t clock (void) __attribute__ ((__nothrow__ ));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ ));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ ));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));
# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ ));
# 239 "/usr/include/time.h" 3 4
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ ));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ ));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ ));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ ));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ ));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ ));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ ));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ ));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern int dysize (int __year) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ ));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ ));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ ));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ ));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ ));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ ));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ ));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ ));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ ));
# 43 "sapi/cli/php_cli_server.c" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
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






typedef int __itimer_which_t;




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
# 46 "sapi/cli/php_cli_server.c" 2


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
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) ;
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
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ )) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







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
# 598 "/usr/include/unistd.h" 3 4
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
# 700 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ )) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ )) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;
# 756 "/usr/include/unistd.h" 3 4
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
# 969 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ ));





extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ ));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 49 "sapi/cli/php_cli_server.c" 2


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
# 80 "/usr/include/signal.h" 3 4
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
# 102 "/usr/include/signal.h" 3 4
extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
# 127 "/usr/include/signal.h" 3 4
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
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
# 209 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/signal.h" 3 4
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
# 92 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
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
# 388 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ ));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ ));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ ));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ ));
# 52 "sapi/cli/php_cli_server.c" 2


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
# 55 "sapi/cli/php_cli_server.c" 2


# 1 "/usr/include/dlfcn.h" 1 3 4
# 24 "/usr/include/dlfcn.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/dlfcn.h" 1 3 4
# 28 "/usr/include/dlfcn.h" 2 3 4
# 56 "/usr/include/dlfcn.h" 3 4
extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 82 "/usr/include/dlfcn.h" 3 4
extern char *dlerror (void) __attribute__ ((__nothrow__ ));
# 58 "sapi/cli/php_cli_server.c" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_config.h" 2
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 236 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_errors.h" 1
# 237 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 21 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h" 2
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2
# 44 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure );
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 93 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
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
# 142 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );
# 191 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
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
# 238 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h" 2

__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2


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
# 38 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/limits.h" 2 3
# 244 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 259 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
static const char long_min_digits[] = "9223372036854775808";
# 271 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h" 2
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
typedef ulong (*hash_func_t)(const char *arKey, uint nKeyLength);
typedef int (*compare_func_t)(const void *, const void * );
typedef void (*sort_func_t)(void *, size_t, register size_t, compare_func_t );
typedef void (*dtor_func_t)(void *pDest);
typedef void (*copy_ctor_func_t)(void *pElement);
typedef void (*copy_ctor_param_func_t)(void *pElement, void *pParam);

struct _hashtable;

typedef struct bucket {
 ulong h;
 uint nKeyLength;
 void *pData;
 void *pDataPtr;
 struct bucket *pListNext;
 struct bucket *pListLast;
 struct bucket *pNext;
 struct bucket *pLast;
 const char *arKey;
} Bucket;

typedef struct _hashtable {
 uint nTableSize;
 uint nTableMask;
 uint nNumOfElements;
 ulong nNextFreeElement;
 Bucket *pInternalPointer;
 Bucket *pListHead;
 Bucket *pListTail;
 Bucket **arBuckets;
 dtor_func_t pDestructor;
 zend_bool persistent;
 unsigned char nApplyCount;
 zend_bool bApplyProtection;



} HashTable;


typedef struct _zend_hash_key {
 const char *arKey;
 uint nKeyLength;
 ulong h;
} zend_hash_key;


typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, void *source_data, zend_hash_key *hash_key, void *pParam);

typedef Bucket* HashPosition;




__attribute__ ((visibility("default"))) int _zend_hash_init(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_hash_init_ex(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);




__attribute__ ((visibility("default"))) int _zend_hash_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_quick_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_hash_add_empty_element(HashTable *ht, const char *arKey, uint nKeyLength);






typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest, void *argument );
typedef int (*apply_func_args_t)(void *pDest , int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht , apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_hash_del_key_or_index(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, int flag);







__attribute__ ((visibility("default"))) ulong zend_get_hash_value(const char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_hash_find(const HashTable *ht, const char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_quick_find(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_index_find(const HashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, const char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_hash_quick_exists(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, ulong h);
__attribute__ ((visibility("default"))) ulong zend_hash_next_free_element(const HashTable *ht);





__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, char **str_index, uint *str_length, ulong *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_data_ex(HashTable *ht, void **pData, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_update_current_key_ex(HashTable *ht, int key_type, const char *str_index, uint str_length, ulong num_index, int mode, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 ulong h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 214 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
static inline ulong zend_inline_hash_func(const char *arKey, uint nKeyLength)
{
 register ulong hash = 5381;


 for (; nKeyLength >= 8; nKeyLength -= 8) {
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
 }
 switch (nKeyLength) {
  case 7: hash = ((hash << 5) + hash) + *arKey++;
  case 6: hash = ((hash << 5) + hash) + *arKey++;
  case 5: hash = ((hash << 5) + hash) + *arKey++;
  case 4: hash = ((hash << 5) + hash) + *arKey++;
  case 3: hash = ((hash << 5) + hash) + *arKey++;
  case 2: hash = ((hash << 5) + hash) + *arKey++;
  case 1: hash = ((hash << 5) + hash) + *arKey++; break;
  case 0: break;

 }
 return hash;
}


__attribute__ ((visibility("default"))) ulong zend_hash_func(const char *arKey, uint nKeyLength);
# 348 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest) {

 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } while (0); } while (0);
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_del_key_or_index(ht, ((void*)0), 0, idx, 1); } } } while (0); } while (0);
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, const char *arKey, uint nKeyLength, void **pData)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_index_find(ht, idx, pData); } } } while (0); } while (0);
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_index_exists(ht, idx); } } } while (0); } while (0);
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key_ex(HashTable *ht, const char *arKey, uint nKeyLength, int mode, HashPosition *pos)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_update_current_key_ex(ht, 2, ((void*)0), 0, idx, mode, pos); } } } while (0); } while (0);
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, mode, pos);
}
# 272 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h" 2

typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h"
__attribute__ ((visibility("default"))) int _zend_ts_hash_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_quick_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_ts_hash_add_empty_element(TsHashTable *ht, char *arKey, uint nKeyLength);

__attribute__ ((visibility("default"))) void zend_ts_hash_graceful_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_apply(TsHashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_argument(TsHashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_arguments(TsHashTable *ht , apply_func_args_t apply_func, int, ...);

__attribute__ ((visibility("default"))) void zend_ts_hash_reverse_apply(TsHashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_ts_hash_del_key_or_index(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





__attribute__ ((visibility("default"))) ulong zend_ts_get_hash_value(TsHashTable *ht, char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_ts_hash_find(TsHashTable *ht, char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_quick_find(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_find(TsHashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_ts_hash_exists(TsHashTable *ht, char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_exists(TsHashTable *ht, ulong h);


__attribute__ ((visibility("default"))) void zend_ts_hash_copy(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_copy_to_hash(HashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge_ex(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_ts_hash_sort(TsHashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_ts_hash_compare(TsHashTable *ht1, TsHashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_ts_hash_minmax(TsHashTable *ht, compare_func_t compar, int flag, void **pData );

__attribute__ ((visibility("default"))) int zend_ts_hash_num_elements(TsHashTable *ht);

__attribute__ ((visibility("default"))) int zend_ts_hash_rehash(TsHashTable *ht);

__attribute__ ((visibility("default"))) ulong zend_ts_hash_func(char *arKey, uint nKeyLength);
# 273 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_llist.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_llist.h"
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
# 274 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2





void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));







typedef struct _zval_struct zval;
typedef struct _zend_class_entry zend_class_entry;

typedef struct _zend_guard {
 zend_bool in_get;
 zend_bool in_set;
 zend_bool in_unset;
 zend_bool in_isset;
 zend_bool dummy;
} zend_guard;

typedef struct _zend_object {
 zend_class_entry *ce;
 HashTable *properties;
 zval **properties_table;
 HashTable *guards;
} zend_object;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, const struct _zend_literal *key );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, const struct _zend_literal *key );



typedef void (*zend_object_set_t)(zval **object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, const struct _zend_literal *key );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, const struct _zend_literal *key );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp );





typedef int (*zend_object_call_method_t)(const char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len, const struct _zend_literal *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(const zval *object );
typedef int (*zend_object_get_class_name_t)(const zval *object, const char **class_name, zend_uint *class_name_len, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zval **zobj_ptr );

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval ***table, int *n );

struct _zend_object_handlers {

 zend_object_add_ref_t add_ref;
 zend_object_del_ref_t del_ref;
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
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;





__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, const char *function_name_strval, int function_name_strlen, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zval **zend_std_get_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, zend_bool silent, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zend_bool zend_std_unset_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zval *object );
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp );
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);





__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, const char *prop_info_name, int prop_info_name_len );

__attribute__ ((visibility("default"))) void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 306 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

typedef union _zvalue_value {
 long lval;
 double dval;
 struct {
  char *val;
  int len;
 } str;
 HashTable *ht;
 zend_object_value obj;
} zvalue_value;

struct _zval_struct {

 zvalue_value value;
 zend_uint refcount__gc;
 zend_uchar type;
 zend_uchar is_ref__gc;
};
# 378 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
static inline __attribute__((always_inline)) zend_uint zval_refcount_p(zval* pz) {
 return pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_set_refcount_p(zval* pz, zend_uint rc) {
 return pz->refcount__gc = rc;
}

static inline __attribute__((always_inline)) zend_uint zval_addref_p(zval* pz) {
 return ++pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_delref_p(zval* pz) {
 return --pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_isref_p(zval* pz) {
 return pz->is_ref__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_p(zval* pz) {
 return pz->is_ref__gc = 1;
}

static inline __attribute__((always_inline)) zend_bool zval_unset_isref_p(zval* pz) {
 return pz->is_ref__gc = 0;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_to_p(zval* pz, zend_bool isref) {
 return pz->is_ref__gc = isref;
}





union _zend_function;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_iterators.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter );


 int (*valid)(zend_object_iterator *iter );


 void (*get_current_data)(zend_object_iterator *iter, zval ***data );


 int (*get_current_key)(zend_object_iterator *iter, char **str_key, uint *str_key_len, ulong *int_key );


 void (*move_forward)(zend_object_iterator *iter );


 void (*rewind)(zend_object_iterator *iter );


 void (*invalidate_current)(zend_object_iterator *iter );
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 void *data;
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


__attribute__ ((visibility("default"))) zval *zend_iterator_wrap(zend_object_iterator *iter );

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);
# 417 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_trait_method_reference {
 const char* method_name;
 unsigned int mname_len;

 zend_class_entry *ce;

 const char* class_name;
 unsigned int cname_len;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;

struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;

 zend_class_entry** exclude_from_classes;

 union _zend_function* function;
};
typedef struct _zend_trait_precedence zend_trait_precedence;

struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 const char* alias;
 unsigned int alias_len;




 zend_uint modifiers;

 union _zend_function* function;
};
typedef struct _zend_trait_alias zend_trait_alias;

struct _zend_class_entry {
 char type;
 const char *name;
 zend_uint name_length;
 struct _zend_class_entry *parent;
 int refcount;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable properties_info;
 zval **default_properties_table;
 zval **default_static_members_table;
 zval **static_members_table;
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
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object_value (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );
 union _zend_function *(*get_static_method)(zend_class_entry *ce, char* method, int method_len );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 zend_class_entry **traits;
 zend_uint num_traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   const char *filename;
   zend_uint line_start;
   zend_uint line_end;
   const char *doc_comment;
   zend_uint doc_comment_len;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h"
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
# 528 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
 char *(*resolve_path_function)(const char *filename, int filename_len );
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 591 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);
# 630 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) void zend_make_printable_zval(zval *expr, zval *expr_copy, int *use_copy);
__attribute__ ((visibility("default"))) int zend_print_zval(zval *expr, int indent);
__attribute__ ((visibility("default"))) int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr );
__attribute__ ((visibility("default"))) void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) __attribute__ ((format(printf, 2, 3)));


void zend_activate(void);
void zend_deactivate(void);
void zend_call_destructors(void);
void zend_activate_modules(void);
void zend_deactivate_modules(void);
void zend_post_deactivate_modules(void);
# 654 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
__attribute__ ((visibility("default"))) void free_estring(char **str_p);
# 675 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;
# 713 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);
# 825 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h" 1
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 struct _gc_root_buffer *prev;
 struct _gc_root_buffer *next;
 zend_object_handle handle;
 union {
  zval *pz;
  const zend_object_handlers *handlers;
 } u;
} gc_root_buffer;

typedef struct _zval_gc_info {
 zval z;
 union {
  gc_root_buffer *buffered;
  struct _zval_gc_info *next;
 } u;
} zval_gc_info;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 zval_gc_info *zval_to_free;
 zval_gc_info *free_list;
 zval_gc_info *next_to_free;

 zend_uint gc_runs;
 zend_uint collected;
# 129 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);
# 180 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_zval_check_possible_root(zval *z )
{
 if (z->type == 4 || z->type == 5) {
  gc_zval_possible_root(z );
 }
}

static inline __attribute__((always_inline)) void gc_remove_from_buffer(gc_root_buffer *root )
{
 root->next->prev = root->prev;
 root->prev->next = root->next;
 root->prev = (gc_globals.unused);
 (gc_globals.unused) = root;
                              ;
}
# 826 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2





# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_strtod.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_strtod.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_multiply.h" 1
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2 );
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
# 80 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
static inline __attribute__((always_inline)) long zend_dval_to_lval(double d)
{
 if (d > 9223372036854775807L) {
  return (long)(unsigned long) d;
 }
 return (long) d;
}
# 108 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
static inline zend_uchar is_numeric_string_ex(const char *str, int length, long *lval, double *dval, int allow_errors, int *oflow_info)
{
 const char *ptr;
 int base = 10, digits = 0, dp_or_e = 0;
 double local_dval;
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




  for (type = 1; !(digits >= 20 && (dval || allow_errors == 1)); digits++, ptr++) {
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
   type = 2;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 2;



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

 if (type == 1) {
  if (digits == 20 - 1) {
   int cmp = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (&ptr[-digits]) && __builtin_constant_p (long_min_digits) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s2_len = __builtin_strlen (long_min_digits), (!((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s1_len < 4) ? (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (long_min_digits); int __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) && (__s2_len = __builtin_strlen (long_min_digits), __s2_len < 4) ? (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (&ptr[-digits]); int __result = (((const unsigned char *) (const char *) (long_min_digits))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (long_min_digits))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (long_min_digits))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (long_min_digits))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (&ptr[-digits], long_min_digits)))); });

   if (!(cmp < 0 || (cmp == 0 && *str == '-'))) {
    if (dval) {
     *dval = zend_strtod(str, ((void*)0));
    }
    if (oflow_info != ((void*)0)) {
     *oflow_info = *str == '-' ? -1 : 1;
    }

    return 2;
   }
  }

  if (lval) {
   *lval = strtol(str, ((void*)0), base);
  }

  return 1;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 2;
 }
}

static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void*)0));
}

static inline char *
zend_memnstr(char *haystack, char *needle, int needle_len, char *end)
{
 char *p = haystack;
 char ne = needle[needle_len-1];

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

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );
# 476 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {
# 490 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  __asm__(
   "incq (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x0, (%0)\n\t"
   "movl $0x43e00000, 0x4(%0)\n\t"
   "movb $0x2,0x14(%0)\n"
   "0:"
   :
   : "r"(op1));
# 508 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  return 0;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {
# 527 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  __asm__(
   "decq (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x00000000, (%0)\n\t"
   "movl $0xc3e00000, 0x4(%0)\n\t"
   "movb $0x2,0x14(%0)\n"
   "0:"
   :
   : "r"(op1));
# 545 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  return 0;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
# 575 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  __asm__(
   "movq	(%1), %%rax\n\t"
   "addq   (%2), %%rax\n\t"
   "jo     0f\n\t"
   "movq   %%rax, (%0)\n\t"
   "movb   $0x1,0x14(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildq	(%1)\n\t"
   "fildq	(%2)\n\t"
   "faddp	%%st, %%st(1)\n\t"
   "movb   $0x2,0x14(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(result),
     "r"(op1),
     "r"(op2)
   : "rax");
# 605 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) + (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval + (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval + ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return add_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_sub_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
# 654 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  __asm__(
   "movq	(%1), %%rax\n\t"
   "subq   (%2), %%rax\n\t"
   "jo     0f\n\t"
   "movq   %%rax, (%0)\n\t"
   "movb   $0x1,0x14(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildq	(%2)\n\t"
   "fildq	(%1)\n\t"



   "fsubp	%%st, %%st(1)\n\t"

   "movb   $0x2,0x14(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(result),
     "r"(op1),
     "r"(op2)
   : "rax");
# 688 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) - (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval - (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval - ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return sub_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mul_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   long overflow;

   do { long __tmpvar; __asm__ ("imulq %3,%0\n" "adcq $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*op1).value.lval), "r"((*op2).value.lval), "1"(0)); if (overflow) ((*result).value.dval) = (double) ((*op1).value.lval) * (double) ((*op2).value.lval); else ((*result).value.lval) = __tmpvar; } while (0);
   (*result).type = overflow ? 2 : 1;
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) * (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval * (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval * ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return mul_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1) && 0) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   } else if (__builtin_expect((*op2).value.lval == -1 && (*op1).value.lval == (-9223372036854775807L -1L), 0)) {

    (*result).value.dval = (double) (-9223372036854775807L -1L) / -1;
    (*result).type = 2;
   } else if (__builtin_expect((*op1).value.lval % (*op2).value.lval == 0, 1)) {

    (*result).value.lval = (*op1).value.lval / (*op2).value.lval;
    (*result).type = 1;
   } else {
    (*result).value.dval = ((double) (*op1).value.lval) / ((double)(*op2).value.lval);
    (*result).type = 2;
   }
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   if (__builtin_expect((*op2).value.dval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = ((double)(*op1).value.lval) / (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1) && 0) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   if (__builtin_expect((*op2).value.dval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = (*op1).value.dval / (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = (*op1).value.dval / ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return div_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mod_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   } else if (__builtin_expect((*op2).value.lval == -1, 0)) {

    (*result).value.lval = 0;
    (*result).type = 1;
    return 0;
   }
   (*result).value.lval = (*op1).value.lval % (*op2).value.lval;
   (*result).type = 1;
   return 0;
  }
 }
 return mod_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval == (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) == (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval == (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval == ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_not_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval != (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) != (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval != (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval != ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval != 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval < (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) < (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval < (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval < ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval < 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval <= (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) <= (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval <= (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval <= ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval <= 0;
}
# 827 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void _zval_dtor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_dtor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_dtor_func(zvalue );
}

__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_copy_ctor_func(zvalue );
}

__attribute__ ((visibility("default"))) int zval_copy_static_var(zval **p , int num_args, va_list args, zend_hash_key *key);

__attribute__ ((visibility("default"))) int zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval **zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval **zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 78 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);
# 828 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval *user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved );
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 1
# 53 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _zend_compiler_context {
 zend_uint opcodes_size;
 int vars_size;
 int literals_size;
 int current_brk_cont;
 int backpatch_count;
 HashTable *labels;
} zend_compiler_context;

typedef struct _zend_literal {
 zval constant;
 zend_ulong hash_value;
 zend_uint cache_slot;
} zend_literal;




typedef union _znode_op {
 zend_uint constant;
 zend_uint var;
 zend_uint num;
 zend_ulong hash;
 zend_uint opline_num;
 zend_op *jmp_addr;
 zval *zv;
 zend_literal *literal;
  void *ptr;
} znode_op;

typedef struct _znode {
 int op_type;
 union {
  znode_op op;
  zval constant;
  zend_op_array *op_array;
 } u;
 zend_uint EA;
} znode;

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
} zend_try_catch_element;
# 210 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 const char *name;
 int name_length;
 ulong h;
 int offset;
 const char *doc_comment;
 int doc_comment_len;
 zend_class_entry *ce;
} zend_property_info;


typedef struct _zend_arg_info {
 const char *name;
 zend_uint name_len;
 const char *class_name;
 zend_uint class_name_len;
 zend_uchar type_hint;
 zend_bool allow_null;
 zend_bool pass_by_reference;
} zend_arg_info;





typedef struct _zend_internal_function_info {
 const char *_name;
 zend_uint _name_len;
 const char *_class_name;
 zend_uint required_num_args;
 zend_uchar _type_hint;
 zend_bool return_reference;
 zend_bool pass_rest_by_reference;
} zend_internal_function_info;

typedef struct _zend_compiled_variable {
 const char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 const char *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last;

 zend_compiled_variable *vars;
 int last_var;

 zend_uint T;

 zend_brk_cont_element *brk_cont_array;
 int last_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;


 HashTable *static_variables;

 zend_uint this_var;

 const char *filename;
 zend_uint line_start;
 zend_uint line_end;
 const char *doc_comment;
 zend_uint doc_comment_len;
 zend_uint early_binding;

 zend_literal *literals;
 int last_literal;

 void **run_time_cache;
 int last_cache_slot;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 const char * function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_module_entry *module;
} zend_internal_function;



typedef union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  const char *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
} zend_function;


typedef struct _zend_function_state {
 zend_function *function;
 void **arguments;
} zend_function_state;


typedef struct _zend_switch_entry {
 znode cond;
 int default_case;
 int control_var;
} zend_switch_entry;


typedef struct _list_llist_element {
 znode var;
 zend_llist dimensions;
 znode value;
} list_llist_element;

union _temp_variable;

struct _zend_execute_data {
 struct _zend_op *opline;
 zend_function_state function_state;
 zend_function *fbc;
 zend_class_entry *called_scope;
 zend_op_array *op_array;
 zval *object;
 union _temp_variable *Ts;
 zval ***CVs;
 HashTable *symbol_table;
 struct _zend_execute_data *prev_execute_data;
 zval *old_error_reporting;
 zend_bool nested;
 zval **original_return_value;
 zend_class_entry *current_scope;
 zend_class_entry *current_called_scope;
 zval *current_this;
 zval *current_object;
};
# 397 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h"
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
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stack.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stack.h"
typedef struct _zend_stack {
 int top, max;
 void **elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element, int size);
__attribute__ ((visibility("default"))) int zend_stack_top(const zend_stack *stack, void **element);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void **zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ptr_stack.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ptr_stack.h"
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
# 58 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ptr_stack.h"
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
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects.h"
__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects_API.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects_API.h"
typedef void (*zend_objects_store_dtor_t)(void *object, zend_object_handle handle );
typedef void (*zend_objects_free_object_storage_t)(void *object );
typedef void (*zend_objects_store_clone_t)(void *object, void **object_clone );

typedef struct _zend_object_store_bucket {
 zend_bool destructor_called;
 zend_bool valid;
 union _store_bucket {
  struct _store_object {
   void *object;
   zend_objects_store_dtor_t dtor;
   zend_objects_free_object_storage_t free_storage;
   zend_objects_store_clone_t clone;
   const zend_object_handlers *handlers;
   zend_uint refcount;
   gc_root_buffer *buffered;
  } obj;
  struct {
   int next;
  } free_list;
 } bucket;
} zend_object_store_bucket;

typedef struct _zend_objects_store {
 zend_object_store_bucket *object_buckets;
 zend_uint top;
 zend_uint size;
 int free_list_head;
} zend_objects_store;



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) zend_object_handle zend_objects_store_put(void *object, zend_objects_store_dtor_t dtor, zend_objects_free_object_storage_t storage, zend_objects_store_clone_t clone );

__attribute__ ((visibility("default"))) void zend_objects_store_add_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_add_ref_by_handle(zend_object_handle handle );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref_by_handle_ex(zend_object_handle handle, const zend_object_handlers *handlers );
static inline __attribute__((always_inline)) void zend_objects_store_del_ref_by_handle(zend_object_handle handle ) {
 zend_objects_store_del_ref_by_handle_ex(handle, ((void*)0) );
}
__attribute__ ((visibility("default"))) zend_uint zend_objects_store_get_refcount(zval *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_store_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object(const zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object_by_handle(zend_object_handle handle );

__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, void *object );
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zval *zobject );

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects );



__attribute__ ((visibility("default"))) zval *zend_object_create_proxy(zval *object, zval *member );

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h" 2
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_multibyte.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_multibyte.h"
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
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 55 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 1
# 56 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2








typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;

typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


struct _zend_compiler_globals {
 zend_stack bp_stack;
 zend_stack switch_cond_stack;
 zend_stack foreach_copy_stack;
 zend_stack object_stack;
 zend_stack declare_stack;

 zend_class_entry *active_class_entry;


 zend_llist list_llist;
 zend_llist dimension_llist;
 zend_stack list_stack;

 zend_stack function_call_stack;

 char *compiled_filename;

 int zend_lineno;

 char *heredoc;
 int heredoc_len;

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

 long catch_begin;

 struct _zend_ini_parser_param *ini_parser_param;

 int interactive;

 zend_uint start_lineno;
 zend_bool increment_lineno;

 znode implementing_class;

 zend_uint access_type;

 char *doc_comment;
 zend_uint doc_comment_len;

 zend_uint compiler_options;

 zval *current_namespace;
 HashTable *current_import;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 zend_compiler_context context;
 zend_stack context_stack;


 char *interned_strings_start;
 char *interned_strings_end;
 char *interned_strings_top;
 char *interned_strings_snapshot_top;

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;





};


struct _zend_executor_globals {
 zval **return_value_ptr_ptr;

 zval uninitialized_zval;
 zval *uninitialized_zval_ptr;

 zval error_zval;
 zval *error_zval_ptr;

 zend_ptr_stack arg_types_stack;


 HashTable *symtable_cache[32];
 HashTable **symtable_cache_limit;
 HashTable **symtable_cache_ptr;

 zend_op **opline_ptr;

 HashTable *active_symbol_table;
 HashTable symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int orig_error_reporting;
 int exit_status;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zend_class_entry *scope;
 zend_class_entry *called_scope;

 zval *This;

 long precision;

 int ticks_count;

 zend_bool in_execution;
 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;






 HashTable regular_list;
 HashTable persistent_list;

 zend_vm_stack argument_stack;

 int user_error_handler_error_reporting;
 zval *user_error_handler;
 zval *user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_ptr_stack user_error_handlers;
 zend_ptr_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zval *exception, *prev_exception;
 zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;

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


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;
};
# 398 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);
void zend_init_compiler_context(void);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) char *zend_set_compiled_filename(const char *new_compiled_filename );
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(char *original_compiled_filename );
__attribute__ ((visibility("default"))) char *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

void zend_resolve_non_class_name(znode *element_name, zend_bool check_namespace );
void zend_resolve_class_name(znode *class_name, ulong fetch_type, int check_ns_name );
__attribute__ ((visibility("default"))) const char* zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var, int* name_len);
# 430 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, const znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, const znode *lvar, const znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, const znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, const znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, const znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, const znode *parent, const znode *dim );
void fetch_string_offset(znode *result, const znode *parent, const znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, const znode *arg );
void zend_do_echo(const znode *arg );
typedef int (*unary_op_type)(zval *, zval * );
typedef int (*binary_op_type)(zval *, zval *, zval * );
__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_do_while_cond(const znode *expr, znode *close_bracket_token );
void zend_do_while_end(const znode *while_token, const znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(const znode *do_token, const znode *expr_open_bracket, const znode *expr );


void zend_do_if_cond(const znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(const znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(const znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(const znode *cond_start, const znode *second_semicolon_token );
void zend_do_for_end(const znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, const znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, const znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(znode *variable, int type, int arg_offset );

void zend_check_writable_variable(const znode *variable);

void zend_do_free(znode *op1 );

void zend_do_add_string(znode *result, const znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, const znode *op1, const znode *op2 );

int zend_do_verify_access_types(const znode *current_access_type, const znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(const znode *function_token );
void zend_do_receive_arg(zend_uchar op, znode *varname, const znode *offset, const znode *initialization, znode *class_type, zend_bool pass_by_reference );
int zend_do_begin_function_call(znode *function_name, zend_bool check_namespace );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, const znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name, int prefix_len );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_build_full_name(znode *result, znode *prefix, znode *name, int is_class_member );
int zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, const znode *argument_list, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_handle_exception(void);

void zend_do_begin_lambda_function_declaration(znode *result, znode *function_token, int return_reference, int is_static );
void zend_do_fetch_lexical_variable(znode *varname, zend_bool is_ref );

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, znode *first_catch );
void zend_do_end_catch(const znode *try_token );
void zend_do_throw(const znode *expr );

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface );
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );


void zend_add_trait_precedence(znode *precedence_znode );
void zend_add_trait_alias(znode *alias_znode );


void zend_do_implements_trait(znode *interface_znode );
__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait );
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce );
void zend_prepare_trait_precedence(znode *result, znode *method_reference, znode *trait_list );
void zend_prepare_reference(znode *result, znode *class_name, znode *method_name );
void zend_prepare_trait_alias(znode *result, znode *method_reference, znode *modifiers, znode *alias );

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array );

void zend_do_pass_param(znode *param, zend_uchar op, int offset );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, const znode *expr1, const znode *expr2, znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, const znode *expr1, const znode *expr2, const znode *op_token );

void zend_do_brk_cont(zend_uchar op, const znode *expr );

void zend_do_switch_cond(const znode *cond );
void zend_do_switch_end(const znode *case_list );
void zend_do_case_before_statement(const znode *case_list, znode *case_token, const znode *case_expr );
void zend_do_case_after_statement(znode *result, const znode *case_token );
void zend_do_default_before_statement(const znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(const znode *class_token, znode *class_name, const znode *parent_class_name );
void zend_do_end_class_declaration(const znode *class_token, const znode *parent_token );
void zend_do_declare_property(const znode *var_name, const znode *value, zend_uint access_type );
void zend_do_declare_class_constant(znode *var_name, const znode *value );

void zend_do_fetch_property(znode *result, znode *object, const znode *property );

void zend_do_halt_compiler_register(void);

void zend_do_push_object(const znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, const znode *new_token, const znode *argument_list );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode, zend_bool check_namespace );

void zend_do_shell_exec(znode *result, const znode *cmd );

void zend_do_init_array(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_static_array_element(znode *result, znode *offset, const znode *expr);
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(const znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);


void zend_init_list(void *result, void *item );
void zend_add_to_list(void *result, void *item );


void zend_do_cast(znode *result, const znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, const znode *op1 );

void zend_do_unset(const znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, const znode *expr, const znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, const znode *open_brackets_token, const znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(const znode *foreach_token, const znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(const znode *declare_token );

void zend_do_exit(znode *result, const znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(const znode *strudel_token );

void zend_do_jmp_set(const znode *value, znode *jmp_token, znode *colon_token );
void zend_do_jmp_set_else(znode *result, const znode *false_value, const znode *jmp_token, const znode *colon_token );

void zend_do_begin_qm_op(const znode *cond, znode *qm_token );
void zend_do_qm_true(const znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, const znode *false_value, const znode *qm_token, const znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(const znode *function_name, znode *modifiers, const znode *body );

void zend_do_declare_constant(znode *name, znode *value );
void zend_do_build_namespace_name(znode *result, znode *prefix, znode *name );
void zend_do_begin_namespace(const znode *name, zend_bool with_brackets );
void zend_do_end_namespace(void);
void zend_verify_namespace(void);
void zend_do_use(znode *name, znode *new_name, int is_global );
void zend_do_end_compilation(void);

void zend_do_label(znode *label );
void zend_do_goto(const znode *label );
void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 );
void zend_release_labels(void);

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);






__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename );
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename );
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type , zval **retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) int zend_cleanup_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_cleanup_user_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) int zend_cleanup_function_data(zend_function *function );
__attribute__ ((visibility("default"))) int zend_cleanup_function_data_full(zend_function *function );

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function );
__attribute__ ((visibility("default"))) void zend_function_dtor(zend_function *function);
__attribute__ ((visibility("default"))) void destroy_zend_class(zend_class_entry **pce);
void zend_class_add_ref(zend_class_entry **ce);

__attribute__ ((visibility("default"))) void zend_mangle_property_name(char **dest, int *dest_length, const char *src1, int src1_length, const char *src2, int src2_length, int internal);
__attribute__ ((visibility("default"))) int zend_unmangle_property_name(const char *mangled_property, int mangled_property_len, const char **class_name, const char **prop_name);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(const znode *try_token );
void zend_do_mark_last_catch(const znode *first_catch, const znode *last_additional_catch );
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name );
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(const char *class_name, uint class_name_len);

typedef zend_bool (*zend_auto_global_callback)(const char *name, uint name_len );
typedef struct _zend_auto_global {
 const char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(const char *name, uint name_len, zend_bool jit, zend_auto_global_callback auto_global_callback );
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global_quick(const char *name, uint name_len, ulong hashval );
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);

int zendlex(znode *zendlval );

int zend_add_literal(zend_op_array *op_array, const zval *zv );




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_vm_opcodes.h" 1
# 694 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 2
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_build.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 2
# 69 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h"
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
# 118 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h"
struct _zend_module_dep {
 const char *name;
 const char *rel;
 const char *version;
 unsigned char type;
};

extern __attribute__ ((visibility("default"))) HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_cleanup(zend_module_entry *module );
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(const zend_module_entry *module );
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_list.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_list.h"
typedef struct _zend_rsrc_list_entry {
 void *ptr;
 int type;
 int refcount;
} zend_rsrc_list_entry;

typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );


typedef struct _zend_rsrc_list_dtors_entry {

 void (*list_dtor)(void *);
 void (*plist_dtor)(void *);


 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 const char *type_name;

 int module_number;
 int resource_id;
 unsigned char type;
} zend_rsrc_list_dtors_entry;



__attribute__ ((visibility("default"))) int zend_register_list_destructors(void (*ld)(void *), void (*pld)(void *), int module_number);
__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(void *ptr);
void plist_entry_destructor(void *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) int zend_list_insert(void *ptr, int type );
__attribute__ ((visibility("default"))) int _zend_list_addref(int id );
__attribute__ ((visibility("default"))) int _zend_list_delete(int id );
__attribute__ ((visibility("default"))) void *_zend_list_find(int id, int *type );





__attribute__ ((visibility("default"))) int zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type );
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zval **passed_id , int default_id, const char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(int resource );
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
typedef union _temp_variable {
 zval tmp_var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
 } var;
 struct {
  zval **ptr_ptr;
  zval *str;
  zend_uint offset;
 } str_offset;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  HashPointer fe_pos;
 } fe;
 zend_class_entry *class_entry;
} temp_variable;



__attribute__ ((visibility("default"))) extern void (*zend_execute)(zend_op_array *op_array );
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr, int return_value_used );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__ ((visibility("default"))) void execute(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data_ptr, int return_value_used );
__attribute__ ((visibility("default"))) int zend_is_true(zval *op);

static inline __attribute__((always_inline)) void safe_free_zval_ptr_rel(zval *p )
{
               ;

 if (p!=(executor_globals.uninitialized_zval_ptr)) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)p)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(p ); }; _efree((p) ); } while (0);
 }
}
__attribute__ ((visibility("default"))) int zend_lookup_class(const char *name, int name_length, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_lookup_class_ex(const char *name, int name_length, const zend_literal *key, int use_autoload, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, int str_len, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, int str_len, zval *retval_ptr, char *string_name, int handle_exceptions );

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, ulong fetch_type, const char **class_name, zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_verify_arg_error(int error_type, const zend_function *zf, zend_uint arg_num, const char *need_msg, const char *need_kind, const char *given_msg, const char *given_kind );

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if (!zval_delref_p(zval_ptr)) {
                ;

  if (zval_ptr != &(executor_globals.uninitialized_zval)) {
   if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)zval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(zval_ptr ); };
   _zval_dtor((zval_ptr) );
   _efree((zval_ptr) );
  }
 } else {
                ;

  if (zval_refcount_p(zval_ptr) == 1) {
   zval_unset_isref_p(zval_ptr);
  }

  gc_zval_check_possible_root((zval_ptr) );
 }
}

static inline __attribute__((always_inline)) int i_zend_is_true(zval *op)
{
 int result;

 switch ((*op).type) {
  case 0:
   result = 0;
   break;
  case 1:
  case 3:
  case 7:
   result = ((*op).value.lval?1:0);
   break;
  case 2:
   result = ((*op).value.dval ? 1 : 0);
   break;
  case 6:
   if ((*op).value.str.len == 0
    || ((*op).value.str.len==1 && (*op).value.str.val[0]=='0')) {
    result = 0;
   } else {
    result = 1;
   }
   break;
  case 4:
   result = (zend_hash_num_elements((*op).value.ht)?1:0);
   break;
  case 5:
   if(((*op).type == 5 && (((*op)).value.obj.handlers->get_class_entry != ((void*)0)))) {
                  ;

    if ((*op).value.obj.handlers->cast_object) {
     zval tmp;
     if ((*op).value.obj.handlers->cast_object(op, &tmp, 3 ) == 0) {
      result = (tmp).value.lval;
      break;
     }
    } else if ((*op).value.obj.handlers->get) {
     zval *tmp = (*op).value.obj.handlers->get(op );
     if((*tmp).type != 5) {

      convert_to_boolean(tmp);
      result = (*tmp).value.lval;
      _zval_ptr_dtor((&tmp) );
      break;
     }
    }
   }
   result = 1;
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_no_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval **pp, void *arg, zend_class_entry *scope );




struct _zend_vm_stack {
 void **top;
 void **end;
 zend_vm_stack prev;
};
# 183 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc(((((sizeof(*page)) + 8 - 1) & ~(8 -1)) + sizeof(void*) * count) );

 page->top = ((void**)(((char*)(page)) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1))));
 page->end = page->top + count;
 page->prev = ((void*)0);
 return page;
}

static inline __attribute__((always_inline)) void zend_vm_stack_init(void)
{
 (executor_globals.argument_stack) = zend_vm_stack_new_page(((16 * 1024) - 16));
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
 zend_vm_stack p = zend_vm_stack_new_page(count >= ((16 * 1024) - 16) ? count : ((16 * 1024) - 16));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) void **zend_vm_stack_top(void)
{
 return (executor_globals.argument_stack)->top;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push(void *ptr )
{
 do { if (__builtin_expect((1) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend((1) ); } } while (0);
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push_nocheck(void *ptr )
{
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_pop(void)
{
 void *el = *(--(executor_globals.argument_stack)->top);

 if (__builtin_expect((executor_globals.argument_stack)->top == ((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))), 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);
  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
  }
 return el;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_alloc(size_t size )
{
 void *ret;

 size = (size + (sizeof(void*) - 1)) / sizeof(void*);


 if (8 > sizeof(void*)) {
  int extra = (8 - ((zend_uintptr_t)(executor_globals.argument_stack)->top & (8 - 1))) / sizeof(void*);

  if (__builtin_expect(size + extra + (((sizeof(void*)) + 8 - 1) & ~(8 -1)) / sizeof(void*) > (zend_uintptr_t)((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top), 0)) {

   zend_vm_stack_extend(size );
  } else {
   void **old_top = (executor_globals.argument_stack)->top;

   (executor_globals.argument_stack)->top += extra;

   *(executor_globals.argument_stack)->top = (void*)old_top;
   (executor_globals.argument_stack)->top += (((sizeof(void*)) + 8 - 1) & ~(8 -1)) / sizeof(void*);
  }
 } else {
  do { if (__builtin_expect(((int)size) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend(((int)size) ); } } while (0);
 }
 ret = (void*)(executor_globals.argument_stack)->top;
 (executor_globals.argument_stack)->top += size;
 return ret;
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_int(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {
  (executor_globals.argument_stack)->top = (void**)ptr;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {

  if (8 > sizeof(void*)) {
   ptr = (void*)(((char*)ptr) - (((sizeof(void*)) + 8 - 1) & ~(8 -1)));
   (executor_globals.argument_stack)->top = *(void***)ptr;
  } else {
   (executor_globals.argument_stack)->top = (void**)ptr;
  }
 }
}

static inline __attribute__((always_inline)) void** zend_vm_stack_push_args(int count )
{

 if (__builtin_expect((executor_globals.argument_stack)->top - ((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))) < count, 0) ||
  __builtin_expect((executor_globals.argument_stack)->top == (executor_globals.argument_stack)->end, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  zend_vm_stack_extend(count + 1 );

  (executor_globals.argument_stack)->top += count;
  *((executor_globals.argument_stack)->top) = (void*)(zend_uintptr_t)count;
  while (count-- > 0) {
   void *data = *(--p->top);

   if (__builtin_expect(p->top == ((void**)(((char*)(p)) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))), 0)) {
    zend_vm_stack r = p;

    (executor_globals.argument_stack)->prev = p->prev;
    p = p->prev;
    _efree((r) );
   }
   *(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)))) + count) = data;
  }
  return (executor_globals.argument_stack)->top++;
 }
 *((executor_globals.argument_stack)->top) = (void*)(zend_uintptr_t)count;
 return (executor_globals.argument_stack)->top++;
}

static inline __attribute__((always_inline)) void zend_vm_stack_clear_multiple(void)
{
 void **p = (executor_globals.argument_stack)->top - 1;
 int delete_count = (int)(zend_uintptr_t) *p;

 while (--delete_count>=0) {
  zval *q = *(zval **)(--p);
  *p = ((void*)0);
  i_zval_ptr_dtor(q );
 }
 zend_vm_stack_free_int(p );
}

static inline __attribute__((always_inline)) zval** zend_vm_stack_get_arg(int requested_arg )
{
 void **p = (executor_globals.current_execute_data)->prev_execute_data->function_state.arguments;
 int arg_count = (int)(zend_uintptr_t) *p;

 if (__builtin_expect(requested_arg > arg_count, 0)) {
  return ((void*)0);
 }
 return (zval**)p - arg_count + requested_arg - 1;
}

static inline __attribute__((always_inline)) void zend_arg_types_stack_2_pop(zend_ptr_stack *stack, zval **object, zend_function **fbc)
{
 void *a, *b;

 zend_ptr_stack_2_pop(stack, &a, &b);

 *object = (zval *) a;
 *fbc = (zend_function *) b;
}

static inline __attribute__((always_inline)) void zend_arg_types_stack_3_pop(zend_ptr_stack *stack, zend_class_entry **called_scope, zval **object, zend_function **fbc)
{
 void *a, *b, *c;

 zend_ptr_stack_3_pop(stack, &a, &b, &c);

 *called_scope = (zend_class_entry *) a;
 *object = (zval *) b;
 *fbc = (zend_function *) c;
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
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(const char *class_name, uint class_name_len, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(const char *class_name, uint class_name_len, const zend_literal *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 410 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 const struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval *function_name;
 HashTable *symbol_table;
 zval **retval_ptr_ptr;
 zend_uint param_count;
 zval ***params;
 zval *object_ptr;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zval *object_ptr;
} zend_fcall_info_cache;
# 228 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args , zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, const char *type_spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type );
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table );
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type );

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, int name_len, zend_class_entry *ce );






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, uint function_name_length );
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, uint class_name_length );

__attribute__ ((visibility("default"))) void zend_wrong_param_count(void);
# 293 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zval *object_ptr, uint check_flags, char **callable_name, int *callable_name_len, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, char **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type, const char *doc_comment, int doc_comment_len );
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

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zval *zobject );
__attribute__ ((visibility("default"))) int zend_get_object_classname(const zval *object, const char **class_name, zend_uint *class_name_len );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 358 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ));

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, int r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 393 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong idx, long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong idx, int r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong idx, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong idx, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, int r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) int add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, void **dest, int duplicate);




__attribute__ ((visibility("default"))) int add_get_index_long(zval *arg, ulong idx, long l, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_double(zval *arg, ulong idx, double d, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_string(zval *arg, ulong idx, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_index_stringl(zval *arg, ulong idx, const char *str, uint length, void **dest, int duplicate);

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, long r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str, int duplicate );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, int duplicate );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 441 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, char **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval ****params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval ***params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci , int argc, zval ***argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci , int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci , int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval, zval *args );

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) void zend_delete_variable(zend_execute_data *ex, HashTable *ht, const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) int zend_delete_global_variable(const char *name, int name_len );

__attribute__ ((visibility("default"))) int zend_delete_global_variable_ex(const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) void zend_reset_all_cv(HashTable *symbol_table );

__attribute__ ((visibility("default"))) void zend_rebuild_symbol_table(void);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h" 2





# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 105 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 238 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 263 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ ));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ ));
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
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
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
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
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h" 2
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 char *header;
 uint header_len;
} sapi_header_struct;


typedef struct {
 zend_llist headers;
 int http_response_code;
 unsigned char send_default_content_type;
 char *mimetype;
 char *http_status_line;
} sapi_headers_struct;


typedef struct _sapi_post_entry sapi_post_entry;
typedef struct _sapi_module_struct sapi_module_struct;


extern __attribute__ ((visibility("default"))) sapi_module_struct sapi_module;
# 79 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 const char *request_method;
 char *query_string;
 char *post_data, *raw_post_data;
 char *cookie_data;
 long content_length;
 uint post_data_length, raw_post_data_length;

 char *path_translated;
 char *request_uri;

 const char *content_type;

 zend_bool headers_only;
 zend_bool no_headers;
 zend_bool headers_read;

 sapi_post_entry *post_entry;

 char *content_type_dup;


 char *auth_user;
 char *auth_password;
 char *auth_digest;


 char *argv0;

 char *current_user;
 int current_user_length;


 int argc;
 char **argv;
 int proto_num;
} sapi_request_info;


typedef struct _sapi_globals_struct {
 void *server_context;
 sapi_request_info request_info;
 sapi_headers_struct sapi_headers;
 int read_post_bytes;
 unsigned char headers_sent;
 struct stat global_stat;
 char *default_mimetype;
 char *default_charset;
 HashTable *rfc1867_uploaded_files;
 long post_max_size;
 int options;
 zend_bool sapi_started;
 double global_request_time;
 HashTable known_post_content_types;
 zval *callback_func;
 zend_fcall_info_cache fci_cache;
 zend_bool callback_run;
} sapi_globals_struct;
# 145 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
extern __attribute__ ((visibility("default"))) sapi_globals_struct sapi_globals;


__attribute__ ((visibility("default"))) void sapi_startup(sapi_module_struct *sf);
__attribute__ ((visibility("default"))) void sapi_shutdown(void);
__attribute__ ((visibility("default"))) void sapi_activate(void);
__attribute__ ((visibility("default"))) void sapi_deactivate(void);
__attribute__ ((visibility("default"))) void sapi_initialize_empty_request(void);
# 166 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 char *line;
 uint line_len;
 long response_code;
} sapi_header_line;

typedef enum {
 SAPI_HEADER_REPLACE,
 SAPI_HEADER_ADD,
 SAPI_HEADER_DELETE,
 SAPI_HEADER_DELETE_ALL,
 SAPI_HEADER_SET_STATUS
} sapi_header_op_enum;


__attribute__ ((visibility("default"))) int sapi_header_op(sapi_header_op_enum op, void *arg );


__attribute__ ((visibility("default"))) int sapi_add_header_ex(char *header_line, uint header_line_len, zend_bool duplicate, zend_bool replace );



__attribute__ ((visibility("default"))) int sapi_send_headers(void);
__attribute__ ((visibility("default"))) void sapi_free_header(sapi_header_struct *sapi_header);
__attribute__ ((visibility("default"))) void sapi_handle_post(void *arg );

__attribute__ ((visibility("default"))) int sapi_register_post_entries(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) void sapi_unregister_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_default_post_reader(void (*default_post_reader)(void) );
__attribute__ ((visibility("default"))) int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray ) );
__attribute__ ((visibility("default"))) int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len ), unsigned int (*input_filter_init)(void) );

__attribute__ ((visibility("default"))) int sapi_flush(void);
__attribute__ ((visibility("default"))) struct stat *sapi_get_stat(void);
__attribute__ ((visibility("default"))) char *sapi_getenv(char *name, size_t name_len );

__attribute__ ((visibility("default"))) char *sapi_get_default_content_type(void);
__attribute__ ((visibility("default"))) void sapi_get_default_content_type_header(sapi_header_struct *default_header );
__attribute__ ((visibility("default"))) size_t sapi_apply_default_charset(char **mimetype, size_t len );
__attribute__ ((visibility("default"))) void sapi_activate_headers_only(void);

__attribute__ ((visibility("default"))) int sapi_get_fd(int *fd );
__attribute__ ((visibility("default"))) int sapi_force_http_10(void);

__attribute__ ((visibility("default"))) int sapi_get_target_uid(uid_t * );
__attribute__ ((visibility("default"))) int sapi_get_target_gid(gid_t * );
__attribute__ ((visibility("default"))) double sapi_get_request_time(void);
__attribute__ ((visibility("default"))) void sapi_terminate_process(void);


struct _sapi_module_struct {
 char *name;
 char *pretty_name;

 int (*startup)(struct _sapi_module_struct *sapi_module);
 int (*shutdown)(struct _sapi_module_struct *sapi_module);

 int (*activate)(void);
 int (*deactivate)(void);

 int (*ub_write)(const char *str, unsigned int str_length );
 void (*flush)(void *server_context);
 struct stat *(*get_stat)(void);
 char *(*getenv)(char *name, size_t name_len );

 void (*sapi_error)(int type, const char *error_msg, ...);

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_header_op_enum op, sapi_headers_struct *sapi_headers );
 int (*send_headers)(sapi_headers_struct *sapi_headers );
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context );

 int (*read_post)(char *buffer, uint count_bytes );
 char *(*read_cookies)(void);

 void (*register_server_variables)(zval *track_vars_array );
 void (*log_message)(char *message );
 double (*get_request_time)(void);
 void (*terminate_process)(void);

 char *php_ini_path_override;

 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);

 void (*default_post_reader)(void);
 void (*treat_data)(int arg, char *str, zval *destArray );
 char *executable_location;

 int php_ini_ignore;
 int php_ini_ignore_cwd;

 int (*get_fd)(int *fd );

 int (*force_http_10)(void);

 int (*get_target_uid)(uid_t * );
 int (*get_target_gid)(gid_t * );

 unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

 void (*ini_defaults)(HashTable *configuration_hash);
 int phpinfo_as_text;

 char *ini_entries;
 const zend_function_entry *additional_functions;
 unsigned int (*input_filter_init)(void);
};


struct _sapi_post_entry {
 char *content_type;
 uint content_type_len;
 void (*post_reader)(void);
 void (*post_handler)(char *content_type_dup, void *arg );
};
# 302 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
__attribute__ ((visibility("default"))) void sapi_read_standard_form_data(void);
__attribute__ ((visibility("default"))) void php_default_post_reader(void);
__attribute__ ((visibility("default"))) void php_default_treat_data(int arg, char *str, zval* destArray );
__attribute__ ((visibility("default"))) unsigned int php_default_input_filter(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );
# 61 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_version.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_qsort.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_qsort.h"
__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 83 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 84 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 99 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/build-defs.h" 1
# 100 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 125 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);
# 164 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
# 150 "/usr/include/ctype.h" 3 4
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
# 165 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 207 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/usr/include/pwd.h" 1 3 4
# 32 "/usr/include/pwd.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 33 "/usr/include/pwd.h" 2 3 4
# 49 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 72 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 94 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream);







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name);
# 139 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);
# 163 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result);
# 208 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/param.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/param.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 2 "/usr/include/x86_64-linux-gnu/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/param.h" 2 3 4
# 32 "/usr/include/x86_64-linux-gnu/sys/param.h" 2 3 4
# 209 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 237 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h" 1
# 73 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef int bool_int;

typedef enum {
 NO = 0, YES = 1
} boolean_e;



__attribute__ ((visibility("default"))) int ap_php_slprintf(char *buf, size_t len, const char *format,...);
__attribute__ ((visibility("default"))) int ap_php_vslprintf(char *buf, size_t len, const char *format, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_snprintf(char *, size_t, const char *, ...);
__attribute__ ((visibility("default"))) int ap_php_vsnprintf(char *, size_t, const char *, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_vasprintf(char **buf, const char *format, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_asprintf(char **buf, const char *format, ...);
__attribute__ ((visibility("default"))) int php_sprintf (char* s, const char* format, ...) __attribute__ ((format(printf, 2, 3)));
__attribute__ ((visibility("default"))) char * php_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
__attribute__ ((visibility("default"))) char * php_conv_fp(register char format, register double num,
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, int *len);
# 127 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 152 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 238 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/spprintf.h" 1
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/spprintf.h"
__attribute__ ((visibility("default"))) int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

__attribute__ ((visibility("default"))) int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));
# 240 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 268 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
extern char **environ;
# 280 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
void phperror(char *error);
__attribute__ ((visibility("default"))) int php_write(void *buf, uint size );
__attribute__ ((visibility("default"))) int php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)));

__attribute__ ((visibility("default"))) int php_get_module_initialized(void);
__attribute__ ((visibility("default"))) void php_log_err(char *log_message );
int Debug(char *format, ...) __attribute__ ((format(printf, 1, 2)));
int cfgparse(void);






static inline __attribute__((deprecated)) void php_set_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class )
{
 zend_replace_error_handling(error_handling, exception_class, ((void*)0) );
}
static inline __attribute__((deprecated)) void php_std_error_handling() {}

__attribute__ ((visibility("default"))) void php_verror(const char *docref, const char *params, int type, const char *format, va_list args ) __attribute__ ((format(printf, 4, 0)));
# 309 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
__attribute__ ((visibility("default"))) void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
__attribute__ ((visibility("default"))) void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
__attribute__ ((visibility("default"))) void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));
# 333 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);
# 393 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h" 1
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
typedef enum _php_output_handler_status_t {
 PHP_OUTPUT_HANDLER_FAILURE,
 PHP_OUTPUT_HANDLER_SUCCESS,
 PHP_OUTPUT_HANDLER_NO_DATA
} php_output_handler_status_t;
# 75 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
typedef enum _php_output_handler_hook_t {
 PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ,
 PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS,
 PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL,
 PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE,
 PHP_OUTPUT_HANDLER_HOOK_DISABLE,

 PHP_OUTPUT_HANDLER_HOOK_LAST
} php_output_handler_hook_t;
# 93 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
typedef struct _php_output_buffer {
 char *data;
 size_t size;
 size_t used;
 uint free:1;
 uint _res:31;
} php_output_buffer;

typedef struct _php_output_context {
 int op;
 php_output_buffer in;
 php_output_buffer out;



} php_output_context;




typedef void (*php_output_handler_func_t)(char *output, uint output_len, char **handled_output, uint *handled_output_len, int mode );

typedef int (*php_output_handler_context_func_t)(void **handler_context, php_output_context *output_context);

typedef void (*php_output_handler_context_dtor_t)(void *opaq );

typedef int (*php_output_handler_conflict_check_t)(const char *handler_name, size_t handler_name_len );

typedef struct _php_output_handler *(*php_output_handler_alias_ctor_t)(const char *handler_name, size_t handler_name_len, size_t chunk_size, int flags );

typedef struct _php_output_handler_user_func_t {
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zval *zoh;
} php_output_handler_user_func_t;

typedef struct _php_output_handler {
 char *name;
 size_t name_len;
 int flags;
 int level;
 size_t size;
 php_output_buffer buffer;

 void *opaq;
 void (*dtor)(void *opaq );

 union {
  php_output_handler_user_func_t *user;
  php_output_handler_context_func_t internal;
 } func;
} php_output_handler;

typedef struct _zend_output_globals {
 int flags;
 zend_stack handlers;
 php_output_handler *active;
 php_output_handler *running;
 const char *output_start_filename;
 int output_start_lineno;
} zend_output_globals;
# 181 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 193 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
__attribute__ ((visibility("default"))) void php_output_startup(void);

__attribute__ ((visibility("default"))) void php_output_shutdown(void);

__attribute__ ((visibility("default"))) void php_output_register_constants(void);


__attribute__ ((visibility("default"))) int php_output_activate(void);

__attribute__ ((visibility("default"))) void php_output_deactivate(void);

__attribute__ ((visibility("default"))) void php_output_set_status(int status );
__attribute__ ((visibility("default"))) int php_output_get_status(void);
__attribute__ ((visibility("default"))) void php_output_set_implicit_flush(int flush );
__attribute__ ((visibility("default"))) const char *php_output_get_start_filename(void);
__attribute__ ((visibility("default"))) int php_output_get_start_lineno(void);

__attribute__ ((visibility("default"))) int php_output_write_unbuffered(const char *str, size_t len );
__attribute__ ((visibility("default"))) int php_output_write(const char *str, size_t len );

__attribute__ ((visibility("default"))) int php_output_flush(void);
__attribute__ ((visibility("default"))) void php_output_flush_all(void);
__attribute__ ((visibility("default"))) int php_output_clean(void);
__attribute__ ((visibility("default"))) void php_output_clean_all(void);
__attribute__ ((visibility("default"))) int php_output_end(void);
__attribute__ ((visibility("default"))) void php_output_end_all(void);
__attribute__ ((visibility("default"))) int php_output_discard(void);
__attribute__ ((visibility("default"))) void php_output_discard_all(void);

__attribute__ ((visibility("default"))) int php_output_get_contents(zval *p );
__attribute__ ((visibility("default"))) int php_output_get_length(zval *p );
__attribute__ ((visibility("default"))) int php_output_get_level(void);
__attribute__ ((visibility("default"))) php_output_handler* php_output_get_active_handler(void);

__attribute__ ((visibility("default"))) int php_output_start_default(void);
__attribute__ ((visibility("default"))) int php_output_start_devnull(void);

__attribute__ ((visibility("default"))) int php_output_start_user(zval *output_handler, size_t chunk_size, int flags );
__attribute__ ((visibility("default"))) int php_output_start_internal(const char *name, size_t name_len, php_output_handler_func_t output_handler, size_t chunk_size, int flags );

__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_user(zval *handler, size_t chunk_size, int flags );
__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_internal(const char *name, size_t name_len, php_output_handler_context_func_t handler, size_t chunk_size, int flags );

__attribute__ ((visibility("default"))) void php_output_handler_set_context(php_output_handler *handler, void *opaq, void (*dtor)(void* ) );
__attribute__ ((visibility("default"))) int php_output_handler_start(php_output_handler *handler );
__attribute__ ((visibility("default"))) int php_output_handler_started(const char *name, size_t name_len );
__attribute__ ((visibility("default"))) int php_output_handler_hook(php_output_handler_hook_t type, void *arg );
__attribute__ ((visibility("default"))) void php_output_handler_dtor(php_output_handler *handler );
__attribute__ ((visibility("default"))) void php_output_handler_free(php_output_handler **handler );

__attribute__ ((visibility("default"))) int php_output_handler_conflict(const char *handler_new, size_t handler_new_len, const char *handler_set, size_t handler_set_len );
__attribute__ ((visibility("default"))) int php_output_handler_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func );
__attribute__ ((visibility("default"))) int php_output_handler_reverse_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func );

__attribute__ ((visibility("default"))) php_output_handler_alias_ctor_t *php_output_handler_alias(const char *handler_name, size_t handler_name_len );
__attribute__ ((visibility("default"))) int php_output_handler_alias_register(const char *handler_name, size_t handler_name_len, php_output_handler_alias_ctor_t func );




void zif_ob_start(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_length(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_level(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_implicit_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_list_handlers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_output_add_rewrite_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_output_reset_rewrite_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 394 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 1
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int php_file_le_stream(void);
__attribute__ ((visibility("default"))) int php_file_le_pstream(void);
__attribute__ ((visibility("default"))) int php_file_le_stream_filter(void);
# 98 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_context.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_context.h"
typedef struct _php_stream_notifier php_stream_notifier;

struct _php_stream_notifier {
 php_stream_notification_func func;
 void (*dtor)(php_stream_notifier *notifier);
 void *ptr;
 int mask;
 size_t progress, progress_max;
};

struct _php_stream_context {
 php_stream_notifier *notifier;
 zval *options;
 zval *links;
 int rsrc_id;
};


__attribute__ ((visibility("default"))) void php_stream_context_free(php_stream_context *context);
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_alloc(void);
__attribute__ ((visibility("default"))) int php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval ***optionvalue);
__attribute__ ((visibility("default"))) int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

__attribute__ ((visibility("default"))) int php_stream_context_get_link(php_stream_context *context,
  const char *hostent, php_stream **stream);
__attribute__ ((visibility("default"))) int php_stream_context_set_link(php_stream_context *context,
  const char *hostent, php_stream *stream);
__attribute__ ((visibility("default"))) int php_stream_context_del_link(php_stream_context *context,
  php_stream *stream);

__attribute__ ((visibility("default"))) php_stream_notifier *php_stream_notification_alloc(void);
__attribute__ ((visibility("default"))) void php_stream_notification_free(php_stream_notifier *notifier);
# 96 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_context.h"
__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);
# 104 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_filter_api.h" 1
# 41 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_bucket php_stream_bucket;
typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;

struct _php_stream_bucket {
 php_stream_bucket *next, *prev;
 php_stream_bucket_brigade *brigade;

 char *buf;
 size_t buflen;

 int own_buf;
 int is_persistent;


 int refcount;
};

struct _php_stream_bucket_brigade {
 php_stream_bucket *head, *tail;
};

typedef enum {
 PSFS_ERR_FATAL,
 PSFS_FEED_ME,
 PSFS_PASS_ON
} php_stream_filter_status_t;



__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen, int own_buf, int buf_persistent );
__attribute__ ((visibility("default"))) int php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left, php_stream_bucket **right, size_t length );
__attribute__ ((visibility("default"))) void php_stream_bucket_delref(php_stream_bucket *bucket );

__attribute__ ((visibility("default"))) void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) void php_stream_bucket_append(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) void php_stream_bucket_unlink(php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket );






typedef struct _php_stream_filter_ops {

 php_stream_filter_status_t (*filter)(
   php_stream *stream,
   php_stream_filter *thisfilter,
   php_stream_bucket_brigade *buckets_in,
   php_stream_bucket_brigade *buckets_out,
   size_t *bytes_consumed,
   int flags
            );

 void (*dtor)(php_stream_filter *thisfilter );

 const char *label;

} php_stream_filter_ops;

typedef struct _php_stream_filter_chain {
 php_stream_filter *head, *tail;


 php_stream *stream;
} php_stream_filter_chain;

struct _php_stream_filter {
 php_stream_filter_ops *fops;
 void *abstract;
 php_stream_filter *next;
 php_stream_filter *prev;
 int is_persistent;


 php_stream_filter_chain *chain;


 php_stream_bucket_brigade buffer;


 int rsrc_id;
};



__attribute__ ((visibility("default"))) void _php_stream_filter_prepend(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int php_stream_filter_prepend_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) void _php_stream_filter_append(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int php_stream_filter_append_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int _php_stream_filter_flush(php_stream_filter *filter, int finish );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_remove(php_stream_filter *filter, int call_dtor );
__attribute__ ((visibility("default"))) void php_stream_filter_free(php_stream_filter *filter );
__attribute__ ((visibility("default"))) php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops, void *abstract, int persistent );
# 144 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


__attribute__ ((visibility("default"))) int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) int php_stream_filter_unregister_factory(const char *filterpattern );
__attribute__ ((visibility("default"))) int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );
# 105 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2

typedef struct _php_stream_statbuf {
 struct stat sb;

} php_stream_statbuf;

typedef struct _php_stream_dirent {
 char d_name[4096];
} php_stream_dirent;


typedef struct _php_stream_ops {

 size_t (*write)(php_stream *stream, const char *buf, size_t count );
 size_t (*read)(php_stream *stream, char *buf, size_t count );
 int (*close)(php_stream *stream, int close_handle );
 int (*flush)(php_stream *stream );

 const char *label;


 int (*seek)(php_stream *stream, off_t offset, int whence, off_t *newoffset );
 int (*cast)(php_stream *stream, int castas, void **ret );
 int (*stat)(php_stream *stream, php_stream_statbuf *ssb );
 int (*set_option)(php_stream *stream, int option, int value, void *ptrparam );
} php_stream_ops;

typedef struct _php_stream_wrapper_ops {

 php_stream *(*stream_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream );

 int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream, php_stream_statbuf *ssb );

 int (*url_stat)(php_stream_wrapper *wrapper, char *url, int flags, php_stream_statbuf *ssb, php_stream_context *context );

 php_stream *(*dir_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 const char *label;


 int (*unlink)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );


 int (*rename)(php_stream_wrapper *wrapper, char *url_from, char *url_to, int options, php_stream_context *context );


 int (*stream_mkdir)(php_stream_wrapper *wrapper, char *url, int mode, int options, php_stream_context *context );
 int (*stream_rmdir)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );

 int (*stream_metadata)(php_stream_wrapper *wrapper, char *url, int options, void *value, php_stream_context *context );
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;


 int err_count;
 char **err_stack;
};
# 190 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
struct _php_stream {
 php_stream_ops *ops;
 void *abstract;

 php_stream_filter_chain readfilters, writefilters;

 php_stream_wrapper *wrapper;
 void *wrapperthis;
 zval *wrapperdata;

 int fgetss_state;
 int is_persistent;
 char mode[16];
 int rsrc_id;
 int in_free;


 int fclose_stdiocast;
 FILE *stdiocast;



 char *orig_path;

 php_stream_context *context;
 int flags;


 off_t position;
 unsigned char *readbuf;
 size_t readbuflen;
 off_t readpos;
 off_t writepos;


 size_t chunk_size;

 int eof;






 struct _php_stream *enclosing_stream;
};
# 244 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );
# 266 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options );

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 285 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_free(php_stream *stream, int close_options );




__attribute__ ((visibility("default"))) int _php_stream_seek(php_stream *stream, off_t offset, int whence );



__attribute__ ((visibility("default"))) off_t _php_stream_tell(php_stream *stream );


__attribute__ ((visibility("default"))) size_t _php_stream_read(php_stream *stream, char *buf, size_t count );


__attribute__ ((visibility("default"))) size_t _php_stream_write(php_stream *stream, const char *buf, size_t count );






__attribute__ ((visibility("default"))) size_t _php_stream_printf(php_stream *stream , const char *fmt, ...) __attribute__ ((format(printf, 2, 3)));





__attribute__ ((visibility("default"))) int _php_stream_eof(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_getc(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_putc(php_stream *stream, int c );


__attribute__ ((visibility("default"))) int _php_stream_flush(php_stream *stream, int closing );


__attribute__ ((visibility("default"))) char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len );



__attribute__ ((visibility("default"))) char *php_stream_get_record(php_stream *stream, size_t maxlen, size_t *returned_len, char *delim, size_t delim_len );


__attribute__ ((visibility("default"))) int _php_stream_puts(php_stream *stream, char *buf );


__attribute__ ((visibility("default"))) int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb );


__attribute__ ((visibility("default"))) int _php_stream_stat_path(char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context );



__attribute__ ((visibility("default"))) int _php_stream_mkdir(char *path, int mode, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) int _php_stream_rmdir(char *path, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) php_stream *_php_stream_opendir(char *path, int options, php_stream_context *context );

__attribute__ ((visibility("default"))) php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent );




__attribute__ ((visibility("default"))) int php_stream_dirent_alphasort(const char **a, const char **b);
__attribute__ ((visibility("default"))) int php_stream_dirent_alphasortr(const char **a, const char **b);

__attribute__ ((visibility("default"))) int _php_stream_scandir(char *dirname, char **namelist[], int flags, php_stream_context *context,
   int (*compare) (const char **a, const char **b) );


__attribute__ ((visibility("default"))) int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam );
# 418 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );
# 438 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) int _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



__attribute__ ((visibility("default"))) size_t _php_stream_passthru(php_stream * src );




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h"
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
# 27 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4

# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/socket.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/socket.h" 2 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/socket.h" 3 4
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
# 113 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__ ));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__ ));


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__ ));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));
# 137 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__ ));






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
# 174 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
# 202 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
# 219 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__ ));




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__ ));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__ ));
# 243 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
# 261 "/usr/include/x86_64-linux-gnu/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__ ));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__ ));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__ ));
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(char *protocol );
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_xport_create(const char *name, long namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  char **error_string,
  int *error_code
                      );





__attribute__ ((visibility("default"))) int php_stream_xport_bind(php_stream *stream,
  const char *name, long namelen,
  char **error_text
           );


__attribute__ ((visibility("default"))) int php_stream_xport_connect(php_stream *stream,
  const char *name, long namelen,
  int asynchronous,
  struct timeval *timeout,
  char **error_text,
  int *error_code
           );


__attribute__ ((visibility("default"))) int php_stream_xport_listen(php_stream *stream,
  int backlog,
  char **error_text
           );



__attribute__ ((visibility("default"))) int php_stream_xport_accept(php_stream *stream, php_stream **client,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  char **error_text
           );


__attribute__ ((visibility("default"))) int php_stream_xport_get_name(php_stream *stream, int want_peer,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen
           );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



__attribute__ ((visibility("default"))) int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  long flags, void **addr, socklen_t *addrlen,
  char **textaddr, int *textaddrlen );



__attribute__ ((visibility("default"))) int php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
  long flags, void *addr, socklen_t addrlen );

typedef enum {
 STREAM_SHUT_RD,
 STREAM_SHUT_WR,
 STREAM_SHUT_RDWR
} stream_shutdown_t;



__attribute__ ((visibility("default"))) int php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how );





typedef struct _php_stream_xport_param {
 enum {
  STREAM_XPORT_OP_BIND, STREAM_XPORT_OP_CONNECT,
  STREAM_XPORT_OP_LISTEN, STREAM_XPORT_OP_ACCEPT,
  STREAM_XPORT_OP_CONNECT_ASYNC,
  STREAM_XPORT_OP_GET_NAME,
  STREAM_XPORT_OP_GET_PEER_NAME,
  STREAM_XPORT_OP_RECV,
  STREAM_XPORT_OP_SEND,
  STREAM_XPORT_OP_SHUTDOWN
 } op;
 unsigned int want_addr:1;
 unsigned int want_textaddr:1;
 unsigned int want_errortext:1;
 unsigned int how:2;

 struct {
  char *name;
  long namelen;
  int backlog;
  struct timeval *timeout;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *buf;
  size_t buflen;
  long flags;
 } inputs;
 struct {
  php_stream *client;
  int returncode;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *textaddr;
  long textaddrlen;

  char *error_text;
  int error_code;
 } outputs;
} php_stream_xport_param;



typedef enum {
 STREAM_CRYPTO_METHOD_SSLv2_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv3_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv23_CLIENT,
 STREAM_CRYPTO_METHOD_TLS_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv2_SERVER,
 STREAM_CRYPTO_METHOD_SSLv3_SERVER,
 STREAM_CRYPTO_METHOD_SSLv23_SERVER,
 STREAM_CRYPTO_METHOD_TLS_SERVER
} php_stream_xport_crypt_method_t;


__attribute__ ((visibility("default"))) int php_stream_xport_crypto_setup(php_stream *stream, php_stream_xport_crypt_method_t crypto_method, php_stream *session_stream );
__attribute__ ((visibility("default"))) int php_stream_xport_crypto_enable(php_stream *stream, int activate );


typedef struct _php_stream_xport_crypto_param {
 enum {
  STREAM_XPORT_CRYPTO_OP_SETUP,
  STREAM_XPORT_CRYPTO_OP_ENABLE
 } op;
 struct {
  int activate;
  php_stream_xport_crypt_method_t method;
  php_stream *session;
 } inputs;
 struct {
  int returncode;
 } outputs;
} php_stream_xport_crypto_param;


__attribute__ ((visibility("default"))) HashTable *php_stream_xport_get_hash(void);
__attribute__ ((visibility("default"))) php_stream_transport_factory_func php_stream_generic_socket_factory;
# 457 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );
# 458 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );
# 459 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_userspace.h" 1
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 460 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_mmap.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_mmap.h"
typedef enum {

 PHP_STREAM_MMAP_SUPPORTED,



 PHP_STREAM_MMAP_MAP_RANGE,

 PHP_STREAM_MMAP_UNMAP
} php_stream_mmap_operation_t;

typedef enum {
 PHP_STREAM_MAP_MODE_READONLY,
 PHP_STREAM_MAP_MODE_READWRITE,
 PHP_STREAM_MAP_MODE_SHARED_READONLY,
 PHP_STREAM_MAP_MODE_SHARED_READWRITE
} php_stream_mmap_access_t;

typedef struct {


 size_t offset;
 size_t length;

 php_stream_mmap_access_t mode;


 char *mapped;

} php_stream_mmap_range;
# 70 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_mmap.h"
__attribute__ ((visibility("default"))) char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );
# 461 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 478 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );
# 541 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
int php_init_stream_wrappers(int module_number );
int php_shutdown_stream_wrappers(int module_number );
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number );


__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper(char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper(char *protocol );
__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper_volatile(char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper_volatile(char *protocol );
__attribute__ ((visibility("default"))) php_stream *_php_stream_open_wrapper_ex(char *path, char *mode, int options, char **opened_path, php_stream_context *context );
__attribute__ ((visibility("default"))) php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, char **path_for_open, int options );
__attribute__ ((visibility("default"))) char *php_stream_locate_eol(php_stream *stream, char *buf, size_t buf_len );
# 568 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...) __attribute__ ((format(printf, 3, 4)));
# 579 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;
# 397 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h" 2
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 398 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_globals.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_globals.h"
typedef struct _php_core_globals php_core_globals;






extern __attribute__ ((visibility("default"))) struct _php_core_globals core_globals;
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_globals.h"
struct _php_tick_function_entry;

typedef struct _arg_separators {
 char *output;
 char *input;
} arg_separators;

struct _php_core_globals {
 zend_bool implicit_flush;

 long output_buffering;

 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 long serialize_precision;

 long memory_limit;
 long max_input_time;

 zend_bool track_errors;
 zend_bool display_errors;
 zend_bool display_startup_errors;
 zend_bool log_errors;
 long log_errors_max_len;
 zend_bool ignore_repeated_errors;
 zend_bool ignore_repeated_source;
 zend_bool report_memleaks;
 char *error_log;

 char *doc_root;
 char *user_dir;
 char *include_path;
 char *open_basedir;
 char *extension_dir;
 char *php_binary;

 char *upload_tmp_dir;
 long upload_max_filesize;

 char *error_append_string;
 char *error_prepend_string;

 char *auto_prepend_file;
 char *auto_append_file;

 arg_separators arg_separator;

 char *variables_order;

 HashTable rfc1867_protected_variables;

 short connection_status;
 short ignore_user_abort;

 unsigned char header_is_being_sent;

 zend_llist tick_functions;

 zval *http_globals[6];

 zend_bool expose_php;

 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 char *docref_root;
 char *docref_ext;

 zend_bool html_errors;
 zend_bool xmlrpc_errors;

 long xmlrpc_error_number;

 zend_bool activated_auto_globals[8];

 zend_bool modules_activated;
 zend_bool file_uploads;
 zend_bool during_request_startup;
 zend_bool allow_url_fopen;
 zend_bool enable_post_data_reading;
 zend_bool always_populate_raw_post_data;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;
 zend_bool exit_on_timeout;



 long max_input_nesting_level;
 long max_input_vars;
 zend_bool in_user_include;

 char *user_ini_filename;
 long user_ini_cache_ttl;

 char *request_order;

 zend_bool mail_x_header;
 char *mail_log;

 zend_bool in_error_log;




};
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h" 1
# 63 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
struct _zend_ini_entry {
 int module_number;
 int modifiable;
 char *name;
 uint name_length;
 int (*on_modify)(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
 void *mh_arg1;
 void *mh_arg2;
 void *mh_arg3;

 char *value;
 uint value_length;

 char *orig_value;
 uint orig_value_length;
 int orig_modifiable;
 int modified;

 void (*displayer)(zend_ini_entry *ini_entry, int type);
};


__attribute__ ((visibility("default"))) int zend_ini_startup(void);
__attribute__ ((visibility("default"))) int zend_ini_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_global_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_deactivate(void);

__attribute__ ((visibility("default"))) int zend_copy_ini_directives(void);

__attribute__ ((visibility("default"))) void zend_ini_sort_entries(void);

__attribute__ ((visibility("default"))) int zend_register_ini_entries(const zend_ini_entry *ini_entry, int module_number );
__attribute__ ((visibility("default"))) void zend_unregister_ini_entries(int module_number );
__attribute__ ((visibility("default"))) void zend_ini_refresh_caches(int stage );
__attribute__ ((visibility("default"))) int zend_alter_ini_entry(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_ex(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage, int force_change );
__attribute__ ((visibility("default"))) int zend_restore_ini_entry(char *name, uint name_length, int stage);
__attribute__ ((visibility("default"))) void display_ini_entries(zend_module_entry *module);

__attribute__ ((visibility("default"))) long zend_ini_long(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) double zend_ini_double(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string_ex(char *name, uint name_length, int orig, zend_bool *exists);

__attribute__ ((visibility("default"))) int zend_ini_register_displayer(char *name, uint name_length, void (*displayer)(zend_ini_entry *ini_entry, int type));

__attribute__ ((visibility("default"))) void zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void display_link_numbers(zend_ini_entry *ini_entry, int type);
# 176 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
# 195 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg );

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h" 2


__attribute__ ((visibility("default"))) void config_zval_dtor(zval *zvalue);
int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
__attribute__ ((visibility("default"))) zval *cfg_get_entry(const char *name, uint name_length);
__attribute__ ((visibility("default"))) int cfg_get_long(const char *varname, long *result);
__attribute__ ((visibility("default"))) int cfg_get_double(const char *varname, double *result);
__attribute__ ((visibility("default"))) int cfg_get_string(const char *varname, char **result);
__attribute__ ((visibility("default"))) int php_parse_user_ini_file(const char *dirname, char *ini_filename, HashTable *target_hash );
__attribute__ ((visibility("default"))) void php_ini_activate_config(HashTable *source_hash, int modify_type, int stage );
__attribute__ ((visibility("default"))) int php_ini_has_per_dir_config(void);
__attribute__ ((visibility("default"))) int php_ini_has_per_host_config(void);
__attribute__ ((visibility("default"))) void php_ini_activate_per_dir_config(char *path, uint path_len );
__attribute__ ((visibility("default"))) void php_ini_activate_per_host_config(const char *host, uint host_len );
__attribute__ ((visibility("default"))) HashTable* php_ini_get_configuration_hash(void);
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h" 2

__attribute__ ((visibility("default"))) int php_fopen_primary_script(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) char *expand_filepath(const char *filepath, char *real_path );
__attribute__ ((visibility("default"))) char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );
__attribute__ ((visibility("default"))) char *expand_filepath_with_mode(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len, int realpath_mode );

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path );
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn );
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path );
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path );

__attribute__ ((visibility("default"))) char *php_resolve_path(const char *filename, int filename_len, const char *path );

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
# 399 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2



# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 1
# 13 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 14 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 2
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 2






# 1 "/usr/include/utime.h" 1 3 4
# 37 "/usr/include/utime.h" 3 4
struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
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
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 208 "/usr/include/dirent.h" 3 4
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
# 324 "/usr/include/dirent.h" 3 4
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 352 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));
# 91 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
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
__attribute__ ((visibility("default"))) int virtual_rename(char *oldname, char *newname );
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path );
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname );
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname );
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type );
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode );
# 190 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
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
# 403 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 57 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h"
void clean_module_constants(int module_number );
void free_zend_constant(zend_constant *c);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) int zend_get_constant(const char *name, uint name_len, zval *result );
__attribute__ ((visibility("default"))) int zend_get_constant_ex(const char *name, uint name_len, zval *result, zend_class_entry *scope, ulong flags );
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, uint name_len, long lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
void copy_zend_constant(zend_constant *c);
zend_constant *zend_quick_get_constant(const zend_literal *key, ulong flags );
# 405 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2






# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h" 2
# 412 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 62 "sapi/cli/php_cli_server.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_main.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_main.h"
__attribute__ ((visibility("default"))) int php_request_startup(void);
__attribute__ ((visibility("default"))) void php_request_shutdown(void *dummy);
__attribute__ ((visibility("default"))) void php_request_shutdown_for_exec(void *dummy);
__attribute__ ((visibility("default"))) int php_module_startup(sapi_module_struct *sf, zend_module_entry *additional_modules, uint num_additional_modules);
__attribute__ ((visibility("default"))) void php_module_shutdown(void);
__attribute__ ((visibility("default"))) void php_module_shutdown_for_exec(void);
__attribute__ ((visibility("default"))) int php_module_shutdown_wrapper(sapi_module_struct *sapi_globals);
__attribute__ ((visibility("default"))) int php_request_startup_for_hook(void);
__attribute__ ((visibility("default"))) void php_request_shutdown_for_hook(void *dummy);

__attribute__ ((visibility("default"))) int php_register_extensions(zend_module_entry **ptr, int count );

__attribute__ ((visibility("default"))) int php_execute_script(zend_file_handle *primary_file );
__attribute__ ((visibility("default"))) int php_execute_simple_script(zend_file_handle *primary_file, zval **ret );
__attribute__ ((visibility("default"))) int php_handle_special_queries(void);
__attribute__ ((visibility("default"))) int php_lint_script(zend_file_handle *file );

__attribute__ ((visibility("default"))) void php_handle_aborted_connection(void);
__attribute__ ((visibility("default"))) int php_handle_auth_data(const char *auth );

__attribute__ ((visibility("default"))) void php_html_puts(const char *str, uint siz );
__attribute__ ((visibility("default"))) int php_stream_open_for_zend_ex(const char *filename, zend_file_handle *handle, int mode );

extern void php_call_shutdown_functions(void);
extern void php_free_shutdown_functions(void);


extern int php_init_environ(void);
extern int php_shutdown_environ(void);
# 64 "sapi/cli/php_cli_server.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_variables.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_variables.h"
void php_startup_auto_globals(void);
extern __attribute__ ((visibility("default"))) void (*php_import_environment_variables)(zval *array_ptr );
__attribute__ ((visibility("default"))) void php_register_variable(char *var, char *val, zval *track_vars_array );

__attribute__ ((visibility("default"))) void php_register_variable_safe(char *var, char *val, int val_len, zval *track_vars_array );
__attribute__ ((visibility("default"))) void php_register_variable_ex(char *var, zval *val, zval *track_vars_array );

int php_hash_environment(void);
# 66 "sapi/cli/php_cli_server.c" 2






# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_highlight.h" 1
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_highlight.h"
typedef struct _zend_syntax_highlighter_ini {
 char *highlight_html;
 char *highlight_comment;
 char *highlight_default;
 char *highlight_string;
 char *highlight_keyword;
} zend_syntax_highlighter_ini;



__attribute__ ((visibility("default"))) void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini );
__attribute__ ((visibility("default"))) void zend_strip(void);
__attribute__ ((visibility("default"))) int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini );
__attribute__ ((visibility("default"))) int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name );
__attribute__ ((visibility("default"))) void zend_html_putc(char c);
__attribute__ ((visibility("default"))) void zend_html_puts(const char *s, uint len );


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 73 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_indent.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_indent.h"
__attribute__ ((visibility("default"))) void zend_indent(void);
# 74 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_exceptions.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_exceptions.h"
__attribute__ ((visibility("default"))) void zend_exception_set_previous(zval *exception, zval *add_previous );
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

void zend_throw_exception_internal(zval *exception );

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);
__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) zval * zend_throw_exception(zend_class_entry *exception_ce, char *message, long code );
__attribute__ ((visibility("default"))) zval * zend_throw_exception_ex(zend_class_entry *exception_ce, long code , char *format, ...);
__attribute__ ((visibility("default"))) void zend_throw_exception_object(zval *exception );
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zval * zend_throw_error_exception(zend_class_entry *exception_ce, char *message, long code, int severity );

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex );


__attribute__ ((visibility("default"))) void zend_exception_error(zval *exception, int severity );


int zend_spprintf(char **message, int max_len, char *format, ...);
# 75 "sapi/cli/php_cli_server.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_getopt.h" 1
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_getopt.h"
typedef struct _opt_struct {
 char opt_char;
 int need_param;
 char * opt_name;
} opt_struct;



extern __attribute__ ((visibility("default"))) int php_optidx;
__attribute__ ((visibility("default"))) int php_getopt(int argc, char* const *argv, const opt_struct opts[], char **optarg, int *optind, int show_err, int arg_start);
# 77 "sapi/cli/php_cli_server.c" 2
# 96 "sapi/cli/php_cli_server.c"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/file.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/file.h"
int zm_startup_file(int type, int module_number );
int zm_shutdown_file(int type, int module_number );

void zif_tempnam(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_tmpfile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_fopen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fclose(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_popen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pclose(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_feof(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fread(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgetc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgets(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgetss(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fgetcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fputcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fwrite(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fflush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_rewind(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_ftell(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fseek(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_mkdir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rmdir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fpassthru(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_readfile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_umask(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unlink(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_copy(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_put_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_meta_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_flock(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fd_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fd_isset(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_realpath(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_fnmatch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_ftruncate(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_fstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sys_get_temp_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

int zm_startup_user_streams(int type, int module_number );

__attribute__ ((visibility("default"))) int php_le_stream_context(void);
__attribute__ ((visibility("default"))) int php_set_sock_blocking(int socketd, int block );
__attribute__ ((visibility("default"))) int php_copy_file(char *src, char *dest );
__attribute__ ((visibility("default"))) int php_copy_file_ex(char *src, char *dest, int src_chk );
__attribute__ ((visibility("default"))) int php_copy_file_ctx(char *src, char *dest, int src_chk, php_stream_context *ctx );
__attribute__ ((visibility("default"))) int php_mkdir_ex(char *dir, long mode, int options );
__attribute__ ((visibility("default"))) int php_mkdir(char *dir, long mode );
__attribute__ ((visibility("default"))) void php_fgetcsv(php_stream *stream, char delimiter, char enclosure, char escape_char, size_t buf_len, char *buf, zval *return_value );
__attribute__ ((visibility("default"))) int php_fputcsv(php_stream *stream, zval *fields, char delimiter, char enclosure, char escape_char );
# 93 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/file.h"
typedef enum _php_meta_tags_token {
 TOK_EOF = 0,
 TOK_OPENTAG,
 TOK_CLOSETAG,
 TOK_SLASH,
 TOK_EQUAL,
 TOK_SPACE,
 TOK_ID,
 TOK_STRING,
 TOK_OTHER
} php_meta_tags_token;

typedef struct _php_meta_tags_data {
 php_stream *stream;
 int ulc;
 int lc;
 char *input_buffer;
 char *token_data;
 int token_len;
 int in_meta;
} php_meta_tags_data;

php_meta_tags_token php_next_meta_token(php_meta_tags_data * );

typedef struct {
   int pclose_ret;
 size_t def_chunk_size;
 long auto_detect_line_endings;
 long default_socket_timeout;
 char *user_agent;
 char *from_address;
 char *user_stream_current_filename;
 php_stream_context *default_context;
 HashTable *stream_wrappers;
 HashTable *stream_filters;
 HashTable *wrapper_errors;
} php_file_globals;






extern __attribute__ ((visibility("default"))) php_file_globals file_globals;
# 97 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_smart_str.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_smart_str.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_smart_str_public.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_smart_str_public.h"
typedef struct {
 char *c;
 size_t len;
 size_t a;
} smart_str;
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_smart_str.h" 2
# 153 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_smart_str.h"
static inline char *smart_str_print_long(char *buf, long num) {
 char *r;
 do { if (num < 0) { do { char *__p = ((buf)); unsigned long __num = (-(num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); *--(r) = '-'; } else { do { char *__p = ((buf)); unsigned long __num = ((num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); } } while (0);
 return r;
}

static inline char *smart_str_print_unsigned(char *buf, long num) {
 char *r;
 do { char *__p = (buf); unsigned long __num = (num); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); r = __p; } while (0);
 return r;
}
# 98 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/html.h" 1
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/html.h"
void register_html_constants(int type, int module_number );

void zif_htmlspecialchars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_htmlentities(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_htmlspecialchars_decode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_html_entity_decode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_html_translation_table(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) char *php_escape_html_entities(unsigned char *old, size_t oldlen, size_t *newlen, int all, int flags, char *hint_charset );
__attribute__ ((visibility("default"))) char *php_escape_html_entities_ex(unsigned char *old, size_t oldlen, size_t *newlen, int all, int flags, char *hint_charset, zend_bool double_encode );
__attribute__ ((visibility("default"))) char *php_unescape_html_entities(unsigned char *old, size_t oldlen, size_t *newlen, int all, int flags, char *hint_charset );
__attribute__ ((visibility("default"))) unsigned int php_next_utf8_char(const unsigned char *str, size_t str_len, size_t *cursor, int *status);
# 99 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/url.h" 1
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/url.h"
typedef struct php_url {
 char *scheme;
 char *user;
 char *pass;
 char *host;
 unsigned short port;
 char *path;
 char *query;
 char *fragment;
} php_url;

__attribute__ ((visibility("default"))) void php_url_free(php_url *theurl);
__attribute__ ((visibility("default"))) php_url *php_url_parse(char const *str);
__attribute__ ((visibility("default"))) php_url *php_url_parse_ex(char const *str, int length);
__attribute__ ((visibility("default"))) int php_url_decode(char *str, int len);
__attribute__ ((visibility("default"))) int php_raw_url_decode(char *str, int len);
__attribute__ ((visibility("default"))) char *php_url_encode(char const *s, int len, int *new_length);
__attribute__ ((visibility("default"))) char *php_raw_url_encode(char const *s, int len, int *new_length);

void zif_parse_url(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_urlencode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_urldecode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rawurlencode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rawurldecode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_headers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 100 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_string.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_string.h"
void zif_strspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strcspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_ireplace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rtrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_trim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ltrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_soundex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_levenshtein(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_count_chars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_wordwrap(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_explode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_implode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtok(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtoupper(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtolower(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_basename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_dirname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pathinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strstr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrchr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_quotemeta(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_lcfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucwords(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrevc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_sprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_printf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vsprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ord(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl2br(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_setlocale(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_localeconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl_langinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stristr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chunk_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_parse_str(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_getcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_bin2hex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hex2bin(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_similar_text(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strip_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_repeat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_word_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpbrk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_strcoll(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_money_format(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );







int zm_startup_nl_langinfo(int type, int module_number );






__attribute__ ((visibility("default"))) int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out);


__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtr(char *str, int len, char *str_from, char *str_to, int trlen);
__attribute__ ((visibility("default"))) char *php_addslashes(char *str, int length, int *new_length, int freeit );
__attribute__ ((visibility("default"))) char *php_addcslashes(const char *str, int length, int *new_length, int freeit, char *what, int wlength );
__attribute__ ((visibility("default"))) void php_stripslashes(char *str, int *len );
__attribute__ ((visibility("default"))) void php_stripcslashes(char *str, int *len);
__attribute__ ((visibility("default"))) void php_basename(const char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len );
__attribute__ ((visibility("default"))) size_t php_dirname(char *str, size_t len);
__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len);
__attribute__ ((visibility("default"))) char *php_str_to_str_ex(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length, int case_sensitivity, int *replace_count);
__attribute__ ((visibility("default"))) char *php_str_to_str(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length);
__attribute__ ((visibility("default"))) char *php_trim(char *c, int len, char *what, int what_len, zval *return_value, int mode );
__attribute__ ((visibility("default"))) size_t php_strip_tags(char *rbuf, int len, int *state, char *allow, int allow_len);
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, int len, int *stateptr, char *allow, int allow_len, zend_bool allow_tag_spaces);
__attribute__ ((visibility("default"))) int php_char_to_str_ex(char *str, uint len, char from, char *to, int to_len, zval *result, int case_sensitivity, int *replace_count);
__attribute__ ((visibility("default"))) int php_char_to_str(char *str, uint len, char from, char *to, int to_len, zval *result);
__attribute__ ((visibility("default"))) void php_implode(zval *delim, zval *arr, zval *return_value );
__attribute__ ((visibility("default"))) void php_explode(zval *delim, zval *str, zval *return_value, long limit);

__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);

__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2 );
# 165 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 101 "sapi/cli/php_cli_server.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h" 1
# 63 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h"
__attribute__ ((visibility("default"))) char *php_socket_strerror(long err, char *buf, size_t bufsize);




# 1 "/usr/include/netinet/in.h" 1 3 4
# 22 "/usr/include/netinet/in.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 1 3 4
# 63 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 3 4
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
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 64 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stdint.h" 2 3 4
# 23 "/usr/include/netinet/in.h" 2 3 4







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
# 68 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h" 2
# 93 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h"
typedef int php_socket_t;
# 110 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/poll.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/poll.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };
# 57 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 111 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h" 2
typedef struct pollfd php_pollfd;
# 142 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h"
static inline int php_tvtoto(struct timeval *timeouttv)
{
 if (timeouttv) {
  return (timeouttv->tv_sec * 1000) + (timeouttv->tv_usec / 1000);
 }
 return -1;
}





static inline int php_pollfd_for(php_socket_t fd, int events, struct timeval *timeouttv)
{
 php_pollfd p;
 int n;

 p.fd = fd;
 p.events = events;
 p.revents = 0;

 n = poll(&p, 1, php_tvtoto(timeouttv));

 if (n > 0) {
  return p.revents;
 }

 return n;
}

static inline int php_pollfd_for_ms(php_socket_t fd, int events, int timeout)
{
 php_pollfd p;
 int n;

 p.fd = fd;
 p.events = events;
 p.revents = 0;

 n = poll(&p, 1, timeout);

 if (n > 0) {
  return p.revents;
 }

 return n;
}


__attribute__ ((visibility("default"))) void _php_emit_fd_setsize_warning(int max_fd);
# 211 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h"
typedef struct sockaddr_storage php_sockaddr_storage;
# 225 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_network.h"
__attribute__ ((visibility("default"))) int php_network_getaddresses(const char *host, int socktype, struct sockaddr ***sal, char **error_string );
__attribute__ ((visibility("default"))) void php_network_freeaddresses(struct sockaddr **sal);

__attribute__ ((visibility("default"))) php_socket_t php_network_connect_socket_to_host(const char *host, unsigned short port,
  int socktype, int asynchronous, struct timeval *timeout, char **error_string,
  int *error_code, char *bindto, unsigned short bindport
           );

__attribute__ ((visibility("default"))) int php_network_connect_socket(php_socket_t sockfd,
  const struct sockaddr *addr,
  socklen_t addrlen,
  int asynchronous,
  struct timeval *timeout,
  char **error_string,
  int *error_code);




__attribute__ ((visibility("default"))) php_socket_t php_network_bind_socket_to_local_addr(const char *host, unsigned port,
  int socktype, char **error_string, int *error_code
           );

__attribute__ ((visibility("default"))) php_socket_t php_network_accept_incoming(php_socket_t srvsock,
  char **textaddr, long *textaddrlen,
  struct sockaddr **addr,
  socklen_t *addrlen,
  struct timeval *timeout,
  char **error_string,
  int *error_code
           );

__attribute__ ((visibility("default"))) int php_network_get_sock_name(php_socket_t sock,
  char **textaddr, long *textaddrlen,
  struct sockaddr **addr,
  socklen_t *addrlen
           );

__attribute__ ((visibility("default"))) int php_network_get_peer_name(php_socket_t sock,
  char **textaddr, long *textaddrlen,
  struct sockaddr **addr,
  socklen_t *addrlen
           );

__attribute__ ((visibility("default"))) void php_any_addr(int family, php_sockaddr_storage *addr, unsigned short port);
__attribute__ ((visibility("default"))) int php_sockaddr_size(php_sockaddr_storage *addr);


struct _php_netstream_data_t {
 php_socket_t socket;
 char is_blocked;
 struct timeval timeout;
 char timeout_event;
 size_t ownsize;
};
typedef struct _php_netstream_data_t php_netstream_data_t;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_socket_ops;
extern php_stream_ops php_stream_generic_socket_ops;



__attribute__ ((visibility("default"))) php_stream *_php_stream_sock_open_from_socket(php_socket_t socket, const char *persistent_id );

__attribute__ ((visibility("default"))) php_stream *_php_stream_sock_open_host(const char *host, unsigned short port,
  int socktype, struct timeval *timeout, const char *persistent_id );
__attribute__ ((visibility("default"))) void php_network_populate_name_from_sockaddr(

  struct sockaddr *sa, socklen_t sl,

  char **textaddr, long *textaddrlen,

  struct sockaddr **addr,
  socklen_t *addrlen
           );

__attribute__ ((visibility("default"))) int php_network_parse_network_address_with_port(const char *addr,
  long addrlen, struct sockaddr *sa, socklen_t *sl );
# 102 "sapi/cli/php_cli_server.c" 2

# 1 "sapi/cli/php_http_parser.h" 1
# 52 "sapi/cli/php_http_parser.h"
typedef struct php_http_parser php_http_parser;
typedef struct php_http_parser_settings php_http_parser_settings;
# 69 "sapi/cli/php_http_parser.h"
typedef int (*php_http_data_cb) (php_http_parser*, const char *at, size_t length);
typedef int (*php_http_cb) (php_http_parser*);



enum php_http_method
  { PHP_HTTP_DELETE = 0
  , PHP_HTTP_GET
  , PHP_HTTP_HEAD
  , PHP_HTTP_POST
  , PHP_HTTP_PUT

  , PHP_HTTP_CONNECT
  , PHP_HTTP_OPTIONS
  , PHP_HTTP_TRACE

  , PHP_HTTP_COPY
  , PHP_HTTP_LOCK
  , PHP_HTTP_MKCOL
  , PHP_HTTP_MOVE
  , PHP_HTTP_PROPFIND
  , PHP_HTTP_PROPPATCH
  , PHP_HTTP_UNLOCK

  , PHP_HTTP_REPORT
  , PHP_HTTP_MKACTIVITY
  , PHP_HTTP_CHECKOUT
  , PHP_HTTP_MERGE

  , PHP_HTTP_MSEARCH
  , PHP_HTTP_NOTIFY
  , PHP_HTTP_SUBSCRIBE
  , PHP_HTTP_UNSUBSCRIBE
  };


enum php_http_parser_type { PHP_HTTP_REQUEST, PHP_HTTP_RESPONSE, PHP_HTTP_BOTH };


struct php_http_parser {

  unsigned char type : 2;
  unsigned char flags : 6;
  unsigned char state;
  unsigned char header_state;
  unsigned char index;

  uint32_t nread;
  ssize_t content_length;


  unsigned short http_major;
  unsigned short http_minor;
  unsigned short status_code;
  unsigned char method;






  char upgrade;


  void *data;
};


struct php_http_parser_settings {
  php_http_cb on_message_begin;
  php_http_data_cb on_path;
  php_http_data_cb on_query_string;
  php_http_data_cb on_url;
  php_http_data_cb on_fragment;
  php_http_data_cb on_header_field;
  php_http_data_cb on_header_value;
  php_http_cb on_headers_complete;
  php_http_data_cb on_body;
  php_http_cb on_message_complete;
};


void php_http_parser_init(php_http_parser *parser, enum php_http_parser_type type);


size_t php_http_parser_execute(php_http_parser *parser,
                           const php_http_parser_settings *settings,
                           const char *data,
                           size_t len);
# 166 "sapi/cli/php_http_parser.h"
int php_http_should_keep_alive(php_http_parser *parser);


const char *php_http_method_str(enum php_http_method);
# 104 "sapi/cli/php_cli_server.c" 2
# 1 "sapi/cli/php_cli_server.h" 1
# 26 "sapi/cli/php_cli_server.h"
extern sapi_module_struct cli_server_sapi_module;
extern int do_cli_server(int argc, char **argv );

typedef struct _zend_cli_server_globals {
 short color;
} zend_cli_server_globals;
# 105 "sapi/cli/php_cli_server.c" 2





typedef struct php_cli_server_poller {
 fd_set rfds, wfds;
 struct {
  fd_set rfds, wfds;
 } active;
 php_socket_t max_fd;
} php_cli_server_poller;

typedef struct php_cli_server_request {
 enum php_http_method request_method;
 int protocol_version;
 char *request_uri;
 size_t request_uri_len;
 char *vpath;
 size_t vpath_len;
 char *path_translated;
 size_t path_translated_len;
 char *path_info;
 size_t path_info_len;
 char *query_string;
 size_t query_string_len;
 HashTable headers;
 char *content;
 size_t content_len;
 const char *ext;
 size_t ext_len;
 struct stat sb;
} php_cli_server_request;

typedef struct php_cli_server_chunk {
 struct php_cli_server_chunk *next;
 enum php_cli_server_chunk_type {
  PHP_CLI_SERVER_CHUNK_HEAP,
  PHP_CLI_SERVER_CHUNK_IMMORTAL
 } type;
 union {
  struct { void *block; char *p; size_t len; } heap;
  struct { const char *p; size_t len; } immortal;
 } data;
} php_cli_server_chunk;

typedef struct php_cli_server_buffer {
 php_cli_server_chunk *first;
 php_cli_server_chunk *last;
} php_cli_server_buffer;

typedef struct php_cli_server_content_sender {
 php_cli_server_buffer buffer;
} php_cli_server_content_sender;

typedef struct php_cli_server_client {
 struct php_cli_server *server;
 php_socket_t sock;
 struct sockaddr *addr;
 socklen_t addr_len;
 char *addr_str;
 size_t addr_str_len;
 php_http_parser parser;
 unsigned int request_read:1;
 char *current_header_name;
 size_t current_header_name_len;
 unsigned int current_header_name_allocated:1;
 size_t post_read_offset;
 php_cli_server_request request;
 unsigned int content_sender_initialized:1;
 php_cli_server_content_sender content_sender;
 int file_fd;
} php_cli_server_client;

typedef struct php_cli_server {
 php_socket_t server_sock;
 php_cli_server_poller poller;
 int is_running;
 char *host;
 int port;
 int address_family;
 char *document_root;
 size_t document_root_len;
 char *router;
 size_t router_len;
 socklen_t socklen;
 HashTable clients;
} php_cli_server;

typedef struct php_cli_server_http_reponse_status_code_pair {
 int code;
 const char *str;
} php_cli_server_http_reponse_status_code_pair;

typedef struct php_cli_server_ext_mime_type_pair {
 const char *ext;
 const char *mime_type;
} php_cli_server_ext_mime_type_pair;

static php_cli_server_http_reponse_status_code_pair status_map[] = {
 { 100, "Continue" },
 { 101, "Switching Protocols" },
 { 200, "OK" },
 { 201, "Created" },
 { 202, "Accepted" },
 { 203, "Non-Authoritative Information" },
 { 204, "No Content" },
 { 205, "Reset Content" },
 { 206, "Partial Content" },
 { 300, "Multiple Choices" },
 { 301, "Moved Permanently" },
 { 302, "Found" },
 { 303, "See Other" },
 { 304, "Not Modified" },
 { 305, "Use Proxy" },
 { 307, "Temporary Redirect" },
 { 400, "Bad Request" },
 { 401, "Unauthorized" },
 { 402, "Payment Required" },
 { 403, "Forbidden" },
 { 404, "Not Found" },
 { 405, "Method Not Allowed" },
 { 406, "Not Acceptable" },
 { 407, "Proxy Authentication Required" },
 { 408, "Request Timeout" },
 { 409, "Conflict" },
 { 410, "Gone" },
 { 411, "Length Required" },
 { 412, "Precondition Failed" },
 { 413, "Request Entity Too Large" },
 { 414, "Request-URI Too Long" },
 { 415, "Unsupported Media Type" },
 { 416, "Requested Range Not Satisfiable" },
 { 417, "Expectation Failed" },
 { 500, "Internal Server Error" },
 { 501, "Not Implemented" },
 { 502, "Bad Gateway" },
 { 503, "Service Unavailable" },
 { 504, "Gateway Timeout" },
 { 505, "HTTP Version Not Supported" },
};

static php_cli_server_http_reponse_status_code_pair template_map[] = {
 { 400, "<h1 class=\"h\">%s</h1><p>Your browser sent a request that this server could not understand.</p>" },
 { 404, "<h1 class=\"h\">%s</h1><p>The requested resource %s was not found on this server.</p>" },
 { 500, "<h1 class=\"h\">%s</h1><p>The server is temporality unavaiable.</p>" }
};

static php_cli_server_ext_mime_type_pair mime_type_map[] = {
 { "html", "text/html" },
 { "htm", "text/html" },
 { "js", "text/javascript" },
 { "css", "text/css" },
 { "gif", "image/gif" },
 { "jpg", "image/jpeg" },
 { "jpeg", "image/jpeg" },
 { "png", "image/png" },
 { "jpe", "image/jpeg" },
 { "svg", "image/svg+xml" },
 { "txt", "text/plain" },
 { ((void*)0), ((void*)0) }
};

static int php_cli_output_is_tty = -1;

static size_t php_cli_server_client_send_through(php_cli_server_client *client, const char *str, size_t str_len);
static php_cli_server_chunk *php_cli_server_chunk_heap_new_self_contained(size_t len);
static void php_cli_server_buffer_append(php_cli_server_buffer *buffer, php_cli_server_chunk *chunk);
static void php_cli_server_logf(const char *format , ...);
static void php_cli_server_log_response(php_cli_server_client *client, int status, const char *message );

zend_cli_server_globals cli_server_globals;;




static const char php_cli_server_css[] = "<style type=\"text/css\">\n" "body {background-color: #ffffff; color: #000000;}\n" "body, td, th, h1, h2 {font-family: sans-serif;}\n" ".center {text-align: center;}\n" ".center table { margin-left: auto; margin-right: auto; text-align: left;}\n" ".center th { text-align: center !important; }\n" "h1 {font-size: 150%;}\n" "h2 {font-size: 125%;}\n" ".p {text-align: left;}\n" ".e {background-color: #ccccff; font-weight: bold; color: #000000;}\n" ".h {background-color: #9999cc; font-weight: bold; color: #000000;}\n" ".v {background-color: #cccccc; color: #000000;}\n" ".vr {background-color: #cccccc; text-align: right; color: #000000;}\n" "img {float: right; border: 0px;}\n" "hr {width: 600px; background-color: #cccccc; border: 0px; height: 1px; color: #000000;}\n" "</style>\n";
# 299 "sapi/cli/php_cli_server.c"
static void char_ptr_dtor_p(char **p)
{
 ((1)?free(*p):_efree((*p) ));
}

static char *get_last_error()
{
 return ((1)?(__extension__ (__builtin_constant_p (strerror((*__errno_location ()))) && ((size_t)(const void *)((strerror((*__errno_location ()))) + 1) - (size_t)(const void *)(strerror((*__errno_location ()))) == 1) ? (((const char *) (strerror((*__errno_location ()))))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (strerror((*__errno_location ()))) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void*)0)) __retval = (char *) memcpy (__retval, strerror((*__errno_location ())), __len); __retval; })) : __strdup (strerror((*__errno_location ()))))):_estrdup((strerror((*__errno_location ()))) ));
}

static const char *get_status_string(int code)
{
 size_t e = (sizeof(status_map) / sizeof(php_cli_server_http_reponse_status_code_pair));
 size_t s = 0;

 while (e != s) {
  size_t c = ((((e + s + 1) / 2)<(e - 1))?((e + s + 1) / 2):(e - 1));
  int d = status_map[c].code;
  if (d > code) {
   e = c;
  } else if (d < code) {
   s = c;
  } else {
   return status_map[c].str;
  }
 }
 return ((void*)0);
}

static const char *get_template_string(int code)
{
 size_t e = (sizeof(template_map) / sizeof(php_cli_server_http_reponse_status_code_pair));
 size_t s = 0;

 while (e != s) {
  size_t c = ((((e + s + 1) / 2)<(e - 1))?((e + s + 1) / 2):(e - 1));
  int d = template_map[c].code;
  if (d > code) {
   e = c;
  } else if (d < code) {
   s = c;
  } else {
   return template_map[c].str;
  }
 }
 return ((void*)0);
}

static void append_http_status_line(smart_str *buffer, int protocol_version, int response_code, int persistent)
{
 if (!response_code) {
  response_code = 200;
 }
 do { register size_t __nl; smart_str *__dest = (smart_str *) (buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((4)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((4)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("HTTP"), (4)); __dest->len = __nl; } while (0);
 do { register size_t __nl; do { if (!((buffer))->c) { ((buffer))->len = 0; __nl = (1); ((buffer))->a = __nl < 78 ? 78 : __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } else { __nl = ((buffer))->len + (1); if (__nl >= ((buffer))->a) { ((buffer))->a = __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } } } while (0); (buffer)->len = __nl; ((unsigned char *) (buffer)->c)[(buffer)->len - 1] = ('/'); } while (0);
 do { char __b[32]; char *__t; do { char *__p = (__b + sizeof(__b) - 1); int __num = ((protocol_version / 100)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); __t = __p; } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->len = __nl; } while (0); } while (0);
 do { register size_t __nl; do { if (!((buffer))->c) { ((buffer))->len = 0; __nl = (1); ((buffer))->a = __nl < 78 ? 78 : __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } else { __nl = ((buffer))->len + (1); if (__nl >= ((buffer))->a) { ((buffer))->a = __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } } } while (0); (buffer)->len = __nl; ((unsigned char *) (buffer)->c)[(buffer)->len - 1] = ('.'); } while (0);
 do { char __b[32]; char *__t; do { char *__p = (__b + sizeof(__b) - 1); int __num = ((protocol_version % 100)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); __t = __p; } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->len = __nl; } while (0); } while (0);
 do { register size_t __nl; do { if (!((buffer))->c) { ((buffer))->len = 0; __nl = (1); ((buffer))->a = __nl < 78 ? 78 : __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } else { __nl = ((buffer))->len + (1); if (__nl >= ((buffer))->a) { ((buffer))->a = __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } } } while (0); (buffer)->len = __nl; ((unsigned char *) (buffer)->c)[(buffer)->len - 1] = (' '); } while (0);
 do { char __b[32]; char *__t; do { char *__p = (__b + sizeof(__b) - 1); int __num = ((response_code)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); __t = __p; } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->len = __nl; } while (0); } while (0);
 do { register size_t __nl; do { if (!((buffer))->c) { ((buffer))->len = 0; __nl = (1); ((buffer))->a = __nl < 78 ? 78 : __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } else { __nl = ((buffer))->len + (1); if (__nl >= ((buffer))->a) { ((buffer))->a = __nl + 128; ((buffer))->c = (((((persistent))))?__zend_realloc(((((buffer))->c)), ((((buffer))->a + 1))):_erealloc((((((buffer))->c))), (((((buffer))->a + 1))), 0 )); } } } while (0); (buffer)->len = __nl; ((unsigned char *) (buffer)->c)[(buffer)->len - 1] = (' '); } while (0);
 do { register size_t __nl; smart_str *__dest = (smart_str *) ((buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen(get_status_string(response_code)))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen(get_status_string(response_code)))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((get_status_string(response_code))), (strlen(get_status_string(response_code)))); __dest->len = __nl; } while (0);
 do { register size_t __nl; smart_str *__dest = (smart_str *) (buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);
}

static void append_essential_headers(smart_str* buffer, php_cli_server_client *client, int persistent)
{
 {
  char **val;
  if (0 == zend_hash_find(&client->request.headers, "Host", sizeof("Host"), (void**)&val)) {
   do { register size_t __nl; smart_str *__dest = (smart_str *) (buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((sizeof("Host") - 1)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((sizeof("Host") - 1)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("Host"), (sizeof("Host") - 1)); __dest->len = __nl; } while (0);
   do { register size_t __nl; smart_str *__dest = (smart_str *) (buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((sizeof(": ") - 1)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((sizeof(": ") - 1)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (": "), (sizeof(": ") - 1)); __dest->len = __nl; } while (0);
   do { register size_t __nl; smart_str *__dest = (smart_str *) ((buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen(*val))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen(*val))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((persistent)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((*val)), (strlen(*val))); __dest->len = __nl; } while (0);
   do { register size_t __nl; smart_str *__dest = (smart_str *) (buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);
  }
 }
 do { register size_t __nl; smart_str *__dest = (smart_str *) (buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((sizeof("Connection: close\r\n") - 1)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((sizeof("Connection: close\r\n") - 1)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((persistent))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("Connection: close\r\n"), (sizeof("Connection: close\r\n") - 1)); __dest->len = __nl; } while (0);
}

static const char *get_mime_type(const char *ext, size_t ext_len)
{
 php_cli_server_ext_mime_type_pair *pair;
 for (pair = mime_type_map; pair->ext; pair++) {
  size_t len = strlen(pair->ext);
  if (len == ext_len && memcmp(pair->ext, ext, len) == 0) {
   return pair->mime_type;
  }
 }
 return ((void*)0);
}




static void cli_server_init_globals(zend_cli_server_globals *cg )
{
 cg->color = 0;
}

static const zend_ini_entry ini_entries[] = {
 { 0, ((1<<0)|(1<<1)|(1<<2)), "cli_server.color", sizeof("cli_server.color"), OnUpdateBool, (void *) ((long) (((char *) (&(((zend_cli_server_globals*)((void*)0))->color))) - ((char *) ((void*)0)))), (void *) &cli_server_globals, ((void*)0), "0", sizeof("0")-1, ((void*)0), 0, 0, 0, zend_ini_boolean_displayer_cb },
{ 0, 0, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), 0, 0, 0, ((void*)0) } };

static int zm_startup_cli_server(int type, int module_number )
{
 cli_server_init_globals(&cli_server_globals);;
 zend_register_ini_entries(ini_entries, module_number );
 return 0;
}

static int zm_shutdown_cli_server(int type, int module_number )
{
 zend_unregister_ini_entries(module_number );
 return 0;
}

static void zm_info_cli_server(zend_module_entry *zend_module )
{
 display_ini_entries(zend_module);
}

zend_module_entry cli_server_module_entry = {
 sizeof(zend_module_entry), 20100525, 0, 0, ((void*)0), ((void*)0),
 "cli_server",
 ((void*)0),
 zm_startup_cli_server,
 zm_shutdown_cli_server,
 ((void*)0),
 ((void*)0),
 zm_info_cli_server,
 "5.4.5-dev",
 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0, ((void*)0), 0, "API" "20100525" ",NTS"
};


static int sapi_cli_server_startup(sapi_module_struct *sapi_module)
{
 if (php_module_startup(sapi_module, &cli_server_module_entry, 1) == -1) {
  return -1;
 }
 return 0;
}

static int sapi_cli_server_ub_write(const char *str, uint str_length )
{
 php_cli_server_client *client = (sapi_globals.server_context);
 if (!client) {
  return 0;
 }
 return php_cli_server_client_send_through(client, str, str_length);
}

static void sapi_cli_server_flush(void *server_context)
{
 php_cli_server_client *client = server_context;
               ;

 if (!client) {
  return;
 }

 if (client->sock < 0) {
  php_handle_aborted_connection();
  return;
 }

 if (!(sapi_globals.headers_sent)) {
  sapi_send_headers();
  (sapi_globals.headers_sent) = 1;
 }
}

static int sapi_cli_server_discard_headers(sapi_headers_struct *sapi_headers ) {
 return 1;
}


static int sapi_cli_server_send_headers(sapi_headers_struct *sapi_headers )
{
 php_cli_server_client *client = (sapi_globals.server_context);
 smart_str buffer = { 0 };
 sapi_header_struct *h;
 zend_llist_position pos;

 if (client == ((void*)0) || (sapi_globals.request_info).no_headers) {
  return 1;
 }

 if ((sapi_globals.sapi_headers).http_status_line) {
  do { register size_t __nl; smart_str *__dest = (smart_str *) (((&buffer))); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((strlen((sapi_globals.sapi_headers).http_status_line)))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((strlen((sapi_globals.sapi_headers).http_status_line)))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((((sapi_globals.sapi_headers).http_status_line))), ((strlen((sapi_globals.sapi_headers).http_status_line)))); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((2))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((2))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("\r\n")), ((2))); __dest->len = __nl; } while (0);
 } else {
  append_http_status_line(&buffer, client->request.protocol_version, (sapi_globals.sapi_headers).http_response_code, 0);
 }

 append_essential_headers(&buffer, client, 0);

 h = (sapi_header_struct*)zend_llist_get_first_ex(&sapi_headers->headers, &pos);
 while (h) {
  if (!h->header_len) {
   continue;
  }
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((h->header_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((h->header_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((h->header)), ((h->header_len))); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((2))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((2))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("\r\n")), ((2))); __dest->len = __nl; } while (0);
  h = (sapi_header_struct*)zend_llist_get_next_ex(&sapi_headers->headers, &pos);
 }
 do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((2))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((2))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("\r\n")), ((2))); __dest->len = __nl; } while (0);

 php_cli_server_client_send_through(client, buffer.c, buffer.len);

 do { smart_str *__s = (smart_str *) ((&buffer)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
 return 1;
}


static char *sapi_cli_server_read_cookies(void)
{
 php_cli_server_client *client = (sapi_globals.server_context);
 char **val;
 if (-1 == zend_hash_find(&client->request.headers, "Cookie", sizeof("Cookie"), (void**)&val)) {
  return ((void*)0);
 }
 return *val;
}

static int sapi_cli_server_read_post(char *buf, uint count_bytes )
{
 php_cli_server_client *client = (sapi_globals.server_context);
 if (client->request.content) {
  size_t content_len = client->request.content_len;
  size_t nbytes_copied = (((client->post_read_offset + count_bytes)<(content_len))?(client->post_read_offset + count_bytes):(content_len)) - client->post_read_offset;
  memmove(buf, client->request.content + client->post_read_offset, nbytes_copied);
  client->post_read_offset += nbytes_copied;
  return nbytes_copied;
 }
 return 0;
}

static void sapi_cli_server_register_variable(zval *track_vars_array, const char *key, const char *val )
{
 char *new_val = (char *)val;
 uint new_val_len;
 if (sapi_module.input_filter(5, (char*)key, &new_val, strlen(val), &new_val_len )) {
  php_register_variable_safe((char *)key, new_val, new_val_len, track_vars_array );
 }
}

static int sapi_cli_server_register_entry_cb(char **entry , int num_args, va_list args, zend_hash_key *hash_key) {
 zval *track_vars_array = __builtin_va_arg(args, zval *);
 if (hash_key->nKeyLength) {
  char *real_key, *key;
  uint i;
  key = _estrndup((hash_key->arKey), (hash_key->nKeyLength) );
  for(i=0; i<hash_key->nKeyLength; i++) {
   if (key[i] == '-') {
    key[i] = '_';
   } else {
    key[i] = (__extension__ ({ int __res; if (sizeof (key[i]) > 1) { if (__builtin_constant_p (key[i])) { int __c = (key[i]); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (key[i]); } else __res = (*__ctype_toupper_loc ())[(int) (key[i])]; __res; }));
   }
  }
  spprintf(&real_key, 0, "%s_%s", "HTTP", key);
  sapi_cli_server_register_variable(track_vars_array, real_key, *entry );
  _efree((key) );
  _efree((real_key) );
 }

 return 0;
}


static void sapi_cli_server_register_variables(zval *track_vars_array )
{
 php_cli_server_client *client = (sapi_globals.server_context);
 sapi_cli_server_register_variable(track_vars_array, "DOCUMENT_ROOT", client->server->document_root );
 {
  char *tmp;
  if ((tmp = strrchr(client->addr_str, ':'))) {
   char addr[64], port[8];
   __builtin_strncpy (port, tmp + 1, 8);
   port[7] = '\0';
   __builtin_strncpy (addr, client->addr_str, tmp - client->addr_str);
   addr[tmp - client->addr_str] = '\0';
   sapi_cli_server_register_variable(track_vars_array, "REMOTE_ADDR", addr );
   sapi_cli_server_register_variable(track_vars_array, "REMOTE_PORT", port );
  } else {
   sapi_cli_server_register_variable(track_vars_array, "REMOTE_ADDR", client->addr_str );
  }
 }
 {
  char *tmp;
  spprintf(&tmp, 0, "PHP %s Development Server", "5.4.5-dev");
  sapi_cli_server_register_variable(track_vars_array, "SERVER_SOFTWARE", tmp );
  _efree((tmp) );
 }
 {
  char *tmp;
  spprintf(&tmp, 0, "HTTP/%d.%d", client->request.protocol_version / 100, client->request.protocol_version % 100);
  sapi_cli_server_register_variable(track_vars_array, "SERVER_PROTOCOL", tmp );
  _efree((tmp) );
 }
 sapi_cli_server_register_variable(track_vars_array, "SERVER_NAME", client->server->host );
 {
  char *tmp;
  spprintf(&tmp, 0, "%i", client->server->port);
  sapi_cli_server_register_variable(track_vars_array, "SERVER_PORT", tmp );
  _efree((tmp) );
 }

 sapi_cli_server_register_variable(track_vars_array, "REQUEST_URI", client->request.request_uri );
 sapi_cli_server_register_variable(track_vars_array, "REQUEST_METHOD", (sapi_globals.request_info).request_method );
 sapi_cli_server_register_variable(track_vars_array, "SCRIPT_NAME", client->request.vpath );
 if ((sapi_globals.request_info).path_translated) {
  sapi_cli_server_register_variable(track_vars_array, "SCRIPT_FILENAME", (sapi_globals.request_info).path_translated );
 } else if (client->server->router) {
  char *temp;
  spprintf(&temp, 0, "%s/%s", client->server->document_root, client->server->router);
  sapi_cli_server_register_variable(track_vars_array, "SCRIPT_FILENAME", temp );
  _efree((temp) );
 }
 if (client->request.path_info) {
  sapi_cli_server_register_variable(track_vars_array, "PATH_INFO", client->request.path_info );
 }
 if (client->request.path_info_len) {
  char *tmp;
  spprintf(&tmp, 0, "%s%s", client->request.vpath, client->request.path_info);
  sapi_cli_server_register_variable(track_vars_array, "PHP_SELF", tmp );
  _efree((tmp) );
 } else {
  sapi_cli_server_register_variable(track_vars_array, "PHP_SELF", client->request.vpath );
 }
 if (client->request.query_string) {
  sapi_cli_server_register_variable(track_vars_array, "QUERY_STRING", client->request.query_string );
 }
 zend_hash_apply_with_arguments(&client->request.headers , (apply_func_args_t)sapi_cli_server_register_entry_cb, 1, track_vars_array);
}

static void sapi_cli_server_log_message(char *msg )
{
 struct timeval tv;
 struct tm tm;
 char buf[52];
 gettimeofday(&tv, ((void*)0));
 localtime_r(&tv.tv_sec, &tm);
 asctime_r(&tm, buf);
 {
  size_t l = strlen(buf);
  if (l > 0) {
   buf[l - 1] = '\0';
  } else {
   memmove(buf, "unknown", sizeof("unknown"));
  }
 }
 fprintf(stderr, "[%s] %s\n", buf, msg);
}



sapi_module_struct cli_server_sapi_module = {
 "cli-server",
 "Built-in HTTP server",

 sapi_cli_server_startup,
 php_module_shutdown_wrapper,

 ((void*)0),
 ((void*)0),

 sapi_cli_server_ub_write,
 sapi_cli_server_flush,
 ((void*)0),
 ((void*)0),

 zend_error,

 ((void*)0),
 sapi_cli_server_send_headers,
 ((void*)0),

 sapi_cli_server_read_post,
 sapi_cli_server_read_cookies,

 sapi_cli_server_register_variables,
 sapi_cli_server_log_message,
 ((void*)0),
 ((void*)0),


};

static int php_cli_server_poller_ctor(php_cli_server_poller *poller)
{
 do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " "stosq" : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&((&poller->rfds)->__fds_bits)[0]) : "memory"); } while (0);
 do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " "stosq" : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&((&poller->wfds)->__fds_bits)[0]) : "memory"); } while (0);
 poller->max_fd = -1;
 return 0;
}

static void php_cli_server_poller_add(php_cli_server_poller *poller, int mode, int fd)
{
 if (mode & 0x001) {
  do { if (fd < 1024) ((void) (((&poller->rfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] |= ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }
 if (mode & 0x004) {
  do { if (fd < 1024) ((void) (((&poller->wfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] |= ((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }
 if (fd > poller->max_fd) {
  poller->max_fd = fd;
 }
}

static void php_cli_server_poller_remove(php_cli_server_poller *poller, int mode, int fd)
{
 if (mode & 0x001) {
  do { if (fd < 1024) ((void) (((&poller->rfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] &= ~((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }
 if (mode & 0x004) {
  do { if (fd < 1024) ((void) (((&poller->wfds)->__fds_bits)[((fd) / (8 * (int) sizeof (__fd_mask)))] &= ~((__fd_mask) 1 << ((fd) % (8 * (int) sizeof (__fd_mask)))))); } while(0);
 }

 if (fd == poller->max_fd) {
  while (fd > 0) {
   fd--;
   if (((unsigned int *)&poller->rfds)[fd / (8 * sizeof(unsigned int))] || ((unsigned int *)&poller->wfds)[fd / (8 * sizeof(unsigned int))]) {
    break;
   }
   fd -= fd % (8 * sizeof(unsigned int));
  }
  poller->max_fd = fd;
 }

}

static int php_cli_server_poller_poll(php_cli_server_poller *poller, const struct timeval *tv)
{
 memmove(&poller->active.rfds, &poller->rfds, sizeof(poller->rfds));
 memmove(&poller->active.wfds, &poller->wfds, sizeof(poller->wfds));
 return select(poller->max_fd + 1, &poller->active.rfds, &poller->active.wfds, ((void*)0), (struct timeval *)tv);
}

static int php_cli_server_poller_iter_on_active(php_cli_server_poller *poller, void *opaque, int(*callback)(void *, int fd, int events))
{
 int retval = 0;
# 783 "sapi/cli/php_cli_server.c"
 php_socket_t fd = 0;
 const php_socket_t max_fd = poller->max_fd;
 const unsigned int *pr = (unsigned int *)&poller->active.rfds,
                    *pw = (unsigned int *)&poller->active.wfds,
                    *e = pr + (max_fd + (8 * sizeof(unsigned int)) - 1) / (8 * sizeof(unsigned int));
 unsigned int mask;
 while (pr < e && fd <= max_fd) {
  for (mask = 1; mask; mask <<= 1, fd++) {
   int events = (*pr & mask ? 0x001: 0) | (*pw & mask ? 0x004: 0);
   if (events) {
    if (0 != callback(opaque, fd, events)) {
     retval = -1;
    }
   }
  }
  pr++;
  pw++;
 }

 return retval;
}

static size_t php_cli_server_chunk_size(const php_cli_server_chunk *chunk)
{
 switch (chunk->type) {
 case PHP_CLI_SERVER_CHUNK_HEAP:
  return chunk->data.heap.len;
 case PHP_CLI_SERVER_CHUNK_IMMORTAL:
  return chunk->data.immortal.len;
 }
 return 0;
}

static void php_cli_server_chunk_dtor(php_cli_server_chunk *chunk)
{
 switch (chunk->type) {
 case PHP_CLI_SERVER_CHUNK_HEAP:
  if (chunk->data.heap.block != chunk) {
   ((1)?free(chunk->data.heap.block):_efree((chunk->data.heap.block) ));
  }
  break;
 case PHP_CLI_SERVER_CHUNK_IMMORTAL:
  break;
 }
}

static void php_cli_server_buffer_dtor(php_cli_server_buffer *buffer)
{
 php_cli_server_chunk *chunk, *next;
 for (chunk = buffer->first; chunk; chunk = next) {
  next = chunk->next;
  php_cli_server_chunk_dtor(chunk);
  ((1)?free(chunk):_efree((chunk) ));
 }
}

static void php_cli_server_buffer_ctor(php_cli_server_buffer *buffer)
{
 buffer->first = ((void*)0);
 buffer->last = ((void*)0);
}

static void php_cli_server_buffer_append(php_cli_server_buffer *buffer, php_cli_server_chunk *chunk)
{
 php_cli_server_chunk *last;
 for (last = chunk; last->next; last = last->next);
 if (!buffer->last) {
  buffer->first = chunk;
 } else {
  buffer->last->next = chunk;
 }
 buffer->last = last;
}

static void php_cli_server_buffer_prepend(php_cli_server_buffer *buffer, php_cli_server_chunk *chunk)
{
 php_cli_server_chunk *last;
 for (last = chunk; last->next; last = last->next);
 last->next = buffer->first;
 if (!buffer->last) {
  buffer->last = last;
 }
 buffer->first = chunk;
}

static size_t php_cli_server_buffer_size(const php_cli_server_buffer *buffer)
{
 php_cli_server_chunk *chunk;
 size_t retval = 0;
 for (chunk = buffer->first; chunk; chunk = chunk->next) {
  retval += php_cli_server_chunk_size(chunk);
 }
 return retval;
}

static php_cli_server_chunk *php_cli_server_chunk_immortal_new(const char *buf, size_t len)
{
 php_cli_server_chunk *chunk = ((1)?__zend_malloc(sizeof(php_cli_server_chunk)):_emalloc((sizeof(php_cli_server_chunk)) ));
 if (!chunk) {
  return ((void*)0);
 }

 chunk->type = PHP_CLI_SERVER_CHUNK_IMMORTAL;
 chunk->next = ((void*)0);
 chunk->data.immortal.p = buf;
 chunk->data.immortal.len = len;
 return chunk;
}

static php_cli_server_chunk *php_cli_server_chunk_heap_new(char *block, char *buf, size_t len)
{
 php_cli_server_chunk *chunk = ((1)?__zend_malloc(sizeof(php_cli_server_chunk)):_emalloc((sizeof(php_cli_server_chunk)) ));
 if (!chunk) {
  return ((void*)0);
 }

 chunk->type = PHP_CLI_SERVER_CHUNK_HEAP;
 chunk->next = ((void*)0);
 chunk->data.heap.block = block;
 chunk->data.heap.p = buf;
 chunk->data.heap.len = len;
 return chunk;
}

static php_cli_server_chunk *php_cli_server_chunk_heap_new_self_contained(size_t len)
{
 php_cli_server_chunk *chunk = ((1)?__zend_malloc(sizeof(php_cli_server_chunk) + len):_emalloc((sizeof(php_cli_server_chunk) + len) ));
 if (!chunk) {
  return ((void*)0);
 }

 chunk->type = PHP_CLI_SERVER_CHUNK_HEAP;
 chunk->next = ((void*)0);
 chunk->data.heap.block = chunk;
 chunk->data.heap.p = (char *)(chunk + 1);
 chunk->data.heap.len = len;
 return chunk;
}

static void php_cli_server_content_sender_dtor(php_cli_server_content_sender *sender)
{
 php_cli_server_buffer_dtor(&sender->buffer);
}

static void php_cli_server_content_sender_ctor(php_cli_server_content_sender *sender)
{
 php_cli_server_buffer_ctor(&sender->buffer);
}

static int php_cli_server_content_sender_send(php_cli_server_content_sender *sender, php_socket_t fd, size_t *nbytes_sent_total)
{
 php_cli_server_chunk *chunk, *next;
 size_t _nbytes_sent_total = 0;

 for (chunk = sender->buffer.first; chunk; chunk = next) {
  ssize_t nbytes_sent;
  next = chunk->next;

  switch (chunk->type) {
  case PHP_CLI_SERVER_CHUNK_HEAP:
   nbytes_sent = send(fd, chunk->data.heap.p, chunk->data.heap.len, 0);
   if (nbytes_sent < 0) {
    *nbytes_sent_total = _nbytes_sent_total;
    return (*__errno_location ());
   } else if (nbytes_sent == chunk->data.heap.len) {
    php_cli_server_chunk_dtor(chunk);
    ((1)?free(chunk):_efree((chunk) ));
    sender->buffer.first = next;
    if (!next) {
     sender->buffer.last = ((void*)0);
    }
   } else {
    chunk->data.heap.p += nbytes_sent;
    chunk->data.heap.len -= nbytes_sent;
   }
   _nbytes_sent_total += nbytes_sent;
   break;

  case PHP_CLI_SERVER_CHUNK_IMMORTAL:
   nbytes_sent = send(fd, chunk->data.immortal.p, chunk->data.immortal.len, 0);
   if (nbytes_sent < 0) {
    *nbytes_sent_total = _nbytes_sent_total;
    return (*__errno_location ());
   } else if (nbytes_sent == chunk->data.immortal.len) {
    php_cli_server_chunk_dtor(chunk);
    ((1)?free(chunk):_efree((chunk) ));
    sender->buffer.first = next;
    if (!next) {
     sender->buffer.last = ((void*)0);
    }
   } else {
    chunk->data.immortal.p += nbytes_sent;
    chunk->data.immortal.len -= nbytes_sent;
   }
   _nbytes_sent_total += nbytes_sent;
   break;
  }
 }
 *nbytes_sent_total = _nbytes_sent_total;
 return 0;
}

static int php_cli_server_content_sender_pull(php_cli_server_content_sender *sender, int fd, size_t *nbytes_read)
{
 ssize_t _nbytes_read;
 php_cli_server_chunk *chunk = php_cli_server_chunk_heap_new_self_contained(131072);

 _nbytes_read = read(fd, chunk->data.heap.p, chunk->data.heap.len);
 if (_nbytes_read < 0) {
  char *errstr = get_last_error();
                ;
  php_cli_server_logf("%s" , errstr);
  ((1)?free(errstr):_efree((errstr) ));
  php_cli_server_chunk_dtor(chunk);
  ((1)?free(chunk):_efree((chunk) ));
  return 1;
 }
 chunk->data.heap.len = _nbytes_read;
 php_cli_server_buffer_append(&sender->buffer, chunk);
 *nbytes_read = _nbytes_read;
 return 0;
}


static int php_cli_is_output_tty()
{
 if (php_cli_output_is_tty == -1) {
  php_cli_output_is_tty = isatty(1);
 }
 return php_cli_output_is_tty;
}


static void php_cli_server_log_response(php_cli_server_client *client, int status, const char *message )
{
 int color = 0, effective_status = status;
 char *basic_buf, *message_buf = "", *error_buf = "";
 zend_bool append_error_message = 0;

 if ((core_globals.last_error_message)) {
  switch ((core_globals.last_error_type)) {
   case (1<<0L):
   case (1<<4L):
   case (1<<6L):
   case (1<<8L):
   case (1<<2L):
    if (status == 200) {

     effective_status = 500;
    }

    append_error_message = 1;
    break;
  }
 }


 if ((cli_server_globals.color) && php_cli_is_output_tty() == 1) {
  if (effective_status >= 500) {

   color = 1;
  } else if (effective_status >= 400) {

   color = 3;
  } else if (effective_status >= 200) {

   color = 2;
  }
 }



 spprintf(&basic_buf, 0, "%s [%d]: %s", client->addr_str, status, client->request.request_uri);
 if (!basic_buf) {
  return;
 }


 if (message) {
  spprintf(&message_buf, 0, " - %s", message);
  if (!message_buf) {
   _efree((basic_buf) );
   return;
  }
 }


 if (append_error_message) {
  spprintf(&error_buf, 0, " - %s in %s on line %d", (core_globals.last_error_message), (core_globals.last_error_file), (core_globals.last_error_lineno));
  if (!error_buf) {
   _efree((basic_buf) );
   if (message) {
    _efree((message_buf) );
   }
   return;
  }
 }

 if (color) {
  php_cli_server_logf("\x1b[3%dm%s%s%s\x1b[0m" , color, basic_buf, message_buf, error_buf);
 } else {
  php_cli_server_logf("%s%s%s" , basic_buf, message_buf, error_buf);
 }

 _efree((basic_buf) );
 if (message) {
  _efree((message_buf) );
 }
 if (append_error_message) {
  _efree((error_buf) );
 }
}

static void php_cli_server_logf(const char *format , ...)
{
 char *buf = ((void*)0);
 va_list ap;



 __builtin_va_start(ap, format);

 vspprintf(&buf, 0, format, ap);
 __builtin_va_end(ap);

 if (!buf) {
  return;
 }

 if (sapi_module.log_message) {
  sapi_module.log_message(buf );
 }

 _efree((buf) );
}

static int php_network_listen_socket(const char *host, int *port, int socktype, int *af, socklen_t *socklen, char **errstr )
{
 int retval = -1;
 int err = 0;
 struct sockaddr *sa = ((void*)0), **p, **sal;

 int num_addrs = php_network_getaddresses(host, socktype, &sal, errstr );
 if (num_addrs == 0) {
  return -1;
 }
 for (p = sal; *p; p++) {
  if (sa) {
   ((1)?free(sa):_efree((sa) ));
   sa = ((void*)0);
  }

  retval = socket((*p)->sa_family, socktype, 0);
  if (retval == -1) {
   continue;
  }

  switch ((*p)->sa_family) {

  case 10:
   sa = ((1)?__zend_malloc(sizeof(struct sockaddr_in6)):_emalloc((sizeof(struct sockaddr_in6)) ));
   if (!sa) {
    close(retval);
    retval = -1;
    *errstr = ((void*)0);
    goto out;
   }
   *(struct sockaddr_in6 *)sa = *(struct sockaddr_in6 *)*p;
   ((struct sockaddr_in6 *)sa)->sin6_port = (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (*port); if (__builtin_constant_p (__x)) __v = ((unsigned short int) ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8))); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }));
   *socklen = sizeof(struct sockaddr_in6);
   break;

  case 2:
   sa = ((1)?__zend_malloc(sizeof(struct sockaddr_in)):_emalloc((sizeof(struct sockaddr_in)) ));
   if (!sa) {
    close(retval);
    retval = -1;
    *errstr = ((void*)0);
    goto out;
   }
   *(struct sockaddr_in *)sa = *(struct sockaddr_in *)*p;
   ((struct sockaddr_in *)sa)->sin_port = (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (*port); if (__builtin_constant_p (__x)) __v = ((unsigned short int) ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8))); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }));
   *socklen = sizeof(struct sockaddr_in);
   break;
  default:

   *socklen = 0;
   close(retval);
   continue;
  }


  {
   int val = 1;
   setsockopt(retval, 1, 2, (char*)&val, sizeof(val));
  }


  if (bind(retval, sa, *socklen) == -1) {
   err = (*__errno_location ());
   if (err == 22 || err == 98) {
    goto out;
   }
   close(retval);
   retval = -1;
   continue;
  }
  err = 0;

  *af = sa->sa_family;
  if (*port == 0) {
   if (getsockname(retval, sa, socklen)) {
    err = (*__errno_location ());
    goto out;
   }
   switch (sa->sa_family) {

   case 10:
    *port = (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (((struct sockaddr_in6 *)sa)->sin6_port); if (__builtin_constant_p (__x)) __v = ((unsigned short int) ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8))); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }));
    break;

   case 2:
    *port = (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (((struct sockaddr_in *)sa)->sin_port); if (__builtin_constant_p (__x)) __v = ((unsigned short int) ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8))); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }));
    break;
   }
  }

  break;
 }

 if (retval == -1) {
  goto out;
 }

 if (listen(retval, 128)) {
  err = (*__errno_location ());
  goto out;
 }

out:
 if (sa) {
  ((1)?free(sa):_efree((sa) ));
 }
 if (sal) {
  php_network_freeaddresses(sal);
 }
 if (err) {
  if (retval >= 0) {
   close(retval);
  }
  if (errstr) {
   *errstr = php_socket_strerror(err, ((void*)0), 0);
  }
  return -1;
 }
 return retval;
}

static int php_cli_server_request_ctor(php_cli_server_request *req)
{
 req->protocol_version = 0;
 req->request_uri = ((void*)0);
 req->request_uri_len = 0;
 req->vpath = ((void*)0);
 req->vpath_len = 0;
 req->path_translated = ((void*)0);
 req->path_translated_len = 0;
 req->path_info = ((void*)0);
 req->path_info_len = 0;
 req->query_string = ((void*)0);
 req->query_string_len = 0;
 _zend_hash_init((&req->headers), (0), (((void*)0)), ((void(*)(void*))char_ptr_dtor_p), (1) );
 req->content = ((void*)0);
 req->content_len = 0;
 req->ext = ((void*)0);
 req->ext_len = 0;
 return 0;
}

static void php_cli_server_request_dtor(php_cli_server_request *req)
{
 if (req->request_uri) {
  ((1)?free(req->request_uri):_efree((req->request_uri) ));
 }
 if (req->vpath) {
  ((1)?free(req->vpath):_efree((req->vpath) ));
 }
 if (req->path_translated) {
  ((1)?free(req->path_translated):_efree((req->path_translated) ));
 }
 if (req->path_info) {
  ((1)?free(req->path_info):_efree((req->path_info) ));
 }
 if (req->query_string) {
  ((1)?free(req->query_string):_efree((req->query_string) ));
 }
 zend_hash_destroy(&req->headers);
 if (req->content) {
  ((1)?free(req->content):_efree((req->content) ));
 }
}

static void php_cli_server_request_translate_vpath(php_cli_server_request *request, const char *document_root, size_t document_root_len)
{
 struct stat sb;
 static const char *index_files[] = { "index.php", "index.html", ((void*)0) };
 char *buf = ((1)?_safe_malloc(1, request->vpath_len, 1 + document_root_len + 1 + sizeof("index.html")):_safe_emalloc((1), (request->vpath_len), (1 + document_root_len + 1 + sizeof("index.html")) ));
 char *p = buf, *prev_path = ((void*)0), *q, *vpath;
 size_t prev_path_len;
 int is_static_file = 0;

 if (!buf) {
  return;
 }

 memmove(p, document_root, document_root_len);
 p += document_root_len;
 vpath = p;
 if (request->vpath_len > 0 && request->vpath[0] != '/') {
  *p++ = '/';
 }
 q = request->vpath + request->vpath_len;
 while (q > request->vpath) {
  if (*q-- == '.') {
   is_static_file = 1;
   break;
  }
 }
 memmove(p, request->vpath, request->vpath_len);
# 1320 "sapi/cli/php_cli_server.c"
 p += request->vpath_len;
 *p = '\0';
 q = p;
 while (q > buf) {
  if (!stat(buf, &sb)) {
   if (sb.st_mode & 0040000) {
    const char **file = index_files;
    if (q[-1] != '/') {
     *q++ = '/';
    }
    while (*file) {
     size_t l = strlen(*file);
     memmove(q, *file, l + 1);
     if (!stat(buf, &sb) && (sb.st_mode & 0100000)) {
      q += l;
      break;
     }
     file++;
    }
    if (!*file || is_static_file) {
     if (prev_path) {
      ((1)?free(prev_path):_efree((prev_path) ));
     }
     ((1)?free(buf):_efree((buf) ));
     return;
    }
   }
   break;
  }
  if (prev_path) {
   ((1)?free(prev_path):_efree((prev_path) ));
   *q = '/';
  }
  while (q > buf && *(--q) != '/');
  prev_path_len = p - q;
  prev_path = ((1)?zend_strndup((q),(prev_path_len)):_estrndup(((q)), ((prev_path_len)) ));
  *q = '\0';
 }
 if (prev_path) {
  request->path_info_len = prev_path_len;







  request->path_info = prev_path;
  ((1)?free(request->vpath):_efree((request->vpath) ));
  request->vpath = ((1)?zend_strndup((vpath),(q - vpath)):_estrndup(((vpath)), ((q - vpath)) ));
  request->vpath_len = q - vpath;
  request->path_translated = buf;
  request->path_translated_len = q - buf;
 } else {
  ((1)?free(request->vpath):_efree((request->vpath) ));
  request->vpath = ((1)?zend_strndup((vpath),(q - vpath)):_estrndup(((vpath)), ((q - vpath)) ));
  request->vpath_len = q - vpath;
  request->path_translated = buf;
  request->path_translated_len = q - buf;
 }
# 1390 "sapi/cli/php_cli_server.c"
 request->sb = sb;
}

static void normalize_vpath(char **retval, size_t *retval_len, const char *vpath, size_t vpath_len, int persistent)
{
 char *decoded_vpath = ((void*)0);
 char *decoded_vpath_end;
 char *p;

 *retval = ((void*)0);

 decoded_vpath = ((persistent)?zend_strndup((vpath),(vpath_len)):_estrndup(((vpath)), ((vpath_len)) ));
 if (!decoded_vpath) {
  return;
 }

 decoded_vpath_end = decoded_vpath + php_url_decode(decoded_vpath, vpath_len);

 p = decoded_vpath;

 if (p < decoded_vpath_end && *p == '/') {
  char *n = p;
  while (n < decoded_vpath_end && *n == '/') n++;
  memmove(++p, n, decoded_vpath_end - n);
  decoded_vpath_end -= n - p;
 }

 while (p < decoded_vpath_end) {
  char *n = p;
  while (n < decoded_vpath_end && *n != '/') n++;
  if (n - p == 2 && p[0] == '.' && p[1] == '.') {
   if (p > decoded_vpath) {
    --p;
    for (;;) {
     if (p == decoded_vpath) {
      if (*p == '/') {
       p++;
      }
      break;
     }
     if (*(--p) == '/') {
      p++;
      break;
     }
    }
   }
   while (n < decoded_vpath_end && *n == '/') n++;
   memmove(p, n, decoded_vpath_end - n);
   decoded_vpath_end -= n - p;
  } else if (n - p == 1 && p[0] == '.') {
   while (n < decoded_vpath_end && *n == '/') n++;
   memmove(p, n, decoded_vpath_end - n);
   decoded_vpath_end -= n - p;
  } else {
   if (n < decoded_vpath_end) {
    char *nn = n;
    while (nn < decoded_vpath_end && *nn == '/') nn++;
    p = n + 1;
    memmove(p, nn, decoded_vpath_end - nn);
    decoded_vpath_end -= nn - p;
   } else {
    p = n;
   }
  }
 }

 *decoded_vpath_end = '\0';
 *retval = decoded_vpath;
 *retval_len = decoded_vpath_end - decoded_vpath;
}


static int php_cli_server_client_read_request_on_message_begin(php_http_parser *parser)
{
 return 0;
}

static int php_cli_server_client_read_request_on_path(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 {
  char *vpath;
  size_t vpath_len;
  normalize_vpath(&vpath, &vpath_len, at, length, 1);
  client->request.vpath = vpath;
  client->request.vpath_len = vpath_len;
 }
 return 0;
}

static int php_cli_server_client_read_request_on_query_string(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 client->request.query_string = ((1)?zend_strndup((at),(length)):_estrndup(((at)), ((length)) ));
 client->request.query_string_len = length;
 return 0;
}

static int php_cli_server_client_read_request_on_url(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 client->request.request_method = parser->method;
 client->request.request_uri = ((1)?zend_strndup((at),(length)):_estrndup(((at)), ((length)) ));
 client->request.request_uri_len = length;
 return 0;
}

static int php_cli_server_client_read_request_on_fragment(php_http_parser *parser, const char *at, size_t length)
{
 return 0;
}

static int php_cli_server_client_read_request_on_header_field(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 if (client->current_header_name_allocated) {
  ((1)?free(client->current_header_name):_efree((client->current_header_name) ));
  client->current_header_name_allocated = 0;
 }
 client->current_header_name = (char *)at;
 client->current_header_name_len = length;
 return 0;
}

static int php_cli_server_client_read_request_on_header_value(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 char *value = ((1)?zend_strndup((at),(length)):_estrndup(((at)), ((length)) ));
 if (!value) {
  return 1;
 }
 {
  char *header_name = client->current_header_name;
  size_t header_name_len = client->current_header_name_len;
  char c = header_name[header_name_len];
  header_name[header_name_len] = '\0';
  _zend_hash_add_or_update(&client->request.headers, header_name, header_name_len + 1, &value, sizeof(char *), ((void*)0), (1<<1) );
  header_name[header_name_len] = c;
 }

 if (client->current_header_name_allocated) {
  ((1)?free(client->current_header_name):_efree((client->current_header_name) ));
  client->current_header_name_allocated = 0;
 }
 return 0;
}

static int php_cli_server_client_read_request_on_headers_complete(php_http_parser *parser)
{
 php_cli_server_client *client = parser->data;
 if (client->current_header_name_allocated) {
  ((1)?free(client->current_header_name):_efree((client->current_header_name) ));
  client->current_header_name_allocated = 0;
 }
 client->current_header_name = ((void*)0);
 return 0;
}

static int php_cli_server_client_read_request_on_body(php_http_parser *parser, const char *at, size_t length)
{
 php_cli_server_client *client = parser->data;
 if (!client->request.content) {
  client->request.content = ((1)?__zend_malloc(parser->content_length):_emalloc((parser->content_length) ));
  if (!client->request.content) {
   return -1;
  }
  client->request.content_len = 0;
 }
 memmove(client->request.content + client->request.content_len, at, length);
 client->request.content_len += length;
 return 0;
}

static int php_cli_server_client_read_request_on_message_complete(php_http_parser *parser)
{
 php_cli_server_client *client = parser->data;
 client->request.protocol_version = parser->http_major * 100 + parser->http_minor;
 php_cli_server_request_translate_vpath(&client->request, client->server->document_root, client->server->document_root_len);
 {
  const char *vpath = client->request.vpath, *end = vpath + client->request.vpath_len, *p = end;
  client->request.ext = end;
  client->request.ext_len = 0;
  while (p > vpath) {
   --p;
   if (*p == '.') {
    ++p;
    client->request.ext = p;
    client->request.ext_len = end - p;
    break;
   }
  }
 }
 client->request_read = 1;
 return 0;
}

static int php_cli_server_client_read_request(php_cli_server_client *client, char **errstr )
{
 char buf[16384];
 static const php_http_parser_settings settings = {
  php_cli_server_client_read_request_on_message_begin,
  php_cli_server_client_read_request_on_path,
  php_cli_server_client_read_request_on_query_string,
  php_cli_server_client_read_request_on_url,
  php_cli_server_client_read_request_on_fragment,
  php_cli_server_client_read_request_on_header_field,
  php_cli_server_client_read_request_on_header_value,
  php_cli_server_client_read_request_on_headers_complete,
  php_cli_server_client_read_request_on_body,
  php_cli_server_client_read_request_on_message_complete
 };
 size_t nbytes_consumed;
 int nbytes_read;
 if (client->request_read) {
  return 1;
 }
 nbytes_read = recv(client->sock, buf, sizeof(buf) - 1, 0);
 if (nbytes_read < 0) {
  int err = (*__errno_location ());
  if (err == 11) {
   return 0;
  }
  *errstr = php_socket_strerror(err, ((void*)0), 0);
  return -1;
 } else if (nbytes_read == 0) {
  *errstr = _estrdup(("Unexpected EOF") );
  return -1;
 }
 client->parser.data = client;
 nbytes_consumed = php_http_parser_execute(&client->parser, &settings, buf, nbytes_read);
 if (nbytes_consumed != nbytes_read) {
  *errstr = _estrdup(("Malformed HTTP request") );
  return -1;
 }
 if (client->current_header_name) {
  char *header_name = ((1)?_safe_malloc(client->current_header_name_len, 1, 1):_safe_emalloc((client->current_header_name_len), (1), (1) ));
  if (!header_name) {
   return -1;
  }
  memmove(header_name, client->current_header_name, client->current_header_name_len);
  client->current_header_name = header_name;
  client->current_header_name_allocated = 1;
 }
 return client->request_read ? 1: 0;
}


static size_t php_cli_server_client_send_through(php_cli_server_client *client, const char *str, size_t str_len)
{
 struct timeval tv = { 10, 0 };
 ssize_t nbytes_left = str_len;
 do {
  ssize_t nbytes_sent = send(client->sock, str + str_len - nbytes_left, nbytes_left, 0);
  if (nbytes_sent < 0) {
   int err = (*__errno_location ());
   if (err == 11) {
    int nfds = php_pollfd_for(client->sock, 0x004, &tv);
    if (nfds > 0) {
     continue;
    } else if (nfds < 0) {

     php_handle_aborted_connection();
     return nbytes_left;
    } else {

     php_handle_aborted_connection();
     return nbytes_left;
    }
   } else {
    php_handle_aborted_connection();
    return nbytes_left;
   }
  }
  nbytes_left -= nbytes_sent;
 } while (nbytes_left > 0);

 return str_len;
}

static void php_cli_server_client_populate_request_info(const php_cli_server_client *client, sapi_request_info *request_info)
{
 char **val;

 request_info->request_method = php_http_method_str(client->request.request_method);
 request_info->proto_num = client->request.protocol_version;
 request_info->request_uri = client->request.request_uri;
 request_info->path_translated = client->request.path_translated;
 request_info->query_string = client->request.query_string;
 request_info->post_data = client->request.content;
 request_info->content_length = request_info->post_data_length = client->request.content_len;
 request_info->auth_user = request_info->auth_password = request_info->auth_digest = ((void*)0);
 if (0 == zend_hash_find(&client->request.headers, "Content-Type", sizeof("Content-Type"), (void**)&val)) {
  request_info->content_type = *val;
 }
}

static void destroy_request_info(sapi_request_info *request_info)
{
}

static int php_cli_server_client_ctor(php_cli_server_client *client, php_cli_server *server, int client_sock, struct sockaddr *addr, socklen_t addr_len )
{
 client->server = server;
 client->sock = client_sock;
 client->addr = addr;
 client->addr_len = addr_len;
 {
  char *addr_str = 0;
  long addr_str_len = 0;
  php_network_populate_name_from_sockaddr(addr, addr_len, &addr_str, &addr_str_len, ((void*)0), 0 );
  client->addr_str = ((1)?zend_strndup((addr_str),(addr_str_len)):_estrndup(((addr_str)), ((addr_str_len)) ));
  client->addr_str_len = addr_str_len;
  _efree((addr_str) );
 }
 php_http_parser_init(&client->parser, PHP_HTTP_REQUEST);
 client->request_read = 0;
 client->current_header_name = ((void*)0);
 client->current_header_name_len = 0;
 client->current_header_name_allocated = 0;
 client->post_read_offset = 0;
 if (-1 == php_cli_server_request_ctor(&client->request)) {
  return -1;
 }
 client->content_sender_initialized = 0;
 client->file_fd = -1;
 return 0;
}

static void php_cli_server_client_dtor(php_cli_server_client *client)
{
 php_cli_server_request_dtor(&client->request);
 if (client->file_fd >= 0) {
  close(client->file_fd);
  client->file_fd = -1;
 }
 ((1)?free(client->addr):_efree((client->addr) ));
 ((1)?free(client->addr_str):_efree((client->addr_str) ));
 if (client->content_sender_initialized) {
  php_cli_server_content_sender_dtor(&client->content_sender);
 }
}

static void php_cli_server_close_connection(php_cli_server *server, php_cli_server_client *client )
{



 zend_hash_del_key_or_index(&server->clients, ((void*)0), 0, client->sock, 1);
}

static int php_cli_server_send_error_page(php_cli_server *server, php_cli_server_client *client, int status )
{
 char *escaped_request_uri = ((void*)0);
 size_t escaped_request_uri_len;
 const char *status_string = get_status_string(status);
 const char *content_template = get_template_string(status);
 char *errstr = get_last_error();
 ((void) (0));

 php_cli_server_content_sender_ctor(&client->content_sender);
 client->content_sender_initialized = 1;

 escaped_request_uri = php_escape_html_entities_ex((unsigned char *)client->request.request_uri, client->request.request_uri_len, &escaped_request_uri_len, 0, (2 | 1), ((void*)0), 0 );

 {
  static const char prologue_template[] = "<html><head><title>%d %s</title>";
  php_cli_server_chunk *chunk = php_cli_server_chunk_heap_new_self_contained(strlen(prologue_template) + 3 + strlen(status_string) + 1);
  if (!chunk) {
   goto fail;
  }
  ap_php_snprintf(chunk->data.heap.p, chunk->data.heap.len, prologue_template, status, status_string, escaped_request_uri);
  chunk->data.heap.len = strlen(chunk->data.heap.p);
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  php_cli_server_chunk *chunk = php_cli_server_chunk_immortal_new(php_cli_server_css, sizeof(php_cli_server_css) - 1);
  if (!chunk) {
   goto fail;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  static const char template[] = "</head><body>";
  php_cli_server_chunk *chunk = php_cli_server_chunk_immortal_new(template, sizeof(template) - 1);
  if (!chunk) {
   goto fail;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  php_cli_server_chunk *chunk = php_cli_server_chunk_heap_new_self_contained(strlen(content_template) + escaped_request_uri_len + 3 + strlen(status_string) + 1);
  if (!chunk) {
   goto fail;
  }
  ap_php_snprintf(chunk->data.heap.p, chunk->data.heap.len, content_template, status_string, escaped_request_uri);
  chunk->data.heap.len = strlen(chunk->data.heap.p);
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 {
  static const char epilogue_template[] = "</body></html>";
  php_cli_server_chunk *chunk = php_cli_server_chunk_immortal_new(epilogue_template, sizeof(epilogue_template) - 1);
  if (!chunk) {
   goto fail;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }

 {
  php_cli_server_chunk *chunk;
  smart_str buffer = { 0 };
  append_http_status_line(&buffer, client->request.protocol_version, status, 1);
  if (!buffer.c) {

   goto fail;
  }
  append_essential_headers(&buffer, client, 1);
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen("Content-Type: text/html; charset=UTF-8\r\n"))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen("Content-Type: text/html; charset=UTF-8\r\n"))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("Content-Type: text/html; charset=UTF-8\r\n")), (strlen("Content-Type: text/html; charset=UTF-8\r\n"))); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen("Content-Length: "))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen("Content-Length: "))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("Content-Length: ")), (strlen("Content-Length: "))); __dest->len = __nl; } while (0);
  do { char __b[32]; char *__t; do { char *__p = (__b + sizeof(__b) - 1); size_t __num = ((php_cli_server_buffer_size(&client->content_sender.buffer))); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); __t = __p; } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->len = __nl; } while (0); } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) (&buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) (&buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);

  chunk = php_cli_server_chunk_heap_new(buffer.c, buffer.c, buffer.len);
  if (!chunk) {
   do { smart_str *__s = (smart_str *) (&buffer); if (__s->c) { ((1)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
   goto fail;
  }
  php_cli_server_buffer_prepend(&client->content_sender.buffer, chunk);
 }

 php_cli_server_log_response(client, status, errstr ? errstr : "?" );
 php_cli_server_poller_add(&server->poller, 0x004, client->sock);
 if (errstr) {
  ((1)?free(errstr):_efree((errstr) ));
 }
 _efree((escaped_request_uri) );
 return 0;

fail:
 _efree((escaped_request_uri) );
 return -1;
}

static int php_cli_server_dispatch_script(php_cli_server *server, php_cli_server_client *client )
{
 if (strlen(client->request.path_translated) != client->request.path_translated_len) {

  return php_cli_server_send_error_page(server, client, 400 );
 }
 {
  zend_file_handle zfd;
  zfd.type = ZEND_HANDLE_FILENAME;
  zfd.filename = (sapi_globals.request_info).path_translated;
  zfd.handle.fp = ((void*)0);
  zfd.free_filename = 0;
  zfd.opened_path = ((void*)0);
  { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
   php_execute_script(&zfd );
  } } (executor_globals.bailout) = __orig_bailout; };
 }

 php_cli_server_log_response(client, (sapi_globals.sapi_headers).http_response_code, ((void*)0) );
 return 0;
}

static int php_cli_server_begin_send_static(php_cli_server *server, php_cli_server_client *client )
{
 int fd;
 int status = 200;

 if (client->request.path_translated && strlen(client->request.path_translated) != client->request.path_translated_len) {

  return php_cli_server_send_error_page(server, client, 400 );
 }

 fd = client->request.path_translated ? open(client->request.path_translated, 00): -1;
 if (fd < 0) {
  return php_cli_server_send_error_page(server, client, 404 );
 }

 php_cli_server_content_sender_ctor(&client->content_sender);
 client->content_sender_initialized = 1;
 client->file_fd = fd;

 {
  php_cli_server_chunk *chunk;
  smart_str buffer = { 0 };
  const char *mime_type = get_mime_type(client->request.ext, client->request.ext_len);
  if (!mime_type) {
   mime_type = "application/octet-stream";
  }

  append_http_status_line(&buffer, client->request.protocol_version, status, 1);
  if (!buffer.c) {

   php_cli_server_log_response(client, 500, ((void*)0) );
   return -1;
  }
  append_essential_headers(&buffer, client, 1);
  do { register size_t __nl; smart_str *__dest = (smart_str *) (&buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((sizeof("Content-Type: ") - 1)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((sizeof("Content-Type: ") - 1)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("Content-Type: "), (sizeof("Content-Type: ") - 1)); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen(mime_type))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen(mime_type))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((mime_type)), (strlen(mime_type))); __dest->len = __nl; } while (0);
  if ((__extension__ (__builtin_constant_p (5) && ((__builtin_constant_p (mime_type) && strlen (mime_type) < ((size_t) (5))) || (__builtin_constant_p ("text/") && strlen ("text/") < ((size_t) (5)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (mime_type) && __builtin_constant_p ("text/") && (__s1_len = __builtin_strlen (mime_type), __s2_len = __builtin_strlen ("text/"), (!((size_t)(const void *)((mime_type) + 1) - (size_t)(const void *)(mime_type) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("text/") + 1) - (size_t)(const void *)("text/") == 1) || __s2_len >= 4)) ? __builtin_strcmp (mime_type, "text/") : (__builtin_constant_p (mime_type) && ((size_t)(const void *)((mime_type) + 1) - (size_t)(const void *)(mime_type) == 1) && (__s1_len = __builtin_strlen (mime_type), __s1_len < 4) ? (__builtin_constant_p ("text/") && ((size_t)(const void *)(("text/") + 1) - (size_t)(const void *)("text/") == 1) ? __builtin_strcmp (mime_type, "text/") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("text/"); int __result = (((const unsigned char *) (const char *) (mime_type))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (mime_type))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (mime_type))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (mime_type))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("text/") && ((size_t)(const void *)(("text/") + 1) - (size_t)(const void *)("text/") == 1) && (__s2_len = __builtin_strlen ("text/"), __s2_len < 4) ? (__builtin_constant_p (mime_type) && ((size_t)(const void *)((mime_type) + 1) - (size_t)(const void *)(mime_type) == 1) ? __builtin_strcmp (mime_type, "text/") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (mime_type); int __result = (((const unsigned char *) (const char *) ("text/"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("text/"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("text/"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("text/"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (mime_type, "text/")))); }) : strncmp (mime_type, "text/", 5))) == 0) {
   do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen("; charset=UTF-8"))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen("; charset=UTF-8"))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("; charset=UTF-8")), (strlen("; charset=UTF-8"))); __dest->len = __nl; } while (0);
  }
  do { register size_t __nl; smart_str *__dest = (smart_str *) (&buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((strlen("Content-Length: "))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((strlen("Content-Length: "))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("Content-Length: ")), (strlen("Content-Length: "))); __dest->len = __nl; } while (0);
  do { char __b[32]; char *__t; do { char *__p = (__b + sizeof(__b) - 1); size_t __num = ((client->request.sb.st_size)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); __t = __p; } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((&buffer)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = ((((((1)))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->len = __nl; } while (0); } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) (&buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);
  do { register size_t __nl; smart_str *__dest = (smart_str *) (&buffer); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((2)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((2)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((1))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ("\r\n"), (2)); __dest->len = __nl; } while (0);
  chunk = php_cli_server_chunk_heap_new(buffer.c, buffer.c, buffer.len);
  if (!chunk) {
   do { smart_str *__s = (smart_str *) (&buffer); if (__s->c) { ((1)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
   php_cli_server_log_response(client, 500, ((void*)0) );
   return -1;
  }
  php_cli_server_buffer_append(&client->content_sender.buffer, chunk);
 }
 php_cli_server_log_response(client, 200, ((void*)0) );
 php_cli_server_poller_add(&server->poller, 0x004, client->sock);
 return 0;
}


static int php_cli_server_request_startup(php_cli_server *server, php_cli_server_client *client ) {
 char **auth;
 php_cli_server_client_populate_request_info(client, &(sapi_globals.request_info));
 if (0 == zend_hash_find(&client->request.headers, "Authorization", sizeof("Authorization"), (void**)&auth)) {
  php_handle_auth_data(*auth );
 }
 (sapi_globals.sapi_headers).http_response_code = 200;
 if (-1 == php_request_startup()) {

  destroy_request_info(&(sapi_globals.request_info));
  return -1;
 }
 (core_globals.during_request_startup) = 0;

 return 0;
}


static int php_cli_server_request_shutdown(php_cli_server *server, php_cli_server_client *client ) {
 php_request_shutdown(0);
 php_cli_server_close_connection(server, client );
 destroy_request_info(&(sapi_globals.request_info));
 (sapi_globals.server_context) = ((void*)0);
 (sapi_globals.rfc1867_uploaded_files) = ((void*)0);
 return 0;
}


static int php_cli_server_dispatch_router(php_cli_server *server, php_cli_server_client *client )
{
 int decline = 0;
 if (!php_handle_special_queries()) {
  zend_file_handle zfd;
  char *old_cwd;

  zend_bool use_heap;
  old_cwd = ((use_heap = (__builtin_expect((4096) > ((32 * 1024)), 0))) ? _emalloc((4096) ) : __builtin_alloca (4096));
  old_cwd[0] = '\0';
  (({ __typeof__ (getcwd(old_cwd, 4096 - 1)) __x = (getcwd(old_cwd, 4096 - 1)); (void) __x; }));

  zfd.type = ZEND_HANDLE_FILENAME;
  zfd.filename = server->router;
  zfd.handle.fp = ((void*)0);
  zfd.free_filename = 0;
  zfd.opened_path = ((void*)0);

  { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
   zval *retval = ((void*)0);
   if (0 == zend_execute_scripts((1<<3) , &retval, 1, &zfd)) {
    if (retval) {
     decline = (*retval).type == 3 && !(*retval).value.lval;
     _zval_ptr_dtor((&retval) );
    }
   } else {
    decline = 1;
   }
  } } (executor_globals.bailout) = __orig_bailout; };

  if (old_cwd[0] != '\0') {
   (({ __typeof__ (chdir(old_cwd)) __x = (chdir(old_cwd)); (void) __x; }));
  }

  do { if (__builtin_expect(use_heap, 0)) _efree((old_cwd) ); } while (0);
 }

 return decline;
}


static int php_cli_server_dispatch(php_cli_server *server, php_cli_server_client *client )
{
 int is_static_file = 0;

 (sapi_globals.server_context) = client;
 if (client->request.ext_len != 3 || memcmp(client->request.ext, "php", 3) || !client->request.path_translated) {
  is_static_file = 1;
 }

 if (server->router || !is_static_file) {
  if (-1 == php_cli_server_request_startup(server, client )) {
   (sapi_globals.server_context) = ((void*)0);
   php_cli_server_close_connection(server, client );
   destroy_request_info(&(sapi_globals.request_info));
   return 0;
  }
 }

 if (server->router) {
  if (!php_cli_server_dispatch_router(server, client )) {
   php_cli_server_request_shutdown(server, client );
   return 0;
  }
 }

 if (!is_static_file) {
  if (0 == php_cli_server_dispatch_script(server, client )
    || 0 != php_cli_server_send_error_page(server, client, 500 )) {
   php_cli_server_request_shutdown(server, client );
   return 0;
  }
 } else {
  if (server->router) {
   static int (*send_header_func)(sapi_headers_struct * );
   send_header_func = sapi_module.send_headers;

      (sapi_globals.sapi_headers).send_default_content_type = 0;

   sapi_module.send_headers = sapi_cli_server_discard_headers;
   php_request_shutdown(0);
   sapi_module.send_headers = send_header_func;
      (sapi_globals.sapi_headers).send_default_content_type = 1;
   (sapi_globals.rfc1867_uploaded_files) = ((void*)0);
  }
  if (0 != php_cli_server_begin_send_static(server, client )) {
   php_cli_server_close_connection(server, client );
  }
  (sapi_globals.server_context) = ((void*)0);
  return 0;
 }

 (sapi_globals.server_context) = ((void*)0);
 destroy_request_info(&(sapi_globals.request_info));
 return 0;
}


static void php_cli_server_dtor(php_cli_server *server )
{
 zend_hash_destroy(&server->clients);
 if (server->server_sock >= 0) {
  close(server->server_sock);
 }
 if (server->host) {
  ((1)?free(server->host):_efree((server->host) ));
 }
 if (server->document_root) {
  ((1)?free(server->document_root):_efree((server->document_root) ));
 }
 if (server->router) {
  ((1)?free(server->router):_efree((server->router) ));
 }
}

static void php_cli_server_client_dtor_wrapper(php_cli_server_client **p)
{
 close((*p)->sock);
 php_cli_server_poller_remove(&(*p)->server->poller, 0x001 | 0x004, (*p)->sock);
 php_cli_server_client_dtor(*p);
 ((1)?free(*p):_efree((*p) ));
}

static int php_cli_server_ctor(php_cli_server *server, const char *addr, const char *document_root, const char *router )
{
 int retval = 0;
 char *host = ((void*)0);
 char *errstr = ((void*)0);
 char *_document_root = ((void*)0);
 char *_router = ((void*)0);
 int err = 0;
 int port = 3000;
 php_socket_t server_sock = -1;
 char *p = ((void*)0);

 if (addr[0] == '[') {
  host = ((1)?(__extension__ (__builtin_constant_p (addr + 1) && ((size_t)(const void *)((addr + 1) + 1) - (size_t)(const void *)(addr + 1) == 1) ? (((const char *) (addr + 1))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (addr + 1) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void*)0)) __retval = (char *) memcpy (__retval, addr + 1, __len); __retval; })) : __strdup (addr + 1))):_estrdup((addr + 1) ));
  if (!host) {
   return -1;
  }
  p = (__extension__ (__builtin_constant_p (']') && !__builtin_constant_p (host) && (']') == '\0' ? (char *) __rawmemchr (host, ']') : __builtin_strchr (host, ']')));
  if (p) {
   *p++ = '\0';
   if (*p == ':') {
    port = strtol(p + 1, &p, 10);
    if (port <= 0) {
     p = ((void*)0);
    }
   } else if (*p != '\0') {
    p = ((void*)0);
   }
  }
 } else {
  host = ((1)?(__extension__ (__builtin_constant_p (addr) && ((size_t)(const void *)((addr) + 1) - (size_t)(const void *)(addr) == 1) ? (((const char *) (addr))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (addr) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void*)0)) __retval = (char *) memcpy (__retval, addr, __len); __retval; })) : __strdup (addr))):_estrdup((addr) ));
  if (!host) {
   return -1;
  }
  p = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (host) && (':') == '\0' ? (char *) __rawmemchr (host, ':') : __builtin_strchr (host, ':')));
  if (p) {
   *p++ = '\0';
   port = strtol(p, &p, 10);
   if (port <= 0) {
    p = ((void*)0);
   }
  }
 }
 if (!p) {
  fprintf(stderr, "Invalid address: %s\n", addr);
  retval = -1;
  goto out;
 }

 server_sock = php_network_listen_socket(host, &port, SOCK_STREAM, &server->address_family, &server->socklen, &errstr );
 if (server_sock == -1) {
  php_cli_server_logf("Failed to listen on %s:%d (reason: %s)" , host, port, errstr ? errstr: "?");
  _efree((errstr) );
  retval = -1;
  goto out;
 }
 server->server_sock = server_sock;

 err = php_cli_server_poller_ctor(&server->poller);
 if (0 != err) {
  goto out;
 }

 php_cli_server_poller_add(&server->poller, 0x001, server_sock);

 server->host = host;
 server->port = port;

 _zend_hash_init((&server->clients), (0), (((void*)0)), ((void(*)(void*))php_cli_server_client_dtor_wrapper), (1) );

 {
  size_t document_root_len = strlen(document_root);
  _document_root = ((1)?zend_strndup((document_root),(document_root_len)):_estrndup(((document_root)), ((document_root_len)) ));
  if (!_document_root) {
   retval = -1;
   goto out;
  }
  server->document_root = _document_root;
  server->document_root_len = document_root_len;
 }

 if (router) {
  size_t router_len = strlen(router);
  _router = ((1)?zend_strndup((router),(router_len)):_estrndup(((router)), ((router_len)) ));
  if (!_router) {
   retval = -1;
   goto out;
  }
  server->router = _router;
  server->router_len = router_len;
 } else {
  server->router = ((void*)0);
  server->router_len = 0;
 }

 server->is_running = 1;
out:
 if (retval != 0) {
  if (host) {
   ((1)?free(host):_efree((host) ));
  }
  if (_document_root) {
   ((1)?free(_document_root):_efree((_document_root) ));
  }
  if (_router) {
   ((1)?free(_router):_efree((_router) ));
  }
  if (server_sock >= -1) {
   close(server_sock);
  }
 }
 return retval;
}

static int php_cli_server_recv_event_read_request(php_cli_server *server, php_cli_server_client *client )
{
 char *errstr = ((void*)0);
 int status = php_cli_server_client_read_request(client, &errstr );
 if (status < 0) {
  php_cli_server_logf("%s Invalid request (%s)" , client->addr_str, errstr);
  _efree((errstr) );
  php_cli_server_close_connection(server, client );
  return -1;
 } else if (status == 1) {
  php_cli_server_poller_remove(&server->poller, 0x001, client->sock);
  php_cli_server_dispatch(server, client );
 } else {
  php_cli_server_poller_add(&server->poller, 0x001, client->sock);
 }

 return 0;
}

static int php_cli_server_send_event(php_cli_server *server, php_cli_server_client *client )
{
 if (client->content_sender_initialized) {
  if (client->file_fd >= 0 && !client->content_sender.buffer.first) {
   size_t nbytes_read;
   if (php_cli_server_content_sender_pull(&client->content_sender, client->file_fd, &nbytes_read)) {
    php_cli_server_close_connection(server, client );
    return -1;
   }
   if (nbytes_read == 0) {
    close(client->file_fd);
    client->file_fd = -1;
   }
  }
  {
   size_t nbytes_sent;
   int err = php_cli_server_content_sender_send(&client->content_sender, client->sock, &nbytes_sent);
   if (err && err != 11) {
    php_cli_server_close_connection(server, client );
    return -1;
   }
  }
  if (!client->content_sender.buffer.first && client->file_fd < 0) {
   php_cli_server_close_connection(server, client );
  }
 }
 return 0;
}


typedef struct php_cli_server_do_event_for_each_fd_callback_params {



 php_cli_server *server;
 int(*rhandler)(php_cli_server*, php_cli_server_client* );
 int(*whandler)(php_cli_server*, php_cli_server_client* );
} php_cli_server_do_event_for_each_fd_callback_params;

static int php_cli_server_do_event_for_each_fd_callback(void *_params, int fd, int event)
{
 php_cli_server_do_event_for_each_fd_callback_params *params = _params;



 php_cli_server *server = params->server;
 if (server->server_sock == fd) {
  php_cli_server_client *client = ((void*)0);
  php_socket_t client_sock;
  socklen_t socklen = server->socklen;
  struct sockaddr *sa = ((1)?__zend_malloc(server->socklen):_emalloc((server->socklen) ));
  if (!sa) {
   return -1;
  }
  client_sock = accept(server->server_sock, sa, &socklen);
  if (client_sock < 0) {
   char *errstr;
   errstr = php_socket_strerror((*__errno_location ()), ((void*)0), 0);
   php_cli_server_logf("Failed to accept a client (reason: %s)" , errstr);
   _efree((errstr) );
   ((1)?free(sa):_efree((sa) ));
   return 0;
  }
  if (0 != php_set_sock_blocking(client_sock, 0 )) {
   ((1)?free(sa):_efree((sa) ));
   close(client_sock);
   return 0;
  }
  if (!(client = ((1)?__zend_malloc(sizeof(php_cli_server_client)):_emalloc((sizeof(php_cli_server_client)) ))) || -1 == php_cli_server_client_ctor(client, server, client_sock, sa, socklen )) {
   php_cli_server_logf("Failed to create a new request object" );
   ((1)?free(sa):_efree((sa) ));
   close(client_sock);
   return 0;
  }



  _zend_hash_index_update_or_next_insert(&server->clients, client_sock, &client, sizeof(client), ((void*)0), (1<<0) );
  php_cli_server_recv_event_read_request(server, client );
 } else {
  php_cli_server_client **client;
  if (0 == zend_hash_index_find(&server->clients, fd, (void **)&client)) {
   if (event & 0x001) {
    params->rhandler(server, *client );
   }
   if (event & 0x004) {
    params->whandler(server, *client );
   }
  }
 }
 return 0;
}

static void php_cli_server_do_event_for_each_fd(php_cli_server *server, int(*rhandler)(php_cli_server*, php_cli_server_client* ), int(*whandler)(php_cli_server*, php_cli_server_client* ) )
{
 php_cli_server_do_event_for_each_fd_callback_params params = {



  server,
  rhandler,
  whandler
 };

 php_cli_server_poller_iter_on_active(&server->poller, &params, php_cli_server_do_event_for_each_fd_callback);
}

static int php_cli_server_do_event_loop(php_cli_server *server )
{
 int retval = 0;
 while (server->is_running) {
  static const struct timeval tv = { 1, 0 };
  int n = php_cli_server_poller_poll(&server->poller, &tv);
  if (n > 0) {
   php_cli_server_do_event_for_each_fd(server,
     php_cli_server_recv_event_read_request,
     php_cli_server_send_event );
  } else if (n == 0) {

  } else {
   int err = (*__errno_location ());
   if (err != 4) {
    char *errstr = php_socket_strerror(err, ((void*)0), 0);
    php_cli_server_logf("%s" , errstr);
    _efree((errstr) );
    retval = -1;
    goto out;
   }
  }
 }
out:
 return retval;
}

static php_cli_server server;

static void php_cli_server_sigint_handler(int sig)
{
 server.is_running = 0;
}


int do_cli_server(int argc, char **argv )
{
 char *php_optarg = ((void*)0);
 int php_optind = 1;
 int c;
 const char *server_bind_address = ((void*)0);
 extern const opt_struct OPTIONS[];
 const char *document_root = ((void*)0);
 const char *router = ((void*)0);
 char document_root_buf[4096];

 while ((c = php_getopt(argc, argv, OPTIONS, &php_optarg, &php_optind, 0, 2))!=-1) {
  switch (c) {
   case 'S':
    server_bind_address = php_optarg;
    break;
   case 't':
    document_root = php_optarg;
    break;
  }
 }

 if (document_root) {
  struct stat sb;

  if (stat(document_root, &sb)) {
   fprintf(stderr, "Directory %s does not exist.\n", document_root);
   return 1;
  }
  if (!((((sb.st_mode)) & 0170000) == (0040000))) {
   fprintf(stderr, "%s is not a directory.\n", document_root);
   return 1;
  }
  if (tsrm_realpath(document_root, document_root_buf )) {
   document_root = document_root_buf;
  }
 } else {
  char *ret = ((void*)0);


  ret = getcwd(document_root_buf, 4096);



  document_root = ret ? document_root_buf: ".";
 }

 if (argc > php_optind) {
  router = argv[php_optind];
 }

 if (-1 == php_cli_server_ctor(&server, server_bind_address, document_root, router )) {
  return 1;
 }
 sapi_module.phpinfo_as_text = 0;

 {
  struct timeval tv;
  struct tm tm;
  char buf[52];
  gettimeofday(&tv, ((void*)0));
  localtime_r(&tv.tv_sec, &tm);
  asctime_r(&tm, buf);
  printf("PHP %s Development Server started at %s"
    "Listening on %s\n"
    "Document root is %s\n"
    "Press Ctrl-C to quit.\n",
    "5.4.5-dev", buf, server_bind_address, document_root);
 }


 signal(2, php_cli_server_sigint_handler);

 php_cli_server_do_event_loop(&server );
 php_cli_server_dtor(&server );
 return 0;
}
