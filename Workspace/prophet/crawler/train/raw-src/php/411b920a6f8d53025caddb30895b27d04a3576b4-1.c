# 1 "ext/standard/string.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "ext/standard/string.c" 2
# 25 "ext/standard/string.c"
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
# 26 "ext/standard/string.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 1
# 34 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_version.h" 1
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 51 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 2505 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h"
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
# 2506 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 2
# 2521 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h"
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
# 2522 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 2
# 2532 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h"
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
# 2533 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 2
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_config.h" 2
# 52 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 68 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 69 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 79 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 80 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 259 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_errors.h" 1
# 260 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h" 1
# 20 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 21 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h" 2
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_int.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_int.h"
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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_int.h" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 271 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));





extern long int __strtol_internal (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__ )) strtoimax (const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (const char *__restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__ )) strtoumax (const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (const __gwchar_t * __restrict __nptr,
       __gwchar_t **__restrict __endptr,
       int __base, int __group)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
__attribute__ ((__nothrow__ )) wcstoimax (const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (const __gwchar_t *
          __restrict __nptr,
          __gwchar_t **
          __restrict __endptr,
          int __base, int __group)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
__attribute__ ((__nothrow__ )) wcstoumax (const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_int.h" 2
# 54 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_int.h"
typedef int64_t zend_int_t;
typedef uint64_t zend_uint_t;
typedef off_t zend_off_t;
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h" 2
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;
# 62 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
typedef size_t zend_size_t;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 82 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
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
 zend_int_t lval;
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
 zend_uint_t h;
 zend_size_t len;
 char val[1];
};

typedef struct _Bucket {
 zend_uint_t h;
 zend_string *key;
 zval val;
} Bucket;

typedef struct _HashTable {
 zend_uint nTableSize;
 zend_uint nTableMask;
 zend_uint nNumUsed;
 zend_uint nNumOfElements;
 zend_int_t nNextFreeElement;
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
 zend_int_t handle;
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
# 247 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_types.h"
static inline zend_uchar zval_get_type(const zval* pz) {
 return pz->u1.v.type;
}
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h" 2
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, zend_size_t length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__)) ;
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__)) ;
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure ) ;
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, zend_size_t length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 94 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
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
# 140 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit );

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 157 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );
# 176 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 196 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_alloc.h"
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
# 261 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2




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
# 266 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 281 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
static const char int_min_digits[] = "9223372036854775808";






typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h" 2
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
typedef struct _zend_hash_key {
 zend_uint_t h;
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
# 86 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add_or_update(HashTable *ht, const char *key, int len, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_update(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_update_ind(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add_new(HashTable *ht, const char *key, int len, zval *pData );
# 101 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *_zend_hash_index_update_or_next_insert(HashTable *ht, zend_uint_t h, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_add(HashTable *ht, zend_uint_t h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_add_new(HashTable *ht, zend_uint_t h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_update(HashTable *ht, zend_uint_t h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_next_index_insert(HashTable *ht, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_next_index_insert_new(HashTable *ht, zval *pData );
# 119 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *zend_hash_index_add_empty_element(HashTable *ht, zend_uint_t h);
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
__attribute__ ((visibility("default"))) int zend_hash_index_del(HashTable *ht, zend_uint_t h);


__attribute__ ((visibility("default"))) zval *zend_hash_find(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval *zend_hash_str_find(const HashTable *ht, const char *key, int len);
__attribute__ ((visibility("default"))) zval *zend_hash_index_find(const HashTable *ht, zend_uint_t h);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_str_exists(const HashTable *ht, const char *str, int len);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, zend_uint_t h);




__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, zend_string **str_index, zend_uint_t *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) zval *zend_hash_get_current_data_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 HashTable *ht;
 zend_uint_t h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 204 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) zval *zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag );
# 220 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);

__attribute__ ((visibility("default"))) void zend_array_dup(HashTable *target, HashTable *source);
# 238 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
static inline int _zend_handle_numeric_str(const char *key, zend_size_t length, zend_uint_t *idx)
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
    if (*idx-1 > (9223372036854775807L)) {
     return 0;
    }
    *idx = 0 - *idx;
   } else if (*idx > (9223372036854775807L)) {
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
# 295 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_hash.h"
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
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update(ht, key, pData );
 }
}


static inline zval *zend_symtable_update_ind(HashTable *ht, zend_string *key, zval *pData)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update_ind(ht, key, pData );
 }
}


static inline int zend_symtable_del(HashTable *ht, zend_string *key)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del(ht, key);
 }
}


static inline int zend_symtable_del_ind(HashTable *ht, zend_string *key)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del_ind(ht, key);
 }
}


static inline zval *zend_symtable_find(const HashTable *ht, zend_string *key)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find(ht, key);
 }
}


static inline zval *zend_symtable_find_ind(const HashTable *ht, zend_string *key)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find_ind(ht, key);
 }
}


static inline int zend_symtable_exists(HashTable *ht, zend_string *key)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists(ht, key);
 }
}


static inline zval *zend_symtable_str_update(HashTable *ht, const char *str, int len, zval *pData)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update(ht, str, len, pData );
 }
}


static inline zval *zend_symtable_str_update_ind(HashTable *ht, const char *str, int len, zval *pData)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update_ind(ht, str, len, pData );
 }
}


static inline int zend_symtable_str_del(HashTable *ht, const char *str, int len)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del(ht, str, len);
 }
}


static inline int zend_symtable_str_del_ind(HashTable *ht, const char *str, int len)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del_ind(ht, str, len);
 }
}


static inline zval *zend_symtable_str_find(HashTable *ht, const char *str, int len)
{
 zend_uint_t idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_str_find(ht, str, len);
 }
}


static inline int zend_symtable_str_exists(HashTable *ht, const char *str, int len)
{
 zend_uint_t idx;

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

static inline void *zend_hash_index_update_ptr(HashTable *ht, zend_uint_t h, void *pData)
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

static inline void *zend_hash_index_update_mem(HashTable *ht, zend_uint_t h, void *pData, size_t size)
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

static inline void *zend_hash_index_find_ptr(const HashTable *ht, zend_uint_t h)
{
 zval *zv;

 zv = zend_hash_index_find(ht, h);
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_symtable_str_find_ptr(HashTable *ht, const char *str, int len)
{
 zend_uint_t idx;

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
# 294 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
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
# 295 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 306 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));





# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, void **cache_slot, zval *rv );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type, zval *rv );
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_object_handlers.h"
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



typedef int (*zend_object_count_elements_t)(zval *object, zend_int_t *count );

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
# 312 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ast.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ast.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ast.h" 2

typedef enum _zend_ast_kind {

 ZEND_CONST = 256,
 ZEND_BOOL_AND,
 ZEND_BOOL_OR,
 ZEND_SELECT,
 ZEND_UNARY_PLUS,
 ZEND_UNARY_MINUS,
} zend_ast_kind;

struct _zend_ast {
 unsigned short kind;
 unsigned short children;
 union {
  zval val;
  zend_ast *child;
 } u;
};

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_constant(zval *zv);

__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_unary(uint kind, zend_ast *op0);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_binary(uint kind, zend_ast *op0, zend_ast *op1);
__attribute__ ((visibility("default"))) zend_ast *zend_ast_create_ternary(uint kind, zend_ast *op0, zend_ast *op1, zend_ast *op2);
__attribute__ ((visibility("default"))) zend_ast* zend_ast_create_dynamic(uint kind);
__attribute__ ((visibility("default"))) void zend_ast_dynamic_add(zend_ast **ast, zend_ast *op);
__attribute__ ((visibility("default"))) void zend_ast_dynamic_shrink(zend_ast **ast);

__attribute__ ((visibility("default"))) int zend_ast_is_ct_constant(zend_ast *ast);

__attribute__ ((visibility("default"))) void zend_ast_evaluate(zval *result, zend_ast *ast, zend_class_entry *scope );

__attribute__ ((visibility("default"))) zend_ast *zend_ast_copy(zend_ast *ast);
__attribute__ ((visibility("default"))) void zend_ast_destroy(zend_ast *ast);
# 313 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 403 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h" 2



__attribute__ ((visibility("default"))) extern zend_string *(*zend_new_interned_string)(zend_string *str );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

__attribute__ ((visibility("default"))) zend_uint_t zend_hash_func(const char *str, zend_size_t len);
void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 73 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_uint_t zend_str_hash_val(zend_string *s)
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

static inline __attribute__((always_inline)) zend_string *zend_str_alloc(zend_size_t len, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?__zend_malloc((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1LL) & ~(8 -1LL))):_emalloc(((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1LL) & ~(8 -1LL))) ));

 ((zend_refcounted*)(ret))->refcount = 1;


 ((zend_refcounted*)(ret))->u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 ret->h = 0;
 ret->len = len;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_safe_alloc(size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?_safe_malloc(n, m, (((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1LL) & ~(8 -1LL))):_safe_emalloc((n), (m), ((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1LL) & ~(8 -1LL))) ));

 ((zend_refcounted*)(ret))->refcount = 1;


 ((zend_refcounted*)(ret))->u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 ret->h = 0;
 ret->len = (n * m) + l;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_init(const char *str, zend_size_t len, int persistent)
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

static inline __attribute__((always_inline)) zend_string *zend_str_realloc(zend_string *s, zend_size_t len, int persistent)
{
 zend_string *ret;

 if ((((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  ret = zend_str_alloc(len, persistent);
  memcpy(ret->val, s->val, (len > s->len ? s->len : len) + 1);
 } else if (__builtin_expect(!(!(zend_str_refcount(s) == 1)), 1)) {
  ret = (zend_string *)((persistent)?__zend_realloc((s), ((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1LL) & ~(8 -1LL)))):_erealloc(((s)), (((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1LL) & ~(8 -1LL)))), 0 ));
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
  ret = (zend_string *)((persistent)?_safe_realloc((s), (n), (m), ((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1LL) & ~(8 -1LL)))):_safe_erealloc(((s)), ((n)), ((m)), (((((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1LL) & ~(8 -1LL)))) ));
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
# 260 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_string.h"
static inline zend_uint_t zend_inline_hash_func(const char *str, zend_size_t len)
{
 register zend_uint_t hash = 5381ULL;


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
# 404 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

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


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_iterators.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_iterators.h"
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
 zend_uint_t index;
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
# 432 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

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


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h"
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
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h" 2




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
# 97 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_stream.h"
typedef struct stat zend_stat_t;
# 535 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 zend_size_t (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 zend_size_t (*write_function)(const char *str, zend_size_t str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks );
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 zend_size_t (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
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
# 572 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);
# 611 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
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
# 637 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
__attribute__ ((visibility("default"))) void free_estring(char **str_p);
__attribute__ ((visibility("default"))) void free_string_zval(zval *zv);
# 649 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
extern __attribute__ ((visibility("default"))) zend_size_t (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks );
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern zend_size_t (*zend_vspprintf)(char **pbuf, zend_size_t max_len, const char *format, va_list ap);
extern zend_string *(*zend_vstrpprintf)(zend_size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;
# 688 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
__attribute__ ((visibility("default"))) void zend_message_dispatcher(zend_int_t message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);
# 826 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h" 1
# 76 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
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
# 108 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
} zend_gc_globals;
# 117 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_possible_root(zend_refcounted *ref );
__attribute__ ((visibility("default"))) void gc_remove_from_buffer(zend_refcounted *ref );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);
# 140 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_check_possible_root(zval *z )
{
 do { if (__builtin_expect(!(!((zval_get_type(&(*(z))) == 10))), 0)) { (z) = &(*(z)).value.ref->val; } } while (0);
 if ((((*(z)).u1.v.type_flags & (1<<2)) != 0) && __builtin_expect(!(!(!((zend_refcounted*)((*(z)).value.counted))->u.v.gc_info)), 0)) {
  gc_possible_root((*(z)).value.counted );
 }
}
# 827 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
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


# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3
# 47 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3
typedef long int ptrdiff_t;
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2






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
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_multiply.h" 1
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h" 2








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
# 94 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
static inline __attribute__((always_inline)) zend_int_t zend_dval_to_ival(double d)
{

 if (d >= (9223372036854775807L) || d < (-9223372036854775807L -1)) {
  double two_pow_64 = pow(2., 64.),
    dmod;

  dmod = fmod(d, two_pow_64);
  if (dmod < 0) {


   dmod += two_pow_64;
  }
  return (zend_int_t)(zend_uint_t)dmod;
 }
 return (zend_int_t)d;
}
# 132 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
static inline zend_uchar is_numeric_string_ex(const char *str, zend_size_t length, zend_int_t *lval, double *dval, int allow_errors, int *oflow_info)
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
   int cmp = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (&ptr[-digits]) && __builtin_constant_p (int_min_digits) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s2_len = __builtin_strlen (int_min_digits), (!((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((int_min_digits) + 1) - (size_t)(const void *)(int_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (&ptr[-digits], int_min_digits) : (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s1_len < 4) ? (__builtin_constant_p (int_min_digits) && ((size_t)(const void *)((int_min_digits) + 1) - (size_t)(const void *)(int_min_digits) == 1) ? __builtin_strcmp (&ptr[-digits], int_min_digits) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (int_min_digits); int __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (int_min_digits) && ((size_t)(const void *)((int_min_digits) + 1) - (size_t)(const void *)(int_min_digits) == 1) && (__s2_len = __builtin_strlen (int_min_digits), __s2_len < 4) ? (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) ? __builtin_strcmp (&ptr[-digits], int_min_digits) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (&ptr[-digits]); int __result = (((const unsigned char *) (const char *) (int_min_digits))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (int_min_digits))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (int_min_digits))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (int_min_digits))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (&ptr[-digits], int_min_digits)))); });

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
   *lval = strtoll((str), (((void*)0)), (base));
  }

  return 4;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 5;
 }
}

static inline zend_uchar is_numeric_string(const char *str, zend_size_t length, zend_int_t *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void*)0));
}

__attribute__ ((visibility("default"))) zend_uchar is_numeric_str_function(const zend_string *str, zend_int_t *lval, double *dval);

static inline const char *
zend_memnstr(const char *haystack, const char *needle, zend_size_t needle_len, char *end)
{
 const char *p = haystack;
 const char ne = needle[needle_len-1];
 ptrdiff_t off_p;
 zend_size_t off_s;

 if (needle_len == 1) {
  return (char *)memchr(p, *needle, (end-p));
 }

 off_p = end - haystack;
 off_s = (off_p > 0) ? (zend_size_t)off_p : 0;
 if (needle_len > off_s) {
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

static inline const void *zend_memrchr(const void *s, int c, zend_size_t n)
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
__attribute__ ((visibility("default"))) void convert_to_int(zval *op);
__attribute__ ((visibility("default"))) void convert_to_double(zval *op);
__attribute__ ((visibility("default"))) void convert_to_int_base(zval *op, int base);
__attribute__ ((visibility("default"))) void convert_to_null(zval *op);
__attribute__ ((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__ ((visibility("default"))) void convert_to_array(zval *op);
__attribute__ ((visibility("default"))) void convert_to_object(zval *op);
__attribute__ ((visibility("default"))) void multi_convert_to_int_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_double_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_string_ex(int argc, ...);

__attribute__ ((visibility("default"))) zend_int_t _zval_get_int_func(zval *op );
__attribute__ ((visibility("default"))) double _zval_get_double_func(zval *op );
__attribute__ ((visibility("default"))) zend_string *_zval_get_string_func(zval *op );

static inline __attribute__((always_inline)) zend_int_t _zval_get_int(zval *op ) {
 return zval_get_type(&(*(op))) == 4 ? (*(op)).value.lval : _zval_get_int_func(op );
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


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, zend_size_t length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_copy(char *dest, const char *source, zend_size_t length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_dup(const char *source, zend_size_t length);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, zend_size_t len1, const char *s2, zend_size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, zend_size_t len1, const char *s2, zend_size_t len2, zend_size_t length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, zend_size_t len1, const char *s2, zend_size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, zend_size_t len1, const char *s2, zend_size_t len2, zend_size_t length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp_l(const char *s1, zend_size_t len1, const char *s2, zend_size_t len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp_l(const char *s1, zend_size_t len1, const char *s2, zend_size_t len2, zend_size_t length);

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) zend_int_t zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );
# 481 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
# 498 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 518 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  return SUCCESS;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
# 540 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 560 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
  return SUCCESS;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
# 593 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 629 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 678 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 712 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
   zend_int_t overflow;

   do { zend_int_t __tmpvar; __asm__ ("imul %3,%0\n" "adc $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*(op1)).value.lval), "r"((*(op2)).value.lval), "1"(0)); if (overflow) ((*(result)).value.dval) = (double) ((*(op1)).value.lval) * (double) ((*(op2)).value.lval); else ((*(result)).value.lval) = __tmpvar; } while (0);
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
# 802 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
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
# 1048 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_string *zend_int_to_str(zend_int_t num);
# 828 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h"
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
# 121 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval *p);
__attribute__ ((visibility("default"))) void zval_add_ref_unref(zval *p);
# 829 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend.h" 2

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
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_qsort.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_qsort.h"
typedef int (*compare_r_func_t)(const void *, const void * , void *);
__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );
__attribute__ ((visibility("default"))) void zend_qsort_r(void *base, size_t nmemb, size_t siz, compare_r_func_t compare, void *arg );
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_compat.h" 2
# 38 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

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
 int in_finally;
 HashTable *labels;
} zend_compiler_context;

typedef union _znode_op {
 zend_uint constant;
 zend_uint var;
 zend_uint num;
 zend_uint_t hash;
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
  zend_op_array *op_array;
  zend_ast *ast;
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
 zend_uint_t extended_value;
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
# 211 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 zend_string *name;
 zend_uint_t h;
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

typedef struct _zend_function_call_entry {
 zend_function *fbc;
 zend_uint op_number;
 zend_uint arg_num;
 zend_bool uses_argument_unpacking;
} zend_function_call_entry;

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
# 412 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
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

static inline void *zend_ptr_stack_top(zend_ptr_stack *stack)
{
    return stack->elements[stack->top - 1];
}
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects.h" 1
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects.h"
__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object *zend_objects_new(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object *old_object );
__attribute__ ((visibility("default"))) zend_object *zend_objects_clone_obj(zval *object );
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects_API.h" 1
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_objects_API.h"
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
# 36 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_modules.h" 1
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 214 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 215 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_float.h" 2
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
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_arena.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_arena.h"
typedef struct _zend_arena zend_arena;

struct _zend_arena {
 char *ptr;
 char *end;
 zend_arena *prev;
};

static inline __attribute__((always_inline)) zend_arena* zend_arena_create(size_t size)
{
 zend_arena *arena = (zend_arena*)_emalloc((size) );

 arena->ptr = (char*) arena + (((sizeof(zend_arena)) + 8 - 1LL) & ~(8 -1LL));
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

 size = (((size) + 8 - 1LL) & ~(8 -1LL));

 if (__builtin_expect(!(!(size <= (size_t)(arena->end - ptr))), 1)) {
  arena->ptr = ptr + size;
 } else {
  size_t arena_size =
   __builtin_expect(!(!((size + (((sizeof(zend_arena)) + 8 - 1LL) & ~(8 -1LL))) > (size_t)(arena->end - (char*) arena))), 0) ?
    (size + (((sizeof(zend_arena)) + 8 - 1LL) & ~(8 -1LL))) :
    (arena->end - (char*) arena);
  zend_arena *new_arena = (zend_arena*)_emalloc((arena_size) );

  ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1LL) & ~(8 -1LL));
  new_arena->ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1LL) & ~(8 -1LL)) + size;
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
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2
# 56 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 1
# 57 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_globals.h" 2








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

 zend_int_t catch_begin;

 struct _zend_ini_parser_param *ini_parser_param;

 int interactive;

 zend_uint start_lineno;
 zend_bool increment_lineno;

 znode implementing_class;

 zend_uint access_type;

 zend_string *doc_comment;

 zend_uint compiler_options;

 zval current_namespace;
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

 zend_int_t precision;

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


 zend_int_t timeout_seconds;

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
# 413 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 2



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

void zend_resolve_non_class_name(znode *element_name, zend_bool *check_namespace, zend_bool case_sensitive, HashTable *current_import_sub );
void zend_resolve_function_name(znode *element_name, zend_bool *check_namespace );
void zend_resolve_const_name(znode *element_name, zend_bool *check_namespace );
void zend_resolve_class_name(znode *class_name );
__attribute__ ((visibility("default"))) zend_string *zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var);
# 447 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, znode *op1, znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, znode *op1, znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, znode *lvar, znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, const znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, const znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, znode *parent, znode *dim );
void fetch_string_offset(znode *result, znode *parent, znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, znode *arg );
void zend_do_echo(znode *arg );
typedef int (*unary_op_type)(zval *, zval * );
typedef int (*binary_op_type)(zval *, zval *, zval * );
__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_do_while_cond(znode *expr, znode *close_bracket_token );
void zend_do_while_end(const znode *while_token, const znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(const znode *do_token, const znode *expr_open_bracket, znode *expr );


void zend_do_if_cond(znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(const znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(const znode *cond_start, const znode *second_semicolon_token );
void zend_do_for_end(const znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(znode *variable, int type, int arg_offset );

void zend_check_writable_variable(const znode *variable);

void zend_do_free(znode *op1 );

void zend_do_add_string(znode *result, znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, znode *op1, znode *op2 );

int zend_do_verify_access_types(const znode *current_access_type, const znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(const znode *function_token );
void zend_do_receive_param(zend_uchar op, znode *varname, znode *initialization, znode *class_type, zend_bool pass_by_reference, zend_bool is_variadic );
int zend_do_begin_function_call(znode *function_name, zend_bool check_namespace );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name, int prefix_len );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_build_full_name(znode *result, znode *prefix, znode *name, int is_class_member );
int zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_yield(znode *result, znode *value, znode *key, zend_bool is_variable );
void zend_do_handle_exception(void);

void zend_do_begin_lambda_function_declaration(znode *result, znode *function_token, int return_reference, int is_static );
void zend_do_fetch_lexical_variable(znode *varname, zend_bool is_ref );

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, znode *first_catch );
void zend_do_bind_catch(znode *try_token, znode *catch_token );
void zend_do_end_catch(znode *catch_token );
void zend_do_finally(znode *finally_token );
void zend_do_end_finally(znode *try_token, znode* catch_token, znode *finally_token );
void zend_do_throw(znode *expr );

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface );
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );


void zend_do_use_trait(znode *trait_znode );
void zend_prepare_reference(znode *result, znode *class_name, znode *method_name );
void zend_add_trait_precedence(znode *method_reference, znode *trait_list );
void zend_add_trait_alias(znode *method_reference, znode *modifiers, znode *alias );

__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait );
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce );

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array );

void zend_do_pass_param(znode *param, zend_uchar op );
void zend_do_unpack_params(znode *params );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, znode *expr1, znode *expr2, const znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, znode *expr1, znode *expr2, const znode *op_token );

void zend_do_brk_cont(zend_uchar op, znode *expr );

void zend_do_switch_cond(const znode *cond );
void zend_do_switch_end(const znode *case_list );
void zend_do_case_before_statement(const znode *case_list, znode *case_token, znode *case_expr );
void zend_do_case_after_statement(znode *result, const znode *case_token );
void zend_do_default_before_statement(const znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(const znode *class_token, znode *class_name, const znode *parent_class_name );
void zend_do_end_class_declaration(const znode *class_token, const znode *parent_token );
void zend_do_declare_property(znode *var_name, znode *value, zend_uint access_type );
void zend_do_declare_class_constant(znode *var_name, znode *value );

void zend_do_fetch_property(znode *result, znode *object, znode *property );

void zend_do_halt_compiler_register(void);

void zend_do_push_object(const znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, const znode *new_token );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode, zend_bool check_namespace );

void zend_do_shell_exec(znode *result, znode *cmd );

void zend_do_init_array(znode *result, znode *expr, znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, znode *expr, znode *offset, zend_bool is_ref );
void zend_do_end_array(znode *result, const znode *array_node );
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(const znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);


void zend_init_list(void *result, void *item );
void zend_add_to_list(void *result, void *item );


void zend_do_cast(znode *result, znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, znode *op1 );

void zend_do_unset(znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, znode *expr, znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, const znode *open_brackets_token, const znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(const znode *foreach_token, const znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(const znode *declare_token );

void zend_do_exit(znode *result, znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(znode *strudel_token );

void zend_do_jmp_set(znode *value, znode *jmp_token, znode *colon_token );
void zend_do_jmp_set_else(znode *result, znode *false_value, const znode *jmp_token, znode *colon_token );

void zend_do_begin_qm_op(znode *cond, znode *qm_token );
void zend_do_qm_true(znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, znode *false_value, znode *qm_token, const znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(const znode *function_name, znode *modifiers, const znode *body );

void zend_do_declare_constant(znode *name, znode *value );
void zend_do_build_namespace_name(znode *result, znode *prefix, znode *name );
void zend_do_begin_namespace(znode *name, zend_bool with_brackets );
void zend_do_end_namespace(void);
void zend_verify_namespace(void);
void zend_do_use(znode *name, znode *new_name, int is_global );
void zend_do_use_non_class(znode *ns_name, znode *new_name, int is_global, int is_function, zend_bool case_sensitive, HashTable *current_import_sub, HashTable *lookup_table );
void zend_do_use_function(znode *name, znode *new_name, int is_global );
void zend_do_use_const(znode *name, znode *new_name, int is_global );
void zend_do_end_compilation(void);
void zend_do_constant_expression(znode *result, zend_ast *ast );

void zend_do_resolve_class_name(znode *result, znode *class_name, int is_static );

void zend_do_label(znode *label );
void zend_do_goto(znode *label );
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
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(znode *catch_token );
void zend_do_mark_last_catch(const znode *first_catch, const znode *last_additional_catch );
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name );
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(const char *class_name, uint class_name_len);

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

int zendlex(znode *zendlval );

int zend_add_literal(zend_op_array *op_array, zval *zv );




# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_vm_opcodes.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_vm_opcodes.h"
__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);
# 717 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_compile.h" 2
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
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(const zend_module_entry *module );
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_list.h" 1
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_list.h"
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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2


# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h" 1
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
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

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, zend_uint_t fetch_type, char **class_name, zend_class_entry **pce );
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
# 173 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc((count * (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) );

 page->top = (((zval*)(page)) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))));
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
 int size = count * (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL));
 zend_vm_stack p = zend_vm_stack_new_page(
  (size >= ((16 * 1024) - (((((sizeof(struct _zend_vm_stack)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)))) * (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) ?
  (size + (((((((sizeof(struct _zend_vm_stack)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) + (16 * 1024)) * (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1) &
   ~(((16 * 1024) * (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1) :
  (16 * 1024));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame(zend_function *func, zend_uint num_args, zend_uchar flags, zend_class_entry *called_scope, zend_object *object, zend_execute_data *prev )
{
 int used_stack = (((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) + num_args;
 zend_execute_data *call;

 if (((func->type & 1) == 0)) {
  used_stack += func->op_array.last_var + func->op_array.T - (((func->op_array.num_args)<(num_args))?(func->op_array.num_args):(num_args));
 }
 do { if (__builtin_expect(!(!(((used_stack) * (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) > (size_t)(((char*)(executor_globals.argument_stack)->end) - ((char*)(executor_globals.argument_stack)->top)))), 0)) { zend_vm_stack_extend((used_stack) ); } } while (0);
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
   zval *end = (((zval*)(call)) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) + ((int)(call->func->op_array.last_var + call->func->op_array.T))));
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
  zval *end = (((zval*)(call)) + ((1) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  zval *p = end + num_args;

  do {
   p--;
   i_zval_ptr_dtor_nogc(p );
  } while (p != end);
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame(zend_execute_data *call )
{
 if (__builtin_expect(!(!((((zval*)((executor_globals.argument_stack))) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)))) == (zval*)call)), 0)) {
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

__attribute__ ((visibility("default"))) void zend_set_timeout(zend_int_t seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );

__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval(zval *result, zval *container, zval *dim );
# 303 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval* zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 313 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval *var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );

void zend_clean_and_cache_symbol_table(zend_array *symbol_table );
void zend_free_compiled_variables(zend_execute_data *execute_data );
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h" 2




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
# 232 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval *argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 252 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 298 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zend_object *object, uint check_flags, zend_string **callable_name, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, zend_string **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, zend_string **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, zend_string *name, zval *property, int access_type, zend_string *doc_comment );
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, int name_length, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, int name_length, zend_int_t value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_int(zend_class_entry *ce, const char *name, int name_length, zend_int_t value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, int name_length, double value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, int name_length, const char *value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, int name_length, const char *value, int value_len, int access_type );

__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_int(zend_class_entry *ce, const char *name, size_t name_length, zend_int_t value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value );

__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, int name_length );
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_int_t value );
__attribute__ ((visibility("default"))) void zend_update_property_int(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_int_t value );
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) void zend_update_property_str(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_string *value );
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, int name_length );
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, int name_length, zend_int_t value );
__attribute__ ((visibility("default"))) int zend_update_static_property_int(zend_class_entry *scope, const char *name, int name_length, zend_int_t value );
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zend_object *object );
__attribute__ ((visibility("default"))) zend_string *zend_get_object_classname(const zend_object *object );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 364 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);
__attribute__ ((visibility("default"))) void object_properties_init_ex(zend_object *object, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_load(zend_object *object, HashTable *properties );

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(zend_uint param_count, zval *return_value ));

__attribute__ ((visibility("default"))) int add_assoc_int_ex(zval *arg, const char *key, uint key_len, zend_int_t n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_str_ex(zval *arg, const char *key, uint key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 403 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_int(zval *arg, zend_uint_t idx, zend_int_t n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, zend_uint_t idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, zend_uint_t idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, zend_uint_t idx, zend_resource *r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, zend_uint_t idx, double d);
__attribute__ ((visibility("default"))) int add_index_str(zval *arg, zend_uint_t idx, zend_string *str);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, zend_uint_t idx, const char *str);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, zend_uint_t idx, const char *str, uint length);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, zend_uint_t index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_int(zval *arg, zend_int_t n);
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




__attribute__ ((visibility("default"))) zval *add_get_index_int(zval *arg, zend_uint_t idx, zend_int_t l);
__attribute__ ((visibility("default"))) zval *add_get_index_double(zval *arg, zend_uint_t idx, double d);
__attribute__ ((visibility("default"))) zval *add_get_index_str(zval *arg, zend_uint_t index, zend_string *str);
__attribute__ ((visibility("default"))) zval *add_get_index_string(zval *arg, zend_uint_t idx, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_index_stringl(zval *arg, zend_uint_t idx, const char *str, uint length);

__attribute__ ((visibility("default"))) int array_set_zval_key(HashTable *ht, zval *key, zval *value );

__attribute__ ((visibility("default"))) int add_property_int_ex(zval *arg, const char *key, uint key_len, zend_int_t l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, zend_int_t b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, zend_resource *r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_str_ex(zval *arg, const char *key, uint key_len, zend_string *str );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 458 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[], int no_separation, zend_array *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 474 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, zend_string **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval **params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval *params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );
__attribute__ ((visibility("default"))) int zend_fcall_info_args_ex(zend_fcall_info *fci, zend_function *func, zval *args );





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
# 709 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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
# 1056 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_API.h"
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

static inline __attribute__((always_inline)) int _z_param_int(zval *arg, zend_int_t *dest, zend_bool *is_null, int check_null, int strict)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 4)), 1)) {
  *dest = (*(arg)).value.lval;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 5)), 1)) {
  if (strict && __builtin_expect(!(!((*(arg)).value.dval > (9223372036854775807L))), 0)) {
   *dest = (9223372036854775807L);
  } else if (strict && __builtin_expect(!(!((*(arg)).value.dval < (-9223372036854775807L -1))), 0)) {
   *dest = (-9223372036854775807L -1);
  } else {
   *dest = zend_dval_to_ival((*(arg)).value.dval);
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 6)), 1)) {
  double d;
  int type;

  if (__builtin_expect(!(!((type = is_numeric_str_function((*(arg)).value.str, dest, &d)) != 4)), 0)) {
   if (__builtin_expect(!(!(type != 0)), 1)) {
    if (strict && __builtin_expect(!(!(d > (9223372036854775807L))), 0)) {
     *dest = (9223372036854775807L);
    } else if (strict && __builtin_expect(!(!(d < (-9223372036854775807L -1))), 0)) {
     *dest = (-9223372036854775807L -1);
    } else {
     *dest = zend_dval_to_ival(d);
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
  zend_int_t l;
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
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 92 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 93 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 108 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/build-defs.h" 1
# 109 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 134 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);
# 173 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
# 174 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

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
# 274 "/usr/include/unistd.h" 3 4
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
# 176 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 193 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_stdint.h" 1
# 42 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_stdint.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_stdint.h" 2
# 194 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 218 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
# 219 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
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
# 220 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 248 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, zend_size_t *len);
# 127 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE,
 LM_PHP_INT_T
} length_modifier_e;
# 153 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register zend_size_t *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register zend_size_t *len);
# 249 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/spprintf.h" 1
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/spprintf.h"
__attribute__ ((visibility("default"))) zend_size_t spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

__attribute__ ((visibility("default"))) zend_size_t vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));

__attribute__ ((visibility("default"))) zend_string *vstrpprintf(size_t max_len, const char *format, va_list ap);

__attribute__ ((visibility("default"))) zend_string *strpprintf(size_t max_len, const char *format, ...);
# 251 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 279 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
extern char **environ;
# 291 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
void phperror(char *error);
__attribute__ ((visibility("default"))) zend_size_t php_write(void *buf, zend_size_t size );
__attribute__ ((visibility("default"))) zend_size_t php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)));

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
# 320 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
__attribute__ ((visibility("default"))) void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
__attribute__ ((visibility("default"))) void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
__attribute__ ((visibility("default"))) void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));
# 344 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);
# 404 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h"
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
 zval zoh;
} php_output_handler_user_func_t;

typedef struct _php_output_handler {
 zend_string *name;
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
# 180 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 192 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_output.h"
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

__attribute__ ((visibility("default"))) php_output_handler_alias_ctor_t php_output_handler_alias(const char *handler_name, size_t handler_name_len );
__attribute__ ((visibility("default"))) int php_output_handler_alias_register(const char *handler_name, size_t handler_name_len, php_output_handler_alias_ctor_t func );




void zif_ob_start(zend_uint param_count, zval *return_value );
void zif_ob_flush(zend_uint param_count, zval *return_value );
void zif_ob_clean(zend_uint param_count, zval *return_value );
void zif_ob_end_flush(zend_uint param_count, zval *return_value );
void zif_ob_end_clean(zend_uint param_count, zval *return_value );
void zif_ob_get_flush(zend_uint param_count, zval *return_value );
void zif_ob_get_clean(zend_uint param_count, zval *return_value );
void zif_ob_get_contents(zend_uint param_count, zval *return_value );
void zif_ob_get_length(zend_uint param_count, zval *return_value );
void zif_ob_get_level(zend_uint param_count, zval *return_value );
void zif_ob_get_status(zend_uint param_count, zval *return_value );
void zif_ob_implicit_flush(zend_uint param_count, zval *return_value );
void zif_ob_list_handlers(zend_uint param_count, zval *return_value );

void zif_output_add_rewrite_var(zend_uint param_count, zval *return_value );
void zif_output_reset_rewrite_vars(zend_uint param_count, zval *return_value );
# 405 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2


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
 zval ptr;
 int mask;
 size_t progress, progress_max;
};

struct _php_stream_context {
 php_stream_notifier *notifier;
 zval options;
 zend_resource *res;
};


__attribute__ ((visibility("default"))) void php_stream_context_free(php_stream_context *context);
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_alloc(void);
__attribute__ ((visibility("default"))) zval *php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname);
__attribute__ ((visibility("default"))) int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

__attribute__ ((visibility("default"))) php_stream_notifier *php_stream_notification_alloc(void);
__attribute__ ((visibility("default"))) void php_stream_notification_free(php_stream_notifier *notifier);
# 88 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_context.h"
__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context );
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
 zval abstract;
 php_stream_filter *next;
 php_stream_filter *prev;
 int is_persistent;


 php_stream_filter_chain *chain;


 php_stream_bucket_brigade buffer;


 zend_resource *res;
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








typedef struct stat php_stat_t;


typedef struct _php_stream_statbuf {
 zend_stat_t sb;

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


 int (*seek)(php_stream *stream, zend_off_t offset, int whence, zend_off_t *newoffset );
 int (*cast)(php_stream *stream, int castas, void **ret );
 int (*stat)(php_stream *stream, php_stream_statbuf *ssb );
 int (*set_option)(php_stream *stream, int option, int value, void *ptrparam );
} php_stream_ops;

typedef struct _php_stream_wrapper_ops {

 php_stream *(*stream_opener)(php_stream_wrapper *wrapper, const char *filename, const char *mode,
   int options, char **opened_path, php_stream_context *context );

 int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream );

 int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream, php_stream_statbuf *ssb );

 int (*url_stat)(php_stream_wrapper *wrapper, const char *url, int flags, php_stream_statbuf *ssb, php_stream_context *context );

 php_stream *(*dir_opener)(php_stream_wrapper *wrapper, const char *filename, const char *mode,
   int options, char **opened_path, php_stream_context *context );

 const char *label;


 int (*unlink)(php_stream_wrapper *wrapper, const char *url, int options, php_stream_context *context );


 int (*rename)(php_stream_wrapper *wrapper, const char *url_from, const char *url_to, int options, php_stream_context *context );


 int (*stream_mkdir)(php_stream_wrapper *wrapper, const char *url, int mode, int options, php_stream_context *context );
 int (*stream_rmdir)(php_stream_wrapper *wrapper, const char *url, int options, php_stream_context *context );

 int (*stream_metadata)(php_stream_wrapper *wrapper, const char *url, int options, void *value, php_stream_context *context );
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;
};
# 196 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
struct _php_stream {
 php_stream_ops *ops;
 void *abstract;

 php_stream_filter_chain readfilters, writefilters;

 php_stream_wrapper *wrapper;
 void *wrapperthis;
 zval wrapperdata;

 int fgetss_state;
 int is_persistent;
 char mode[16];
 zend_resource *res;
 int in_free;


 int fclose_stdiocast;
 FILE *stdiocast;
 int __exposed;
 char *orig_path;

 zend_resource *ctx;
 int flags;


 zend_off_t position;
 unsigned char *readbuf;
 size_t readbuflen;
 zend_off_t readpos;
 zend_off_t writepos;


 size_t chunk_size;

 int eof;






 struct _php_stream *enclosing_stream;
};
# 251 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );
# 268 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options );

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 287 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_free(php_stream *stream, int close_options );




__attribute__ ((visibility("default"))) int _php_stream_seek(php_stream *stream, zend_off_t offset, int whence );



__attribute__ ((visibility("default"))) zend_off_t _php_stream_tell(php_stream *stream );


__attribute__ ((visibility("default"))) size_t _php_stream_read(php_stream *stream, char *buf, size_t count );


__attribute__ ((visibility("default"))) size_t _php_stream_write(php_stream *stream, const char *buf, size_t count );






__attribute__ ((visibility("default"))) size_t _php_stream_printf(php_stream *stream , const char *fmt, ...) __attribute__ ((format(printf, 2, 3)));





__attribute__ ((visibility("default"))) int _php_stream_eof(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_getc(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_putc(php_stream *stream, int c );


__attribute__ ((visibility("default"))) int _php_stream_flush(php_stream *stream, int closing );


__attribute__ ((visibility("default"))) char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len );



__attribute__ ((visibility("default"))) zend_string *php_stream_get_record(php_stream *stream, size_t maxlen, const char *delim, size_t delim_len );


__attribute__ ((visibility("default"))) int _php_stream_puts(php_stream *stream, const char *buf );


__attribute__ ((visibility("default"))) int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb );


__attribute__ ((visibility("default"))) int _php_stream_stat_path(const char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context );



__attribute__ ((visibility("default"))) int _php_stream_mkdir(const char *path, int mode, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) int _php_stream_rmdir(const char *path, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) php_stream *_php_stream_opendir(const char *path, int options, php_stream_context *context );

__attribute__ ((visibility("default"))) php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent );




__attribute__ ((visibility("default"))) int php_stream_dirent_alphasort(const zend_string **a, const zend_string **b);
__attribute__ ((visibility("default"))) int php_stream_dirent_alphasortr(const zend_string **a, const zend_string **b);

__attribute__ ((visibility("default"))) int _php_stream_scandir(const char *dirname, zend_string **namelist[], int flags, php_stream_context *context,
   int (*compare) (const zend_string **a, const zend_string **b) );


__attribute__ ((visibility("default"))) int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam );
# 421 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );
# 441 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) int _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) zend_string *_php_stream_copy_to_mem(php_stream *src, size_t maxlen, int persistent );



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


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, size_t protolen,
  const char *resourcename, size_t resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(const char *protocol, php_stream_transport_factory factory );
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(const char *protocol );
# 49 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_transport.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_xport_create(const char *name, size_t namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  zend_string **error_string,
  int *error_code
                      );





__attribute__ ((visibility("default"))) int php_stream_xport_bind(php_stream *stream,
  const char *name, size_t namelen,
  zend_string **error_text
           );


__attribute__ ((visibility("default"))) int php_stream_xport_connect(php_stream *stream,
  const char *name, size_t namelen,
  int asynchronous,
  struct timeval *timeout,
  zend_string **error_text,
  int *error_code
           );


__attribute__ ((visibility("default"))) int php_stream_xport_listen(php_stream *stream,
  int backlog,
  zend_string **error_text
           );



__attribute__ ((visibility("default"))) int php_stream_xport_accept(php_stream *stream, php_stream **client,
  zend_string **textaddr,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  zend_string **error_text
           );


__attribute__ ((visibility("default"))) int php_stream_xport_get_name(php_stream *stream, int want_peer,
  zend_string **textaddr,
  void **addr, socklen_t *addrlen
           );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



__attribute__ ((visibility("default"))) int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  long flags, void **addr, socklen_t *addrlen,
  zend_string **textaddr );



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
  size_t namelen;
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
  zend_string *textaddr;
  zend_string *error_text;
  int error_code;
 } outputs;
} php_stream_xport_param;




typedef enum {
 STREAM_CRYPTO_METHOD_SSLv2_CLIENT = (1 << 1 | 1),
 STREAM_CRYPTO_METHOD_SSLv3_CLIENT = (1 << 2 | 1),
 STREAM_CRYPTO_METHOD_SSLv23_CLIENT = ((1 << 1) | (1 << 2) | 1),
 STREAM_CRYPTO_METHOD_TLSv1_0_CLIENT = (1 << 3 | 1),
 STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT = (1 << 4 | 1),
 STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT = (1 << 5 | 1),
 STREAM_CRYPTO_METHOD_TLS_CLIENT = ((1 << 3) | (1 << 4) | (1 << 5) | 1),
 STREAM_CRYPTO_METHOD_ANY_CLIENT = ((1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | 1),
 STREAM_CRYPTO_METHOD_SSLv2_SERVER = (1 << 1),
 STREAM_CRYPTO_METHOD_SSLv3_SERVER = (1 << 2),
 STREAM_CRYPTO_METHOD_SSLv23_SERVER = ((1 << 1) | (1 << 2)),
 STREAM_CRYPTO_METHOD_TLSv1_0_SERVER = (1 << 3),
 STREAM_CRYPTO_METHOD_TLSv1_1_SERVER = (1 << 4),
 STREAM_CRYPTO_METHOD_TLSv1_2_SERVER = (1 << 5),
 STREAM_CRYPTO_METHOD_TLS_SERVER = ((1 << 3) | (1 << 4) | (1 << 5)),
 STREAM_CRYPTO_METHOD_ANY_SERVER = ((1 << 1) | (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5))
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
# 459 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );
# 460 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );
# 461 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_userspace.h" 1
# 23 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 462 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
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


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, zend_off_t readden );
# 463 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 2
# 480 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );
# 543 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
int php_init_stream_wrappers(int module_number );
int php_shutdown_stream_wrappers(int module_number );
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number );


__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper(const char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper(const char *protocol );
__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper_volatile(const char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper_volatile(const char *protocol );
__attribute__ ((visibility("default"))) php_stream *_php_stream_open_wrapper_ex(const char *path, const char *mode, int options, char **opened_path, php_stream_context *context );
__attribute__ ((visibility("default"))) php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, const char **path_for_open, int options );
__attribute__ ((visibility("default"))) const char *php_stream_locate_eol(php_stream *stream, zend_string *buf );
# 570 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...) __attribute__ ((format(printf, 3, 4)));
# 581 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;
# 408 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_streams.h" 1
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h" 2
# 44 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_memory_streams.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create_ex(int mode, size_t max_memory_usage, const char *tmpdir );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 409 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
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

 zend_int_t output_buffering;

 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 zend_int_t serialize_precision;

 zend_int_t memory_limit;
 zend_int_t max_input_time;

 zend_bool track_errors;
 zend_bool display_errors;
 zend_bool display_startup_errors;
 zend_bool log_errors;
 zend_int_t log_errors_max_len;
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
 char *sys_temp_dir;

 char *upload_tmp_dir;
 zend_int_t upload_max_filesize;

 char *error_append_string;
 char *error_prepend_string;

 char *auto_prepend_file;
 char *auto_append_file;

 char *input_encoding;
 char *internal_encoding;
 char *output_encoding;

 arg_separators arg_separator;

 char *variables_order;

 HashTable rfc1867_protected_variables;

 short connection_status;
 short ignore_user_abort;

 unsigned char header_is_being_sent;

 zend_llist tick_functions;

 zval http_globals[6];

 zend_bool expose_php;

 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 char *docref_root;
 char *docref_ext;

 zend_bool html_errors;
 zend_bool xmlrpc_errors;

 zend_int_t xmlrpc_error_number;

 zend_bool activated_auto_globals[8];

 zend_bool modules_activated;
 zend_bool file_uploads;
 zend_bool during_request_startup;
 zend_bool allow_url_fopen;
 zend_bool enable_post_data_reading;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;
 zend_bool exit_on_timeout;



 zend_int_t max_input_nesting_level;
 zend_int_t max_input_vars;
 zend_bool in_user_include;

 char *user_ini_filename;
 zend_int_t user_ini_cache_ttl;

 char *request_order;

 zend_bool mail_x_header;
 char *mail_log;

 zend_bool in_error_log;




};
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h" 1
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_ini.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
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
__attribute__ ((visibility("default"))) int zend_alter_ini_entry(zend_string *name, char *new_value, uint new_value_length, int modify_type, int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_ex(zend_string *name, char *new_value, uint new_value_length, int modify_type, int stage, int force_change );
__attribute__ ((visibility("default"))) int zend_restore_ini_entry(zend_string *name, int stage);
__attribute__ ((visibility("default"))) void display_ini_entries(zend_module_entry *module);

__attribute__ ((visibility("default"))) zend_int_t zend_ini_int(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) double zend_ini_double(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string_ex(char *name, uint name_length, int orig, zend_bool *exists);

__attribute__ ((visibility("default"))) int zend_ini_register_displayer(char *name, uint name_length, void (*displayer)(zend_ini_entry *ini_entry, int type));

__attribute__ ((visibility("default"))) void zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void display_link_numbers(zend_ini_entry *ini_entry, int type);
# 146 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
# 165 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_ini.h"
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
__attribute__ ((visibility("default"))) int cfg_get_int(const char *varname, zend_int_t *result);
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
__attribute__ ((visibility("default"))) char *expand_filepath_with_mode(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len, int use_realpath );

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path );
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn );
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path );
# 47 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path );

__attribute__ ((visibility("default"))) char *php_resolve_path(const char *filename, int filename_len, const char *path );

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
# 410 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2



# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h" 1
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 1
# 13 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/include/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 14 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config_common.h" 2
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h" 2






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
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h" 2
# 90 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h"
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
# 91 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h" 2
# 145 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h"
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
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, zend_stat_t *buf );
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, zend_stat_t *buf );
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path );
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname );
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname );
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type );
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode );
# 192 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 206 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath );

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 zend_uint_t key;
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
 zend_int_t realpath_cache_size;
 zend_int_t realpath_cache_size_limit;
 zend_int_t realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len );
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t );
__attribute__ ((visibility("default"))) zend_int_t realpath_cache_size(void);
__attribute__ ((visibility("default"))) zend_int_t realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 414 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2

# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h" 1
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 zend_string *name;
 int module_number;
} zend_constant;
# 62 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_constants.h"
void clean_module_constants(int module_number );
void free_zend_constant(zval *zv);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) zval *zend_get_constant(zend_string *name );
__attribute__ ((visibility("default"))) zval *zend_get_constant_str(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zval *zend_get_constant_ex(zend_string *name, zend_class_entry *scope, zend_uint_t flags );
__attribute__ ((visibility("default"))) void zend_register_bool_constant(const char *name, uint name_len, zend_bool bval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_null_constant(const char *name, uint name_len, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_int_constant(const char *name, uint name_len, zend_int_t lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
zend_constant *zend_quick_get_constant(const zval *key, zend_uint_t flags );
# 416 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2






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
# 423 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php.h" 2
# 27 "ext/standard/string.c" 2
# 1 "ext/standard/php_rand.h" 1
# 29 "ext/standard/php_rand.h"
# 1 "ext/standard/basic_functions.h" 1
# 28 "ext/standard/basic_functions.h"
# 1 "/usr/include/wchar.h" 1 3 4
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

void zif_realpath_cache_size(zend_uint param_count, zval *return_value );
void zif_realpath_cache_get(zend_uint param_count, zval *return_value );
void zif_clearstatcache(zend_uint param_count, zval *return_value );
void zif_fileatime(zend_uint param_count, zval *return_value );
void zif_filectime(zend_uint param_count, zval *return_value );
void zif_filegroup(zend_uint param_count, zval *return_value );
void zif_fileinode(zend_uint param_count, zval *return_value );
void zif_filemtime(zend_uint param_count, zval *return_value );
void zif_fileowner(zend_uint param_count, zval *return_value );
void zif_fileperms(zend_uint param_count, zval *return_value );
void zif_filesize(zend_uint param_count, zval *return_value );
void zif_filetype(zend_uint param_count, zval *return_value );
void zif_is_writable(zend_uint param_count, zval *return_value );
void zif_is_readable(zend_uint param_count, zval *return_value );
void zif_is_executable(zend_uint param_count, zval *return_value );
void zif_is_file(zend_uint param_count, zval *return_value );
void zif_is_dir(zend_uint param_count, zval *return_value );
void zif_is_link(zend_uint param_count, zval *return_value );
void zif_file_exists(zend_uint param_count, zval *return_value );
void php_if_stat(zend_uint param_count, zval *return_value );
void php_if_lstat(zend_uint param_count, zval *return_value );
void zif_disk_total_space(zend_uint param_count, zval *return_value );
void zif_disk_free_space(zend_uint param_count, zval *return_value );
void zif_chown(zend_uint param_count, zval *return_value );
void zif_chgrp(zend_uint param_count, zval *return_value );

void zif_lchown(zend_uint param_count, zval *return_value );


void zif_lchgrp(zend_uint param_count, zval *return_value );

void zif_chmod(zend_uint param_count, zval *return_value );

void zif_touch(zend_uint param_count, zval *return_value );

void zif_clearstatcache(zend_uint param_count, zval *return_value );
# 84 "ext/standard/php_filestat.h"
typedef int php_stat_len;


__attribute__ ((visibility("default"))) void php_clear_stat_cache(zend_bool clear_realpath_cache, const char *filename, int filename_len );
__attribute__ ((visibility("default"))) void php_stat(const char *filename, php_stat_len filename_length, int type, zval *return_value );
# 32 "ext/standard/basic_functions.h" 2

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
# 34 "ext/standard/basic_functions.h" 2

# 1 "ext/standard/url_scanner_ex.h" 1
# 24 "ext/standard/url_scanner_ex.h"
int zm_startup_url_scanner_ex(int type, int module_number );
int zm_shutdown_url_scanner_ex(int type, int module_number );

int zm_activate_url_scanner_ex(int type, int module_number );
int zm_deactivate_url_scanner_ex(int type, int module_number );

__attribute__ ((visibility("default"))) char *php_url_scanner_adapt_single_url(const char *url, size_t urllen, const char *name, const char *value, size_t *newlen );
__attribute__ ((visibility("default"))) int php_url_scanner_add_var(char *name, int name_len, char *value, int value_len, int urlencode );
__attribute__ ((visibility("default"))) int php_url_scanner_reset_vars(void);


# 1 "ext/standard/php_smart_str_public.h" 1
# 26 "ext/standard/php_smart_str_public.h"
typedef struct {
 zend_string *s;
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

void zif_constant(zend_uint param_count, zval *return_value );
void zif_sleep(zend_uint param_count, zval *return_value );
void zif_usleep(zend_uint param_count, zval *return_value );

void zif_time_nanosleep(zend_uint param_count, zval *return_value );
void zif_time_sleep_until(zend_uint param_count, zval *return_value );

void zif_flush(zend_uint param_count, zval *return_value );

void php_inet_ntop(zend_uint param_count, zval *return_value );


void php_inet_pton(zend_uint param_count, zval *return_value );

void zif_ip2long(zend_uint param_count, zval *return_value );
void zif_long2ip(zend_uint param_count, zval *return_value );


void zif_getenv(zend_uint param_count, zval *return_value );
void zif_putenv(zend_uint param_count, zval *return_value );

void zif_getopt(zend_uint param_count, zval *return_value );

void zif_get_current_user(zend_uint param_count, zval *return_value );
void zif_set_time_limit(zend_uint param_count, zval *return_value );

void zif_header_register_callback(zend_uint param_count, zval *return_value );

void zif_get_cfg_var(zend_uint param_count, zval *return_value );
void zif_set_magic_quotes_runtime(zend_uint param_count, zval *return_value );
void zif_get_magic_quotes_runtime(zend_uint param_count, zval *return_value );
void zif_get_magic_quotes_gpc(zend_uint param_count, zval *return_value );

void zif_error_log(zend_uint param_count, zval *return_value );
void zif_error_get_last(zend_uint param_count, zval *return_value );

void zif_call_user_func(zend_uint param_count, zval *return_value );
void zif_call_user_func_array(zend_uint param_count, zval *return_value );
void zif_forward_static_call(zend_uint param_count, zval *return_value );
void zif_forward_static_call_array(zend_uint param_count, zval *return_value );

void zif_register_shutdown_function(zend_uint param_count, zval *return_value );
void zif_highlight_file(zend_uint param_count, zval *return_value );
void zif_highlight_string(zend_uint param_count, zval *return_value );
void zif_php_strip_whitespace(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini);

void zif_ini_get(zend_uint param_count, zval *return_value );
void zif_ini_get_all(zend_uint param_count, zval *return_value );
void zif_ini_set(zend_uint param_count, zval *return_value );
void zif_ini_restore(zend_uint param_count, zval *return_value );
void zif_get_include_path(zend_uint param_count, zval *return_value );
void zif_set_include_path(zend_uint param_count, zval *return_value );
void zif_restore_include_path(zend_uint param_count, zval *return_value );

void zif_print_r(zend_uint param_count, zval *return_value );
void zif_fprintf(zend_uint param_count, zval *return_value );
void zif_vfprintf(zend_uint param_count, zval *return_value );

void zif_connection_aborted(zend_uint param_count, zval *return_value );
void zif_connection_status(zend_uint param_count, zval *return_value );
void zif_ignore_user_abort(zend_uint param_count, zval *return_value );

void zif_getservbyname(zend_uint param_count, zval *return_value );
void zif_getservbyport(zend_uint param_count, zval *return_value );
void zif_getprotobyname(zend_uint param_count, zval *return_value );
void zif_getprotobynumber(zend_uint param_count, zval *return_value );

void php_if_crc32(zend_uint param_count, zval *return_value );

void zif_register_tick_function(zend_uint param_count, zval *return_value );
void zif_unregister_tick_function(zend_uint param_count, zval *return_value );

void zif_sys_getloadavg(zend_uint param_count, zval *return_value );


void zif_is_uploaded_file(zend_uint param_count, zval *return_value );
void zif_move_uploaded_file(zend_uint param_count, zval *return_value );


void zif_parse_ini_file(zend_uint param_count, zval *return_value );
void zif_parse_ini_string(zend_uint param_count, zval *return_value );




void zif_str_rot13(zend_uint param_count, zval *return_value );
void zif_stream_get_filters(zend_uint param_count, zval *return_value );
void zif_stream_filter_register(zend_uint param_count, zval *return_value );
void zif_stream_bucket_make_writeable(zend_uint param_count, zval *return_value );
void zif_stream_bucket_prepend(zend_uint param_count, zval *return_value );
void zif_stream_bucket_append(zend_uint param_count, zval *return_value );
void zif_stream_bucket_new(zend_uint param_count, zval *return_value );
int zm_startup_user_filters(int type, int module_number );
int zm_deactivate_user_filters(int type, int module_number );
int zm_deactivate_browscap(int type, int module_number );


__attribute__ ((visibility("default"))) int _php_error_log(int opt_err, char *message, char *opt, char *headers );
__attribute__ ((visibility("default"))) int _php_error_log_ex(int opt_err, char *message, int message_len, char *opt, char *headers );
__attribute__ ((visibility("default"))) int php_prefix_varname(zval *result, zval *prefix, char *var_name, int var_name_len, zend_bool add_underscore );



typedef unsigned int php_uint32;
typedef signed int php_int32;
# 162 "ext/standard/basic_functions.h"
typedef struct _php_basic_globals {
 HashTable *user_shutdown_function_names;
 HashTable putenv_ht;
 zval strtok_zval;
 char *strtok_string;
 char *locale_string;
 char *strtok_last;
 char strtok_table[256];
 zend_uint_t strtok_len;
 char str_ebuf[40];
 zend_fcall_info array_walk_fci;
 zend_fcall_info_cache array_walk_fci_cache;
 zend_fcall_info user_compare_fci;
 zend_fcall_info_cache user_compare_fci_cache;
 zend_llist *user_tick_functions;

 zval active_ini_file_section;


 zend_int_t page_uid;
 zend_int_t page_gid;
 zend_int_t page_inode;
 time_t page_mtime;


 char *CurrentStatFile, *CurrentLStatFile;
 php_stream_statbuf ssb, lssb;


 php_uint32 state[(624)+1];
 php_uint32 *next;
 int left;

 unsigned int rand_seed;

 zend_bool rand_is_seeded;
 zend_bool mt_rand_is_seeded;


 char *syslog_device;


 zend_class_entry *incomplete_class;
 unsigned serialize_lock;
 struct {
  void *var_hash;
  unsigned level;
 } serialize;
 struct {
  void *var_hash;
  unsigned level;
 } unserialize;


 url_adapt_state_ex_t url_adapt_state_ex;


 void *mmap_file;
 size_t mmap_len;


 HashTable *user_filter_map;






 int umask;
} php_basic_globals;






__attribute__ ((visibility("default"))) extern php_basic_globals basic_globals;



typedef struct {
 char *putenv_string;
 char *previous_value;
 char *key;
 int key_len;
} putenv_entry;


__attribute__ ((visibility("default"))) double php_get_nan(void);
__attribute__ ((visibility("default"))) double php_get_inf(void);

typedef struct _php_shutdown_function_entry {
 zval *arguments;
 int arg_count;
} php_shutdown_function_entry;

__attribute__ ((visibility("default"))) extern zend_bool register_user_shutdown_function(char *function_name, size_t function_len, php_shutdown_function_entry *shutdown_function_entry );
__attribute__ ((visibility("default"))) extern zend_bool remove_user_shutdown_function(char *function_name, size_t function_len );
__attribute__ ((visibility("default"))) extern zend_bool append_user_shutdown_function(php_shutdown_function_entry shutdown_function_entry );
# 30 "ext/standard/php_rand.h" 2
# 1 "ext/standard/php_lcg.h" 1
# 26 "ext/standard/php_lcg.h"
typedef struct {
 php_int32 s1;
 php_int32 s2;
 int seeded;
} php_lcg_globals;

__attribute__ ((visibility("default"))) double php_combined_lcg(void);
void zif_lcg_value(zend_uint param_count, zval *return_value );

int zm_startup_lcg(int type, int module_number );
# 31 "ext/standard/php_rand.h" 2
# 56 "ext/standard/php_rand.h"
__attribute__ ((visibility("default"))) void php_srand(zend_int_t seed );
__attribute__ ((visibility("default"))) zend_int_t php_rand(void);
__attribute__ ((visibility("default"))) void php_mt_srand(php_uint32 seed );
__attribute__ ((visibility("default"))) php_uint32 php_mt_rand(void);
# 28 "ext/standard/string.c" 2
# 1 "ext/standard/php_string.h" 1
# 27 "ext/standard/php_string.h"
void zif_strspn(zend_uint param_count, zval *return_value );
void zif_strcspn(zend_uint param_count, zval *return_value );
void zif_str_replace(zend_uint param_count, zval *return_value );
void zif_str_ireplace(zend_uint param_count, zval *return_value );
void zif_rtrim(zend_uint param_count, zval *return_value );
void zif_trim(zend_uint param_count, zval *return_value );
void zif_ltrim(zend_uint param_count, zval *return_value );
void zif_soundex(zend_uint param_count, zval *return_value );
void zif_levenshtein(zend_uint param_count, zval *return_value );

void zif_count_chars(zend_uint param_count, zval *return_value );
void zif_wordwrap(zend_uint param_count, zval *return_value );
void zif_explode(zend_uint param_count, zval *return_value );
void zif_implode(zend_uint param_count, zval *return_value );
void zif_strtok(zend_uint param_count, zval *return_value );
void zif_strtoupper(zend_uint param_count, zval *return_value );
void zif_strtolower(zend_uint param_count, zval *return_value );
void zif_basename(zend_uint param_count, zval *return_value );
void zif_dirname(zend_uint param_count, zval *return_value );
void zif_pathinfo(zend_uint param_count, zval *return_value );
void zif_strstr(zend_uint param_count, zval *return_value );
void zif_strpos(zend_uint param_count, zval *return_value );
void zif_stripos(zend_uint param_count, zval *return_value );
void zif_strrpos(zend_uint param_count, zval *return_value );
void zif_strripos(zend_uint param_count, zval *return_value );
void zif_strrchr(zend_uint param_count, zval *return_value );
void zif_substr(zend_uint param_count, zval *return_value );
void zif_quotemeta(zend_uint param_count, zval *return_value );
void zif_ucfirst(zend_uint param_count, zval *return_value );
void zif_lcfirst(zend_uint param_count, zval *return_value );
void zif_ucwords(zend_uint param_count, zval *return_value );
void zif_strtr(zend_uint param_count, zval *return_value );
void zif_strrev(zend_uint param_count, zval *return_value );
void zif_hebrev(zend_uint param_count, zval *return_value );
void zif_hebrevc(zend_uint param_count, zval *return_value );
void zif_user_sprintf(zend_uint param_count, zval *return_value );
void zif_user_printf(zend_uint param_count, zval *return_value );
void zif_vprintf(zend_uint param_count, zval *return_value );
void zif_vsprintf(zend_uint param_count, zval *return_value );
void zif_addcslashes(zend_uint param_count, zval *return_value );
void zif_addslashes(zend_uint param_count, zval *return_value );
void zif_stripcslashes(zend_uint param_count, zval *return_value );
void zif_stripslashes(zend_uint param_count, zval *return_value );
void zif_chr(zend_uint param_count, zval *return_value );
void zif_ord(zend_uint param_count, zval *return_value );
void zif_nl2br(zend_uint param_count, zval *return_value );
void zif_setlocale(zend_uint param_count, zval *return_value );
void zif_localeconv(zend_uint param_count, zval *return_value );
void zif_nl_langinfo(zend_uint param_count, zval *return_value );
void zif_stristr(zend_uint param_count, zval *return_value );
void zif_chunk_split(zend_uint param_count, zval *return_value );
void zif_parse_str(zend_uint param_count, zval *return_value );
void zif_str_getcsv(zend_uint param_count, zval *return_value );
void zif_bin2hex(zend_uint param_count, zval *return_value );
void zif_hex2bin(zend_uint param_count, zval *return_value );
void zif_similar_text(zend_uint param_count, zval *return_value );
void zif_strip_tags(zend_uint param_count, zval *return_value );
void zif_str_repeat(zend_uint param_count, zval *return_value );
void zif_substr_replace(zend_uint param_count, zval *return_value );
void zif_strnatcmp(zend_uint param_count, zval *return_value );
void zif_strnatcasecmp(zend_uint param_count, zval *return_value );
void zif_substr_count(zend_uint param_count, zval *return_value );
void zif_str_pad(zend_uint param_count, zval *return_value );
void zif_sscanf(zend_uint param_count, zval *return_value );
void zif_str_shuffle(zend_uint param_count, zval *return_value );
void zif_str_word_count(zend_uint param_count, zval *return_value );
void zif_str_split(zend_uint param_count, zval *return_value );
void zif_strpbrk(zend_uint param_count, zval *return_value );
void zif_substr_compare(zend_uint param_count, zval *return_value );

void zif_strcoll(zend_uint param_count, zval *return_value );


void zif_money_format(zend_uint param_count, zval *return_value );







int zm_startup_nl_langinfo(int type, int module_number );






__attribute__ ((visibility("default"))) int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out);


__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtr(char *str, zend_size_t len, char *str_from, char *str_to, zend_size_t trlen);
__attribute__ ((visibility("default"))) zend_string *php_addslashes(char *str, zend_size_t length, int should_free );
__attribute__ ((visibility("default"))) zend_string *php_addcslashes(const char *str, zend_size_t length, int freeit, char *what, zend_size_t wlength );
__attribute__ ((visibility("default"))) void php_stripslashes(char *str, zend_size_t *len );
__attribute__ ((visibility("default"))) void php_stripcslashes(char *str, zend_size_t *len);
__attribute__ ((visibility("default"))) zend_string *php_basename(const char *s, size_t len, char *suffix, size_t sufflen );
__attribute__ ((visibility("default"))) size_t php_dirname(char *str, size_t len);
__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len);
__attribute__ ((visibility("default"))) zend_string *php_str_to_str_ex(char *haystack, zend_size_t length, char *needle,
  zend_size_t needle_len, char *str, zend_size_t str_len, int case_sensitivity, zend_size_t *replace_count);
__attribute__ ((visibility("default"))) zend_string *php_str_to_str(char *haystack, zend_size_t length, char *needle,
  zend_size_t needle_len, char *str, zend_size_t str_len);
__attribute__ ((visibility("default"))) char *php_trim(char *c, zend_size_t len, char *what, zend_size_t what_len, zval *return_value, int mode );
__attribute__ ((visibility("default"))) size_t php_strip_tags(char *rbuf, zend_size_t len, int *state, char *allow, zend_size_t allow_len);
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, zend_size_t len, int *stateptr, char *allow, zend_size_t allow_len, zend_bool allow_tag_spaces);
__attribute__ ((visibility("default"))) zend_size_t php_char_to_str_ex(char *str, zend_size_t len, char from, char *to, zend_size_t to_len, zval *result, int case_sensitivity, zend_size_t *replace_count);
__attribute__ ((visibility("default"))) zend_size_t php_char_to_str(char *str, zend_size_t len, char from, char *to, zend_size_t to_len, zval *result);
__attribute__ ((visibility("default"))) void php_implode(zval *delim, zval *arr, zval *return_value );
__attribute__ ((visibility("default"))) void php_explode(zval *delim, zval *str, zval *return_value, zend_int_t limit);

__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);

__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2 );
# 165 "ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 29 "ext/standard/string.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_variables.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_variables.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h" 1
# 53 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
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
# 81 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 const char *request_method;
 char *query_string;
 char *cookie_data;
 zend_int_t content_length;

 char *path_translated;
 char *request_uri;


 struct _php_stream *request_body;

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
 int64_t read_post_bytes;
 unsigned char post_read;
 unsigned char headers_sent;
 zend_stat_t global_stat;
 char *default_mimetype;
 char *default_charset;
 HashTable *rfc1867_uploaded_files;
 zend_int_t post_max_size;
 int options;
 zend_bool sapi_started;
 double global_request_time;
 HashTable known_post_content_types;
 zval callback_func;
 zend_fcall_info_cache fci_cache;
 zend_bool callback_run;
} sapi_globals_struct;
# 149 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
extern __attribute__ ((visibility("default"))) sapi_globals_struct sapi_globals;


__attribute__ ((visibility("default"))) void sapi_startup(sapi_module_struct *sf);
__attribute__ ((visibility("default"))) void sapi_shutdown(void);
__attribute__ ((visibility("default"))) void sapi_activate(void);
__attribute__ ((visibility("default"))) void sapi_deactivate(void);
__attribute__ ((visibility("default"))) void sapi_initialize_empty_request(void);
# 170 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
typedef struct {
 char *line;
 uint line_len;
 zend_int_t response_code;
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
__attribute__ ((visibility("default"))) int sapi_read_post_block(char *buffer, size_t buflen );
__attribute__ ((visibility("default"))) int sapi_register_post_entries(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) void sapi_unregister_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_default_post_reader(void (*default_post_reader)(void) );
__attribute__ ((visibility("default"))) int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray ) );
__attribute__ ((visibility("default"))) int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len ), unsigned int (*input_filter_init)(void) );

__attribute__ ((visibility("default"))) int sapi_flush(void);
__attribute__ ((visibility("default"))) zend_stat_t *sapi_get_stat(void);
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

 zend_size_t (*ub_write)(const char *str, zend_size_t str_length );
 void (*flush)(void *server_context );
 zend_stat_t *(*get_stat)(void);
 char *(*getenv)(char *name, size_t name_len );

 void (*sapi_error)(int type, const char *error_msg, ...);

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_header_op_enum op, sapi_headers_struct *sapi_headers );
 int (*send_headers)(sapi_headers_struct *sapi_headers );
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context );

 zend_size_t (*read_post)(char *buffer, zend_size_t count_bytes );
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

 unsigned int (*input_filter)(int arg, char *var, char **val, zend_size_t val_len, zend_size_t *new_val_len );

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
# 306 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/SAPI.h"
__attribute__ ((visibility("default"))) void sapi_read_standard_form_data(void);
__attribute__ ((visibility("default"))) void php_default_post_reader(void);
__attribute__ ((visibility("default"))) void php_default_treat_data(int arg, char *str, zval* destArray );
__attribute__ ((visibility("default"))) unsigned int php_default_input_filter(int arg, char *var, char **val, zend_size_t val_len, zend_size_t *new_val_len );
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_variables.h" 2
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/main/php_variables.h"
void php_startup_auto_globals(void);
extern __attribute__ ((visibility("default"))) void (*php_import_environment_variables)(zval *array_ptr );
__attribute__ ((visibility("default"))) void php_register_variable(char *var, char *val, zval *track_vars_array );

__attribute__ ((visibility("default"))) void php_register_variable_safe(char *var, char *val, zend_size_t val_len, zval *track_vars_array );
__attribute__ ((visibility("default"))) void php_register_variable_ex(char *var, zval *val, zval *track_vars_array );

__attribute__ ((visibility("default"))) int php_hash_environment(void);
# 30 "ext/standard/string.c" 2

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
# 32 "ext/standard/string.c" 2


# 1 "/usr/include/langinfo.h" 1 3 4
# 23 "/usr/include/langinfo.h" 3 4
# 1 "/usr/include/nl_types.h" 1 3 4
# 33 "/usr/include/nl_types.h" 3 4
typedef void *nl_catd;


typedef int nl_item;





extern nl_catd catopen (const char *__cat_name, int __flag) __attribute__ ((__nonnull__ (1)));



extern char *catgets (nl_catd __catalog, int __set, int __number,
        const char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int catclose (nl_catd __catalog) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 24 "/usr/include/langinfo.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 26 "/usr/include/langinfo.h" 2 3 4
# 41 "/usr/include/langinfo.h" 3 4
enum
{



  ABDAY_1 = (((2) << 16) | (0)),

  ABDAY_2,

  ABDAY_3,

  ABDAY_4,

  ABDAY_5,

  ABDAY_6,

  ABDAY_7,



  DAY_1,

  DAY_2,

  DAY_3,

  DAY_4,

  DAY_5,

  DAY_6,

  DAY_7,



  ABMON_1,

  ABMON_2,

  ABMON_3,

  ABMON_4,

  ABMON_5,

  ABMON_6,

  ABMON_7,

  ABMON_8,

  ABMON_9,

  ABMON_10,

  ABMON_11,

  ABMON_12,



  MON_1,

  MON_2,

  MON_3,

  MON_4,

  MON_5,

  MON_6,

  MON_7,

  MON_8,

  MON_9,

  MON_10,

  MON_11,

  MON_12,


  AM_STR,

  PM_STR,


  D_T_FMT,

  D_FMT,

  T_FMT,

  T_FMT_AMPM,


  ERA,

  __ERA_YEAR,



  ERA_D_FMT,

  ALT_DIGITS,

  ERA_D_T_FMT,

  ERA_T_FMT,


  _NL_TIME_ERA_NUM_ENTRIES,
  _NL_TIME_ERA_ENTRIES,

  _NL_WABDAY_1,
  _NL_WABDAY_2,
  _NL_WABDAY_3,
  _NL_WABDAY_4,
  _NL_WABDAY_5,
  _NL_WABDAY_6,
  _NL_WABDAY_7,


  _NL_WDAY_1,
  _NL_WDAY_2,
  _NL_WDAY_3,
  _NL_WDAY_4,
  _NL_WDAY_5,
  _NL_WDAY_6,
  _NL_WDAY_7,


  _NL_WABMON_1,
  _NL_WABMON_2,
  _NL_WABMON_3,
  _NL_WABMON_4,
  _NL_WABMON_5,
  _NL_WABMON_6,
  _NL_WABMON_7,
  _NL_WABMON_8,
  _NL_WABMON_9,
  _NL_WABMON_10,
  _NL_WABMON_11,
  _NL_WABMON_12,


  _NL_WMON_1,
  _NL_WMON_2,
  _NL_WMON_3,
  _NL_WMON_4,
  _NL_WMON_5,
  _NL_WMON_6,
  _NL_WMON_7,
  _NL_WMON_8,
  _NL_WMON_9,
  _NL_WMON_10,
  _NL_WMON_11,
  _NL_WMON_12,

  _NL_WAM_STR,
  _NL_WPM_STR,

  _NL_WD_T_FMT,
  _NL_WD_FMT,
  _NL_WT_FMT,
  _NL_WT_FMT_AMPM,

  _NL_WERA_YEAR,
  _NL_WERA_D_FMT,
  _NL_WALT_DIGITS,
  _NL_WERA_D_T_FMT,
  _NL_WERA_T_FMT,

  _NL_TIME_WEEK_NDAYS,
  _NL_TIME_WEEK_1STDAY,
  _NL_TIME_WEEK_1STWEEK,
  _NL_TIME_FIRST_WEEKDAY,
  _NL_TIME_FIRST_WORKDAY,
  _NL_TIME_CAL_DIRECTION,
  _NL_TIME_TIMEZONE,

  _DATE_FMT,

  _NL_W_DATE_FMT,

  _NL_TIME_CODESET,

  _NL_NUM_LC_TIME,




  _NL_COLLATE_NRULES = (((3) << 16) | (0)),
  _NL_COLLATE_RULESETS,
  _NL_COLLATE_TABLEMB,
  _NL_COLLATE_WEIGHTMB,
  _NL_COLLATE_EXTRAMB,
  _NL_COLLATE_INDIRECTMB,
  _NL_COLLATE_GAP1,
  _NL_COLLATE_GAP2,
  _NL_COLLATE_GAP3,
  _NL_COLLATE_TABLEWC,
  _NL_COLLATE_WEIGHTWC,
  _NL_COLLATE_EXTRAWC,
  _NL_COLLATE_INDIRECTWC,
  _NL_COLLATE_SYMB_HASH_SIZEMB,
  _NL_COLLATE_SYMB_TABLEMB,
  _NL_COLLATE_SYMB_EXTRAMB,
  _NL_COLLATE_COLLSEQMB,
  _NL_COLLATE_COLLSEQWC,
  _NL_COLLATE_CODESET,
  _NL_NUM_LC_COLLATE,




  _NL_CTYPE_CLASS = (((0) << 16) | (0)),
  _NL_CTYPE_TOUPPER,
  _NL_CTYPE_GAP1,
  _NL_CTYPE_TOLOWER,
  _NL_CTYPE_GAP2,
  _NL_CTYPE_CLASS32,
  _NL_CTYPE_GAP3,
  _NL_CTYPE_GAP4,
  _NL_CTYPE_GAP5,
  _NL_CTYPE_GAP6,
  _NL_CTYPE_CLASS_NAMES,
  _NL_CTYPE_MAP_NAMES,
  _NL_CTYPE_WIDTH,
  _NL_CTYPE_MB_CUR_MAX,
  _NL_CTYPE_CODESET_NAME,
  CODESET = _NL_CTYPE_CODESET_NAME,

  _NL_CTYPE_TOUPPER32,
  _NL_CTYPE_TOLOWER32,
  _NL_CTYPE_CLASS_OFFSET,
  _NL_CTYPE_MAP_OFFSET,
  _NL_CTYPE_INDIGITS_MB_LEN,
  _NL_CTYPE_INDIGITS0_MB,
  _NL_CTYPE_INDIGITS1_MB,
  _NL_CTYPE_INDIGITS2_MB,
  _NL_CTYPE_INDIGITS3_MB,
  _NL_CTYPE_INDIGITS4_MB,
  _NL_CTYPE_INDIGITS5_MB,
  _NL_CTYPE_INDIGITS6_MB,
  _NL_CTYPE_INDIGITS7_MB,
  _NL_CTYPE_INDIGITS8_MB,
  _NL_CTYPE_INDIGITS9_MB,
  _NL_CTYPE_INDIGITS_WC_LEN,
  _NL_CTYPE_INDIGITS0_WC,
  _NL_CTYPE_INDIGITS1_WC,
  _NL_CTYPE_INDIGITS2_WC,
  _NL_CTYPE_INDIGITS3_WC,
  _NL_CTYPE_INDIGITS4_WC,
  _NL_CTYPE_INDIGITS5_WC,
  _NL_CTYPE_INDIGITS6_WC,
  _NL_CTYPE_INDIGITS7_WC,
  _NL_CTYPE_INDIGITS8_WC,
  _NL_CTYPE_INDIGITS9_WC,
  _NL_CTYPE_OUTDIGIT0_MB,
  _NL_CTYPE_OUTDIGIT1_MB,
  _NL_CTYPE_OUTDIGIT2_MB,
  _NL_CTYPE_OUTDIGIT3_MB,
  _NL_CTYPE_OUTDIGIT4_MB,
  _NL_CTYPE_OUTDIGIT5_MB,
  _NL_CTYPE_OUTDIGIT6_MB,
  _NL_CTYPE_OUTDIGIT7_MB,
  _NL_CTYPE_OUTDIGIT8_MB,
  _NL_CTYPE_OUTDIGIT9_MB,
  _NL_CTYPE_OUTDIGIT0_WC,
  _NL_CTYPE_OUTDIGIT1_WC,
  _NL_CTYPE_OUTDIGIT2_WC,
  _NL_CTYPE_OUTDIGIT3_WC,
  _NL_CTYPE_OUTDIGIT4_WC,
  _NL_CTYPE_OUTDIGIT5_WC,
  _NL_CTYPE_OUTDIGIT6_WC,
  _NL_CTYPE_OUTDIGIT7_WC,
  _NL_CTYPE_OUTDIGIT8_WC,
  _NL_CTYPE_OUTDIGIT9_WC,
  _NL_CTYPE_TRANSLIT_TAB_SIZE,
  _NL_CTYPE_TRANSLIT_FROM_IDX,
  _NL_CTYPE_TRANSLIT_FROM_TBL,
  _NL_CTYPE_TRANSLIT_TO_IDX,
  _NL_CTYPE_TRANSLIT_TO_TBL,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING,
  _NL_CTYPE_TRANSLIT_IGNORE_LEN,
  _NL_CTYPE_TRANSLIT_IGNORE,
  _NL_CTYPE_MAP_TO_NONASCII,
  _NL_CTYPE_NONASCII_CASE,
  _NL_CTYPE_EXTRA_MAP_1,
  _NL_CTYPE_EXTRA_MAP_2,
  _NL_CTYPE_EXTRA_MAP_3,
  _NL_CTYPE_EXTRA_MAP_4,
  _NL_CTYPE_EXTRA_MAP_5,
  _NL_CTYPE_EXTRA_MAP_6,
  _NL_CTYPE_EXTRA_MAP_7,
  _NL_CTYPE_EXTRA_MAP_8,
  _NL_CTYPE_EXTRA_MAP_9,
  _NL_CTYPE_EXTRA_MAP_10,
  _NL_CTYPE_EXTRA_MAP_11,
  _NL_CTYPE_EXTRA_MAP_12,
  _NL_CTYPE_EXTRA_MAP_13,
  _NL_CTYPE_EXTRA_MAP_14,
  _NL_NUM_LC_CTYPE,




  __INT_CURR_SYMBOL = (((4) << 16) | (0)),



  __CURRENCY_SYMBOL,



  __MON_DECIMAL_POINT,



  __MON_THOUSANDS_SEP,



  __MON_GROUPING,



  __POSITIVE_SIGN,



  __NEGATIVE_SIGN,



  __INT_FRAC_DIGITS,



  __FRAC_DIGITS,



  __P_CS_PRECEDES,



  __P_SEP_BY_SPACE,



  __N_CS_PRECEDES,



  __N_SEP_BY_SPACE,



  __P_SIGN_POSN,



  __N_SIGN_POSN,



  _NL_MONETARY_CRNCYSTR,

  __INT_P_CS_PRECEDES,



  __INT_P_SEP_BY_SPACE,



  __INT_N_CS_PRECEDES,



  __INT_N_SEP_BY_SPACE,



  __INT_P_SIGN_POSN,



  __INT_N_SIGN_POSN,



  _NL_MONETARY_DUO_INT_CURR_SYMBOL,
  _NL_MONETARY_DUO_CURRENCY_SYMBOL,
  _NL_MONETARY_DUO_INT_FRAC_DIGITS,
  _NL_MONETARY_DUO_FRAC_DIGITS,
  _NL_MONETARY_DUO_P_CS_PRECEDES,
  _NL_MONETARY_DUO_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_N_CS_PRECEDES,
  _NL_MONETARY_DUO_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_P_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_N_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_P_SIGN_POSN,
  _NL_MONETARY_DUO_N_SIGN_POSN,
  _NL_MONETARY_DUO_INT_P_SIGN_POSN,
  _NL_MONETARY_DUO_INT_N_SIGN_POSN,
  _NL_MONETARY_UNO_VALID_FROM,
  _NL_MONETARY_UNO_VALID_TO,
  _NL_MONETARY_DUO_VALID_FROM,
  _NL_MONETARY_DUO_VALID_TO,
  _NL_MONETARY_CONVERSION_RATE,
  _NL_MONETARY_DECIMAL_POINT_WC,
  _NL_MONETARY_THOUSANDS_SEP_WC,
  _NL_MONETARY_CODESET,
  _NL_NUM_LC_MONETARY,



  __DECIMAL_POINT = (((1) << 16) | (0)),



  RADIXCHAR = __DECIMAL_POINT,

  __THOUSANDS_SEP,



  THOUSEP = __THOUSANDS_SEP,

  __GROUPING,



  _NL_NUMERIC_DECIMAL_POINT_WC,
  _NL_NUMERIC_THOUSANDS_SEP_WC,
  _NL_NUMERIC_CODESET,
  _NL_NUM_LC_NUMERIC,

  __YESEXPR = (((5) << 16) | (0)),

  __NOEXPR,

  __YESSTR,



  __NOSTR,



  _NL_MESSAGES_CODESET,
  _NL_NUM_LC_MESSAGES,

  _NL_PAPER_HEIGHT = (((7) << 16) | (0)),
  _NL_PAPER_WIDTH,
  _NL_PAPER_CODESET,
  _NL_NUM_LC_PAPER,

  _NL_NAME_NAME_FMT = (((8) << 16) | (0)),
  _NL_NAME_NAME_GEN,
  _NL_NAME_NAME_MR,
  _NL_NAME_NAME_MRS,
  _NL_NAME_NAME_MISS,
  _NL_NAME_NAME_MS,
  _NL_NAME_CODESET,
  _NL_NUM_LC_NAME,

  _NL_ADDRESS_POSTAL_FMT = (((9) << 16) | (0)),
  _NL_ADDRESS_COUNTRY_NAME,
  _NL_ADDRESS_COUNTRY_POST,
  _NL_ADDRESS_COUNTRY_AB2,
  _NL_ADDRESS_COUNTRY_AB3,
  _NL_ADDRESS_COUNTRY_CAR,
  _NL_ADDRESS_COUNTRY_NUM,
  _NL_ADDRESS_COUNTRY_ISBN,
  _NL_ADDRESS_LANG_NAME,
  _NL_ADDRESS_LANG_AB,
  _NL_ADDRESS_LANG_TERM,
  _NL_ADDRESS_LANG_LIB,
  _NL_ADDRESS_CODESET,
  _NL_NUM_LC_ADDRESS,

  _NL_TELEPHONE_TEL_INT_FMT = (((10) << 16) | (0)),
  _NL_TELEPHONE_TEL_DOM_FMT,
  _NL_TELEPHONE_INT_SELECT,
  _NL_TELEPHONE_INT_PREFIX,
  _NL_TELEPHONE_CODESET,
  _NL_NUM_LC_TELEPHONE,

  _NL_MEASUREMENT_MEASUREMENT = (((11) << 16) | (0)),
  _NL_MEASUREMENT_CODESET,
  _NL_NUM_LC_MEASUREMENT,

  _NL_IDENTIFICATION_TITLE = (((12) << 16) | (0)),
  _NL_IDENTIFICATION_SOURCE,
  _NL_IDENTIFICATION_ADDRESS,
  _NL_IDENTIFICATION_CONTACT,
  _NL_IDENTIFICATION_EMAIL,
  _NL_IDENTIFICATION_TEL,
  _NL_IDENTIFICATION_FAX,
  _NL_IDENTIFICATION_LANGUAGE,
  _NL_IDENTIFICATION_TERRITORY,
  _NL_IDENTIFICATION_AUDIENCE,
  _NL_IDENTIFICATION_APPLICATION,
  _NL_IDENTIFICATION_ABBREVIATION,
  _NL_IDENTIFICATION_REVISION,
  _NL_IDENTIFICATION_DATE,
  _NL_IDENTIFICATION_CATEGORY,
  _NL_IDENTIFICATION_CODESET,
  _NL_NUM_LC_IDENTIFICATION,


  _NL_NUM
};
# 583 "/usr/include/langinfo.h" 3 4
extern char *nl_langinfo (nl_item __item) __attribute__ ((__nothrow__ ));
# 594 "/usr/include/langinfo.h" 3 4
extern char *nl_langinfo_l (nl_item __item, __locale_t __l);
# 35 "ext/standard/string.c" 2


# 1 "/usr/include/monetary.h" 1 3 4
# 26 "/usr/include/monetary.h" 3 4
# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3 4
# 27 "/usr/include/monetary.h" 2 3 4
# 38 "/usr/include/monetary.h" 3 4
extern ssize_t strfmon (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__strfmon__, 3, 4)));





extern ssize_t strfmon_l (char *__restrict __s, size_t __maxsize,
     __locale_t __loc,
     const char *__restrict __format, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__strfmon__, 4, 5)));
# 38 "ext/standard/string.c" 2
# 54 "ext/standard/string.c"
# 1 "ext/standard/scanf.h" 1
# 44 "ext/standard/scanf.h"
__attribute__ ((visibility("default"))) int ValidateFormat(char *format, int numVars, int *totalVars);
__attribute__ ((visibility("default"))) int php_sscanf_internal(char *string,char *format,int argCount,zval *args,
    int varStart, zval *return_value );
# 55 "ext/standard/string.c" 2




# 1 "ext/standard/php_smart_str.h" 1
# 133 "ext/standard/php_smart_str.h"
static inline char *smart_str_print_long(char *buf, zend_int_t num) {
 char *r;
 do { if (num < 0) { do { char *__p = ((buf)); zend_int_t __num = (-(zend_int_t)(num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); *--(r) = '-'; } else { do { char *__p = ((buf)); zend_int_t __num = ((num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); } } while (0);
 return r;
}

static inline char *smart_str_print_unsigned(char *buf, zend_int_t num) {
 char *r;
 do { char *__p = (buf); zend_uint_t __num = (num); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); r = __p; } while (0);
 return r;
}
# 60 "ext/standard/string.c" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_exceptions.h" 1
# 29 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/Zend/zend_exceptions.h"
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
# 61 "ext/standard/string.c" 2





# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/file.h" 1
# 26 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/ext/standard/file.h"
int zm_startup_file(int type, int module_number );
int zm_shutdown_file(int type, int module_number );

void zif_tempnam(zend_uint param_count, zval *return_value );
void php_if_tmpfile(zend_uint param_count, zval *return_value );
void php_if_fopen(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fclose(zend_uint param_count, zval *return_value );
void zif_popen(zend_uint param_count, zval *return_value );
void zif_pclose(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_feof(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fread(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fgetc(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fgets(zend_uint param_count, zval *return_value );
void zif_fscanf(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fgetss(zend_uint param_count, zval *return_value );
void zif_fgetcsv(zend_uint param_count, zval *return_value );
void zif_fputcsv(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fwrite(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fflush(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_rewind(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_ftell(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fseek(zend_uint param_count, zval *return_value );
void zif_mkdir(zend_uint param_count, zval *return_value );
void zif_rmdir(zend_uint param_count, zval *return_value );
__attribute__ ((visibility("default"))) void zif_fpassthru(zend_uint param_count, zval *return_value );
void zif_readfile(zend_uint param_count, zval *return_value );
void zif_umask(zend_uint param_count, zval *return_value );
void zif_rename(zend_uint param_count, zval *return_value );
void zif_unlink(zend_uint param_count, zval *return_value );
void zif_copy(zend_uint param_count, zval *return_value );
void zif_file(zend_uint param_count, zval *return_value );
void zif_file_get_contents(zend_uint param_count, zval *return_value );
void zif_file_put_contents(zend_uint param_count, zval *return_value );
void zif_get_meta_tags(zend_uint param_count, zval *return_value );
void zif_flock(zend_uint param_count, zval *return_value );
void zif_fd_set(zend_uint param_count, zval *return_value );
void zif_fd_isset(zend_uint param_count, zval *return_value );

void zif_realpath(zend_uint param_count, zval *return_value );


void zif_fnmatch(zend_uint param_count, zval *return_value );

void php_if_ftruncate(zend_uint param_count, zval *return_value );
void php_if_fstat(zend_uint param_count, zval *return_value );
void zif_sys_get_temp_dir(zend_uint param_count, zval *return_value );

int zm_startup_user_streams(int type, int module_number );

__attribute__ ((visibility("default"))) int php_le_stream_context(void);
__attribute__ ((visibility("default"))) int php_set_sock_blocking(int socketd, int block );
__attribute__ ((visibility("default"))) int php_copy_file(const char *src, const char *dest );
__attribute__ ((visibility("default"))) int php_copy_file_ex(const char *src, const char *dest, int src_chk );
__attribute__ ((visibility("default"))) int php_copy_file_ctx(const char *src, const char *dest, int src_chk, php_stream_context *ctx );
__attribute__ ((visibility("default"))) int php_mkdir_ex(const char *dir, zend_int_t mode, int options );
__attribute__ ((visibility("default"))) int php_mkdir(const char *dir, zend_int_t mode );
__attribute__ ((visibility("default"))) void php_fgetcsv(php_stream *stream, char delimiter, char enclosure, char escape_char, size_t buf_len, char *buf, zval *return_value );
__attribute__ ((visibility("default"))) zend_size_t php_fputcsv(php_stream *stream, zval *fields, char delimiter, char enclosure, char escape_char );
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
 zend_int_t auto_detect_line_endings;
 zend_int_t default_socket_timeout;
 char *user_agent;
 char *from_address;
 const char *user_stream_current_filename;
 php_stream_context *default_context;
 HashTable *stream_wrappers;
 HashTable *stream_filters;
 HashTable *wrapper_errors;
 int pclose_wait;
} php_file_globals;






extern __attribute__ ((visibility("default"))) php_file_globals file_globals;
# 67 "ext/standard/string.c" 2
# 82 "ext/standard/string.c"
void register_string_constants(int type, int module_number )
{
 zend_register_int_constant(("STR_PAD_LEFT"), sizeof("STR_PAD_LEFT")-1, (0), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("STR_PAD_RIGHT"), sizeof("STR_PAD_RIGHT")-1, (1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("STR_PAD_BOTH"), sizeof("STR_PAD_BOTH")-1, (2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("PATHINFO_DIRNAME"), sizeof("PATHINFO_DIRNAME")-1, (1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("PATHINFO_BASENAME"), sizeof("PATHINFO_BASENAME")-1, (2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("PATHINFO_EXTENSION"), sizeof("PATHINFO_EXTENSION")-1, (4), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("PATHINFO_FILENAME"), sizeof("PATHINFO_FILENAME")-1, (8), ((1<<0) | (1<<1)), module_number );
# 100 "ext/standard/string.c"
 zend_register_int_constant(("CHAR_MAX"), sizeof("CHAR_MAX")-1, (127), ((1<<0) | (1<<1)), module_number );



 zend_register_int_constant(("LC_CTYPE"), sizeof("LC_CTYPE")-1, (0), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("LC_NUMERIC"), sizeof("LC_NUMERIC")-1, (1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("LC_TIME"), sizeof("LC_TIME")-1, (2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("LC_COLLATE"), sizeof("LC_COLLATE")-1, (3), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("LC_MONETARY"), sizeof("LC_MONETARY")-1, (4), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("LC_ALL"), sizeof("LC_ALL")-1, (6), ((1<<0) | (1<<1)), module_number );

 zend_register_int_constant(("LC_MESSAGES"), sizeof("LC_MESSAGES")-1, (5), ((1<<0) | (1<<1)), module_number );



}


int php_tag_find(char *tag, zend_size_t len, char *set);


static char hexconvtab[] = "0123456789abcdef";
# 130 "ext/standard/string.c"
static zend_string *php_bin2hex(const unsigned char *old, const size_t oldlen)
{
 zend_string *result;
 size_t i, j;

 result = zend_str_safe_alloc(oldlen, 2 * sizeof(char), 0, 0);

 for (i = j = 0; i < oldlen; i++) {
  result->val[j++] = hexconvtab[old[i] >> 4];
  result->val[j++] = hexconvtab[old[i] & 15];
 }
 result->val[j] = '\0';

 return result;
}




static zend_string *php_hex2bin(const unsigned char *old, const size_t oldlen)
{
 size_t target_length = oldlen >> 1;
 zend_string *str = zend_str_alloc(target_length, 0);
 unsigned char *ret = (unsigned char *)str->val;
 size_t i, j;

 for (i = j = 0; i < target_length; i++) {
  unsigned char c = old[j++];
  unsigned char d;

  if (c >= '0' && c <= '9') {
   d = (c - '0') << 4;
  } else if (c >= 'a' && c <= 'f') {
   d = (c - 'a' + 10) << 4;
  } else if (c >= 'A' && c <= 'F') {
   d = (c - 'A' + 10) << 4;
  } else {
   zend_str_free(str);
   return ((void*)0);
  }
  c = old[j++];
  if (c >= '0' && c <= '9') {
   d |= c - '0';
  } else if (c >= 'a' && c <= 'f') {
   d |= c - 'a' + 10;
  } else if (c >= 'A' && c <= 'F') {
   d |= c - 'A' + 10;
  } else {
   zend_str_free(str);
   return ((void*)0);
  }
  ret[i] = d;
 }
 ret[i] = '\0';

 return str;
}





__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out)
{
 struct lconv *res;






 res = localeconv();

 *out = *res;





 return out;
}
# 237 "ext/standard/string.c"
void zif_bin2hex(zend_uint param_count, zval *return_value )
{
 zend_string *result;
 zend_string *data;

 if (zend_parse_parameters((param_count) , "S", &data) == FAILURE) {
  return;
 }

 result = php_bin2hex((unsigned char *)data->val, data->len);

 if (!result) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_hex2bin(zend_uint param_count, zval *return_value )
{
 zend_string *result, *data;

 if (zend_parse_parameters((param_count) , "S", &data) == FAILURE) {
  return;
 }

 if (data->len % 2 != 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Hexadecimal input string must have an even length");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 result = php_hex2bin((unsigned char *)data->val, data->len);

 if (!result) {
  php_error_docref0(((void*)0) , (1<<1L), "Input string must be hexadecimal string");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
}


static void php_spn_common_handler(zend_uint param_count, zval *return_value , int behavior)
{
 zend_string *s11, *s22;
 zend_int_t start = 0, len = 0;

 if (zend_parse_parameters((param_count) , "SS|ii", &s11,
    &s22, &start, &len) == FAILURE) {
  return;
 }

 if ((param_count) < 4) {
  len = s11->len;
 }



 if (start < 0) {
  start += (zend_int_t)s11->len;
  if (start < 0) {
   start = 0;
  }
 } else if ((zend_size_t)start > s11->len) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (len < 0) {
  len += (s11->len - start);
  if (len < 0) {
   len = 0;
  }
 }

 if (len > (zend_int_t)s11->len - start) {
  len = s11->len - start;
 }

 if(len == 0) {
  { { zval *__z = (return_value); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; }; return; };
 }

 if (behavior == 0) {
  { { zval *__z = (return_value); (*(__z)).value.lval = php_strspn(s11->val + start , s22->val , s11->val + start + len , s22->val + s22->len ); (*(__z)).u1.type_info = 4; }; return; };



 } else if (behavior == 1) {
  { { zval *__z = (return_value); (*(__z)).value.lval = php_strcspn(s11->val + start , s22->val , s11->val + start + len , s22->val + s22->len ); (*(__z)).u1.type_info = 4; }; return; };



 }

}




void zif_strspn(zend_uint param_count, zval *return_value )
{
 php_spn_common_handler(param_count, return_value , 0);
}




void zif_strcspn(zend_uint param_count, zval *return_value )
{
 php_spn_common_handler(param_count, return_value , 1);
}




int zm_startup_nl_langinfo(int type, int module_number )
{


 zend_register_int_constant(("ABDAY_1"), sizeof("ABDAY_1")-1, (ABDAY_1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABDAY_2"), sizeof("ABDAY_2")-1, (ABDAY_2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABDAY_3"), sizeof("ABDAY_3")-1, (ABDAY_3), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABDAY_4"), sizeof("ABDAY_4")-1, (ABDAY_4), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABDAY_5"), sizeof("ABDAY_5")-1, (ABDAY_5), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABDAY_6"), sizeof("ABDAY_6")-1, (ABDAY_6), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABDAY_7"), sizeof("ABDAY_7")-1, (ABDAY_7), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("DAY_1"), sizeof("DAY_1")-1, (DAY_1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("DAY_2"), sizeof("DAY_2")-1, (DAY_2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("DAY_3"), sizeof("DAY_3")-1, (DAY_3), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("DAY_4"), sizeof("DAY_4")-1, (DAY_4), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("DAY_5"), sizeof("DAY_5")-1, (DAY_5), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("DAY_6"), sizeof("DAY_6")-1, (DAY_6), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("DAY_7"), sizeof("DAY_7")-1, (DAY_7), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("ABMON_1"), sizeof("ABMON_1")-1, (ABMON_1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_2"), sizeof("ABMON_2")-1, (ABMON_2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_3"), sizeof("ABMON_3")-1, (ABMON_3), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_4"), sizeof("ABMON_4")-1, (ABMON_4), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_5"), sizeof("ABMON_5")-1, (ABMON_5), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_6"), sizeof("ABMON_6")-1, (ABMON_6), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_7"), sizeof("ABMON_7")-1, (ABMON_7), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_8"), sizeof("ABMON_8")-1, (ABMON_8), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_9"), sizeof("ABMON_9")-1, (ABMON_9), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_10"), sizeof("ABMON_10")-1, (ABMON_10), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_11"), sizeof("ABMON_11")-1, (ABMON_11), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("ABMON_12"), sizeof("ABMON_12")-1, (ABMON_12), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("MON_1"), sizeof("MON_1")-1, (MON_1), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_2"), sizeof("MON_2")-1, (MON_2), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_3"), sizeof("MON_3")-1, (MON_3), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_4"), sizeof("MON_4")-1, (MON_4), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_5"), sizeof("MON_5")-1, (MON_5), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_6"), sizeof("MON_6")-1, (MON_6), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_7"), sizeof("MON_7")-1, (MON_7), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_8"), sizeof("MON_8")-1, (MON_8), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_9"), sizeof("MON_9")-1, (MON_9), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_10"), sizeof("MON_10")-1, (MON_10), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_11"), sizeof("MON_11")-1, (MON_11), ((1<<0) | (1<<1)), module_number );
 zend_register_int_constant(("MON_12"), sizeof("MON_12")-1, (MON_12), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("AM_STR"), sizeof("AM_STR")-1, (AM_STR), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("PM_STR"), sizeof("PM_STR")-1, (PM_STR), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("D_T_FMT"), sizeof("D_T_FMT")-1, (D_T_FMT), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("D_FMT"), sizeof("D_FMT")-1, (D_FMT), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("T_FMT"), sizeof("T_FMT")-1, (T_FMT), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("T_FMT_AMPM"), sizeof("T_FMT_AMPM")-1, (T_FMT_AMPM), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("ERA"), sizeof("ERA")-1, (ERA), ((1<<0) | (1<<1)), module_number );





 zend_register_int_constant(("ERA_D_T_FMT"), sizeof("ERA_D_T_FMT")-1, (ERA_D_T_FMT), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("ERA_D_FMT"), sizeof("ERA_D_FMT")-1, (ERA_D_FMT), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("ERA_T_FMT"), sizeof("ERA_T_FMT")-1, (ERA_T_FMT), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("ALT_DIGITS"), sizeof("ALT_DIGITS")-1, (ALT_DIGITS), ((1<<0) | (1<<1)), module_number );
# 447 "ext/standard/string.c"
 zend_register_int_constant(("CRNCYSTR"), sizeof("CRNCYSTR")-1, (_NL_MONETARY_CRNCYSTR), ((1<<0) | (1<<1)), module_number );
# 492 "ext/standard/string.c"
 zend_register_int_constant(("RADIXCHAR"), sizeof("RADIXCHAR")-1, (RADIXCHAR), ((1<<0) | (1<<1)), module_number );





 zend_register_int_constant(("THOUSEP"), sizeof("THOUSEP")-1, (THOUSEP), ((1<<0) | (1<<1)), module_number );





 zend_register_int_constant(("YESEXPR"), sizeof("YESEXPR")-1, (__YESEXPR), ((1<<0) | (1<<1)), module_number );


 zend_register_int_constant(("NOEXPR"), sizeof("NOEXPR")-1, (__NOEXPR), ((1<<0) | (1<<1)), module_number );
# 516 "ext/standard/string.c"
 zend_register_int_constant(("CODESET"), sizeof("CODESET")-1, (CODESET), ((1<<0) | (1<<1)), module_number );


 return SUCCESS;
}




void zif_nl_langinfo(zend_uint param_count, zval *return_value )
{
 zend_int_t item;
 char *value;

 if (zend_parse_parameters((param_count) , "i", &item) == FAILURE) {
  return;
 }

 switch(item) {

  case ABDAY_1:
  case ABDAY_2:
  case ABDAY_3:
  case ABDAY_4:
  case ABDAY_5:
  case ABDAY_6:
  case ABDAY_7:


  case DAY_1:
  case DAY_2:
  case DAY_3:
  case DAY_4:
  case DAY_5:
  case DAY_6:
  case DAY_7:


  case ABMON_1:
  case ABMON_2:
  case ABMON_3:
  case ABMON_4:
  case ABMON_5:
  case ABMON_6:
  case ABMON_7:
  case ABMON_8:
  case ABMON_9:
  case ABMON_10:
  case ABMON_11:
  case ABMON_12:


  case MON_1:
  case MON_2:
  case MON_3:
  case MON_4:
  case MON_5:
  case MON_6:
  case MON_7:
  case MON_8:
  case MON_9:
  case MON_10:
  case MON_11:
  case MON_12:


  case AM_STR:


  case PM_STR:


  case D_T_FMT:


  case D_FMT:


  case T_FMT:


  case T_FMT_AMPM:


  case ERA:





  case ERA_D_T_FMT:


  case ERA_D_FMT:


  case ERA_T_FMT:


  case ALT_DIGITS:
# 624 "ext/standard/string.c"
  case _NL_MONETARY_CRNCYSTR:
# 668 "ext/standard/string.c"
  case RADIXCHAR:




  case THOUSEP:





  case __YESEXPR:


  case __NOEXPR:
# 691 "ext/standard/string.c"
  case CODESET:

   break;
  default:
   php_error_docref0(((void*)0) , (1<<1L), "Item '" "%" "l" "d" "' is not valid", item);
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }


 value = nl_langinfo(item);
 if (value == ((void*)0)) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 } else {
  { do { const char *_s = (value); do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); } while (0); return; };
 }
}






void zif_strcoll(zend_uint param_count, zval *return_value )
{
 zend_string *s1, *s2;

 if (zend_parse_parameters((param_count) , "SS", &s1, &s2) == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = strcoll((const char *) s1->val, (const char *) s2->val); (*(__z)).u1.type_info = 4; }; return; };

}
# 732 "ext/standard/string.c"
static inline int php_charmask(unsigned char *input, zend_size_t len, char *mask )
{
 unsigned char *end;
 unsigned char c;
 int result = SUCCESS;

 memset(mask, 0, 256);
 for (end = input+len; input < end; input++) {
  c=*input;
  if ((input+3 < end) && input[1] == '.' && input[2] == '.'
    && input[3] >= c) {
   memset(mask+c, 1, input[3] - c + 1);
   input+=3;
  } else if ((input+1 < end) && input[0] == '.' && input[1] == '.') {


   if (end-len >= input) {
    php_error_docref0(((void*)0) , (1<<1L), "Invalid '..'-range, no character to the left of '..'");
    result = FAILURE;
    continue;
   }
   if (input+2 >= end) {
    php_error_docref0(((void*)0) , (1<<1L), "Invalid '..'-range, no character to the right of '..'");
    result = FAILURE;
    continue;
   }
   if (input[-1] > input[2]) {
    php_error_docref0(((void*)0) , (1<<1L), "Invalid '..'-range, '..'-range needs to be incrementing");
    result = FAILURE;
    continue;
   }

   php_error_docref0(((void*)0) , (1<<1L), "Invalid '..'-range");
   result = FAILURE;
   continue;
  } else {
   mask[c]=1;
  }
 }
 return result;
}
# 781 "ext/standard/string.c"
__attribute__ ((visibility("default"))) char *php_trim(char *c, zend_size_t len, char *what, zend_size_t what_len, zval *return_value, int mode )
{
 register zend_int_t i;
 int trimmed = 0;
 char mask[256];

 if (what) {
  php_charmask((unsigned char*)what, what_len, mask );
 } else {
  php_charmask((unsigned char*)" \n\r\t\v\0", 6, mask );
 }

 if (mode & 1) {
  for (i = 0; i < len; i++) {
   if (mask[(unsigned char)c[i]]) {
    trimmed++;
   } else {
    break;
   }
  }
  len -= trimmed;
  c += trimmed;
 }
 if (mode & 2) {
  for (i = len - 1; i >= 0; i--) {
   if (mask[(unsigned char)c[i]]) {
    len--;
   } else {
    break;
   }
  }
 }

 if (return_value) {
  do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(c, len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 } else {
  return _estrndup((c), (len) );
 }
 return "";
}





static void php_do_trim(zend_uint param_count, zval *return_value , int mode)
{
 zend_string *str;
 zend_string *what = ((void*)0);






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &what, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 php_trim(str->val, str->len, (what ? what->val : ((void*)0)), (what ? what->len : 0), return_value, mode );
}




void zif_trim(zend_uint param_count, zval *return_value )
{
 php_do_trim(param_count, return_value , 3);
}




void zif_rtrim(zend_uint param_count, zval *return_value )
{
 php_do_trim(param_count, return_value , 2);
}




void zif_ltrim(zend_uint param_count, zval *return_value )
{
 php_do_trim(param_count, return_value , 1);
}




void zif_wordwrap(zend_uint param_count, zval *return_value )
{
 zend_string *text, *breakchar = ((void*)0), *breakchar_save = ((void*)0);
 zend_size_t newtextlen, chk;
 size_t alloced;
 zend_int_t current = 0, laststart = 0, lastspace = 0;
 zend_int_t linelength = 75;
 zend_bool docut = 0;
 zend_string *newtext;

 breakchar = breakchar_save = zend_str_init("\n", 1, 1);
 if (!breakchar) {
  return;
 }

 if (zend_parse_parameters((param_count) , "S|iSb", &text, &linelength, &breakchar, &docut) == FAILURE) {
  zend_str_free(breakchar);
  return;
 }

 if (breakchar != breakchar_save) {
  zend_str_free(breakchar_save);
 }

 if (text->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 if (breakchar->len == 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Break string cannot be empty");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (linelength == 0 && docut) {
  php_error_docref0(((void*)0) , (1<<1L), "Can't force cut when width is zero");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }



 if (breakchar->len == 1 && !docut) {
  newtext = zend_str_init(text->val, text->len, 0);

  laststart = lastspace = 0;
  for (current = 0; current < text->len; current++) {
   if (text->val[current] == breakchar->val[0]) {
    laststart = lastspace = current + 1;
   } else if (text->val[current] == ' ') {
    if (current - laststart >= linelength) {
     newtext->val[current] = breakchar->val[0];
     laststart = current + 1;
    }
    lastspace = current;
   } else if (current - laststart >= linelength && laststart != lastspace) {
    newtext->val[lastspace] = breakchar->val[0];
    laststart = lastspace + 1;
   }
  }

  { do { zval *__z = (return_value); zend_string *__s = (newtext); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
 } else {

  if (linelength > 0) {
   chk = (zend_size_t)(text->len/linelength + 1);
   newtext = zend_str_alloc(chk * breakchar->len + text->len, 0);
   alloced = text->len + chk * breakchar->len + 1;
  } else {
   chk = text->len;
   alloced = text->len * (breakchar->len + 1) + 1;
   newtext = zend_str_alloc(text->len * (breakchar->len + 1), 0);
  }


  newtextlen = 0;

  laststart = lastspace = 0;
  for (current = 0; current < text->len; current++) {
   if (chk <= 0) {
    alloced += (zend_size_t) (((text->len - current + 1)/linelength + 1) * breakchar->len) + 1;
    newtext = zend_str_realloc(newtext, alloced, 0);
    chk = (zend_size_t) ((text->len - current)/linelength) + 1;
   }


   if (text->val[current] == breakchar->val[0]
    && current + breakchar->len < text->len
    && !(__extension__ (__builtin_constant_p (breakchar->len) && ((__builtin_constant_p (text->val+current) && strlen (text->val+current) < ((size_t) (breakchar->len))) || (__builtin_constant_p (breakchar->val) && strlen (breakchar->val) < ((size_t) (breakchar->len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (text->val+current) && __builtin_constant_p (breakchar->val) && (__s1_len = __builtin_strlen (text->val+current), __s2_len = __builtin_strlen (breakchar->val), (!((size_t)(const void *)((text->val+current) + 1) - (size_t)(const void *)(text->val+current) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((breakchar->val) + 1) - (size_t)(const void *)(breakchar->val) == 1) || __s2_len >= 4)) ? __builtin_strcmp (text->val+current, breakchar->val) : (__builtin_constant_p (text->val+current) && ((size_t)(const void *)((text->val+current) + 1) - (size_t)(const void *)(text->val+current) == 1) && (__s1_len = __builtin_strlen (text->val+current), __s1_len < 4) ? (__builtin_constant_p (breakchar->val) && ((size_t)(const void *)((breakchar->val) + 1) - (size_t)(const void *)(breakchar->val) == 1) ? __builtin_strcmp (text->val+current, breakchar->val) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (breakchar->val); int __result = (((const unsigned char *) (const char *) (text->val+current))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (text->val+current))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (text->val+current))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (text->val+current))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (breakchar->val) && ((size_t)(const void *)((breakchar->val) + 1) - (size_t)(const void *)(breakchar->val) == 1) && (__s2_len = __builtin_strlen (breakchar->val), __s2_len < 4) ? (__builtin_constant_p (text->val+current) && ((size_t)(const void *)((text->val+current) + 1) - (size_t)(const void *)(text->val+current) == 1) ? __builtin_strcmp (text->val+current, breakchar->val) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (text->val+current); int __result = (((const unsigned char *) (const char *) (breakchar->val))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (breakchar->val))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (breakchar->val))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (breakchar->val))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (text->val+current, breakchar->val)))); }) : strncmp (text->val+current, breakchar->val, breakchar->len)))) {
    memcpy(newtext->val + newtextlen, text->val + laststart, current - laststart + breakchar->len);
    newtextlen += current - laststart + breakchar->len;
    current += breakchar->len - 1;
    laststart = lastspace = current + 1;
    chk--;
   }


   else if (text->val[current] == ' ') {
    if (current - laststart >= linelength) {
     memcpy(newtext->val + newtextlen, text->val + laststart, current - laststart);
     newtextlen += current - laststart;
     memcpy(newtext->val + newtextlen, breakchar->val, breakchar->len);
     newtextlen += breakchar->len;
     laststart = current + 1;
     chk--;
    }
    lastspace = current;
   }



   else if (current - laststart >= linelength
     && docut && laststart >= lastspace) {
    memcpy(newtext->val + newtextlen, text->val + laststart, current - laststart);
    newtextlen += current - laststart;
    memcpy(newtext->val + newtextlen, breakchar->val, breakchar->len);
    newtextlen += breakchar->len;
    laststart = lastspace = current;
    chk--;
   }



   else if (current - laststart >= linelength
     && laststart < lastspace) {
    memcpy(newtext->val + newtextlen, text->val + laststart, lastspace - laststart);
    newtextlen += lastspace - laststart;
    memcpy(newtext->val + newtextlen, breakchar->val, breakchar->len);
    newtextlen += breakchar->len;
    laststart = lastspace = lastspace + 1;
    chk--;
   }
  }


  if (laststart != current) {
   memcpy(newtext->val + newtextlen, text->val + laststart, current - laststart);
   newtextlen += current - laststart;
  }

  newtext->val[newtextlen] = '\0';

  newtext = zend_str_realloc(newtext, newtextlen, 0);

  { do { zval *__z = (return_value); zend_string *__s = (newtext); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
 }
}




__attribute__ ((visibility("default"))) void php_explode(zval *delim, zval *str, zval *return_value, zend_int_t limit)
{
 char *p1, *p2, *endp;

 endp = (*(str)).value.str->val + (*(str)).value.str->len;

 p1 = (*(str)).value.str->val;
 p2 = (char*)zend_memnstr((*(str)).value.str->val, (*(delim)).value.str->val, (*(delim)).value.str->len, endp);

 if (p2 == ((void*)0)) {
  add_next_index_stringl(return_value, p1, (*(str)).value.str->len);
 } else {
  do {
   add_next_index_stringl(return_value, p1, p2 - p1);
   p1 = p2 + (*(delim)).value.str->len;
  } while ((p2 = (char*)zend_memnstr(p1, (*(delim)).value.str->val, (*(delim)).value.str->len, endp)) != ((void*)0) &&
     --limit > 1);

  if (p1 <= endp)
   add_next_index_stringl(return_value, p1, endp-p1);
 }
}




__attribute__ ((visibility("default"))) void php_explode_negative_limit(zval *delim, zval *str, zval *return_value, zend_int_t limit)
{

 char *p1, *p2, *endp;

 endp = (*(str)).value.str->val + (*(str)).value.str->len;

 p1 = (*(str)).value.str->val;
 p2 = (char*)zend_memnstr((*(str)).value.str->val, (*(delim)).value.str->val, (*(delim)).value.str->len, endp);

 if (p2 == ((void*)0)) {




 } else {
  zend_size_t allocated = 64, found = 0;
  zend_int_t i, to_return;
  char **positions = _emalloc((allocated * sizeof(char *)) );

  positions[found++] = p1;
  do {
   if (found >= allocated) {
    allocated = found + 64;
    positions = _erealloc((positions), (allocated*sizeof(char *)), 0 );
   }
   positions[found++] = p1 = p2 + (*(delim)).value.str->len;
  } while ((p2 = (char*)zend_memnstr(p1, (*(delim)).value.str->val, (*(delim)).value.str->len, endp)) != ((void*)0));

  to_return = limit + found;

  for (i = 0;i < to_return;i++) {
   add_next_index_stringl(return_value, positions[i],
     (positions[i+1] - (*(delim)).value.str->len) - positions[i]);
  }
  _efree((positions) );
 }

}




void zif_explode(zend_uint param_count, zval *return_value )
{
 zend_string *str, *delim;
 zend_int_t limit = (9223372036854775807L);
 zval zdelim, zstr;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &delim, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_int(_arg, &limit, &_dummy, 0, 0))), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (delim->len == 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Empty delimiter");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 _array_init((return_value), 0 );

 if (str->len == 0) {
    if (limit >= 0) {
   add_next_index_stringl(return_value, "", sizeof("") - 1);
  }
  return;
 }

 do { zval *__z = (&zstr); zend_string *__s = (str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 do { zval *__z = (&zdelim); zend_string *__s = (delim); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 if (limit > 1) {
  php_explode(&zdelim, &zstr, return_value, limit);
 } else if (limit < 0) {
  php_explode_negative_limit(&zdelim, &zstr, return_value, limit);
 } else {
  add_index_stringl(return_value, 0, str->val, str->len);
 }
}
# 1142 "ext/standard/string.c"
__attribute__ ((visibility("default"))) void php_implode(zval *delim, zval *arr, zval *return_value )
{
 zval *tmp;
 smart_str implstr = {0};
 int numelems, i = 0;
 zend_string *str;

 numelems = ((&(*(arr)).value.arr->ht))->nNumOfElements;

 if (numelems == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 do { uint _idx; for (_idx = 0; _idx < ((&(*(arr)).value.arr->ht))->nNumUsed; _idx++) { Bucket *_p = ((&(*(arr)).value.arr->ht))->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; tmp = _z; {
again:
  switch (zval_get_type(&(*(tmp)))) {
   case 6:
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->s) { __nl = ((((*(tmp)).value.str->len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + ((((*(tmp)).value.str->len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, (((*(tmp)).value.str->val)), (((*(tmp)).value.str->len))); __dest->s->len = __nl; } while (0);
    break;

   case 4:
    do { char __b[32]; char *__t; do { if (((((*(tmp)).value.lval))) < 0) { do { char *__p = ((__b + sizeof(__b) - 1)); zend_uint_t __num = (-(zend_uint_t)(((((*(tmp)).value.lval))))); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (__t) = __p; } while (0); *--(__t) = '-'; } else { do { char *__p = ((__b + sizeof(__b) - 1)); zend_uint_t __num = ((((((*(tmp)).value.lval))))); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (__t) = __p; } while (0); } } while (0); do { register size_t __nl; smart_str *__dest = (smart_str *) ((((&implstr)))); do { if (!(__dest)->s) { __nl = ((__b + sizeof(__b) - 1 - __t)); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((((0))))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + ((__b + sizeof(__b) - 1 - __t)); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((((0))))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, (__t), (__b + sizeof(__b) - 1 - __t)); __dest->s->len = __nl; } while (0); } while (0);
    break;

   case 3:
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->s) { __nl = (((sizeof("1")-1))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((sizeof("1")-1))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, (("1")), ((sizeof("1")-1))); __dest->s->len = __nl; } while (0);
    break;

   case 1:
   case 2:
    break;

   case 5: {
    char *stmp;
    zend_size_t str_len = spprintf(&stmp, 0, "%.*G", (int) (executor_globals.precision), (*(tmp)).value.dval);
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->s) { __nl = (((str_len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((str_len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, ((stmp)), ((str_len))); __dest->s->len = __nl; } while (0);
    _efree((stmp) );
   }
    break;

   case 10:
    tmp = &(*(tmp)).value.ref->val;
    goto again;

   default:
    str = _zval_get_string((tmp) );
    do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->s) { __nl = (((str->len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((str->len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, ((str->val)), ((str->len))); __dest->s->len = __nl; } while (0);
    zend_str_release(str);
    break;

  }

  if (++i != numelems) {
   do { register size_t __nl; smart_str *__dest = (smart_str *) ((&implstr)); do { if (!(__dest)->s) { __nl = ((((*(delim)).value.str->len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + ((((*(delim)).value.str->len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, (((*(delim)).value.str->val)), (((*(delim)).value.str->len))); __dest->s->len = __nl; } while (0);
  }
 } } } while (0);

 do { if ((&implstr)->s) { (&implstr)->s->val[(&implstr)->s->len] = '\0'; } } while (0);

 if (implstr.s) {
  { do { zval *__z = (return_value); zend_string *__s = (implstr.s); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
 } else {
  do { smart_str *__s = (smart_str *) ((&implstr)); if (__s->s) { zend_str_release(__s->s); __s->s = ((void*)0); } __s->a = 0; } while (0);
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }
}




void zif_implode(zend_uint param_count, zval *return_value )
{
 zval *arg1 = ((void*)0), *arg2 = ((void*)0), *delim, *arr, tmp;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &arg1, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &arg1, 0); }
  _optional = 1;
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &arg2, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &arg2, 0); }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (arg2 == ((void*)0)) {
  if (zval_get_type(&(*(arg1))) != 7) {
   php_error_docref0(((void*)0) , (1<<1L), "Argument must be an array");
   return;
  }

  do { do { zval *__z = (&tmp); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
  delim = &tmp;

  do { zval *_zv = (arg1); if ((((*(_zv)).u1.v.type_flags & (1<<1)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } else if ((zval_get_type(&(*(_zv))) == 10)) { zval_delref_p(_zv); do { zval *__z1 = (_zv); zval *__z2 = (&(*(_zv)).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0); } } } } while (0);
  arr = arg1;
 } else {
  if (zval_get_type(&(*(arg1))) == 7) {
   arr = arg1;
   if (zval_get_type(&(*(arg2)))!=6) { do { zval *_zv = (arg2); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(arg2))) != 6) { _convert_to_string((arg2) ); }; };
   delim = arg2;
  } else if (zval_get_type(&(*(arg2))) == 7) {
   arr = arg2;
   if (zval_get_type(&(*(arg1)))!=6) { do { zval *_zv = (arg1); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(arg1))) != 6) { _convert_to_string((arg1) ); }; };
   delim = arg1;
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Invalid arguments passed");
   return;
  }
 }

 php_implode(delim, arr, return_value );
}






void zif_strtok(zend_uint param_count, zval *return_value )
{
 zend_string *str, *tok = ((void*)0);
 char *token;
 char *token_end;
 char *p;
 char *pe;
 int skipped = 0;

 if (zend_parse_parameters((param_count) , "S|S", &str, &tok) == FAILURE) {
  return;
 }

 if ((param_count) == 1) {
  tok = str;
 } else {
  _zval_ptr_dtor((&(basic_globals.strtok_zval)) );
  do { do { zval *__z = (&(basic_globals.strtok_zval)); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
  (basic_globals.strtok_last) = (basic_globals.strtok_string) = ((basic_globals.strtok_zval)).value.str->val;
  (basic_globals.strtok_len) = str->len;
 }

 p = (basic_globals.strtok_last);
 pe = (basic_globals.strtok_string) + (basic_globals.strtok_len);

 if (!p || p >= pe) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 token = tok->val;
 token_end = token + tok->len;

 while (token < token_end) {
  (basic_globals.strtok_table)[(unsigned char) *token++] = 1;
 }


 while ((basic_globals.strtok_table)[(unsigned char) *p]) {
  if (++p >= pe) {

   (basic_globals.strtok_last) = ((void*)0);
   do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0);
   goto restore;
  }
  skipped++;
 }


 while (++p < pe) {
  if ((basic_globals.strtok_table)[(unsigned char) *p]) {
   goto return_token;
  }
 }

 if (p - (basic_globals.strtok_last)) {
return_token:
  do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init((basic_globals.strtok_last) + skipped, (p - (basic_globals.strtok_last)) - skipped, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
  (basic_globals.strtok_last) = p + 1;
 } else {
  do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0);
  (basic_globals.strtok_last) = ((void*)0);
 }


restore:
 token = tok->val;

 while (token < token_end) {
  (basic_globals.strtok_table)[(unsigned char) *token++] = 0;
 }
}




__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len)
{
 unsigned char *c, *e;

 c = (unsigned char *)s;
 e = (unsigned char *)c+len;

 while (c < e) {
  *c = (__extension__ ({ int __res; if (sizeof (*c) > 1) { if (__builtin_constant_p (*c)) { int __c = (*c); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper (*c); } else __res = (*__ctype_toupper_loc ())[(int) (*c)]; __res; }));
  c++;
 }
 return s;
}




void zif_strtoupper(zend_uint param_count, zval *return_value )
{
 zend_string *arg;
 zend_string *result;

 if (zend_parse_parameters((param_count) , "S", &arg) == FAILURE) {
  return;
 }

 result = zend_str_init(arg->val, arg->len, 0);
 php_strtoupper(result->val, result->len);
 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len)
{
 unsigned char *c, *e;

 c = (unsigned char *)s;
 e = c+len;

 while (c < e) {
  *c = (__extension__ ({ int __res; if (sizeof (*c) > 1) { if (__builtin_constant_p (*c)) { int __c = (*c); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*c); } else __res = (*__ctype_tolower_loc ())[(int) (*c)]; __res; }));
  c++;
 }
 return s;
}




void zif_strtolower(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 zend_string *result;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 result = zend_str_init(str->val, str->len, 0);
 php_strtolower(result->val, result->len);
 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




__attribute__ ((visibility("default"))) zend_string *php_basename(const char *s, size_t len, char *suffix, size_t sufflen )
{
 char *c, *comp, *cend;
 size_t inc_len, cnt;
 int state;
 zend_string *ret;

 c = comp = cend = (char*)s;
 cnt = len;
 state = 0;
 while (cnt > 0) {
  inc_len = (*c == '\0' ? 1: mblen(c, cnt));

  switch (inc_len) {
   case -2:
   case -1:
    inc_len = 1;
    (({ __typeof__ (mblen(((void*)0), 0)) __x = (mblen(((void*)0), 0)); (void) __x; }));
    break;
   case 0:
    goto quit_loop;
   case 1:



    if (*c == '/') {

     if (state == 1) {
      state = 0;
      cend = c;
     }
# 1455 "ext/standard/string.c"
    } else {
     if (state == 0) {
      comp = c;
      state = 1;
     }
    }
    break;
   default:
    if (state == 0) {
     comp = c;
     state = 1;
    }
    break;
  }
  c += inc_len;
  cnt -= inc_len;
 }

quit_loop:
 if (state == 1) {
  cend = c;
 }
 if (suffix != ((void*)0) && sufflen < (uint)(cend - comp) &&
   memcmp(cend - sufflen, suffix, sufflen) == 0) {
  cend -= sufflen;
 }

 len = cend - comp;

 ret = zend_str_init(comp, len, 0);
 return ret;
}




void zif_basename(zend_uint param_count, zval *return_value )
{
 char *string, *suffix = ((void*)0);
 int string_len, suffix_len = 0;

 if (zend_parse_parameters((param_count) , "s|s", &string, &string_len, &suffix, &suffix_len) == FAILURE) {
  return;
 }

 { do { zval *__z = (return_value); zend_string *__s = (php_basename(string, string_len, suffix, suffix_len )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




__attribute__ ((visibility("default"))) size_t php_dirname(char *path, size_t len)
{
 return zend_dirname(path, len);
}




void zif_dirname(zend_uint param_count, zval *return_value )
{
 char *str;
 zend_string *ret;
 int str_len;

 if (zend_parse_parameters((param_count) , "s", &str, &str_len) == FAILURE) {
  return;
 }

 ret = zend_str_init(str, str_len, 0);
 ret->len = zend_dirname(ret->val, str_len);

 { do { zval *__z = (return_value); zend_string *__s = (ret); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_pathinfo(zend_uint param_count, zval *return_value )
{
 zval tmp;
 char *path, *dirname;
 int path_len, have_basename;
 long opt = (1 | 2 | 4 | 8);
 zend_string *ret = ((void*)0);

 if (zend_parse_parameters((param_count) , "s|l", &path, &path_len, &opt) == FAILURE) {
  return;
 }

 have_basename = ((opt & 2) == 2);

 _array_init((&tmp), 0 );

 if ((opt & 1) == 1) {
  dirname = _estrndup((path), (path_len) );
  php_dirname(dirname, path_len);
  if (*dirname) {
   add_assoc_string_ex(&tmp, "dirname", strlen("dirname"), dirname);
  }
  _efree((dirname) );
 }

 if (have_basename) {
  ret = php_basename(path, path_len, ((void*)0), 0 );
  add_assoc_str_ex(&tmp, "basename", strlen("basename"), zend_str_copy(ret));
 }

 if ((opt & 4) == 4) {
  const char *p;
  int idx;

  if (!have_basename) {
   ret = php_basename(path, path_len, ((void*)0), 0 );
  }

  p = zend_memrchr(ret->val, '.', ret->len);

  if (p) {
   idx = p - ret->val;
   add_assoc_stringl_ex(&tmp, "extension", strlen("extension"), ret->val + idx + 1, ret->len - idx - 1);
  }
 }

 if ((opt & 8) == 8) {
  const char *p;
  int idx;


  if (!have_basename && !ret) {
   ret = php_basename(path, path_len, ((void*)0), 0 );
  }

  p = zend_memrchr(ret->val, '.', ret->len);

  idx = p ? (p - ret->val) : ret->len;
  add_assoc_stringl_ex(&tmp, "filename", strlen("filename"), ret->val, idx);
 }

 if (ret) {
  zend_str_release(ret);
 }

 if (opt == (1 | 2 | 4 | 8)) {
  { do { zval *__z = (return_value); zval *__zv = (&tmp); if (__builtin_expect(!(!(!(zval_get_type(&(*(__zv))) == 10))), 1)) { do { zval *_z1 = (__z); zval *_z2 = (__zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); } else { do { zval *_z1 = (__z); zval *_z2 = (&(*(__zv)).value.ref->val); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); } if (0) { _zval_opt_copy_ctor((__z) ); } if (1) { if (!0) { do { (*(__zv)).u1.type_info = 1; } while (0); } _zval_ptr_dtor((__zv) ); } } while (0); return; };
 } else {
  zval *element;
  if ((element = zend_hash_get_current_data_ex((&(tmp).value.arr->ht), &((&(tmp).value.arr->ht))->nInternalPointer)) != ((void*)0)) {
   do { zval *__z = (return_value); zval *__zv = (element); if (__builtin_expect(!(!(!(zval_get_type(&(*(__zv))) == 10))), 1)) { do { zval *_z1 = (__z); zval *_z2 = (__zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); } else { do { zval *_z1 = (__z); zval *_z2 = (&(*(__zv)).value.ref->val); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); } if (1) { _zval_opt_copy_ctor((__z) ); } if (0) { if (!1) { do { (*(__zv)).u1.type_info = 1; } while (0); } _zval_ptr_dtor((__zv) ); } } while (0);
  } else {
   do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
  }
 }

 _zval_ptr_dtor((&tmp) );
}




__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len)
{
 php_strtolower(s, s_len);
 php_strtolower(t, t_len);
 return (char*)zend_memnstr(s, t, t_len, s + s_len);
}




__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end)
{
 register const char *p = s1, *spanp;
 register char c = *p;

cont:
 for (spanp = s2; p != s1_end && spanp != s2_end;) {
  if (*spanp++ == c) {
   c = *(++p);
   goto cont;
  }
 }
 return (p - s1);
}




__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end)
{
 register const char *p, *spanp;
 register char c = *s1;

 for (p = s1;;) {
  spanp = s2;
  do {
   if (*spanp == c || p == s1_end) {
    return p - s1;
   }
  } while (spanp++ < (s2_end - 1));
  c = *++p;
 }

}




static int php_needle_char(zval *needle, char *target )
{
 switch (zval_get_type(&(*(needle)))) {
  case 4:
   *target = (char)(*(needle)).value.lval;
   return SUCCESS;
  case 1:
  case 2:
   *target = '\0';
   return SUCCESS;
  case 3:
   *target = '\1';
   return SUCCESS;
  case 5:
   *target = (char)(int)(*(needle)).value.dval;
   return SUCCESS;
  case 8:
   {
    zval holder = *needle;
    _zval_copy_ctor((&(holder)) );
    convert_to_int(&(holder));
    if(zval_get_type(&(holder)) != 4) {
     return FAILURE;
    }
    *target = (char)(holder).value.lval;
    return SUCCESS;
   }
  default: {
   php_error_docref0(((void*)0) , (1<<1L), "needle is not a string or an integer");
   return FAILURE;
   }
 }
}




void zif_stristr(zend_uint param_count, zval *return_value )
{
 zval *needle;
 zend_string *haystack;
 char *found = ((void*)0);
 zend_size_t found_offset;
 char *haystack_dup;
 char needle_char[2];
 zend_bool part = 0;

 if (zend_parse_parameters((param_count) , "Sz|b", &haystack, &needle, &part) == FAILURE) {
  return;
 }

 haystack_dup = _estrndup((haystack->val), (haystack->len) );

 if (zval_get_type(&(*(needle))) == 6) {
  char *orig_needle;
  if (!(*(needle)).value.str->len) {
   php_error_docref0(((void*)0) , (1<<1L), "Empty needle");
   _efree((haystack_dup) );
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  orig_needle = _estrndup(((*(needle)).value.str->val), ((*(needle)).value.str->len) );
  found = php_stristr(haystack_dup, orig_needle, haystack->len, (*(needle)).value.str->len);
  _efree((orig_needle) );
 } else {
  if (php_needle_char(needle, needle_char ) != SUCCESS) {
   _efree((haystack_dup) );
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  needle_char[1] = 0;

  found = php_stristr(haystack_dup, needle_char, haystack->len, 1);
 }

 if (found) {
  found_offset = found - haystack_dup;
  if (part) {
   do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(haystack->val, found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
  } else {
   do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(haystack->val + found_offset, haystack->len - found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
  }
 } else {
  do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0);
 }

 _efree((haystack_dup) );
}




void zif_strstr(zend_uint param_count, zval *return_value )
{
 zval *needle;
 zend_string *haystack;
 char *found = ((void*)0);
 char needle_char[2];
 zend_int_t found_offset;
 zend_bool part = 0;

 if (zend_parse_parameters((param_count) , "Sz|b", &haystack, &needle, &part) == FAILURE) {
  return;
 }

 if (zval_get_type(&(*(needle))) == 6) {
  if (!(*(needle)).value.str->len) {
   php_error_docref0(((void*)0) , (1<<1L), "Empty needle");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }

  found = (char*)zend_memnstr(haystack->val, (*(needle)).value.str->val, (*(needle)).value.str->len, haystack->val + haystack->len);
 } else {
  if (php_needle_char(needle, needle_char ) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  needle_char[1] = 0;

  found = (char*)zend_memnstr(haystack->val, needle_char, 1, haystack->val + haystack->len);
 }

 if (found) {
  found_offset = found - haystack->val;
  if (part) {
   { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(haystack->val, found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
  } else {
   { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(found, haystack->len - found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
  }
 }
 { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
}
# 1800 "ext/standard/string.c"
void zif_strpos(zend_uint param_count, zval *return_value )
{
 zval *needle;
 zend_string *haystack;
 char *found = ((void*)0);
 char needle_char[2];
 zend_int_t offset = 0;






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &haystack, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &needle, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &needle, 0); }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_int(_arg, &offset, &_dummy, 0, 0))), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (offset < 0 || offset > haystack->len) {
  php_error_docref0(((void*)0) , (1<<1L), "Offset not contained in string");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (zval_get_type(&(*(needle))) == 6) {
  if (!(*(needle)).value.str->len) {
   php_error_docref0(((void*)0) , (1<<1L), "Empty needle");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }

  found = (char*)zend_memnstr(haystack->val + offset,
                   (*(needle)).value.str->val,
                   (*(needle)).value.str->len,
                   haystack->val + haystack->len);
 } else {
  if (php_needle_char(needle, needle_char ) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  needle_char[1] = 0;

  found = (char*)zend_memnstr(haystack->val + offset,
       needle_char,
       1,
                      haystack->val + haystack->len);
 }

 if (found) {
  { { zval *__z = (return_value); (*(__z)).value.lval = found - haystack->val; (*(__z)).u1.type_info = 4; }; return; };
 } else {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }
}




void zif_stripos(zend_uint param_count, zval *return_value )
{
 char *found = ((void*)0);
 zend_string *haystack;
 zend_int_t offset = 0;
 char *needle_dup = ((void*)0), *haystack_dup;
 char needle_char[2];
 zval *needle;

 if (zend_parse_parameters((param_count) , "Sz|i", &haystack, &needle, &offset) == FAILURE) {
  return;
 }

 if (offset < 0 || offset > haystack->len) {
  php_error_docref0(((void*)0) , (1<<1L), "Offset not contained in string");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (haystack->len == 0) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 haystack_dup = _estrndup((haystack->val), (haystack->len) );
 php_strtolower(haystack_dup, haystack->len);

 if (zval_get_type(&(*(needle))) == 6) {
  if ((*(needle)).value.str->len == 0 || (*(needle)).value.str->len > haystack->len) {
   _efree((haystack_dup) );
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }

  needle_dup = _estrndup(((*(needle)).value.str->val), ((*(needle)).value.str->len) );
  php_strtolower(needle_dup, (*(needle)).value.str->len);
  found = (char*)zend_memnstr(haystack_dup + offset, needle_dup, (*(needle)).value.str->len, haystack_dup + haystack->len);
 } else {
  if (php_needle_char(needle, needle_char ) != SUCCESS) {
   _efree((haystack_dup) );
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  needle_char[0] = (__extension__ ({ int __res; if (sizeof (needle_char[0]) > 1) { if (__builtin_constant_p (needle_char[0])) { int __c = (needle_char[0]); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (needle_char[0]); } else __res = (*__ctype_tolower_loc ())[(int) (needle_char[0])]; __res; }));
  needle_char[1] = '\0';
  found = (char*)zend_memnstr(haystack_dup + offset,
       needle_char,
       sizeof(needle_char) - 1,
       haystack_dup + haystack->len);
 }

 _efree((haystack_dup) );
 if (needle_dup) {
  _efree((needle_dup) );
 }

 if (found) {
  { { zval *__z = (return_value); (*(__z)).value.lval = found - haystack_dup; (*(__z)).u1.type_info = 4; }; return; };
 } else {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }
}




void zif_strrpos(zend_uint param_count, zval *return_value )
{
 zval *zneedle;
 char *needle;
 zend_string *haystack;
 zend_size_t needle_len;
 zend_int_t offset = 0;
 char *p, *e, ord_needle[2];






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &haystack, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &zneedle, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &zneedle, 0); }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_int(_arg, &offset, &_dummy, 0, 0))), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; }; } } while (0);


 if (zval_get_type(&(*(zneedle))) == 6) {
  needle = (*(zneedle)).value.str->val;
  needle_len = (*(zneedle)).value.str->len;
 } else {
  if (php_needle_char(zneedle, ord_needle ) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  ord_needle[1] = '\0';
  needle = ord_needle;
  needle_len = 1;
 }

 if ((haystack->len == 0) || (needle_len == 0)) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (offset >= 0) {
  if (offset > haystack->len) {
   php_error_docref0(((void*)0) , (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  p = haystack->val + offset;
  e = haystack->val + haystack->len - needle_len;
 } else {
  if (offset < -2147483647 || -offset > haystack->len) {
   php_error_docref0(((void*)0) , (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }

  p = haystack->val;
  if (needle_len > -offset) {
   e = haystack->val + haystack->len - needle_len;
  } else {
   e = haystack->val + haystack->len + offset;
  }
 }

 if (needle_len == 1) {

  while (e >= p) {
   if (*e == *needle) {
    { { zval *__z = (return_value); (*(__z)).value.lval = e - p + (offset > 0 ? offset : 0); (*(__z)).u1.type_info = 4; }; return; };
   }
   e--;
  }
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 while (e >= p) {
  if (memcmp(e, needle, needle_len) == 0) {
   { { zval *__z = (return_value); (*(__z)).value.lval = e - p + (offset > 0 ? offset : 0); (*(__z)).u1.type_info = 4; }; return; };
  }
  e--;
 }

 { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
}




void zif_strripos(zend_uint param_count, zval *return_value )
{
 zval *zneedle;
 char *needle;
 zend_string *haystack;
 zend_size_t needle_len;
 zend_int_t offset = 0;
 char *p, *e, ord_needle[2];
 char *needle_dup, *haystack_dup;

 if (zend_parse_parameters((param_count) , "Sz|i", &haystack, &zneedle, &offset) == FAILURE) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (zval_get_type(&(*(zneedle))) == 6) {
  needle = (*(zneedle)).value.str->val;
  needle_len = (*(zneedle)).value.str->len;
 } else {
  if (php_needle_char(zneedle, ord_needle ) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  ord_needle[1] = '\0';
  needle = ord_needle;
  needle_len = 1;
 }

 if ((haystack->len == 0) || (needle_len == 0)) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (needle_len == 1) {


  if (offset >= 0) {
   if (offset > haystack->len) {
    php_error_docref0(((void*)0) , (1<<1L), "Offset is greater than the length of haystack string");
    { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
   }
   p = haystack->val + offset;
   e = haystack->val + haystack->len - 1;
  } else {
   p = haystack->val;
   if (offset < -2147483647 || -offset > haystack->len) {
    php_error_docref0(((void*)0) , (1<<1L), "Offset is greater than the length of haystack string");
    { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
   }
   e = haystack->val + haystack->len + offset;
  }

  *ord_needle = (__extension__ ({ int __res; if (sizeof (*needle) > 1) { if (__builtin_constant_p (*needle)) { int __c = (*needle); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*needle); } else __res = (*__ctype_tolower_loc ())[(int) (*needle)]; __res; }));
  while (e >= p) {
   if ((__extension__ ({ int __res; if (sizeof (*e) > 1) { if (__builtin_constant_p (*e)) { int __c = (*e); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*e); } else __res = (*__ctype_tolower_loc ())[(int) (*e)]; __res; })) == *ord_needle) {
    { { zval *__z = (return_value); (*(__z)).value.lval = e - p + (offset > 0 ? offset : 0); (*(__z)).u1.type_info = 4; }; return; };
   }
   e--;
  }
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 needle_dup = _estrndup((needle), (needle_len) );
 php_strtolower(needle_dup, needle_len);
 haystack_dup = _estrndup((haystack->val), (haystack->len) );
 php_strtolower(haystack_dup, haystack->len);

 if (offset >= 0) {
  if (offset > haystack->len) {
   _efree((needle_dup) );
   _efree((haystack_dup) );
   php_error_docref0(((void*)0) , (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  p = haystack_dup + offset;
  e = haystack_dup + haystack->len - needle_len;
 } else {
  if (offset < -2147483647 || -offset > haystack->len) {
   _efree((needle_dup) );
   _efree((haystack_dup) );
   php_error_docref0(((void*)0) , (1<<1L), "Offset is greater than the length of haystack string");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  p = haystack_dup;
  if (needle_len > -offset) {
   e = haystack_dup + haystack->len - needle_len;
  } else {
   e = haystack_dup + haystack->len + offset;
  }
 }

 while (e >= p) {
  if (memcmp(e, needle_dup, needle_len) == 0) {
   _efree((haystack_dup) );
   _efree((needle_dup) );
   { { zval *__z = (return_value); (*(__z)).value.lval = e - p + (offset > 0 ? offset : 0); (*(__z)).u1.type_info = 4; }; return; };
  }
  e--;
 }

 _efree((haystack_dup) );
 _efree((needle_dup) );
 { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
}




void zif_strrchr(zend_uint param_count, zval *return_value )
{
 zval *needle;
 zend_string *haystack;
 const char *found = ((void*)0);
 zend_int_t found_offset;

 if (zend_parse_parameters((param_count) , "Sz", &haystack, &needle) == FAILURE) {
  return;
 }

 if (zval_get_type(&(*(needle))) == 6) {
  found = zend_memrchr(haystack->val, *(*(needle)).value.str->val, haystack->len);
 } else {
  char needle_chr;
  if (php_needle_char(needle, &needle_chr ) != SUCCESS) {
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }

  found = zend_memrchr(haystack->val, needle_chr, haystack->len);
 }

 if (found) {
  found_offset = found - haystack->val;
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(found, haystack->len - found_offset, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
 } else {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }
}




static zend_string *php_chunk_split(char *src, zend_size_t srclen, char *end, zend_size_t endlen, zend_size_t chunklen)
{
 char *p, *q;
 zend_size_t chunks;
 zend_size_t restlen;
 zend_size_t out_len;
 zend_string *dest;

 chunks = srclen / chunklen;
 restlen = srclen - chunks * chunklen;

 if (chunks > 2147483647 - 1) {
  return ((void*)0);
 }
 out_len = chunks + 1;
 if (endlen !=0 && out_len > 2147483647/endlen) {
  return ((void*)0);
 }
 out_len *= endlen;
 if (out_len > 2147483647 - srclen - 1) {
  return ((void*)0);
 }
 out_len += srclen + 1;

 dest = zend_str_alloc(out_len * sizeof(char), 0);

 for (p = src, q = dest->val; p < (src + srclen - chunklen + 1); ) {
  memcpy(q, p, chunklen);
  q += chunklen;
  memcpy(q, end, endlen);
  q += endlen;
  p += chunklen;
 }

 if (restlen) {
  memcpy(q, p, restlen);
  q += restlen;
  memcpy(q, end, endlen);
  q += endlen;
 }

 *q = '\0';
 dest->len = q - dest->val;

 return dest;
}




void zif_chunk_split(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 char *end = "\r\n";
 int endlen = 2;
 zend_int_t chunklen = 76;
 zend_string *result;

 if (zend_parse_parameters((param_count) , "S|is", &str, &chunklen, &end, &endlen) == FAILURE) {
  return;
 }

 if (chunklen <= 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Chunk length should be greater than zero");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (chunklen > str->len) {

  result = zend_str_alloc(endlen + str->len, 0);
  memcpy(result->val, str->val, str->len);
  memcpy(result->val + str->len, end, endlen);
  result->val[result->len] = '\0';
  { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
 }

 if (!str->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 result = php_chunk_split(str->val, str->len, end, endlen, chunklen);

 if (result) {
  { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
 } else {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }
}




void zif_substr(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 zend_int_t l = 0, f;
 int argc = (param_count);






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_int(_arg, &f, &_dummy, 0, 0))), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_int(_arg, &l, &_dummy, 0, 0))), 0)) { _expected_type = Z_EXPECTED_LONG; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (argc > 2) {
  if ((l < 0 && -l > str->len)) {
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  } else if (l > (zend_int_t)str->len) {
   l = str->len;
  }
 } else {
  l = str->len;
 }

 if (f > (zend_int_t)str->len) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 } else if (f < 0 && -f > str->len) {
  f = 0;
 }

 if (l < 0 && (l + (zend_int_t)str->len - f) < 0) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }




 if (f < 0) {
  f = (zend_int_t)str->len + f;
  if (f < 0) {
   f = 0;
  }
 }




 if (l < 0) {
  l = ((zend_int_t)str->len - f) + l;
  if (l < 0) {
   l = 0;
  }
 }

 if (f >= (zend_int_t)str->len) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if ((f + l) > (zend_int_t)str->len) {
  l = str->len - f;
 }

 { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val + f, l, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
}




void zif_substr_replace(zend_uint param_count, zval *return_value )
{
 zval *str;
 zval *from;
 zval *len = ((void*)0);
 zval *repl;
 zend_int_t l = 0;
 zend_int_t f;
 int argc = (param_count);
 zend_string *result;

 HashPosition pos_from, pos_repl, pos_len;
 zval *tmp_str = ((void*)0), *tmp_from = ((void*)0), *tmp_repl = ((void*)0), *tmp_len= ((void*)0);

 if (zend_parse_parameters((param_count) , "zzz|z/", &str, &repl, &from, &len) == FAILURE) {
  return;
 }

 if (zval_get_type(&(*(str))) != 7) {
  if (zval_get_type(&(*(str)))!=6) { do { zval *_zv = (str); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(str))) != 6) { _convert_to_string((str) ); }; };
 }
 if (zval_get_type(&(*(repl))) != 7) {
  if (zval_get_type(&(*(repl)))!=6) { do { zval *_zv = (repl); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(repl))) != 6) { _convert_to_string((repl) ); }; };
 }
 if (zval_get_type(&(*(from))) != 7) {
  if (zval_get_type(&(*(from)))!=4) { do { zval *_zv = (from); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); convert_to_int(from); };
 }

 if (argc > 3) {
  if (zval_get_type(&(*(len))) != 7) {
   l = _zval_get_int((len) );
  }
 } else {
  if (zval_get_type(&(*(str))) != 7) {
   l = (*(str)).value.str->len;
  }
 }

 if (zval_get_type(&(*(str))) == 6) {
  if (
   (argc == 3 && zval_get_type(&(*(from))) == 7) ||
   (argc == 4 && zval_get_type(&(*(from))) != zval_get_type(&(*(len))))
  ) {
   php_error_docref0(((void*)0) , (1<<1L), "'from' and 'len' should be of same type - numerical or array ");
   { do { zval *__z = (return_value); zend_string *__s = (zend_str_copy((*(str)).value.str)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
  }
  if (argc == 4 && zval_get_type(&(*(from))) == 7) {
   if (((&(*(from)).value.arr->ht))->nNumOfElements != ((&(*(len)).value.arr->ht))->nNumOfElements) {
    php_error_docref0(((void*)0) , (1<<1L), "'from' and 'len' should have the same number of elements");
    { do { zval *__z = (return_value); zend_string *__s = (zend_str_copy((*(str)).value.str)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
   }
  }
 }

 if (zval_get_type(&(*(str))) != 7) {
  if (zval_get_type(&(*(from))) != 7) {
   zend_size_t repl_len = 0;

   f = (*(from)).value.lval;




   if (f < 0) {
    f = (*(str)).value.str->len + f;
    if (f < 0) {
     f = 0;
    }
   } else if (f > (*(str)).value.str->len) {
    f = (*(str)).value.str->len;
   }



   if (l < 0) {
    l = ((*(str)).value.str->len - f) + l;
    if (l < 0) {
     l = 0;
    }
   }

   if (f > (*(str)).value.str->len || (f < 0 && -f > (*(str)).value.str->len)) {
    { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
   } else if (l > (*(str)).value.str->len || (l < 0 && -l > (*(str)).value.str->len)) {
    l = (*(str)).value.str->len;
   }

   if ((f + l) > (*(str)).value.str->len) {
    l = (*(str)).value.str->len - f;
   }
   if (zval_get_type(&(*(repl))) == 7) {
    zend_hash_internal_pointer_reset_ex((&(*(repl)).value.arr->ht), &pos_repl);
    if (((void*)0) != (tmp_repl = zend_hash_get_current_data_ex((&(*(repl)).value.arr->ht), &pos_repl))) {
     if (zval_get_type(&(*(tmp_repl)))!=6) { do { zval *_zv = (tmp_repl); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(tmp_repl))) != 6) { _convert_to_string((tmp_repl) ); }; };
     repl_len = (*(tmp_repl)).value.str->len;
    }
   } else {
    repl_len = (*(repl)).value.str->len;
   }

   result = zend_str_alloc((*(str)).value.str->len - l + repl_len, 0);

   memcpy(result->val, (*(str)).value.str->val, f);
   if (repl_len) {
    memcpy((result->val + f), (zval_get_type(&(*(repl))) == 7 ? (*(tmp_repl)).value.str->val : (*(repl)).value.str->val), repl_len);
   }
   memcpy((result->val + f + repl_len), (*(str)).value.str->val + f + l, (*(str)).value.str->len - f - l);
   result->val[result->len] = '\0';
   { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Functionality of 'from' and 'len' as arrays is not implemented");
   { do { zval *__z = (return_value); zend_string *__s = (zend_str_copy((*(str)).value.str)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
  }
 } else {
  zend_string *str_index = ((void*)0);
  zend_size_t result_len;
  zend_uint_t num_index;

  _array_init((return_value), 0 );

  if (zval_get_type(&(*(from))) == 7) {
   zend_hash_internal_pointer_reset_ex((&(*(from)).value.arr->ht), &pos_from);
  }

  if (argc > 3 && zval_get_type(&(*(len))) == 7) {
   zend_hash_internal_pointer_reset_ex((&(*(len)).value.arr->ht), &pos_len);
  }

  if (zval_get_type(&(*(repl))) == 7) {
   zend_hash_internal_pointer_reset_ex((&(*(repl)).value.arr->ht), &pos_repl);
  }

  do { uint _idx; for (_idx = 0; _idx < ((&(*(str)).value.arr->ht))->nNumUsed; _idx++) { Bucket *_p = ((&(*(str)).value.arr->ht))->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; num_index = _p->h; str_index = _p->key; tmp_str = _z; {
   zval *orig_str;
   zval dummy;

   if ((zval_get_type(&(*(tmp_str))) == 10)) {

    do { zval *__z1 = (&dummy); zval *__z2 = (&(*(tmp_str)).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
    if (zval_get_type(&(*(&dummy))) != 6) { _convert_to_string((&dummy) ); };
    orig_str = &dummy;
   } else if (zval_get_type(&(*(tmp_str))) != 6) {
    do { zval *__z1 = (&dummy); zval *__z2 = (tmp_str); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
    if (zval_get_type(&(*(&dummy))) != 6) { _convert_to_string((&dummy) ); };
    orig_str = &dummy;
   } else {
    orig_str = tmp_str;
   }





   if (zval_get_type(&(*(from))) == 7) {
    if (((void*)0) != (tmp_from = zend_hash_get_current_data_ex((&(*(from)).value.arr->ht), &pos_from))) {
     f = _zval_get_int((tmp_from) );

     if (f < 0) {
      f = (*(orig_str)).value.str->len + f;
      if (f < 0) {
       f = 0;
      }
     } else if (f > (*(orig_str)).value.str->len) {
      f = (*(orig_str)).value.str->len;
     }
     zend_hash_move_forward_ex((&(*(from)).value.arr->ht), &pos_from);
    } else {
     f = 0;
    }
   } else {
    f = (*(from)).value.lval;
    if (f < 0) {
     f = (*(orig_str)).value.str->len + f;
     if (f < 0) {
      f = 0;
     }
    } else if (f > (*(orig_str)).value.str->len) {
     f = (*(orig_str)).value.str->len;
    }
   }

   if (argc > 3 && zval_get_type(&(*(len))) == 7) {
    if (((void*)0) != (tmp_len = zend_hash_get_current_data_ex((&(*(len)).value.arr->ht), &pos_len))) {
     l = _zval_get_int((tmp_len) );
     zend_hash_move_forward_ex((&(*(len)).value.arr->ht), &pos_len);
    } else {
     l = (*(orig_str)).value.str->len;
    }
   } else if (argc > 3) {
    l = (*(len)).value.lval;
   } else {
    l = (*(orig_str)).value.str->len;
   }

   if (l < 0) {
    l = ((*(orig_str)).value.str->len - f) + l;
    if (l < 0) {
     l = 0;
    }
   }

   if ((f + l) > (*(orig_str)).value.str->len) {
    l = (*(orig_str)).value.str->len - f;
   }

   result_len = (*(orig_str)).value.str->len - l;

   if (zval_get_type(&(*(repl))) == 7) {
    if (((void*)0) != (tmp_repl = zend_hash_get_current_data_ex((&(*(repl)).value.arr->ht), &pos_repl))) {
     zval *repl_str;
     zval zrepl;

     do { if (__builtin_expect(!(!((zval_get_type(&(*(tmp_repl))) == 10))), 0)) { (tmp_repl) = &(*(tmp_repl)).value.ref->val; } } while (0);
     if (zval_get_type(&(*(tmp_repl))) != 6) {
      do { zval *__z1 = (&zrepl); zval *__z2 = (tmp_repl); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
      if (zval_get_type(&(*(&zrepl))) != 6) { _convert_to_string((&zrepl) ); };
      repl_str = &zrepl;
     } else {
      repl_str = tmp_repl;
     }
# 2536 "ext/standard/string.c"
     result_len += (*(repl_str)).value.str->len;
     zend_hash_move_forward_ex((&(*(repl)).value.arr->ht), &pos_repl);
     result = zend_str_alloc(result_len, 0);

     memcpy(result->val, (*(orig_str)).value.str->val, f);
     memcpy((result->val + f), (*(repl_str)).value.str->val, (*(repl_str)).value.str->len);
     memcpy((result->val + f + (*(repl_str)).value.str->len), (*(orig_str)).value.str->val + f + l, (*(orig_str)).value.str->len - f - l);
     if(zval_get_type(&(*(tmp_repl))) != 6) {
      _zval_dtor((repl_str) );
     }
    } else {
     result = zend_str_alloc(result_len, 0);

     memcpy(result->val, (*(orig_str)).value.str->val, f);
     memcpy((result->val + f), (*(orig_str)).value.str->val + f + l, (*(orig_str)).value.str->len - f - l);
    }
   } else {
    result_len += (*(repl)).value.str->len;

    result = zend_str_alloc(result_len, 0);

    memcpy(result->val, (*(orig_str)).value.str->val, f);
    memcpy((result->val + f), (*(repl)).value.str->val, (*(repl)).value.str->len);
    memcpy((result->val + f + (*(repl)).value.str->len), (*(orig_str)).value.str->val + f + l, (*(orig_str)).value.str->len - f - l);
   }

   result->val[result->len] = '\0';

   if (str_index) {
    zval tmp;

    do { zval *__z = (&tmp); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
    zend_symtable_update((&(*(return_value)).value.arr->ht), str_index, &tmp);
   } else {
    add_index_str(return_value, num_index, result);
   }

   if(zval_get_type(&(*(tmp_str))) != 6) {
    _zval_dtor((orig_str) );
   } else {

   }
  } } } while (0);
 }
}




void zif_quotemeta(zend_uint param_count, zval *return_value )
{
 zend_string *old;
 char *old_end;
 char *p, *q;
 char c;
 zend_string *str;

 if (zend_parse_parameters((param_count) , "S", &old) == FAILURE) {
  return;
 }

 old_end = old->val + old->len;

 if (old->val == old_end) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 str = zend_str_alloc(2 * old->len, 0);

 for (p = old->val, q = str->val; p != old_end; p++) {
  c = *p;
  switch (c) {
   case '.':
   case '\\':
   case '+':
   case '*':
   case '?':
   case '[':
   case '^':
   case ']':
   case '$':
   case '(':
   case ')':
    *q++ = '\\';

   default:
    *q++ = c;
  }
 }

 *q = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (zend_str_realloc(str, q - str->val, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_ord(zend_uint param_count, zval *return_value )
{
 char *str;
 int str_len;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_string(_arg, &str, &str_len, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 { { zval *__z = (return_value); (*(__z)).value.lval = (unsigned char) str[0]; (*(__z)).u1.type_info = 4; }; return; };
}




void zif_chr(zend_uint param_count, zval *return_value )
{
 zend_int_t c;
 char temp[2];

 if ((param_count) != 1) {
  { zend_wrong_param_count(); return; };
 }

 if (zend_parse_parameters_ex((1<<1), (param_count) , "i", &c) == FAILURE) {
  c = 0;
 }

 temp[0] = (char)c;
 temp[1] = '\0';

 { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(temp, 1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
}




static void php_ucfirst(char *str)
{
 register char *r;
 r = str;
 *r = (__extension__ ({ int __res; if (sizeof ((unsigned char) *r) > 1) { if (__builtin_constant_p ((unsigned char) *r)) { int __c = ((unsigned char) *r); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper ((unsigned char) *r); } else __res = (*__ctype_toupper_loc ())[(int) ((unsigned char) *r)]; __res; }));
}




void zif_ucfirst(zend_uint param_count, zval *return_value )
{
 zend_string *str;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (!str->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 php_ucfirst((*(return_value)).value.str->val);
}




static void php_lcfirst(char *str)
{
 register char *r;
 r = str;
 *r = (__extension__ ({ int __res; if (sizeof ((unsigned char) *r) > 1) { if (__builtin_constant_p ((unsigned char) *r)) { int __c = ((unsigned char) *r); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower ((unsigned char) *r); } else __res = (*__ctype_tolower_loc ())[(int) ((unsigned char) *r)]; __res; }));
}




void zif_lcfirst(zend_uint param_count, zval *return_value )
{
 zend_string *str;

 if (zend_parse_parameters((param_count) , "S", &str) == FAILURE) {
  return;
 }

 if (!str->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 php_lcfirst((*(return_value)).value.str->val);
}




void zif_ucwords(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 char *delims = " \t\r\n\f\v";
 register char *r, *r_end;
 int delims_len = 6;
 char mask[256];






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (2); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_string(_arg, &delims, &delims_len, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (!str->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 php_charmask((unsigned char *)delims, delims_len, mask );

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 r = (*(return_value)).value.str->val;

 *r = (__extension__ ({ int __res; if (sizeof ((unsigned char) *r) > 1) { if (__builtin_constant_p ((unsigned char) *r)) { int __c = ((unsigned char) *r); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper ((unsigned char) *r); } else __res = (*__ctype_toupper_loc ())[(int) ((unsigned char) *r)]; __res; }));
 for (r_end = r + (*(return_value)).value.str->len - 1; r < r_end; ) {
  if (mask[(unsigned char)*r++]) {
   *r = (__extension__ ({ int __res; if (sizeof ((unsigned char) *r) > 1) { if (__builtin_constant_p ((unsigned char) *r)) { int __c = ((unsigned char) *r); __res = __c < -128 || __c > 255 ? __c : (*__ctype_toupper_loc ())[__c]; } else __res = toupper ((unsigned char) *r); } else __res = (*__ctype_toupper_loc ())[(int) ((unsigned char) *r)]; __res; }));
  }
 }
}




__attribute__ ((visibility("default"))) char *php_strtr(char *str, zend_size_t len, char *str_from, char *str_to, zend_size_t trlen)
{
 zend_size_t i;
 unsigned char xlat[256];

 if ((trlen < 1) || (len < 1)) {
  return str;
 }

 for (i = 0; i < 256; xlat[i] = i, i++);

 for (i = 0; i < trlen; i++) {
  xlat[(unsigned char) str_from[i]] = str_to[i];
 }

 for (i = 0; i < len; i++) {
  str[i] = xlat[(unsigned char) str[i]];
 }

 return str;
}


static int php_strtr_key_compare(const void *a, const void *b )
{
 Bucket *f = (Bucket *) a;
 Bucket *s = (Bucket *) b;

 return f->h > s->h ? -1 : 1;
}



static void php_strtr_array(zval *return_value, char *str, zend_size_t slen, HashTable *pats )
{
 zend_uint_t num_key;
 zend_string *str_key;
 zend_size_t len, pos, found;
 int num_keys = 0;
 zend_size_t minlen = 128*1024;
 zend_size_t maxlen = 0;
 HashTable str_hash, num_hash;
 zval *entry, tmp, dummy;
 char *key;
 smart_str result = {0};


 do { (*(&dummy)).u1.type_info = 1; } while (0);
 _zend_hash_init((&num_hash), (8), (((void*)0)), (0) );


 do { uint _idx; for (_idx = 0; _idx < (pats)->nNumUsed; _idx++) { Bucket *_p = (pats)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; num_key = _p->h; str_key = _p->key; {
  if (__builtin_expect(!(!(!str_key)), 0)) {
   num_keys = 1;
  } else {
   len = str_key->len;
   if (__builtin_expect(!(!(len < 1)), 0)) {
    { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
   } else if (__builtin_expect(!(!(len > slen)), 0)) {

    continue;
   }
   if (len > maxlen) {
    maxlen = len;
   }
   if (len < minlen) {
    minlen = len;
   }

   _zend_hash_index_add(&num_hash, len, &dummy );
  }
 } } } while (0);

 if (num_keys) {

  _zend_hash_init((&str_hash), ((pats)->nNumOfElements), (((void*)0)), (0) );
  do { uint _idx; for (_idx = 0; _idx < (pats)->nNumUsed; _idx++) { Bucket *_p = (pats)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; num_key = _p->h; str_key = _p->key; entry = _z; {
   if (__builtin_expect(!(!(!str_key)), 0)) {
    { zval *__z = (&tmp); (*(__z)).value.lval = num_key; (*(__z)).u1.type_info = 4; };
    if (zval_get_type(&(*(&tmp))) != 6) { _convert_to_string((&tmp) ); };
    str_key = (tmp).value.str;
    len = str_key->len;
    if (__builtin_expect(!(!(len > slen)), 0)) {

     _zval_dtor((&tmp) );
     continue;
    }
    if (len > maxlen) {
     maxlen = len;
    }
    if (len < minlen) {
     minlen = len;
    }

    _zend_hash_index_add(&num_hash, len, &dummy );
   } else {
    len = str_key->len;
    if (__builtin_expect(!(!(len > slen)), 0)) {

     continue;
    }
   }
   _zend_hash_add(&str_hash, str_key, entry );
   if (str_key == (tmp).value.str) {
    _zval_dtor((&tmp) );
   }
  } } } while (0);
  pats = &str_hash;
 }

 if (__builtin_expect(!(!(minlen > maxlen)), 0)) {

  if (pats == &str_hash) {
   zend_hash_destroy(&str_hash);
  }
  zend_hash_destroy(&num_hash);
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str, slen, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
 }


 len = (&num_hash)->nNumOfElements;
 if ((maxlen - (minlen - 1) - len > 0) &&

  zend_hash_sort(&num_hash, zend_qsort, php_strtr_key_compare, 0 ) == SUCCESS) {

  pos = 0;
  while (pos <= slen - minlen) {
   found = 0;
   key = str + pos;
   do { uint _idx; for (_idx = 0; _idx < (&num_hash)->nNumUsed; _idx++) { Bucket *_p = (&num_hash)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; len = _p->h; {
    if (len > slen - pos) continue;
    entry = zend_hash_str_find(pats, key, len);
    if (entry != ((void*)0)) {
     zend_string *str = _zval_get_string((entry) );
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&result)); do { if (!(__dest)->s) { __nl = (((str->len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((str->len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, ((str->val)), ((str->len))); __dest->s->len = __nl; } while (0);
     pos += len;
     found = 1;
     zend_str_release(str);
     break;
    }
   } } } while (0);
   if (!found) {
    do { register size_t __nl; do { if (!(((&result)))->s) { __nl = (1); (((&result)))->a = __nl < 78 ? 78 : __nl + 128; (((&result)))->s = zend_str_alloc((((&result)))->a, ((0))); (((&result)))->s->len = 0; } else { __nl = (((&result)))->s->len + (1); if (__nl >= (((&result)))->a) { (((&result)))->a = __nl + 128; do { ((((&result))))->s = (((((0))))?__zend_realloc((((((&result))))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((((&result))))->a + 1)):_erealloc(((((((&result))))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((((&result))))->a + 1)), 0 )); } while (0); } } } while (0); ((&result))->s->len = __nl; ((unsigned char *) ((&result))->s->val)[((&result))->s->len - 1] = ((str[pos++])); } while (0);
   }
  }
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&result)); do { if (!(__dest)->s) { __nl = (((slen - pos))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((slen - pos))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, ((str + pos)), ((slen - pos))); __dest->s->len = __nl; } while (0);
 } else {

  pos = 0;
  while (pos <= slen - minlen) {
   if (maxlen > slen - pos) {
    maxlen = slen - pos;
   }
   found = 0;
   key = str + pos;
   for (len = maxlen; len >= minlen; len--) {
    entry = zend_hash_str_find(pats, key, len);
    if (entry != ((void*)0)) {
     zend_string *str = _zval_get_string((entry) );
     do { register size_t __nl; smart_str *__dest = (smart_str *) ((&result)); do { if (!(__dest)->s) { __nl = (((str->len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((str->len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, ((str->val)), ((str->len))); __dest->s->len = __nl; } while (0);
     pos += len;
     found = 1;
     zend_str_release(str);
     break;
    }
   }
   if (!found) {
    do { register size_t __nl; do { if (!(((&result)))->s) { __nl = (1); (((&result)))->a = __nl < 78 ? 78 : __nl + 128; (((&result)))->s = zend_str_alloc((((&result)))->a, ((0))); (((&result)))->s->len = 0; } else { __nl = (((&result)))->s->len + (1); if (__nl >= (((&result)))->a) { (((&result)))->a = __nl + 128; do { ((((&result))))->s = (((((0))))?__zend_realloc((((((&result))))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((((&result))))->a + 1)):_erealloc(((((((&result))))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((((&result))))->a + 1)), 0 )); } while (0); } } } while (0); ((&result))->s->len = __nl; ((unsigned char *) ((&result))->s->val)[((&result))->s->len - 1] = ((str[pos++])); } while (0);
   }
  }
  do { register size_t __nl; smart_str *__dest = (smart_str *) ((&result)); do { if (!(__dest)->s) { __nl = (((slen - pos))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->s = zend_str_alloc((__dest)->a, ((0))); (__dest)->s->len = 0; } else { __nl = (__dest)->s->len + (((slen - pos))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; do { ((__dest))->s = (((((0))))?__zend_realloc((((__dest))->s), (((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)):_erealloc(((((__dest))->s)), ((((zend_int_t) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + ((__dest))->a + 1)), 0 )); } while (0); } } } while (0); memcpy(__dest->s->val + __dest->s->len, ((str + pos)), ((slen - pos))); __dest->s->len = __nl; } while (0);
 }

 if (pats == &str_hash) {
  zend_hash_destroy(&str_hash);
 }
 zend_hash_destroy(&num_hash);
 do { if ((&result)->s) { (&result)->s->val[(&result)->s->len] = '\0'; } } while (0);
 { do { zval *__z = (return_value); zend_string *__s = (result.s); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_strtr(zend_uint param_count, zval *return_value )
{
 zval *from;
 char *str, *to = ((void*)0);
 int str_len, to_len = 0;
 int ac = (param_count);






 do { const int _flags = (0); int _min_num_args = (2); int _max_num_args = (3); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_string(_arg, &str, &str_len, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &from, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &from, 0); }
  _optional = 1;
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_string(_arg, &to, &to_len, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (ac == 2 && zval_get_type(&(*(from))) != 7) {
  php_error_docref0(((void*)0) , (1<<1L), "The second argument is not an array");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }


 if (str_len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 if (ac == 2) {
  php_strtr_array(return_value, str, str_len, (zval_get_type(&(*(from)))==7 ? (&(*(from)).value.arr->ht) : ((zval_get_type(&(*(from)))==8 ? (*(from)).value.obj->handlers->get_properties((from) ) : ((void*)0)))) );
 } else {
  if (zval_get_type(&(*(from)))!=6) { do { zval *_zv = (from); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(from))) != 6) { _convert_to_string((from) ); }; };

  do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str, str_len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);

  php_strtr((*(return_value)).value.str->val,
      (*(return_value)).value.str->len,
      (*(from)).value.str->val,
      to,
      ((((*(from)).value.str->len)<(to_len))?((*(from)).value.str->len):(to_len)));

 }
}




void zif_strrev(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 char *e, *p;
 zend_string *n;

 if (zend_parse_parameters((param_count) , "S", &str) == FAILURE) {
  return;
 }

 n = zend_str_alloc(str->len, 0);
 p = n->val;

 e = str->val + str->len;

 while (--e>=str->val) {
  *p++ = *e;
 }

 *p = '\0';

 do { zval *__z = (return_value); zend_string *__s = (n); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
}




static void php_similar_str(const char *txt1, zend_size_t len1, const char *txt2, zend_size_t len2, zend_size_t *pos1, zend_size_t *pos2, zend_size_t *max)
{
 char *p, *q;
 char *end1 = (char *) txt1 + len1;
 char *end2 = (char *) txt2 + len2;
 zend_size_t l;

 *max = 0;
 for (p = (char *) txt1; p < end1; p++) {
  for (q = (char *) txt2; q < end2; q++) {
   for (l = 0; (p + l < end1) && (q + l < end2) && (p[l] == q[l]); l++);
   if (l > *max) {
    *max = l;
    *pos1 = p - txt1;
    *pos2 = q - txt2;
   }
  }
 }
}




static zend_size_t php_similar_char(const char *txt1, zend_size_t len1, const char *txt2, zend_size_t len2)
{
 zend_size_t sum;
 zend_size_t pos1 = 0, pos2 = 0, max;

 php_similar_str(txt1, len1, txt2, len2, &pos1, &pos2, &max);
 if ((sum = max)) {
  if (pos1 && pos2) {
   sum += php_similar_char(txt1, pos1,
         txt2, pos2);
  }
  if ((pos1 + max < len1) && (pos2 + max < len2)) {
   sum += php_similar_char(txt1 + pos1 + max, len1 - pos1 - max,
         txt2 + pos2 + max, len2 - pos2 - max);
  }
 }

 return sum;
}




void zif_similar_text(zend_uint param_count, zval *return_value )
{
 zend_string *t1, *t2;
 zval *percent = ((void*)0);
 int ac = (param_count);
 zend_size_t sim;

 if (zend_parse_parameters((param_count) , "SS|z/", &t1, &t2, &percent) == FAILURE) {
  return;
 }

 if (ac > 2) {
  if (zval_get_type(&(*(percent)))!=5) { do { zval *_zv = (percent); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); convert_to_double(percent); };
 }

 if (t1->len + t2->len == 0) {
  if (ac > 2) {
   (*(percent)).value.dval = 0;
  }

  { { zval *__z = (return_value); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; }; return; };
 }

 sim = php_similar_char(t1->val, t1->len, t2->val, t2->len);

 if (ac > 2) {
  (*(percent)).value.dval = sim * 200.0 / (t1->len + t2->len);
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = sim; (*(__z)).u1.type_info = 4; }; return; };
}





__attribute__ ((visibility("default"))) void php_stripslashes(char *str, zend_size_t *len )
{
 char *s, *t;
 zend_size_t l;

 if (len != ((void*)0)) {
  l = *len;
 } else {
  l = strlen(str);
 }
 s = str;
 t = str;

 while (l > 0) {
  if (*t == '\\') {
   t++;
   if (len != ((void*)0)) {
    (*len)--;
   }
   l--;
   if (l > 0) {
    if (*t == '0') {
     *s++='\0';
     t++;
    } else {
     *s++ = *t++;
    }
    l--;
   }
  } else {
   *s++ = *t++;
   l--;
  }
 }
 if (s != t) {
  *s = '\0';
 }
}




void zif_addcslashes(zend_uint param_count, zval *return_value )
{
 zend_string *str, *what;

 if (zend_parse_parameters((param_count) , "SS", &str, &what) == FAILURE) {
  return;
 }

 if (str->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 if (what->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
 }

 { do { zval *__z = (return_value); zend_string *__s = (php_addcslashes(str->val, str->len, 0, what->val, what->len )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_addslashes(zend_uint param_count, zval *return_value )
{
 zend_string *str;






 do { const int _flags = (0); int _min_num_args = (1); int _max_num_args = (1); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; if (__builtin_expect(!(!(!_z_param_str(_arg, &str, 0 ))), 0)) { _expected_type = Z_EXPECTED_STRING; error_code = 4; break; }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);


 if (str->len == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };
 }

 { do { zval *__z = (return_value); zend_string *__s = (php_addslashes(str->val, str->len, 0 )); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_stripcslashes(zend_uint param_count, zval *return_value )
{
 zend_string *str;

 if (zend_parse_parameters((param_count) , "S", &str) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 php_stripcslashes((*(return_value)).value.str->val, &(*(return_value)).value.str->len);
}




void zif_stripslashes(zend_uint param_count, zval *return_value )
{
 zend_string *str;

 if (zend_parse_parameters((param_count) , "S", &str) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 php_stripslashes((*(return_value)).value.str->val, &(*(return_value)).value.str->len );
}
# 3260 "ext/standard/string.c"
__attribute__ ((visibility("default"))) void php_stripcslashes(char *str, zend_size_t *len)
{
 char *source, *target, *end;
 zend_size_t nlen = *len, i;
 char numtmp[4];

 for (source=str, end=str+nlen, target=str; source < end; source++) {
  if (*source == '\\' && source+1 < end) {
   source++;
   switch (*source) {
    case 'n': *target++='\n'; nlen--; break;
    case 'r': *target++='\r'; nlen--; break;
    case 'a': *target++='\a'; nlen--; break;
    case 't': *target++='\t'; nlen--; break;
    case 'v': *target++='\v'; nlen--; break;
    case 'b': *target++='\b'; nlen--; break;
    case 'f': *target++='\f'; nlen--; break;
    case '\\': *target++='\\'; nlen--; break;
    case 'x':
     if (source+1 < end && ((*__ctype_b_loc ())[(int) (((int)(*(source+1))))] & (unsigned short int) _ISxdigit)) {
      numtmp[0] = *++source;
      if (source+1 < end && ((*__ctype_b_loc ())[(int) (((int)(*(source+1))))] & (unsigned short int) _ISxdigit)) {
       numtmp[1] = *++source;
       numtmp[2] = '\0';
       nlen-=3;
      } else {
       numtmp[1] = '\0';
       nlen-=2;
      }
      *target++=(char)strtol(numtmp, ((void*)0), 16);
      break;
     }

    default:
     i=0;
     while (source < end && *source >= '0' && *source <= '7' && i<3) {
      numtmp[i++] = *source++;
     }
     if (i) {
      numtmp[i]='\0';
      *target++=(char)strtol(numtmp, ((void*)0), 8);
      nlen-=i;
      source--;
     } else {
      *target++=*source;
      nlen--;
     }
   }
  } else {
   *target++=*source;
  }
 }

 if (nlen != 0) {
  *target='\0';
 }

 *len = nlen;
}




__attribute__ ((visibility("default"))) zend_string *php_addcslashes(const char *str, zend_size_t length, int should_free, char *what, zend_size_t wlength )
{
 char flags[256];
 char *source, *target;
 char *end;
 char c;
 zend_size_t newlen;
 zend_string *new_str = zend_str_alloc(4 * (length? length : (length = strlen(str))), 0);

 if (!wlength) {
  wlength = strlen(what);
 }

 php_charmask((unsigned char *)what, wlength, flags );

 for (source = (char*)str, end = source + length, target = new_str->val; source < end; source++) {
  c = *source;
  if (flags[(unsigned char)c]) {
   if ((unsigned char) c < 32 || (unsigned char) c > 126) {
    *target++ = '\\';
    switch (c) {
     case '\n': *target++ = 'n'; break;
     case '\t': *target++ = 't'; break;
     case '\r': *target++ = 'r'; break;
     case '\a': *target++ = 'a'; break;
     case '\v': *target++ = 'v'; break;
     case '\b': *target++ = 'b'; break;
     case '\f': *target++ = 'f'; break;
     default: target += php_sprintf(target, "%03o", (unsigned char) c);
    }
    continue;
   }
   *target++ = '\\';
  }
  *target++ = c;
 }
 *target = 0;
 newlen = target - new_str->val;
 if (newlen < length * 4) {
  new_str = zend_str_realloc(new_str, newlen, 0);
 }
 if (should_free) {
  _efree(((char*)str) );
 }
 return new_str;
}




__attribute__ ((visibility("default"))) zend_string *php_addslashes(char *str, zend_size_t length, int should_free )
{

 char *source, *target;
 char *end;
 zend_string *new_str;

 if (!str) {
  return (compiler_globals.empty_string);
 }

 new_str = zend_str_alloc(2 * (length ? length : (length = strlen(str))), 0);
 source = str;
 end = source + length;
 target = new_str->val;

 while (source < end) {
  switch (*source) {
   case '\0':
    *target++ = '\\';
    *target++ = '0';
    break;
   case '\'':
   case '\"':
   case '\\':
    *target++ = '\\';

   default:
    *target++ = *source;
    break;
  }

  source++;
 }

 *target = 0;
 if (should_free) {
  _efree((str) );
 }
 new_str = zend_str_realloc(new_str, target - new_str->val, 0);

 return new_str;
}
# 3426 "ext/standard/string.c"
__attribute__ ((visibility("default"))) zend_size_t php_char_to_str_ex(char *str, zend_size_t len, char from, char *to, zend_size_t to_len, zval *result, int case_sensitivity, zend_size_t *replace_count)
{
 zend_size_t char_count = 0;
 zend_size_t replaced = 0;
 char *source, *target, *tmp, *source_end=str+len, *tmp_end = ((void*)0);

 if (case_sensitivity) {
  char *p = str, *e = p + len;
  while ((p = memchr(p, from, (e - p)))) {
   char_count++;
   p++;
  }
 } else {
  for (source = str; source < source_end; source++) {
   if ((__extension__ ({ int __res; if (sizeof (*source) > 1) { if (__builtin_constant_p (*source)) { int __c = (*source); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*source); } else __res = (*__ctype_tolower_loc ())[(int) (*source)]; __res; })) == (__extension__ ({ int __res; if (sizeof (from) > 1) { if (__builtin_constant_p (from)) { int __c = (from); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (from); } else __res = (*__ctype_tolower_loc ())[(int) (from)]; __res; }))) {
    char_count++;
   }
  }
 }

 if (char_count == 0 && case_sensitivity) {
  do { do { zval *__z = (result); zend_string *__s = (zend_str_init(str, len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
  return 0;
 }

 if (to_len > 0) {
  do { zval *__z = (result); zend_string *__s = (zend_str_safe_alloc(char_count, to_len - 1, len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 } else {
  do { zval *__z = (result); zend_string *__s = (zend_str_alloc(len - char_count, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 }
 target = (*(result)).value.str->val;

 if (case_sensitivity) {
  char *p = str, *e = p + len, *s = str;
  while ((p = memchr(p, from, (e - p)))) {
   memcpy(target, s, (p - s));
   target += p - s;
   memcpy(target, to, to_len);
   target += to_len;
   p++;
   s = p;
   if (replace_count) {
    *replace_count += 1;
   }
  }
  if (s < e) {
   memcpy(target, s, (e - s));
   target += e - s;
  }
 } else {
  for (source = str; source < source_end; source++) {
   if ((__extension__ ({ int __res; if (sizeof (*source) > 1) { if (__builtin_constant_p (*source)) { int __c = (*source); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*source); } else __res = (*__ctype_tolower_loc ())[(int) (*source)]; __res; })) == (__extension__ ({ int __res; if (sizeof (from) > 1) { if (__builtin_constant_p (from)) { int __c = (from); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (from); } else __res = (*__ctype_tolower_loc ())[(int) (from)]; __res; }))) {
    replaced = 1;
    if (replace_count) {
     *replace_count += 1;
    }
    for (tmp = to, tmp_end = tmp+to_len; tmp < tmp_end; tmp++) {
     *target = *tmp;
     target++;
    }
   } else {
    *target = *source;
    target++;
   }
  }
 }
 *target = 0;
 return replaced;
}




__attribute__ ((visibility("default"))) zend_size_t php_char_to_str(char *str, zend_size_t len, char from, char *to, zend_size_t to_len, zval *result)
{
 return php_char_to_str_ex(str, len, from, to, to_len, result, 1, ((void*)0));
}




__attribute__ ((visibility("default"))) zend_string *php_str_to_str_ex(char *haystack, zend_size_t length,
 char *needle, zend_size_t needle_len, char *str, zend_size_t str_len, int case_sensitivity, zend_size_t *replace_count)
{
 zend_string *new_str;

 if (needle_len < length) {
  char *end, *haystack_dup = ((void*)0), *needle_dup = ((void*)0);
  char *e, *s, *p, *r;

  if (needle_len == str_len) {
   new_str = zend_str_init(haystack, length, 0);

   if (case_sensitivity) {
    end = new_str->val + length;
    for (p = new_str->val; (r = (char*)zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
     memcpy(r, str, str_len);
     if (replace_count) {
      (*replace_count)++;
     }
    }
   } else {
    haystack_dup = _estrndup((haystack), (length) );
    needle_dup = _estrndup((needle), (needle_len) );
    php_strtolower(haystack_dup, length);
    php_strtolower(needle_dup, needle_len);
    end = haystack_dup + length;
    for (p = haystack_dup; (r = (char*)zend_memnstr(p, needle_dup, needle_len, end)); p = r + needle_len) {
     memcpy(new_str->val + (r - haystack_dup), str, str_len);
     if (replace_count) {
      (*replace_count)++;
     }
    }
    _efree((haystack_dup) );
    _efree((needle_dup) );
   }
   return new_str;
  } else {
   if (!case_sensitivity) {
    haystack_dup = _estrndup((haystack), (length) );
    needle_dup = _estrndup((needle), (needle_len) );
    php_strtolower(haystack_dup, length);
    php_strtolower(needle_dup, needle_len);
   }

   if (str_len < needle_len) {
    new_str = zend_str_alloc(length, 0);
   } else {
    zend_size_t count = 0;
    char *o, *n, *endp;

    if (case_sensitivity) {
     o = haystack;
     n = needle;
    } else {
     o = haystack_dup;
     n = needle_dup;
    }
    endp = o + length;

    while ((o = (char*)zend_memnstr(o, n, needle_len, endp))) {
     o += needle_len;
     count++;
    }
    if (count == 0) {

     if (haystack_dup) {
      _efree((haystack_dup) );
     }
     if (needle_dup) {
      _efree((needle_dup) );
     }
     new_str = zend_str_init(haystack, length, 0);
     return new_str;
    } else {
     new_str = zend_str_alloc(count * (str_len - needle_len) + length, 0);
    }
   }

   e = s = new_str->val;

   if (case_sensitivity) {
    end = haystack + length;
    for (p = haystack; (r = (char*)zend_memnstr(p, needle, needle_len, end)); p = r + needle_len) {
     memcpy(e, p, r - p);
     e += r - p;
     memcpy(e, str, str_len);
     e += str_len;
     if (replace_count) {
      (*replace_count)++;
     }
    }

    if (p < end) {
     memcpy(e, p, end - p);
     e += end - p;
    }
   } else {
    end = haystack_dup + length;

    for (p = haystack_dup; (r = (char*)zend_memnstr(p, needle_dup, needle_len, end)); p = r + needle_len) {
     memcpy(e, haystack + (p - haystack_dup), r - p);
     e += r - p;
     memcpy(e, str, str_len);
     e += str_len;
     if (replace_count) {
      (*replace_count)++;
     }
    }

    if (p < end) {
     memcpy(e, haystack + (p - haystack_dup), end - p);
     e += end - p;
    }
   }

   if (haystack_dup) {
    _efree((haystack_dup) );
   }
   if (needle_dup) {
    _efree((needle_dup) );
   }

   *e = '\0';

   new_str = zend_str_realloc(new_str, e - s, 0);
   return new_str;
  }
 } else if (needle_len > length) {
nothing_todo:
  new_str = zend_str_init(haystack, length, 0);
  return new_str;
 } else {
  if (case_sensitivity && memcmp(haystack, needle, length)) {
   goto nothing_todo;
  } else if (!case_sensitivity) {
   char *l_haystack, *l_needle;

   l_haystack = _estrndup((haystack), (length) );
   l_needle = _estrndup((needle), (length) );

   php_strtolower(l_haystack, length);
   php_strtolower(l_needle, length);

   if (memcmp(l_haystack, l_needle, length)) {
    _efree((l_haystack) );
    _efree((l_needle) );
    goto nothing_todo;
   }
   _efree((l_haystack) );
   _efree((l_needle) );
  }

  new_str = zend_str_init(str, str_len, 0);

  if (replace_count) {
   (*replace_count)++;
  }
  return new_str;
 }

}




__attribute__ ((visibility("default"))) zend_string *php_str_to_str(char *haystack, zend_size_t length, char *needle, zend_size_t needle_len, char *str, zend_size_t str_len)
{
 return php_str_to_str_ex(haystack, length, needle, needle_len, str, str_len, 1, ((void*)0));
}




static void php_str_replace_in_subject(zval *search, zval *replace, zval *subject, zval *result, int case_sensitivity, zend_size_t *replace_count )
{
 zval *search_entry,
    *replace_entry = ((void*)0),
     temp_result,
     tmp_subject;
 char *replace_value = ((void*)0);
 zend_size_t replace_len = 0;
 HashPosition pos;


 if ((zval_get_type(&(*(subject))) == 10)) {
  subject = &(*(subject)).value.ref->val;
 }
 do { (*(&tmp_subject)).u1.type_info = 0; } while (0);
 if (zval_get_type(&(*(subject))) != 6) {
  do { zval *__z1 = (&tmp_subject); zval *__z2 = (subject); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
  if (zval_get_type(&(*(&tmp_subject)))!=6) { do { zval *_zv = (&tmp_subject); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(&tmp_subject))) != 6) { _convert_to_string((&tmp_subject) ); }; };
  subject = &tmp_subject;
 }
 if ((*(subject)).value.str->len == 0) {
  _zval_ptr_dtor((&tmp_subject) );
  do { do { zval *__z = (result); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0);
  return;
 }



 if (zval_get_type(&(*(search))) == 7) {

  do { zval *__z1 = (result); zval *__z2 = (subject); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);

  if (zval_get_type(&(*(replace))) == 7) {
   zend_hash_internal_pointer_reset_ex((&(*(replace)).value.arr->ht), &pos);
  } else {

   replace_value = (*(replace)).value.str->val;
   replace_len = (*(replace)).value.str->len;
  }


  do { uint _idx; for (_idx = 0; _idx < ((&(*(search)).value.arr->ht))->nNumUsed; _idx++) { Bucket *_p = ((&(*(search)).value.arr->ht))->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; search_entry = _z; {

   do { zval *_zv = (search_entry); if ((((*(_zv)).u1.v.type_flags & (1<<1)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } else if ((zval_get_type(&(*(_zv))) == 10)) { zval_delref_p(_zv); do { zval *__z1 = (_zv); zval *__z2 = (&(*(_zv)).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0); } } } } while (0);
   if (zval_get_type(&(*(search_entry))) != 6) { _convert_to_string((search_entry) ); };
   if ((*(search_entry)).value.str->len == 0) {
    if (zval_get_type(&(*(replace))) == 7) {
     zend_hash_move_forward_ex((&(*(replace)).value.arr->ht), &pos);
    }
    continue;
   }


   if (zval_get_type(&(*(replace))) == 7) {

    if ((replace_entry = zend_hash_get_current_data_ex((&(*(replace)).value.arr->ht), &pos)) != ((void*)0)) {

     if (zval_get_type(&(*(replace_entry)))!=6) { do { zval *_zv = (replace_entry); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(replace_entry))) != 6) { _convert_to_string((replace_entry) ); }; };


     replace_value = (*(replace_entry)).value.str->val;
     replace_len = (*(replace_entry)).value.str->len;

     zend_hash_move_forward_ex((&(*(replace)).value.arr->ht), &pos);
    } else {

     replace_value = "";
     replace_len = 0;
    }
   }

   if ((*(search_entry)).value.str->len == 1) {
    php_char_to_str_ex((*(result)).value.str->val,
        (*(result)).value.str->len,
        (*(search_entry)).value.str->val[0],
        replace_value,
        replace_len,
        &temp_result,
        case_sensitivity,
        replace_count);
   } else if ((*(search_entry)).value.str->len > 1) {
    do { zval *__z = (&temp_result); zend_string *__s = (php_str_to_str_ex((*(result)).value.str->val, (*(result)).value.str->len, (*(search_entry)).value.str->val, (*(search_entry)).value.str->len, replace_value, replace_len, case_sensitivity, replace_count)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);


   }

   zend_str_free((*(result)).value.str);
   (*(result)).value.str = (temp_result).value.str;
   (*(result)).u1.type_info = (temp_result).u1.type_info;

   if ((*(result)).value.str->len == 0) {
    _zval_ptr_dtor((&tmp_subject) );
    return;
   }
  } } } while (0);
 } else {
  if ((*(search)).value.str->len == 1) {
   php_char_to_str_ex((*(subject)).value.str->val,
       (*(subject)).value.str->len,
       (*(search)).value.str->val[0],
       (*(replace)).value.str->val,
       (*(replace)).value.str->len,
       result,
       case_sensitivity,
       replace_count);
  } else if ((*(search)).value.str->len > 1) {
   do { zval *__z = (result); zend_string *__s = (php_str_to_str_ex((*(subject)).value.str->val, (*(subject)).value.str->len, (*(search)).value.str->val, (*(search)).value.str->len, (*(replace)).value.str->val, (*(replace)).value.str->len, case_sensitivity, replace_count)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);


  } else {
   do { zval *__z1 = (result); zval *__z2 = (subject); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
  }
 }
 _zval_ptr_dtor((&tmp_subject) );
}




static void php_str_replace_common(zend_uint param_count, zval *return_value , int case_sensitivity)
{
 zval *subject, *search, *replace, *subject_entry, *zcount = ((void*)0);
 zval result;
 zend_string *string_key;
 zend_uint_t num_key;
 zend_int_t count = 0;
 int argc = (param_count);






 do { const int _flags = (0); int _min_num_args = (3); int _max_num_args = (4); int _num_args = (executor_globals.current_execute_data)->num_args; int _i; zval *_real_arg, *_arg = ((void*)0); zend_expected_type _expected_type = 0; char *_error = ((void*)0); zend_bool _dummy; zend_bool _optional = 0; int error_code = 0; ((void)_i); ((void)_real_arg); ((void)_arg); ((void)_expected_type); ((void)_error); ((void)_dummy); ((void)_optional); do { if (__builtin_expect(!(!(_num_args < _min_num_args)), 0) || (__builtin_expect(!(!(_num_args > _max_num_args)), 0) && __builtin_expect(!(!(_max_num_args >= 0)), 1))) { if (!(_flags & (1<<1))) { zend_wrong_paramers_count_error(_num_args, _min_num_args, _max_num_args ); } error_code = 1; break; } _i = 0; _real_arg = (((zval*)((executor_globals.current_execute_data))) + ((0) + ((((((sizeof(zend_execute_data)) + 8 - 1LL) & ~(8 -1LL)) + (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL)) - 1) / (((sizeof(zval)) + 8 - 1LL) & ~(8 -1LL))) - 1)));
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &search, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &search, 0); }
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &replace, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &replace, 0); }
  if (0) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (0) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &subject, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &subject, 0); }
  _optional = 1;
  if (1) { ++_i; if (_optional) { if (__builtin_expect(!(!(_i >_num_args)), 0)) break; } _real_arg++; _arg = _real_arg; do { if (__builtin_expect(!(!((zval_get_type(&(*(_arg))) == 10))), 0)) { (_arg) = &(*(_arg)).value.ref->val; } } while (0); if (1) { do { zval *_zv = (_arg); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); }; _z_param_zval_deref(_arg, &zcount, 0); } else { if (__builtin_expect(!(!(++_i >_num_args)), 0)) break; _real_arg++; _z_param_zval(_real_arg, &zcount, 0); }
 } while (0); if (__builtin_expect(!(!(error_code != 0)), 0)) { if (!(_flags & (1<<1))) { if (error_code == 2) { zend_wrong_callback_error((1<<1L), _i, _error ); } else if (error_code == 3) { zend_wrong_paramer_class_error(_i, _error, _arg ); } else if (error_code == 4) { zend_wrong_paramer_type_error(_i, _expected_type, _arg ); } } return; } } while (0);



 if (zval_get_type(&(*(search))) != 7) {
  do { zval *_zv = (search); if ((((*(_zv)).u1.v.type_flags & (1<<1)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } else if ((zval_get_type(&(*(_zv))) == 10)) { zval_delref_p(_zv); do { zval *__z1 = (_zv); zval *__z2 = (&(*(_zv)).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0); } } } } while (0);
  if (zval_get_type(&(*(search)))!=6) { do { zval *_zv = (search); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(search))) != 6) { _convert_to_string((search) ); }; };
  if (zval_get_type(&(*(replace))) != 6) {
   if (zval_get_type(&(*(replace)))!=6) { do { zval *_zv = (replace); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(replace))) != 6) { _convert_to_string((replace) ); }; };
   do { zval *_zv = (replace); if ((((*(_zv)).u1.v.type_flags & (1<<1)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } else if ((zval_get_type(&(*(_zv))) == 10)) { zval_delref_p(_zv); do { zval *__z1 = (_zv); zval *__z2 = (&(*(_zv)).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0); } } } } while (0);
  }
 } else if (zval_get_type(&(*(replace))) != 7) {
  do { zval *_zv = (replace); if ((((*(_zv)).u1.v.type_flags & (1<<1)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } else if ((zval_get_type(&(*(_zv))) == 10)) { zval_delref_p(_zv); do { zval *__z1 = (_zv); zval *__z2 = (&(*(_zv)).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0); } } } } while (0);
  if (zval_get_type(&(*(replace)))!=6) { do { zval *_zv = (replace); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(replace))) != 6) { _convert_to_string((replace) ); }; };
 }


 if (zval_get_type(&(*(subject))) == 7) {
  _array_init((return_value), 0 );



  do { uint _idx; for (_idx = 0; _idx < ((&(*(subject)).value.arr->ht))->nNumUsed; _idx++) { Bucket *_p = ((&(*(subject)).value.arr->ht))->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; num_key = _p->h; string_key = _p->key; subject_entry = _z; {
   if (zval_get_type(&(*(subject_entry))) != 7 && zval_get_type(&(*(subject_entry))) != 8) {
    php_str_replace_in_subject(search, replace, subject_entry, &result, case_sensitivity, (argc > 3) ? &count : ((void*)0) );
   } else {
    do { zval *__z1 = (&result); zval *__z2 = (subject_entry); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); if ((((*(__z1)).u1.type_info & ((1<<1) << 8)) != 0)) { zval_addref_p(__z1); } } while (0);
   }

   if (string_key) {
    _zend_hash_update((&(*(return_value)).value.arr->ht), string_key, &result );
   } else {
    add_index_zval(return_value, num_key, &result);
   }
  } } } while (0);
 } else {
  php_str_replace_in_subject(search, replace, subject, return_value, case_sensitivity, (argc > 3) ? &count : ((void*)0) );
 }
 if (argc > 3) {
  _zval_dtor((zcount) );
  { zval *__z = (zcount); (*(__z)).value.lval = count; (*(__z)).u1.type_info = 4; };
 }
}




void zif_str_replace(zend_uint param_count, zval *return_value )
{
 php_str_replace_common(param_count, return_value , 1);
}




void zif_str_ireplace(zend_uint param_count, zval *return_value )
{
 php_str_replace_common(param_count, return_value , 0);
}







static void php_hebrev(zend_uint param_count, zval *return_value , int convert_newlines)
{
 char *str;
 char *heb_str, *tmp, *target;
 int block_start, block_end, block_type, block_length, i;
 zend_int_t max_chars=0;
 int begin, end, char_count, orig_begin;
 int str_len;
 zend_string *broken_str;

 if (zend_parse_parameters((param_count) , "s|i", &str, &str_len, &max_chars) == FAILURE) {
  return;
 }

 if (str_len == 0) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 tmp = str;
 block_start=block_end=0;

 heb_str = (char *) _emalloc((str_len+1) );
 target = heb_str+str_len;
 *target = 0;
 target--;

 block_length=0;

 if ((((((unsigned char) *tmp) >= 224) && (((unsigned char) *tmp) <= 250)) ? 1 : 0)) {
  block_type = 2;
 } else {
  block_type = 1;
 }

 do {
  if (block_type == 2) {
   while (((((((unsigned char) (int)*(tmp+1)) >= 224) && (((unsigned char) (int)*(tmp+1)) <= 250)) ? 1 : 0) || (((((unsigned char) (int)*(tmp+1)) == ' ' || ((unsigned char) (int)*(tmp+1)) == '\t')) ? 1 : 0) || ((*__ctype_b_loc ())[(int) (((int)*(tmp+1)))] & (unsigned short int) _ISpunct) || (int)*(tmp+1)=='\n' ) && block_end<str_len-1) {
    tmp++;
    block_end++;
    block_length++;
   }
   for (i = block_start; i<= block_end; i++) {
    *target = str[i];
    switch (*target) {
     case '(':
      *target = ')';
      break;
     case ')':
      *target = '(';
      break;
     case '[':
      *target = ']';
      break;
     case ']':
      *target = '[';
      break;
     case '{':
      *target = '}';
      break;
     case '}':
      *target = '{';
      break;
     case '<':
      *target = '>';
      break;
     case '>':
      *target = '<';
      break;
     case '\\':
      *target = '/';
      break;
     case '/':
      *target = '\\';
      break;
     default:
      break;
    }
    target--;
   }
   block_type = 1;
  } else {
   while (!(((((unsigned char) *(tmp+1)) >= 224) && (((unsigned char) *(tmp+1)) <= 250)) ? 1 : 0) && (int)*(tmp+1)!='\n' && block_end < str_len-1) {
    tmp++;
    block_end++;
    block_length++;
   }
   while (((((((unsigned char) (int)*tmp) == ' ' || ((unsigned char) (int)*tmp) == '\t')) ? 1 : 0) || ((*__ctype_b_loc ())[(int) (((int)*tmp))] & (unsigned short int) _ISpunct)) && *tmp!='/' && *tmp!='-' && block_end > block_start) {
    tmp--;
    block_end--;
   }
   for (i = block_end; i >= block_start; i--) {
    *target = str[i];
    target--;
   }
   block_type = 2;
  }
  block_start=block_end+1;
 } while (block_end < str_len-1);


 broken_str = zend_str_alloc(str_len, 0);
 begin = end = str_len-1;
 target = broken_str->val;

 while (1) {
  char_count=0;
  while ((!max_chars || char_count < max_chars) && begin > 0) {
   char_count++;
   begin--;
   if (begin <= 0 || (((((unsigned char) heb_str[begin]) == '\n' || ((unsigned char) heb_str[begin]) == '\r')) ? 1 : 0)) {
    while (begin > 0 && (((((unsigned char) heb_str[begin-1]) == '\n' || ((unsigned char) heb_str[begin-1]) == '\r')) ? 1 : 0)) {
     begin--;
     char_count++;
    }
    break;
   }
  }
  if (char_count == max_chars) {
   int new_char_count=char_count, new_begin=begin;

   while (new_char_count > 0) {
    if ((((((unsigned char) heb_str[new_begin]) == ' ' || ((unsigned char) heb_str[new_begin]) == '\t')) ? 1 : 0) || (((((unsigned char) heb_str[new_begin]) == '\n' || ((unsigned char) heb_str[new_begin]) == '\r')) ? 1 : 0)) {
     break;
    }
    new_begin++;
    new_char_count--;
   }
   if (new_char_count > 0) {
    begin=new_begin;
   }
  }
  orig_begin=begin;

  if ((((((unsigned char) heb_str[begin]) == ' ' || ((unsigned char) heb_str[begin]) == '\t')) ? 1 : 0)) {
   heb_str[begin]='\n';
  }
  while (begin <= end && (((((unsigned char) heb_str[begin]) == '\n' || ((unsigned char) heb_str[begin]) == '\r')) ? 1 : 0)) {
   begin++;
  }
  for (i = begin; i <= end; i++) {
   *target = heb_str[i];
   target++;
  }
  for (i = orig_begin; i <= end && (((((unsigned char) heb_str[i]) == '\n' || ((unsigned char) heb_str[i]) == '\r')) ? 1 : 0); i++) {
   *target = heb_str[i];
   target++;
  }
  begin=orig_begin;

  if (begin <= 0) {
   *target = 0;
   break;
  }
  begin--;
  end=begin;
 }
 _efree((heb_str) );

 if (convert_newlines) {
  php_char_to_str(broken_str->val, broken_str->len,'\n', "<br />\n", 7, return_value);
  zend_str_free(broken_str);
 } else {
  { do { zval *__z = (return_value); zend_string *__s = (broken_str); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
 }
}




void zif_hebrev(zend_uint param_count, zval *return_value )
{
 php_hebrev(param_count, return_value , 0);
}




void zif_hebrevc(zend_uint param_count, zval *return_value )
{
 php_hebrev(param_count, return_value , 1);
}




void zif_nl2br(zend_uint param_count, zval *return_value )
{

 char *tmp;
 zend_string *str;
 char *end, *target;
 zend_size_t repl_cnt = 0;
 zend_bool is_xhtml = 1;
 zend_string *result;

 if (zend_parse_parameters((param_count) , "S|b", &str, &is_xhtml) == FAILURE) {
  return;
 }

 tmp = str->val;
 end = str->val + str->len;



 while (tmp < end) {
  if (*tmp == '\r') {
   if (*(tmp+1) == '\n') {
    tmp++;
   }
   repl_cnt++;
  } else if (*tmp == '\n') {
   if (*(tmp+1) == '\r') {
    tmp++;
   }
   repl_cnt++;
  }

  tmp++;
 }

 if (repl_cnt == 0) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(str->val, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
 }

 {
  size_t repl_len = is_xhtml ? (sizeof("<br />") - 1) : (sizeof("<br>") - 1);

  result = zend_str_alloc(repl_cnt * repl_len + str->len, 0);
  target = result->val;
 }

 tmp = str->val;
 while (tmp < end) {
  switch (*tmp) {
   case '\r':
   case '\n':
    *target++ = '<';
    *target++ = 'b';
    *target++ = 'r';

    if (is_xhtml) {
     *target++ = ' ';
     *target++ = '/';
    }

    *target++ = '>';

    if ((*tmp == '\r' && *(tmp+1) == '\n') || (*tmp == '\n' && *(tmp+1) == '\r')) {
     *target++ = *tmp++;
    }

   default:
    *target++ = *tmp;
  }

  tmp++;
 }

 *target = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_strip_tags(zend_uint param_count, zval *return_value )
{
 zend_string *buf;
 zend_string *str;
 zval *allow=((void*)0);
 char *allowed_tags=((void*)0);
 int allowed_tags_len=0;

 if (zend_parse_parameters((param_count) , "S|z", &str, &allow) == FAILURE) {
  return;
 }


 if (allow != ((void*)0)) {
  if (zval_get_type(&(*(allow)))!=6) { do { zval *_zv = (allow); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(allow))) != 6) { _convert_to_string((allow) ); }; };

  if ((((zend_refcounted*)((*(allow)).value.str))->u.v.flags & (1<<1))) {
   allowed_tags = _estrndup(((*(allow)).value.str->val), ((*(allow)).value.str->len) );
   allowed_tags_len = (*(allow)).value.str->len;
  } else {
   allowed_tags = (*(allow)).value.str->val;
   allowed_tags_len = (*(allow)).value.str->len;
  }
 }

 buf = zend_str_init(str->val, str->len, 0);
 buf->len = php_strip_tags_ex(buf->val, str->len, ((void*)0), allowed_tags, allowed_tags_len, 0);


 if (allow && (((zend_refcounted*)((*(allow)).value.str))->u.v.flags & (1<<1))) {
  _efree((allowed_tags) );
 }
 { do { zval *__z = (return_value); zend_string *__s = (buf); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_setlocale(zend_uint param_count, zval *return_value )
{
 zval *args = ((void*)0);
 zval *pcategory, *plocale;
 int num_args, cat, i = 0;
 char *loc, *retval;
 HashPosition pos;

 if (zend_parse_parameters((param_count) , "z+", &pcategory, &args, &num_args) == FAILURE) {
  return;
 }


 if (zval_get_type(&(*(pcategory))) == 4) {
  cat = (*(pcategory)).value.lval;
 } else {

  char *category;
  zval tmp;

  php_error_docref0(((void*)0) , (1<<13L), "Passing locale category name as string is deprecated. Use the LC_* -constants instead");

  do { zval *__z1 = (&tmp); zval *__z2 = (pcategory); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
  if (zval_get_type(&(*(&tmp)))!=6) { do { zval *_zv = (&tmp); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0); if (zval_get_type(&(*(&tmp))) != 6) { _convert_to_string((&tmp) ); }; };
  category = (tmp).value.str->val;

  if (!strcasecmp("LC_ALL", category)) {
   cat = 6;
  } else if (!strcasecmp("LC_COLLATE", category)) {
   cat = 3;
  } else if (!strcasecmp("LC_CTYPE", category)) {
   cat = 0;

  } else if (!strcasecmp("LC_MESSAGES", category)) {
   cat = 5;

  } else if (!strcasecmp("LC_MONETARY", category)) {
   cat = 4;
  } else if (!strcasecmp("LC_NUMERIC", category)) {
   cat = 1;
  } else if (!strcasecmp("LC_TIME", category)) {
   cat = 2;
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Invalid locale category name %s, must be one of LC_ALL, LC_COLLATE, LC_CTYPE, LC_MONETARY, LC_NUMERIC, or LC_TIME", category);

   _zval_dtor((&tmp) );
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  _zval_dtor((&tmp) );
 }

 if (zval_get_type(&(args[0])) == 7) {
  zend_hash_internal_pointer_reset_ex((&(args[0]).value.arr->ht), &pos);
 }

 while (1) {
  zval tmp;
  if (zval_get_type(&(args[0])) == 7) {
   if (!((&(args[0]).value.arr->ht))->nNumOfElements) {
    break;
   }
   if ((plocale = zend_hash_get_current_data_ex((&(args[0]).value.arr->ht), &pos)) == ((void*)0)) {
    break;
   }
  } else {
   plocale = &args[i];
  }

  do { zval *__z1 = (&tmp); zval *__z2 = (plocale); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
  if (zval_get_type(&(*(&tmp))) != 6) { _convert_to_string((&tmp) ); };

  if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p ("0") && __builtin_constant_p ((tmp).value.str->val) && (__s1_len = __builtin_strlen ("0"), __s2_len = __builtin_strlen ((tmp).value.str->val), (!((size_t)(const void *)(("0") + 1) - (size_t)(const void *)("0") == 1) || __s1_len >= 4) && (!((size_t)(const void *)(((tmp).value.str->val) + 1) - (size_t)(const void *)((tmp).value.str->val) == 1) || __s2_len >= 4)) ? __builtin_strcmp ("0", (tmp).value.str->val) : (__builtin_constant_p ("0") && ((size_t)(const void *)(("0") + 1) - (size_t)(const void *)("0") == 1) && (__s1_len = __builtin_strlen ("0"), __s1_len < 4) ? (__builtin_constant_p ((tmp).value.str->val) && ((size_t)(const void *)(((tmp).value.str->val) + 1) - (size_t)(const void *)((tmp).value.str->val) == 1) ? __builtin_strcmp ("0", (tmp).value.str->val) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ((tmp).value.str->val); int __result = (((const unsigned char *) (const char *) ("0"))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ("0"))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ("0"))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ("0"))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ((tmp).value.str->val) && ((size_t)(const void *)(((tmp).value.str->val) + 1) - (size_t)(const void *)((tmp).value.str->val) == 1) && (__s2_len = __builtin_strlen ((tmp).value.str->val), __s2_len < 4) ? (__builtin_constant_p ("0") && ((size_t)(const void *)(("0") + 1) - (size_t)(const void *)("0") == 1) ? __builtin_strcmp ("0", (tmp).value.str->val) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) ("0"); int __result = (((const unsigned char *) (const char *) ((tmp).value.str->val))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) ((tmp).value.str->val))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) ((tmp).value.str->val))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) ((tmp).value.str->val))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp ("0", (tmp).value.str->val)))); })) {
   loc = ((void*)0);
  } else {
   loc = (tmp).value.str->val;
   if ((tmp).value.str->len >= 255) {
    php_error_docref0(((void*)0) , (1<<1L), "Specified locale name is too long");
    _zval_dtor((&tmp) );
    break;
   }
  }

  retval = setlocale(cat, loc);
                              ;
  if (retval) {

   if (loc) {

    if ((basic_globals.locale_string)) {
     _efree(((basic_globals.locale_string)) );
    }
    (basic_globals.locale_string) = _estrdup((retval) );
   }

   _zval_dtor((&tmp) );
   { do { const char *_s = (retval); do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(_s, strlen(_s), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); } while (0); return; };
  }
  _zval_dtor((&tmp) );

  if (zval_get_type(&(args[0])) == 7) {
   if (zend_hash_move_forward_ex((&(args[0]).value.arr->ht), &pos) == FAILURE) break;
  } else {
   if (++i >= num_args) break;
  }
 }


 { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
}




void zif_parse_str(zend_uint param_count, zval *return_value )
{
 char *arg;
 zval *arrayArg = ((void*)0);
 char *res = ((void*)0);
 int arglen;

 if (zend_parse_parameters((param_count) , "s|z/", &arg, &arglen, &arrayArg) == FAILURE) {
  return;
 }

 res = _estrndup((arg), (arglen) );

 if (arrayArg == ((void*)0)) {
  zval tmp;
  zend_array *symbol_table = zend_rebuild_symbol_table();

  do { zval *__z = (&tmp); (*(__z)).value.arr = (symbol_table); (*(__z)).u1.type_info = (7 | (( (1<<1) | (1<<2) | (1<<3)) << 8)); } while (0);
  sapi_module.treat_data(3, res, &tmp );
 } else {
  zval ret;


  _zval_dtor((arrayArg) );
  _array_init((&ret), 0 );
  sapi_module.treat_data(3, res, &ret );
  do { zval *_z1 = (arrayArg); zval *_z2 = (&ret); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
 }
}
# 4344 "ext/standard/string.c"
int php_tag_find(char *tag, zend_size_t len, char *set) {
 char c, *n, *t;
 int state=0, done=0;
 char *norm;

 if (len <= 0) {
  return 0;
 }

 norm = _emalloc((len+1) );

 n = norm;
 t = tag;
 c = (__extension__ ({ int __res; if (sizeof (*t) > 1) { if (__builtin_constant_p (*t)) { int __c = (*t); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*t); } else __res = (*__ctype_tolower_loc ())[(int) (*t)]; __res; }));





 while (!done) {
  switch (c) {
   case '<':
    *(n++) = c;
    break;
   case '>':
    done =1;
    break;
   default:
    if (!((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISspace)) {
     if (state == 0) {
      state=1;
     }
     if (c != '/') {
      *(n++) = c;
     }
    } else {
     if (state == 1)
      done=1;
    }
    break;
  }
  c = (__extension__ ({ int __res; if (sizeof (*(++t)) > 1) { if (__builtin_constant_p (*(++t))) { int __c = (*(++t)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(++t)); } else __res = (*__ctype_tolower_loc ())[(int) (*(++t))]; __res; }));
 }
 *(n++) = '>';
 *n = '\0';
 if (strstr(set, norm)) {
  done=1;
 } else {
  done=0;
 }
 _efree((norm) );
 return done;
}


__attribute__ ((visibility("default"))) zend_size_t php_strip_tags(char *rbuf, zend_size_t len, int *stateptr, char *allow, zend_size_t allow_len)
{
 return php_strip_tags_ex(rbuf, len, stateptr, allow, allow_len, 0);
}
# 4425 "ext/standard/string.c"
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, zend_size_t len, int *stateptr, char *allow, zend_size_t allow_len, zend_bool allow_tag_spaces)
{
 char *tbuf, *buf, *p, *tp, *rp, c, lc;
 int br, i=0, depth=0, in_q = 0;
 int state = 0, pos;
 char *allow_free = ((void*)0);

 if (stateptr)
  state = *stateptr;

 buf = _estrndup((rbuf), (len) );
 c = *buf;
 lc = '\0';
 p = buf;
 rp = rbuf;
 br = 0;
 if (allow) {



   allow_free = ((void*)0);
   php_strtolower(allow, allow_len);

  tbuf = _emalloc((1023 + 1) );
  tp = tbuf;
 } else {
  tbuf = tp = ((void*)0);
 }

 while (i < len) {
  switch (c) {
   case '\0':
    break;
   case '<':
    if (in_q) {
     break;
    }
    if (((*__ctype_b_loc ())[(int) ((*(p + 1)))] & (unsigned short int) _ISspace) && !allow_tag_spaces) {
     goto reg_char;
    }
    if (state == 0) {
     lc = '<';
     state = 1;
     if (allow) {
      if (tp - tbuf >= 1023) {
       pos = tp - tbuf;
       tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
       tp = tbuf + pos;
      }
      *(tp++) = '<';
      }
    } else if (state == 1) {
     depth++;
    }
    break;

   case '(':
    if (state == 2) {
     if (lc != '"' && lc != '\'') {
      lc = '(';
      br++;
     }
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    } else if (state == 0) {
     *(rp++) = c;
    }
    break;

   case ')':
    if (state == 2) {
     if (lc != '"' && lc != '\'') {
      lc = ')';
      br--;
     }
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    } else if (state == 0) {
     *(rp++) = c;
    }
    break;

   case '>':
    if (depth) {
     depth--;
     break;
    }

    if (in_q) {
     break;
    }

    switch (state) {
     case 1:
      lc = '>';
      in_q = state = 0;
      if (allow) {
       if (tp - tbuf >= 1023) {
        pos = tp - tbuf;
        tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
        tp = tbuf + pos;
       }
       *(tp++) = '>';
       *tp='\0';
       if (php_tag_find(tbuf, tp-tbuf, allow)) {
        memcpy(rp, tbuf, tp-tbuf);
        rp += tp-tbuf;
       }
       tp = tbuf;
      }
      break;

     case 2:
      if (!br && lc != '\"' && *(p-1) == '?') {
       in_q = state = 0;
       tp = tbuf;
      }
      break;

     case 3:
      in_q = state = 0;
      tp = tbuf;
      break;

     case 4:
      if (p >= buf + 2 && *(p-1) == '-' && *(p-2) == '-') {
       in_q = state = 0;
       tp = tbuf;
      }
      break;

     default:
      *(rp++) = c;
      break;
    }
    break;

   case '"':
   case '\'':
    if (state == 4) {

     break;
    } else if (state == 2 && *(p-1) != '\\') {
     if (lc == c) {
      lc = '\0';
     } else if (lc != '\\') {
      lc = c;
     }
    } else if (state == 0) {
     *(rp++) = c;
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    }
    if (state && p != buf && (state == 1 || *(p-1) != '\\') && (!in_q || *p == in_q)) {
     if (in_q) {
      in_q = 0;
     } else {
      in_q = *p;
     }
    }
    break;

   case '!':

    if (state == 1 && *(p-1) == '<') {
     state = 3;
     lc = c;
    } else {
     if (state == 0) {
      *(rp++) = c;
     } else if (allow && state == 1) {
      if (tp - tbuf >= 1023) {
       pos = tp - tbuf;
       tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
       tp = tbuf + pos;
      }
      *(tp++) = c;
     }
    }
    break;

   case '-':
    if (state == 3 && p >= buf + 2 && *(p-1) == '-' && *(p-2) == '!') {
     state = 4;
    } else {
     goto reg_char;
    }
    break;

   case '?':

    if (state == 1 && *(p-1) == '<') {
     br=0;
     state=2;
     break;
    }

   case 'E':
   case 'e':

    if (state==3 && p > buf+6
           && (__extension__ ({ int __res; if (sizeof (*(p-1)) > 1) { if (__builtin_constant_p (*(p-1))) { int __c = (*(p-1)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(p-1)); } else __res = (*__ctype_tolower_loc ())[(int) (*(p-1))]; __res; })) == 'p'
              && (__extension__ ({ int __res; if (sizeof (*(p-2)) > 1) { if (__builtin_constant_p (*(p-2))) { int __c = (*(p-2)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(p-2)); } else __res = (*__ctype_tolower_loc ())[(int) (*(p-2))]; __res; })) == 'y'
           && (__extension__ ({ int __res; if (sizeof (*(p-3)) > 1) { if (__builtin_constant_p (*(p-3))) { int __c = (*(p-3)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(p-3)); } else __res = (*__ctype_tolower_loc ())[(int) (*(p-3))]; __res; })) == 't'
           && (__extension__ ({ int __res; if (sizeof (*(p-4)) > 1) { if (__builtin_constant_p (*(p-4))) { int __c = (*(p-4)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(p-4)); } else __res = (*__ctype_tolower_loc ())[(int) (*(p-4))]; __res; })) == 'c'
           && (__extension__ ({ int __res; if (sizeof (*(p-5)) > 1) { if (__builtin_constant_p (*(p-5))) { int __c = (*(p-5)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(p-5)); } else __res = (*__ctype_tolower_loc ())[(int) (*(p-5))]; __res; })) == 'o'
           && (__extension__ ({ int __res; if (sizeof (*(p-6)) > 1) { if (__builtin_constant_p (*(p-6))) { int __c = (*(p-6)); __res = __c < -128 || __c > 255 ? __c : (*__ctype_tolower_loc ())[__c]; } else __res = tolower (*(p-6)); } else __res = (*__ctype_tolower_loc ())[(int) (*(p-6))]; __res; })) == 'd') {
     state = 1;
     break;
    }


   case 'l':
   case 'L':





    if (state == 2 && p > buf+2 && strncasecmp(p-2, "xm", 2) == 0) {
     state = 1;
     break;
    }


   default:
reg_char:
    if (state == 0) {
     *(rp++) = c;
    } else if (allow && state == 1) {
     if (tp - tbuf >= 1023) {
      pos = tp - tbuf;
      tbuf = _erealloc((tbuf), ((tp - tbuf) + 1023 + 1), 0 );
      tp = tbuf + pos;
     }
     *(tp++) = c;
    }
    break;
  }
  c = *(++p);
  i++;
 }
 if (rp < rbuf + len) {
  *rp = '\0';
 }
 _efree((buf) );
 if (allow) {
  _efree((tbuf) );
  if (allow_free) {
   _efree((allow_free) );
  }
 }
 if (stateptr)
  *stateptr = state;

 return (size_t)(rp - rbuf);
}




void zif_str_getcsv(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 char delim = ',', enc = '"', esc = '\\';
 char *delim_str = ((void*)0), *enc_str = ((void*)0), *esc_str = ((void*)0);
 int delim_len = 0, enc_len = 0, esc_len = 0;

 if (zend_parse_parameters((param_count) , "S|sss", &str, &delim_str, &delim_len,
  &enc_str, &enc_len, &esc_str, &esc_len) == FAILURE) {
  return;
 }

 delim = delim_len ? delim_str[0] : delim;
 enc = enc_len ? enc_str[0] : enc;
 esc = esc_len ? esc_str[0] : esc;

 php_fgetcsv(((void*)0), delim, enc, esc, str->len, str->val, return_value );
}




void zif_str_repeat(zend_uint param_count, zval *return_value )
{
 zend_string *input_str;
 zend_int_t mult;
 zend_string *result;
 size_t result_len;

 if (zend_parse_parameters((param_count) , "Si", &input_str, &mult) == FAILURE) {
  return;
 }

 if (mult < 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Second argument has to be greater than or equal to 0");
  return;
 }



 if (input_str->len == 0 || mult == 0)
  { do { do { zval *__z = (return_value); zend_string *__s = ((compiler_globals.empty_string)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = 6; } while (0); } while (0); return; };


 result = zend_str_safe_alloc(input_str->len, mult, 0, 0);
 result_len = input_str->len * mult;


 if (input_str->len == 1) {
  memset(result->val, *(input_str->val), mult);
 } else {
  char *s, *e, *ee;
  ptrdiff_t l=0;
  memcpy(result->val, input_str->val, input_str->len);
  s = result->val;
  e = result->val + input_str->len;
  ee = result->val + result_len;

  while (e<ee) {
   l = (e-s) < (ee-e) ? (e-s) : (ee-e);
   memmove(e, s, l);
   e += l;
  }
 }

 result->val[result_len] = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_count_chars(zend_uint param_count, zval *return_value )
{
 zend_string *input;
 int chars[256];
 zend_int_t mymode=0;
 unsigned char *buf;
 int inx;
 char retstr[256];
 zend_size_t retlen=0;
 zend_size_t tmp = 0;

 if (zend_parse_parameters((param_count) , "S|i", &input, &mymode) == FAILURE) {
  return;
 }

 if (mymode < 0 || mymode > 4) {
  php_error_docref0(((void*)0) , (1<<1L), "Unknown mode");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 buf = (unsigned char *) input->val;
 memset((void*) chars, 0, sizeof(chars));

 while (tmp < input->len) {
  chars[*buf]++;
  buf++;
  tmp++;
 }

 if (mymode < 3) {
  _array_init((return_value), 0 );
 }

 for (inx = 0; inx < 256; inx++) {
  switch (mymode) {
    case 0:
    add_index_int(return_value, inx, chars[inx]);
    break;
    case 1:
    if (chars[inx] != 0) {
     add_index_int(return_value, inx, chars[inx]);
    }
    break;
     case 2:
    if (chars[inx] == 0) {
     add_index_int(return_value, inx, chars[inx]);
    }
    break;
     case 3:
    if (chars[inx] != 0) {
     retstr[retlen++] = inx;
    }
    break;
     case 4:
    if (chars[inx] == 0) {
     retstr[retlen++] = inx;
    }
    break;
  }
 }

 if (mymode >= 3 && mymode <= 4) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(retstr, retlen, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
 }
}




static void php_strnatcmp(zend_uint param_count, zval *return_value , int fold_case)
{
 zend_string *s1, *s2;

 if (zend_parse_parameters((param_count) , "SS", &s1, &s2) == FAILURE) {
  return;
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = strnatcmp_ex(s1->val, s1->len, s2->val, s2->len, fold_case); (*(__z)).u1.type_info = 4; }; return; };


}


__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive )
{
 zend_string *str1 = _zval_get_string((op1) );
 zend_string *str2 = _zval_get_string((op2) );

 { zval *__z = (result); (*(__z)).value.lval = strnatcmp_ex(str1->val, str1->len, str2->val, str2->len, case_insensitive); (*(__z)).u1.type_info = 4; };

 zend_str_release(str1);
 zend_str_release(str2);
 return SUCCESS;
}


__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2 )
{
 return string_natural_compare_function_ex(result, op1, op2, 1 );
}


__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2 )
{
 return string_natural_compare_function_ex(result, op1, op2, 0 );
}




void zif_strnatcmp(zend_uint param_count, zval *return_value )
{
 php_strnatcmp(param_count, return_value , 0);
}




void zif_localeconv(zend_uint param_count, zval *return_value )
{
 zval grouping, mon_grouping;
 int len, i;


 if (zend_parse_parameters((param_count) , "") == FAILURE) {
  return;
 }

 _array_init((return_value), 0 );
 _array_init((&grouping), 0 );
 _array_init((&mon_grouping), 0 );


 {
  struct lconv currlocdata;

  localeconv_r( &currlocdata );


  len = strlen(currlocdata.grouping);

  for (i = 0; i < len; i++) {
   add_index_int(&grouping, i, currlocdata.grouping[i]);
  }


  len = strlen(currlocdata.mon_grouping);

  for (i = 0; i < len; i++) {
   add_index_int(&mon_grouping, i, currlocdata.mon_grouping[i]);
  }

  add_assoc_string_ex(return_value, "decimal_point", strlen("decimal_point"), currlocdata.decimal_point);
  add_assoc_string_ex(return_value, "thousands_sep", strlen("thousands_sep"), currlocdata.thousands_sep);
  add_assoc_string_ex(return_value, "int_curr_symbol", strlen("int_curr_symbol"), currlocdata.int_curr_symbol);
  add_assoc_string_ex(return_value, "currency_symbol", strlen("currency_symbol"), currlocdata.currency_symbol);
  add_assoc_string_ex(return_value, "mon_decimal_point", strlen("mon_decimal_point"), currlocdata.mon_decimal_point);
  add_assoc_string_ex(return_value, "mon_thousands_sep", strlen("mon_thousands_sep"), currlocdata.mon_thousands_sep);
  add_assoc_string_ex(return_value, "positive_sign", strlen("positive_sign"), currlocdata.positive_sign);
  add_assoc_string_ex(return_value, "negative_sign", strlen("negative_sign"), currlocdata.negative_sign);
  add_assoc_int_ex(return_value, "int_frac_digits", strlen("int_frac_digits"), currlocdata.int_frac_digits);
  add_assoc_int_ex(return_value, "frac_digits", strlen("frac_digits"), currlocdata.frac_digits);
  add_assoc_int_ex(return_value, "p_cs_precedes", strlen("p_cs_precedes"), currlocdata.p_cs_precedes);
  add_assoc_int_ex(return_value, "p_sep_by_space", strlen("p_sep_by_space"), currlocdata.p_sep_by_space);
  add_assoc_int_ex(return_value, "n_cs_precedes", strlen("n_cs_precedes"), currlocdata.n_cs_precedes);
  add_assoc_int_ex(return_value, "n_sep_by_space", strlen("n_sep_by_space"), currlocdata.n_sep_by_space);
  add_assoc_int_ex(return_value, "p_sign_posn", strlen("p_sign_posn"), currlocdata.p_sign_posn);
  add_assoc_int_ex(return_value, "n_sign_posn", strlen("n_sign_posn"), currlocdata.n_sign_posn);
 }
# 4968 "ext/standard/string.c"
 _zend_hash_str_update((&(*(return_value)).value.arr->ht), "grouping", sizeof("grouping")-1, &grouping );
 _zend_hash_str_update((&(*(return_value)).value.arr->ht), "mon_grouping", sizeof("mon_grouping")-1, &mon_grouping );
}




void zif_strnatcasecmp(zend_uint param_count, zval *return_value )
{
 php_strnatcmp(param_count, return_value , 1);
}




void zif_substr_count(zend_uint param_count, zval *return_value )
{
 char *haystack, *needle;
 zend_int_t offset = 0, length = 0;
 int ac = (param_count);
 int count = 0;
 int haystack_len, needle_len;
 char *p, *endp, cmp;

 if (zend_parse_parameters((param_count) , "ss|ii", &haystack, &haystack_len, &needle, &needle_len, &offset, &length) == FAILURE) {
  return;
 }

 if (needle_len == 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Empty substring");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 p = haystack;
 endp = p + haystack_len;

 if (offset < 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Offset should be greater than or equal to 0");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (offset > haystack_len) {
  php_error_docref0(((void*)0) , (1<<1L), "Offset value " "%" "l" "d" " exceeds string length", offset);
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }
 p += offset;

 if (ac == 4) {

  if (length <= 0) {
   php_error_docref0(((void*)0) , (1<<1L), "Length should be greater than 0");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  if (length > (haystack_len - offset)) {
   php_error_docref0(((void*)0) , (1<<1L), "Length value " "%" "l" "d" " exceeds string length", length);
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
  endp = p + length;
 }

 if (needle_len == 1) {
  cmp = needle[0];

  while ((p = memchr(p, cmp, endp - p))) {
   count++;
   p++;
  }
 } else {
  while ((p = (char*)zend_memnstr(p, needle, needle_len, endp))) {
   p += needle_len;
   count++;
  }
 }

 { { zval *__z = (return_value); (*(__z)).value.lval = count; (*(__z)).u1.type_info = 4; }; return; };
}




void zif_str_pad(zend_uint param_count, zval *return_value )
{

 zend_string *input;
 zend_int_t pad_length;


 size_t num_pad_chars;
 zend_string *pad_str, *pad_str_save;
 zend_int_t pad_type_val = 1;
 int i, left_pad=0, right_pad=0;
 zend_string *result = ((void*)0);

 pad_str = pad_str_save = zend_str_init(" ", 1, 1);
        if (!pad_str) {
            return;
        }

 if (zend_parse_parameters((param_count) , "Si|Si", &input, &pad_length, &pad_str, &pad_type_val) == FAILURE) {
                zend_str_free(pad_str);
  return;
 }

        if (pad_str != pad_str_save) {
            zend_str_free(pad_str_save);
        }



 if (pad_length < 0 || pad_length <= input->len) {
  { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(input->val, input->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
 }

 if (pad_str->len == 0) {
  php_error_docref0(((void*)0) , (1<<1L), "Padding string cannot be empty");
  return;
 }

 if (pad_type_val < 0 || pad_type_val > 2) {
  php_error_docref0(((void*)0) , (1<<1L), "Padding type has to be STR_PAD_LEFT, STR_PAD_RIGHT, or STR_PAD_BOTH");
  return;
 }

 num_pad_chars = pad_length - input->len;
 if (num_pad_chars >= 2147483647) {
  php_error_docref0(((void*)0) , (1<<1L), "Padding length is too long");
  return;
 }

 result = zend_str_alloc(input->len + num_pad_chars, 0);
 result->len = 0;


 switch (pad_type_val) {
  case 1:
   left_pad = 0;
   right_pad = num_pad_chars;
   break;

  case 0:
   left_pad = num_pad_chars;
   right_pad = 0;
   break;

  case 2:
   left_pad = num_pad_chars / 2;
   right_pad = num_pad_chars - left_pad;
   break;
 }


 for (i = 0; i < left_pad; i++)
  result->val[result->len++] = pad_str->val[i % pad_str->len];


 memcpy(result->val + result->len, input->val, input->len);
 result->len += input->len;


 for (i = 0; i < right_pad; i++)
  result->val[result->len++] = pad_str->val[i % pad_str->len];

 result->val[result->len] = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (result); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}




void zif_sscanf(zend_uint param_count, zval *return_value )
{
 zval *args = ((void*)0);
 char *str, *format;
 int str_len, format_len, result, num_args = 0;

 if (zend_parse_parameters((param_count) , "ss*", &str, &str_len, &format, &format_len,
  &args, &num_args) == FAILURE) {
  return;
 }

 result = php_sscanf_internal(str, format, num_args, args, 0, return_value );

 if ((((-1 - 1) - 1) - 1) == result) {
  { zend_wrong_param_count(); return; };
 }
}


static char rot13_from[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
static char rot13_to[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";



void zif_str_rot13(zend_uint param_count, zval *return_value )
{
 zend_string *arg;

 if (zend_parse_parameters((param_count) , "S", &arg) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(arg->val, arg->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);

 php_strtr((*(return_value)).value.str->val, (*(return_value)).value.str->len, rot13_from, rot13_to, 52);
}


static void php_string_shuffle(char *str, zend_int_t len )
{
 zend_int_t n_elems, rnd_idx, n_left;
 char temp;


 n_elems = len;

 if (n_elems <= 1) {
  return;
 }

 n_left = n_elems;

 while (--n_left) {
  rnd_idx = php_rand();
  (rnd_idx) = (0) + (zend_int_t) ((double) ( (double) (n_left) - (0) + 1.0) * ((rnd_idx) / ((2147483647) + 1.0)));
  if (rnd_idx != n_left) {
   temp = str[n_left];
   str[n_left] = str[rnd_idx];
   str[rnd_idx] = temp;
  }
 }
}




void zif_str_shuffle(zend_uint param_count, zval *return_value )
{
 zend_string *arg;

 if (zend_parse_parameters((param_count) , "S", &arg) == FAILURE) {
  return;
 }

 do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(arg->val, arg->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 if ((*(return_value)).value.str->len > 1) {
  php_string_shuffle((*(return_value)).value.str->val, (zend_int_t) (*(return_value)).value.str->len );
 }
}
# 5230 "ext/standard/string.c"
void zif_str_word_count(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 char *char_list = ((void*)0), *p, *e, *s, ch[256];
 int char_list_len = 0, word_count = 0;
 zend_int_t type = 0;

 if (zend_parse_parameters((param_count) , "S|is", &str, &type, &char_list, &char_list_len) == FAILURE) {
  return;
 }

 switch(type) {
  case 1:
  case 2:
   _array_init((return_value), 0 );
   if (!str->len) {
    return;
   }
   break;
  case 0:
   if (!str->len) {
    { { zval *__z = (return_value); (*(__z)).value.lval = 0; (*(__z)).u1.type_info = 4; }; return; };
   }

   break;
  default:
   php_error_docref0(((void*)0) , (1<<1L), "Invalid format value " "%" "l" "d", type);
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (char_list) {
  php_charmask((unsigned char *)char_list, char_list_len, ch );
 }

 p = str->val;
 e = str->val + str->len;


 if ((*p == '\'' && (!char_list || !ch['\''])) || (*p == '-' && (!char_list || !ch['-']))) {
  p++;
 }

 if (*(e - 1) == '-' && (!char_list || !ch['-'])) {
  e--;
 }

 while (p < e) {
  s = p;
  while (p < e && (((*__ctype_b_loc ())[(int) (((unsigned char)*p))] & (unsigned short int) _ISalpha) || (char_list && ch[(unsigned char)*p]) || *p == '\'' || *p == '-')) {
   p++;
  }
  if (p > s) {
   switch (type)
   {
    case 1:
     add_next_index_stringl(return_value, s, p - s);
     break;
    case 2:
     add_index_stringl(return_value, (s - str->val), s, p - s);
     break;
    default:
     word_count++;
     break;
   }
  }
  p++;
 }

 if (!type) {
  { { zval *__z = (return_value); (*(__z)).value.lval = word_count; (*(__z)).u1.type_info = 4; }; return; };
 }
}






void zif_money_format(zend_uint param_count, zval *return_value )
{
 int format_len = 0;
 char *format, *p, *e;
 double value;
 zend_bool check = 0;
 zend_string *str;

 if (zend_parse_parameters((param_count) , "sd", &format, &format_len, &value) == FAILURE) {
  return;
 }

 p = format;
 e = p + format_len;
 while ((p = memchr(p, '%', (e - p)))) {
  if (*(p + 1) == '%') {
   p += 2;
  } else if (!check) {
   check = 1;
   p++;
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "Only a single %%i or %%n token can be used");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
 }

 str = zend_str_alloc(format_len + 1024, 0);
 if ((str->len = strfmon(str->val, str->len, format, value)) < 0) {
  zend_str_free(str);
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }
 str->val[str->len] = '\0';

 { do { zval *__z = (return_value); zend_string *__s = (zend_str_realloc(str, str->len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); return; };
}





void zif_str_split(zend_uint param_count, zval *return_value )
{
 zend_string *str;
 zend_int_t split_length = 1;
 char *p;
 zend_size_t n_reg_segments;

 if (zend_parse_parameters((param_count) , "S|i", &str, &split_length) == FAILURE) {
  return;
 }

 if (split_length <= 0) {
  php_error_docref0(((void*)0) , (1<<1L), "The length of each segment must be greater than zero");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }


 if (0 == str->len || split_length >= str->len) {
  _array_init((return_value), (1) );
  add_next_index_stringl(return_value, str->val, str->len);
  return;
 }

 _array_init((return_value), (((str->len - 1) / split_length) + 1) );

 n_reg_segments = str->len / split_length;
 p = str->val;

 while (n_reg_segments-- > 0) {
  add_next_index_stringl(return_value, p, split_length);
  p += split_length;
 }

 if (p != (str->val + str->len)) {
  add_next_index_stringl(return_value, p, (str->val + str->len - p));
 }
}




void zif_strpbrk(zend_uint param_count, zval *return_value )
{
 zend_string *haystack, *char_list;
 char *haystack_ptr, *cl_ptr;

 if (zend_parse_parameters((param_count) , "SS", &haystack, &char_list) == FAILURE) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if (!char_list->len) {
  php_error_docref0(((void*)0) , (1<<1L), "The character list cannot be empty");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 for (haystack_ptr = haystack->val; haystack_ptr < (haystack->val + haystack->len); ++haystack_ptr) {
  for (cl_ptr = char_list->val; cl_ptr < (char_list->val + char_list->len); ++cl_ptr) {
   if (*cl_ptr == *haystack_ptr) {
    { do { do { zval *__z = (return_value); zend_string *__s = (zend_str_init(haystack_ptr, (haystack->val + haystack->len - haystack_ptr), 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0); return; };
   }
  }
 }

 { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
}




void zif_substr_compare(zend_uint param_count, zval *return_value )
{
 zend_string *s1, *s2;
 zend_int_t offset, len=0;
 zend_bool cs=0;
 zend_size_t cmp_len;

 if (zend_parse_parameters((param_count) , "SSi|ib", &s1, &s2, &offset, &len, &cs) == FAILURE) {
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 if ((param_count) >= 4 && len <= 0) {
  if (len == 0) {
   { { zval *__z = (return_value); (*(__z)).value.lval = 0L; (*(__z)).u1.type_info = 4; }; return; };
  } else {
   php_error_docref0(((void*)0) , (1<<1L), "The length must be greater than or equal to zero");
   { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
  }
 }

 if (offset < 0) {
  offset = s1->len + offset;
  offset = (offset < 0) ? 0 : offset;
 }

 if (offset >= s1->len) {
  php_error_docref0(((void*)0) , (1<<1L), "The start position cannot exceed initial string length");
  { do { (*(return_value)).u1.type_info = (0) ? 3 : 2; } while (0); return; };
 }

 cmp_len = (zend_size_t) (len ? len : (((s2->len)>((s1->len - offset)))?(s2->len):((s1->len - offset))));

 if (!cs) {
  { { zval *__z = (return_value); (*(__z)).value.lval = zend_binary_strncmp(s1->val + offset, (s1->len - offset), s2->val, s2->len, cmp_len); (*(__z)).u1.type_info = 4; }; return; };
 } else {
  { { zval *__z = (return_value); (*(__z)).value.lval = zend_binary_strncasecmp_l(s1->val + offset, (s1->len - offset), s2->val, s2->len, cmp_len); (*(__z)).u1.type_info = 4; }; return; };
 }
}
