# 1 "ext/standard/array.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "ext/standard/array.c" 2
# 26 "ext/standard/array.c"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_version.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
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
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 53 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 1
# 2920 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h"
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




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





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
# 2921 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 2
# 2936 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h"
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
# 2937 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 2
# 2947 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h"
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
# 2948 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 2
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_config.h" 2
# 54 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 80 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
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
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 241 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_errors.h" 1
# 242 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/../TSRM/TSRM.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config.h" 2
# 21 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/../TSRM/TSRM.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h" 2

typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 char *filename;
 uint lineno;
 char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



         char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

         void *_emalloc(size_t size ) __attribute__ ((__malloc__));
         void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
         void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
         void _efree(void *ptr );
         void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__));
         void *_erealloc(void *ptr, size_t size, int allow_failure );
         void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
         void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
         char *_estrdup(const char *s ) __attribute__ ((__malloc__));
         char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
         size_t _zend_mem_block_size(void *ptr );
# 79 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h"
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
# 128 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h"
         int zend_set_memory_limit(size_t memory_limit);

         void start_memory_manager(void);
         void shutdown_memory_manager(int silent, int full_shutdown );
         int is_zend_mm(void);
# 145 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h"
         size_t zend_memory_usage(int real_usage );
         size_t zend_memory_peak_usage(int real_usage );
# 191 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

         zend_mm_heap *zend_mm_startup(void);
         void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent);
         void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
         void _zend_mm_free(zend_mm_heap *heap, void *p );
         void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
         size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef struct _zend_mm_segment {
 size_t size;
 struct _zend_mm_segment *next_segment;
} zend_mm_segment;

typedef struct _zend_mm_mem_handlers {
 const char *name;
 zend_mm_storage* (*init)(void *params);
 void (*dtor)(zend_mm_storage *storage);
 zend_mm_segment* (*_alloc)(zend_mm_storage *storage, size_t size);
 zend_mm_segment* (*_realloc)(zend_mm_storage *storage, zend_mm_segment *ptr, size_t size);
 void (*_free)(zend_mm_storage *storage, zend_mm_segment *ptr);
} zend_mm_mem_handlers;

struct _zend_mm_storage {
 const zend_mm_mem_handlers *handlers;
 void *data;
};

         zend_mm_heap *zend_mm_startup_ex(const zend_mm_mem_handlers *handlers, size_t block_size, size_t reserve_size, int internal, void *params);
         zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap );
         zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);
# 243 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_types.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;





typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 zend_object_handlers *handlers;
} zend_object_value;
# 245 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2


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
# 248 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 263 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
static const char long_min_digits[] = "9223372036854775808";
# 276 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h" 2
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h"
typedef ulong (*hash_func_t)(char *arKey, uint nKeyLength);
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
 char arKey[1];
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
 char *arKey;
 uint nKeyLength;
 ulong h;
} zend_hash_key;


typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, void *source_data, zend_hash_key *hash_key, void *pParam);

typedef Bucket* HashPosition;




         int _zend_hash_init(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
         int _zend_hash_init_ex(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
         void zend_hash_destroy(HashTable *ht);
         void zend_hash_clean(HashTable *ht);




         int _zend_hash_add_or_update(HashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





         int _zend_hash_quick_add_or_update(HashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





         int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





         int zend_hash_add_empty_element(HashTable *ht, char *arKey, uint nKeyLength);







typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest, void *argument );
typedef int (*apply_func_args_t)(void *pDest, int num_args, va_list args, zend_hash_key *hash_key);

         void zend_hash_graceful_destroy(HashTable *ht);
         void zend_hash_graceful_reverse_destroy(HashTable *ht);
         void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
         void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
         void zend_hash_apply_with_arguments(HashTable *ht, apply_func_args_t apply_func, int, ...);







         void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



         int zend_hash_del_key_or_index(HashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





         ulong zend_get_hash_value(char *arKey, uint nKeyLength);


         int zend_hash_find(HashTable *ht, char *arKey, uint nKeyLength, void **pData);
         int zend_hash_quick_find(HashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
         int zend_hash_index_find(HashTable *ht, ulong h, void **pData);


         int zend_hash_exists(HashTable *ht, char *arKey, uint nKeyLength);
         int zend_hash_quick_exists(HashTable *ht, char *arKey, uint nKeyLength, ulong h);
         int zend_hash_index_exists(HashTable *ht, ulong h);
         ulong zend_hash_next_free_element(HashTable *ht);





         int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
         int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
         int zend_hash_get_current_key_ex(HashTable *ht, char **str_index, uint *str_length, ulong *num_index, zend_bool duplicate, HashPosition *pos);
         int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
         int zend_hash_get_current_data_ex(HashTable *ht, void **pData, HashPosition *pos);
         void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
         void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
         int zend_hash_update_current_key_ex(HashTable *ht, int key_type, char *str_index, uint str_length, ulong num_index, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 ulong h;
} HashPointer;

         int zend_hash_get_pointer(HashTable *ht, HashPointer *ptr);
         int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 207 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h"
         void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
         void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
         void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
         int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
         int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
         int zend_hash_minmax(HashTable *ht, compare_func_t compar, int flag, void **pData );




         int zend_hash_num_elements(HashTable *ht);

         int zend_hash_rehash(HashTable *ht);
# 254 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h"
static inline ulong zend_inline_hash_func(char *arKey, uint nKeyLength)
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


         ulong zend_hash_func(char *arKey, uint nKeyLength);
# 338 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest) {

 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; ulong idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } while (0);
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, char *arKey, uint nKeyLength)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; ulong idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_del_key_or_index(ht, ((void*)0), 0, idx, 1); } } } while (0);
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, char *arKey, uint nKeyLength, void **pData)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; ulong idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_index_find(ht, idx, pData); } } } while (0);
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, char *arKey, uint nKeyLength)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; ulong idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_index_exists(ht, idx); } } } while (0);
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key(HashTable *ht, char *arKey, uint nKeyLength)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; ulong idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 9223372036854775807L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 9223372036854775807L) { break; } return zend_hash_update_current_key_ex(ht, 2, ((void*)0), 0, idx, ((void*)0)); } } } while (0);
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, ((void*)0));
}
# 277 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ts_hash.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ts_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ts_hash.h" 2

typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






         int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
         int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
         void zend_ts_hash_destroy(TsHashTable *ht);
         void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ts_hash.h"
         int _zend_ts_hash_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





         int _zend_ts_hash_quick_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





         int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





         int zend_ts_hash_add_empty_element(TsHashTable *ht, char *arKey, uint nKeyLength);

         void zend_ts_hash_graceful_destroy(TsHashTable *ht);
         void zend_ts_hash_apply(TsHashTable *ht, apply_func_t apply_func );
         void zend_ts_hash_apply_with_argument(TsHashTable *ht, apply_func_arg_t apply_func, void * );
         void zend_ts_hash_apply_with_arguments(TsHashTable *ht, apply_func_args_t apply_func, int, ...);

         void zend_ts_hash_reverse_apply(TsHashTable *ht, apply_func_t apply_func );



         int zend_ts_hash_del_key_or_index(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





         ulong zend_ts_get_hash_value(TsHashTable *ht, char *arKey, uint nKeyLength);


         int zend_ts_hash_find(TsHashTable *ht, char *arKey, uint nKeyLength, void **pData);
         int zend_ts_hash_quick_find(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
         int zend_ts_hash_index_find(TsHashTable *ht, ulong h, void **pData);


         int zend_ts_hash_exists(TsHashTable *ht, char *arKey, uint nKeyLength);
         int zend_ts_hash_index_exists(TsHashTable *ht, ulong h);


         void zend_ts_hash_copy(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
         void zend_ts_hash_merge(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite);
         void zend_ts_hash_merge_ex(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
         int zend_ts_hash_sort(TsHashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
         int zend_ts_hash_compare(TsHashTable *ht1, TsHashTable *ht2, compare_func_t compar, zend_bool ordered );
         int zend_ts_hash_minmax(TsHashTable *ht, compare_func_t compar, int flag, void **pData );

         int zend_ts_hash_num_elements(TsHashTable *ht);

         int zend_ts_hash_rehash(TsHashTable *ht);

         ulong zend_ts_hash_func(char *arKey, uint nKeyLength);
# 278 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_llist.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_llist.h"
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


         void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
         void zend_llist_add_element(zend_llist *l, void *element);
         void zend_llist_prepend_element(zend_llist *l, void *element);
         void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
         void zend_llist_destroy(zend_llist *l);
         void zend_llist_clean(zend_llist *l);
         void *zend_llist_remove_tail(zend_llist *l);
         void zend_llist_copy(zend_llist *dst, zend_llist *src);
         void zend_llist_apply(zend_llist *l, llist_apply_func_t func );
         void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
         void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg );
         void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func , int num_args, ...);
         int zend_llist_count(zend_llist *l);
         void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func );


         void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
         void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
         void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
         void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);
# 279 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2






void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));
# 294 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
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
 HashTable *guards;
} zend_object;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_object_handlers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member );



typedef void (*zend_object_set_t)(zval **object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );





typedef int (*zend_object_call_method_t)(char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(zval *object );
typedef int (*zend_object_get_class_name_t)(zval *object, char **class_name, zend_uint *class_name_len, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

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
};

extern zend_object_handlers std_object_handlers;


         union _zend_function *zend_std_get_static_method(zend_class_entry *ce, char *function_name_strval, int function_name_strlen );
         zval **zend_std_get_static_property(zend_class_entry *ce, char *property_name, int property_name_len, zend_bool silent );
         zend_bool zend_std_unset_static_property(zend_class_entry *ce, char *property_name, int property_name_len );
         union _zend_function *zend_std_get_constructor(zval *object );
         struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );

         int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );





         int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

         int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

         int zend_check_property_access(zend_object *zobj, char *prop_info_name, int prop_info_name_len );

         void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 312 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2

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
 zend_uint refcount;
 zend_uchar type;
 zend_uchar is_ref;
};






union _zend_function;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_iterators.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_iterators.h"
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



         enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


         zval *zend_iterator_wrap(zend_object_iterator *iter );

         void zend_register_iterator_wrapper(void);
# 341 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_class_entry {
 char type;
 char *name;
 zend_uint name_length;
 struct _zend_class_entry *parent;
 int refcount;
 zend_bool constants_updated;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable default_properties;
 HashTable properties_info;
 HashTable default_static_members;
 HashTable *static_members;
 HashTable constants_table;
 struct _zend_function_entry *builtin_functions;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__tostring;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object_value (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 char *filename;
 zend_uint line_start;
 zend_uint line_end;
 char *doc_comment;
 zend_uint doc_comment_len;

 struct _zend_module_entry *module;
};


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_stream.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_stream.h"
typedef size_t (*zend_stream_reader_t)(void *handle, char *buf, size_t len );
typedef void (*zend_stream_closer_t)(void *handle );
typedef long (*zend_stream_fteller_t)(void *handle );

typedef struct _zend_stream {
 void *handle;
 zend_stream_reader_t reader;
 zend_stream_closer_t closer;
 zend_stream_fteller_t fteller;
 int interactive;
} zend_stream;

typedef struct _zend_file_handle {
 zend_uchar type;
 char *filename;
 char *opened_path;
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 zend_bool free_filename;
} zend_file_handle;


         int zend_stream_open(const char *filename, zend_file_handle *handle );
         int zend_stream_ferror(zend_file_handle *file_handle );
         int zend_stream_getc(zend_file_handle *file_handle );
         size_t zend_stream_read(zend_file_handle *file_handle, char *buf, size_t len );
         long zend_stream_ftell(zend_file_handle *file_handle );
         int zend_stream_fixup(zend_file_handle *file_handle );
# 401 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path);
 void (*message_handler)(long message, void *data);
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
} zend_utility_functions;


typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;


typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 463 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions, int start_builtin_functions);
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);





void zend_set_utility_values(zend_utility_values *utility_values);


         void _zend_bailout(char *filename, uint lineno);
# 496 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
         char *get_zend_version(void);
         void zend_make_printable_zval(zval *expr, zval *expr_copy, int *use_copy);
         int zend_print_zval(zval *expr, int indent);
         int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
         void zend_print_zval_r(zval *expr, int indent );
         void zend_print_flat_zval_r(zval *expr );
         void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
         void zend_output_debug_string(zend_bool trigger_break, char *format, ...) __attribute__ ((format(printf, 2, 3)));


void zend_activate(void);
void zend_deactivate(void);
void zend_call_destructors(void);
void zend_activate_modules(void);
void zend_deactivate_modules(void);
void zend_post_deactivate_modules(void);
# 520 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
         void free_estring(char **str_p);
# 542 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
extern int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern zend_write_func_t zend_write;
extern FILE *(*zend_fopen)(const char *filename, char **opened_path);
extern void (*zend_block_interruptions)(void);
extern void (*zend_unblock_interruptions)(void);
extern void (*zend_ticks_function)(int ticks);
extern void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern void (*zend_on_timeout)(int seconds );
extern int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern char *(*zend_getenv)(char *name, size_t name_len );


         void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(char *error);



extern zend_class_entry *zend_standard_class_def;
extern zend_utility_values zend_uv;
extern zval zval_used_for_init;
# 574 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
         void zend_message_dispatcher(long message, void *data);

         int zend_get_configuration_directive(char *name, uint name_length, zval *contents);
# 681 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_operators.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_operators.h"
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
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_operators.h" 2

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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_operators.h" 2





# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_strtod.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_strtod.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_strtod.h" 2


         void zend_freedtoa(char *s);
         char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
         double zend_strtod(const char *s00, char **se);
         double zend_hex_strtod(const char *str, char **endptr);
         double zend_oct_strtod(const char *str, char **endptr);
         int zend_startup_strtod(void);
         int zend_shutdown_strtod(void);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_operators.h" 2






         int add_function(zval *result, zval *op1, zval *op2 );
         int sub_function(zval *result, zval *op1, zval *op2 );
         int mul_function(zval *result, zval *op1, zval *op2 );
         int div_function(zval *result, zval *op1, zval *op2 );
         int mod_function(zval *result, zval *op1, zval *op2 );
         int boolean_xor_function(zval *result, zval *op1, zval *op2 );
         int boolean_not_function(zval *result, zval *op1 );
         int bitwise_not_function(zval *result, zval *op1 );
         int bitwise_or_function(zval *result, zval *op1, zval *op2 );
         int bitwise_and_function(zval *result, zval *op1, zval *op2 );
         int bitwise_xor_function(zval *result, zval *op1, zval *op2 );
         int shift_left_function(zval *result, zval *op1, zval *op2 );
         int shift_right_function(zval *result, zval *op1, zval *op2 );
         int concat_function(zval *result, zval *op1, zval *op2 );

         int is_equal_function(zval *result, zval *op1, zval *op2 );
         int is_identical_function(zval *result, zval *op1, zval *op2 );
         int is_not_identical_function(zval *result, zval *op1, zval *op2 );
         int is_not_equal_function(zval *result, zval *op1, zval *op2 );
         int is_smaller_function(zval *result, zval *op1, zval *op2 );
         int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 );

         zend_bool instanceof_function_ex(zend_class_entry *instance_ce, zend_class_entry *ce, zend_bool interfaces_only );
         zend_bool instanceof_function(zend_class_entry *instance_ce, zend_class_entry *ce );
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_operators.h"
static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors)
{
 const char *ptr;
 int base = 10, digits = 0, dp_or_e = 0;
 double local_dval;
 zend_uchar type;

 if (!length) {
  return 0;
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
    dp_or_e = -1;
    goto process_double;
   }
  } else if (!(digits < 8 * 2 || (digits == 8 * 2 && ptr[-digits] <= '7'))) {
   if (dval) {
    local_dval = zend_hex_strtod(str, (char **)&ptr);
   }
   type = 2;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 2;



  if (dval) {
   local_dval = zend_strtod(str, (char **)&ptr);
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

static inline char *
zend_memnstr(char *haystack, char *needle, int needle_len, char *end)
{
 char *p = haystack;
 char ne = needle[needle_len-1];

 if(needle_len > end-haystack) {
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

static inline void *zend_memrchr(const void *s, int c, size_t n)
{
 register unsigned char *e;

 if (n <= 0) {
  return ((void*)0);
 }

 for (e = (unsigned char *)s + n - 1; e >= (unsigned char *)s; e--) {
  if (*e == (unsigned char)c) {
   return (void *)e;
  }
 }

 return ((void*)0);
}


         int increment_function(zval *op1);
         int decrement_function(zval *op2);

         void convert_scalar_to_number(zval *op );
         void _convert_to_string(zval *op );
         void convert_to_long(zval *op);
         void convert_to_double(zval *op);
         void convert_to_long_base(zval *op, int base);
         void convert_to_null(zval *op);
         void convert_to_boolean(zval *op);
         void convert_to_array(zval *op);
         void convert_to_object(zval *op);
         void multi_convert_to_long_ex(int argc, ...);
         void multi_convert_to_double_ex(int argc, ...);
         void multi_convert_to_string_ex(int argc, ...);
         int add_char_to_string(zval *result, zval *op1, zval *op2);
         int add_string_to_string(zval *result, zval *op1, zval *op2);


         double zend_string_to_double(const char *number, zend_uint length);

         int zval_is_true(zval *op);
         int compare_function(zval *result, zval *op1, zval *op2 );
         int numeric_compare_function(zval *result, zval *op1, zval *op2 );
         int string_compare_function(zval *result, zval *op1, zval *op2 );

         int string_locale_compare_function(zval *result, zval *op1, zval *op2 );


         void zend_str_tolower(char *str, unsigned int length);
         char *zend_str_tolower_copy(char *dest, const char *source, unsigned int length);


static inline char *
zend_str_tolower_dup(const char *source, unsigned int length)
{
 return zend_str_tolower_copy((char *)_emalloc((length+1) ), source, length);
}


         int zend_binary_zval_strcmp(zval *s1, zval *s2);
         int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
         int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
         int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
         int zend_binary_strcmp(char *s1, uint len1, char *s2, uint len2);
         int zend_binary_strncmp(char *s1, uint len1, char *s2, uint len2, uint length);
         int zend_binary_strcasecmp(char *s1, uint len1, char *s2, uint len2);
         int zend_binary_strncasecmp(char *s1, uint len1, char *s2, uint len2, uint length);

         void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
         void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
         void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
         void zend_compare_objects(zval *result, zval *o1, zval *o2 );

         int zend_atoi(const char *str, int str_len);
         long zend_atol(const char *str, int str_len);

         void zend_locale_sprintf_double(zval *op );
# 682 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_variables.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_variables.h"
         void _zval_dtor_func(zval *zvalue );

static inline void _zval_dtor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_dtor_func(zvalue );
}

         void _zval_copy_ctor_func(zval *zvalue );

static inline void _zval_copy_ctor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_copy_ctor_func(zvalue );
}


         int zend_print_variable(zval *var);
         void _zval_ptr_dtor(zval **zval_ptr );
         void _zval_internal_dtor(zval *zvalue );
         void _zval_internal_ptr_dtor(zval **zvalue );
# 78 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_variables.h"
         void zval_add_ref(zval **p);

         void zval_property_ctor(zval **);
# 683 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend.h" 2
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_qsort.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_qsort.h"
         void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_compat.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_compat.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_compat.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_modules.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_modules.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h" 1
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _znode {
 int op_type;
 union {
  zval constant;

  zend_uint var;
  zend_uint opline_num;
  zend_op_array *op_array;
  zend_op *jmp_addr;
  struct {
   zend_uint var;
   zend_uint type;
  } EA;
 } u;
} znode;

typedef struct _zend_execute_data zend_execute_data;




typedef int (*opcode_handler_t) (zend_execute_data *execute_data );

extern opcode_handler_t *zend_opcode_handlers;

struct _zend_op {
 opcode_handler_t handler;
 znode result;
 znode op1;
 znode op2;
 ulong extended_value;
 uint lineno;
 zend_uchar opcode;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;


typedef struct _zend_try_catch_element {
 zend_uint try_op;
 zend_uint catch_op;
} zend_try_catch_element;
# 150 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 char *name;
 int name_length;
 ulong h;
 char *doc_comment;
 int doc_comment_len;
 zend_class_entry *ce;
} zend_property_info;


typedef struct _zend_arg_info {
 char *name;
 zend_uint name_len;
 char *class_name;
 zend_uint class_name_len;
 zend_bool array_type_hint;
 zend_bool allow_null;
 zend_bool pass_by_reference;
 zend_bool return_reference;
 int required_num_args;
} zend_arg_info;

typedef struct _zend_compiled_variable {
 char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 char *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;
 zend_bool pass_rest_by_reference;
 unsigned char return_reference;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last, size;

 zend_compiled_variable *vars;
 int last_var, size_var;

 zend_uint T;

 zend_brk_cont_element *brk_cont_array;
 zend_uint last_brk_cont;
 zend_uint current_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;


 HashTable *static_variables;

 zend_op *start_op;
 int backpatch_count;

 zend_bool done_pass_two;
 zend_bool uses_this;

 char *filename;
 zend_uint line_start;
 zend_uint line_end;
 char *doc_comment;
 zend_uint doc_comment_len;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 char * function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;
 zend_bool pass_rest_by_reference;
 unsigned char return_reference;


 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_module_entry *module;
} zend_internal_function;



typedef union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  char *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
  zend_bool pass_rest_by_reference;
  unsigned char return_reference;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
} zend_function;


typedef struct _zend_function_state {
 HashTable *function_symbol_table;
 zend_function *function;
 void *reserved[4];
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
 zend_op_array *op_array;
 zval *object;
 union _temp_variable *Ts;
 zval ***CVs;
 zend_bool original_in_execution;
 HashTable *symbol_table;
 struct _zend_execute_data *prev_execute_data;
 zval *old_error_reporting;
};
# 323 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h"
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
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals_macros.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_scanner_globals zend_scanner_globals;
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals_macros.h"
extern struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals_macros.h"
extern zend_executor_globals executor_globals;
# 56 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals_macros.h"
extern zend_scanner_globals language_scanner_globals;
# 66 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals_macros.h"
extern zend_scanner_globals ini_scanner_globals;
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_stack.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_stack.h"
typedef struct _zend_stack {
 int top, max;
 void **elements;
} zend_stack;





         int zend_stack_init(zend_stack *stack);
         int zend_stack_push(zend_stack *stack, void *element, int size);
         int zend_stack_top(zend_stack *stack, void **element);
         int zend_stack_del_top(zend_stack *stack);
         int zend_stack_int_top(zend_stack *stack);
         int zend_stack_is_empty(zend_stack *stack);
         int zend_stack_destroy(zend_stack *stack);
         void **zend_stack_base(zend_stack *stack);
         int zend_stack_count(zend_stack *stack);
         void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
         void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ptr_stack.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
} zend_ptr_stack;





         void zend_ptr_stack_init(zend_ptr_stack *stack);
         void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
         void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
         void zend_ptr_stack_destroy(zend_ptr_stack *stack);
         void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
         void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
         int zend_ptr_stack_num_elements(zend_ptr_stack *stack);
# 55 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ptr_stack.h"
static inline void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { stack->max *= 2; stack->max += 3; stack->elements = (void **) _erealloc((stack->elements), ((sizeof(void *) * (stack->max))), 0 ); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { stack->max *= 2; stack->max += 2; stack->elements = (void **) _erealloc((stack->elements), ((sizeof(void *) * (stack->max))), 0 ); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { stack->max *= 2; stack->max += 1; stack->elements = (void **) _erealloc((stack->elements), ((sizeof(void *) * (stack->max))), 0 ); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_objects.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_objects.h"
         void zend_object_std_init(zend_object *object, zend_class_entry *ce );
         void zend_object_std_dtor(zend_object *object );
         zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
         void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
         zend_object *zend_objects_get_address(zval *object );
         void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
         zend_object_value zend_objects_clone_obj(zval *object );
         void zend_objects_free_object_storage(zend_object *object );
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_objects_API.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_objects_API.h"
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
   zend_uint refcount;
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



         void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
         void zend_objects_store_call_destructors(zend_objects_store *objects );
         void zend_objects_store_mark_destructed(zend_objects_store *objects );
         void zend_objects_store_destroy(zend_objects_store *objects);


         zend_object_handle zend_objects_store_put(void *object, zend_objects_store_dtor_t dtor, zend_objects_free_object_storage_t storage, zend_objects_store_clone_t clone );

         void zend_objects_store_add_ref(zval *object );
         void zend_objects_store_del_ref(zval *object );
         void zend_objects_store_add_ref_by_handle(zend_object_handle handle );
         void zend_objects_store_del_ref_by_handle(zend_object_handle handle );
         zend_uint zend_objects_store_get_refcount(zval *object );
         zend_object_value zend_objects_store_clone_obj(zval *object );
         void *zend_object_store_get_object(zval *object );
         void *zend_object_store_get_object_by_handle(zend_object_handle handle );

         void zend_object_store_set_object(zval *zobject, void *object );
         void zend_object_store_ctor_failed(zval *zobject );

         void zend_objects_store_free_object_storage(zend_objects_store *objects );



         zval *zend_object_create_proxy(zval *object, zval *member );

         zend_object_handlers *zend_get_std_object_handlers(void);
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_modules.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2
# 57 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h" 1
# 58 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h" 2





typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;


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
 int comment_start_line;
 char *heredoc;
 int heredoc_len;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool in_compilation;
 zend_bool short_tags;
 zend_bool asp_tags;
 zend_bool allow_call_time_pass_reference;

 zend_declarables declarables;


 zend_bool extended_info;
 zend_bool handle_op_arrays;

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
# 150 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h"
};


struct _zend_executor_globals {
 zval **return_value_ptr_ptr;

 zval uninitialized_zval;
 zval *uninitialized_zval_ptr;

 zval error_zval;
 zval *error_zval_ptr;

 zend_function_state *function_state_ptr;
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

 zval *This;

 long precision;

 int ticks_count;

 zend_bool in_execution;
 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;
 zend_bool ze1_compatibility_mode;


 zend_bool no_extensions;





 HashTable regular_list;
 HashTable persistent_list;

 zend_ptr_stack argument_stack;

 int user_error_handler_error_reporting;
 zval *user_error_handler;
 zval *user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_ptr_stack user_error_handlers;
 zend_ptr_stack user_exception_handlers;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;

 zend_objects_store objects_store;
 zval *exception;
 zend_op *opline_before_exception;

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;

 void *reserved[4];
};

struct _zend_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;
 int yy_leng;
 char *yy_text;
 struct yy_buffer_state *current_buffer;
 char *c_buf_p;
 int init;
 int start;
 int lineno;
 char _yy_hold_char;
 int yy_n_chars;
 int _yy_did_buffer_switch_on_eof;
 int _yy_last_accepting_state;


 char *_yy_last_accepting_cpos;
 int _yy_more_flag;
 int _yy_more_len;
 int yy_start_stack_ptr;
 int yy_start_stack_depth;
 int *yy_start_stack;
# 283 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_globals.h"
};
# 324 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);

extern zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

         int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

         char *zend_set_compiled_filename(char *new_compiled_filename );
         void zend_restore_compiled_filename(char *original_compiled_filename );
         char *zend_get_compiled_filename(void);
         int zend_get_compiled_lineno(void);
         int zend_get_scanned_file_offset(void);

         char* zend_get_compiled_variable_name(zend_op_array *op_array, zend_uint var, int* name_len);
# 353 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, znode *op1, znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, znode *op1, znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, znode *lvar, znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, znode *parent, znode *dim );
void fetch_string_offset(znode *result, znode *parent, znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, znode *arg );
void zend_do_echo(znode *arg );
typedef int (*unary_op_type)(zval *, zval *);
         unary_op_type get_unary_op(int opcode);
         void *get_binary_op(int opcode);

void zend_do_while_cond(znode *expr, znode *close_bracket_token );
void zend_do_while_end(znode *while_token, znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(znode *do_token, znode *expr_open_bracket, znode *expr );


void zend_do_if_cond(znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(znode *cond_start, znode *second_semicolon_token );
void zend_do_for_end(znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(int type, int arg_offset );

void zend_check_writable_variable(znode *variable);

void zend_do_free(znode *op1 );

void zend_do_init_string(znode *result );
void zend_do_add_string(znode *result, znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, znode *op1, znode *op2 );

int zend_do_verify_access_types(znode *current_access_type, znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(znode *function_token );
void zend_do_receive_arg(zend_uchar op, znode *var, znode *offset, znode *initialization, znode *class_type, znode *varname, zend_bool pass_by_reference );
int zend_do_begin_function_call(znode *function_name );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_fetch_class_name(znode *result, znode *class_entry, znode *class_name );
void zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, znode *argument_list, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_handle_exception(void);

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, zend_bool first_catch );
void zend_do_end_catch(znode *try_token );
void zend_do_throw(znode *expr );

         int do_bind_function(zend_op *opline, HashTable *function_table, zend_bool compile_time);
         zend_class_entry *do_bind_class(zend_op *opline, HashTable *class_table, zend_bool compile_time );
         zend_class_entry *do_bind_inherited_class(zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
         void zend_do_inherit_interfaces(zend_class_entry *ce, zend_class_entry *iface );
         void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );

         void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);

void zend_do_pass_param(znode *param, zend_uchar op, int offset );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, znode *expr1, znode *expr2, znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, znode *expr1, znode *expr2, znode *op_token );

void zend_do_brk_cont(zend_uchar op, znode *expr );

void zend_do_switch_cond(znode *cond );
void zend_do_switch_end(znode *case_list );
void zend_do_case_before_statement(znode *case_list, znode *case_token, znode *case_expr );
void zend_do_case_after_statement(znode *result, znode *case_token );
void zend_do_default_before_statement(znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(znode *class_token, znode *class_name, znode *parent_class_name );
void zend_do_end_class_declaration(znode *class_token, znode *parent_token );
void zend_do_declare_property(znode *var_name, znode *value, zend_uint access_type );
void zend_do_declare_implicit_property(void);
void zend_do_declare_class_constant(znode *var_name, znode *value );

void zend_do_fetch_property(znode *result, znode *object, znode *property );

void zend_do_halt_compiler_register(void);

void zend_do_push_object(znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, znode *new_token, znode *argument_list );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode );

void zend_do_shell_exec(znode *result, znode *cmd );

void zend_do_init_array(znode *result, znode *expr, znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, znode *expr, znode *offset, zend_bool is_ref );
void zend_do_add_static_array_element(znode *result, znode *offset, znode *expr);
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);

void zend_do_cast(znode *result, znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, znode *op1 );

void zend_do_unset(znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, znode *expr, znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, znode *open_brackets_token, znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(znode *foreach_token, znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(znode *declare_token );

void zend_do_exit(znode *result, znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(znode *strudel_token );

void zend_do_begin_qm_op(znode *cond, znode *qm_token );
void zend_do_qm_true(znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, znode *false_value, znode *qm_token, znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(znode *function_name, znode *modifiers, znode *body );

         void function_add_ref(zend_function *function);





         zend_op_array *compile_file(zend_file_handle *file_handle, int type );
         zend_op_array *compile_string(zval *source_string, char *filename );
         zend_op_array *compile_filename(int type, zval *filename );
         int zend_execute_scripts(int type , zval **retval, int file_count, ...);
         int open_file_for_scanning(zend_file_handle *file_handle );
         void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
         void destroy_op_array(zend_op_array *op_array );
         void zend_destroy_file_handle(zend_file_handle *file_handle );
         void zend_file_handle_dtor(zend_file_handle *fh);
         int zend_cleanup_class_data(zend_class_entry **pce );
         int zend_cleanup_function_data(zend_function *function );
         int zend_cleanup_function_data_full(zend_function *function );

         void destroy_zend_function(zend_function *function );
         void zend_function_dtor(zend_function *function);
         void destroy_zend_class(zend_class_entry **pce);
void zend_class_add_ref(zend_class_entry **ce);

         void zend_mangle_property_name(char **dest, int *dest_length, char *src1, int src1_length, char *src2, int src2_length, int internal);
         int zend_unmangle_property_name(char *mangled_property, int mangled_property_len, char **prop_name, char **class_name);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(znode *try_token );
void zend_do_mark_last_catch(znode *first_catch, znode *last_additional_catch );
         zend_bool zend_is_compiling(void);
         char *zend_make_compiled_string_description(char *name );
         void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(char *class_name, uint class_name_len);

typedef zend_bool (*zend_auto_global_callback)(char *name, uint name_len );
typedef struct _zend_auto_global {
 char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool armed;
} zend_auto_global;

void zend_auto_global_dtor(zend_auto_global *auto_global);
         int zend_register_auto_global(char *name, uint name_len, zend_auto_global_callback auto_global_callback );
         zend_bool zend_is_auto_global(char *name, uint name_len );
         int zend_auto_global_disable_jit(char *varname, zend_uint varname_length );

int zendlex(znode *zendlval );




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_vm_opcodes.h" 1
# 574 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_compile.h" 2
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_modules.h" 2








extern struct _zend_arg_info first_arg_force_ref[2];
extern struct _zend_arg_info second_arg_force_ref[3];
extern struct _zend_arg_info third_arg_force_ref[4];
extern struct _zend_arg_info fourth_arg_force_ref[5];
extern struct _zend_arg_info fifth_arg_force_ref[6];
extern struct _zend_arg_info all_args_by_ref[1];
# 73 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 struct _zend_ini_entry *ini_entry;
 struct _zend_module_dep *deps;
 char *name;
 struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number );
 int (*module_shutdown_func)(int type, int module_number );
 int (*request_startup_func)(int type, int module_number );
 int (*request_shutdown_func)(int type, int module_number );
 void (*info_func)(zend_module_entry *zend_module );
 char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global );
 void (*globals_dtor)(void *global );
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
};
# 119 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_modules.h"
struct _zend_module_dep {
 char *name;
 char *rel;
 char *version;
 unsigned char type;
};

extern HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_cleanup(zend_module_entry *module );
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(zend_module_entry *module );
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_list.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_list.h"
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

 char *type_name;

 int module_number;
 int resource_id;
 unsigned char type;
} zend_rsrc_list_dtors_entry;



         int zend_register_list_destructors(void (*ld)(void *), void (*pld)(void *), int module_number);
         int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, char *type_name, int module_number);

void list_entry_destructor(void *ptr);
void plist_entry_destructor(void *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

         int zend_list_insert(void *ptr, int type);
         int _zend_list_addref(int id );
         int _zend_list_delete(int id );
         void *_zend_list_find(int id, int *type );





         int zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type);
         void *zend_fetch_resource(zval **passed_id , int default_id, char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

         char *zend_rsrc_list_get_rsrc_type(int resource );
         int zend_fetch_list_dtor_id(char *type_name);

extern int le_index_ptr;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_execute.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_execute.h"
typedef union _temp_variable {
 zval tmp_var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
 } var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
  zval *str;
  zend_uint offset;
 } str_offset;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
  HashPointer fe_pos;
 } fe;
 zend_class_entry *class_entry;
} temp_variable;



         extern void (*zend_execute)(zend_op_array *op_array );
         extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr, int return_value_used );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
         void execute(zend_op_array *op_array );
         void execute_internal(zend_execute_data *execute_data_ptr, int return_value_used );
         int zend_is_true(zval *op);

static inline void safe_free_zval_ptr_rel(zval *p )
{
               ;

 if (p!=(executor_globals.uninitialized_zval_ptr)) {
  _efree((p) );
 }
}
         int zend_lookup_class(char *name, int name_length, zend_class_entry ***ce );
         int zend_lookup_class_ex(char *name, int name_length, int use_autoload, zend_class_entry ***ce );
         int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
         int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );

static inline int i_zend_is_true(zval *op)
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

    if((executor_globals.ze1_compatibility_mode)) {
     result = (zend_hash_num_elements(((*op)).value.obj.handlers->get_properties(&(*op) ))?1:0);
    } else {
     result = 1;
    }
   } else {
    result = 1;
   }
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

         int zval_update_constant(zval **pp, void *arg );
         int zval_update_constant_inline_change(zval **pp, void *arg );
         int zval_update_constant_no_inline_change(zval **pp, void *arg );
         int zval_update_constant_ex(zval **pp, void *arg, zend_class_entry *scope );


static inline void zend_ptr_stack_clear_multiple(void)
{
 void **p = (executor_globals.argument_stack).top_element-2;
 int delete_count = (int)(zend_uintptr_t) *p;

 (executor_globals.argument_stack).top -= (delete_count+2);
 while (--delete_count>=0) {
  zval *q = *(zval **)(--p);
  *p = ((void*)0);
  _zval_ptr_dtor((&q) );
 }
 (executor_globals.argument_stack).top_element = p;
}

static inline int zend_ptr_stack_get_arg(int requested_arg, void **data )
{
 void **p = (executor_globals.argument_stack).top_element-2;
 int arg_count = (int)(zend_uintptr_t) *p;

 if (requested_arg>arg_count) {
  return -1;
 }
 *data = (p-arg_count+requested_arg-1);
 return 0;
}

static inline void zend_arg_types_stack_2_pop(zend_ptr_stack *stack, zval **object, zend_function **fbc)
{
 void *a, *b;

 zend_ptr_stack_2_pop(stack, &a, &b);

 *object = (zval *) a;
 *fbc = (zend_function *) b;
}

static inline void zend_arg_types_stack_3_pop(zend_ptr_stack *stack, zend_class_entry **called_scope, zval **object, zend_function **fbc)
{
 void *a, *b, *c;

 zend_ptr_stack_3_pop(stack, &a, &b, &c);

 *called_scope = (zend_class_entry *) a;
 *object = (zval *) b;
 *fbc = (zend_function *) c;
}

void execute_new_code(void);



         char *get_active_class_name(char **space );
         char *get_active_function_name(void);
         char *zend_get_executed_filename(void);
         uint zend_get_executed_lineno(void);
         zend_bool zend_is_executing(void);

         void zend_set_timeout(long seconds);
         void zend_unset_timeout(void);
         void zend_timeout(int dummy);
         zend_class_entry *zend_fetch_class(char *class_name, uint class_name_len, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 228 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_execute.h"
         zval** zend_get_compiled_variable_value(zend_execute_data *execute_data_ptr, zend_uint var);







         int zend_set_user_opcode_handler(zend_uchar opcode, opcode_handler_t handler);
         opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

         zval *zend_get_zval_ptr(znode *node, temp_variable *Ts, zend_free_op *should_free, int type );
         zval **zend_get_zval_ptr_ptr(znode *node, temp_variable *Ts, zend_free_op *should_free, int type );

         int zend_do_fcall(zend_execute_data *execute_data );
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;
# 168 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
int zend_next_free_module(void);


         int zend_get_parameters(int ht, int param_count, ...);
         int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
         int zend_get_parameters_ex(int param_count, ...);
         int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


         int zend_copy_parameters_array(int param_count, zval *argument_array );
# 188 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
         int zend_parse_parameters(int num_args , char *type_spec, ...);
         int zend_parse_parameters_ex(int flags, int num_args , char *type_spec, ...);
         char *zend_zval_type_name(zval *arg);

         int zend_parse_method_parameters(int num_args , zval *this_ptr, char *type_spec, ...);
         int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, char *type_spec, ...);



         int zend_register_functions(zend_class_entry *scope, zend_function_entry *functions, HashTable *function_table, int type );
         void zend_unregister_functions(zend_function_entry *functions, int count, HashTable *function_table );
         int zend_startup_module(zend_module_entry *module_entry);
         zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
         zend_module_entry* zend_register_module_ex(zend_module_entry *module );
         int zend_startup_module_ex(zend_module_entry *module );
         int zend_startup_modules(void);
         void zend_check_magic_method_implementation(zend_class_entry *ce, zend_function *fptr, int error_type );

         zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
         zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name );
         zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
         void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

         int zend_disable_function(char *function_name, uint function_name_length );
         int zend_disable_class(char *class_name, uint class_name_length );

         void zend_wrong_param_count(void);







         zend_bool zend_is_callable_ex(zval *callable, uint check_flags, char **callable_name, int *callable_name_len, zend_class_entry **ce_ptr, zend_function **fptr_ptr, zval ***zobj_ptr_ptr );
         zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name);
         zend_bool zend_make_callable(zval *callable, char **callable_name );
         char *zend_get_module_version(char *module_name);
         int zend_get_module_started(char *module_name);
         int zend_declare_property(zend_class_entry *ce, char *name, int name_length, zval *property, int access_type );
         int zend_declare_property_ex(zend_class_entry *ce, char *name, int name_length, zval *property, int access_type, char *doc_comment, int doc_comment_len );
         int zend_declare_property_null(zend_class_entry *ce, char *name, int name_length, int access_type );
         int zend_declare_property_bool(zend_class_entry *ce, char *name, int name_length, long value, int access_type );
         int zend_declare_property_long(zend_class_entry *ce, char *name, int name_length, long value, int access_type );
         int zend_declare_property_double(zend_class_entry *ce, char *name, int name_length, double value, int access_type );
         int zend_declare_property_string(zend_class_entry *ce, char *name, int name_length, char *value, int access_type );
         int zend_declare_property_stringl(zend_class_entry *ce, char *name, int name_length, char *value, int value_len, int access_type );

         int zend_declare_class_constant(zend_class_entry *ce, char *name, size_t name_length, zval *value );
         int zend_declare_class_constant_null(zend_class_entry *ce, char *name, size_t name_length );
         int zend_declare_class_constant_long(zend_class_entry *ce, char *name, size_t name_length, long value );
         int zend_declare_class_constant_bool(zend_class_entry *ce, char *name, size_t name_length, zend_bool value );
         int zend_declare_class_constant_double(zend_class_entry *ce, char *name, size_t name_length, double value );
         int zend_declare_class_constant_stringl(zend_class_entry *ce, char *name, size_t name_length, char *value, size_t value_length );
         int zend_declare_class_constant_string(zend_class_entry *ce, char *name, size_t name_length, char *value );

         void zend_update_class_constants(zend_class_entry *class_type );
         void zend_update_property(zend_class_entry *scope, zval *object, char *name, int name_length, zval *value );
         void zend_update_property_null(zend_class_entry *scope, zval *object, char *name, int name_length );
         void zend_update_property_bool(zend_class_entry *scope, zval *object, char *name, int name_length, long value );
         void zend_update_property_long(zend_class_entry *scope, zval *object, char *name, int name_length, long value );
         void zend_update_property_double(zend_class_entry *scope, zval *object, char *name, int name_length, double value );
         void zend_update_property_string(zend_class_entry *scope, zval *object, char *name, int name_length, char *value );
         void zend_update_property_stringl(zend_class_entry *scope, zval *object, char *name, int name_length, char *value, int value_length );

         int zend_update_static_property(zend_class_entry *scope, char *name, int name_length, zval *value );
         int zend_update_static_property_null(zend_class_entry *scope, char *name, int name_length );
         int zend_update_static_property_bool(zend_class_entry *scope, char *name, int name_length, long value );
         int zend_update_static_property_long(zend_class_entry *scope, char *name, int name_length, long value );
         int zend_update_static_property_double(zend_class_entry *scope, char *name, int name_length, double value );
         int zend_update_static_property_string(zend_class_entry *scope, char *name, int name_length, char *value );
         int zend_update_static_property_stringl(zend_class_entry *scope, char *name, int name_length, char *value, int value_length );

         zval *zend_read_property(zend_class_entry *scope, zval *object, char *name, int name_length, zend_bool silent );

         zval *zend_read_static_property(zend_class_entry *scope, char *name, int name_length, zend_bool silent );

         zend_class_entry *zend_get_class_entry(zval *zobject );
         int zend_get_object_classname(zval *object, char **class_name, zend_uint *class_name_len );
         char *zend_get_type_by_const(int type);
# 286 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
         int _array_init(zval *arg );
         int _object_init(zval *arg );
         int _object_init_ex(zval *arg, zend_class_entry *ce );
         int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );

         void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht );


         int add_assoc_function(zval *arg, char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ));

         int add_assoc_long_ex(zval *arg, char *key, uint key_len, long n);
         int add_assoc_null_ex(zval *arg, char *key, uint key_len);
         int add_assoc_bool_ex(zval *arg, char *key, uint key_len, int b);
         int add_assoc_resource_ex(zval *arg, char *key, uint key_len, int r);
         int add_assoc_double_ex(zval *arg, char *key, uint key_len, double d);
         int add_assoc_string_ex(zval *arg, char *key, uint key_len, char *str, int duplicate);
         int add_assoc_stringl_ex(zval *arg, char *key, uint key_len, char *str, uint length, int duplicate);
         int add_assoc_zval_ex(zval *arg, char *key, uint key_len, zval *value);
# 320 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
         int add_index_long(zval *arg, ulong idx, long n);
         int add_index_null(zval *arg, ulong idx);
         int add_index_bool(zval *arg, ulong idx, int b);
         int add_index_resource(zval *arg, ulong idx, int r);
         int add_index_double(zval *arg, ulong idx, double d);
         int add_index_string(zval *arg, ulong idx, char *str, int duplicate);
         int add_index_stringl(zval *arg, ulong idx, char *str, uint length, int duplicate);
         int add_index_zval(zval *arg, ulong index, zval *value);

         int add_next_index_long(zval *arg, long n);
         int add_next_index_null(zval *arg);
         int add_next_index_bool(zval *arg, int b);
         int add_next_index_resource(zval *arg, int r);
         int add_next_index_double(zval *arg, double d);
         int add_next_index_string(zval *arg, char *str, int duplicate);
         int add_next_index_stringl(zval *arg, char *str, uint length, int duplicate);
         int add_next_index_zval(zval *arg, zval *value);

         int add_get_assoc_string_ex(zval *arg, char *key, uint key_len, char *str, void **dest, int duplicate);
         int add_get_assoc_stringl_ex(zval *arg, char *key, uint key_len, char *str, uint length, void **dest, int duplicate);




         int add_get_index_long(zval *arg, ulong idx, long l, void **dest);
         int add_get_index_double(zval *arg, ulong idx, double d, void **dest);
         int add_get_index_string(zval *arg, ulong idx, char *str, void **dest, int duplicate);
         int add_get_index_stringl(zval *arg, ulong idx, char *str, uint length, void **dest, int duplicate);

         int add_property_long_ex(zval *arg, char *key, uint key_len, long l );
         int add_property_null_ex(zval *arg, char *key, uint key_len );
         int add_property_bool_ex(zval *arg, char *key, uint key_len, int b );
         int add_property_resource_ex(zval *arg, char *key, uint key_len, long r );
         int add_property_double_ex(zval *arg, char *key, uint key_len, double d );
         int add_property_string_ex(zval *arg, char *key, uint key_len, char *str, int duplicate );
         int add_property_stringl_ex(zval *arg, char *key, uint key_len, char *str, uint length, int duplicate );
         int add_property_zval_ex(zval *arg, char *key, uint key_len, zval *value );
# 368 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
         int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
         int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );


typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval *function_name;
 HashTable *symbol_table;
 zval **retval_ptr_ptr;
 zend_uint param_count;
 zval ***params;
 zval **object_pp;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zval **object_pp;
} zend_fcall_info_cache;


         extern zend_fcall_info_cache empty_fcall_info_cache;
# 402 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_API.h"
         int zend_fcall_info_init(zval *callable, zend_fcall_info *fci, zend_fcall_info_cache *fcc );




         int zend_fcall_info_args(zend_fcall_info *fci, zval *args );




         int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval, zval *args );

         int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );


         int zend_set_hash_symbol(zval *symbol, char *name, int name_length,
                                  zend_bool is_ref, int num_symbol_tables, ...);

         int zend_delete_global_variable(char *name, int name_len );

         void zend_reset_all_cv(HashTable *symbol_table );



         void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
         void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 74 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_regex.h" 1
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_regex.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex_extra.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_regex.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex.h" 1
# 17 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex.h"
typedef off_t regoff_t;
typedef struct {
 int re_magic;
 size_t re_nsub;
 const char *re_endp;
 struct re_guts *re_g;
} regex_t;
typedef struct {
 regoff_t rm_so;
 regoff_t rm_eo;
} regmatch_t;



int php_regcomp(regex_t *, const char *, int);
# 62 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex.h"
size_t php_regerror(int, const regex_t *, char *, size_t);



int php_regexec(const regex_t *, const char *, size_t, regmatch_t [], int);
# 76 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex.h"
void php_regfree(regex_t *);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_regex.h" 2



# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex_extra.h" 1
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_regex.h" 2
# 75 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 84 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 85 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 100 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/build-defs.h" 1
# 101 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 126 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
       size_t php_strlcpy(char *dst, const char *src, size_t siz);







       size_t php_strlcat(char *dst, const char *src, size_t siz);
# 161 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
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
# 162 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2

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
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 164 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 175 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php3_compat.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php3_compat.h"
typedef zval pval;
# 176 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 190 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/safe_mode.h" 1
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/safe_mode.h"
       int php_checkuid(const char *filename, const char *fopen_mode, int mode);
       int php_checkuid_ex(const char *filename, const char *fopen_mode, int mode, int flags);
       char *php_get_current_user(void);
# 191 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2






# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/regex/regex_extra.h" 1
# 198 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2






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
# 205 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
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
# 206 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 234 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/snprintf.h" 1
# 73 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/snprintf.h"
typedef int bool_int;

typedef enum {
 NO = 0, YES = 1
} boolean_e;



       int ap_php_slprintf(char *buf, size_t len, const char *format,...);
       int ap_php_vslprintf(char *buf, size_t len, const char *format, va_list ap);
       int ap_php_snprintf(char *, size_t, const char *, ...);
       int ap_php_vsnprintf(char *, size_t, const char *, va_list ap);
       int php_sprintf (char* s, const char* format, ...) __attribute__ ((format(printf, 2, 3)));
       char * php_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
       char * php_conv_fp(register char format, register double num,
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, int *len);
# 117 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 142 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 235 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/spprintf.h" 1
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/spprintf.h"
       int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

       int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));
# 237 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 260 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
extern char **environ;
# 272 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
void phperror(char *error);
       int php_write(void *buf, uint size );
       int php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)));

       void php_log_err(char *log_message );
int Debug(char *format, ...) __attribute__ ((format(printf, 1, 2)));
int cfgparse(void);




typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} error_handling_t;


       void php_set_error_handling(error_handling_t error_handling, zend_class_entry *exception_class );


       void php_verror(const char *docref, const char *params, int type, const char *format, va_list args ) __attribute__ ((format(printf, 4, 0)));
# 302 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
       void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
       void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
       void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));
# 323 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
int php_register_internal_extensions(void);

int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );

       void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);

       void php_com_initialize(void);
# 383 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_output.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_output.h"
typedef void (*php_output_handler_func_t)(char *output, uint output_len, char **handled_output, uint *handled_output_len, int mode );


       void php_output_startup(void);
       void php_output_activate(void);
       void php_output_set_status(zend_bool status );
       void php_output_register_constants(void);
       int php_default_output_func(const char *str, uint str_len );
       int php_ub_body_write(const char *str, uint str_length );
       int php_ub_body_write_no_header(const char *str, uint str_length );
       int php_body_write(const char *str, uint str_length );
       int php_header_write(const char *str, uint str_length );
       int php_start_ob_buffer(zval *output_handler, uint chunk_size, zend_bool erase );
       int php_start_ob_buffer_named(const char *output_handler_name, uint chunk_size, zend_bool erase );
       void php_end_ob_buffer(zend_bool send_buffer, zend_bool just_flush );
       void php_end_ob_buffers(zend_bool send_buffer );
       int php_ob_get_buffer(zval *p );
       int php_ob_get_length(zval *p );
       void php_start_implicit_flush(void);
       void php_end_implicit_flush(void);
       char *php_get_output_start_filename(void);
       int php_get_output_start_lineno(void);
       void php_ob_set_internal_handler(php_output_handler_func_t internal_output_handler, uint buffer_size, char *handler_name, zend_bool erase );
       int php_ob_handler_used(char *handler_name );
       int php_ob_init_conflict(char *handler_new, char *handler_set );
       int php_ob_get_buffer(zval *p );
       int php_ob_get_length(zval *p );


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

typedef struct _php_ob_buffer {
 char *buffer;
 uint size;
 uint text_length;
 int block_size;
 uint chunk_size;
 int status;
 zval *output_handler;
 php_output_handler_func_t internal_output_handler;
 char *internal_output_handler_buffer;
 uint internal_output_handler_buffer_size;
 char *handler_name;
 zend_bool erase;
} php_ob_buffer;

typedef struct _php_output_globals {
 int (*php_body_write)(const char *str, uint str_length );
 int (*php_header_write)(const char *str, uint str_length );
 php_ob_buffer active_ob_buffer;
 unsigned char implicit_flush;
 char *output_start_filename;
 int output_start_lineno;
 zend_stack ob_buffers;
 int ob_nesting_level;
 zend_bool ob_lock;
 zend_bool disable_output;
} php_output_globals;






         extern php_output_globals output_globals;
# 110 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_output.h"
void zif_output_add_rewrite_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_output_reset_rewrite_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 384 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 399 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
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
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2


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
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2


       int php_file_le_stream(void);
       int php_file_le_pstream(void);
       int php_file_le_stream_filter(void);
# 98 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_context.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_context.h"
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


       void php_stream_context_free(php_stream_context *context);
       php_stream_context *php_stream_context_alloc(void);
       int php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval ***optionvalue);
       int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

       int php_stream_context_get_link(php_stream_context *context,
  const char *hostent, php_stream **stream);
       int php_stream_context_set_link(php_stream_context *context,
  const char *hostent, php_stream *stream);
       int php_stream_context_del_link(php_stream_context *context,
  php_stream *stream);

       php_stream_notifier *php_stream_notification_alloc(void);
       void php_stream_notification_free(php_stream_notifier *notifier);
# 96 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_context.h"
       void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
       php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);
# 104 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_filter_api.h" 1
# 41 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_filter_api.h"
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



       php_stream_bucket *php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen, int own_buf, int buf_persistent );
       int php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left, php_stream_bucket **right, size_t length );
       void php_stream_bucket_delref(php_stream_bucket *bucket );

       void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
       void php_stream_bucket_append(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
       void php_stream_bucket_unlink(php_stream_bucket *bucket );
       php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket );






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



       void _php_stream_filter_prepend(php_stream_filter_chain *chain, php_stream_filter *filter );
       int php_stream_filter_prepend_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
       void _php_stream_filter_append(php_stream_filter_chain *chain, php_stream_filter *filter );
       int php_stream_filter_append_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
       int _php_stream_filter_flush(php_stream_filter *filter, int finish );
       php_stream_filter *php_stream_filter_remove(php_stream_filter *filter, int call_dtor );
       void php_stream_filter_free(php_stream_filter *filter );
       php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops, void *abstract, int persistent );
# 144 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


       int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
       int php_stream_filter_unregister_factory(const char *filterpattern );
       int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
       php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );
# 105 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2

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
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;


 int err_count;
 char **err_stack;
};
# 188 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
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

};







       php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );
# 258 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 272 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       int _php_stream_free(php_stream *stream, int close_options );




       int _php_stream_seek(php_stream *stream, off_t offset, int whence );



       off_t _php_stream_tell(php_stream *stream );


       size_t _php_stream_read(php_stream *stream, char *buf, size_t count );


       size_t _php_stream_write(php_stream *stream, const char *buf, size_t count );



       size_t _php_stream_printf(php_stream *stream , const char *fmt, ...);



       int _php_stream_eof(php_stream *stream );


       int _php_stream_getc(php_stream *stream );


       int _php_stream_putc(php_stream *stream, int c );


       int _php_stream_flush(php_stream *stream, int closing );


       char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len );



       char *php_stream_get_record(php_stream *stream, size_t maxlen, size_t *returned_len, char *delim, size_t delim_len );


       int _php_stream_puts(php_stream *stream, char *buf );


       int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb );


       int _php_stream_stat_path(char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context );



       int _php_stream_mkdir(char *path, int mode, int options, php_stream_context *context );


       int _php_stream_rmdir(char *path, int options, php_stream_context *context );


       php_stream *_php_stream_opendir(char *path, int options, php_stream_context *context );

       php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent );




       int php_stream_dirent_alphasort(const char **a, const char **b);
       int php_stream_dirent_alphasortr(const char **a, const char **b);

       int _php_stream_scandir(char *dirname, char **namelist[], int flags, php_stream_context *context,
   int (*compare) (const char **a, const char **b) );


       int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam );
# 400 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );
# 420 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

       size_t _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





       size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



       size_t _php_stream_passthru(php_stream * src );




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_transport.h" 1
# 22 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_transport.h"
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
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


       int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
       int php_stream_xport_unregister(char *protocol );
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_transport.h"
       php_stream *_php_stream_xport_create(const char *name, long namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  char **error_string,
  int *error_code
                      );





       int php_stream_xport_bind(php_stream *stream,
  const char *name, long namelen,
  char **error_text
           );


       int php_stream_xport_connect(php_stream *stream,
  const char *name, long namelen,
  int asynchronous,
  struct timeval *timeout,
  char **error_text,
  int *error_code
           );


       int php_stream_xport_listen(php_stream *stream,
  int backlog,
  char **error_text
           );



       int php_stream_xport_accept(php_stream *stream, php_stream **client,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  char **error_text
           );


       int php_stream_xport_get_name(php_stream *stream, int want_peer,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen
           );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



       int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  long flags, void **addr, socklen_t *addrlen,
  char **textaddr, int *textaddrlen );



       int php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
  long flags, void *addr, socklen_t addrlen );

typedef enum {
 STREAM_SHUT_RD,
 STREAM_SHUT_WR,
 STREAM_SHUT_RDWR
} stream_shutdown_t;



       int php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how );





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


       int php_stream_xport_crypto_setup(php_stream *stream, php_stream_xport_crypt_method_t crypto_method, php_stream *session_stream );
       int php_stream_xport_crypto_enable(php_stream *stream, int activate );


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


       HashTable *php_stream_xport_get_hash(void);
       php_stream_transport_factory_func php_stream_generic_socket_factory;
# 438 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_plain_wrapper.h"
       extern php_stream_ops php_stream_stdio_ops;
       extern php_stream_wrapper php_plain_files_wrapper;




       php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


       php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


       php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


       php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


       php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


       php_stream *_php_stream_fopen_tmpfile(int dummy );


       php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





       FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );
# 439 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_userspace.h" 1
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_userspace.h"
       extern php_stream_ops php_stream_userspace_ops;
       extern php_stream_ops php_stream_userspace_dir_ops;
# 440 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_mmap.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_mmap.h"
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
# 70 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/streams/php_stream_mmap.h"
       char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



       int _php_stream_mmap_unmap(php_stream *stream );


       int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );
# 441 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 2
# 458 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );
# 514 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
int php_init_stream_wrappers(int module_number );
int php_shutdown_stream_wrappers(int module_number );
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number );


       int php_register_url_stream_wrapper(char *protocol, php_stream_wrapper *wrapper );
       int php_unregister_url_stream_wrapper(char *protocol );
       int php_register_url_stream_wrapper_volatile(char *protocol, php_stream_wrapper *wrapper );
       int php_unregister_url_stream_wrapper_volatile(char *protocol );
       php_stream *_php_stream_open_wrapper_ex(char *path, char *mode, int options, char **opened_path, php_stream_context *context );
       php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, char **path_for_open, int options );
       char *php_stream_locate_eol(php_stream *stream, char *buf, size_t buf_len );
# 538 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...);
# 549 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h"
       int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



       HashTable *_php_stream_get_url_stream_wrappers_hash(void);

       HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
       HashTable *_php_get_stream_filters_hash(void);

       HashTable *php_get_stream_filters_hash_global(void);
# 400 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_memory_streams.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_memory_streams.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_streams.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_memory_streams.h" 2
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_memory_streams.h"
       php_stream *_php_stream_memory_create(int mode );
       php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
       char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

       php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
       php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern php_stream_ops php_stream_memory_ops;
extern php_stream_ops php_stream_temp_ops;
extern php_stream_ops php_stream_rfc2397_ops;
extern php_stream_wrapper php_stream_rfc2397_wrapper;
# 401 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/fopen_wrappers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/fopen_wrappers.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_globals.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_globals.h"
typedef struct _php_core_globals php_core_globals;






extern struct _php_core_globals core_globals;
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_globals.h"
struct _php_tick_function_entry;

typedef struct _arg_separators {
 char *output;
 char *input;
} arg_separators;

struct _php_core_globals {
 zend_bool magic_quotes_gpc;
 zend_bool magic_quotes_runtime;
 zend_bool magic_quotes_sybase;

 zend_bool safe_mode;

 zend_bool allow_call_time_pass_reference;
 zend_bool implicit_flush;

 long output_buffering;

 char *safe_mode_include_dir;
 zend_bool safe_mode_gid;
 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 long serialize_precision;

 char *safe_mode_exec_dir;

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

 zend_bool register_globals;
 zend_bool register_long_arrays;
 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 zend_bool y2k_compliance;

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
 zend_bool always_populate_raw_post_data;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;
 error_handling_t error_handling;
 zend_class_entry *exception_class;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;



 long max_input_nesting_level;
 zend_bool in_user_include;
 zend_bool in_error_log;
};
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/fopen_wrappers.h" 2

       int php_fopen_primary_script(zend_file_handle *file_handle );
       char *expand_filepath(const char *filepath, char *real_path );
       char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );

       int php_check_open_basedir(const char *path );
       int php_check_open_basedir_ex(const char *path, int warn );
       int php_check_specific_open_basedir(const char *basedir, const char *path );

       int php_check_safe_mode_include_dir(const char *path );

       FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

       char *php_strip_url_passwd(char *path);
# 402 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2



# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config_common.h" 1
# 13 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config_common.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/include/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config.h" 2
# 14 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_config_common.h" 2
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h" 2






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
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h" 2
# 89 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h"
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
# 90 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h" 2
# 135 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

        void virtual_cwd_startup(void);
        void virtual_cwd_shutdown(void);
        char *virtual_getcwd_ex(size_t *length );
        char *virtual_getcwd(char *buf, size_t size );
        int virtual_chdir(const char *path );
        int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path ) );
        int virtual_filepath(const char *path, char **filepath );
        int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path );
        char *virtual_realpath(const char *path, char *real_path );
        FILE *virtual_fopen(const char *path, const char *mode );
        int virtual_open(const char *path , int flags, ...);
        int virtual_creat(const char *path, mode_t mode );
        int virtual_rename(char *oldname, char *newname );
        int virtual_stat(const char *path, struct stat *buf );

        int virtual_lstat(const char *path, struct stat *buf );

        int virtual_unlink(const char *path );
        int virtual_mkdir(const char *pathname, mode_t mode );
        int virtual_rmdir(const char *pathname );
        DIR *virtual_opendir(const char *pathname );
        FILE *virtual_popen(const char *command, const char *type );
        int virtual_access(const char *pathname, int mode );
# 182 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h"
        int virtual_utime(const char *filename, struct utimbuf *buf );

        int virtual_chmod(const char *filename, mode_t mode );

        int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 196 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/TSRM/tsrm_virtual_cwd.h"
        int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath);

        char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 unsigned long key;
 char *path;
 int path_len;
 char *realpath;
 int realpath_len;
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



        void realpath_cache_clean(void);
        void realpath_cache_del(const char *path, int path_len );
# 406 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_constants.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_constants.h"
void clean_module_constants(int module_number );
void free_zend_constant(zend_constant *c);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
         int zend_get_constant(char *name, uint name_len, zval *result );
         int zend_get_constant_ex(char *name, uint name_len, zval *result, zend_class_entry *scope );
         void zend_register_long_constant(char *name, uint name_len, long lval, int flags, int module_number );
         void zend_register_double_constant(char *name, uint name_len, double dval, int flags, int module_number );
         void zend_register_string_constant(char *name, uint name_len, char *strval, int flags, int module_number );
         void zend_register_stringl_constant(char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
         int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
void copy_zend_constant(zend_constant *c);
# 408 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2






# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_reentrancy.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_reentrancy.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_reentrancy.h" 2





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
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_reentrancy.h" 2
# 415 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php.h" 2
# 27 "ext/standard/array.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_ini.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_ini.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ini.h" 1
# 60 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ini.h"
typedef struct _zend_ini_entry zend_ini_entry;




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
 int modified;

 void (*displayer)(zend_ini_entry *ini_entry, int type);
};


         int zend_ini_startup(void);
         int zend_ini_shutdown(void);
         int zend_ini_global_shutdown(void);
         int zend_ini_deactivate(void);

         int zend_copy_ini_directives(void);

         void zend_ini_sort_entries(void);

         int zend_register_ini_entries(zend_ini_entry *ini_entry, int module_number );
         void zend_unregister_ini_entries(int module_number );
         void zend_ini_refresh_caches(int stage );
         int zend_alter_ini_entry(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage);
         int zend_alter_ini_entry_ex(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage, int force_change);
         int zend_restore_ini_entry(char *name, uint name_length, int stage);
         void display_ini_entries(zend_module_entry *module);

         long zend_ini_long(char *name, uint name_length, int orig);
         double zend_ini_double(char *name, uint name_length, int orig);
         char *zend_ini_string(char *name, uint name_length, int orig);

         int zend_ini_register_displayer(char *name, uint name_length, void (*displayer)(zend_ini_entry *ini_entry, int type));

         void zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
         void zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
         void display_link_numbers(zend_ini_entry *ini_entry, int type);
# 177 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ini.h"
         int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
# 196 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, int callback_type, void *arg);

         int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, zend_ini_parser_cb_t ini_parser_cb, void *arg);
         int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, zend_ini_parser_cb_t ini_parser_cb, void *arg);






typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/main/php_ini.h" 2


int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
       zval *cfg_get_entry(char *name, uint name_length);
       int cfg_get_long(char *varname, long *result);
       int cfg_get_double(char *varname, double *result);
       int cfg_get_string(char *varname, char **result);
# 28 "ext/standard/array.c" 2
# 42 "ext/standard/array.c"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_interfaces.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_interfaces.h"
extern zend_class_entry *zend_ce_traversable;
extern zend_class_entry *zend_ce_aggregate;
extern zend_class_entry *zend_ce_iterator;
extern zend_class_entry *zend_ce_arrayaccess;
extern zend_class_entry *zend_ce_serializable;

typedef struct _zend_user_iterator {
 zend_object_iterator it;
 zend_class_entry *ce;
 zval *value;
} zend_user_iterator;

         zval* zend_call_method(zval **object_pp, zend_class_entry *obj_ce, zend_function **fn_proxy, char *function_name, int function_name_len, zval **retval_ptr_ptr, int param_count, zval* arg1, zval* arg2 );
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_interfaces.h"
         void zend_user_it_rewind(zend_object_iterator *_iter );
         int zend_user_it_valid(zend_object_iterator *_iter );
         int zend_user_it_get_current_key(zend_object_iterator *_iter, char **str_key, uint *str_key_len, ulong *int_key );
         void zend_user_it_get_current_data(zend_object_iterator *_iter, zval ***data );
         void zend_user_it_move_forward(zend_object_iterator *_iter );
         void zend_user_it_invalidate_current(zend_object_iterator *_iter );

         zval *zend_user_it_new_iterator(zend_class_entry *ce, zval *object );
         zend_object_iterator *zend_user_it_get_new_iterator(zend_class_entry *ce, zval *object, int by_ref );

         void zend_register_interfaces(void);
# 43 "ext/standard/array.c" 2

# 1 "ext/standard/php_array.h" 1
# 27 "ext/standard/php_array.h"
int zm_startup_array(int type, int module_number );
int zm_shutdown_array(int type, int module_number );

void zif_ksort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_krsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_natsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_natcasesort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_asort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_arsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_usort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_uasort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_uksort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_walk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_walk_recursive(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_end(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_prev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_next(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_reset(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_current(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_min(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_max(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_in_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_search(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_extract(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_compact(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_fill(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_fill_keys(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_range(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_multisort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_push(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_pop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_shift(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_unshift(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_splice(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_slice(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_merge(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_merge_recursive(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_keys(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_values(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_count_values(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_reverse(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_reduce(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_flip(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_change_key_case(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_rand(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_unique(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_intersect(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_intersect_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_intersect_ukey(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_uintersect(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_intersect_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_uintersect_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_intersect_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_uintersect_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_diff(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_diff_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_diff_ukey(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_udiff(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_diff_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_udiff_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_diff_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_udiff_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_sum(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_product(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_filter(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_map(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_key_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_chunk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_array_combine(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

HashTable* php_splice(HashTable *, int, int, zval ***, int, HashTable **);
       int php_array_merge(HashTable *dest, HashTable *src, int recursive );
int multisort_compare(const void *a, const void *b );

typedef struct _zend_array_globals {
 int *multisort_flags[2];
 int (*compare_func)(zval *result, zval *op1, zval *op2 );
} zend_array_globals;
# 45 "ext/standard/array.c" 2
# 1 "ext/standard/basic_functions.h" 1
# 28 "ext/standard/basic_functions.h"
# 1 "/usr/include/wchar.h" 1 3 4
# 41 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 42 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 141 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 106 "/usr/include/wchar.h" 3 4
typedef __mbstate_t mbstate_t;
# 137 "/usr/include/wchar.h" 3 4
struct tm;
# 147 "/usr/include/wchar.h" 3 4
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ ));

extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ ));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ ));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ ));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ ));


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) __attribute__ ((__nothrow__ ));





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) __attribute__ ((__nothrow__ ));

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ ));





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ ));



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ ));
# 206 "/usr/include/wchar.h" 3 4
extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) __attribute__ ((__nothrow__ ));




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ ));


extern wchar_t *wcsdup (const wchar_t *__s) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
# 227 "/usr/include/wchar.h" 3 4
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
# 237 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
# 252 "/usr/include/wchar.h" 3 4
extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
# 266 "/usr/include/wchar.h" 3 4
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
# 277 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));



extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__ ));


extern size_t wcslen (const wchar_t *__s) __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
# 306 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
# 320 "/usr/include/wchar.h" 3 4
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));



extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ ));



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ ));


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__ ));
# 353 "/usr/include/wchar.h" 3 4
extern wint_t btowc (int __c) __attribute__ ((__nothrow__ ));



extern int wctob (wint_t __c) __attribute__ ((__nothrow__ ));



extern int mbsinit (const mbstate_t *__ps) __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) __attribute__ ((__nothrow__ ));


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));
# 386 "/usr/include/wchar.h" 3 4
extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline __attribute__ ((__gnu_inline__)) wint_t
__attribute__ ((__nothrow__ )) btowc (int __c)
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
   ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__nothrow__ )) wctob (wint_t __wc)
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
   ? (int) __wc : __wctob_alias (__wc)); }

extern __inline __attribute__ ((__gnu_inline__)) size_t
__attribute__ ((__nothrow__ )) mbrlen (const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps)

{ return (__ps != ((void*)0)
   ? mbrtowc (((void*)0), __s, __n, __ps) : __mbrlen (__s, __n, ((void*)0))); }





extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));
# 450 "/usr/include/wchar.h" 3 4
extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ ));





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ ));
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ ));







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__ ));



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__ ));
# 566 "/usr/include/wchar.h" 3 4
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ ));



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ ));






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ));






extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__ ));






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ )) ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ )) ;
# 656 "/usr/include/wchar.h" 3 4
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

                                                          ;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf") __attribute__ ((__nothrow__ ))


                                                          ;
# 689 "/usr/include/wchar.h" 3 4
extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) ;





extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


                                                          ;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

                                                          ;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf") __attribute__ ((__nothrow__ ))


                                                          ;
# 745 "/usr/include/wchar.h" 3 4
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
# 855 "/usr/include/wchar.h" 3 4
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));
# 29 "ext/standard/basic_functions.h" 2


# 1 "ext/standard/php_filestat.h" 1
# 24 "ext/standard/php_filestat.h"
int zm_activate_filestat(int type, int module_number );
int zm_deactivate_filestat(int type, int module_number );

void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileatime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filectime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filegroup(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileinode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filemtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileowner(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileperms(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filesize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filetype(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_writable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_readable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_executable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_link(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_stat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_lstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_total_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_free_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_lchown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_lchgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_chmod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_touch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 87 "ext/standard/php_filestat.h"
typedef int php_stat_len;


       void php_clear_stat_cache(void);
       void php_stat(const char *filename, php_stat_len filename_length, int type, zval *return_value );
# 32 "ext/standard/basic_functions.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_highlight.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/Zend/zend_highlight.h"
typedef struct _zend_syntax_highlighter_ini {
 char *highlight_html;
 char *highlight_comment;
 char *highlight_default;
 char *highlight_string;
 char *highlight_keyword;
} zend_syntax_highlighter_ini;



         void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini );
         void zend_strip(void);
         int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini );
         int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name );
         void zend_html_putc(char c);
         void zend_html_puts(const char *s, uint len );


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 34 "ext/standard/basic_functions.h" 2

# 1 "ext/standard/url_scanner_ex.h" 1
# 24 "ext/standard/url_scanner_ex.h"
int zm_startup_url_scanner_ex(int type, int module_number );
int zm_shutdown_url_scanner_ex(int type, int module_number );

int zm_activate_url_scanner_ex(int type, int module_number );
int zm_deactivate_url_scanner_ex(int type, int module_number );

       char *php_url_scanner_adapt_single_url(const char *url, size_t urllen, const char *name, const char *value, size_t *newlen );
       int php_url_scanner_add_var(char *name, int name_len, char *value, int value_len, int urlencode );
       int php_url_scanner_reset_vars(void);


# 1 "ext/standard/php_smart_str_public.h" 1
# 26 "ext/standard/php_smart_str_public.h"
typedef struct {
 char *c;
 size_t len;
 size_t a;
} smart_str;
# 35 "ext/standard/url_scanner_ex.h" 2

typedef struct {

 smart_str tag;
 smart_str arg;
 smart_str val;
 smart_str buf;


 smart_str result;


 smart_str form_app, url_app;

 int active;

 char *lookup_data;
 int state;


 HashTable *tags;
} url_adapt_state_ex_t;
# 36 "ext/standard/basic_functions.h" 2

extern zend_module_entry basic_functions_module;


int zm_startup_basic(int type, int module_number );
int zm_shutdown_basic(int type, int module_number );
int zm_activate_basic(int type, int module_number );
int zm_deactivate_basic(int type, int module_number );
void zm_info_basic(zend_module_entry *zend_module );

void zif_constant(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_usleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_time_nanosleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_time_sleep_until(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_inet_ntop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void php_inet_pton(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_ip2long(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_long2ip(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_getenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_putenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getopt(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_current_user(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_time_limit(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_cfg_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_gpc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_import_request_variables(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_error_log(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_error_get_last(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_call_user_func(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_func_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_shutdown_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_string(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_strip_whitespace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
         void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini);

void zif_ini_get(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_get_all(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_restore(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_restore_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_print_r(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vfprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_connection_aborted(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_connection_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ignore_user_abort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getservbyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getservbyport(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobynumber(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_crc32(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unregister_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_sys_getloadavg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_is_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_move_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_parse_ini_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_str_rot13(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_get_filters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_filter_register(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_make_writeable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_prepend(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_append(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_new(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
int zm_startup_user_filters(int type, int module_number );
int zm_deactivate_user_filters(int type, int module_number );


       int _php_error_log(int opt_err, char *message, char *opt, char *headers );
       int _php_error_log_ex(int opt_err, char *message, int message_len, char *opt, char *headers );



typedef unsigned int php_uint32;
typedef signed int php_int32;
# 156 "ext/standard/basic_functions.h"
typedef struct _php_basic_globals {
 HashTable *user_shutdown_function_names;
 HashTable putenv_ht;
 zval *strtok_zval;
 char *strtok_string;
 char *locale_string;
 char *strtok_last;
 char strtok_table[256];
 ulong strtok_len;
 char str_ebuf[40];
 zval **array_walk_func_name;
 zval **user_compare_func_name;
 zend_fcall_info_cache user_compare_fci_cache;
 zend_llist *user_tick_functions;

 zval *active_ini_file_section;

 HashTable sm_protected_env_vars;
 char *sm_allowed_env_vars;


 long page_uid;
 long page_gid;
 long page_inode;
 long page_mtime;


 char *CurrentStatFile, *CurrentLStatFile;
 php_stream_statbuf ssb, lssb;


 php_uint32 state[(624)+1];
 php_uint32 *next;
 int left;

 unsigned int rand_seed;

 zend_bool rand_is_seeded;
 zend_bool mt_rand_is_seeded;


 int syslog_started;
 char *syslog_device;


 zend_class_entry *incomplete_class;


 url_adapt_state_ex_t url_adapt_state_ex;


 void *mmap_file;
 size_t mmap_len;


 HashTable *user_filter_map;






 int umask;
} php_basic_globals;






       extern php_basic_globals basic_globals;



typedef struct {
 char *putenv_string;
 char *previous_value;
 char *key;
 int key_len;
} putenv_entry;







       double php_get_nan(void);
       double php_get_inf(void);
# 46 "ext/standard/array.c" 2
# 1 "ext/standard/php_string.h" 1
# 27 "ext/standard/php_string.h"
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
void zif_bin2hex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
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






       int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


       struct lconv *localeconv_r(struct lconv *out);


       char *php_strtoupper(char *s, size_t len);
       char *php_strtolower(char *s, size_t len);
       char *php_strtr(char *str, int len, char *str_from, char *str_to, int trlen);
       char *php_addslashes(char *str, int length, int *new_length, int freeit );
       char *php_addslashes_ex(char *str, int length, int *new_length, int freeit, int ignore_sybase );
       char *php_addcslashes(char *str, int length, int *new_length, int freeit, char *what, int wlength );
       void php_stripslashes(char *str, int *len );
       void php_stripcslashes(char *str, int *len);
       void php_basename(char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len );
       size_t php_dirname(char *str, size_t len);
       char *php_stristr(unsigned char *s, unsigned char *t, size_t s_len, size_t t_len);
       char *php_str_to_str_ex(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length, int case_sensitivity, int *replace_count);
       char *php_str_to_str(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length);
       char *php_trim(char *c, int len, char *what, int what_len, zval *return_value, int mode );
       size_t php_strip_tags(char *rbuf, int len, int *state, char *allow, int allow_len);
       size_t php_strip_tags_ex(char *rbuf, int len, int *stateptr, char *allow, int allow_len, zend_bool allow_tag_spaces);
       int php_char_to_str_ex(char *str, uint len, char from, char *to, int to_len, zval *result, int case_sensitivity, int *replace_count);
       int php_char_to_str(char *str, uint len, char from, char *to, int to_len, zval *result);
       void php_implode(zval *delim, zval *arr, zval *return_value );
       void php_explode(zval *delim, zval *str, zval *return_value, int limit);

       size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
       size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);
# 159 "ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 47 "ext/standard/array.c" 2
# 1 "ext/standard/php_rand.h" 1
# 55 "ext/standard/php_rand.h"
       void php_srand(long seed );
       long php_rand(void);
       void php_mt_srand(php_uint32 seed );
       php_uint32 php_mt_rand(void);
# 48 "ext/standard/array.c" 2
# 1 "ext/standard/php_smart_str.h" 1
# 153 "ext/standard/php_smart_str.h"
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
# 49 "ext/standard/array.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_array.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_array.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/php_spl.h" 1
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/php_spl.h"
extern zend_module_entry spl_module_entry;
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/php_spl.h"
int zm_startup_spl(int type, int module_number );
int zm_shutdown_spl(int type, int module_number );
int zm_activate_spl(int type, int module_number );
int zm_deactivate_spl(int type, int module_number );
void zm_info_spl(zend_module_entry *zend_module );


typedef struct _zend_spl_globals {
 char * autoload_extensions;
 HashTable * autoload_functions;
 int autoload_running;
 int autoload_extensions_len;
} zend_spl_globals;






extern zend_spl_globals spl_globals;


void zif_spl_classes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_parents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_implements(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_array.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_iterators.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_iterators.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/php_pcre.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/php_pcre.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/pcrelib/pcre.h" 1
# 206 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/pcrelib/pcre.h"
struct real_pcre;
typedef struct real_pcre pcre;
# 221 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/pcrelib/pcre.h"
typedef struct pcre_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
} pcre_extra;






typedef struct pcre_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const char * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

} pcre_callout_block;
# 260 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/pcrelib/pcre.h"
extern void *(*php_pcre_malloc)(size_t);
extern void (*php_pcre_free)(void *);
extern void *(*php_pcre_stack_malloc)(size_t);
extern void (*php_pcre_stack_free)(void *);
extern int (*php_pcre_callout)(pcre_callout_block *);
# 275 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/pcrelib/pcre.h"
extern pcre *php_pcre_compile(const char *, int, const char **, int *,
                  const unsigned char *);
extern pcre *php_pcre_compile2(const char *, int, int *, const char **,
                  int *, const unsigned char *);
extern int php_pcre_config(int, void *);
extern int php_pcre_copy_named_substring(const pcre *, const char *,
                  int *, int, const char *, char *, int);
extern int php_pcre_copy_substring(const char *, int *, int, int, char *,
                  int);
extern int pcre_dfa_exec(const pcre *, const pcre_extra *,
                  const char *, int, int, int, int *, int , int *, int);
extern int php_pcre_exec(const pcre *, const pcre_extra *, const char *,
                   int, int, int, int *, int);
extern void php_pcre_free_substring(const char *);
extern void php_pcre_free_substring_list(const char **);
extern int php_pcre_fullinfo(const pcre *, const pcre_extra *, int,
                  void *);
extern int php_pcre_get_named_substring(const pcre *, const char *,
                  int *, int, const char *, const char **);
extern int php_pcre_get_stringnumber(const pcre *, const char *);
extern int php_pcre_get_stringtable_entries(const pcre *, const char *,
                  char **, char **);
extern int php_pcre_get_substring(const char *, int *, int, int,
                  const char **);
extern int php_pcre_get_substring_list(const char *, int *, int,
                  const char ***);
extern int php_pcre_info(const pcre *, int *, int *);
extern const unsigned char *php_pcre_maketables(void);
extern int php_pcre_refcount(pcre *, int);
extern pcre_extra *php_pcre_study(const pcre *, int, const char **);
extern const char *php_pcre_version(void);
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/php_pcre.h" 2





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
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/pcre/php_pcre.h" 2


void zif_preg_match(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_preg_match_all(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_preg_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_preg_replace_callback(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_preg_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_preg_quote(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_preg_grep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

       char *php_pcre_replace(char *regex, int regex_len, char *subject, int subject_len, zval *replace_val, int is_callable_replace, int *result_len, int limit, int *replace_count );
       pcre* pcre_get_compiled_regex(char *regex, pcre_extra **extra, int *options );
       pcre* pcre_get_compiled_regex_ex(char *regex, pcre_extra **extra, int *preg_options, int *coptions );

extern zend_module_entry pcre_module_entry;


typedef struct {
 pcre *re;
 pcre_extra *extra;
 int preg_options;

 char *locale;
 unsigned const char *tables;

 int compile_options;
 int refcount;
} pcre_cache_entry;

       pcre_cache_entry* pcre_get_compiled_regex_cache(char *regex, int regex_len );

       void php_pcre_match_impl( pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 zval *subpats, int global, int use_flags, long flags, long start_offset );

       char *php_pcre_replace_impl(pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 int is_callable_replace, int *result_len, int limit, int *replace_count );

       void php_pcre_split_impl( pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 long limit_val, long flags );

       void php_pcre_grep_impl( pcre_cache_entry *pce, zval *input, zval *return_value,
 long flags );

typedef struct _zend_pcre_globals {
 HashTable pcre_cache;
 long backtrack_limit;
 long recursion_limit;
 int error_code;
} zend_pcre_globals;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_iterators.h" 2








extern zend_class_entry *spl_ce_RecursiveIterator;
extern zend_class_entry *spl_ce_RecursiveIteratorIterator;
extern zend_class_entry *spl_ce_FilterIterator;
extern zend_class_entry *spl_ce_RecursiveFilterIterator;
extern zend_class_entry *spl_ce_ParentIterator;
extern zend_class_entry *spl_ce_SeekableIterator;
extern zend_class_entry *spl_ce_LimitIterator;
extern zend_class_entry *spl_ce_CachingIterator;
extern zend_class_entry *spl_ce_RecursiveCachingIterator;
extern zend_class_entry *spl_ce_OuterIterator;
extern zend_class_entry *spl_ce_IteratorIterator;
extern zend_class_entry *spl_ce_NoRewindIterator;
extern zend_class_entry *spl_ce_InfiniteIterator;
extern zend_class_entry *spl_ce_EmptyIterator;
extern zend_class_entry *spl_ce_AppendIterator;
extern zend_class_entry *spl_ce_RegexIterator;
extern zend_class_entry *spl_ce_RecursiveRegexIterator;
extern zend_class_entry *spl_ce_Countable;

int zm_startup_spl_iterators(int type, int module_number );

void zif_iterator_to_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iterator_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iterator_apply(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

typedef enum {
 DIT_Default = 0,
 DIT_FilterIterator = DIT_Default,
 DIT_RecursiveFilterIterator = DIT_Default,
 DIT_ParentIterator = DIT_Default,
 DIT_LimitIterator,
 DIT_CachingIterator,
 DIT_RecursiveCachingIterator,
 DIT_IteratorIterator,
 DIT_NoRewindIterator,
 DIT_InfiniteIterator,
 DIT_AppendIterator,

 DIT_RegexIterator,
 DIT_RecursiveRegexIterator,

 DIT_Unknown = ~0
} dual_it_type;

enum {

 CIT_CALL_TOSTRING = 0x00000001,
 CIT_TOSTRING_USE_KEY = 0x00000002,
 CIT_TOSTRING_USE_CURRENT = 0x00000004,
 CIT_TOSTRING_USE_INNER = 0x00000008,
 CIT_CATCH_GET_CHILD = 0x00000010,
 CIT_FULL_CACHE = 0x00000100,
 CIT_PUBLIC = 0x0000FFFF,

 CIT_VALID = 0x00010000,
 CIT_HAS_CHILDREN = 0x00020000
};

enum {

 REGIT_USE_KEY = 0x00000001,
 REGIT_INVERTED = 0x00000002
};

typedef enum {
 REGIT_MODE_MATCH,
 REGIT_MODE_GET_MATCH,
 REGIT_MODE_ALL_MATCHES,
 REGIT_MODE_SPLIT,
 REGIT_MODE_REPLACE,
 REGIT_MODE_MAX
} regex_mode;

typedef struct _spl_dual_it_object {
 zend_object std;
 struct {
  zval *zobject;
  zend_class_entry *ce;
  zend_object *object;
  zend_object_iterator *iterator;
 } inner;
 struct {
  zval *data;
  char *str_key;
  uint str_key_len;
  ulong int_key;
  int key_type;
  int pos;
 } current;
 dual_it_type dit_type;
 union {
  struct {
   long offset;
   long count;
  } limit;
  struct {
   long flags;
   zval *zstr;
   zval *zchildren;
   zval *zcache;
  } caching;
  struct {
   zval *zarrayit;
   zend_object_iterator *iterator;
  } append;

  struct {
   int use_flags;
   long flags;
   regex_mode mode;
   long preg_flags;
   pcre_cache_entry *pce;
   char *regex;
  } regex;

 } u;
} spl_dual_it_object;

typedef int (*spl_iterator_apply_func_t)(zend_object_iterator *iter, void *puser );

       int spl_iterator_apply(zval *obj, spl_iterator_apply_func_t apply_func, void *puser );
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src2/ext/spl/spl_array.h" 2

extern zend_class_entry *spl_ce_ArrayObject;
extern zend_class_entry *spl_ce_ArrayIterator;
extern zend_class_entry *spl_ce_RecursiveArrayIterator;

int zm_startup_spl_array(int type, int module_number );

extern void spl_array_iterator_append(zval *object, zval *append_value );
extern void spl_array_iterator_key(zval *object, zval *return_value );
# 51 "ext/standard/array.c" 2
# 99 "ext/standard/array.c"
zend_array_globals array_globals;



static void php_array_init_globals(zend_array_globals *array_globals)
{
 memset(array_globals, 0, sizeof(zend_array_globals));
}


int zm_startup_array(int type, int module_number )
{
 php_array_init_globals(&array_globals);;

 zend_register_long_constant(("EXTR_OVERWRITE"), sizeof("EXTR_OVERWRITE"), (0), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_SKIP"), sizeof("EXTR_SKIP"), (1), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_PREFIX_SAME"), sizeof("EXTR_PREFIX_SAME"), (2), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_PREFIX_ALL"), sizeof("EXTR_PREFIX_ALL"), (3), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_PREFIX_INVALID"), sizeof("EXTR_PREFIX_INVALID"), (4), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_PREFIX_IF_EXISTS"), sizeof("EXTR_PREFIX_IF_EXISTS"), (5), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_IF_EXISTS"), sizeof("EXTR_IF_EXISTS"), (6), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("EXTR_REFS"), sizeof("EXTR_REFS"), (0x100), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("SORT_ASC"), sizeof("SORT_ASC"), (4), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("SORT_DESC"), sizeof("SORT_DESC"), (3), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("SORT_REGULAR"), sizeof("SORT_REGULAR"), (0), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("SORT_NUMERIC"), sizeof("SORT_NUMERIC"), (1), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("SORT_STRING"), sizeof("SORT_STRING"), (2), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("SORT_LOCALE_STRING"), sizeof("SORT_LOCALE_STRING"), (5), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("CASE_LOWER"), sizeof("CASE_LOWER"), (0), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("CASE_UPPER"), sizeof("CASE_UPPER"), (1), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("COUNT_NORMAL"), sizeof("COUNT_NORMAL"), (0), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("COUNT_RECURSIVE"), sizeof("COUNT_RECURSIVE"), (1), ((1<<0) | (1<<1)), module_number );

 return 0;
}


int zm_shutdown_array(int type, int module_number )
{




 return 0;
}


static void set_compare_func(int sort_type )
{
 switch (sort_type) {
  case 1:
   (array_globals.compare_func) = numeric_compare_function;
   break;

  case 2:
   (array_globals.compare_func) = string_compare_function;
   break;


  case 5:
   (array_globals.compare_func) = string_locale_compare_function;
   break;


  case 0:
  default:
   (array_globals.compare_func) = compare_function;
   break;
 }
}


static int array_key_compare(const void *a, const void *b )
{
 Bucket *f;
 Bucket *s;
 zval result;
 zval first;
 zval second;

 f = *((Bucket **) a);
 s = *((Bucket **) b);

 if (f->nKeyLength == 0) {
  (first).type = 1;
  (first).value.lval = f->h;
 } else {
  (first).type = 6;
  (first).value.str.val = f->arKey;
  (first).value.str.len = f->nKeyLength-1;
 }

 if (s->nKeyLength == 0) {
  (second).type = 1;
  (second).value.lval = s->h;
 } else {
  (second).type = 6;
  (second).value.str.val = s->arKey;
  (second).value.str.len = s->nKeyLength-1;
 }

 if ((array_globals.compare_func)(&result, &first, &second ) == -1) {
  return 0;
 }

 if ((result).type == 2) {
  if ((result).value.dval < 0) {
   return -1;
  } else if ((result).value.dval > 0) {
   return 1;
  } else {
   return 0;
  }
 }

 convert_to_long(&result);

 if ((result).value.lval < 0) {
  return -1;
 } else if ((result).value.lval > 0) {
  return 1;
 }

 return 0;
}


static int array_reverse_key_compare(const void *a, const void *b )
{
 return array_key_compare(a, b ) * -1;
}




void zif_krsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long sort_type = 0;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "a|l", &array, &sort_type) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 set_compare_func(sort_type );

 if (zend_hash_sort(target_hash, zend_qsort, array_reverse_key_compare, 0 ) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_ksort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long sort_type = 0;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "a|l", &array, &sort_type) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 set_compare_func(sort_type );

 if (zend_hash_sort(target_hash, zend_qsort, array_key_compare, 0 ) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}


static int php_count_recursive(zval *array, long mode )
{
 long cnt = 0;
 zval **element;

 if ((*array).type == 4) {
  if ((*array).value.ht->nApplyCount > 1) {
   php_error_docref0(((void*)0) , (1<<1L), "recursion detected");
   return 0;
  }

  cnt = zend_hash_num_elements((*array).value.ht);
  if (mode == 1) {
   HashPosition pos;

   for (zend_hash_internal_pointer_reset_ex((*array).value.ht, &pos);
     zend_hash_get_current_data_ex((*array).value.ht, (void **) &element, &pos) == 0;
     zend_hash_move_forward_ex((*array).value.ht, &pos)) {
    (*array).value.ht->nApplyCount++;
    cnt += php_count_recursive(*element, 1 );
    (*array).value.ht->nApplyCount--;
   }
  }
 }

 return cnt;
}




void zif_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long mode = 0;

 if (zend_parse_parameters ((ht) , "z|l", &array, &mode) == -1)
  return;

 switch ((*array).type) {
  case 0:
   { { (*return_value).type = 1; (*return_value).value.lval = 0; }; return; };
   break;
  case 4:
   { { (*return_value).type = 1; (*return_value).value.lval = php_count_recursive (array, mode ); }; return; };
   break;
  case 5: {


   zval *retval;

   if ((*array).value.obj.handlers->get_class_entry && instanceof_function(zend_get_class_entry(&(*array) ), spl_ce_Countable )) {
    zend_call_method(&array, ((void*)0), ((void*)0), "count", sizeof("count")-1, &retval, 0, ((void*)0), ((void*)0) );
    if (retval) {
     if ((*&retval)->type!=1) { if (!((*&retval)->is_ref)) { { zval *orig_ptr = *(&retval); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(&retval)) = (zval *) _emalloc((sizeof(zval)) ); **(&retval) = *orig_ptr; _zval_copy_ctor((*(&retval)) ); (*(&retval))->refcount=1; (*(&retval))->is_ref = 0; } }; }; convert_to_long(*&retval); };
     { (*return_value).type = 1; (*return_value).value.lval = (*retval).value.lval; };
     _zval_ptr_dtor((&retval) );
    }
    return;
   }


   if ((*array).value.obj.handlers->count_elements) {
    { (*return_value).type = 1; (*return_value).value.lval = 1; };
    if (0 == (*array).value.obj.handlers->count_elements(array, &(*return_value).value.lval )) {
     return;
    }
   }
  }
  default:
   { { (*return_value).type = 1; (*return_value).value.lval = 1; }; return; };
   break;
 }
}
# 362 "ext/standard/array.c"
static int array_data_compare(const void *a, const void *b )
{
 Bucket *f;
 Bucket *s;
 zval result;
 zval *first;
 zval *second;

 f = *((Bucket **) a);
 s = *((Bucket **) b);

 first = *((zval **) f->pData);
 second = *((zval **) s->pData);

 if ((array_globals.compare_func)(&result, first, second ) == -1) {
  return 0;
 }

 if ((result).type == 2) {
  if ((result).value.dval < 0) {
   return -1;
  } else if ((result).value.dval > 0) {
   return 1;
  } else {
   return 0;
  }
 }

 convert_to_long(&result);

 if ((result).value.lval < 0) {
  return -1;
 } else if ((result).value.lval > 0) {
  return 1;
 }

 return 0;
}


static int array_reverse_data_compare(const void *a, const void *b )
{
 return array_data_compare(a, b )*-1;
}


static int array_natural_general_compare(const void *a, const void *b, int fold_case)
{
 Bucket *f, *s;
 zval *fval, *sval;
 zval first, second;
 int result;

 f = *((Bucket **) a);
 s = *((Bucket **) b);

 fval = *((zval **) f->pData);
 sval = *((zval **) s->pData);
 first = *fval;
 second = *sval;
 if ((*fval).type != 6) {
  _zval_copy_ctor((&first) );
  if ((&first)->type != 6) { _convert_to_string((&first) ); };
 }
 if ((*sval).type != 6) {
  _zval_copy_ctor((&second) );
  if ((&second)->type != 6) { _convert_to_string((&second) ); };
 }

 result = strnatcmp_ex((first).value.str.val, (first).value.str.len, (second).value.str.val, (second).value.str.len, fold_case);

 if ((*fval).type != 6)
  _zval_dtor((&first) );
 if ((*sval).type != 6)
  _zval_dtor((&second) );

 return result;
}


static int array_natural_compare(const void *a, const void *b )
{
 return array_natural_general_compare(a, b, 0);
}


static int array_natural_case_compare(const void *a, const void *b )
{
 return array_natural_general_compare(a, b, 1);
}


static void php_natsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int fold_case)
{
 zval **array;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }

 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }

 if (fold_case) {
  if (zend_hash_sort(target_hash, zend_qsort, array_natural_case_compare, 0 ) == -1) {
   return;
  }
 } else {
  if (zend_hash_sort(target_hash, zend_qsort, array_natural_compare, 0 ) == -1) {
   return;
  }
 }

 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_natsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_natsort(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_natcasesort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_natsort(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_asort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long sort_type = 0;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "a|l", &array, &sort_type) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 set_compare_func(sort_type );

 if (zend_hash_sort(target_hash, zend_qsort, array_data_compare, 0 ) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_arsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long sort_type = 0;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "a|l", &array, &sort_type) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 set_compare_func(sort_type );

 if (zend_hash_sort(target_hash, zend_qsort, array_reverse_data_compare, 0 ) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_sort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long sort_type = 0;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "a|l", &array, &sort_type) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 set_compare_func(sort_type );

 if (zend_hash_sort(target_hash, zend_qsort, array_data_compare, 1 ) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_rsort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;
 long sort_type = 0;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "a|l", &array, &sort_type) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 set_compare_func(sort_type );

 if (zend_hash_sort(target_hash, zend_qsort, array_reverse_data_compare, 1 ) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}


static int array_user_compare(const void *a, const void *b )
{
 Bucket *f;
 Bucket *s;
 zval **args[2];
 zval *retval_ptr;
 zend_fcall_info fci;

 f = *((Bucket **) a);
 s = *((Bucket **) b);

 args[0] = (zval **) f->pData;
 args[1] = (zval **) s->pData;

 fci.size = sizeof(fci);
 fci.function_table = (executor_globals.function_table);
 fci.function_name = *(basic_globals.user_compare_func_name);
 fci.symbol_table = ((void*)0);
 fci.object_pp = ((void*)0);
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = 2;
 fci.params = args;
 fci.no_separation = 0;

 if (zend_call_function(&fci, &(basic_globals.user_compare_fci_cache) )== 0
  && retval_ptr) {
  long retval;

  if ((*&retval_ptr)->type!=1) { if (!((*&retval_ptr)->is_ref)) { { zval *orig_ptr = *(&retval_ptr); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(&retval_ptr)) = (zval *) _emalloc((sizeof(zval)) ); **(&retval_ptr) = *orig_ptr; _zval_copy_ctor((*(&retval_ptr)) ); (*(&retval_ptr))->refcount=1; (*(&retval_ptr))->is_ref = 0; } }; }; convert_to_long(*&retval_ptr); };
  retval = (*retval_ptr).value.lval;
  _zval_ptr_dtor((&retval_ptr) );
  return retval < 0 ? -1 : retval > 0 ? 1 : 0;;
 } else {
  return 0;
 }
}
# 657 "ext/standard/array.c"
void zif_usort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array_ptr, *array;
 int refcount;
 HashTable *target_hash;
 zval *func_name;
 zval **old_compare_func; zend_fcall_info_cache old_user_compare_fci_cache;

 old_compare_func = (basic_globals.user_compare_func_name); old_user_compare_fci_cache = (basic_globals.user_compare_fci_cache); (basic_globals.user_compare_fci_cache) = empty_fcall_info_cache;;


 if ((ht) != 2 || zend_get_parameters_ex(2, &array_ptr, &(basic_globals.user_compare_func_name)) == -1) {
  (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
  { zend_wrong_param_count(); return; };
 }
 array = *array_ptr;

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (!zend_is_callable(*(basic_globals.user_compare_func_name), 0, ((void*)0))) { php_error_docref0(((void*)0) , (1<<1L), "Invalid comparison function"); (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func; { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; }; }
 func_name = *(basic_globals.user_compare_func_name);
 (basic_globals.user_compare_func_name) = &func_name;
 (basic_globals.user_compare_fci_cache).initialized = 0;







 array->is_ref = 0;
 refcount = array->refcount;

 if (zend_hash_sort(target_hash, zend_qsort, array_user_compare, 1 ) == -1) {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 } else {
  if (refcount > array->refcount) {
   php_error_docref0(((void*)0) , (1<<1L), "Array was modified by the user comparison function");
   { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
  } else {
   { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); };
  }
 }

 if (array->refcount > 1) {
  array->is_ref = 1;
 }

 (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
}




void zif_uasort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array_ptr, *array;
 int refcount;
 HashTable *target_hash;
 zval *func_name;
 zval **old_compare_func; zend_fcall_info_cache old_user_compare_fci_cache;

 old_compare_func = (basic_globals.user_compare_func_name); old_user_compare_fci_cache = (basic_globals.user_compare_fci_cache); (basic_globals.user_compare_fci_cache) = empty_fcall_info_cache;;

 if ((ht) != 2 || zend_get_parameters_ex(2, &array_ptr, &(basic_globals.user_compare_func_name)) == -1) {
  (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
  { zend_wrong_param_count(); return; };
 }
 array = *array_ptr;
 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (!zend_is_callable(*(basic_globals.user_compare_func_name), 0, ((void*)0))) { php_error_docref0(((void*)0) , (1<<1L), "Invalid comparison function"); (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func; { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; }; }
 func_name = *(basic_globals.user_compare_func_name);
 (basic_globals.user_compare_func_name) = &func_name;
 (basic_globals.user_compare_fci_cache).initialized = 0;







 array->is_ref = 0;
 refcount = array->refcount;

 if (zend_hash_sort(target_hash, zend_qsort, array_user_compare, 0 ) == -1) {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 } else {
  if (refcount > array->refcount) {
   php_error_docref0(((void*)0) , (1<<1L), "Array was modified by the user comparison function");
   { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
  } else {
   { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); };
  }
 }

 if (array->refcount > 1) {
  array->is_ref = 1;
 }

 (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
}


static int array_user_key_compare(const void *a, const void *b )
{
 zend_fcall_info fci;
 Bucket *f;
 Bucket *s;
 zval *key1, *key2;
 zval **args[2];
 zval *retval_ptr = ((void*)0);

 (key1) = (zval *) _emalloc((sizeof(zval)) ); *key1 = zval_used_for_init;;;
 (key2) = (zval *) _emalloc((sizeof(zval)) ); *key2 = zval_used_for_init;;;
 args[0] = &key1;
 args[1] = &key2;

 f = *((Bucket **) a);
 s = *((Bucket **) b);

 if (f->nKeyLength) {
  (*key1).value.str.val = _estrndup((f->arKey), (f->nKeyLength-1) );
  (*key1).value.str.len = f->nKeyLength-1;
  (*key1).type = 6;
 } else {
  (*key1).value.lval = f->h;
  (*key1).type = 1;
 }
 if (s->nKeyLength) {
  (*key2).value.str.val = _estrndup((s->arKey), (s->nKeyLength-1) );
  (*key2).value.str.len = s->nKeyLength-1;
  (*key2).type = 6;
 } else {
  (*key2).value.lval = s->h;
  (*key2).type = 1;
 }

 fci.size = sizeof(fci);
 fci.function_table = (executor_globals.function_table);
 fci.function_name = *(basic_globals.user_compare_func_name);
 fci.symbol_table = ((void*)0);
 fci.object_pp = ((void*)0);
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = 2;
 fci.params = args;
 fci.no_separation = 0;

 if (zend_call_function(&fci, &(basic_globals.user_compare_fci_cache) )== 0
  && retval_ptr) {
  long retval;

  if ((*&retval_ptr)->type!=1) { if (!((*&retval_ptr)->is_ref)) { { zval *orig_ptr = *(&retval_ptr); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(&retval_ptr)) = (zval *) _emalloc((sizeof(zval)) ); **(&retval_ptr) = *orig_ptr; _zval_copy_ctor((*(&retval_ptr)) ); (*(&retval_ptr))->refcount=1; (*(&retval_ptr))->is_ref = 0; } }; }; convert_to_long(*&retval_ptr); };
  retval = (*retval_ptr).value.lval;
  _zval_ptr_dtor((&retval_ptr) );
  _zval_ptr_dtor((&key1) );
  _zval_ptr_dtor((&key2) );
  return retval;
 } else {
  _zval_ptr_dtor((&key1) );
  _zval_ptr_dtor((&key2) );
  return 0;
 }
}




void zif_uksort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array_ptr, *array;
 int refcount;
 HashTable *target_hash;
 zval *func_name;
 zval **old_compare_func; zend_fcall_info_cache old_user_compare_fci_cache;


 old_compare_func = (basic_globals.user_compare_func_name); old_user_compare_fci_cache = (basic_globals.user_compare_fci_cache); (basic_globals.user_compare_fci_cache) = empty_fcall_info_cache;;

 if ((ht) != 2 || zend_get_parameters_ex(2, &array_ptr, &(basic_globals.user_compare_func_name)) == -1) {
  (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
  { zend_wrong_param_count(); return; };
 }
 array = *array_ptr;
 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;

  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (!zend_is_callable(*(basic_globals.user_compare_func_name), 0, ((void*)0))) { php_error_docref0(((void*)0) , (1<<1L), "Invalid comparison function"); (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func; { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; }; }
 func_name = *(basic_globals.user_compare_func_name);
 (basic_globals.user_compare_func_name) = &func_name;
 (basic_globals.user_compare_fci_cache).initialized = 0;







 array->is_ref = 0;
 refcount = array->refcount;

 if (zend_hash_sort(target_hash, zend_qsort, array_user_key_compare, 0 ) == -1) {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 } else {
  if (refcount > array->refcount) {
   php_error_docref0(((void*)0) , (1<<1L), "Array was modified by the user comparison function");
   { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
  } else {
   { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); };
  }
 }

 if (array->refcount > 1) {
  array->is_ref = 1;
 }

 (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;
}




void zif_end(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "Passed variable is not an array or object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 zend_hash_internal_pointer_end_ex(target_hash, ((void*)0));

 if (return_value_used) {
  if (zend_hash_get_current_data_ex(target_hash, (void **) &entry, ((void*)0)) == -1) {
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*entry); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**entry).type = 0; }; } _zval_ptr_dtor((&*entry) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
 }
}




void zif_prev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "Passed variable is not an array or object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 zend_hash_move_backwards_ex(target_hash, ((void*)0));

 if (return_value_used) {
  if (zend_hash_get_current_data_ex(target_hash, (void **) &entry, ((void*)0)) == -1) {
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*entry); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**entry).type = 0; }; } _zval_ptr_dtor((&*entry) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
 }
}




void zif_next(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "Passed variable is not an array or object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 zend_hash_move_forward_ex(target_hash, ((void*)0));

 if (return_value_used) {
  if (zend_hash_get_current_data_ex(target_hash, (void **) &entry, ((void*)0)) == -1) {
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*entry); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**entry).type = 0; }; } _zval_ptr_dtor((&*entry) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
 }
}




void zif_reset(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "Passed variable is not an array or object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 zend_hash_internal_pointer_reset_ex(target_hash, ((void*)0));

 if (return_value_used) {
  if (zend_hash_get_current_data_ex(target_hash, (void **) &entry, ((void*)0)) == -1) {
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }

  { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*entry); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**entry).type = 0; }; } _zval_ptr_dtor((&*entry) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
 }
}




void zif_current(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "Passed variable is not an array or object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 if (zend_hash_get_current_data_ex(target_hash, (void **) &entry, ((void*)0)) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 { { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*entry); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**entry).type = 0; }; } _zval_ptr_dtor((&*entry) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; }; return; };
}




void zif_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array;
 char *string_key;
 uint string_length;
 ulong num_key;
 HashTable *target_hash;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "Passed variable is not an array or object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 switch (zend_hash_get_current_key_ex(target_hash, &string_key, &string_length, &num_key, 0, ((void*)0))) {
  case 1:
   { char *__s=(string_key); int __l=string_length - 1; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
   break;
  case 2:
   { (*return_value).type = 1; (*return_value).value.lval = num_key; };
   break;
  case 3:
   return;
 }
}




void zif_min(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 int argc=(ht);
 zval **result;

 if (argc<=0) {
  php_error_docref0(((void*)0) , (1<<1L), "At least one value should be passed");
  { { (*return_value).type = 0; }; return;};
 }
 set_compare_func(0 );
 if (argc == 1) {
  zval **arr;

  if (zend_get_parameters_ex(1, &arr) == -1 || (**arr).type != 4) {
   { zend_wrong_param_count(); return; };
  }
  if (zend_hash_minmax((**arr).value.ht, array_data_compare, 0, (void **) &result ) == 0) {
   { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*result); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**result).type = 0; }; } _zval_ptr_dtor((&*result) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Array must contain at least one element");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
 } else {
  zval ***args = (zval ***) _safe_emalloc((sizeof(zval **)), ((ht)), (0) );
  zval **min, result;
  int i;

  if (_zend_get_parameters_array_ex((ht), args )==-1) {
   _efree((args) );
   { zend_wrong_param_count(); return; };
  }

  min = args[0];

  for (i=1; i<(ht); i++) {
   is_smaller_function(&result, *args[i], *min );
   if ((result).value.lval == 1) {
    min = args[i];
   }
  }

  { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*min); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**min).type = 0; }; } _zval_ptr_dtor((&*min) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };

  _efree((args) );
 }
}




void zif_max(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 int argc=(ht);
 zval **result;

 if (argc<=0) {
  php_error_docref0(((void*)0) , (1<<1L), "At least one value should be passed");
  { { (*return_value).type = 0; }; return;};
 }
 set_compare_func(0 );
 if (argc == 1) {
  zval **arr;

  if (zend_get_parameters_ex(1, &arr) == -1 || (**arr).type != 4) {
   { zend_wrong_param_count(); return; };
  }
  if (zend_hash_minmax((**arr).value.ht, array_data_compare, 1, (void **) &result ) == 0) {
   { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*result); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**result).type = 0; }; } _zval_ptr_dtor((&*result) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Array must contain at least one element");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
 } else {
  zval ***args = (zval ***) _safe_emalloc((sizeof(zval **)), ((ht)), (0) );
  zval **max, result;
  int i;

  if (_zend_get_parameters_array_ex((ht), args ) == -1) {
   _efree((args) );
   { zend_wrong_param_count(); return; };
  }

  max = args[0];

  for (i=1; i<(ht); i++) {
   is_smaller_or_equal_function(&result, *args[i], *max );
   if ((result).value.lval == 0) {
    max = args[i];
   }
  }

  { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*max); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**max).type = 0; }; } _zval_ptr_dtor((&*max) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
  _efree((args) );
 }
}


static int php_array_walk(HashTable *target_hash, zval **userdata, int recursive )
{
 zval **args[3],
    *retval_ptr,
    *key=((void*)0);
 char *string_key;
 uint string_key_len;
 ulong num_key;
 HashPosition pos;
 zend_fcall_info_cache array_walk_fci_cache = empty_fcall_info_cache;


 args[1] = &key;
 args[2] = userdata;
 if (userdata) {
  (*userdata)->refcount++;
 }

 zend_hash_internal_pointer_reset_ex(target_hash, &pos);


 while (!(executor_globals.exception) && zend_hash_get_current_data_ex(target_hash, (void **)&args[0], &pos) == 0) {
  if (recursive && (**args[0]).type == 4) {
   HashTable *thash;

   if (!((*args[0])->is_ref)) { { zval *orig_ptr = *(args[0]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[0])) = (zval *) _emalloc((sizeof(zval)) ); **(args[0]) = *orig_ptr; _zval_copy_ctor((*(args[0])) ); (*(args[0]))->refcount=1; (*(args[0]))->is_ref = 0; } }; };
   thash = ((**(args[0])).type==4 ? (**(args[0])).value.ht : (((**(args[0])).type==5 ? (**(args[0])).value.obj.handlers->get_properties((*(args[0])) ) : ((void*)0))));
   if (thash->nApplyCount > 1) {
    php_error_docref0(((void*)0) , (1<<1L), "recursion detected");
    if (userdata) {
     _zval_ptr_dtor((userdata) );
    }
    return 0;
   }
   thash->nApplyCount++;
   php_array_walk(thash, userdata, recursive );
   thash->nApplyCount--;
  } else {
   zend_fcall_info fci;


   (key) = (zval *) _emalloc((sizeof(zval)) ); (key)->refcount = 1; (key)->is_ref = 0;;;


   if (zend_hash_get_current_key_ex(target_hash, &string_key, &string_key_len, &num_key, 0, &pos) == 2) {
    (*key).type = 1;
    (*key).value.lval = num_key;
   } else {
    { char *__s=(string_key); int __l=string_key_len-1; (key)->value.str.len = __l; (key)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (key)->type = 6; };
   }

   fci.size = sizeof(fci);
   fci.function_table = (executor_globals.function_table);
   fci.function_name = *(basic_globals.array_walk_func_name);
   fci.symbol_table = ((void*)0);
   fci.object_pp = ((void*)0);
   fci.retval_ptr_ptr = &retval_ptr;
   fci.param_count = userdata ? 3 : 2;
   fci.params = args;
   fci.no_separation = 0;


   if (zend_call_function(&fci, &array_walk_fci_cache ) == 0) {
    if (retval_ptr) {
     _zval_ptr_dtor((&retval_ptr) );
    }
   } else {
    char *func_name;

    if (zend_is_callable(*(basic_globals.array_walk_func_name), 0, &func_name)) {
     php_error_docref0(((void*)0) , (1<<1L), "Unable to call %s()", func_name);
    } else {
     php_error_docref0(((void*)0) , (1<<1L), "Unable to call %s() - function does not exist", func_name);
    }
    if (key) {
     _zval_ptr_dtor((&key) );
     key = ((void*)0);
    }
    _efree((func_name) );
    break;
   }
  }

  if (key) {
   _zval_ptr_dtor((&key) );
   key = ((void*)0);
  }
  zend_hash_move_forward_ex(target_hash, &pos);
 }

 if (userdata) {
  _zval_ptr_dtor((userdata) );
 }
 return 0;
}




void zif_array_walk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array,
   *userdata = ((void*)0),
   *tmp,
   **old_walk_func_name;
 HashTable *target_hash;

 old_walk_func_name = (basic_globals.array_walk_func_name);
 if (zend_parse_parameters((ht) , "zz/|z/", &array, &tmp, &userdata) == -1) {
  return;
 }
 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 if ((*tmp).type != 4 && (*tmp).type != 6) {
  php_error_docref0(((void*)0) , (1<<1L), "Wrong syntax for function name");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 } else {
  (basic_globals.array_walk_func_name) = &tmp;
 }
 php_array_walk(target_hash, userdata ? &userdata: ((void*)0), 0 );
 (basic_globals.array_walk_func_name) = old_walk_func_name;
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_array_walk_recursive(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array,
   *userdata = ((void*)0),
   *tmp,
   **old_walk_func_name;
 HashTable *target_hash;

 old_walk_func_name = (basic_globals.array_walk_func_name);
 if (zend_parse_parameters((ht) , "zz/|z/", &array, &tmp, &userdata) == -1) {
  return;
 }
 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 if ((*tmp).type != 4 && (*tmp).type != 6) {
  php_error_docref0(((void*)0) , (1<<1L), "Wrong syntax for function name");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 } else {
  (basic_globals.array_walk_func_name) = &tmp;
 }
 php_array_walk(target_hash, userdata ? &userdata : ((void*)0), 1 );
 (basic_globals.array_walk_func_name) = old_walk_func_name;
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}






static void php_search_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int behavior)
{
  zval **value,
   **array,
   **strict,
   **entry,
    res;
 HashTable *target_hash;
 HashPosition pos;
    ulong num_key;
 uint str_key_len;
    char *string_key;
 int (*is_equal_func)(zval *, zval *, zval * ) = is_equal_function;

 if ((ht) < 2 || (ht) > 3 ||
  zend_get_parameters_ex((ht), &value, &array, &strict) == -1) {
  { zend_wrong_param_count(); return; };
 }


 if ((**array).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "Wrong datatype for second argument");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((ht) == 3) {
  if ((*strict)->type!=3) { if (!((*strict)->is_ref)) { { zval *orig_ptr = *(strict); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(strict)) = (zval *) _emalloc((sizeof(zval)) ); **(strict) = *orig_ptr; _zval_copy_ctor((*(strict)) ); (*(strict))->refcount=1; (*(strict))->is_ref = 0; } }; }; convert_to_boolean(*strict); };
  if ((**strict).value.lval) {
   is_equal_func = is_identical_function;
  }
 }

 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 zend_hash_internal_pointer_reset_ex(target_hash, &pos);
 while (zend_hash_get_current_data_ex(target_hash, (void **)&entry, &pos) == 0) {
   is_equal_func(&res, *value, *entry );
  if ((res).value.lval) {
   if (behavior == 0) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
   } else {

    switch (zend_hash_get_current_key_ex(target_hash, &string_key, &str_key_len, &num_key, 0, &pos)) {
     case 1:
      { { char *__s=(string_key); int __l=str_key_len-1; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
      break;
     case 2:
      { { (*return_value).type = 1; (*return_value).value.lval = num_key; }; return; };
      break;
    }
   }
  }

  zend_hash_move_forward_ex(target_hash, &pos);
 }

 { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
}




void zif_in_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_search_array(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_array_search(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_search_array(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}


static int php_valid_var_name(char *var_name, int len)
{
 int i, ch;

 if (!var_name)
  return 0;


 ch = (int)((unsigned char *)var_name)[0];
 if (var_name[0] != '_' &&
  (ch < 65 || ch > 90) &&
  (ch < 97 || ch > 122) &&
  (ch < 127 || ch > 255)
 ) {
  return 0;
 }


 if (len > 1) {
  for (i = 1; i < len; i++) {
   ch = (int)((unsigned char *)var_name)[i];
   if (var_name[i] != '_' &&
    (ch < 48 || ch > 57) &&
    (ch < 65 || ch > 90) &&
    (ch < 97 || ch > 122) &&
    (ch < 127 || ch > 255)
   ) {
    return 0;
   }
  }
 }
 return 1;
}




void zif_extract(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **var_array, *orig_var_array, **z_extract_type, **prefix;
 zval **entry, *data;
 char *var_name;
 smart_str final_name = {0};
 ulong num_key;
 uint var_name_len;
 int var_exists, extract_type, key_type, count = 0;
 int extract_refs = 0;
 HashPosition pos;

 switch ((ht)) {
  case 1:
   if (zend_get_parameters_ex(1, &var_array) == -1) {
    { zend_wrong_param_count(); return; };
   }
   extract_type = 0;
   break;

  case 2:
   if (zend_get_parameters_ex(2, &var_array, &z_extract_type) == -1) {
    { zend_wrong_param_count(); return; };
   }
   if ((*z_extract_type)->type!=1) { if (!((*z_extract_type)->is_ref)) { { zval *orig_ptr = *(z_extract_type); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(z_extract_type)) = (zval *) _emalloc((sizeof(zval)) ); **(z_extract_type) = *orig_ptr; _zval_copy_ctor((*(z_extract_type)) ); (*(z_extract_type))->refcount=1; (*(z_extract_type))->is_ref = 0; } }; }; convert_to_long(*z_extract_type); };
   extract_type = (**z_extract_type).value.lval;
   extract_refs = (extract_type & 0x100);
   extract_type &= 0xff;
   if (extract_type > 1 && extract_type <= 5) {
    php_error_docref0(((void*)0) , (1<<1L), "Prefix expected to be specified");
    return;
   }
   break;

  case 3:
   if (zend_get_parameters_ex(3, &var_array, &z_extract_type, &prefix) == -1) {
    { zend_wrong_param_count(); return; };
   }
   if ((*z_extract_type)->type!=1) { if (!((*z_extract_type)->is_ref)) { { zval *orig_ptr = *(z_extract_type); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(z_extract_type)) = (zval *) _emalloc((sizeof(zval)) ); **(z_extract_type) = *orig_ptr; _zval_copy_ctor((*(z_extract_type)) ); (*(z_extract_type))->refcount=1; (*(z_extract_type))->is_ref = 0; } }; }; convert_to_long(*z_extract_type); };
   extract_type = (**z_extract_type).value.lval;
   extract_refs = (extract_type & 0x100);
   extract_type &= 0xff;
   if ((*prefix)->type!=6) { if (!((*prefix)->is_ref)) { { zval *orig_ptr = *(prefix); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(prefix)) = (zval *) _emalloc((sizeof(zval)) ); **(prefix) = *orig_ptr; _zval_copy_ctor((*(prefix)) ); (*(prefix))->refcount=1; (*(prefix))->is_ref = 0; } }; }; if ((*prefix)->type != 6) { _convert_to_string((*prefix) ); }; };
   break;

  default:
   { zend_wrong_param_count(); return; };
   break;
 }

 if (extract_type < 0 || extract_type > 6) {
  php_error_docref0(((void*)0) , (1<<1L), "Unknown extract type");
  return;
 }

 if ((**var_array).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "First argument should be an array");
  return;
 }




 if (!extract_refs) {
  orig_var_array = *var_array;
  if ((((*var_array))->is_ref)) { zval *original_var = (*var_array); ((*var_array)) = (zval *) _emalloc((sizeof(zval)) ); (*var_array)->value = original_var->value; (*var_array)->type = original_var->type; (*var_array)->is_ref = 0; (*var_array)->refcount = 1; _zval_copy_ctor(((*var_array)) ); } else { (*var_array)->refcount++; };
 }

 zend_hash_internal_pointer_reset_ex((**var_array).value.ht, &pos);
 while (zend_hash_get_current_data_ex((**var_array).value.ht, (void **)&entry, &pos) == 0) {
  key_type = zend_hash_get_current_key_ex((**var_array).value.ht, &var_name, &var_name_len, &num_key, 0, &pos);
  var_exists = 0;

  if (key_type == 1) {
   var_name_len--;
   var_exists = zend_hash_exists((executor_globals.active_symbol_table), var_name, var_name_len + 1);
  } else if (extract_type == 3 || extract_type == 4) {
   do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((**prefix).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((**prefix).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((**prefix).value.str.val)), (((**prefix).value.str.len))); __dest->len = __nl; } while (0);
   do { register size_t __nl; do { if (!(((&final_name)))->c) { (((&final_name)))->len = 0; __nl = (1); (((&final_name)))->a = __nl < 78 ? 78 : __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } else { __nl = (((&final_name)))->len + (1); if (__nl >= (((&final_name)))->a) { (((&final_name)))->a = __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } } } while (0); ((&final_name))->len = __nl; ((unsigned char *) ((&final_name))->c)[((&final_name))->len - 1] = (('_')); } while (0);
   do { char __b[32]; char *__t; do { if ((((num_key))) < 0) { do { char *__p = ((__b + sizeof(__b) - 1)); unsigned long __num = (-((((num_key))))); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (__t) = __p; } while (0); *--(__t) = '-'; } else { do { char *__p = ((__b + sizeof(__b) - 1)); unsigned long __num = (((((num_key))))); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (__t) = __p; } while (0); } } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((((&final_name)))); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((((0))))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((((0))))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->len = __nl; } while (0); } while (0);
  } else {
   zend_hash_move_forward_ex((**var_array).value.ht, &pos);
   continue;
  }

  switch (extract_type) {
   case 6:
    if (!var_exists) break;


   case 0:

     if (var_exists && var_name_len == sizeof("GLOBALS") && !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (var_name) && __builtin_constant_p ("GLOBALS") && (__s1_len = __builtin_strlen (var_name), __s2_len = __builtin_strlen ("GLOBALS"), (!((size_t)(const void *)((var_name) + 1) - (size_t)(const void *)(var_name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("GLOBALS") + 1) - (size_t)(const void *)("GLOBALS") == 1) || __s2_len >= 4)) ? __builtin_strcmp (var_name, "GLOBALS") : (__builtin_constant_p (var_name) && ((size_t)(const void *)((var_name) + 1) - (size_t)(const void *)(var_name) == 1) && (__s1_len = __builtin_strlen (var_name), __s1_len < 4) ? (__builtin_constant_p ("GLOBALS") && ((size_t)(const void *)(("GLOBALS") + 1) - (size_t)(const void *)("GLOBALS") == 1) ? __builtin_strcmp (var_name, "GLOBALS") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("GLOBALS"); int __result = (((const unsigned char *) (const char *) (var_name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (var_name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (var_name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (var_name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("GLOBALS") && ((size_t)(const void *)(("GLOBALS") + 1) - (size_t)(const void *)("GLOBALS") == 1) && (__s2_len = __builtin_strlen ("GLOBALS"), __s2_len < 4) ? (__builtin_constant_p (var_name) && ((size_t)(const void *)((var_name) + 1) - (size_t)(const void *)(var_name) == 1) ? __builtin_strcmp (var_name, "GLOBALS") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (var_name); int __result = (((const unsigned char *) (const char *) ("GLOBALS"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("GLOBALS"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("GLOBALS"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("GLOBALS"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (var_name, "GLOBALS")))); })) {
      break;
     }
    if (var_exists && var_name_len == sizeof("this") && !__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (var_name) && __builtin_constant_p ("this") && (__s1_len = __builtin_strlen (var_name), __s2_len = __builtin_strlen ("this"), (!((size_t)(const void *)((var_name) + 1) - (size_t)(const void *)(var_name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("this") + 1) - (size_t)(const void *)("this") == 1) || __s2_len >= 4)) ? __builtin_strcmp (var_name, "this") : (__builtin_constant_p (var_name) && ((size_t)(const void *)((var_name) + 1) - (size_t)(const void *)(var_name) == 1) && (__s1_len = __builtin_strlen (var_name), __s1_len < 4) ? (__builtin_constant_p ("this") && ((size_t)(const void *)(("this") + 1) - (size_t)(const void *)("this") == 1) ? __builtin_strcmp (var_name, "this") : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("this"); int __result = (((const unsigned char *) (const char *) (var_name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (var_name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (var_name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (var_name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("this") && ((size_t)(const void *)(("this") + 1) - (size_t)(const void *)("this") == 1) && (__s2_len = __builtin_strlen ("this"), __s2_len < 4) ? (__builtin_constant_p (var_name) && ((size_t)(const void *)((var_name) + 1) - (size_t)(const void *)(var_name) == 1) ? __builtin_strcmp (var_name, "this") : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (var_name); int __result = (((const unsigned char *) (const char *) ("this"))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("this"))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("this"))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("this"))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (var_name, "this")))); }) && (executor_globals.scope) && (executor_globals.scope)->name_length != 0) {
     break;
    }
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);
    break;

   case 5:
    if (var_exists) {
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((**prefix).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((**prefix).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((**prefix).value.str.val)), (((**prefix).value.str.len))); __dest->len = __nl; } while (0);
     do { register size_t __nl; do { if (!(((&final_name)))->c) { (((&final_name)))->len = 0; __nl = (1); (((&final_name)))->a = __nl < 78 ? 78 : __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } else { __nl = (((&final_name)))->len + (1); if (__nl >= (((&final_name)))->a) { (((&final_name)))->a = __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } } } while (0); ((&final_name))->len = __nl; ((unsigned char *) ((&final_name))->c)[((&final_name))->len - 1] = (('_')); } while (0);
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);
    }
    break;

   case 2:
    if (!var_exists)
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);


   case 3:
    if (final_name.len == 0 && var_name_len != 0) {
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((**prefix).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((**prefix).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((**prefix).value.str.val)), (((**prefix).value.str.len))); __dest->len = __nl; } while (0);
     do { register size_t __nl; do { if (!(((&final_name)))->c) { (((&final_name)))->len = 0; __nl = (1); (((&final_name)))->a = __nl < 78 ? 78 : __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } else { __nl = (((&final_name)))->len + (1); if (__nl >= (((&final_name)))->a) { (((&final_name)))->a = __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } } } while (0); ((&final_name))->len = __nl; ((unsigned char *) ((&final_name))->c)[((&final_name))->len - 1] = (('_')); } while (0);
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);
    }
    break;

   case 4:
    if (final_name.len == 0) {
     if (!php_valid_var_name(var_name, var_name_len)) {
      do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = ((((**prefix).value.str.len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + ((((**prefix).value.str.len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (((**prefix).value.str.val)), (((**prefix).value.str.len))); __dest->len = __nl; } while (0);
      do { register size_t __nl; do { if (!(((&final_name)))->c) { (((&final_name)))->len = 0; __nl = (1); (((&final_name)))->a = __nl < 78 ? 78 : __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } else { __nl = (((&final_name)))->len + (1); if (__nl >= (((&final_name)))->a) { (((&final_name)))->a = __nl + 128; (((&final_name)))->c = (((((0))))?__zend_realloc((((((&final_name)))->c)), (((((&final_name)))->a + 1))):_erealloc(((((((&final_name)))->c))), ((((((&final_name)))->a + 1))), 0 )); } } } while (0); ((&final_name))->len = __nl; ((unsigned char *) ((&final_name))->c)[((&final_name))->len - 1] = (('_')); } while (0);
      do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);
     } else
      do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);
    }
    break;

   default:
    if (!var_exists)
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&final_name)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((var_name_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((var_name_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((var_name)), ((var_name_len))); __dest->len = __nl; } while (0);
    break;
  }

  if (final_name.len) {
   do { if ((&final_name)->c) { (&final_name)->c[(&final_name)->len] = '\0'; } } while (0);
   if (php_valid_var_name(final_name.c, final_name.len)) {
    if (extract_refs) {
     zval **orig_var;

     if (!((*entry)->is_ref)) { { zval *orig_ptr = *(entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(entry)) = (zval *) _emalloc((sizeof(zval)) ); **(entry) = *orig_ptr; _zval_copy_ctor((*(entry)) ); (*(entry))->refcount=1; (*(entry))->is_ref = 0; } }; (*(entry))->is_ref = 1; };
     zval_add_ref(entry);

     if (zend_hash_find((executor_globals.active_symbol_table), final_name.c, final_name.len+1, (void **) &orig_var) == 0) {
      _zval_ptr_dtor((orig_var) );
      *orig_var = *entry;
     } else {
      _zend_hash_add_or_update((executor_globals.active_symbol_table), final_name.c, final_name.len+1, (void **) entry, sizeof(zval *), ((void*)0), (1<<0) );
     }
    } else {
     (data) = (zval *) _emalloc((sizeof(zval)) ); (data)->refcount = 1; (data)->is_ref = 0;;;
     *data = **entry;
     _zval_copy_ctor((data) );

     { zval **orig_var; if (zend_hash_find((executor_globals.active_symbol_table), (final_name.c), (final_name.len+1), (void **) &orig_var)==0 && ((*orig_var)->is_ref)) { (data)->refcount = (*orig_var)->refcount; (data)->is_ref = 1; if (1) { (data)->refcount += 1 -1; } _zval_dtor((*orig_var) ); **orig_var = *(data); _efree((data) ); } else { (data)->is_ref = 0; if (1) { (data)->refcount = 1; } _zend_hash_add_or_update((executor_globals.active_symbol_table), (final_name.c), (final_name.len+1), &(data), sizeof(zval *), ((void*)0), (1<<0) ); } };
    }

    count++;
   }
   final_name.len = 0;
  }

  zend_hash_move_forward_ex((**var_array).value.ht, &pos);
 }

 if (!extract_refs) {
  _zval_ptr_dtor((var_array) );
  *var_array = orig_var_array;
 }
 do { smart_str *__s = (smart_str *) ((&final_name)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);

 { { (*return_value).type = 1; (*return_value).value.lval = count; }; return; };
}


static void php_compact_var(HashTable *eg_active_symbol_table, zval *return_value, zval *entry)
{
 zval **value_ptr, *value, *data;

 if ((*entry).type == 6) {
  if (zend_hash_find(eg_active_symbol_table, (*entry).value.str.val,
         (*entry).value.str.len+1, (void **)&value_ptr) != -1) {
   value = *value_ptr;
   (data) = (zval *) _emalloc((sizeof(zval)) );
   *data = *value;
   _zval_copy_ctor((data) );
   (data)->refcount = 1; (data)->is_ref = 0;;

   _zend_hash_add_or_update((*return_value).value.ht, (*entry).value.str.val, (*entry).value.str.len+1, &data, sizeof(zval *), ((void*)0), (1<<0) );

  }
 }
 else if ((*entry).type == 4) {
  HashPosition pos;

  zend_hash_internal_pointer_reset_ex((*entry).value.ht, &pos);
  while (zend_hash_get_current_data_ex((*entry).value.ht, (void**)&value_ptr, &pos) == 0) {
   value = *value_ptr;

   php_compact_var(eg_active_symbol_table, return_value, value);
   zend_hash_move_forward_ex((*entry).value.ht, &pos);
  }
 }
}




void zif_compact(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***args;
 int i;

 if ((ht) < 1) {
  { zend_wrong_param_count(); return; };
 }
 args = (zval ***)_safe_emalloc(((ht)), (sizeof(zval **)), (0) );

 if (_zend_get_parameters_array_ex((ht), args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }

 _array_init((return_value) );

 for (i=0; i<(ht); i++) {
  php_compact_var((executor_globals.active_symbol_table), return_value, *args[i]);
 }

 _efree((args) );
}




void zif_array_fill(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **start_key, **num, **val, *newval;
 long i;

 if ((ht) != 3 || zend_get_parameters_ex(3, &start_key, &num, &val) == -1) {
  { zend_wrong_param_count(); return; };
 }

 switch ((**start_key).type) {
  case 6:
  case 1:
  case 2:

   _array_init((return_value) );

   if (((*val)->is_ref)) {
    { zval *orig_ptr = *(val); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(val)) = (zval *) _emalloc((sizeof(zval)) ); **(val) = *orig_ptr; _zval_copy_ctor((*(val)) ); (*(val))->refcount=1; (*(val))->is_ref = 0; } };
   }
   if ((*start_key)->type!=1) { if (!((*start_key)->is_ref)) { { zval *orig_ptr = *(start_key); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(start_key)) = (zval *) _emalloc((sizeof(zval)) ); **(start_key) = *orig_ptr; _zval_copy_ctor((*(start_key)) ); (*(start_key))->refcount=1; (*(start_key))->is_ref = 0; } }; }; convert_to_long(*start_key); };
   zval_add_ref(val);
   _zend_hash_index_update_or_next_insert((*return_value).value.ht, (**start_key).value.lval, val, sizeof(val), ((void*)0), (1<<0) );
   break;
  default:
   php_error_docref0(((void*)0) , (1<<1L), "Wrong data type for start key");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   break;
 }

 if ((*num)->type!=1) { if (!((*num)->is_ref)) { { zval *orig_ptr = *(num); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(num)) = (zval *) _emalloc((sizeof(zval)) ); **(num) = *orig_ptr; _zval_copy_ctor((*(num)) ); (*(num))->refcount=1; (*(num))->is_ref = 0; } }; }; convert_to_long(*num); };
 i = (**num).value.lval - 1;
 if (i < 0) {
  zend_hash_destroy((*return_value).value.ht);
  _efree(((*return_value).value.ht) );
  php_error_docref0(((void*)0) , (1<<1L), "Number of elements must be positive");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 newval = *val;
 while (i--) {
  zval_add_ref(&newval);
  _zend_hash_index_update_or_next_insert((*return_value).value.ht, 0, &newval, sizeof(zval *), ((void*)0), (1<<2) );
 }
}




void zif_array_fill_keys(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *keys, *val, **entry;
 HashPosition pos;

 if (zend_parse_parameters((ht) , "az", &keys, &val) == -1) {
  return;
 }


 _array_init((return_value) );

 zend_hash_internal_pointer_reset_ex((*keys).value.ht, &pos);
 while (zend_hash_get_current_data_ex((*keys).value.ht, (void **)&entry, &pos) == 0) {

  if ((**entry).type == 1) {
   zval_add_ref(&val);
   _zend_hash_index_update_or_next_insert((*return_value).value.ht, (**entry).value.lval, &val, sizeof(zval *), ((void*)0), (1<<0) );
  } else {
   zval key, *key_ptr = *entry;

   if ((**entry).type != 6) {
    key = **entry;
    _zval_copy_ctor((&key) );
    if ((&key)->type != 6) { _convert_to_string((&key) ); };
    key_ptr = &key;
   }

   zval_add_ref(&val);
   zend_symtable_update((*return_value).value.ht, (*key_ptr).value.str.val, (*key_ptr).value.str.len + 1, &val, sizeof(zval *), ((void*)0));

   if (key_ptr != *entry) {
    _zval_dtor((&key) );
   }
  }

  zend_hash_move_forward_ex((*keys).value.ht, &pos);
 }
}




void zif_range(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *zlow, *zhigh, *zstep = ((void*)0);
 int err = 0, is_step_double = 0;
 double step = 1.0;

 if (zend_parse_parameters((ht) , "z/z/|z/", &zlow, &zhigh, &zstep) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (zstep) {
  if ((*zstep).type == 2 || ((*zstep).type == 6 && is_numeric_string((*zstep).value.str.val, (*zstep).value.str.len, ((void*)0), ((void*)0), 0) == 2)) {
   is_step_double = 1;
  }

  if ((*&zstep)->type!=2) { if (!((*&zstep)->is_ref)) { { zval *orig_ptr = *(&zstep); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(&zstep)) = (zval *) _emalloc((sizeof(zval)) ); **(&zstep) = *orig_ptr; _zval_copy_ctor((*(&zstep)) ); (*(&zstep))->refcount=1; (*(&zstep))->is_ref = 0; } }; }; convert_to_double(*&zstep); };
  step = (*zstep).value.dval;


  if (step < 0.0) {
   step *= -1;
  }
 }


 _array_init((return_value) );


 if ((*zlow).type == 6 && (*zhigh).type == 6 && (*zlow).value.str.len >= 1 && (*zhigh).value.str.len >= 1) {
  int type1, type2;
  unsigned char *low, *high;
  long lstep = (long) step;

  type1 = is_numeric_string((*zlow).value.str.val, (*zlow).value.str.len, ((void*)0), ((void*)0), 0);
  type2 = is_numeric_string((*zhigh).value.str.val, (*zhigh).value.str.len, ((void*)0), ((void*)0), 0);

  if (type1 == 2 || type2 == 2 || is_step_double) {
   goto double_str;
  } else if (type1 == 1 || type2 == 1) {
   goto long_str;
  }

  if ((zlow)->type != 6) { _convert_to_string((zlow) ); };
  if ((zhigh)->type != 6) { _convert_to_string((zhigh) ); };
  low = (unsigned char *)(*zlow).value.str.val;
  high = (unsigned char *)(*zhigh).value.str.val;

  if (*low > *high) {
   if (lstep <= 0) {
    err = 1;
    goto err;
   }
   for (; *low >= *high; (*low) -= (unsigned int)lstep) {
    add_next_index_stringl(return_value, low, 1, 1);
    if (((signed int)*low - lstep) < 0) {
     break;
    }
   }
  } else if (*high > *low) {
   if (lstep <= 0) {
    err = 1;
    goto err;
   }
   for (; *low <= *high; (*low) += (unsigned int)lstep) {
    add_next_index_stringl(return_value, low, 1, 1);
    if (((signed int)*low + lstep) > 255) {
     break;
    }
   }
  } else {
   add_next_index_stringl(return_value, low, 1, 1);
  }

 } else if ((*zlow).type == 2 || (*zhigh).type == 2 || is_step_double) {
  double low, high;
double_str:
  convert_to_double(zlow);
  convert_to_double(zhigh);
  low = (*zlow).value.dval;
  high = (*zhigh).value.dval;

  if (low > high) {
   if (low - high < step || step <= 0) {
    err = 1;
    goto err;
   }
   for (; low >= (high - 0.000000000000001); low -= step) {
    add_next_index_double(return_value, low);
   }
  } else if (high > low) {
   if (high - low < step || step <= 0) {
    err = 1;
    goto err;
   }
   for (; low <= (high + 0.000000000000001); low += step) {
    add_next_index_double(return_value, low);
   }
  } else {
   add_next_index_double(return_value, low);
  }
 } else {
  double low, high;
  long lstep;
long_str:
  convert_to_double(zlow);
  convert_to_double(zhigh);
  low = (*zlow).value.dval;
  high = (*zhigh).value.dval;
  lstep = (long) step;

  if (low > high) {
   if (low - high < lstep || lstep <= 0) {
    err = 1;
    goto err;
   }
   for (; low >= high; low -= lstep) {
    add_next_index_long(return_value, (long)low);
   }
   } else if (high > low) {
   if (high - low < lstep || lstep <= 0) {
    err = 1;
    goto err;
   }
   for (; low <= high; low += lstep) {
    add_next_index_long(return_value, (long)low);
   }
  } else {
   add_next_index_long(return_value, (long)low);
  }
 }
err:
 if (err) {
  php_error_docref0(((void*)0) , (1<<1L), "step exceeds the specified range");
  _zval_dtor((return_value) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}


static void array_data_shuffle(zval *array )
{
 Bucket **elems, *temp;
 HashTable *hash;
 int j, n_elems, rnd_idx, n_left;

 n_elems = zend_hash_num_elements((*array).value.ht);

 if (n_elems < 1) {
  return;
 }

 elems = (Bucket **)_safe_emalloc((n_elems), (sizeof(Bucket *)), (0) );
 hash = (*array).value.ht;
 n_left = n_elems;

 for (j = 0, temp = hash->pListHead; temp; temp = temp->pListNext)
  elems[j++] = temp;
 while (--n_left) {
  rnd_idx = php_rand();
  (rnd_idx) = (0) + (long) ((double) ( (double) (n_left) - (0) + 1.0) * ((rnd_idx) / ((2147483647) + 1.0)));
  if (rnd_idx != n_left) {
   temp = elems[n_left];
   elems[n_left] = elems[rnd_idx];
   elems[rnd_idx] = temp;
  }
 }

 if (zend_block_interruptions) { zend_block_interruptions(); };
 hash->pListHead = elems[0];
 hash->pListTail = ((void*)0);
 hash->pInternalPointer = hash->pListHead;

 for (j = 0; j < n_elems; j++) {
  if (hash->pListTail) {
   hash->pListTail->pListNext = elems[j];
  }
  elems[j]->pListLast = hash->pListTail;
  elems[j]->pListNext = ((void*)0);
  hash->pListTail = elems[j];
 }
 temp = hash->pListHead;
 j = 0;
 while (temp != ((void*)0)) {
  temp->nKeyLength = 0;
  temp->h = j++;
  temp = temp->pListNext;
 }
 hash->nNextFreeElement = n_elems;
 zend_hash_rehash(hash);
 if (zend_unblock_interruptions) { zend_unblock_interruptions(); };

 _efree((elems) );
}




void zif_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array;

 if (zend_parse_parameters((ht) , "a", &array) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 array_data_shuffle(array );

 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}


HashTable* php_splice(HashTable *in_hash, int offset, int length, zval ***list, int list_count, HashTable **removed)
{
 HashTable *out_hash = ((void*)0);
 int num_in,
     pos,
     i;
 Bucket *p;
 zval *entry;


 if (!in_hash)
  return ((void*)0);


 num_in = zend_hash_num_elements(in_hash);


 if (offset > num_in)
  offset = num_in;
 else if (offset < 0 && (offset = (num_in + offset)) < 0)
  offset = 0;


 if (length < 0) {
  length = num_in - offset + length;
 } else if (((unsigned)offset + (unsigned)length) > (unsigned)num_in) {
  length = num_in - offset;
 }


 (out_hash) = (HashTable *) _emalloc((sizeof(HashTable)) );
 _zend_hash_init((out_hash), (0), (((void*)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );


 for (pos=0, p=in_hash->pListHead; pos<offset && p ; pos++, p=p->pListNext) {

  entry = *((zval **)p->pData);
  entry->refcount++;


  if (p->nKeyLength)
   _zend_hash_quick_add_or_update(out_hash, p->arKey, p->nKeyLength, p->h, &entry, sizeof(zval *), ((void*)0), (1<<0) );
  else
   _zend_hash_index_update_or_next_insert(out_hash, 0, &entry, sizeof(zval *), ((void*)0), (1<<2) );
 }


 if (removed != ((void*)0)) {
  for ( ; pos<offset+length && p; pos++, p=p->pListNext) {
   entry = *((zval **)p->pData);
   entry->refcount++;
   if (p->nKeyLength)
    _zend_hash_quick_add_or_update(*removed, p->arKey, p->nKeyLength, p->h, &entry, sizeof(zval *), ((void*)0), (1<<0) );
   else
    _zend_hash_index_update_or_next_insert(*removed, 0, &entry, sizeof(zval *), ((void*)0), (1<<2) );
  }
 } else
  for ( ; pos<offset+length && p; pos++, p=p->pListNext);


 if (list != ((void*)0)) {

  for (i=0; i<list_count; i++) {
   entry = *list[i];
   entry->refcount++;
   _zend_hash_index_update_or_next_insert(out_hash, 0, &entry, sizeof(zval *), ((void*)0), (1<<2) );
  }
 }


 for ( ; p ; p=p->pListNext) {
  entry = *((zval **)p->pData);
  entry->refcount++;
  if (p->nKeyLength)
   _zend_hash_quick_add_or_update(out_hash, p->arKey, p->nKeyLength, p->h, &entry, sizeof(zval *), ((void*)0), (1<<0) );
  else
   _zend_hash_index_update_or_next_insert(out_hash, 0, &entry, sizeof(zval *), ((void*)0), (1<<2) );
 }

 zend_hash_internal_pointer_reset_ex(out_hash, ((void*)0));
 return out_hash;
}




void zif_array_push(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***args,
      *stack,
      *new_var;
 int i,
       argc;


 argc = (ht);
 if (argc < 2) {
  { zend_wrong_param_count(); return; };
 }


 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }


 stack = *args[0];
 if ((*stack).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "First argument should be an array");
  _efree((args) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }


 for (i=1; i<argc; i++) {
  new_var = *args[i];
  new_var->refcount++;

  if (_zend_hash_index_update_or_next_insert((*stack).value.ht, 0, &new_var, sizeof(zval *), ((void*)0), (1<<2) ) == -1) {
   new_var->refcount--;
   php_error_docref0(((void*)0) , (1<<1L), "Cannot add element to the array as the next element is already occupied");
   _efree((args) );
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
 }


 _efree((args) );
 { (*return_value).type = 1; (*return_value).value.lval = zend_hash_num_elements((*stack).value.ht); };
}



static void _phpi_pop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int off_the_end)
{
 zval **stack,
      **val;
 char *key = ((void*)0);
 uint key_len = 0;
 ulong index;


 if ((ht) != 1 || zend_get_parameters_ex(1, &stack) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**stack).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }

 if (zend_hash_num_elements((**stack).value.ht) == 0) {
  return;
 }


 if (off_the_end) {
  zend_hash_internal_pointer_end_ex((**stack).value.ht, ((void*)0));
 } else {
  zend_hash_internal_pointer_reset_ex((**stack).value.ht, ((void*)0));
 }
 zend_hash_get_current_data_ex((**stack).value.ht, (void **)&val, ((void*)0));
 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*val); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**val).type = 0; }; } _zval_ptr_dtor((&*val) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };


 zend_hash_get_current_key_ex((**stack).value.ht, &key, &key_len, &index, 0, ((void*)0));
 if (key && (**stack).value.ht == &(executor_globals.symbol_table)) {
  zend_delete_global_variable(key, key_len-1 );
 } else {
  zend_hash_del_key_or_index((**stack).value.ht, key, key_len, index, (key) ? 0 : 1);
 }


 if (!off_the_end) {
  unsigned int k = 0;
  int should_rehash = 0;
  Bucket *p = (**stack).value.ht->pListHead;
  while (p != ((void*)0)) {
   if (p->nKeyLength == 0) {
    if (p->h != k) {
     p->h = k++;
     should_rehash = 1;
    } else {
     k++;
    }
   }
   p = p->pListNext;
  }
  (**stack).value.ht->nNextFreeElement = k;
  if (should_rehash) {
   zend_hash_rehash((**stack).value.ht);
  }
 } else if (!key_len && index >= (**stack).value.ht->nNextFreeElement-1) {
  (**stack).value.ht->nNextFreeElement = (**stack).value.ht->nNextFreeElement - 1;
 }

 zend_hash_internal_pointer_reset_ex((**stack).value.ht, ((void*)0));
}




void zif_array_pop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _phpi_pop(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_array_shift(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _phpi_pop(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_array_unshift(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***args,
      *stack;
 HashTable *new_hash;
 int argc;



 argc = (ht);
 if (argc < 2) {
  { zend_wrong_param_count(); return; };
 }


 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }


 stack = *args[0];
 if ((*stack).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The first argument should be an array");
  _efree((args) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }



 new_hash = php_splice((*stack).value.ht, 0, 0, &args[1], argc-1, ((void*)0));
 zend_hash_destroy((*stack).value.ht);
 if ((*stack).value.ht == &(executor_globals.symbol_table)) {
  zend_reset_all_cv(&(executor_globals.symbol_table) );
 }
 *(*stack).value.ht = *new_hash;
 _efree((new_hash) );


 _efree((args) );
 { (*return_value).type = 1; (*return_value).value.lval = zend_hash_num_elements((*stack).value.ht); };
}




void zif_array_splice(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***args,
    *array,
  ***repl = ((void*)0);
 HashTable *new_hash = ((void*)0);
 Bucket *p;
 int argc,
    i,
    offset,
    length,
    repl_num = 0;


 argc = (ht);
 if (argc < 2 || argc > 4) {
  { zend_wrong_param_count(); return; };
 }


 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }


 array = *args[0];
 if ((*array).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The first argument should be an array");
  _efree((args) );
  return;
 }


 if ((*args[1])->type!=1) { if (!((*args[1])->is_ref)) { { zval *orig_ptr = *(args[1]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[1])) = (zval *) _emalloc((sizeof(zval)) ); **(args[1]) = *orig_ptr; _zval_copy_ctor((*(args[1])) ); (*(args[1]))->refcount=1; (*(args[1]))->is_ref = 0; } }; }; convert_to_long(*args[1]); };
 offset = (**args[1]).value.lval;
 if (argc > 2) {
  if ((*args[2])->type!=1) { if (!((*args[2])->is_ref)) { { zval *orig_ptr = *(args[2]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[2])) = (zval *) _emalloc((sizeof(zval)) ); **(args[2]) = *orig_ptr; _zval_copy_ctor((*(args[2])) ); (*(args[2]))->refcount=1; (*(args[2]))->is_ref = 0; } }; }; convert_to_long(*args[2]); };
  length = (**args[2]).value.lval;
 } else
  length = zend_hash_num_elements((*array).value.ht);

 if (argc == 4) {

  if ((*args[3])->type!=4) { if (!((*args[3])->is_ref)) { { zval *orig_ptr = *(args[3]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[3])) = (zval *) _emalloc((sizeof(zval)) ); **(args[3]) = *orig_ptr; _zval_copy_ctor((*(args[3])) ); (*(args[3]))->refcount=1; (*(args[3]))->is_ref = 0; } }; }; convert_to_array(*args[3]); };


  repl_num = zend_hash_num_elements((**args[3]).value.ht);
  repl = (zval ***)_safe_emalloc((repl_num), (sizeof(zval **)), (0) );
  for (p=(**args[3]).value.ht->pListHead, i=0; p; p=p->pListNext, i++) {
   repl[i] = ((zval **)p->pData);
  }
 }


 _array_init((return_value) );


 new_hash = php_splice((*array).value.ht, offset, length,
       repl, repl_num,
       &(*return_value).value.ht);


 zend_hash_destroy((*array).value.ht);
 if ((*array).value.ht == &(executor_globals.symbol_table)) {
  zend_reset_all_cv(&(executor_globals.symbol_table) );
 }
 *(*array).value.ht = *new_hash;
 _efree((new_hash) );


 if (argc == 4)
  _efree((repl) );
 _efree((args) );
}




void zif_array_slice(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *input,
   **z_length,
   **entry;
 long offset,
    length = 0;
 zend_bool preserve_keys = 0;
 int num_in,
    pos;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 HashPosition hpos;

 if (zend_parse_parameters((ht) , "al|Zb", &input, &offset, &z_length, &preserve_keys) == -1) {
  return;
 }


 num_in = zend_hash_num_elements((*input).value.ht);


 if ((ht) < 3 || (**z_length).type == 0) {
  length = num_in;
 } else {
  if ((*z_length)->type!=1) { if (!((*z_length)->is_ref)) { { zval *orig_ptr = *(z_length); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(z_length)) = (zval *) _emalloc((sizeof(zval)) ); **(z_length) = *orig_ptr; _zval_copy_ctor((*(z_length)) ); (*(z_length))->refcount=1; (*(z_length))->is_ref = 0; } }; }; convert_to_long(*z_length); };
  length = (**z_length).value.lval;
 }


 _array_init((return_value) );


 if (offset > num_in) {
  return;
 } else if (offset < 0 && (offset = (num_in + offset)) < 0) {
  offset = 0;
 }


 if (length < 0) {
  length = num_in - offset + length;
 } else if (((unsigned long) offset + (unsigned long) length) > (unsigned) num_in) {
  length = num_in - offset;
 }

 if (length == 0) {
  return;
 }


 pos = 0;
 zend_hash_internal_pointer_reset_ex((*input).value.ht, &hpos);
 while (pos < offset && zend_hash_get_current_data_ex((*input).value.ht, (void **)&entry, &hpos) == 0) {
  pos++;
  zend_hash_move_forward_ex((*input).value.ht, &hpos);
 }


 while (pos < offset + length && zend_hash_get_current_data_ex((*input).value.ht, (void **)&entry, &hpos) == 0) {

  zval_add_ref(entry);

  switch (zend_hash_get_current_key_ex((*input).value.ht, &string_key, &string_key_len, &num_key, 0, &hpos)) {
   case 1:
    _zend_hash_add_or_update((*return_value).value.ht, string_key, string_key_len, entry, sizeof(zval *), ((void*)0), (1<<0) );
    break;

   case 2:
    if (preserve_keys) {
     _zend_hash_index_update_or_next_insert((*return_value).value.ht, num_key, entry, sizeof(zval *), ((void*)0), (1<<0) );
    } else {
     _zend_hash_index_update_or_next_insert((*return_value).value.ht, 0, entry, sizeof(zval *), ((void*)0), (1<<2) );
    }
    break;
  }
  pos++;
  zend_hash_move_forward_ex((*input).value.ht, &hpos);
 }
}


       int php_array_merge(HashTable *dest, HashTable *src, int recursive )
{
 zval **src_entry, **dest_entry;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 HashPosition pos;

 zend_hash_internal_pointer_reset_ex(src, &pos);
 while (zend_hash_get_current_data_ex(src, (void **)&src_entry, &pos) == 0) {
  switch (zend_hash_get_current_key_ex(src, &string_key, &string_key_len, &num_key, 0, &pos)) {
   case 1:
    if (recursive && zend_hash_find(dest, string_key, string_key_len, (void **)&dest_entry) == 0) {
     HashTable *thash = ((**dest_entry).type==4 ? (**dest_entry).value.ht : (((**dest_entry).type==5 ? (**dest_entry).value.obj.handlers->get_properties((*dest_entry) ) : ((void*)0))));

     if ((thash && thash->nApplyCount > 1) || (*src_entry == *dest_entry && (*dest_entry)->is_ref && ((*dest_entry)->refcount % 2))) {
      php_error_docref0(((void*)0) , (1<<1L), "recursion detected");
      return 0;
     }
     { zval *orig_ptr = *(dest_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(dest_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(dest_entry) = *orig_ptr; _zval_copy_ctor((*(dest_entry)) ); (*(dest_entry))->refcount=1; (*(dest_entry))->is_ref = 0; } };
     { zval *orig_ptr = *(src_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(src_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(src_entry) = *orig_ptr; _zval_copy_ctor((*(src_entry)) ); (*(src_entry))->refcount=1; (*(src_entry))->is_ref = 0; } };

     if ((**dest_entry).type == 0) {
      if ((*dest_entry)->type!=4) { if (!((*dest_entry)->is_ref)) { { zval *orig_ptr = *(dest_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(dest_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(dest_entry) = *orig_ptr; _zval_copy_ctor((*(dest_entry)) ); (*(dest_entry))->refcount=1; (*(dest_entry))->is_ref = 0; } }; }; convert_to_array(*dest_entry); };
      add_next_index_null(*dest_entry);
     } else {
      if ((*dest_entry)->type!=4) { if (!((*dest_entry)->is_ref)) { { zval *orig_ptr = *(dest_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(dest_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(dest_entry) = *orig_ptr; _zval_copy_ctor((*(dest_entry)) ); (*(dest_entry))->refcount=1; (*(dest_entry))->is_ref = 0; } }; }; convert_to_array(*dest_entry); };
     }
     if ((**src_entry).type == 0) {
      if ((*src_entry)->type!=4) { if (!((*src_entry)->is_ref)) { { zval *orig_ptr = *(src_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(src_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(src_entry) = *orig_ptr; _zval_copy_ctor((*(src_entry)) ); (*(src_entry))->refcount=1; (*(src_entry))->is_ref = 0; } }; }; convert_to_array(*src_entry); };
      add_next_index_null(*src_entry);
     } else {
      if ((*src_entry)->type!=4) { if (!((*src_entry)->is_ref)) { { zval *orig_ptr = *(src_entry); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(src_entry)) = (zval *) _emalloc((sizeof(zval)) ); **(src_entry) = *orig_ptr; _zval_copy_ctor((*(src_entry)) ); (*(src_entry))->refcount=1; (*(src_entry))->is_ref = 0; } }; }; convert_to_array(*src_entry); };
     }
     if (thash) {
      thash->nApplyCount++;
     }
     if (!php_array_merge((**dest_entry).value.ht, (**src_entry).value.ht, recursive )) {
      if (thash) {
       thash->nApplyCount--;
      }
      return 0;
     }
     if (thash) {
      thash->nApplyCount--;
     }
    } else {
     (*src_entry)->refcount++;

     _zend_hash_add_or_update(dest, string_key, string_key_len, src_entry, sizeof(zval *), ((void*)0), (1<<0) );

    }
    break;

   case 2:
    (*src_entry)->refcount++;
    _zend_hash_index_update_or_next_insert(dest, 0, src_entry, sizeof(zval *), ((void*)0), (1<<2) );
    break;
  }

  zend_hash_move_forward_ex(src, &pos);
 }

 return 1;
}


static void php_array_merge_wrapper(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int recursive)
{
 zval ***args = ((void*)0);
 int argc, i, params_ok = 1;


 argc = (ht);
 if (argc < 1) {
  { zend_wrong_param_count(); return; };
 }


 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }

 for (i = 0; i < argc; i++) {
  if ((**args[i]).type != 4) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is not an array", i+1);
   params_ok = 0;
  }
 }
 if (params_ok == 0) {
  _efree((args) );
  return;
 }

 _array_init((return_value) );

 for (i=0; i<argc; i++) {
  { zval *orig_ptr = *(args[i]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[i])) = (zval *) _emalloc((sizeof(zval)) ); **(args[i]) = *orig_ptr; _zval_copy_ctor((*(args[i])) ); (*(args[i]))->refcount=1; (*(args[i]))->is_ref = 0; } };
  if ((*args[i])->type!=4) { if (!((*args[i])->is_ref)) { { zval *orig_ptr = *(args[i]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(args[i])) = (zval *) _emalloc((sizeof(zval)) ); **(args[i]) = *orig_ptr; _zval_copy_ctor((*(args[i])) ); (*(args[i]))->refcount=1; (*(args[i]))->is_ref = 0; } }; }; convert_to_array(*args[i]); };
  php_array_merge((*return_value).value.ht, (**args[i]).value.ht, recursive );
 }

 _efree((args) );
}




void zif_array_merge(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_merge_wrapper(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_array_merge_recursive(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_merge_wrapper(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_array_keys(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input,
      **search_value,
      **entry,
        res,
      **strict,
       *new_val;
 int add_key;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 HashPosition pos;
 int (*is_equal_func)(zval *, zval *, zval * ) = is_equal_function;


 search_value = ((void*)0);


 if ((ht) < 1 || (ht) > 3 ||
  zend_get_parameters_ex((ht), &input, &search_value, &strict) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The first argument should be an array");
  return;
 }
 if ((ht) == 3) {
  if ((*strict)->type!=3) { if (!((*strict)->is_ref)) { { zval *orig_ptr = *(strict); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(strict)) = (zval *) _emalloc((sizeof(zval)) ); **(strict) = *orig_ptr; _zval_copy_ctor((*(strict)) ); (*(strict))->refcount=1; (*(strict))->is_ref = 0; } }; }; convert_to_boolean(*strict); };
  if ((**strict).value.lval) {
   is_equal_func = is_identical_function;
  }
 }


 _array_init((return_value) );
 add_key = 1;


 zend_hash_internal_pointer_reset_ex((**input).value.ht, &pos);
 while (zend_hash_get_current_data_ex((**input).value.ht, (void **)&entry, &pos) == 0) {
  if (search_value != ((void*)0)) {
    is_equal_func(&res, *search_value, *entry );
   add_key = zval_is_true(&res);
  }

  if (add_key) {
   (new_val) = (zval *) _emalloc((sizeof(zval)) ); (new_val)->refcount = 1; (new_val)->is_ref = 0;;;

   switch (zend_hash_get_current_key_ex((**input).value.ht, &string_key, &string_key_len, &num_key, 1, &pos)) {
    case 1:
     (*new_val).type = 6;
     (*new_val).value.str.val = string_key;
     (*new_val).value.str.len = string_key_len-1;
     _zend_hash_index_update_or_next_insert((*return_value).value.ht, 0, &new_val, sizeof(zval *), ((void*)0), (1<<2) );

     break;

    case 2:
     (*new_val).type = 1;
     (*new_val).value.lval = num_key;
     _zend_hash_index_update_or_next_insert((*return_value).value.ht, 0, &new_val, sizeof(zval *), ((void*)0), (1<<2) );

     break;
   }
  }

  zend_hash_move_forward_ex((**input).value.ht, &pos);
 }
}




void zif_array_values(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input,
  **entry;
 HashPosition pos;


 if ((ht) != 1 || zend_get_parameters_ex((ht), &input) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }


 _array_init((return_value) );


 zend_hash_internal_pointer_reset_ex((**input).value.ht, &pos);
 while (zend_hash_get_current_data_ex((**input).value.ht, (void **)&entry, &pos) == 0) {

  (*entry)->refcount++;
  _zend_hash_index_update_or_next_insert((*return_value).value.ht, 0, entry, sizeof(zval *), ((void*)0), (1<<2) );


  zend_hash_move_forward_ex((**input).value.ht, &pos);
 }
}




void zif_array_count_values(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input,
  **entry,
  **tmp;
 HashTable *myht;
 HashPosition pos;


 if ((ht) != 1 || zend_get_parameters_ex(1, &input) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }


 _array_init((return_value) );


 myht = (**input).value.ht;
 zend_hash_internal_pointer_reset_ex(myht, &pos);
 while (zend_hash_get_current_data_ex(myht, (void **)&entry, &pos) == 0) {
  if ((**entry).type == 1) {
   if (zend_hash_index_find((*return_value).value.ht,
          (**entry).value.lval,
          (void**)&tmp) == -1) {
    zval *data;
    (data) = (zval *) _emalloc((sizeof(zval)) ); (data)->refcount = 1; (data)->is_ref = 0;;;
    { (*data).type = 1; (*data).value.lval = 1; };
    _zend_hash_index_update_or_next_insert((*return_value).value.ht, (**entry).value.lval, &data, sizeof(data), ((void*)0), (1<<0) );
   } else {
    (**tmp).value.lval++;
   }
  } else if ((**entry).type == 6) {
   if (zend_symtable_find((*return_value).value.ht, (**entry).value.str.val, (**entry).value.str.len + 1, (void**)&tmp) == -1) {
    zval *data;
    (data) = (zval *) _emalloc((sizeof(zval)) ); (data)->refcount = 1; (data)->is_ref = 0;;;
    { (*data).type = 1; (*data).value.lval = 1; };
    zend_symtable_update((*return_value).value.ht, (**entry).value.str.val, (**entry).value.str.len + 1, &data, sizeof(data), ((void*)0));
   } else {
    (**tmp).value.lval++;
   }
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Can only count STRING and INTEGER values!");
  }

  zend_hash_move_forward_ex(myht, &pos);
 }
}




void zif_array_reverse(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input,
  **z_preserve_keys,
  **entry;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 zend_bool preserve_keys = 0;
 HashPosition pos;


 if ((ht) < 1 || (ht) > 2 || zend_get_parameters_ex((ht), &input, &z_preserve_keys) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }

 if ((ht) > 1) {
  if ((*z_preserve_keys)->type!=3) { if (!((*z_preserve_keys)->is_ref)) { { zval *orig_ptr = *(z_preserve_keys); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(z_preserve_keys)) = (zval *) _emalloc((sizeof(zval)) ); **(z_preserve_keys) = *orig_ptr; _zval_copy_ctor((*(z_preserve_keys)) ); (*(z_preserve_keys))->refcount=1; (*(z_preserve_keys))->is_ref = 0; } }; }; convert_to_boolean(*z_preserve_keys); };
  preserve_keys = ((zend_bool)(**z_preserve_keys).value.lval);
 }


 _array_init((return_value) );

 zend_hash_internal_pointer_end_ex((**input).value.ht, &pos);
 while (zend_hash_get_current_data_ex((**input).value.ht, (void **)&entry, &pos) == 0) {
  (*entry)->refcount++;

  switch (zend_hash_get_current_key_ex((**input).value.ht, &string_key, &string_key_len, &num_key, 0, &pos)) {
   case 1:
    _zend_hash_add_or_update((*return_value).value.ht, string_key, string_key_len, entry, sizeof(zval *), ((void*)0), (1<<0) );
    break;

   case 2:
    if (preserve_keys) {
     _zend_hash_index_update_or_next_insert((*return_value).value.ht, num_key, entry, sizeof(zval *), ((void*)0), (1<<0) );
    } else {
     _zend_hash_index_update_or_next_insert((*return_value).value.ht, 0, entry, sizeof(zval *), ((void*)0), (1<<2) );
    }
    break;
  }

  zend_hash_move_backwards_ex((**input).value.ht, &pos);
 }
}




void zif_array_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input;
 zval **pad_size;
 zval **pad_value;
 zval ***pads;
 HashTable *new_hash;
 int input_size;
 int pad_size_abs;
 int num_pads;
 int do_pad;
 int i;


 if ((ht) != 3 || zend_get_parameters_ex(3, &input, &pad_size, &pad_value) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((*pad_size)->type!=1) { if (!((*pad_size)->is_ref)) { { zval *orig_ptr = *(pad_size); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pad_size)) = (zval *) _emalloc((sizeof(zval)) ); **(pad_size) = *orig_ptr; _zval_copy_ctor((*(pad_size)) ); (*(pad_size))->refcount=1; (*(pad_size))->is_ref = 0; } }; }; convert_to_long(*pad_size); };

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }


 input_size = zend_hash_num_elements((**input).value.ht);
 pad_size_abs = abs((**pad_size).value.lval);
 if (pad_size_abs < 0) {
  php_error_docref0(((void*)0) , (1<<1L), "You may only pad up to 1048576 elements at a time");
  _zval_dtor((return_value) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 do_pad = (input_size >= pad_size_abs) ? 0 : 1;


 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*input); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**input).type = 0; }; } _zval_ptr_dtor((&*input) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };


 if (!do_pad) {
  return;
 }


 num_pads = pad_size_abs - input_size;
 if(num_pads > 1048576) {
  php_error_docref0(((void*)0) , (1<<1L), "You may only pad up to 1048576 elements at a time");
  _zval_dtor((return_value) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 pads = (zval ***)_safe_emalloc((num_pads), (sizeof(zval **)), (0) );
 for (i = 0; i < num_pads; i++) {
  pads[i] = pad_value;
 }


 if ((**pad_size).value.lval > 0) {
  new_hash = php_splice((*return_value).value.ht, input_size, 0, pads, num_pads, ((void*)0));
 } else {
  new_hash = php_splice((*return_value).value.ht, 0, 0, pads, num_pads, ((void*)0));
 }


 zend_hash_destroy((*return_value).value.ht);
 if ((*return_value).value.ht == &(executor_globals.symbol_table)) {
  zend_reset_all_cv(&(executor_globals.symbol_table) );
 }
 *(*return_value).value.ht = *new_hash;
 _efree((new_hash) );


 _efree((pads) );
}




void zif_array_flip(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry, *data;
 HashTable *target_hash;
 char *string_key;
 uint str_key_len;
 ulong num_key;
 HashPosition pos;

 if ((ht) != 1 || zend_get_parameters_ex(1, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }

 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 _array_init((return_value) );

 zend_hash_internal_pointer_reset_ex(target_hash, &pos);
 while (zend_hash_get_current_data_ex(target_hash, (void **)&entry, &pos) == 0) {
  (data) = (zval *) _emalloc((sizeof(zval)) ); (data)->refcount = 1; (data)->is_ref = 0;;;
  switch (zend_hash_get_current_key_ex(target_hash, &string_key, &str_key_len, &num_key, 1, &pos)) {
   case 1:
    (*data).value.str.val = string_key;
    (*data).value.str.len = str_key_len-1;
    (*data).type = 6;
    break;
   case 2:
    (*data).type = 1;
    (*data).value.lval = num_key;
    break;
  }

  if ((**entry).type == 1) {
   _zend_hash_index_update_or_next_insert((*return_value).value.ht, (**entry).value.lval, &data, sizeof(data), ((void*)0), (1<<0) );
  } else if ((**entry).type == 6) {
   zend_symtable_update((*return_value).value.ht, (**entry).value.str.val, (**entry).value.str.len + 1, &data, sizeof(data), ((void*)0));
  } else {
   _zval_ptr_dtor((&data) );
   php_error_docref0(((void*)0) , (1<<1L), "Can only flip STRING and INTEGER values!");
  }

  zend_hash_move_forward_ex(target_hash, &pos);
 }
}




void zif_array_change_key_case(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, **entry, **to_upper;
 char *string_key;
 char *new_key;
 uint str_key_len;
 ulong num_key;
 ulong change_to_upper=0;

 HashPosition pos;

 if ((ht) < 1 || (ht) > 2 ||
  zend_get_parameters_ex((ht), &array, &to_upper) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((ht) > 1) {
  if ((*to_upper)->type!=1) { if (!((*to_upper)->is_ref)) { { zval *orig_ptr = *(to_upper); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(to_upper)) = (zval *) _emalloc((sizeof(zval)) ); **(to_upper) = *orig_ptr; _zval_copy_ctor((*(to_upper)) ); (*(to_upper))->refcount=1; (*(to_upper))->is_ref = 0; } }; }; convert_to_long(*to_upper); };
  change_to_upper = (**to_upper).value.lval;
 }

 if ((**array).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 _array_init((return_value) );

 zend_hash_internal_pointer_reset_ex((**array).value.ht, &pos);
 while (zend_hash_get_current_data_ex((**array).value.ht, (void **)&entry, &pos) == 0) {
  (*entry)->refcount++;

  switch (zend_hash_get_current_key_ex((**array).value.ht, &string_key, &str_key_len, &num_key, 0, &pos)) {
   case 2:
    _zend_hash_index_update_or_next_insert((*return_value).value.ht, num_key, entry, sizeof(entry), ((void*)0), (1<<0) );
    break;
   case 1:
    new_key=_estrndup((string_key), (str_key_len - 1) );
    if (change_to_upper)
     php_strtoupper(new_key, str_key_len - 1);
    else
     php_strtolower(new_key, str_key_len - 1);
    _zend_hash_add_or_update((*return_value).value.ht, new_key, str_key_len, entry, sizeof(entry), ((void*)0), (1<<0) );
    _efree((new_key) );
    break;
  }

  zend_hash_move_forward_ex((**array).value.ht, &pos);
 }
}




void zif_array_unique(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **array, *tmp;
 HashTable *target_hash;
 Bucket *p;
 struct bucketindex {
  Bucket *b;
  unsigned int i;
 };
 struct bucketindex *arTmp, *cmpdata, *lastkept;
 unsigned int i;
 long sort_type = 2;

 if (zend_parse_parameters((ht) , "Z|l", &array, &sort_type) == -1) {
  return;
 }
 target_hash = ((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0))));
 if (!target_hash) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 set_compare_func(sort_type );

 _array_init((return_value) );
 zend_hash_copy((*return_value).value.ht, target_hash, (copy_ctor_func_t) zval_add_ref, (void *)&tmp, sizeof(zval*));

 if (target_hash->nNumOfElements <= 1) {
  return;
 }


 arTmp = (struct bucketindex *) ((target_hash->persistent)?__zend_malloc((target_hash->nNumOfElements + 1) * sizeof(struct bucketindex)):_emalloc(((target_hash->nNumOfElements + 1) * sizeof(struct bucketindex)) ));
 if (!arTmp) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
 for (i = 0, p = target_hash->pListHead; p; i++, p = p->pListNext) {
  arTmp[i].b = p;
  arTmp[i].i = i;
 }
 arTmp[i].b = ((void*)0);
 zend_qsort((void *) arTmp, i, sizeof(struct bucketindex), array_data_compare );


 lastkept = arTmp;
 for (cmpdata = arTmp + 1; cmpdata->b; cmpdata++) {
  if (array_data_compare(lastkept, cmpdata )) {
   lastkept = cmpdata;
  } else {
   if (lastkept->i > cmpdata->i) {
    p = lastkept->b;
    lastkept = cmpdata;
   } else {
    p = cmpdata->b;
   }
   if (p->nKeyLength) {
    if ((*return_value).value.ht == &(executor_globals.symbol_table)) {
     zend_delete_global_variable(p->arKey, p->nKeyLength-1 );
    } else {
     zend_hash_del_key_or_index((*return_value).value.ht, p->arKey, p->nKeyLength, 0, 0);
    }
   } else {
    zend_hash_del_key_or_index((*return_value).value.ht, ((void*)0), 0, p->h, 1);
   }
  }
 }
 ((target_hash->persistent)?free(arTmp):_efree((arTmp) ));
}


static int zval_compare(zval **a, zval **b )
{
 zval result;
 zval *first;
 zval *second;

 first = *((zval **) a);
 second = *((zval **) b);

 if (string_compare_function(&result, first, second ) == -1) {
  return 0;
 }

 if ((result).type == 2) {
  if ((result).value.dval < 0) {
   return -1;
  } else if ((result).value.dval > 0) {
   return 1;
  } else {
   return 0;
  }
 }

 convert_to_long(&result);

 if ((result).value.lval < 0) {
  return -1;
 } else if ((result).value.lval > 0) {
  return 1;
 }

 return 0;
}


static int zval_user_compare(zval **a, zval **b )
{
 zval **args[2];
 zval *retval_ptr;
 zend_fcall_info fci;

 args[0] = (zval **) a;
 args[1] = (zval **) b;

 fci.size = sizeof(fci);
 fci.function_table = (executor_globals.function_table);
 fci.function_name = *(basic_globals.user_compare_func_name);
 fci.symbol_table = ((void*)0);
 fci.object_pp = ((void*)0);
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = 2;
 fci.params = args;
 fci.no_separation = 0;

 if (zend_call_function(&fci, &(basic_globals.user_compare_fci_cache) )== 0
  && retval_ptr) {
  long retval;

  if ((*&retval_ptr)->type!=1) { if (!((*&retval_ptr)->is_ref)) { { zval *orig_ptr = *(&retval_ptr); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(&retval_ptr)) = (zval *) _emalloc((sizeof(zval)) ); **(&retval_ptr) = *orig_ptr; _zval_copy_ctor((*(&retval_ptr)) ); (*(&retval_ptr))->refcount=1; (*(&retval_ptr))->is_ref = 0; } }; }; convert_to_long(*&retval_ptr); };
  retval = (*retval_ptr).value.lval;
  _zval_ptr_dtor((&retval_ptr) );
  return retval < 0 ? -1 : retval > 0 ? 1 : 0;;
 } else {
  return 0;
 }
}


static void php_array_intersect_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int data_compare_type)
{
 Bucket *p;
 int argc, i;
 zval ***args;
 int (*intersect_data_compare_func)(zval **, zval ** ) = ((void*)0);
 zend_bool ok;
 zval **data;


 argc = (ht);

 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (argc < 2 || _zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }
 if (data_compare_type == 1) {
  char *callback_name;

  if (argc < 3) {
   _efree((args) );
   { zend_wrong_param_count(); return; };
  }
  argc--;
  if (!zend_is_callable(*args[argc], 0, &callback_name)) {
   php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
   _efree((callback_name) );
   _efree((args) );
   return;
  }
  _efree((callback_name) );
  intersect_data_compare_func = zval_user_compare;
  (basic_globals.user_compare_func_name) = args[argc];
  (basic_globals.user_compare_fci_cache).initialized = 0;
 } else if (data_compare_type == 0) {
  intersect_data_compare_func = zval_compare;
 }

 for (i = 0; i < argc; i++) {
  if ((**args[i]).type != 4) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is not an array", i + 1);
   { (*return_value).type = 0; };
   goto out;
  }
 }

 _array_init((return_value) );

 for (p = (**args[0]).value.ht->pListHead; p != ((void*)0); p = p->pListNext) {
  if (p->nKeyLength == 0) {
   ok = 1;
   for (i = 1; i < argc; i++) {
    if (zend_hash_index_find((**args[i]).value.ht, p->h, (void**)&data) == -1 ||
        (intersect_data_compare_func &&
         intersect_data_compare_func((zval**)p->pData, data ) != 0)) {
     ok = 0;
     break;
    }
   }
   if (ok) {
    (*((zval**)p->pData))->refcount++;
    _zend_hash_index_update_or_next_insert((*return_value).value.ht, p->h, p->pData, sizeof(zval*), ((void*)0), (1<<0) );
   }
  } else {
   ok = 1;
   for (i = 1; i < argc; i++) {
    if (zend_hash_quick_find((**args[i]).value.ht, p->arKey, p->nKeyLength, p->h, (void**)&data) == -1 ||
        (intersect_data_compare_func &&
         intersect_data_compare_func((zval**)p->pData, data ) != 0)) {
     ok = 0;
     break;
    }
   }
   if (ok) {
    (*((zval**)p->pData))->refcount++;
    _zend_hash_quick_add_or_update((*return_value).value.ht, p->arKey, p->nKeyLength, p->h, p->pData, sizeof(zval*), ((void*)0), (1<<0) );
   }
  }
 }
out:
 _efree((args) );
}


static void php_array_intersect(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int behavior, int data_compare_type, int key_compare_type)
{
 zval ***args = ((void*)0);
 HashTable *hash;
 int argc, arr_argc, i, c = 0;
 Bucket ***lists, **list, ***ptrs, *p;

 char *callback_name;
 zval **old_compare_func; zend_fcall_info_cache old_user_compare_fci_cache;


 int (*intersect_key_compare_func)(const void *, const void * );
 int (*intersect_data_compare_func)(const void *, const void * );


 argc = (ht);

 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }

 old_compare_func = (basic_globals.user_compare_func_name); old_user_compare_fci_cache = (basic_globals.user_compare_fci_cache); (basic_globals.user_compare_fci_cache) = empty_fcall_info_cache;;

 if (behavior == 1) {
  intersect_key_compare_func = array_key_compare;
  if (data_compare_type == 0) {


   if (argc < 2) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc;
   intersect_data_compare_func = array_data_compare;
  } else if (data_compare_type == 1) {

   if (argc < 3) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc - 1;
   intersect_data_compare_func = array_user_compare;
   if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );

   (basic_globals.user_compare_func_name) = args[arr_argc];
   (basic_globals.user_compare_fci_cache).initialized = 0;
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "data_compare_type is %d. This should never happen. Please report as a bug", data_compare_type);
   return;
  }
 } else if (behavior & 6) {




  intersect_key_compare_func = array_key_compare;
  if (data_compare_type == 0
    &&
   key_compare_type == 0) {


   if (argc < 2) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc;
   intersect_key_compare_func = array_key_compare;
   intersect_data_compare_func = array_data_compare;
  } else if (data_compare_type == 1
    &&
    key_compare_type == 0) {


   if (argc < 3) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc - 1;
   if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );
   intersect_key_compare_func = array_key_compare;
   intersect_data_compare_func = array_user_compare;
  } else if (data_compare_type == 0
    &&
    key_compare_type == 1) {


    if (argc < 3) {
     _efree((args) );
     { zend_wrong_param_count(); return; };
    }
    arr_argc = argc - 1;
    if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
     php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
     _efree((callback_name) );
     _efree((args) );
     return;
    }
    _efree((callback_name) );
    intersect_key_compare_func = array_user_key_compare;
    intersect_data_compare_func = array_data_compare;
    (basic_globals.user_compare_func_name) = args[arr_argc];
    (basic_globals.user_compare_fci_cache).initialized = 0;
  } else if (data_compare_type == 1
    &&
    key_compare_type == 1) {


    if (argc < 4) {
     _efree((args) );
     { zend_wrong_param_count(); return; };
    }
    arr_argc = argc - 2;
    if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
     php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
     _efree((callback_name) );
     _efree((args) );
     return;
    }
    _efree((callback_name) );
    if (!zend_is_callable(*args[arr_argc + 1], 0, &callback_name)) {
     php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
     _efree((callback_name) );
     _efree((args) );
     return;
    }
    _efree((callback_name) );
    intersect_key_compare_func = array_user_key_compare;
    intersect_data_compare_func = array_user_compare;
    (basic_globals.user_compare_func_name) = args[arr_argc + 1];
    (basic_globals.user_compare_fci_cache).initialized = 0;
  } else {
   _efree((args) );
   php_error_docref0(((void*)0) , (1<<1L), "data_compare_type is %d. key_compare_type is %d. This should never happen. Please report as a bug", data_compare_type, key_compare_type);
   return;
  }
 } else {
  _efree((args) );
  php_error_docref0(((void*)0) , (1<<1L), "behavior is %d. This should never happen. Please report as a bug", behavior);
  return;
 }



 lists = (Bucket ***)_safe_emalloc((arr_argc), (sizeof(Bucket **)), (0) );
 ptrs = (Bucket ***)_safe_emalloc((arr_argc), (sizeof(Bucket **)), (0) );
 set_compare_func(2 );
 for (i = 0; i < arr_argc; i++) {
  if ((**args[i]).type != 4) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is not an array", i+1);
   arr_argc = i;
   goto out;
  }
  hash = ((**args[i]).type==4 ? (**args[i]).value.ht : (((**args[i]).type==5 ? (**args[i]).value.obj.handlers->get_properties((*args[i]) ) : ((void*)0))));
  list = (Bucket **) ((hash->persistent)?__zend_malloc((hash->nNumOfElements + 1) * sizeof(Bucket *)):_emalloc(((hash->nNumOfElements + 1) * sizeof(Bucket *)) ));
  if (!list) {
   _efree((args) );
   _efree((lists) );
   _efree((ptrs) );
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  lists[i] = list;
  ptrs[i] = list;
  for (p = hash->pListHead; p; p = p->pListNext) {
   *list++ = p;
  }
  *list = ((void*)0);
  if (behavior == 1) {
   zend_qsort((void *) lists[i], hash->nNumOfElements, sizeof(Bucket *), intersect_data_compare_func );
  } else if (behavior & 6) {
   zend_qsort((void *) lists[i], hash->nNumOfElements, sizeof(Bucket *), intersect_key_compare_func );
  }
 }


 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*args[0]); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**args[0]).type = 0; }; } _zval_ptr_dtor((&*args[0]) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
 if (return_value->value.ht == &(executor_globals.symbol_table)) {
  HashTable *ht;
  zval *tmp;

  (ht) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init((ht), (zend_hash_num_elements(return_value->value.ht)), (((void*)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );
  zend_hash_copy(ht, return_value->value.ht, (copy_ctor_func_t) zval_add_ref, (void *) &tmp, sizeof(zval *));
  return_value->value.ht = ht;
 }

 if ((behavior & 1) && data_compare_type == 1) {

  (basic_globals.user_compare_func_name) = args[arr_argc];
  (basic_globals.user_compare_fci_cache).initialized = 0;
 }


 while (*ptrs[0]) {
  if ((behavior & 6)
    &&
   key_compare_type == 1) {

   (basic_globals.user_compare_func_name) = args[argc - 1];
   (basic_globals.user_compare_fci_cache).initialized = 0;
  }

  for (i = 1; i < arr_argc; i++) {
   if (behavior & 1) {
    while (*ptrs[i] && (0 < (c = intersect_data_compare_func(ptrs[0], ptrs[i] )))) {
     ptrs[i]++;
    }
   } else if (behavior & 6) {
    while (*ptrs[i] && (0 < (c = intersect_key_compare_func(ptrs[0], ptrs[i] )))) {
     ptrs[i]++;
    }
    if ((!c && *ptrs[i]) && (behavior == 6)) {







     if (data_compare_type == 1) {
      (basic_globals.user_compare_func_name) = args[arr_argc];
      (basic_globals.user_compare_fci_cache).initialized = 0;
     }
      if (intersect_data_compare_func(ptrs[0], ptrs[i] ) != 0) {
       c = 1;
       if (key_compare_type == 1) {
        (basic_globals.user_compare_func_name) = args[argc - 1];
       (basic_globals.user_compare_fci_cache).initialized = 0;

       }

      } else {

      }
    }
   }
   if (!*ptrs[i]) {



    for (;;) {
     p = *ptrs[0]++;
     if (!p) {
      goto out;
     }
     if (p->nKeyLength) {
      zend_hash_del_key_or_index((*return_value).value.ht, p->arKey, p->nKeyLength, 0, 0);
     } else {
      zend_hash_del_key_or_index((*return_value).value.ht, ((void*)0), 0, p->h, 1);
     }
    }
   }
   if (c)
    break;
   ptrs[i]++;
  }
  if (c) {


   for (;;) {
    p = *ptrs[0];
    if (p->nKeyLength) {
     zend_hash_del_key_or_index((*return_value).value.ht, p->arKey, p->nKeyLength, 0, 0);
    } else {
     zend_hash_del_key_or_index((*return_value).value.ht, ((void*)0), 0, p->h, 1);
    }
    if (!*++ptrs[0]) {
     goto out;
    }
    if (behavior == 1) {
     if (0 <= intersect_data_compare_func(ptrs[0], ptrs[i] )) {
      break;
     }
    } else if (behavior & 6) {

     break;
    }
   }
  } else {


   for (;;) {
    if (!*++ptrs[0]) {
     goto out;
    }
    if (behavior == 1) {
     if (intersect_data_compare_func(ptrs[0]-1, ptrs[0] )) {
      break;
     }
    } else if (behavior & 6) {

     break;
    }
   }
  }
 }
out:
 for (i = 0; i < arr_argc; i++) {
  hash = ((**args[i]).type==4 ? (**args[i]).value.ht : (((**args[i]).type==5 ? (**args[i]).value.obj.handlers->get_properties((*args[i]) ) : ((void*)0))));
  ((hash->persistent)?free(lists[i]):_efree((lists[i]) ));
 }

 (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;


 _efree((ptrs) );
 _efree((lists) );
 _efree((args) );
}




void zif_array_intersect_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect_key(ht, return_value, return_value_ptr, this_ptr, return_value_used , -1);
}




void zif_array_intersect_ukey(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect(ht, return_value, return_value_ptr, this_ptr, return_value_used , 2,
    0, 1);
}




void zif_array_intersect(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1,
    0, 0);
}




void zif_array_uintersect(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1,
    1, 0);
}




void zif_array_intersect_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect_key(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_array_uintersect_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect_key(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_array_intersect_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect(ht, return_value, return_value_ptr, this_ptr, return_value_used , 6,
    0, 1);
}




void zif_array_uintersect_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_intersect(ht, return_value, return_value_ptr, this_ptr, return_value_used , 6,
    1, 1);
}


static void php_array_diff_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int data_compare_type)
{
 Bucket *p;
 int argc, i;
 zval ***args;
 int (*diff_data_compare_func)(zval **, zval ** ) = ((void*)0);
 zend_bool ok;
 zval **data;


 argc = (ht);

 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (argc < 2 || _zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }
 if (data_compare_type == 1) {
  char *callback_name;

  if (argc < 3) {
   _efree((args) );
   { zend_wrong_param_count(); return; };
  }
  argc--;
  if (!zend_is_callable(*args[argc], 0, &callback_name)) {
   php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
   _efree((callback_name) );
   _efree((args) );
   return;
  }
  _efree((callback_name) );
  diff_data_compare_func = zval_user_compare;
  (basic_globals.user_compare_func_name) = args[argc];
  (basic_globals.user_compare_fci_cache).initialized = 0;
 } else if (data_compare_type == 0) {
  diff_data_compare_func = zval_compare;
 }

 for (i = 0; i < argc; i++) {
  if ((**args[i]).type != 4) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is not an array", i + 1);
   { (*return_value).type = 0; };
   goto out;
  }
 }

 _array_init((return_value) );

 for (p = (**args[0]).value.ht->pListHead; p != ((void*)0); p = p->pListNext) {
  if (p->nKeyLength == 0) {
   ok = 1;
   for (i = 1; i < argc; i++) {
    if (zend_hash_index_find((**args[i]).value.ht, p->h, (void**)&data) == 0 &&
        (!diff_data_compare_func ||
         diff_data_compare_func((zval**)p->pData, data ) == 0)) {
     ok = 0;
     break;
    }
   }
   if (ok) {
    (*((zval**)p->pData))->refcount++;
    _zend_hash_index_update_or_next_insert((*return_value).value.ht, p->h, p->pData, sizeof(zval*), ((void*)0), (1<<0) );
   }
  } else {
   ok = 1;
   for (i = 1; i < argc; i++) {
    if (zend_hash_quick_find((**args[i]).value.ht, p->arKey, p->nKeyLength, p->h, (void**)&data) == 0 &&
        (!diff_data_compare_func ||
         diff_data_compare_func((zval**)p->pData, data ) == 0)) {
     ok = 0;
     break;
    }
   }
   if (ok) {
    (*((zval**)p->pData))->refcount++;
    _zend_hash_quick_add_or_update((*return_value).value.ht, p->arKey, p->nKeyLength, p->h, p->pData, sizeof(zval*), ((void*)0), (1<<0) );
   }
  }
 }
out:
 _efree((args) );
}


static void php_array_diff(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int behavior, int data_compare_type, int key_compare_type)
{
 zval ***args = ((void*)0);
 HashTable *hash;
 int argc, arr_argc, i, c;
 Bucket ***lists, **list, ***ptrs, *p;
 char *callback_name;

 zval **old_compare_func; zend_fcall_info_cache old_user_compare_fci_cache;

 int (*diff_key_compare_func)(const void *, const void * );
 int (*diff_data_compare_func)(const void *, const void * );



 argc = (ht);

 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }

 old_compare_func = (basic_globals.user_compare_func_name); old_user_compare_fci_cache = (basic_globals.user_compare_fci_cache); (basic_globals.user_compare_fci_cache) = empty_fcall_info_cache;;

 if (behavior == 1) {
  diff_key_compare_func = array_key_compare;
  if (data_compare_type == 0) {


   if (argc < 2) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc;
   diff_data_compare_func = array_data_compare;
  } else if (data_compare_type == 1) {

   if (argc < 3) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc - 1;
   diff_data_compare_func = array_user_compare;
   if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );

   (basic_globals.user_compare_func_name) = args[arr_argc];
   (basic_globals.user_compare_fci_cache).initialized = 0;
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "data_compare_type is %d. This should never happen. Please report as a bug", data_compare_type);
   return;
  }
 } else if (behavior & 6) {




  diff_key_compare_func = array_key_compare;
  if (data_compare_type == 0
    &&
   key_compare_type == 0) {


   if (argc < 2) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc;
   diff_key_compare_func = array_key_compare;
   diff_data_compare_func = array_data_compare;
  } else if (data_compare_type == 1
    &&
   key_compare_type == 0) {


   if (argc < 3) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc - 1;
   if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );
   diff_key_compare_func = array_key_compare;
   diff_data_compare_func = array_user_compare;
  } else if (data_compare_type == 0
    &&
   key_compare_type == 1) {


   if (argc < 3) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc - 1;
   if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );
   diff_key_compare_func = array_user_key_compare;
   diff_data_compare_func = array_data_compare;
   (basic_globals.user_compare_func_name) = args[arr_argc];
   (basic_globals.user_compare_fci_cache).initialized = 0;
  } else if (data_compare_type == 1
    &&
   key_compare_type == 1) {


   if (argc < 4) {
    _efree((args) );
    { zend_wrong_param_count(); return; };
   }
   arr_argc = argc - 2;
   if (!zend_is_callable(*args[arr_argc], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );
   if (!zend_is_callable(*args[arr_argc + 1], 0, &callback_name)) {
    php_error_docref0(((void*)0) , (1<<1L), "Not a valid callback %s", callback_name);
    _efree((callback_name) );
    _efree((args) );
    return;
   }
   _efree((callback_name) );
   diff_key_compare_func = array_user_key_compare;
   diff_data_compare_func = array_user_compare;
   (basic_globals.user_compare_func_name) = args[arr_argc + 1];
   (basic_globals.user_compare_fci_cache).initialized = 0;
  } else {
   _efree((args) );
   php_error_docref0(((void*)0) , (1<<1L), "data_compare_type is %d. key_compare_type is %d. This should never happen. Please report as a bug", data_compare_type, key_compare_type);
   return;
  }
 } else {
  _efree((args) );
  php_error_docref0(((void*)0) , (1<<1L), "behavior is %d. This should never happen. Please report as a bug", behavior);
  return;
 }



 lists = (Bucket ***)_safe_emalloc((arr_argc), (sizeof(Bucket **)), (0) );
 ptrs = (Bucket ***)_safe_emalloc((arr_argc), (sizeof(Bucket **)), (0) );
 set_compare_func(2 );
 for (i = 0; i < arr_argc; i++) {
  if ((**args[i]).type != 4) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is not an array", i + 1);
   arr_argc = i;
   goto out;
  }
  hash = ((**args[i]).type==4 ? (**args[i]).value.ht : (((**args[i]).type==5 ? (**args[i]).value.obj.handlers->get_properties((*args[i]) ) : ((void*)0))));
  list = (Bucket **) ((hash->persistent)?__zend_malloc((hash->nNumOfElements + 1) * sizeof(Bucket *)):_emalloc(((hash->nNumOfElements + 1) * sizeof(Bucket *)) ));
  if (!list) {
   _efree((args) );
   _efree((ptrs) );
   _efree((lists) );
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  }
  lists[i] = list;
  ptrs[i] = list;
  for (p = hash->pListHead; p; p = p->pListNext) {
   *list++ = p;
  }
  *list = ((void*)0);
  if (behavior == 1) {
   zend_qsort((void *) lists[i], hash->nNumOfElements, sizeof(Bucket *), diff_data_compare_func );
  } else if (behavior & 6) {
   zend_qsort((void *) lists[i], hash->nNumOfElements, sizeof(Bucket *), diff_key_compare_func );
  }
 }


 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(*args[0]); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**args[0]).type = 0; }; } _zval_ptr_dtor((&*args[0]) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
 if (return_value->value.ht == &(executor_globals.symbol_table)) {
  HashTable *ht;
  zval *tmp;

  (ht) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init((ht), (zend_hash_num_elements(return_value->value.ht)), (((void*)0)), ((void (*)(void *)) _zval_ptr_dtor), (0) );
  zend_hash_copy(ht, return_value->value.ht, (copy_ctor_func_t) zval_add_ref, (void *) &tmp, sizeof(zval *));
  return_value->value.ht = ht;
 }

 if (behavior == 1 && data_compare_type == 1) {

  (basic_globals.user_compare_func_name) = args[arr_argc];
  (basic_globals.user_compare_fci_cache).initialized = 0;
 }


 while (*ptrs[0]) {
  if ((behavior & 6)
    &&
   key_compare_type == 1) {

   (basic_globals.user_compare_func_name) = args[argc - 1];
   (basic_globals.user_compare_fci_cache).initialized = 0;
  }
  c = 1;
  for (i = 1; i < arr_argc; i++) {
   Bucket **ptr = ptrs[i];
   if (behavior == 1) {
    while (*ptrs[i] && (0 < (c = diff_data_compare_func(ptrs[0], ptrs[i] )))) {
     ptrs[i]++;
    }
   } else if (behavior & 6) {
    while (*ptr && (0 != (c = diff_key_compare_func(ptrs[0], ptr )))) {
     ptr++;
    }
   }
   if (!c) {
    if (behavior == 1) {
     if (*ptrs[i]) {
      ptrs[i]++;
     }
     break;
    } else if (behavior == 6) {




     if (*ptr) {
      if (data_compare_type == 1) {
       (basic_globals.user_compare_func_name) = args[arr_argc];
       (basic_globals.user_compare_fci_cache).initialized = 0;
      }
      if (diff_data_compare_func(ptrs[0], ptr ) != 0) {

       c = -1;
       if (key_compare_type == 1) {
        (basic_globals.user_compare_func_name) = args[argc - 1];
        (basic_globals.user_compare_fci_cache).initialized = 0;
       }
      } else {
       break;




      }
     }
    } else if (behavior == 2) {






     break;
    }
   }
  }
  if (!c) {


   for (;;) {
    p = *ptrs[0];
    if (p->nKeyLength) {
     zend_hash_del_key_or_index((*return_value).value.ht, p->arKey, p->nKeyLength, 0, 0);
    } else {
     zend_hash_del_key_or_index((*return_value).value.ht, ((void*)0), 0, p->h, 1);
    }
    if (!*++ptrs[0]) {
     goto out;
    }
    if (behavior == 1) {
     if (diff_data_compare_func(ptrs[0] - 1, ptrs[0] )) {
      break;
     }
    } else if (behavior & 6) {

     break;
    }
   }
  } else {


   for (;;) {
    if (!*++ptrs[0]) {
     goto out;
    }
    if (behavior == 1) {
     if (diff_data_compare_func(ptrs[0]-1, ptrs[0] )) {
      break;
     }
    } else if (behavior & 6) {

     break;
    }
   }
  }
 }
out:
 for (i = 0; i < arr_argc; i++) {
  hash = ((**args[i]).type==4 ? (**args[i]).value.ht : (((**args[i]).type==5 ? (**args[i]).value.obj.handlers->get_properties((*args[i]) ) : ((void*)0))));
  ((hash->persistent)?free(lists[i]):_efree((lists[i]) ));
 }

 (basic_globals.user_compare_fci_cache) = old_user_compare_fci_cache; (basic_globals.user_compare_func_name) = old_compare_func;;


 _efree((ptrs) );
 _efree((lists) );
 _efree((args) );
}




void zif_array_diff_key(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff_key(ht, return_value, return_value_ptr, this_ptr, return_value_used , -1);
}




void zif_array_diff_ukey(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff(ht, return_value, return_value_ptr, this_ptr, return_value_used , 2,
    0, 1);
}




void zif_array_diff(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1,
    0, 0);
}




void zif_array_udiff(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1,
    1, 0);
}




void zif_array_diff_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff_key(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




void zif_array_diff_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff(ht, return_value, return_value_ptr, this_ptr, return_value_used , 6,
    0, 1);
}




void zif_array_udiff_assoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff_key(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zif_array_udiff_uassoc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 php_array_diff(ht, return_value, return_value_ptr, this_ptr, return_value_used , 6,
    1, 1);
}






int multisort_compare(const void *a, const void *b )
{
 Bucket **ab = *(Bucket ***)a;
 Bucket **bb = *(Bucket ***)b;
 int r;
 int result = 0;
 zval temp;

 r = 0;
 do {
  set_compare_func((array_globals.multisort_flags)[1][r] );

  (array_globals.compare_func)(&temp, *((zval **)ab[r]->pData), *((zval **)bb[r]->pData) );
  result = (array_globals.multisort_flags)[0][r] * (temp).value.lval;
  if (result != 0) {
   return result;
  }
  r++;
 } while (ab[r] != ((void*)0));

 return result;
}
# 4056 "ext/standard/array.c"
void zif_array_multisort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval*** args;
 zval*** arrays;
 Bucket*** indirect;
 Bucket* p;
 HashTable* hash;
 int argc;
 int array_size;
 int num_arrays = 0;
 int parse_state[2];
 int sort_order = 4;
 int sort_type = 0;
 int i, k;


 argc = (ht);
 if (argc < 1) {
  { zend_wrong_param_count(); return; };
 }


 args = (zval ***)_safe_emalloc((argc), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex(argc, args ) == -1) {
  _efree((args) );
  { zend_wrong_param_count(); return; };
 }


 arrays = (zval ***)_ecalloc((argc), (sizeof(zval **)) );
 for (i = 0; i < 2; i++) {
  parse_state[i] = 0;
  (array_globals.multisort_flags)[i] = (int *)_ecalloc((argc), (sizeof(int)) );
 }







 for (i = 0; i < argc; i++) {
  if ((**args[i]).type == 4) {


   if (i > 0) {
    (array_globals.multisort_flags)[0][num_arrays-1] = sort_order;
    (array_globals.multisort_flags)[1][num_arrays-1] = sort_type;
    sort_order = 4;
    sort_type = 0;
   }
   arrays[num_arrays++] = args[i];


   for (k = 0; k < 2; k++) {
    parse_state[k] = 1;
   }
  } else if ((**args[i]).type == 1) {
   switch ((**args[i]).value.lval) {
    case 4:
    case 3:

     if (parse_state[0] == 1) {

      sort_order = (**args[i]).value.lval == 3 ? -1 : 1;
      parse_state[0] = 0;
     } else {
      php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is expected to be an array or sorting flag that has not already been specified", i+1);
      for (k = 0; k < 2; k++) _efree(((array_globals.multisort_flags)[k]) ); _efree((arrays) ); _efree((args) ); { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };;
     }
     break;

    case 0:
    case 1:
    case 2:

     if (parse_state[1] == 1) {

      sort_type = (**args[i]).value.lval;
      parse_state[1] = 0;
     } else {
      php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is expected to be an array or sorting flag that has not already been specified", i + 1);
      for (k = 0; k < 2; k++) _efree(((array_globals.multisort_flags)[k]) ); _efree((arrays) ); _efree((args) ); { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };;
     }
     break;

    default:
     php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is an unknown sort flag", i + 1);
     for (k = 0; k < 2; k++) _efree(((array_globals.multisort_flags)[k]) ); _efree((arrays) ); _efree((args) ); { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };;
     break;

   }
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d is expected to be an array or a sort flag", i + 1);
   for (k = 0; k < 2; k++) _efree(((array_globals.multisort_flags)[k]) ); _efree((arrays) ); _efree((args) ); { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };;
  }
 }

 (array_globals.multisort_flags)[0][num_arrays-1] = sort_order;
 (array_globals.multisort_flags)[1][num_arrays-1] = sort_type;


 array_size = zend_hash_num_elements((**arrays[0]).value.ht);
 for (i = 0; i < num_arrays; i++) {
  if (zend_hash_num_elements((**arrays[i]).value.ht) != array_size) {
   php_error_docref0(((void*)0) , (1<<1L), "Array sizes are inconsistent");
   for (k = 0; k < 2; k++) _efree(((array_globals.multisort_flags)[k]) ); _efree((arrays) ); _efree((args) ); { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };;
  }
 }


 if (array_size < 1) {
  for (k = 0; k < 2; k++)
   _efree(((array_globals.multisort_flags)[k]) );
  _efree((arrays) );
  _efree((args) );
  { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
 }






 indirect = (Bucket ***)_safe_emalloc((array_size), (sizeof(Bucket **)), (0) );
 for (i = 0; i < array_size; i++)
  indirect[i] = (Bucket **)_safe_emalloc(((num_arrays+1)), (sizeof(Bucket *)), (0) );

 for (i = 0; i < num_arrays; i++) {
  k = 0;
  for (p = (**arrays[i]).value.ht->pListHead; p; p = p->pListNext, k++) {
   indirect[k][i] = p;
  }
 }
 for (k = 0; k < array_size; k++)
  indirect[k][num_arrays] = ((void*)0);


 zend_qsort(indirect, array_size, sizeof(Bucket **), multisort_compare );


 if (zend_block_interruptions) { zend_block_interruptions(); };
 for (i = 0; i < num_arrays; i++) {
  hash = (**arrays[i]).value.ht;
  hash->pListHead = indirect[0][i];;
  hash->pListTail = ((void*)0);
  hash->pInternalPointer = hash->pListHead;

  for (k = 0; k < array_size; k++) {
   if (hash->pListTail) {
    hash->pListTail->pListNext = indirect[k][i];
   }
   indirect[k][i]->pListLast = hash->pListTail;
   indirect[k][i]->pListNext = ((void*)0);
   hash->pListTail = indirect[k][i];
  }

  p = hash->pListHead;
  k = 0;
  while (p != ((void*)0)) {
   if (p->nKeyLength == 0)
    p->h = k++;
   p = p->pListNext;
  }
  hash->nNextFreeElement = array_size;
  zend_hash_rehash(hash);
 }
 if (zend_unblock_interruptions) { zend_unblock_interruptions(); };


 for (i = 0; i < array_size; i++)
  _efree((indirect[i]) );
 _efree((indirect) );
 for (k = 0; k < 2; k++)
  _efree(((array_globals.multisort_flags)[k]) );
 _efree((arrays) );
 _efree((args) );
 { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
}




void zif_array_rand(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input, **num_req;
 long randval;
 int num_req_val, num_avail, key_type;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 HashPosition pos;

 if ((ht) < 1 || (ht) > 2 ||
  zend_get_parameters_ex((ht), &input, &num_req) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "First argument has to be an array");
  return;
 }

 num_avail = zend_hash_num_elements((**input).value.ht);

 if ((ht) > 1) {
  if ((*num_req)->type!=1) { if (!((*num_req)->is_ref)) { { zval *orig_ptr = *(num_req); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(num_req)) = (zval *) _emalloc((sizeof(zval)) ); **(num_req) = *orig_ptr; _zval_copy_ctor((*(num_req)) ); (*(num_req))->refcount=1; (*(num_req))->is_ref = 0; } }; }; convert_to_long(*num_req); };
  num_req_val = (**num_req).value.lval;
  if (num_req_val <= 0 || num_req_val > num_avail) {
   php_error_docref0(((void*)0) , (1<<1L), "Second argument has to be between 1 and the number of elements in the array");
   return;
  }
 } else
  num_req_val = 1;


 if (num_req_val > 1) {
  _array_init((return_value) );
 }


 zend_hash_internal_pointer_reset_ex((**input).value.ht, &pos);
 while (num_req_val && (key_type = zend_hash_get_current_key_ex((**input).value.ht, &string_key, &string_key_len, &num_key, 0, &pos)) != 3) {

  randval = php_rand();

  if ((double)(randval/(2147483647 +1.0)) < (double)num_req_val/(double)num_avail) {

   if ((*return_value).type != 4) {
    if (key_type == 1) {
     { { char *__s=(string_key); int __l=string_key_len-1; (return_value)->value.str.len = __l; (return_value)->value.str.val = (1?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
    } else {
     { { (*return_value).type = 1; (*return_value).value.lval = num_key; }; return; };
    }
   } else {

    if (key_type == 1)
     add_next_index_stringl(return_value, string_key, string_key_len-1, 1);
    else
     add_next_index_long(return_value, num_key);
   }
   num_req_val--;
  }
  num_avail--;
  zend_hash_move_forward_ex((**input).value.ht, &pos);
 }
}




void zif_array_sum(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input,
   **entry,
   entry_n;
 int argc = (ht);
 HashPosition pos;
 double dval;

 if (argc != 1 || zend_get_parameters_ex(argc, &input) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }

 { (*return_value).type = 1; (*return_value).value.lval = 0; };

 for (zend_hash_internal_pointer_reset_ex((**input).value.ht, &pos);
   zend_hash_get_current_data_ex((**input).value.ht, (void **)&entry, &pos) == 0;
   zend_hash_move_forward_ex((**input).value.ht, &pos)) {

  if ((**entry).type == 4 || (**entry).type == 5)
   continue;

  entry_n = **entry;
  _zval_copy_ctor((&entry_n) );
  convert_scalar_to_number(&entry_n );

  if ((entry_n).type == 1 && (*return_value).type == 1) {
   dval = (double)(*return_value).value.lval + (double)(entry_n).value.lval;
   if ( (double)(-9223372036854775807L -1L) <= dval && dval <= (double)9223372036854775807L ) {
    (*return_value).value.lval += (entry_n).value.lval;
    continue;
   }
  }
  convert_to_double(return_value);
  convert_to_double(&entry_n);
  (*return_value).value.dval += (entry_n).value.dval;
 }
}




void zif_array_product(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input,
   **entry,
   entry_n;
 int argc = (ht);
 HashPosition pos;
 double dval;

 if (argc != 1 || zend_get_parameters_ex(argc, &input) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The argument should be an array");
  return;
 }

 if (!zend_hash_num_elements((**input).value.ht)) {
  { { (*return_value).type = 1; (*return_value).value.lval = 0; }; return; };
 }
 { (*return_value).type = 1; (*return_value).value.lval = 1; };

 for (zend_hash_internal_pointer_reset_ex((**input).value.ht, &pos);
   zend_hash_get_current_data_ex((**input).value.ht, (void **)&entry, &pos) == 0;
   zend_hash_move_forward_ex((**input).value.ht, &pos)) {

  if ((**entry).type == 4 || (**entry).type == 5)
   continue;

  entry_n = **entry;
  _zval_copy_ctor((&entry_n) );
  convert_scalar_to_number(&entry_n );

  if ((entry_n).type == 1 && (*return_value).type == 1) {
   dval = (double)(*return_value).value.lval * (double)(entry_n).value.lval;
   if ( (double)(-9223372036854775807L -1L) <= dval && dval <= (double)9223372036854775807L ) {
    (*return_value).value.lval *= (entry_n).value.lval;
    continue;
   }
  }
  convert_to_double(return_value);
  convert_to_double(&entry_n);
  (*return_value).value.dval *= (entry_n).value.dval;
 }
}




void zif_array_reduce(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input, **callback, **initial;
 zval **args[2];
 zval **operand;
 zval *result = ((void*)0);
 zval *retval;
 zend_fcall_info_cache fci_cache = empty_fcall_info_cache;
 char *callback_name;
 HashPosition pos;
 HashTable *htbl;

 if ((ht) < 2 || (ht) > 3 ||
  zend_get_parameters_ex((ht), &input, &callback, &initial) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The first argument should be an array");
  return;
 }

 if (!zend_is_callable(*callback, 0, &callback_name)) {
  php_error_docref0(((void*)0) , (1<<1L), "The second argument, '%s', should be a valid callback", callback_name);
  _efree((callback_name) );
  return;
 }
 _efree((callback_name) );

 if ((ht) > 2) {
  (result) = (zval *) _emalloc((sizeof(zval)) );
  *result = **initial;
  _zval_copy_ctor((result) );
  convert_to_long(result);
  (result)->refcount = 1; (result)->is_ref = 0;;
 } else {
  (result) = (zval *) _emalloc((sizeof(zval)) ); (result)->refcount = 1; (result)->is_ref = 0;;;
  { (*result).type = 0; };
 }





 htbl = (**input).value.ht;

 if (zend_hash_num_elements(htbl) == 0) {
  if (result) {
   { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(result); if (1) { _zval_copy_ctor((return_value) ); } if (1) { if (!1) { { (*result).type = 0; }; } _zval_ptr_dtor((&result) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
  }
  return;
 }

 zend_hash_internal_pointer_reset_ex(htbl, &pos);
 while (zend_hash_get_current_data_ex(htbl, (void **)&operand, &pos) == 0) {
  if (result) {
   zend_fcall_info fci;
   args[0] = &result;
   args[1] = operand;
   fci.size = sizeof(fci);
   fci.function_table = (executor_globals.function_table);
   fci.function_name = *callback;
   fci.symbol_table = ((void*)0);
   fci.object_pp = ((void*)0);
   fci.retval_ptr_ptr = &retval;
   fci.param_count = 2;
   fci.params = args;
   fci.no_separation = 0;

   if (zend_call_function(&fci, &fci_cache ) == 0 && retval) {
    _zval_ptr_dtor((&result) );
    result = retval;
   } else {
    php_error_docref0(((void*)0) , (1<<1L), "An error occurred while invoking the reduction callback");
    return;
   }
  } else {
   result = *operand;
   zval_add_ref(&result);
  }

  zend_hash_move_forward_ex(htbl, &pos);
 }

 { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(result); if (1) { _zval_copy_ctor((return_value) ); } if (1) { if (!1) { { (*result).type = 0; }; } _zval_ptr_dtor((&result) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
}




void zif_array_filter(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **input, **callback = ((void*)0);
 zval *array, *func = ((void*)0);
 zval **operand;
 zval **args[1];
 zval *retval = ((void*)0);
 char *callback_name;
 char *string_key;
 zend_fcall_info_cache fci_cache = empty_fcall_info_cache;
 uint string_key_len;
 ulong num_key;
 HashPosition pos;

 if ((ht) < 1 || (ht) > 2 ||
  zend_get_parameters_ex((ht), &input, &callback) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**input).type != 4) {
  php_error_docref0(((void*)0) , (1<<1L), "The first argument should be an array");
  return;
 }
 array = *input;

 if ((ht) > 1) {
  func = *callback;
  if (!zend_is_callable(func, 0, &callback_name)) {
   php_error_docref0(((void*)0) , (1<<1L), "The second argument, '%s', should be a valid callback", callback_name);
   _efree((callback_name) );
   return;
  }
  _efree((callback_name) );
 }

 _array_init((return_value) );
 if (zend_hash_num_elements((*array).value.ht) == 0) {
  return;
 }

 for (zend_hash_internal_pointer_reset_ex((*array).value.ht, &pos);
   zend_hash_get_current_data_ex((*array).value.ht, (void **)&operand, &pos) == 0;
   zend_hash_move_forward_ex((*array).value.ht, &pos)) {

  if (func) {
   zend_fcall_info fci;

   args[0] = operand;

   fci.size = sizeof(fci);
   fci.function_table = (executor_globals.function_table);
   fci.function_name = func;
   fci.symbol_table = ((void*)0);
   fci.object_pp = ((void*)0);
   fci.retval_ptr_ptr = &retval;
   fci.param_count = 1;
   fci.params = args;
   fci.no_separation = 0;

   if (zend_call_function(&fci, &fci_cache ) == 0 && retval) {
    if (!zend_is_true(retval)) {
     _zval_ptr_dtor((&retval) );
     continue;
    } else {
     _zval_ptr_dtor((&retval) );
    }
   } else {
    php_error_docref0(((void*)0) , (1<<1L), "An error occurred while invoking the filter callback");
    return;
   }
  } else if (!zend_is_true(*operand)) {
   continue;
  }

  zval_add_ref(operand);
  switch (zend_hash_get_current_key_ex((*array).value.ht, &string_key, &string_key_len, &num_key, 0, &pos)) {
   case 1:
    _zend_hash_add_or_update((*return_value).value.ht, string_key, string_key_len, operand, sizeof(zval *), ((void*)0), (1<<0) );
    break;

   case 2:
    _zend_hash_index_update_or_next_insert((*return_value).value.ht, num_key, operand, sizeof(zval *), ((void*)0), (1<<0) );
    break;
  }
 }
}




void zif_array_map(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval ***pargs = ((void*)0);
 zval ***params;
 zval *callback;
 zval *result, *null;
 HashPosition *array_pos;
 zval **args;
 char *callback_name;
 zend_fcall_info_cache fci_cache = empty_fcall_info_cache;
 int i, k, maxlen = 0;
 int *array_len;

 if ((ht) < 2) {
  { zend_wrong_param_count(); return; };
 }

 { (*return_value).type = 0; };

 pargs = (zval ***)_safe_emalloc(((ht)), (sizeof(zval **)), (0) );
 if (_zend_get_parameters_array_ex((ht), pargs ) == -1) {
  _efree((pargs) );
  { zend_wrong_param_count(); return; };
 }

 callback = *pargs[0];

 if ((*callback).type != 0) {
  if (!zend_is_callable(callback, 0, &callback_name)) {
   php_error_docref0(((void*)0) , (1<<1L), "The first argument, '%s', should be either NULL or a valid callback", callback_name);
   _efree((callback_name) );
   _efree((pargs) );
   return;
  }
  _efree((callback_name) );
 }

 args = (zval **)_safe_emalloc(((ht)), (sizeof(zval *)), (0) );
 array_len = (int *)_safe_emalloc(((ht)), (sizeof(int)), (0) );
 array_pos = (HashPosition *)_safe_emalloc(((ht)), (sizeof(HashPosition)), (0) );

 for (i = 1; i < (ht); i++) {
  if ((**pargs[i]).type != 4) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument #%d should be an array", i + 1);
   _efree((pargs) );
   _efree((args) );
   _efree((array_len) );
   _efree((array_pos) );
   return;
  }
  if (!((*pargs[i])->is_ref)) { { zval *orig_ptr = *(pargs[i]); if (orig_ptr->refcount>1) { orig_ptr->refcount--; (*(pargs[i])) = (zval *) _emalloc((sizeof(zval)) ); **(pargs[i]) = *orig_ptr; _zval_copy_ctor((*(pargs[i])) ); (*(pargs[i]))->refcount=1; (*(pargs[i]))->is_ref = 0; } }; };
  args[i] = *pargs[i];
  array_len[i] = zend_hash_num_elements((**pargs[i]).value.ht);
  if (array_len[i] > maxlen) {
   maxlen = array_len[i];
  }
  zend_hash_internal_pointer_reset_ex((**pargs[i]).value.ht, &array_pos[i]);
 }

 _efree((pargs) );


 if ((*callback).type == 0 && (ht) == 2) {
  { int is_ref, refcount; is_ref = (return_value)->is_ref; refcount = (return_value)->refcount; *(return_value) = *(args[1]); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (*args[1]).type = 0; }; } _zval_ptr_dtor((&args[1]) ); } (return_value)->is_ref = is_ref; (return_value)->refcount = refcount; };
  _efree((array_len) );
  _efree((array_pos) );
  _efree((args) );
  return;
 }

 _array_init((return_value) );
 params = (zval ***)_safe_emalloc(((ht)), (sizeof(zval **)), (0) );
 (null) = (zval *) _emalloc((sizeof(zval)) ); (null)->refcount = 1; (null)->is_ref = 0;;;
 { (*null).type = 0; };


 for (k = 0; k < maxlen; k++) {
  uint str_key_len;
  ulong num_key;
  char *str_key;
  int key_type = 0;





  if ((*callback).type == 0) {
   (result) = (zval *) _emalloc((sizeof(zval)) ); (result)->refcount = 1; (result)->is_ref = 0;;;
   _array_init((result) );
  }

  for (i = 1; i < (ht); i++) {




   if (k < array_len[i]) {
    zend_hash_get_current_data_ex((*args[i]).value.ht, (void **)&params[i], &array_pos[i]);





    if ((ht) == 2) {
     key_type = zend_hash_get_current_key_ex((*args[1]).value.ht, &str_key, &str_key_len, &num_key, 0, &array_pos[i]);
    }

    zend_hash_move_forward_ex((*args[i]).value.ht, &array_pos[i]);
   } else {
    params[i] = &null;
   }

   if ((*callback).type == 0) {
    zval_add_ref(params[i]);
    add_next_index_zval(result, *params[i]);
   }
  }

  if ((*callback).type != 0) {
   zend_fcall_info fci;

   fci.size = sizeof(fci);
   fci.function_table = (executor_globals.function_table);
   fci.function_name = callback;
   fci.symbol_table = ((void*)0);
   fci.object_pp = ((void*)0);
   fci.retval_ptr_ptr = &result;
   fci.param_count = (ht)-1;
   fci.params = &params[1];
   fci.no_separation = 0;

   if (zend_call_function(&fci, &fci_cache ) != 0 || !result) {
    php_error_docref0(((void*)0) , (1<<1L), "An error occurred while invoking the map callback");
    _efree((array_len) );
    _efree((args) );
    _efree((array_pos) );
    _zval_dtor((return_value) );
    _zval_ptr_dtor((&null) );
    _efree((params) );
    { { (*return_value).type = 0; }; return;};
   }
  }

  if ((ht) > 2) {
   add_next_index_zval(return_value, result);
  } else {
   if (key_type == 1) {
    add_assoc_zval_ex(return_value, str_key, str_key_len, result);
   } else {
    add_index_zval(return_value, num_key, result);
   }
  }
 }

 _zval_ptr_dtor((&null) );
 _efree((params) );
 _efree((array_len) );
 _efree((array_pos) );
 _efree((args) );
}




void zif_array_key_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **key,
   **array;

 if ((ht) != 2 ||
  zend_get_parameters_ex((ht), &key, &array) == -1) {
  { zend_wrong_param_count(); return; };
 }

 if ((**array).type != 4 && (**array).type != 5) {
  php_error_docref0(((void*)0) , (1<<1L), "The second argument should be either an array or an object");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 switch ((**key).type) {
  case 6:
   if (zend_symtable_exists(((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0)))), (**key).value.str.val, (**key).value.str.len+1)) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
   }
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  case 1:
   if (zend_hash_index_exists(((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0)))), (**key).value.lval)) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
   }
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
  case 0:
   if (zend_hash_exists(((**array).type==4 ? (**array).value.ht : (((**array).type==5 ? (**array).value.obj.handlers->get_properties((*array) ) : ((void*)0)))), "", 1)) {
    { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
   }
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };

  default:
   php_error_docref0(((void*)0) , (1<<1L), "The first argument should be either a string or an integer");
   { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

}




void zif_array_chunk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 int argc = (ht), key_type;
 long size, current = 0;
 char *str_key;
 uint str_key_len;
 ulong num_key;
 zend_bool preserve_keys = 0;
 zval *input = ((void*)0);
 zval *chunk = ((void*)0);
 zval **entry;
 HashPosition pos;

 if (zend_parse_parameters(argc , "al|b", &input, &size, &preserve_keys) == -1) {
  return;
 }

 if (size < 1) {
  php_error_docref0(((void*)0) , (1<<1L), "Size parameter expected to be greater than 0");
  return;
 }

 _array_init((return_value) );

 zend_hash_internal_pointer_reset_ex((*input).value.ht, &pos);
 while (zend_hash_get_current_data_ex((*input).value.ht, (void**)&entry, &pos) == 0) {

  if (!chunk) {
   (chunk) = (zval *) _emalloc((sizeof(zval)) ); (chunk)->refcount = 1; (chunk)->is_ref = 0;;;
   _array_init((chunk) );
  }


  zval_add_ref(entry);

  if (preserve_keys) {
   key_type = zend_hash_get_current_key_ex((*input).value.ht, &str_key,
             &str_key_len, &num_key, 0, &pos);
   if (key_type == 1) {
    add_assoc_zval_ex(chunk, str_key, str_key_len, *entry);
   } else {
    add_index_zval(chunk, num_key, *entry);
   }
  } else {
   add_next_index_zval(chunk, *entry);
  }





  if (!(++current % size)) {
   add_next_index_zval(return_value, chunk);
   chunk = ((void*)0);
  }

  zend_hash_move_forward_ex((*input).value.ht, &pos);
 }


 if (chunk) {
  add_next_index_zval(return_value, chunk);
 }
}




void zif_array_combine(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *values, *keys;
 HashPosition pos_values, pos_keys;
 zval **entry_keys, **entry_values;

 if (zend_parse_parameters((ht) , "aa", &keys, &values) == -1) {
  return;
 }

 if (zend_hash_num_elements((*keys).value.ht) != zend_hash_num_elements((*values).value.ht)) {
  php_error_docref0(((void*)0) , (1<<1L), "Both parameters should have an equal number of elements");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (!zend_hash_num_elements((*keys).value.ht)) {
  php_error_docref0(((void*)0) , (1<<1L), "Both parameters should have at least 1 element");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 _array_init((return_value) );

 zend_hash_internal_pointer_reset_ex((*keys).value.ht, &pos_keys);
 zend_hash_internal_pointer_reset_ex((*values).value.ht, &pos_values);
 while (zend_hash_get_current_data_ex((*keys).value.ht, (void **)&entry_keys, &pos_keys) == 0 &&
   zend_hash_get_current_data_ex((*values).value.ht, (void **)&entry_values, &pos_values) == 0) {
  if ((**entry_keys).type == 6) {
   zval_add_ref(entry_values);
   add_assoc_zval_ex(return_value, (**entry_keys).value.str.val, (**entry_keys).value.str.len+1, *entry_values);
  } else if ((**entry_keys).type == 1) {
   zval_add_ref(entry_values);
   add_index_zval(return_value, (**entry_keys).value.lval, *entry_values);
  } else {
   zval key;

   key = **entry_keys;
   _zval_copy_ctor((&key) );
   if ((&key)->type != 6) { _convert_to_string((&key) ); };

   zval_add_ref(entry_values);
   add_assoc_zval_ex(return_value, (key).value.str.val, (key).value.str.len+1, *entry_values);

   _zval_dtor((&key) );
  }
  zend_hash_move_forward_ex((*keys).value.ht, &pos_keys);
  zend_hash_move_forward_ex((*values).value.ht, &pos_values);
 }
}
