# 1 "ext/iconv/iconv.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "ext/iconv/iconv.c" 2
# 27 "ext/iconv/iconv.c"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_version.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 53 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 2911 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h"
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
# 2912 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 2
# 2927 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h"
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
# 2928 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 2
# 2938 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h"
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
# 2939 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 2
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_config.h" 2
# 54 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 80 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 241 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_errors.h" 1
# 242 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 21 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2

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
# 79 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
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
# 128 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
         int zend_set_memory_limit(size_t memory_limit);

         void start_memory_manager(void);
         void shutdown_memory_manager(int silent, int full_shutdown );
         int is_zend_mm(void);
# 145 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
         size_t zend_memory_usage(int real_usage );
         size_t zend_memory_peak_usage(int real_usage );
# 191 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

         zend_mm_heap *zend_mm_startup(void);
         void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent);
         void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
         void _zend_mm_free(zend_mm_heap *heap, void *p );
         void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
         size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
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
# 243 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
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
# 245 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2


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
# 248 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 263 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
static const char long_min_digits[] = "9223372036854775808";
# 276 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h" 2
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
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
# 207 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
         void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
         void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
         void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
         int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
         int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
         int zend_hash_minmax(HashTable *ht, compare_func_t compar, int flag, void **pData );




         int zend_hash_num_elements(HashTable *ht);

         int zend_hash_rehash(HashTable *ht);
# 254 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
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
# 338 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest) {

 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; long idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { idx = -idx; if (idx > 0) { break; } } else if (idx < 0) { break; } return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } while (0);
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, char *arKey, uint nKeyLength)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; long idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { idx = -idx; if (idx > 0) { break; } } else if (idx < 0) { break; } return zend_hash_del_key_or_index(ht, ((void*)0), 0, idx, 1); } } } while (0);
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, char *arKey, uint nKeyLength, void **pData)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; long idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { idx = -idx; if (idx > 0) { break; } } else if (idx < 0) { break; } return zend_hash_index_find(ht, idx, pData); } } } while (0);
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, char *arKey, uint nKeyLength)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; long idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { idx = -idx; if (idx > 0) { break; } } else if (idx < 0) { break; } return zend_hash_index_exists(ht, idx); } } } while (0);
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key(HashTable *ht, char *arKey, uint nKeyLength)
{
 do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; long idx; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 20 - 1) || (8 == 4 && end - tmp == 20 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { idx = -idx; if (idx > 0) { break; } } else if (idx < 0) { break; } return zend_hash_update_current_key_ex(ht, 2, ((void*)0), 0, idx, ((void*)0)); } } } while (0);
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, ((void*)0));
}
# 277 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h" 2

typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






         int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
         int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
         void zend_ts_hash_destroy(TsHashTable *ht);
         void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ts_hash.h"
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
# 278 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
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
# 279 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2






void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));
# 294 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h"
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
# 312 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

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



         enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


         zval *zend_iterator_wrap(zend_object_iterator *iter );

         void zend_register_iterator_wrapper(void);
# 341 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

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


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h"
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
# 401 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
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
# 463 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions, int start_builtin_functions);
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);





void zend_set_utility_values(zend_utility_values *utility_values);


         void _zend_bailout(char *filename, uint lineno);
# 496 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 520 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
         void free_estring(char **str_p);
# 542 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 574 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
         void zend_message_dispatcher(long message, void *data);

         int zend_get_configuration_directive(char *name, uint name_length, zval *contents);
# 681 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 69 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2





# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_strtod.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_strtod.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_strtod.h" 2


         void zend_freedtoa(char *s);
         char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
         double zend_strtod(const char *s00, char **se);
         double zend_hex_strtod(const char *str, char **endptr);
         double zend_oct_strtod(const char *str, char **endptr);
         int zend_startup_strtod(void);
         int zend_shutdown_strtod(void);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2






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
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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

         void zend_locale_sprintf_double(zval *op );
# 682 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h"
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
# 78 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h"
         void zval_add_ref(zval **p);
# 683 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_qsort.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_qsort.h"
         void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 1
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
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
# 150 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
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
# 323 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
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
typedef struct _zend_scanner_globals zend_scanner_globals;
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern zend_executor_globals executor_globals;
# 56 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern zend_scanner_globals language_scanner_globals;
# 66 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals_macros.h"
extern zend_scanner_globals ini_scanner_globals;
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stack.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stack.h"
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
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ptr_stack.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ptr_stack.h"
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
# 55 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ptr_stack.h"
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
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects.h"
         void zend_object_std_init(zend_object *object, zend_class_entry *ce );
         void zend_object_std_dtor(zend_object *object );
         zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
         void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
         zend_object *zend_objects_get_address(zval *object );
         void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
         zend_object_value zend_objects_clone_obj(zval *object );
         void zend_objects_free_object_storage(zend_object *object );
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
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 57 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 1
# 58 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2





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
# 150 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h"
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
# 283 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h"
};
# 324 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 2



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
# 353 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
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




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_vm_opcodes.h" 1
# 574 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 2
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 2








extern struct _zend_arg_info first_arg_force_ref[2];
extern struct _zend_arg_info second_arg_force_ref[3];
extern struct _zend_arg_info third_arg_force_ref[4];
extern struct _zend_arg_info fourth_arg_force_ref[5];
extern struct _zend_arg_info fifth_arg_force_ref[6];
extern struct _zend_arg_info all_args_by_ref[1];
# 73 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h"
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
# 119 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h"
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
# 226 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
         zval** zend_get_compiled_variable_value(zend_execute_data *execute_data_ptr, zend_uint var);







         int zend_set_user_opcode_handler(zend_uchar opcode, opcode_handler_t handler);
         opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

         zval *zend_get_zval_ptr(znode *node, temp_variable *Ts, zend_free_op *should_free, int type );
         zval **zend_get_zval_ptr_ptr(znode *node, temp_variable *Ts, zend_free_op *should_free, int type );

         int zend_do_fcall(zend_execute_data *execute_data );
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;
# 168 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
int zend_next_free_module(void);


         int zend_get_parameters(int ht, int param_count, ...);
         int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
         int zend_get_parameters_ex(int param_count, ...);
         int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


         int zend_copy_parameters_array(int param_count, zval *argument_array );
# 188 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 286 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 320 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 368 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 402 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 74 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_regex.h" 1
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_regex.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex_extra.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_regex.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex.h" 1
# 17 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex.h"
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
# 62 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex.h"
size_t php_regerror(int, const regex_t *, char *, size_t);



int php_regexec(const regex_t *, const char *, size_t, regmatch_t [], int);
# 76 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex.h"
void php_regfree(regex_t *);
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_regex.h" 2



# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex_extra.h" 1
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_regex.h" 2
# 75 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 84 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 85 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 100 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/build-defs.h" 1
# 101 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 126 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
       size_t php_strlcpy(char *dst, const char *src, size_t siz);







       size_t php_strlcat(char *dst, const char *src, size_t siz);
# 161 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
# 162 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

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
# 164 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 175 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php3_compat.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php3_compat.h"
typedef zval pval;
# 176 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 190 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/safe_mode.h" 1
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/safe_mode.h"
       int php_checkuid(const char *filename, const char *fopen_mode, int mode);
       int php_checkuid_ex(const char *filename, const char *fopen_mode, int mode, int flags);
       char *php_get_current_user(void);
# 191 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2






# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/regex/regex_extra.h" 1
# 198 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2






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
# 205 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
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
# 206 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 234 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h" 1
# 73 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
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
# 117 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 142 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 235 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/spprintf.h" 1
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/spprintf.h"
       int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

       int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));
# 237 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 260 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
extern char **environ;
# 272 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
# 302 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
       void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
       void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
       void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));
# 323 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
int php_register_internal_extensions(void);

int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );

       void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);

       void php_com_initialize(void);
# 383 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
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
# 110 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
void zif_output_add_rewrite_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_output_reset_rewrite_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 384 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 399 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
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
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2


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
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2


       int php_file_le_stream(void);
       int php_file_le_pstream(void);
       int php_file_le_stream_filter(void);
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
# 96 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_context.h"
       void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
       php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);
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
# 144 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


       int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
       int php_stream_filter_unregister_factory(const char *filterpattern );
       int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
       php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );
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
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;


 int err_count;
 char **err_stack;
};
# 188 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
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
# 258 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
       int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 272 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
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
# 400 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
       int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );
# 420 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
       size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

       size_t _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





       size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



       size_t _php_stream_passthru(php_stream * src );




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h" 1
# 22 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h"
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
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


       int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
       int php_stream_xport_unregister(char *protocol );
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h"
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
# 438 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_plain_wrapper.h"
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
# 439 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_userspace.h" 1
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_userspace.h"
       extern php_stream_ops php_stream_userspace_ops;
       extern php_stream_ops php_stream_userspace_dir_ops;
# 440 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
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
       char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



       int _php_stream_mmap_unmap(php_stream *stream );


       int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );
# 441 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 458 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
       int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );
# 514 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
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
# 538 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
       void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...);
# 549 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
       int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



       HashTable *_php_stream_get_url_stream_wrappers_hash(void);

       HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
       HashTable *_php_get_stream_filters_hash(void);

       HashTable *php_get_stream_filters_hash_global(void);
# 400 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h" 2
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h"
       php_stream *_php_stream_memory_create(int mode );
       php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
       char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

       php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
       php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern php_stream_ops php_stream_memory_ops;
extern php_stream_ops php_stream_temp_ops;
extern php_stream_ops php_stream_rfc2397_ops;
extern php_stream_wrapper php_stream_rfc2397_wrapper;
# 401 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_globals.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_globals.h"
typedef struct _php_core_globals php_core_globals;






extern struct _php_core_globals core_globals;
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_globals.h"
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
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h" 2

       int php_fopen_primary_script(zend_file_handle *file_handle );
       char *expand_filepath(const char *filepath, char *real_path );
       char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );

       int php_check_open_basedir(const char *path );
       int php_check_open_basedir_ex(const char *path, int warn );
       int php_check_specific_open_basedir(const char *basedir, const char *path );

       int php_check_safe_mode_include_dir(const char *path );

       FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

       char *php_strip_url_passwd(char *path);
# 402 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2



# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 1
# 13 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 14 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 2
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 2






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
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 2
# 89 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
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
# 90 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h" 2
# 135 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
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
# 182 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
        int virtual_utime(const char *filename, struct utimbuf *buf );

        int virtual_chmod(const char *filename, mode_t mode );

        int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 196 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_virtual_cwd.h"
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
# 406 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h"
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
# 408 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2






# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h" 2





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
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_reentrancy.h" 2
# 415 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 28 "ext/iconv/iconv.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/info.h" 1
# 59 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/info.h"
void zif_phpversion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_phpinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_phpcredits(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_real_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_zend_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_egg_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_sapi_name(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_uname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_ini_scanned_files(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_ini_loaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
       char *php_info_html_esc(char *string );
       void php_info_html_esc_write(char *string, int str_len );
       void php_print_info_htmlhead(void);
       void php_print_info(int flag );
       void php_print_style(void);
       void php_info_print_style(void);
       void php_info_print_table_colspan_header(int num_cols, char *header);
       void php_info_print_table_header(int num_cols, ...);
       void php_info_print_table_row(int num_cols, ...);
       void php_info_print_table_row_ex(int num_cols, const char *, ...);
       void php_info_print_table_start(void);
       void php_info_print_table_end(void);
       void php_info_print_box_start(int bg);
       void php_info_print_box_end(void);
       void php_info_print_hr(void);
       void php_info_print_module(zend_module_entry *module );
       char *php_logo_guid(void);
       char *php_get_uname(char mode);

void register_phpinfo_constants(int type, int module_number );
# 30 "ext/iconv/iconv.c" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h" 1
# 48 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 char *header;
 uint header_len;
 zend_bool replace;
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


extern sapi_module_struct sapi_module;
# 77 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
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
 time_t global_request_time;
 HashTable known_post_content_types;
} sapi_globals_struct;
# 141 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
extern sapi_globals_struct sapi_globals;


         void sapi_startup(sapi_module_struct *sf);
         void sapi_shutdown(void);
         void sapi_activate(void);
         void sapi_deactivate(void);
         void sapi_initialize_empty_request(void);
# 162 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 char *line;
 uint line_len;
 long response_code;
} sapi_header_line;

typedef enum {
 SAPI_HEADER_REPLACE,
 SAPI_HEADER_ADD,
 SAPI_HEADER_SET_STATUS
} sapi_header_op_enum;


         int sapi_header_op(sapi_header_op_enum op, void *arg );


         int sapi_add_header_ex(char *header_line, uint header_line_len, zend_bool duplicate, zend_bool replace );



         int sapi_send_headers(void);
         void sapi_free_header(sapi_header_struct *sapi_header);
         void sapi_handle_post(void *arg );

         int sapi_register_post_entries(sapi_post_entry *post_entry );
         int sapi_register_post_entry(sapi_post_entry *post_entry );
         void sapi_unregister_post_entry(sapi_post_entry *post_entry );
         int sapi_register_default_post_reader(void (*default_post_reader)(void));
         int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray ));
         int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len ));

         int sapi_flush(void);
         struct stat *sapi_get_stat(void);
         char *sapi_getenv(char *name, size_t name_len );

         char *sapi_get_default_content_type(void);
         void sapi_get_default_content_type_header(sapi_header_struct *default_header );
         size_t sapi_apply_default_charset(char **mimetype, size_t len );
         void sapi_activate_headers_only(void);

         int sapi_get_fd(int *fd );
         int sapi_force_http_10(void);

         int sapi_get_target_uid(uid_t * );
         int sapi_get_target_gid(gid_t * );
         time_t sapi_get_request_time(void);


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

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_headers_struct *sapi_headers );
 int (*send_headers)(sapi_headers_struct *sapi_headers );
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context );

 int (*read_post)(char *buffer, uint count_bytes );
 char *(*read_cookies)(void);

 void (*register_server_variables)(zval *track_vars_array );
 void (*log_message)(char *message);
 time_t (*get_request_time)(void);

 char *php_ini_path_override;

 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);

 void (*default_post_reader)(void);
 void (*treat_data)(int arg, char *str, zval *destArray );
 char *executable_location;

 int php_ini_ignore;

 int (*get_fd)(int *fd );

 int (*force_http_10)(void);

 int (*get_target_uid)(uid_t * );
 int (*get_target_gid)(gid_t * );

 unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

 void (*ini_defaults)(HashTable *configuration_hash);
 int phpinfo_as_text;

 char *ini_entries;
};


struct _sapi_post_entry {
 char *content_type;
 uint content_type_len;
 void (*post_reader)(void);
 void (*post_handler)(char *content_type_dup, void *arg );
};
# 293 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
         void sapi_read_standard_form_data(void);
         void php_default_post_reader(void);
         void php_default_treat_data(int arg, char *str, zval* destArray );
         unsigned int php_default_input_filter(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );
# 32 "ext/iconv/iconv.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h" 1
# 60 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
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
# 177 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
         int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
         int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
# 196 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, int callback_type, void *arg);

         int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, zend_ini_parser_cb_t ini_parser_cb, void *arg);
         int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, zend_ini_parser_cb_t ini_parser_cb, void *arg);






typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h" 2


int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
       zval *cfg_get_entry(char *name, uint name_length);
       int cfg_get_long(char *varname, long *result);
       int cfg_get_double(char *varname, double *result);
       int cfg_get_string(char *varname, char **result);
# 33 "ext/iconv/iconv.c" 2





# 1 "/usr/include/errno.h" 1 3 4
# 39 "ext/iconv/iconv.c" 2

# 1 "ext/iconv/php_iconv.h" 1
# 36 "ext/iconv/php_iconv.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_have_iconv.h" 1
# 37 "ext/iconv/php_iconv.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_have_libiconv.h" 1
# 38 "ext/iconv/php_iconv.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_have_glibc_iconv.h" 1
# 39 "ext/iconv/php_iconv.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_have_bsd_iconv.h" 1
# 40 "ext/iconv/php_iconv.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_iconv_supports_errno.h" 1
# 41 "ext/iconv/php_iconv.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_php_iconv_impl.h" 1
# 42 "ext/iconv/php_iconv.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/iconv/php_php_iconv_h_path.h" 1
# 43 "ext/iconv/php_iconv.h" 2



extern zend_module_entry iconv_module_entry;


int zm_startup_miconv(int type, int module_number );
int zm_shutdown_miconv(int type, int module_number );
void zm_info_miconv(zend_module_entry *zend_module );

void php_if_iconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_iconv_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_get_encoding(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_set_encoding(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_strlen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_mime_encode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_mime_decode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iconv_mime_decode_headers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

typedef struct _zend_iconv_globals {
 char *input_encoding;
 char *internal_encoding;
 char *output_encoding;
} zend_iconv_globals;
# 86 "ext/iconv/php_iconv.h"
typedef enum _php_iconv_err_t {
 PHP_ICONV_ERR_SUCCESS = 0,
 PHP_ICONV_ERR_CONVERTER = 1,
 PHP_ICONV_ERR_WRONG_CHARSET = 2,
 PHP_ICONV_ERR_TOO_BIG = 3,
 PHP_ICONV_ERR_ILLEGAL_SEQ = 4,
 PHP_ICONV_ERR_ILLEGAL_CHAR = 5,
 PHP_ICONV_ERR_UNKNOWN = 6,
 PHP_ICONV_ERR_MALFORMED = 7,
 PHP_ICONV_ERR_ALLOC = 8
} php_iconv_err_t;


              php_iconv_err_t php_iconv_string(const char * in_p, size_t in_len, char **out, size_t *out_len, const char *out_charset, const char *in_charset);
# 41 "ext/iconv/iconv.c" 2




# 1 "/usr/include/iconv.h" 1
# 23 "/usr/include/iconv.h"
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3
# 24 "/usr/include/iconv.h" 2





typedef void *iconv_t;







extern iconv_t iconv_open (const char *__tocode, const char *__fromcode);




extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
       size_t *__restrict __inbytesleft,
       char **__restrict __outbuf,
       size_t *__restrict __outbytesleft);





extern int iconv_close (iconv_t __cd);
# 46 "ext/iconv/iconv.c" 2





# 1 "/usr/include/x86_64-linux-gnu/gnu/libc-version.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/gnu/libc-version.h" 3 4
extern const char *gnu_get_libc_release (void) __attribute__ ((__nothrow__ ));


extern const char *gnu_get_libc_version (void) __attribute__ ((__nothrow__ ));
# 52 "ext/iconv/iconv.c" 2






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
# 59 "ext/iconv/iconv.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/base64.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/base64.h"
void zif_base64_decode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_base64_encode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

       extern unsigned char *php_base64_encode(const unsigned char *, int, int *);
       extern unsigned char *php_base64_decode_ex(const unsigned char *, int, int *, zend_bool);
       extern unsigned char *php_base64_decode(const unsigned char *, int, int *);
# 60 "ext/iconv/iconv.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/quot_print.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/quot_print.h"
       unsigned char *php_quot_print_decode(const unsigned char *str, size_t length, size_t *ret_length, int replace_us_by_ws);

void zif_quoted_printable_decode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 61 "ext/iconv/iconv.c" 2





static
zend_arg_info arginfo_iconv_strlen[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 1 },
 { "str", sizeof("str")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_substr[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 2 },
 { "str", sizeof("str")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "offset", sizeof("offset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "length", sizeof("length")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_strpos[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 2 },
 { "haystack", sizeof("haystack")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "needle", sizeof("needle")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "offset", sizeof("offset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_strrpos[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 2 },
 { "haystack", sizeof("haystack")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "needle", sizeof("needle")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_mime_encode[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 2 },
 { "field_name", sizeof("field_name")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "field_value", sizeof("field_value")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "preference", sizeof("preference")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_mime_decode[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 1 },
 { "encoded_string", sizeof("encoded_string")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "mode", sizeof("mode")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_mime_decode_headers[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 1 },
 { "headers", sizeof("headers")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "mode", sizeof("mode")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, -1 },
 { "in_charset", sizeof("in_charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "out_charset", sizeof("out_charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "str", sizeof("str")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_ob_iconv_handler[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, -1 },
 { "contents", sizeof("contents")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "status", sizeof("status")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_set_encoding[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, -1 },
 { "type", sizeof("type")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "charset", sizeof("charset")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};

static
zend_arg_info arginfo_iconv_get_encoding[] = { { ((void*)0), 0, ((void*)0), 0, 0, 0, 0, 0, 0 },
 { "type", sizeof("type")-1, ((void*)0), 0, 0, 0, 0, 0, 0 },
};





zend_function_entry iconv_functions[] = {
 { "iconv", php_if_iconv, arginfo_iconv, (zend_uint) (sizeof(arginfo_iconv)/sizeof(struct _zend_arg_info)-1), 0 },
 { "ob_iconv_handler", zif_ob_iconv_handler, arginfo_ob_iconv_handler, (zend_uint) (sizeof(arginfo_ob_iconv_handler)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_get_encoding", zif_iconv_get_encoding, arginfo_iconv_get_encoding, (zend_uint) (sizeof(arginfo_iconv_get_encoding)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_set_encoding", zif_iconv_set_encoding, arginfo_iconv_set_encoding, (zend_uint) (sizeof(arginfo_iconv_set_encoding)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_strlen", zif_iconv_strlen, arginfo_iconv_strlen, (zend_uint) (sizeof(arginfo_iconv_strlen)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_substr", zif_iconv_substr, arginfo_iconv_substr, (zend_uint) (sizeof(arginfo_iconv_substr)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_strpos", zif_iconv_strpos, arginfo_iconv_strpos, (zend_uint) (sizeof(arginfo_iconv_strpos)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_strrpos", zif_iconv_strrpos, arginfo_iconv_strrpos, (zend_uint) (sizeof(arginfo_iconv_strrpos)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_mime_encode", zif_iconv_mime_encode, arginfo_iconv_mime_encode, (zend_uint) (sizeof(arginfo_iconv_mime_encode)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_mime_decode", zif_iconv_mime_decode, arginfo_iconv_mime_decode, (zend_uint) (sizeof(arginfo_iconv_mime_decode)/sizeof(struct _zend_arg_info)-1), 0 },
 { "iconv_mime_decode_headers", zif_iconv_mime_decode_headers, arginfo_iconv_mime_decode_headers, (zend_uint) (sizeof(arginfo_iconv_mime_decode_headers)/sizeof(struct _zend_arg_info)-1), 0 },
 {((void*)0), ((void*)0), ((void*)0)}
};


zend_iconv_globals iconv_globals;
static void zm_globals_ctor_iconv(zend_iconv_globals *iconv_globals );



zend_module_entry iconv_module_entry = {
 sizeof(zend_module_entry), 20060613, 0, 0, ((void*)0), ((void*)0),
 "iconv",
 iconv_functions,
 zm_startup_miconv,
 zm_shutdown_miconv,
 ((void*)0),
 ((void*)0),
 zm_info_miconv,
 ((void*)0),
 sizeof(zend_iconv_globals), &iconv_globals,
 ((void (*)(void* ))(zm_globals_ctor_iconv)),
 ((void*)0),
 ((void*)0),
 0, 0, ((void*)0), 0
};







static void zm_globals_ctor_iconv(zend_iconv_globals *iconv_globals )
{
 iconv_globals->input_encoding = ((void*)0);
 iconv_globals->output_encoding = ((void*)0);
 iconv_globals->internal_encoding = ((void*)0);
}







typedef enum _php_iconv_enc_scheme_t {
 PHP_ICONV_ENC_SCHEME_BASE64,
 PHP_ICONV_ENC_SCHEME_QPRINT
} php_iconv_enc_scheme_t;






static php_iconv_err_t _php_iconv_appendl(smart_str *d, const char *s, size_t l, iconv_t cd);
static php_iconv_err_t _php_iconv_appendc(smart_str *d, const char c, iconv_t cd);

static void _php_iconv_show_error(php_iconv_err_t err, const char *out_charset, const char *in_charset );

static php_iconv_err_t _php_iconv_strlen(unsigned int *pretval, const char *str, size_t nbytes, const char *enc);

static php_iconv_err_t _php_iconv_substr(smart_str *pretval, const char *str, size_t nbytes, int offset, int len, const char *enc);

static php_iconv_err_t _php_iconv_strpos(unsigned int *pretval, const char *haystk, size_t haystk_nbytes, const char *ndl, size_t ndl_nbytes, int offset, const char *enc);

static php_iconv_err_t _php_iconv_mime_encode(smart_str *pretval, const char *fname, size_t fname_nbytes, const char *fval, size_t fval_nbytes, unsigned int max_line_len, const char *lfchars, php_iconv_enc_scheme_t enc_scheme, const char *out_charset, const char *enc);

static php_iconv_err_t _php_iconv_mime_decode(smart_str *pretval, const char *str, size_t str_nbytes, const char *enc, const char **next_pos, int mode);

static php_iconv_err_t php_iconv_stream_filter_register_factory(void);
static php_iconv_err_t php_iconv_stream_filter_unregister_factory(void);



static char _generic_superset_name[] = "UCS-4LE";




static int OnUpdateStringIconvCharset(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage )
{
 if(new_value_length >= 64) {
  return -1;
 }
 OnUpdateString(entry, new_value, new_value_length, mh_arg1, mh_arg2, mh_arg3, stage );
 return 0;
}



static zend_ini_entry ini_entries[] = {
 { 0, ((1<<0)|(1<<1)|(1<<2)), "iconv.input_encoding", sizeof("iconv.input_encoding"), OnUpdateStringIconvCharset, (void *) ((long) (((char *) (&(((zend_iconv_globals*)((void*)0))->input_encoding))) - ((char *) ((void*)0)))), (void *) &iconv_globals, ((void*)0), "ISO-8859-1", sizeof("ISO-8859-1")-1, ((void*)0), 0, 0, ((void*)0) },
 { 0, ((1<<0)|(1<<1)|(1<<2)), "iconv.output_encoding", sizeof("iconv.output_encoding"), OnUpdateStringIconvCharset, (void *) ((long) (((char *) (&(((zend_iconv_globals*)((void*)0))->output_encoding))) - ((char *) ((void*)0)))), (void *) &iconv_globals, ((void*)0), "ISO-8859-1", sizeof("ISO-8859-1")-1, ((void*)0), 0, 0, ((void*)0) },
 { 0, ((1<<0)|(1<<1)|(1<<2)), "iconv.internal_encoding", sizeof("iconv.internal_encoding"), OnUpdateStringIconvCharset, (void *) ((long) (((char *) (&(((zend_iconv_globals*)((void*)0))->internal_encoding))) - ((char *) ((void*)0)))), (void *) &iconv_globals, ((void*)0), "ISO-8859-1", sizeof("ISO-8859-1")-1, ((void*)0), 0, 0, ((void*)0) },
{ 0, 0, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), 0, 0, ((void*)0) } };



int zm_startup_miconv(int type, int module_number )
{
 char *version = "unknown";

 zend_register_ini_entries(ini_entries, module_number );
# 269 "ext/iconv/iconv.c"
 version = (char *)gnu_get_libc_version();





 zend_register_string_constant(("ICONV_IMPL"), sizeof("ICONV_IMPL"), ("glibc"), ((1<<0) | (1<<1)), module_number );







 zend_register_string_constant(("ICONV_VERSION"), sizeof("ICONV_VERSION"), (version), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("ICONV_MIME_DECODE_STRICT"), sizeof("ICONV_MIME_DECODE_STRICT"), ((1<<0)), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("ICONV_MIME_DECODE_CONTINUE_ON_ERROR"), sizeof("ICONV_MIME_DECODE_CONTINUE_ON_ERROR"), ((1<<1)), ((1<<0) | (1<<1)), module_number );

 if (php_iconv_stream_filter_register_factory() != PHP_ICONV_ERR_SUCCESS) {
  return -1;
 }

 return 0;
}



int zm_shutdown_miconv(int type, int module_number )
{
 php_iconv_stream_filter_unregister_factory();
 zend_unregister_ini_entries(module_number );
 return 0;
}



void zm_info_miconv(zend_module_entry *zend_module )
{
 zval iconv_impl, iconv_ver;

 zend_get_constant("ICONV_IMPL", sizeof("ICONV_IMPL")-1, &iconv_impl );
 zend_get_constant("ICONV_VERSION", sizeof("ICONV_VERSION")-1, &iconv_ver );

 php_info_print_table_start();
 php_info_print_table_row(2, "iconv support", "enabled");
 php_info_print_table_row(2, "iconv implementation", (iconv_impl).value.str.val);
 php_info_print_table_row(2, "iconv library version", (iconv_ver).value.str.val);
 php_info_print_table_end();

 display_ini_entries(zend_module);

 _zval_dtor((&iconv_impl) );
 _zval_dtor((&iconv_ver) );
}



static php_iconv_err_t _php_iconv_appendl(smart_str *d, const char *s, size_t l, iconv_t cd)
{
 const char *in_p = s;
 size_t in_left = l;
 char *out_p;
 size_t out_left = 0;
 size_t buf_growth = 128;




 if (in_p != ((void*)0)) {
  while (in_left > 0) {
   out_left = buf_growth - out_left;
   {
    size_t newlen;
    do { if (!(((d)))->c) { (((d)))->len = 0; newlen = ((out_left)); (((d)))->a = newlen < 78 ? 78 : newlen + 128; (((d)))->c = (((((0))))?__zend_realloc((((((d)))->c)), (((((d)))->a + 1))):_erealloc(((((((d)))->c))), ((((((d)))->a + 1))), 0 )); } else { newlen = (((d)))->len + ((out_left)); if (newlen >= (((d)))->a) { (((d)))->a = newlen + 128; (((d)))->c = (((((0))))?__zend_realloc((((((d)))->c)), (((((d)))->a + 1))):_erealloc(((((((d)))->c))), ((((((d)))->a + 1))), 0 )); } } } while (0);
   }

   out_p = (d)->c + (d)->len;

   if (iconv(cd, (char **)&in_p, &in_left, (char **) &out_p, &out_left) == (size_t)-1) {

    switch ((*__errno_location ())) {
     case 22:
      return PHP_ICONV_ERR_ILLEGAL_CHAR;

     case 84:
      return PHP_ICONV_ERR_ILLEGAL_SEQ;

     case 7:
      break;

     default:
      return PHP_ICONV_ERR_UNKNOWN;
    }





   }



   (d)->len += (buf_growth - out_left);
   buf_growth <<= 1;
  }
 } else {
  for (;;) {
   out_left = buf_growth - out_left;
   {
    size_t newlen;
    do { if (!(((d)))->c) { (((d)))->len = 0; newlen = ((out_left)); (((d)))->a = newlen < 78 ? 78 : newlen + 128; (((d)))->c = (((((0))))?__zend_realloc((((((d)))->c)), (((((d)))->a + 1))):_erealloc(((((((d)))->c))), ((((((d)))->a + 1))), 0 )); } else { newlen = (((d)))->len + ((out_left)); if (newlen >= (((d)))->a) { (((d)))->a = newlen + 128; (((d)))->c = (((((0))))?__zend_realloc((((((d)))->c)), (((((d)))->a + 1))):_erealloc(((((((d)))->c))), ((((((d)))->a + 1))), 0 )); } } } while (0);
   }

   out_p = (d)->c + (d)->len;

   if (iconv(cd, ((void*)0), ((void*)0), (char **) &out_p, &out_left) == (size_t)0) {
    (d)->len += (buf_growth - out_left);
    break;
   } else {

    if ((*__errno_location ()) != 7) {
     return PHP_ICONV_ERR_UNKNOWN;
    }





   }
   (d)->len += (buf_growth - out_left);
   buf_growth <<= 1;
  }
 }
 return PHP_ICONV_ERR_SUCCESS;
}



static php_iconv_err_t _php_iconv_appendc(smart_str *d, const char c, iconv_t cd)
{
 return _php_iconv_appendl(d, &c, 1, cd);
}




              php_iconv_err_t php_iconv_string(const char *in_p, size_t in_len,
       char **out, size_t *out_len,
       const char *out_charset, const char *in_charset)
{
# 486 "ext/iconv/iconv.c"
 iconv_t cd;
 size_t in_left, out_size, out_left;
 char *out_p, *out_buf, *tmp_buf;
 size_t bsz, result = 0;
 php_iconv_err_t retval = PHP_ICONV_ERR_SUCCESS;

 *out = ((void*)0);
 *out_len = 0;

 cd = iconv_open(out_charset, in_charset);

 if (cd == (iconv_t)(-1)) {
  if ((*__errno_location ()) == 22) {
   return PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   return PHP_ICONV_ERR_CONVERTER;
  }
 }
 in_left= in_len;
 out_left = in_len + 32;
 out_size = 0;
 bsz = out_left;
 out_buf = (char *) _emalloc((bsz+1) );
 out_p = out_buf;

 while (in_left > 0) {
  result = iconv(cd, (char **) &in_p, &in_left, (char **) &out_p, &out_left);
  out_size = bsz - out_left;
  if (result == (size_t)(-1)) {
   if ((*__errno_location ()) == 7 && in_left > 0) {

    bsz += in_len;

    tmp_buf = (char*) _erealloc((out_buf), (bsz+1), 0 );
    out_p = out_buf = tmp_buf;
    out_p += out_size;
    out_left = bsz - out_size;
    continue;
   }
  }
  break;
 }

 if (result != (size_t)(-1)) {

  for (;;) {
      result = iconv(cd, ((void*)0), ((void*)0), (char **) &out_p, &out_left);
   out_size = bsz - out_left;

   if (result != (size_t)(-1)) {
    break;
   }

   if ((*__errno_location ()) == 7) {
    bsz += 16;
    tmp_buf = (char *) _erealloc((out_buf), (bsz), 0 );

    out_p = out_buf = tmp_buf;
    out_p += out_size;
    out_left = bsz - out_size;
   } else {
    break;
   }
  }
 }

 iconv_close(cd);

 if (result == (size_t)(-1)) {
  switch ((*__errno_location ())) {
   case 22:
    retval = PHP_ICONV_ERR_ILLEGAL_CHAR;
    break;

   case 84:
    retval = PHP_ICONV_ERR_ILLEGAL_SEQ;
    break;

   case 7:

    retval = PHP_ICONV_ERR_TOO_BIG;
    break;

   default:

    retval = PHP_ICONV_ERR_UNKNOWN;
    _efree((out_buf) );
    return PHP_ICONV_ERR_UNKNOWN;
  }
 }
 *out_p = '\0';
 *out = out_buf;
 *out_len = out_size;
 return retval;

}



static php_iconv_err_t _php_iconv_strlen(unsigned int *pretval, const char *str, size_t nbytes, const char *enc)
{
 char buf[4*2];

 php_iconv_err_t err = PHP_ICONV_ERR_SUCCESS;

 iconv_t cd;

 const char *in_p;
 size_t in_left;

 char *out_p;
 size_t out_left;

 unsigned int cnt;

 *pretval = (unsigned int)-1;

 cd = iconv_open(_generic_superset_name, enc);

 if (cd == (iconv_t)(-1)) {

  if ((*__errno_location ()) == 22) {
   return PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   return PHP_ICONV_ERR_CONVERTER;
  }



 }

 (*__errno_location ()) = out_left = 0;

 for (in_p = str, in_left = nbytes, cnt = 0; in_left > 0; cnt+=2) {
  size_t prev_in_left;
  out_p = buf;
  out_left = sizeof(buf);

  prev_in_left = in_left;

  if (iconv(cd, (char **)&in_p, &in_left, (char **) &out_p, &out_left) == (size_t)-1) {
   if (prev_in_left == in_left) {
    break;
   }
  }
 }

 if (out_left > 0) {
  cnt -= out_left / 4;
 }


 switch ((*__errno_location ())) {
  case 22:
   err = PHP_ICONV_ERR_ILLEGAL_CHAR;
   break;

  case 84:
   err = PHP_ICONV_ERR_ILLEGAL_SEQ;
   break;

  case 7:
  case 0:
   *pretval = cnt;
   break;

  default:
   err = PHP_ICONV_ERR_UNKNOWN;
   break;
 }




 iconv_close(cd);

 return err;
}




static php_iconv_err_t _php_iconv_substr(smart_str *pretval,
 const char *str, size_t nbytes, int offset, int len, const char *enc)
{
 char buf[4];

 php_iconv_err_t err = PHP_ICONV_ERR_SUCCESS;

 iconv_t cd1, cd2;

 const char *in_p;
 size_t in_left;

 char *out_p;
 size_t out_left;

 unsigned int cnt;
 int total_len;

 err = _php_iconv_strlen(&total_len, str, nbytes, enc);
 if (err != PHP_ICONV_ERR_SUCCESS) {
  return err;
 }

 if (len < 0) {
  if ((len += (total_len - offset)) < 0) {
   return PHP_ICONV_ERR_SUCCESS;
  }
 }

 if (offset < 0) {
  if ((offset += total_len) < 0) {
   return PHP_ICONV_ERR_SUCCESS;
  }
 }

 if(len > total_len) {
  len = total_len;
 }


 if (offset >= total_len) {
  return PHP_ICONV_ERR_SUCCESS;
 }

 if ((offset + len) > total_len ) {

  len = total_len - offset;
 }

 if (len == 0) {
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((0))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((0))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("")), ((0))); __dest->len = __nl; } while (0);
  do { if ((pretval)->c) { (pretval)->c[(pretval)->len] = '\0'; } } while (0);
  return PHP_ICONV_ERR_SUCCESS;
 }

 cd1 = iconv_open(_generic_superset_name, enc);

 if (cd1 == (iconv_t)(-1)) {

  if ((*__errno_location ()) == 22) {
   return PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   return PHP_ICONV_ERR_CONVERTER;
  }



 }

 cd2 = (iconv_t)((void*)0);
 (*__errno_location ()) = 0;

 for (in_p = str, in_left = nbytes, cnt = 0; in_left > 0 && len > 0; ++cnt) {
  size_t prev_in_left;
  out_p = buf;
  out_left = sizeof(buf);

  prev_in_left = in_left;

  if (iconv(cd1, (char **)&in_p, &in_left, (char **) &out_p, &out_left) == (size_t)-1) {
   if (prev_in_left == in_left) {
    break;
   }
  }

  if (cnt >= (unsigned int)offset) {
   if (cd2 == (iconv_t)((void*)0)) {
    cd2 = iconv_open(enc, _generic_superset_name);

    if (cd2 == (iconv_t)(-1)) {
     cd2 = (iconv_t)((void*)0);

     if ((*__errno_location ()) == 22) {
      err = PHP_ICONV_ERR_WRONG_CHARSET;
     } else {
      err = PHP_ICONV_ERR_CONVERTER;
     }



     break;
    }
   }

   if (_php_iconv_appendl(pretval, buf, sizeof(buf), cd2) != PHP_ICONV_ERR_SUCCESS) {
    break;
   }
   --len;
  }

 }


 switch ((*__errno_location ())) {
  case 22:
   err = PHP_ICONV_ERR_ILLEGAL_CHAR;
   break;

  case 84:
   err = PHP_ICONV_ERR_ILLEGAL_SEQ;
   break;

  case 7:
   break;
 }

 if (err == PHP_ICONV_ERR_SUCCESS) {
  if (cd2 != (iconv_t)((void*)0)) {
   _php_iconv_appendl(pretval, ((void*)0), 0, cd2);
  }
  do { if ((pretval)->c) { (pretval)->c[(pretval)->len] = '\0'; } } while (0);
 }

 if (cd1 != (iconv_t)((void*)0)) {
  iconv_close(cd1);
 }

 if (cd2 != (iconv_t)((void*)0)) {
  iconv_close(cd2);
 }
 return err;
}




static php_iconv_err_t _php_iconv_strpos(unsigned int *pretval,
 const char *haystk, size_t haystk_nbytes,
 const char *ndl, size_t ndl_nbytes,
 int offset, const char *enc)
{
 char buf[4];

 php_iconv_err_t err = PHP_ICONV_ERR_SUCCESS;

 iconv_t cd;

 const char *in_p;
 size_t in_left;

 char *out_p;
 size_t out_left;

 unsigned int cnt;

 char *ndl_buf;
 const char *ndl_buf_p;
 size_t ndl_buf_len, ndl_buf_left;

 unsigned int match_ofs;

 *pretval = (unsigned int)-1;

 err = php_iconv_string(ndl, ndl_nbytes,
  &ndl_buf, &ndl_buf_len, _generic_superset_name, enc);

 if (err != PHP_ICONV_ERR_SUCCESS) {
  if (ndl_buf != ((void*)0)) {
   _efree((ndl_buf) );
  }
  return err;
 }

 cd = iconv_open(_generic_superset_name, enc);

 if (cd == (iconv_t)(-1)) {
  if (ndl_buf != ((void*)0)) {
   _efree((ndl_buf) );
  }

  if ((*__errno_location ()) == 22) {
   return PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   return PHP_ICONV_ERR_CONVERTER;
  }



 }

 ndl_buf_p = ndl_buf;
 ndl_buf_left = ndl_buf_len;
 match_ofs = (unsigned int)-1;

 for (in_p = haystk, in_left = haystk_nbytes, cnt = 0; in_left > 0; ++cnt) {
  size_t prev_in_left;
  out_p = buf;
  out_left = sizeof(buf);

  prev_in_left = in_left;

  if (iconv(cd, (char **)&in_p, &in_left, (char **) &out_p, &out_left) == (size_t)-1) {
   if (prev_in_left == in_left) {

    switch ((*__errno_location ())) {
     case 22:
      err = PHP_ICONV_ERR_ILLEGAL_CHAR;
      break;

     case 84:
      err = PHP_ICONV_ERR_ILLEGAL_SEQ;
      break;

     case 7:
      break;

     default:
      err = PHP_ICONV_ERR_UNKNOWN;
      break;
    }

    break;
   }
  }
  if (offset >= 0) {
   if (cnt >= (unsigned int)offset) {
    if (((sizeof(buf)) == sizeof(unsigned long) ? *((unsigned long *)(buf)) == *((unsigned long *)(ndl_buf_p)) : ((sizeof(buf)) == sizeof(unsigned int) ? *((unsigned int *)(buf)) == *((unsigned int *)(ndl_buf_p)) : memcmp(buf, ndl_buf_p, sizeof(buf)) == 0))) {
     if (match_ofs == (unsigned int)-1) {
      match_ofs = cnt;
     }
     ndl_buf_p += 4;
     ndl_buf_left -= 4;
     if (ndl_buf_left == 0) {
      *pretval = match_ofs;
      break;
     }
    } else {
     unsigned int i, j, lim;

     i = 0;
     j = 4;
     lim = (unsigned int)(ndl_buf_p - ndl_buf);

     while (j < lim) {
      if (((4) == sizeof(unsigned long) ? *((unsigned long *)(&ndl_buf[j])) == *((unsigned long *)(&ndl_buf[i])) : ((4) == sizeof(unsigned int) ? *((unsigned int *)(&ndl_buf[j])) == *((unsigned int *)(&ndl_buf[i])) : memcmp(&ndl_buf[j], &ndl_buf[i], 4) == 0))) {

       i += 4;
      } else {
       j -= i;
       i = 0;
      }
      j += 4;
     }

     if (((sizeof(buf)) == sizeof(unsigned long) ? *((unsigned long *)(buf)) == *((unsigned long *)(&ndl_buf[i])) : ((sizeof(buf)) == sizeof(unsigned int) ? *((unsigned int *)(buf)) == *((unsigned int *)(&ndl_buf[i])) : memcmp(buf, &ndl_buf[i], sizeof(buf)) == 0))) {
      match_ofs += (lim - i) / 4;
      i += 4;
      ndl_buf_p = &ndl_buf[i];
      ndl_buf_left = ndl_buf_len - i;
     } else {
      match_ofs = (unsigned int)-1;
      ndl_buf_p = ndl_buf;
      ndl_buf_left = ndl_buf_len;
     }
    }
   }
  } else {
   if (((sizeof(buf)) == sizeof(unsigned long) ? *((unsigned long *)(buf)) == *((unsigned long *)(ndl_buf_p)) : ((sizeof(buf)) == sizeof(unsigned int) ? *((unsigned int *)(buf)) == *((unsigned int *)(ndl_buf_p)) : memcmp(buf, ndl_buf_p, sizeof(buf)) == 0))) {
    if (match_ofs == (unsigned int)-1) {
     match_ofs = cnt;
    }
    ndl_buf_p += 4;
    ndl_buf_left -= 4;
    if (ndl_buf_left == 0) {
     *pretval = match_ofs;
     ndl_buf_p = ndl_buf;
     ndl_buf_left = ndl_buf_len;
     match_ofs = -1;
    }
   } else {
    unsigned int i, j, lim;

    i = 0;
    j = 4;
    lim = (unsigned int)(ndl_buf_p - ndl_buf);

    while (j < lim) {
     if (((4) == sizeof(unsigned long) ? *((unsigned long *)(&ndl_buf[j])) == *((unsigned long *)(&ndl_buf[i])) : ((4) == sizeof(unsigned int) ? *((unsigned int *)(&ndl_buf[j])) == *((unsigned int *)(&ndl_buf[i])) : memcmp(&ndl_buf[j], &ndl_buf[i], 4) == 0))) {

      i += 4;
     } else {
      j -= i;
      i = 0;
     }
     j += 4;
    }

    if (((sizeof(buf)) == sizeof(unsigned long) ? *((unsigned long *)(buf)) == *((unsigned long *)(&ndl_buf[i])) : ((sizeof(buf)) == sizeof(unsigned int) ? *((unsigned int *)(buf)) == *((unsigned int *)(&ndl_buf[i])) : memcmp(buf, &ndl_buf[i], sizeof(buf)) == 0))) {
     match_ofs += (lim - i) / 4;
     i += 4;
     ndl_buf_p = &ndl_buf[i];
     ndl_buf_left = ndl_buf_len - i;
    } else {
     match_ofs = (unsigned int)-1;
     ndl_buf_p = ndl_buf;
     ndl_buf_left = ndl_buf_len;
    }
   }
  }
 }

 if (ndl_buf) {
  _efree((ndl_buf) );
 }

 iconv_close(cd);

 return err;
}



static php_iconv_err_t _php_iconv_mime_encode(smart_str *pretval, const char *fname, size_t fname_nbytes, const char *fval, size_t fval_nbytes, unsigned int max_line_len, const char *lfchars, php_iconv_enc_scheme_t enc_scheme, const char *out_charset, const char *enc)
{
 php_iconv_err_t err = PHP_ICONV_ERR_SUCCESS;
 iconv_t cd = (iconv_t)(-1), cd_pl = (iconv_t)(-1);
 unsigned int char_cnt = 0;
 size_t out_charset_len;
 size_t lfchars_len;
 char *buf = ((void*)0);
 char *encoded = ((void*)0);
 size_t encoded_len;
 const char *in_p;
 size_t in_left;
 char *out_p;
 size_t out_left;
 static int qp_table[256] = {
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1 ,1, 1, 1, 1, 1, 1, 3, 1, 3,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3
 };

 out_charset_len = strlen(out_charset);
 lfchars_len = strlen(lfchars);

 if ((fname_nbytes + 2) >= max_line_len
  || (out_charset_len + 12) >= max_line_len) {

  err = PHP_ICONV_ERR_TOO_BIG;
  goto out;
 }

 cd_pl = iconv_open("ASCII", enc);
 if (cd_pl == (iconv_t)(-1)) {

  if ((*__errno_location ()) == 22) {
   err = PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   err = PHP_ICONV_ERR_CONVERTER;
  }



  goto out;
 }

 cd = iconv_open(out_charset, enc);
 if (cd == (iconv_t)(-1)) {

  if ((*__errno_location ()) == 22) {
   err = PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   err = PHP_ICONV_ERR_CONVERTER;
  }



  goto out;
 }

 buf = _safe_emalloc((1), (max_line_len), (5) );

 char_cnt = max_line_len;

 _php_iconv_appendl(pretval, fname, fname_nbytes, cd_pl);
 char_cnt -= fname_nbytes;
 do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((sizeof(": ") - 1))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((sizeof(": ") - 1))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((": ")), ((sizeof(": ") - 1))); __dest->len = __nl; } while (0);
 char_cnt -= 2;

 in_p = fval;
 in_left = fval_nbytes;

 do {
  size_t prev_in_left;
  size_t out_size;

  if (char_cnt < (out_charset_len + 12)) {

   do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((lfchars_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((lfchars_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((lfchars)), ((lfchars_len))); __dest->len = __nl; } while (0);
   do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = ((' ')); } while (0);
   char_cnt = max_line_len - 1;
  }

  do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((sizeof("=?") - 1))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((sizeof("=?") - 1))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("=?")), ((sizeof("=?") - 1))); __dest->len = __nl; } while (0);
  char_cnt -= 2;
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((out_charset_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((out_charset_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((out_charset)), ((out_charset_len))); __dest->len = __nl; } while (0);
  char_cnt -= out_charset_len;
  do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = (('?')); } while (0);
  char_cnt --;

  switch (enc_scheme) {
   case PHP_ICONV_ENC_SCHEME_BASE64: {
    size_t ini_in_left;
    const char *ini_in_p;
    size_t out_reserved = 4;
    int dummy;

    do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = (('B')); } while (0);
    char_cnt--;
    do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = (('?')); } while (0);
    char_cnt--;

    prev_in_left = ini_in_left = in_left;
    ini_in_p = in_p;

    out_size = (char_cnt - 2) / 4 * 3;

    for (;;) {
     out_p = buf;

     if (out_size <= out_reserved) {
      err = PHP_ICONV_ERR_TOO_BIG;
      goto out;
     }

     out_left = out_size - out_reserved;

     if (iconv(cd, (char **)&in_p, &in_left, (char **) &out_p, &out_left) == (size_t)-1) {

      switch ((*__errno_location ())) {
       case 22:
        err = PHP_ICONV_ERR_ILLEGAL_CHAR;
        goto out;

       case 84:
        err = PHP_ICONV_ERR_ILLEGAL_SEQ;
        goto out;

       case 7:
        if (prev_in_left == in_left) {
         err = PHP_ICONV_ERR_TOO_BIG;
         goto out;
        }
        break;

       default:
        err = PHP_ICONV_ERR_UNKNOWN;
        goto out;
      }






     }

     out_left += out_reserved;

     if (iconv(cd, ((void*)0), ((void*)0), (char **) &out_p, &out_left) == (size_t)-1) {

      if ((*__errno_location ()) != 7) {
       err = PHP_ICONV_ERR_UNKNOWN;
       goto out;
      }






     } else {
      break;
     }

     if (iconv(cd, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == (size_t)-1) {
      err = PHP_ICONV_ERR_UNKNOWN;
      goto out;
     }

     out_reserved += 4;
     in_left = ini_in_left;
     in_p = ini_in_p;
    }

    prev_in_left = in_left;

    encoded = (char *) php_base64_encode((unsigned char *) buf, (int)(out_size - out_left), &dummy);
    encoded_len = (size_t)dummy;

    if (char_cnt < encoded_len) {

     err = PHP_ICONV_ERR_UNKNOWN;
     goto out;
    }

    do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((encoded_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((encoded_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((encoded)), ((encoded_len))); __dest->len = __nl; } while (0);
    char_cnt -= encoded_len;
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((sizeof("?=") - 1))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((sizeof("?=") - 1))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("?=")), ((sizeof("?=") - 1))); __dest->len = __nl; } while (0);
    char_cnt -= 2;

    _efree((encoded) );
    encoded = ((void*)0);
   } break;

   case PHP_ICONV_ENC_SCHEME_QPRINT: {
    size_t ini_in_left;
    const char *ini_in_p;
    const unsigned char *p;
    size_t nbytes_required;

    do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = (('Q')); } while (0);
    char_cnt--;
    do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = (('?')); } while (0);
    char_cnt--;

    prev_in_left = ini_in_left = in_left;
    ini_in_p = in_p;

    for (out_size = char_cnt; out_size > 0;) {
     size_t prev_out_left;

     nbytes_required = 0;

     out_p = buf;
     out_left = out_size;

     if (iconv(cd, (char **)&in_p, &in_left, (char **) &out_p, &out_left) == (size_t)-1) {

      switch ((*__errno_location ())) {
       case 22:
        err = PHP_ICONV_ERR_ILLEGAL_CHAR;
        goto out;

       case 84:
        err = PHP_ICONV_ERR_ILLEGAL_SEQ;
        goto out;

       case 7:
        if (prev_in_left == in_left) {
         err = PHP_ICONV_ERR_UNKNOWN;
         goto out;
        }
        break;

       default:
        err = PHP_ICONV_ERR_UNKNOWN;
        goto out;
      }






     }

     prev_out_left = out_left;
     if (iconv(cd, ((void*)0), ((void*)0), (char **) &out_p, &out_left) == (size_t)-1) {

      if ((*__errno_location ()) != 7) {
       err = PHP_ICONV_ERR_UNKNOWN;
       goto out;
      }






     }

     for (p = (unsigned char *)buf; p < (unsigned char *)out_p; p++) {
      nbytes_required += qp_table[*p];
     }

     if (nbytes_required <= char_cnt - 2) {
      break;
     }

     out_size -= ((nbytes_required - (char_cnt - 2)) + 1) / (3 - 1);
     in_left = ini_in_left;
     in_p = ini_in_p;
    }

    for (p = (unsigned char *)buf; p < (unsigned char *)out_p; p++) {
     if (qp_table[*p] == 1) {
      do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = ((*(char *)p)); } while (0);
      char_cnt--;
     } else {
      static char qp_digits[] = "0123456789ABCDEF";
      do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = (('=')); } while (0);
      do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = ((qp_digits[(*p >> 4) & 0x0f])); } while (0);
      do { register size_t __nl; do { if (!(((pretval)))->c) { (((pretval)))->len = 0; __nl = (1); (((pretval)))->a = __nl < 78 ? 78 : __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } else { __nl = (((pretval)))->len + (1); if (__nl >= (((pretval)))->a) { (((pretval)))->a = __nl + 128; (((pretval)))->c = (((((0))))?__zend_realloc((((((pretval)))->c)), (((((pretval)))->a + 1))):_erealloc(((((((pretval)))->c))), ((((((pretval)))->a + 1))), 0 )); } } } while (0); ((pretval))->len = __nl; ((unsigned char *) ((pretval))->c)[((pretval))->len - 1] = ((qp_digits[(*p & 0x0f)])); } while (0);
      char_cnt -= 3;
     }
    }
    prev_in_left = in_left;

    do { register size_t __nl; smart_str *__dest = (smart_str *) ((pretval)); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((sizeof("?=") - 1))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((sizeof("?=") - 1))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, (("?=")), ((sizeof("?=") - 1))); __dest->len = __nl; } while (0);
    char_cnt -= 2;

    if (iconv(cd, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == (size_t)-1) {
     err = PHP_ICONV_ERR_UNKNOWN;
     goto out;
    }

   } break;
  }
 } while (in_left > 0);

 do { if ((pretval)->c) { (pretval)->c[(pretval)->len] = '\0'; } } while (0);

out:
 if (cd != (iconv_t)(-1)) {
  iconv_close(cd);
 }
 if (cd_pl != (iconv_t)(-1)) {
  iconv_close(cd_pl);
 }
 if (encoded != ((void*)0)) {
  _efree((encoded) );
 }
 if (buf != ((void*)0)) {
  _efree((buf) );
 }
 return err;
}



static php_iconv_err_t _php_iconv_mime_decode(smart_str *pretval, const char *str, size_t str_nbytes, const char *enc, const char **next_pos, int mode)
{
 php_iconv_err_t err = PHP_ICONV_ERR_SUCCESS;

 iconv_t cd = (iconv_t)(-1), cd_pl = (iconv_t)(-1);

 const char *p1;
 size_t str_left;
 unsigned int scan_stat = 0;
 const char *csname = ((void*)0);
 size_t csname_len;
 const char *encoded_text = ((void*)0);
 size_t encoded_text_len = 0;
 const char *encoded_word = ((void*)0);
 const char *spaces = ((void*)0);

 php_iconv_enc_scheme_t enc_scheme = PHP_ICONV_ENC_SCHEME_BASE64;

 if (next_pos != ((void*)0)) {
  *next_pos = ((void*)0);
 }

 cd_pl = iconv_open(enc, "ASCII");

 if (cd_pl == (iconv_t)(-1)) {

  if ((*__errno_location ()) == 22) {
   err = PHP_ICONV_ERR_WRONG_CHARSET;
  } else {
   err = PHP_ICONV_ERR_CONVERTER;
  }



  goto out;
 }

 p1 = str;
 for (str_left = str_nbytes; str_left > 0; str_left--, p1++) {
  int eos = 0;

  switch (scan_stat) {
   case 0:
    switch (*p1) {
     case '\r':
      scan_stat = 7;
      break;

     case '\n':
      scan_stat = 8;
      break;

     case '=':
      encoded_word = p1;
      scan_stat = 1;
      break;

     case ' ': case '\t':
      spaces = p1;
      scan_stat = 11;
      break;

     default:
      _php_iconv_appendc(pretval, *p1, cd_pl);
      encoded_word = ((void*)0);
      if ((mode & (1<<0))) {
       scan_stat = 12;
      }
      break;
    }
    break;

   case 1:
    if (*p1 != '?') {
     err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
     if (err != PHP_ICONV_ERR_SUCCESS) {
      goto out;
     }
     encoded_word = ((void*)0);
     if ((mode & (1<<0))) {
      scan_stat = 12;
     } else {
      scan_stat = 0;
     }
     break;
    }
    csname = p1 + 1;
    scan_stat = 2;
    break;

   case 2:
    switch (*p1) {
     case '?':
      scan_stat = 3;
      break;

     case '*':
      scan_stat = 10;
      break;
    }
    if (scan_stat != 2) {
     char tmpbuf[80];

     if (csname == ((void*)0)) {
      err = PHP_ICONV_ERR_MALFORMED;
      goto out;
     }

     csname_len = (size_t)(p1 - csname);

     if (csname_len > sizeof(tmpbuf) - 1) {
      if ((mode & (1<<1))) {
       err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
       if (err != PHP_ICONV_ERR_SUCCESS) {
        goto out;
       }
       encoded_word = ((void*)0);
       if ((mode & (1<<0))) {
        scan_stat = 12;
       } else {
        scan_stat = 0;
       }
       break;
      } else {
       err = PHP_ICONV_ERR_MALFORMED;
       goto out;
      }
     }

     memcpy(tmpbuf, csname, csname_len);
     tmpbuf[csname_len] = '\0';

     if (cd != (iconv_t)(-1)) {
      iconv_close(cd);
     }

     cd = iconv_open(enc, tmpbuf);

     if (cd == (iconv_t)(-1)) {
      if ((mode & (1<<1))) {
       err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
       if (err != PHP_ICONV_ERR_SUCCESS) {
        goto out;
       }
       encoded_word = ((void*)0);
       if ((mode & (1<<0))) {
        scan_stat = 12;
       } else {
        scan_stat = 0;
       }
       break;
      } else {

       if ((*__errno_location ()) == 22) {
        err = PHP_ICONV_ERR_WRONG_CHARSET;
       } else {
        err = PHP_ICONV_ERR_CONVERTER;
       }



       goto out;
      }
     }
    }
    break;

   case 3:
    switch (*p1) {
     case 'b':
     case 'B':
      enc_scheme = PHP_ICONV_ENC_SCHEME_BASE64;
      scan_stat = 4;
      break;

     case 'q':
     case 'Q':
      enc_scheme = PHP_ICONV_ENC_SCHEME_QPRINT;
      scan_stat = 4;
      break;

     default:
      if ((mode & (1<<1))) {
       err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
       if (err != PHP_ICONV_ERR_SUCCESS) {
        goto out;
       }
       encoded_word = ((void*)0);
       if ((mode & (1<<0))) {
        scan_stat = 12;
       } else {
        scan_stat = 0;
       }
       break;
      } else {
       err = PHP_ICONV_ERR_MALFORMED;
       goto out;
      }
    }
    break;

   case 4:
    if (*p1 != '?') {
     if ((mode & (1<<1))) {

      err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
      if (err != PHP_ICONV_ERR_SUCCESS) {
       goto out;
      }
      encoded_word = ((void*)0);
      if ((mode & (1<<0))) {
       scan_stat = 12;
      } else {
       scan_stat = 0;
      }
      break;
     } else {
      err = PHP_ICONV_ERR_MALFORMED;
      goto out;
     }
    }
    encoded_text = p1 + 1;
    scan_stat = 5;
    break;

   case 5:
    if (*p1 == '?') {
     encoded_text_len = (size_t)(p1 - encoded_text);
     scan_stat = 6;
    }
    break;

   case 7:
    if (*p1 == '\n') {
     scan_stat = 8;
    } else {

     _php_iconv_appendc(pretval, '\r', cd_pl);
     _php_iconv_appendc(pretval, *p1, cd_pl);
     scan_stat = 0;
    }
    break;

   case 8:

    if (*p1 != ' ' && *p1 != '\t') {
     --p1;
     str_left = 1;
     break;
    }
    if (encoded_word == ((void*)0)) {
     _php_iconv_appendc(pretval, ' ', cd_pl);
    }
    spaces = ((void*)0);
    scan_stat = 11;
    break;

   case 6:
    if (*p1 != '=') {
     if ((mode & (1<<1))) {

      err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
      if (err != PHP_ICONV_ERR_SUCCESS) {
       goto out;
      }
      encoded_word = ((void*)0);
      if ((mode & (1<<0))) {
       scan_stat = 12;
      } else {
       scan_stat = 0;
      }
      break;
     } else {
      err = PHP_ICONV_ERR_MALFORMED;
      goto out;
     }
    }
    scan_stat = 9;
    if (str_left == 1) {
     eos = 1;
    } else {
     break;
    }

   case 9:
    switch (*p1) {
     default:
# 1627 "ext/iconv/iconv.c"
      if (!eos) {
       if ((mode & (1<<0))) {

        err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
        if (err != PHP_ICONV_ERR_SUCCESS) {
         goto out;
        }
        scan_stat = 12;
        break;
       }
      }


     case '\r': case '\n': case ' ': case '\t': {
      char *decoded_text;
      size_t decoded_text_len;
      int dummy;

      switch (enc_scheme) {
       case PHP_ICONV_ENC_SCHEME_BASE64:
        decoded_text = (char *)php_base64_decode((unsigned char*)encoded_text, (int)encoded_text_len, &dummy);
        decoded_text_len = (size_t)dummy;
        break;

       case PHP_ICONV_ENC_SCHEME_QPRINT:
        decoded_text = (char *)php_quot_print_decode((unsigned char*)encoded_text, (int)encoded_text_len, &decoded_text_len, 1);
        break;
       default:
        decoded_text = ((void*)0);
        break;
      }

      if (decoded_text == ((void*)0)) {
       if ((mode & (1<<1))) {

        err = _php_iconv_appendl(pretval, encoded_word, (size_t)((p1 + 1) - encoded_word), cd_pl);
        if (err != PHP_ICONV_ERR_SUCCESS) {
         goto out;
        }
        encoded_word = ((void*)0);
        if ((mode & (1<<0))) {
         scan_stat = 12;
        } else {
         scan_stat = 0;
        }
        break;
       } else {
        err = PHP_ICONV_ERR_UNKNOWN;
        goto out;
       }
      }

      err = _php_iconv_appendl(pretval, decoded_text, decoded_text_len, cd);
      _efree((decoded_text) );

      if (err != PHP_ICONV_ERR_SUCCESS) {
       if ((mode & (1<<1))) {

        err = _php_iconv_appendl(pretval, encoded_word, (size_t)(p1 - encoded_word), cd_pl);
        if (err != PHP_ICONV_ERR_SUCCESS) {
         goto out;
        }
        encoded_word = ((void*)0);
       } else {
        goto out;
       }
      }

      if (eos) {
       scan_stat = 0;
       break;
      }

      switch (*p1) {
       case '\r':
        scan_stat = 7;
        break;

       case '\n':
        scan_stat = 8;
        break;

       case '=':
        scan_stat = 1;
        break;

       case ' ': case '\t':
        spaces = p1;
        scan_stat = 11;
        break;

       default:
        _php_iconv_appendc(pretval, *p1, cd_pl);
        scan_stat = 12;
        break;
      }
     } break;
    }
    break;

   case 10:
    if (*p1 == '?') {
     scan_stat = 3;
    }
    break;

   case 11:
    switch (*p1) {
     case '\r':
      scan_stat = 7;
      break;

     case '\n':
      scan_stat = 8;
      break;

     case '=':
      if (spaces != ((void*)0) && encoded_word == ((void*)0)) {
       _php_iconv_appendl(pretval, spaces, (size_t)(p1 - spaces), cd_pl);
       spaces = ((void*)0);
      }
      encoded_word = p1;
      scan_stat = 1;
      break;

     case ' ': case '\t':
      break;

     default:
      if (spaces != ((void*)0)) {
       _php_iconv_appendl(pretval, spaces, (size_t)(p1 - spaces), cd_pl);
       spaces = ((void*)0);
      }
      _php_iconv_appendc(pretval, *p1, cd_pl);
      encoded_word = ((void*)0);
      if ((mode & (1<<0))) {
       scan_stat = 12;
      } else {
       scan_stat = 0;
      }
      break;
    }
    break;

   case 12:
    switch (*p1) {
     case '\r':
      scan_stat = 7;
      break;

     case '\n':
      scan_stat = 8;
      break;

     case ' ': case '\t':
      spaces = p1;
      scan_stat = 11;
      break;

     case '=':
      if (!(mode & (1<<0))) {
       encoded_word = p1;
       scan_stat = 1;
       break;
      }


     default:
      _php_iconv_appendc(pretval, *p1, cd_pl);
      break;
    }
    break;
  }
 }
 switch (scan_stat) {
  case 0: case 8: case 11: case 12:
   break;
  default:
   if ((mode & (1<<1))) {
    if (scan_stat == 1) {
     _php_iconv_appendc(pretval, '=', cd_pl);
    }
    err = PHP_ICONV_ERR_SUCCESS;
   } else {
    err = PHP_ICONV_ERR_MALFORMED;
    goto out;
   }
 }

 if (next_pos != ((void*)0)) {
  *next_pos = p1;
 }

 do { if ((pretval)->c) { (pretval)->c[(pretval)->len] = '\0'; } } while (0);
out:
 if (cd != (iconv_t)(-1)) {
  iconv_close(cd);
 }
 if (cd_pl != (iconv_t)(-1)) {
  iconv_close(cd_pl);
 }
 return err;
}



static void _php_iconv_show_error(php_iconv_err_t err, const char *out_charset, const char *in_charset )
{
 switch (err) {
  case PHP_ICONV_ERR_SUCCESS:
   break;

  case PHP_ICONV_ERR_CONVERTER:
   php_error_docref0(((void*)0) , (1<<3L), "Cannot open converter");
   break;

  case PHP_ICONV_ERR_WRONG_CHARSET:
   php_error_docref0(((void*)0) , (1<<3L), "Wrong charset, conversion from `%s' to `%s' is not allowed",
             in_charset, out_charset);
   break;

  case PHP_ICONV_ERR_ILLEGAL_CHAR:
   php_error_docref0(((void*)0) , (1<<3L), "Detected an incomplete multibyte character in input string");
   break;

  case PHP_ICONV_ERR_ILLEGAL_SEQ:
   php_error_docref0(((void*)0) , (1<<3L), "Detected an illegal character in input string");
   break;

  case PHP_ICONV_ERR_TOO_BIG:

   php_error_docref0(((void*)0) , (1<<1L), "Buffer length exceeded");
   break;

  case PHP_ICONV_ERR_MALFORMED:
   php_error_docref0(((void*)0) , (1<<1L), "Malformed string");
   break;

  default:

   php_error_docref0(((void*)0) , (1<<3L), "Unknown error (%d)", (*__errno_location ()));
   break;
 }
}




void zif_iconv_strlen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *charset;
 int charset_len = 0;
 char *str;
 int str_len;

 php_iconv_err_t err;

 unsigned int retval;

 charset = (iconv_globals.internal_encoding);

 if (zend_parse_parameters((ht) , "s|s",
  &str, &str_len, &charset, &charset_len) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 err = _php_iconv_strlen(&retval, str, str_len, charset);
 _php_iconv_show_error(err, _generic_superset_name, charset );
 if (err == PHP_ICONV_ERR_SUCCESS) {
  { (*return_value).type = 1; (*return_value).value.lval = retval; };
 } else {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }
}




void zif_iconv_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *charset;
 int charset_len = 0;
 char *str;
 int str_len;
 long offset, length;

 php_iconv_err_t err;

 smart_str retval = {0};

 charset = (iconv_globals.internal_encoding);

 if (zend_parse_parameters((ht) , "sl|ls",
  &str, &str_len, &offset, &length,
  &charset, &charset_len) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if ((ht) < 3) {
  length = str_len;
 }

 err = _php_iconv_substr(&retval, str, str_len, offset, length, charset);
 _php_iconv_show_error(err, _generic_superset_name, charset );

 if (err == PHP_ICONV_ERR_SUCCESS && str != ((void*)0) && retval.c != ((void*)0)) {
  { { char *__s=(retval.c); int __l=retval.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
 }
 do { smart_str *__s = (smart_str *) ((&retval)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
 { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
}




void zif_iconv_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *charset;
 int charset_len = 0;
 char *haystk;
 int haystk_len;
 char *ndl;
 int ndl_len;
 long offset;

 php_iconv_err_t err;

 unsigned int retval;

 offset = 0;
 charset = (iconv_globals.internal_encoding);

 if (zend_parse_parameters((ht) , "ss|ls",
  &haystk, &haystk_len, &ndl, &ndl_len,
  &offset, &charset, &charset_len) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (offset < 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Offset not contained in string.");
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (ndl_len < 1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 err = _php_iconv_strpos(&retval, haystk, haystk_len, ndl, ndl_len,
                         offset, charset);
 _php_iconv_show_error(err, _generic_superset_name, charset );

 if (err == PHP_ICONV_ERR_SUCCESS && retval != (unsigned int)-1) {
  { (*return_value).type = 1; (*return_value).value.lval = (long)retval; };
 } else {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }
}




void zif_iconv_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *charset;
 int charset_len = 0;
 char *haystk;
 int haystk_len;
 char *ndl;
 int ndl_len;

 php_iconv_err_t err;

 unsigned int retval;

 charset = (iconv_globals.internal_encoding);

 if (zend_parse_parameters((ht) , "ss|s",
  &haystk, &haystk_len, &ndl, &ndl_len,
  &charset, &charset_len) == -1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (ndl_len < 1) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 err = _php_iconv_strpos(&retval, haystk, haystk_len, ndl, ndl_len,
                         -1, charset);
 _php_iconv_show_error(err, _generic_superset_name, charset );

 if (err == PHP_ICONV_ERR_SUCCESS && retval != (unsigned int)-1) {
  { (*return_value).type = 1; (*return_value).value.lval = (long)retval; };
 } else {
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }
}




void zif_iconv_mime_encode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 const char *field_name = ((void*)0);
 int field_name_len;
 const char *field_value = ((void*)0);
 int field_value_len;
 zval *pref = ((void*)0);
 zval tmp_zv, *tmp_zv_p = ((void*)0);
 smart_str retval = {0};
 php_iconv_err_t err;

 const char *in_charset = (iconv_globals.internal_encoding);
 const char *out_charset = in_charset;
 long line_len = 76;
 const char *lfchars = "\r\n";
 php_iconv_enc_scheme_t scheme_id = PHP_ICONV_ENC_SCHEME_BASE64;

 if (zend_parse_parameters((ht) , "ss|a",
  &field_name, &field_name_len, &field_value, &field_value_len,
  &pref) == -1) {

  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (pref != ((void*)0)) {
  zval **ppval;

  if (zend_hash_find((*pref).value.ht, "scheme", sizeof("scheme"), (void **)&ppval) == 0) {
   if ((**ppval).type == 6 && (**ppval).value.str.len > 0) {
    switch ((**ppval).value.str.val[0]) {
     case 'B': case 'b':
      scheme_id = PHP_ICONV_ENC_SCHEME_BASE64;
      break;

     case 'Q': case 'q':
      scheme_id = PHP_ICONV_ENC_SCHEME_QPRINT;
      break;
    }
   }
  }

  if (zend_hash_find((*pref).value.ht, "input-charset", sizeof("input-charset"), (void **)&ppval) == 0) {
   if ((**ppval).value.str.len >= 64) {
    php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }

   if ((**ppval).type == 6 && (**ppval).value.str.len > 0) {
    in_charset = (**ppval).value.str.val;
   }
  }


  if (zend_hash_find((*pref).value.ht, "output-charset", sizeof("output-charset"), (void **)&ppval) == 0) {
   if ((**ppval).value.str.len >= 64) {
    php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
    { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
   }

   if ((**ppval).type == 6 && (**ppval).value.str.len > 0) {
    out_charset = (**ppval).value.str.val;
   }
  }

  if (zend_hash_find((*pref).value.ht, "line-length", sizeof("line-length"), (void **)&ppval) == 0) {
   zval val, *pval = *ppval;

   if ((*pval).type != 1) {
    val = *pval;
    _zval_copy_ctor((&val) );
    convert_to_long(&val);
    pval = &val;
   }

   line_len = (*pval).value.lval;

   if (pval == &val) {
    _zval_dtor((&val) );
   }
  }

  if (zend_hash_find((*pref).value.ht, "line-break-chars", sizeof("line-break-chars"), (void **)&ppval) == 0) {
   if ((**ppval).type != 6) {
    tmp_zv = **ppval;
    _zval_copy_ctor((&tmp_zv) );
    if ((&tmp_zv)->type != 6) { _convert_to_string((&tmp_zv) ); };

    lfchars = (tmp_zv).value.str.val;

    tmp_zv_p = &tmp_zv;
   } else {
    lfchars = (**ppval).value.str.val;
   }
  }
 }

 err = _php_iconv_mime_encode(&retval, field_name, field_name_len,
  field_value, field_value_len, line_len, lfchars, scheme_id,
  out_charset, in_charset);
 _php_iconv_show_error(err, out_charset, in_charset );

 if (err == PHP_ICONV_ERR_SUCCESS) {
  if (retval.c != ((void*)0)) {
   { char *__s=(retval.c); int __l=retval.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
  } else {
   { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; };
  }
 } else {
  do { smart_str *__s = (smart_str *) ((&retval)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }

 if (tmp_zv_p != ((void*)0)) {
  _zval_dtor((tmp_zv_p) );
 }
}




void zif_iconv_mime_decode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *encoded_str;
 int encoded_str_len;
 char *charset;
 int charset_len = 0;
 long mode = 0;

 smart_str retval = {0};

 php_iconv_err_t err;

 charset = (iconv_globals.internal_encoding);

 if (zend_parse_parameters((ht) , "s|ls",
  &encoded_str, &encoded_str_len, &mode, &charset, &charset_len) == -1) {

  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 err = _php_iconv_mime_decode(&retval, encoded_str, encoded_str_len, charset, ((void*)0), mode);
 _php_iconv_show_error(err, charset, "???" );

 if (err == PHP_ICONV_ERR_SUCCESS) {
  if (retval.c != ((void*)0)) {
   { char *__s=(retval.c); int __l=retval.len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
  } else {
   { (return_value)->value.str.len = 0; (return_value)->value.str.val = _estrndup((""), (sizeof("")-1) ); (return_value)->type = 6; };
  }
 } else {
  do { smart_str *__s = (smart_str *) ((&retval)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }
}




void zif_iconv_mime_decode_headers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 const char *encoded_str;
 int encoded_str_len;
 char *charset;
 int charset_len = 0;
 long mode = 0;

 php_iconv_err_t err = PHP_ICONV_ERR_SUCCESS;

 charset = (iconv_globals.internal_encoding);

 if (zend_parse_parameters((ht) , "s|ls",
  &encoded_str, &encoded_str_len, &mode, &charset, &charset_len) == -1) {

  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 _array_init((return_value) );

 while (encoded_str_len > 0) {
  smart_str decoded_header = {0};
  char *header_name = ((void*)0);
  size_t header_name_len = 0;
  char *header_value = ((void*)0);
  size_t header_value_len = 0;
  char *p, *limit;
  const char *next_pos;

  if (PHP_ICONV_ERR_SUCCESS != (err = _php_iconv_mime_decode(&decoded_header, encoded_str, encoded_str_len, charset, &next_pos, mode))) {
   do { smart_str *__s = (smart_str *) ((&decoded_header)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
   break;
  }

  if (decoded_header.c == ((void*)0)) {
   break;
  }

  limit = decoded_header.c + decoded_header.len;
  for (p = decoded_header.c; p < limit; p++) {
   if (*p == ':') {
    *p = '\0';
    header_name = decoded_header.c;
    header_name_len = (p - decoded_header.c) + 1;

    while (++p < limit) {
     if (*p != ' ' && *p != '\t') {
      break;
     }
    }

    header_value = p;
    header_value_len = limit - p;

    break;
   }
  }

  if (header_name != ((void*)0)) {
   zval **elem, *new_elem;

   if (zend_hash_find((*return_value).value.ht, header_name, header_name_len, (void **)&elem) == 0) {
    if ((**elem).type != 4) {
     (new_elem) = (zval *) _emalloc((sizeof(zval)) ); (new_elem)->refcount = 1; (new_elem)->is_ref = 0;;;
     _array_init((new_elem) );

     (++(*elem)->refcount);
     add_next_index_zval(new_elem, *elem);

     _zend_hash_add_or_update((*return_value).value.ht, header_name, header_name_len, (void *)&new_elem, sizeof(new_elem), ((void*)0), (1<<0) );

     elem = &new_elem;
    }
    add_next_index_stringl(*elem, header_value, header_value_len, 1);
   } else {
    add_assoc_stringl_ex(return_value, header_name, header_name_len, header_value, header_value_len, 1);
   }
  }
  encoded_str_len -= next_pos - encoded_str;
  encoded_str = next_pos;

  do { smart_str *__s = (smart_str *) ((&decoded_header)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void*)0); } __s->a = __s->len = 0; } while (0);
 }

 if (err != PHP_ICONV_ERR_SUCCESS) {
  _php_iconv_show_error(err, charset, "???" );
  _zval_dtor((return_value) );
  { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); };
 }
}




void php_if_iconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *in_charset, *out_charset, *in_buffer, *out_buffer;
 size_t out_len;
 int in_charset_len = 0, out_charset_len = 0, in_buffer_len;
 php_iconv_err_t err;

 if (zend_parse_parameters((ht) , "sss",
  &in_charset, &in_charset_len, &out_charset, &out_charset_len, &in_buffer, &in_buffer_len) == -1)
  return;

 if (in_charset_len >= 64 || out_charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 err = php_iconv_string(in_buffer, (size_t)in_buffer_len,
  &out_buffer, &out_len, out_charset, in_charset);
 _php_iconv_show_error(err, out_charset, in_charset );
 if (out_buffer != ((void*)0)) {
  { char *__s=(out_buffer); int __l=out_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




void zif_ob_iconv_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *out_buffer, *content_type, *mimetype = ((void*)0), *s;
 zval *zv_string;
 size_t out_len;
 int mimetype_alloced = 0;
 long status;

 if (zend_parse_parameters((ht) , "zl", &zv_string, &status) == -1)
  return;

 if ((zv_string)->type != 6) { _convert_to_string((zv_string) ); };

 if ((sapi_globals.sapi_headers).mimetype &&
  strncasecmp((sapi_globals.sapi_headers).mimetype, "text/", 5) == 0) {
  if ((s = (__extension__ (__builtin_constant_p (';') && !__builtin_constant_p ((sapi_globals.sapi_headers).mimetype) && (';') == '\0' ? (char *) __rawmemchr ((sapi_globals.sapi_headers).mimetype, ';') : __builtin_strchr ((sapi_globals.sapi_headers).mimetype, ';')))) == ((void*)0)){
   mimetype = (sapi_globals.sapi_headers).mimetype;
  } else {
   mimetype = _estrndup(((sapi_globals.sapi_headers).mimetype), (s-(sapi_globals.sapi_headers).mimetype) );
   mimetype_alloced = 1;
  }
 } else if ((sapi_globals.sapi_headers).send_default_content_type) {
  mimetype =((sapi_globals.default_mimetype) ? (sapi_globals.default_mimetype) : "text/html");
 }
 if (mimetype != ((void*)0)) {
  php_iconv_err_t err = php_iconv_string((*zv_string).value.str.val,
    (*zv_string).value.str.len, &out_buffer, &out_len,
    (iconv_globals.output_encoding), (iconv_globals.internal_encoding));
  _php_iconv_show_error(err, (iconv_globals.output_encoding), (iconv_globals.internal_encoding) );
  if (out_buffer != ((void*)0)) {
   int len = spprintf(&content_type, 0, "Content-Type:%s; charset=%s", mimetype, (iconv_globals.output_encoding));
   if (content_type && sapi_add_header_ex((content_type),(len),(0),1 ) != -1) {
    (sapi_globals.sapi_headers).send_default_content_type = 0;
   }
   if (mimetype_alloced) {
    _efree((mimetype) );
   }
   { { char *__s=(out_buffer); int __l=out_len; (return_value)->value.str.len = __l; (return_value)->value.str.val = (0?_estrndup((__s), (__l) ):__s); (return_value)->type = 6; }; return; };
  }
  if (mimetype_alloced) {
   _efree((mimetype) );
  }
 }

 _zval_dtor((return_value) );
 *return_value = *zv_string;
 _zval_copy_ctor((return_value) );
}




void zif_iconv_set_encoding(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *type, *charset;
 int type_len, charset_len =0, retval;

 if (zend_parse_parameters((ht) , "ss", &type, &type_len, &charset, &charset_len) == -1)
  return;

 if (charset_len >= 64) {
  php_error_docref0(((void*)0) , (1<<1L), "Charset parameter exceeds the maximum allowed length of %d characters", 64);
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if(!strcasecmp("input_encoding", type)) {
  retval = zend_alter_ini_entry("iconv.input_encoding", sizeof("iconv.input_encoding"), charset, charset_len, (1<<0), (1<<4));
 } else if(!strcasecmp("output_encoding", type)) {
  retval = zend_alter_ini_entry("iconv.output_encoding", sizeof("iconv.output_encoding"), charset, charset_len, (1<<0), (1<<4));
 } else if(!strcasecmp("internal_encoding", type)) {
  retval = zend_alter_ini_entry("iconv.internal_encoding", sizeof("iconv.internal_encoding"), charset, charset_len, (1<<0), (1<<4));
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

 if (retval == 0) {
  { { (*return_value).type = 3; (*return_value).value.lval = ((1) != 0); }; return; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }
}




void zif_iconv_get_encoding(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *type = "all";
 int type_len;

 if (zend_parse_parameters((ht) , "|s", &type, &type_len) == -1)
  return;

 if (!strcasecmp("all", type)) {
  _array_init((return_value) );
  add_assoc_string_ex(return_value, "input_encoding", strlen("input_encoding")+1, (iconv_globals.input_encoding), 1);
  add_assoc_string_ex(return_value, "output_encoding", strlen("output_encoding")+1, (iconv_globals.output_encoding), 1);
  add_assoc_string_ex(return_value, "internal_encoding", strlen("internal_encoding")+1, (iconv_globals.internal_encoding), 1);
 } else if (!strcasecmp("input_encoding", type)) {
  { char *__s=((iconv_globals.input_encoding)); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (1?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; };
 } else if (!strcasecmp("output_encoding", type)) {
  { char *__s=((iconv_globals.output_encoding)); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (1?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; };
 } else if (!strcasecmp("internal_encoding", type)) {
  { char *__s=((iconv_globals.internal_encoding)); (return_value)->value.str.len = strlen(__s); (return_value)->value.str.val = (1?_estrndup((__s), ((return_value)->value.str.len) ):__s); (return_value)->type = 6; };
 } else {
  { { (*return_value).type = 3; (*return_value).value.lval = ((0) != 0); }; return; };
 }

}



typedef struct _php_iconv_stream_filter {
 iconv_t cd;
 int persistent;
 char *to_charset;
 size_t to_charset_len;
 char *from_charset;
 size_t from_charset_len;
 char stub[128];
 size_t stub_len;
} php_iconv_stream_filter;



static void php_iconv_stream_filter_dtor(php_iconv_stream_filter *self)
{
 iconv_close(self->cd);
 ((self->persistent)?free(self->to_charset):_efree((self->to_charset) ));
 ((self->persistent)?free(self->from_charset):_efree((self->from_charset) ));
}



static php_iconv_err_t php_iconv_stream_filter_ctor(php_iconv_stream_filter *self,
  const char *to_charset, size_t to_charset_len,
  const char *from_charset, size_t from_charset_len, int persistent)
{
 if (((void*)0) == (self->to_charset = ((persistent)?__zend_malloc(to_charset_len + 1):_emalloc((to_charset_len + 1) )))) {
  return PHP_ICONV_ERR_ALLOC;
 }
 self->to_charset_len = to_charset_len;
 if (((void*)0) == (self->from_charset = ((persistent)?__zend_malloc(from_charset_len + 1):_emalloc((from_charset_len + 1) )))) {
  ((persistent)?free(self->to_charset):_efree((self->to_charset) ));
  return PHP_ICONV_ERR_ALLOC;
 }
 self->from_charset_len = from_charset_len;

 memcpy(self->to_charset, to_charset, to_charset_len);
 self->to_charset[to_charset_len] = '\0';
 memcpy(self->from_charset, from_charset, from_charset_len);
 self->from_charset[from_charset_len] = '\0';

 if ((iconv_t)-1 == (self->cd = iconv_open(self->to_charset, self->from_charset))) {
  ((persistent)?free(self->from_charset):_efree((self->from_charset) ));
  ((persistent)?free(self->to_charset):_efree((self->to_charset) ));
  return PHP_ICONV_ERR_UNKNOWN;
 }
 self->persistent = persistent;
 self->stub_len = 0;
 return PHP_ICONV_ERR_SUCCESS;
}



static int php_iconv_stream_filter_append_bucket(
  php_iconv_stream_filter *self,
  php_stream *stream, php_stream_filter *filter,
  php_stream_bucket_brigade *buckets_out,
  const char *ps, size_t buf_len, size_t *consumed,
  int persistent )
{
 php_stream_bucket *new_bucket;
 char *out_buf = ((void*)0);
 size_t out_buf_size;
 char *pd, *pt;
 size_t ocnt, prev_ocnt, icnt, tcnt;
 size_t initial_out_buf_size;

 if (ps == ((void*)0)) {
  initial_out_buf_size = 64;
  icnt = 1;
 } else {
  initial_out_buf_size = buf_len;
  icnt = buf_len;
 }

 out_buf_size = ocnt = prev_ocnt = initial_out_buf_size;
 if (((void*)0) == (out_buf = ((persistent)?__zend_malloc(out_buf_size):_emalloc((out_buf_size) )))) {
  return -1;
 }

 pd = out_buf;

 if (self->stub_len > 0) {
  pt = self->stub;
  tcnt = self->stub_len;

  while (tcnt > 0) {
   if (iconv(self->cd, &pt, &tcnt, &pd, &ocnt) == (size_t)-1) {

    switch ((*__errno_location ())) {
     case 84:
      php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): invalid multibyte sequence", self->from_charset, self->to_charset);
      goto out_failure;

     case 22:
      if (ps != ((void*)0)) {
       if (icnt > 0) {
        if (self->stub_len >= sizeof(self->stub)) {
         php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): insufficient buffer", self->from_charset, self->to_charset);
         goto out_failure;
        }
        self->stub[self->stub_len++] = *(ps++);
        icnt--;
        pt = self->stub;
        tcnt = self->stub_len;
       } else {
        tcnt = 0;
        break;
       }
      }
      break;

     case 7: {
      char *new_out_buf;
      size_t new_out_buf_size;

      new_out_buf_size = out_buf_size << 1;

      if (new_out_buf_size < out_buf_size) {

       if (((void*)0) == (new_bucket = php_stream_bucket_new(stream, out_buf, (out_buf_size - ocnt), 1, persistent ))) {
        goto out_failure;
       }

       php_stream_bucket_append(buckets_out, new_bucket );

       out_buf_size = ocnt = initial_out_buf_size;
       if (((void*)0) == (out_buf = ((persistent)?__zend_malloc(out_buf_size):_emalloc((out_buf_size) )))) {
        return -1;
       }
       pd = out_buf;
      } else {
       if (((void*)0) == (new_out_buf = ((persistent)?__zend_realloc((out_buf), (new_out_buf_size)):_erealloc(((out_buf)), ((new_out_buf_size)), 0 )))) {
        if (((void*)0) == (new_bucket = php_stream_bucket_new(stream, out_buf, (out_buf_size - ocnt), 1, persistent ))) {
         goto out_failure;
        }

        php_stream_bucket_append(buckets_out, new_bucket );
        return -1;
       }
       pd = new_out_buf + (pd - out_buf);
       ocnt += (new_out_buf_size - out_buf_size);
       out_buf = new_out_buf;
       out_buf_size = new_out_buf_size;
      }
     } break;

     default:
      php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): unknown error", self->from_charset, self->to_charset);
      goto out_failure;
    }






   }
   prev_ocnt = ocnt;
  }
  memmove(self->stub, pt, tcnt);
  self->stub_len = tcnt;
 }

 while (icnt > 0) {
  if ((ps == ((void*)0) ? iconv(self->cd, ((void*)0), ((void*)0), &pd, &ocnt):
     iconv(self->cd, (char **)&ps, &icnt, &pd, &ocnt)) == (size_t)-1) {

   switch ((*__errno_location ())) {
    case 84:
     php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): invalid multibyte sequence", self->from_charset, self->to_charset);
     goto out_failure;

    case 22:
     if (ps != ((void*)0)) {
      if (icnt > sizeof(self->stub)) {
       php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): insufficient buffer", self->from_charset, self->to_charset);
       goto out_failure;
      }
      memcpy(self->stub, ps, icnt);
      self->stub_len = icnt;
      ps += icnt;
      icnt = 0;
     } else {
      php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): unexpected octet values", self->from_charset, self->to_charset);
      goto out_failure;
     }
     break;

    case 7: {
     char *new_out_buf;
     size_t new_out_buf_size;

     new_out_buf_size = out_buf_size << 1;

     if (new_out_buf_size < out_buf_size) {

      if (((void*)0) == (new_bucket = php_stream_bucket_new(stream, out_buf, (out_buf_size - ocnt), 1, persistent ))) {
       goto out_failure;
      }

      php_stream_bucket_append(buckets_out, new_bucket );

      out_buf_size = ocnt = initial_out_buf_size;
      if (((void*)0) == (out_buf = ((persistent)?__zend_malloc(out_buf_size):_emalloc((out_buf_size) )))) {
       return -1;
      }
      pd = out_buf;
     } else {
      if (((void*)0) == (new_out_buf = ((persistent)?__zend_realloc((out_buf), (new_out_buf_size)):_erealloc(((out_buf)), ((new_out_buf_size)), 0 )))) {
       if (((void*)0) == (new_bucket = php_stream_bucket_new(stream, out_buf, (out_buf_size - ocnt), 1, persistent ))) {
        goto out_failure;
       }

       php_stream_bucket_append(buckets_out, new_bucket );
       return -1;
      }
      pd = new_out_buf + (pd - out_buf);
      ocnt += (new_out_buf_size - out_buf_size);
      out_buf = new_out_buf;
      out_buf_size = new_out_buf_size;
     }
    } break;

    default:
     php_error_docref0(((void*)0) , (1<<1L), "iconv stream filter (\"%s\"=>\"%s\"): unknown error", self->from_charset, self->to_charset);
     goto out_failure;
   }






  } else {
   if (ps == ((void*)0)) {
    break;
   }
  }
  prev_ocnt = ocnt;
 }

 if (out_buf_size - ocnt > 0) {
  if (((void*)0) == (new_bucket = php_stream_bucket_new(stream, out_buf, (out_buf_size - ocnt), 1, persistent ))) {
   goto out_failure;
  }
  php_stream_bucket_append(buckets_out, new_bucket );
 } else {
  ((persistent)?free(out_buf):_efree((out_buf) ));
 }
 *consumed += buf_len - icnt;

 return 0;

out_failure:
 ((persistent)?free(out_buf):_efree((out_buf) ));
 return -1;
}



static php_stream_filter_status_t php_iconv_stream_filter_do_filter(
  php_stream *stream, php_stream_filter *filter,
  php_stream_bucket_brigade *buckets_in,
  php_stream_bucket_brigade *buckets_out,
  size_t *bytes_consumed, int flags )
{
 php_stream_bucket *bucket = ((void*)0);
 size_t consumed = 0;
 php_iconv_stream_filter *self = (php_iconv_stream_filter *)filter->abstract;

 while (buckets_in->head != ((void*)0)) {
  bucket = buckets_in->head;

  php_stream_bucket_unlink(bucket );

  if (php_iconv_stream_filter_append_bucket(self, stream, filter,
    buckets_out, bucket->buf, bucket->buflen, &consumed,
    (stream)->is_persistent ) != 0) {
   goto out_failure;
  }

  php_stream_bucket_delref(bucket );
 }

 if (flags != 0) {
  if (php_iconv_stream_filter_append_bucket(self, stream, filter,
    buckets_out, ((void*)0), 0, &consumed,
    (stream)->is_persistent ) != 0) {
   goto out_failure;
  }
 }

 if (bytes_consumed != ((void*)0)) {
  *bytes_consumed = consumed;
 }

 return PSFS_PASS_ON;

out_failure:
 if (bucket != ((void*)0)) {
  php_stream_bucket_delref(bucket );
 }
 return PSFS_ERR_FATAL;
}



static void php_iconv_stream_filter_cleanup(php_stream_filter *filter )
{
 php_iconv_stream_filter_dtor((php_iconv_stream_filter *)filter->abstract);
 ((((php_iconv_stream_filter *)filter->abstract)->persistent)?free(filter->abstract):_efree((filter->abstract) ));
}


static php_stream_filter_ops php_iconv_stream_filter_ops = {
 php_iconv_stream_filter_do_filter,
 php_iconv_stream_filter_cleanup,
 "convert.iconv.*"
};


static php_stream_filter *php_iconv_stream_filter_factory_create(const char *name, zval *params, int persistent )
{
 php_stream_filter *retval = ((void*)0);
 php_iconv_stream_filter *inst;
 char *from_charset = ((void*)0), *to_charset = ((void*)0);
 size_t from_charset_len, to_charset_len;

 if ((from_charset = (__extension__ (__builtin_constant_p ('.') && !__builtin_constant_p (name) && ('.') == '\0' ? (char *) __rawmemchr (name, '.') : __builtin_strchr (name, '.')))) == ((void*)0)) {
  return ((void*)0);
 }
 ++from_charset;
 if ((from_charset = (__extension__ (__builtin_constant_p ('.') && !__builtin_constant_p (from_charset) && ('.') == '\0' ? (char *) __rawmemchr (from_charset, '.') : __builtin_strchr (from_charset, '.')))) == ((void*)0)) {
  return ((void*)0);
 }
 ++from_charset;
 if ((to_charset = (__extension__ (__builtin_constant_p ('/') && !__builtin_constant_p (from_charset) && ('/') == '\0' ? (char *) __rawmemchr (from_charset, '/') : __builtin_strchr (from_charset, '/')))) == ((void*)0)) {
  return ((void*)0);
 }
 from_charset_len = to_charset - from_charset;
 ++to_charset;
 to_charset_len = strlen(to_charset);

 if (from_charset_len >= 64 || to_charset_len >= 64) {
  return ((void*)0);
 }

 if (((void*)0) == (inst = ((persistent)?__zend_malloc(sizeof(php_iconv_stream_filter)):_emalloc((sizeof(php_iconv_stream_filter)) )))) {
  return ((void*)0);
 }

 if (php_iconv_stream_filter_ctor(inst, to_charset, to_charset_len, from_charset, from_charset_len, persistent) != PHP_ICONV_ERR_SUCCESS) {
  ((persistent)?free(inst):_efree((inst) ));
  return ((void*)0);
 }

 if (((void*)0) == (retval = _php_stream_filter_alloc((&php_iconv_stream_filter_ops), (inst), (persistent) ))) {
  php_iconv_stream_filter_dtor(inst);
  ((persistent)?free(inst):_efree((inst) ));
 }

 return retval;
}



static php_iconv_err_t php_iconv_stream_filter_register_factory(void)
{
 static php_stream_filter_factory filter_factory = {
  php_iconv_stream_filter_factory_create
 };

 if (-1 == php_stream_filter_register_factory(
    php_iconv_stream_filter_ops.label,
    &filter_factory )) {
  return PHP_ICONV_ERR_UNKNOWN;
 }
 return PHP_ICONV_ERR_SUCCESS;
}



static php_iconv_err_t php_iconv_stream_filter_unregister_factory(void)
{
 if (-1 == php_stream_filter_unregister_factory(
    php_iconv_stream_filter_ops.label )) {
  return PHP_ICONV_ERR_UNKNOWN;
 }
 return PHP_ICONV_ERR_SUCCESS;
}
