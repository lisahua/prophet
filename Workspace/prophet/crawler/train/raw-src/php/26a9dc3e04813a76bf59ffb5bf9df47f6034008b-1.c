# 1 "Zend/zend_execute_API.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "Zend/zend_execute_API.c" 2
# 22 "Zend/zend_execute_API.c"
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
# 23 "Zend/zend_execute_API.c" 2
# 1 "/usr/include/signal.h" 1 3 4
# 32 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
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
# 49 "/usr/include/signal.h" 3 4
typedef __sigset_t sigset_t;








# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4



typedef __pid_t pid_t;





typedef __uid_t uid_t;








# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
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
# 303 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef union pthread_attr_t pthread_attr_t;



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
# 387 "/usr/include/signal.h" 3 4
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
# 388 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ ));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ ));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ ));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ ));
# 24 "Zend/zend_execute_API.c" 2

# 1 "Zend/zend.h" 1
# 51 "Zend/zend.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2505 "Zend/../main/php_config.h"
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
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 43 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
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
# 2506 "Zend/../main/php_config.h" 2
# 2521 "Zend/../main/php_config.h"
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
# 2522 "Zend/../main/php_config.h" 2
# 2532 "Zend/../main/php_config.h"
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
# 2533 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 52 "Zend/zend.h" 2
# 68 "Zend/zend.h"
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
# 69 "Zend/zend.h" 2
# 79 "Zend/zend.h"
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
# 80 "Zend/zend.h" 2
# 259 "Zend/zend.h"
# 1 "Zend/zend_errors.h" 1
# 260 "Zend/zend.h" 2
# 1 "Zend/zend_alloc.h" 1
# 27 "Zend/zend_alloc.h"
# 1 "Zend/../TSRM/TSRM.h" 1
# 20 "Zend/../TSRM/TSRM.h"
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/TSRM/tsrm_config.h" 2
# 21 "Zend/../TSRM/TSRM.h" 2
# 39 "Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "Zend/zend_alloc.h" 2
# 1 "Zend/zend.h" 1
# 29 "Zend/zend_alloc.h" 2
# 44 "Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__)) ;
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__)) ;
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure ) ;
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 93 "Zend/zend_alloc.h"
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
# 139 "Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit );

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 156 "Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );
# 175 "Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 195 "Zend/zend_alloc.h"
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
# 261 "Zend/zend.h" 2

# 1 "Zend/zend_types.h" 1
# 41 "Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 65 "Zend/zend_types.h"
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
 long lval;
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
 zend_ulong h;
 int len;
 char val[1];
};

typedef struct _Bucket {
 zend_ulong h;
 zend_string *key;
 zval val;
} Bucket;

typedef struct _HashTable {
 zend_uint nTableSize;
 zend_uint nTableMask;
 zend_uint nNumUsed;
 zend_uint nNumOfElements;
 long nNextFreeElement;
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
 long handle;
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
# 230 "Zend/zend_types.h"
static inline zend_uchar zval_get_type(const zval* pz) {
 return pz->u1.v.type;
}
# 263 "Zend/zend.h" 2


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
# 266 "Zend/zend.h" 2
# 281 "Zend/zend.h"
static const char long_min_digits[] = "9223372036854775808";






typedef enum {
  SUCCESS = 0,
  FAILURE = -1,
} ZEND_RESULT_CODE;


# 1 "Zend/zend_hash.h" 1
# 26 "Zend/zend_hash.h"
# 1 "Zend/zend.h" 1
# 27 "Zend/zend_hash.h" 2
# 47 "Zend/zend_hash.h"
typedef struct _zend_hash_key {
 ulong h;
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
# 86 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add_or_update(HashTable *ht, const char *key, int len, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_update(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_update_ind(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add(HashTable *ht, const char *key, int len, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_str_add_new(HashTable *ht, const char *key, int len, zval *pData );
# 101 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *_zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, zval *pData, int flag );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_add(HashTable *ht, ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_add_new(HashTable *ht, ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_index_update(HashTable *ht, ulong h, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_next_index_insert(HashTable *ht, zval *pData );
__attribute__ ((visibility("default"))) zval *_zend_hash_next_index_insert_new(HashTable *ht, zval *pData );
# 119 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) zval *zend_hash_index_add_empty_element(HashTable *ht, ulong h);
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
__attribute__ ((visibility("default"))) int zend_hash_index_del(HashTable *ht, ulong h);


__attribute__ ((visibility("default"))) zval *zend_hash_find(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) zval *zend_hash_str_find(const HashTable *ht, const char *key, int len);
__attribute__ ((visibility("default"))) zval *zend_hash_index_find(const HashTable *ht, ulong h);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, zend_string *key);
__attribute__ ((visibility("default"))) int zend_hash_str_exists(const HashTable *ht, const char *str, int len);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, ulong h);




__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, zend_string **str_index, ulong *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_get_current_key_zval_ex(const HashTable *ht, zval *key, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) zval *zend_hash_get_current_data_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 HashTable *ht;
 ulong h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 204 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) zval *zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag );
# 220 "Zend/zend_hash.h"
__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);

__attribute__ ((visibility("default"))) void zend_array_dup(HashTable *target, HashTable *source);
# 238 "Zend/zend_hash.h"
static inline int _zend_handle_numeric_str(const char *key, int length, ulong *idx)
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
    if (*idx-1 > 9223372036854775807L) {
     return 0;
    }
    *idx = 0 - *idx;
   } else if (*idx > 9223372036854775807L) {
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
# 295 "Zend/zend_hash.h"
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
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update(ht, key, pData );
 }
}


static inline zval *zend_symtable_update_ind(HashTable *ht, zend_string *key, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_update_ind(ht, key, pData );
 }
}


static inline int zend_symtable_del(HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del(ht, key);
 }
}


static inline int zend_symtable_del_ind(HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_del_ind(ht, key);
 }
}


static inline zval *zend_symtable_find(const HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find(ht, key);
 }
}


static inline zval *zend_symtable_find_ind(const HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_find_ind(ht, key);
 }
}


static inline int zend_symtable_exists(HashTable *ht, zend_string *key)
{
 ulong idx;

 if (_zend_handle_numeric_str((key)->val, (key)->len, &idx)) {
  return zend_hash_index_exists(ht, idx);
 } else {
  return zend_hash_exists(ht, key);
 }
}


static inline zval *zend_symtable_str_update(HashTable *ht, const char *str, int len, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update(ht, str, len, pData );
 }
}


static inline zval *zend_symtable_str_update_ind(HashTable *ht, const char *str, int len, zval *pData)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return _zend_hash_index_update(ht, idx, pData );
 } else {
  return _zend_hash_str_update_ind(ht, str, len, pData );
 }
}


static inline int zend_symtable_str_del(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del(ht, str, len);
 }
}


static inline int zend_symtable_str_del_ind(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_del(ht, idx);
 } else {
  return zend_hash_str_del_ind(ht, str, len);
 }
}


static inline zval *zend_symtable_str_find(HashTable *ht, const char *str, int len)
{
 ulong idx;

 if (_zend_handle_numeric_str(str, len, &idx)) {
  return zend_hash_index_find(ht, idx);
 } else {
  return zend_hash_str_find(ht, str, len);
 }
}


static inline int zend_symtable_str_exists(HashTable *ht, const char *str, int len)
{
 ulong idx;

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

static inline void *zend_hash_index_update_ptr(HashTable *ht, ulong h, void *pData)
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

static inline void *zend_hash_index_update_mem(HashTable *ht, ulong h, void *pData, size_t size)
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

static inline void *zend_hash_index_find_ptr(const HashTable *ht, ulong h)
{
 zval *zv;

 zv = zend_hash_index_find(ht, h);
 return zv ? (*(zv)).value.ptr : ((void*)0);
}

static inline void *zend_symtable_str_find_ptr(HashTable *ht, const char *str, int len)
{
 ulong idx;

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
# 294 "Zend/zend.h" 2
# 1 "Zend/zend_llist.h" 1
# 25 "Zend/zend_llist.h"
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
# 295 "Zend/zend.h" 2
# 306 "Zend/zend.h"
void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));





# 1 "Zend/zend_object_handlers.h" 1
# 25 "Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, void **cache_slot, zval *rv );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type, zval *rv );
# 45 "Zend/zend_object_handlers.h"
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



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

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
# 312 "Zend/zend.h" 2
# 1 "Zend/zend_ast.h" 1
# 25 "Zend/zend_ast.h"
# 1 "Zend/zend.h" 1
# 26 "Zend/zend_ast.h" 2

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
# 313 "Zend/zend.h" 2
# 403 "Zend/zend.h"
# 1 "Zend/zend_string.h" 1
# 24 "Zend/zend_string.h"
# 1 "Zend/zend.h" 1
# 25 "Zend/zend_string.h" 2



__attribute__ ((visibility("default"))) extern zend_string *(*zend_new_interned_string)(zend_string *str );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

__attribute__ ((visibility("default"))) zend_ulong zend_hash_func(const char *str, uint len);
void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 73 "Zend/zend_string.h"
static inline __attribute__((always_inline)) zend_ulong zend_str_hash_val(zend_string *s)
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

static inline __attribute__((always_inline)) zend_string *zend_str_alloc(int len, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?__zend_malloc((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1))):_emalloc(((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1))) ));

 ((zend_refcounted*)(ret))->refcount = 1;


 ((zend_refcounted*)(ret))->u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 ret->h = 0;
 ret->len = len;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_safe_alloc(size_t n, size_t m, size_t l, int persistent)
{
 zend_string *ret = (zend_string *)((persistent)?_safe_malloc(n, m, (((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1))):_safe_emalloc((n), (m), ((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1))) ));

 ((zend_refcounted*)(ret))->refcount = 1;


 ((zend_refcounted*)(ret))->u.type_info = 6 | ((persistent ? (1<<0) : 0) << 8);





 ret->h = 0;
 ret->len = (n * m) + l;
 return ret;
}

static inline __attribute__((always_inline)) zend_string *zend_str_init(const char *str, int len, int persistent)
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

static inline __attribute__((always_inline)) zend_string *zend_str_realloc(zend_string *s, int len, int persistent)
{
 zend_string *ret;

 if ((((zend_refcounted*)(s))->u.v.flags & (1<<1))) {
  ret = zend_str_alloc(len, persistent);
  memcpy(ret->val, s->val, (len > s->len ? s->len : len) + 1);
 } else if (__builtin_expect(!(!(zend_str_refcount(s) == 1)), 1)) {
  ret = (zend_string *)((persistent)?__zend_realloc((s), ((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1)))):_erealloc(((s)), (((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + len + 1) + 8 - 1) & ~(8 -1)))), 0 ));
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
  ret = (zend_string *)((persistent)?_safe_realloc((s), (n), (m), ((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1)))):_safe_erealloc(((s)), ((n)), ((m)), (((((((long) (((char *) (&(((zend_string*)((void*)0))->val))) - ((char *) ((void*)0)))) + l + 1) + 8 - 1) & ~(8 -1)))) ));
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
# 260 "Zend/zend_string.h"
static inline ulong zend_inline_hash_func(const char *str, uint len)
{
 register ulong hash = 5381;


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
# 404 "Zend/zend.h" 2

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


# 1 "Zend/zend_iterators.h" 1
# 29 "Zend/zend_iterators.h"
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


__attribute__ ((visibility("default"))) void zend_iterator_init(zend_object_iterator *iter );
__attribute__ ((visibility("default"))) void zend_iterator_dtor(zend_object_iterator *iter );

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);
# 432 "Zend/zend.h" 2

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


# 1 "Zend/zend_stream.h" 1
# 30 "Zend/zend_stream.h"
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
# 535 "Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks );
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
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
# 572 "Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);
# 611 "Zend/zend.h"
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
# 637 "Zend/zend.h"
__attribute__ ((visibility("default"))) void free_estring(char **str_p);
__attribute__ ((visibility("default"))) void free_string_zval(zval *zv);
# 649 "Zend/zend.h"
extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks );
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern zend_string *(*zend_vstrpprintf)(size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;
# 688 "Zend/zend.h"
__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);
# 826 "Zend/zend.h"
# 1 "Zend/zend_gc.h" 1
# 76 "Zend/zend_gc.h"
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
# 108 "Zend/zend_gc.h"
} zend_gc_globals;
# 117 "Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_possible_root(zend_refcounted *ref );
__attribute__ ((visibility("default"))) void gc_remove_from_buffer(zend_refcounted *ref );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);
# 140 "Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_check_possible_root(zval *z )
{
 do { if (__builtin_expect(!(!((zval_get_type(&(*(z))) == 10))), 0)) { (z) = &(*(z)).value.ref->val; } } while (0);
 if ((((*(z)).u1.v.type_flags & (1<<2)) != 0) && __builtin_expect(!(!(!((zend_refcounted*)((*(z)).value.counted))->u.v.gc_info)), 0)) {
  gc_possible_root((*(z)).value.counted );
 }
}
# 827 "Zend/zend.h" 2
# 1 "Zend/zend_operators.h" 1
# 25 "Zend/zend_operators.h"
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
# 26 "Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 28 "Zend/zend_operators.h" 2


# 1 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 1 3
# 47 "/home/ubuntu/Workspace/utils/llvm-build/bin/../lib/clang/3.5.0/include/stddef.h" 3
typedef long int ptrdiff_t;
# 31 "Zend/zend_operators.h" 2






# 1 "Zend/zend_strtod.h" 1
# 25 "Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);
# 38 "Zend/zend_operators.h" 2
# 1 "Zend/zend_multiply.h" 1
# 39 "Zend/zend_operators.h" 2








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
# 94 "Zend/zend_operators.h"
static inline __attribute__((always_inline)) long zend_dval_to_lval(double d)
{

 if (d >= 9223372036854775807L || d < (-9223372036854775807L -1L)) {
  double two_pow_64 = pow(2., 64.),
    dmod;

  dmod = fmod(d, two_pow_64);
  if (dmod < 0) {


   dmod += two_pow_64;
  }
  return (long)(unsigned long)dmod;
 }
 return (long)d;
}
# 132 "Zend/zend_operators.h"
static inline zend_uchar is_numeric_string_ex(const char *str, int length, long *lval, double *dval, int allow_errors, int *oflow_info)
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
   int cmp = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (&ptr[-digits]) && __builtin_constant_p (long_min_digits) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s2_len = __builtin_strlen (long_min_digits), (!((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) && (__s1_len = __builtin_strlen (&ptr[-digits]), __s1_len < 4) ? (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (long_min_digits); int __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (&ptr[-digits]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) && (__s2_len = __builtin_strlen (long_min_digits), __s2_len < 4) ? (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (- (__extension__ ({ const unsigned char *__s2 = (const unsigned char *) (const char *) (&ptr[-digits]); int __result = (((const unsigned char *) (const char *) (long_min_digits))[0] - __s2[0]); if (__s2_len > 0 && __result == 0) { __result = (((const unsigned char *) (const char *) (long_min_digits))[1] - __s2[1]); if (__s2_len > 1 && __result == 0) { __result = (((const unsigned char *) (const char *) (long_min_digits))[2] - __s2[2]); if (__s2_len > 2 && __result == 0) __result = (((const unsigned char *) (const char *) (long_min_digits))[3] - __s2[3]); } } __result; })))) : __builtin_strcmp (&ptr[-digits], long_min_digits)))); });

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
   *lval = strtol(str, ((void*)0), base);
  }

  return 4;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 5;
 }
}

static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors) {
    return is_numeric_string_ex(str, length, lval, dval, allow_errors, ((void*)0));
}

__attribute__ ((visibility("default"))) zend_uchar is_numeric_str_function(const zend_string *str, long *lval, double *dval);

static inline const char *
zend_memnstr(const char *haystack, const char *needle, int needle_len, char *end)
{
 const char *p = haystack;
 const char ne = needle[needle_len-1];

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
__attribute__ ((visibility("default"))) void _convert_to_cstring(zval *op );
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

__attribute__ ((visibility("default"))) long _zval_get_long_func(zval *op );
__attribute__ ((visibility("default"))) double _zval_get_double_func(zval *op );
__attribute__ ((visibility("default"))) zend_string *_zval_get_string_func(zval *op );

static inline __attribute__((always_inline)) long _zval_get_long(zval *op ) {
 return zval_get_type(&(*(op))) == 4 ? (*(op)).value.lval : _zval_get_long_func(op );
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
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp_l(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp_l(const char *s1, uint len1, const char *s2, uint len2, uint length);

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );
# 477 "Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
# 494 "Zend/zend_operators.h"
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
# 514 "Zend/zend_operators.h"
  return SUCCESS;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
# 536 "Zend/zend_operators.h"
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
# 556 "Zend/zend_operators.h"
  return SUCCESS;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect(!(!(zval_get_type(&(*(op1))) == 4)), 1)) {
  if (__builtin_expect(!(!(zval_get_type(&(*(op2))) == 4)), 1)) {
# 589 "Zend/zend_operators.h"
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
# 625 "Zend/zend_operators.h"
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
# 674 "Zend/zend_operators.h"
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
# 708 "Zend/zend_operators.h"
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
   long overflow;

   do { long __tmpvar; __asm__ ("imul %3,%0\n" "adc $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*(op1)).value.lval), "r"((*(op2)).value.lval), "1"(0)); if (overflow) ((*(result)).value.dval) = (double) ((*(op1)).value.lval) * (double) ((*(op2)).value.lval); else ((*(result)).value.lval) = __tmpvar; } while (0);
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
# 798 "Zend/zend_operators.h"
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
# 1044 "Zend/zend_operators.h"
__attribute__ ((visibility("default"))) zend_string *zend_long_to_str(long num);
# 828 "Zend/zend.h" 2
# 1 "Zend/zend_variables.h" 1
# 28 "Zend/zend_variables.h"
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
# 121 "Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval *p);
__attribute__ ((visibility("default"))) void zval_add_ref_unref(zval *p);
# 829 "Zend/zend.h" 2

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
# 26 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_compile.h" 1
# 53 "Zend/zend_compile.h"
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
 zend_ulong hash;
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
 zend_uint finally_op;
 zend_uint finally_end;
} zend_try_catch_element;
# 207 "Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 zend_string *name;
 ulong h;
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
# 408 "Zend/zend_compile.h"
# 1 "Zend/zend_globals.h" 1
# 26 "Zend/zend_globals.h"
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
# 27 "Zend/zend_globals.h" 2

# 1 "Zend/zend_globals_macros.h" 1
# 25 "Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;
# 38 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;
# 29 "Zend/zend_globals.h" 2

# 1 "Zend/zend_stack.h" 1
# 25 "Zend/zend_stack.h"
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
# 31 "Zend/zend_globals.h" 2
# 1 "Zend/zend_ptr_stack.h" 1
# 25 "Zend/zend_ptr_stack.h"
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
# 58 "Zend/zend_ptr_stack.h"
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
# 32 "Zend/zend_globals.h" 2


# 1 "Zend/zend_objects.h" 1
# 28 "Zend/zend_objects.h"
__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object *zend_objects_new(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object *old_object );
__attribute__ ((visibility("default"))) zend_object *zend_objects_clone_obj(zval *object );
# 35 "Zend/zend_globals.h" 2
# 1 "Zend/zend_objects_API.h" 1
# 49 "Zend/zend_objects_API.h"
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
# 36 "Zend/zend_globals.h" 2
# 1 "Zend/zend_modules.h" 1
# 26 "Zend/zend_modules.h"
# 1 "Zend/zend_compile.h" 1
# 27 "Zend/zend_modules.h" 2
# 1 "Zend/zend_build.h" 1
# 28 "Zend/zend_modules.h" 2
# 69 "Zend/zend_modules.h"
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
# 118 "Zend/zend_modules.h"
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
# 37 "Zend/zend_globals.h" 2
# 1 "Zend/zend_float.h" 1
# 27 "Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 214 "Zend/zend_float.h"
# 1 "/usr/include/x86_64-linux-gnu/fpu_control.h" 1 3 4
# 91 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 107 "/usr/include/x86_64-linux-gnu/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 215 "Zend/zend_float.h" 2
# 38 "Zend/zend_globals.h" 2
# 1 "Zend/zend_multibyte.h" 1
# 25 "Zend/zend_multibyte.h"
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
# 39 "Zend/zend_globals.h" 2
# 1 "Zend/zend_arena.h" 1
# 26 "Zend/zend_arena.h"
typedef struct _zend_arena zend_arena;

struct _zend_arena {
 char *ptr;
 char *end;
 zend_arena *prev;
};

static inline __attribute__((always_inline)) zend_arena* zend_arena_create(size_t size)
{
 zend_arena *arena = (zend_arena*)_emalloc((size) );

 arena->ptr = (char*) arena + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1));
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

 size = (((size) + 8 - 1) & ~(8 -1));

 if (__builtin_expect(!(!(size <= (size_t)(arena->end - ptr))), 1)) {
  arena->ptr = ptr + size;
 } else {
  size_t arena_size =
   __builtin_expect(!(!((size + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1))) > (size_t)(arena->end - (char*) arena))), 0) ?
    (size + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1))) :
    (arena->end - (char*) arena);
  zend_arena *new_arena = (zend_arena*)_emalloc((arena_size) );

  ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1));
  new_arena->ptr = (char*) new_arena + (((sizeof(zend_arena)) + 8 - 1) & ~(8 -1)) + size;
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
# 40 "Zend/zend_globals.h" 2
# 56 "Zend/zend_globals.h"
# 1 "Zend/zend_compile.h" 1
# 57 "Zend/zend_globals.h" 2








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

 long catch_begin;

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

 long precision;

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


 int timeout_seconds;

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
# 409 "Zend/zend_compile.h" 2



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
# 443 "Zend/zend_compile.h"
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




# 1 "Zend/zend_vm_opcodes.h" 1
# 24 "Zend/zend_vm_opcodes.h"
__attribute__ ((visibility("default"))) const char *zend_get_opcode_name(zend_uchar opcode);
# 713 "Zend/zend_compile.h" 2
# 27 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_execute.h" 1
# 31 "Zend/zend_execute.h"
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

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, ulong fetch_type, char **class_name, zend_class_entry **pce );
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
# 173 "Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc((count * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) );

 page->top = (((zval*)(page)) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))));
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
 int size = count * (((sizeof(zval)) + 8 - 1) & ~(8 -1));
 zend_vm_stack p = zend_vm_stack_new_page(
  (size >= ((16 * 1024) - (((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1)))) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) ?
  (size + (((((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + (16 * 1024)) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1) &
   ~(((16 * 1024) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1) :
  (16 * 1024));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) zend_execute_data *zend_vm_stack_push_call_frame(zend_function *func, zend_uint num_args, zend_uchar flags, zend_class_entry *called_scope, zend_object *object, zend_execute_data *prev )
{
 int used_stack = (((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + num_args;
 zend_execute_data *call;

 if (((func->type & 1) == 0)) {
  used_stack += func->op_array.last_var + func->op_array.T - (((func->op_array.num_args)<(num_args))?(func->op_array.num_args):(num_args));
 }
 do { if (__builtin_expect(!(!(((used_stack) * (((sizeof(zval)) + 8 - 1) & ~(8 -1))) > (size_t)(((char*)(executor_globals.argument_stack)->end) - ((char*)(executor_globals.argument_stack)->top)))), 0)) { zend_vm_stack_extend((used_stack) ); } } while (0);
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
   zval *end = (((zval*)(call)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(call->func->op_array.last_var + call->func->op_array.T))));
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
  zval *end = (((zval*)(call)) + ((1) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1)));
  zval *p = end + num_args;

  do {
   p--;
   i_zval_ptr_dtor_nogc(p );
  } while (p != end);
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_call_frame(zend_execute_data *call )
{
 if (__builtin_expect(!(!((((zval*)((executor_globals.argument_stack))) + (((((sizeof(struct _zend_vm_stack)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1)))) == (zval*)call)), 0)) {
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

__attribute__ ((visibility("default"))) void zend_set_timeout(long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );

__attribute__ ((visibility("default"))) void zend_fetch_dimension_by_zval(zval *result, zval *container, zval *dim );
# 303 "Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval* zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 313 "Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval *var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const zend_execute_data *execute_data, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );

void zend_clean_and_cache_symbol_table(zend_array *symbol_table );
void zend_free_compiled_variables(zend_execute_data *execute_data );
# 28 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_API.h" 1
# 27 "Zend/zend_API.h"
# 1 "Zend/zend_list.h" 1
# 30 "Zend/zend_list.h"
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
# 28 "Zend/zend_API.h" 2







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
# 232 "Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval *argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 252 "Zend/zend_API.h"
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
# 298 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zend_object *object, uint check_flags, zend_string **callable_name, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, zend_string **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, zend_string **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, zend_string *name, zval *property, int access_type, zend_string *doc_comment );
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
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
__attribute__ ((visibility("default"))) void zend_update_property_str(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_string *value );
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

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zend_object *object );
__attribute__ ((visibility("default"))) zend_string *zend_get_object_classname(const zend_object *object );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 364 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);
__attribute__ ((visibility("default"))) void object_properties_init_ex(zend_object *object, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_load(zend_object *object, HashTable *properties );

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(zend_uint param_count, zval *return_value ));

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, zend_resource *r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_str_ex(zval *arg, const char *key, uint key_len, zend_string *str);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 403 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong idx, long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong idx, zend_resource *r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_str(zval *arg, ulong idx, zend_string *str);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong idx, const char *str);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong idx, const char *str, uint length);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n);
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




__attribute__ ((visibility("default"))) zval *add_get_index_long(zval *arg, ulong idx, long l);
__attribute__ ((visibility("default"))) zval *add_get_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) zval *add_get_index_str(zval *arg, ulong index, zend_string *str);
__attribute__ ((visibility("default"))) zval *add_get_index_string(zval *arg, ulong idx, const char *str);
__attribute__ ((visibility("default"))) zval *add_get_index_stringl(zval *arg, ulong idx, const char *str, uint length);

__attribute__ ((visibility("default"))) int array_set_zval_key(HashTable *ht, zval *key, zval *value );

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, zend_resource *r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_str_ex(zval *arg, const char *key, uint key_len, zend_string *str );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 458 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[], int no_separation, zend_array *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 474 "Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, zend_string **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval **params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval *params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );





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
# 708 "Zend/zend_API.h"
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
# 1055 "Zend/zend_API.h"
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

static inline __attribute__((always_inline)) int _z_param_long(zval *arg, long *dest, zend_bool *is_null, int check_null, int strict)
{
 if (check_null) {
  *is_null = 0;
 }
 if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 4)), 1)) {
  *dest = (*(arg)).value.lval;
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 5)), 1)) {
  if (strict && __builtin_expect(!(!((*(arg)).value.dval > 9223372036854775807L)), 0)) {
   *dest = 9223372036854775807L;
  } else if (strict && __builtin_expect(!(!((*(arg)).value.dval < (-9223372036854775807L -1L))), 0)) {
   *dest = (-9223372036854775807L -1L);
  } else {
   *dest = zend_dval_to_lval((*(arg)).value.dval);
  }
 } else if (__builtin_expect(!(!(zval_get_type(&(*(arg))) == 6)), 1)) {
  double d;
  int type;

  if (__builtin_expect(!(!((type = is_numeric_str_function((*(arg)).value.str, dest, &d)) != 4)), 0)) {
   if (__builtin_expect(!(!(type != 0)), 1)) {
    if (strict && __builtin_expect(!(!(d > 9223372036854775807L)), 0)) {
     *dest = 9223372036854775807L;
    } else if (strict && __builtin_expect(!(!(d < (-9223372036854775807L -1L))), 0)) {
     *dest = (-9223372036854775807L -1L);
    } else {
     *dest = zend_dval_to_lval(d);
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
  long l;
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
# 29 "Zend/zend_execute_API.c" 2

# 1 "Zend/zend_constants.h" 1
# 33 "Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 zend_string *name;
 int module_number;
} zend_constant;
# 62 "Zend/zend_constants.h"
void clean_module_constants(int module_number );
void free_zend_constant(zval *zv);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) zval *zend_get_constant(zend_string *name );
__attribute__ ((visibility("default"))) zval *zend_get_constant_str(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zval *zend_get_constant_ex(zend_string *name, zend_class_entry *scope, ulong flags );
__attribute__ ((visibility("default"))) void zend_register_bool_constant(const char *name, uint name_len, zend_bool bval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_null_constant(const char *name, uint name_len, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, uint name_len, long lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
zend_constant *zend_quick_get_constant(const zval *key, ulong flags );
# 31 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_extensions.h" 1
# 33 "Zend/zend_extensions.h"
typedef struct _zend_extension_version_info {
 int zend_extension_api_no;
 char *build_id;
} zend_extension_version_info;



typedef struct _zend_extension zend_extension;


typedef int (*startup_func_t)(zend_extension *extension);
typedef void (*shutdown_func_t)(zend_extension *extension);
typedef void (*activate_func_t)(void);
typedef void (*deactivate_func_t)(void);

typedef void (*message_handler_func_t)(int message, void *arg);

typedef void (*op_array_handler_func_t)(zend_op_array *op_array);

typedef void (*statement_handler_func_t)(zend_op_array *op_array);
typedef void (*fcall_begin_handler_func_t)(zend_op_array *op_array);
typedef void (*fcall_end_handler_func_t)(zend_op_array *op_array);

typedef void (*op_array_ctor_func_t)(zend_op_array *op_array);
typedef void (*op_array_dtor_func_t)(zend_op_array *op_array);

struct _zend_extension {
 char *name;
 char *version;
 char *author;
 char *URL;
 char *copyright;

 startup_func_t startup;
 shutdown_func_t shutdown;
 activate_func_t activate;
 deactivate_func_t deactivate;

 message_handler_func_t message_handler;

 op_array_handler_func_t op_array_handler;

 statement_handler_func_t statement_handler;
 fcall_begin_handler_func_t fcall_begin_handler;
 fcall_end_handler_func_t fcall_end_handler;

 op_array_ctor_func_t op_array_ctor;
 op_array_dtor_func_t op_array_dtor;

 int (*api_no_check)(int api_no);
 int (*build_id_check)(const char* build_id);
 void *reserved3;
 void *reserved4;
 void *reserved5;
 void *reserved6;
 void *reserved7;
 void *reserved8;

 void * handle;
 int resource_number;
};


__attribute__ ((visibility("default"))) int zend_get_resource_handle(zend_extension *extension);
__attribute__ ((visibility("default"))) void zend_extension_dispatch_message(int message, void *arg );
# 111 "Zend/zend_extensions.h"
__attribute__ ((visibility("default"))) extern zend_llist zend_extensions;

void zend_extension_dtor(zend_extension *extension);
void zend_append_version_info(const zend_extension *extension);
int zend_startup_extensions_mechanism(void);
int zend_startup_extensions(void);
void zend_shutdown_extensions(void);


__attribute__ ((visibility("default"))) int zend_load_extension(const char *path );
__attribute__ ((visibility("default"))) int zend_register_extension(zend_extension *new_extension, void * handle );
__attribute__ ((visibility("default"))) zend_extension *zend_get_extension(const char *extension_name);
# 32 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_exceptions.h" 1
# 29 "Zend/zend_exceptions.h"
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
# 33 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_closures.h" 1
# 27 "Zend/zend_closures.h"
void zend_register_closure_ce(void);

extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_closure;

__attribute__ ((visibility("default"))) void zend_create_closure(zval *res, zend_function *op_array, zend_class_entry *scope, zval *this_ptr );
__attribute__ ((visibility("default"))) zend_function *zend_get_closure_invoke_method(zend_object *obj );
__attribute__ ((visibility("default"))) const zend_function *zend_get_closure_method_def(zval *obj );
__attribute__ ((visibility("default"))) zval* zend_get_closure_this_ptr(zval *obj );
# 34 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_generators.h" 1
# 26 "Zend/zend_generators.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_generator;

typedef struct _zend_generator {
 zend_object std;

 zend_object_iterator *iterator;


 zend_execute_data *execute_data;


 zend_vm_stack stack;


 zval value;

 zval key;

 zval *send_target;

 long largest_used_integer_key;


 zend_uchar flags;
} zend_generator;

static const zend_uchar ZEND_GENERATOR_CURRENTLY_RUNNING = 0x1;
static const zend_uchar ZEND_GENERATOR_FORCED_CLOSE = 0x2;
static const zend_uchar ZEND_GENERATOR_AT_FIRST_YIELD = 0x4;

void zend_register_generator_ce(void);
__attribute__ ((visibility("default"))) void zend_generator_create_zval(zend_execute_data *call, zend_op_array *op_array, zval *return_value );
__attribute__ ((visibility("default"))) void zend_generator_close(zend_generator *generator, zend_bool finished_execution );
__attribute__ ((visibility("default"))) void zend_generator_resume(zend_generator *generator );
# 35 "Zend/zend_execute_API.c" 2
# 1 "Zend/zend_vm.h" 1
# 24 "Zend/zend_vm.h"
__attribute__ ((visibility("default"))) void zend_vm_use_old_executor(void);
__attribute__ ((visibility("default"))) void zend_vm_set_opcode_handler(zend_op* opcode);
# 36 "Zend/zend_execute_API.c" 2


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
# 39 "Zend/zend_execute_API.c" 2


__attribute__ ((visibility("default"))) void (*zend_execute_ex)(zend_execute_data *execute_data );
__attribute__ ((visibility("default"))) void (*zend_execute_internal)(zend_execute_data *execute_data, zval *return_value );


__attribute__ ((visibility("default"))) const zend_fcall_info empty_fcall_info = { 0, ((void*)0), {{0}, {{0}}, {0}}, ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), 0 };
__attribute__ ((visibility("default"))) const zend_fcall_info_cache empty_fcall_info_cache = { 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
# 90 "Zend/zend_execute_API.c"
static void zend_extension_activator(zend_extension *extension )
{
 if (extension->activate) {
  extension->activate();
 }
}


static void zend_extension_deactivator(zend_extension *extension )
{
 if (extension->deactivate) {
  extension->deactivate();
 }
}


static int clean_non_persistent_function(zval *zv )
{
 zend_function *function = (*(zv)).value.ptr;
 return (function->type == 1) ? 1<<1 : 1<<0;
}


static int clean_non_persistent_function_full(zval *zv )
{
 zend_function *function = (*(zv)).value.ptr;
 return (function->type == 1) ? 0 : 1<<0;
}


static int clean_non_persistent_class(zval *zv )
{
 zend_class_entry *ce = (*(zv)).value.ptr;
 return (ce->type == 1) ? 1<<1 : 1<<0;
}


static int clean_non_persistent_class_full(zval *zv )
{
 zend_class_entry *ce = (*(zv)).value.ptr;
 return (ce->type == 1) ? 0 : 1<<0;
}


void init_executor(void)
{
 zend_init_fpu();

 do { (*(&(executor_globals.uninitialized_zval))).u1.type_info = 1; } while (0);

 do { (*(&(executor_globals.error_zval))).u1.type_info = 1; } while (0);





 (executor_globals.symtable_cache_ptr) = (executor_globals.symtable_cache) - 1;
 (executor_globals.symtable_cache_limit) = (executor_globals.symtable_cache) + 32 - 1;
 (executor_globals.no_extensions) = 0;

 (executor_globals.function_table) = (compiler_globals.function_table);
 (executor_globals.class_table) = (compiler_globals.class_table);

 (executor_globals.in_autoload) = ((void*)0);
 (executor_globals.autoload_func) = ((void*)0);
 (executor_globals.error_handling) = EH_NORMAL;

 zend_vm_stack_init();

 _zend_hash_init((&(executor_globals.symbol_table).ht), (64), (_zval_ptr_dtor), (0) );
 ((zend_refcounted*)(&(executor_globals.symbol_table)))->refcount = 1;
 ((zend_refcounted*)(&(executor_globals.symbol_table)))->u.type_info = 7;
 (executor_globals.valid_symbol_table) = 1;

 zend_llist_apply(&zend_extensions, (llist_apply_func_t) zend_extension_activator );

 _zend_hash_init((&(executor_globals.included_files)), (8), (((void*)0)), (0) );

 (executor_globals.ticks_count) = 0;

 do { (*(&(executor_globals.user_error_handler))).u1.type_info = 0; } while (0);

 (executor_globals.current_execute_data) = ((void*)0);

 zend_stack_init(&(executor_globals.user_error_handlers_error_reporting), sizeof(int));
 zend_stack_init(&(executor_globals.user_error_handlers), sizeof(zval));
 zend_stack_init(&(executor_globals.user_exception_handlers), sizeof(zval));

 zend_objects_store_init(&(executor_globals.objects_store), 1024);

 (executor_globals.full_tables_cleanup) = 0;




 (executor_globals.exception) = ((void*)0);
 (executor_globals.prev_exception) = ((void*)0);

 (executor_globals.scope) = ((void*)0);

 do { zval *__z = (&(executor_globals.This)); (*(__z)).value.obj = (((void*)0)); (*(__z)).u1.type_info = (8 | (( (1<<1) | (1<<2) ) << 8)); } while (0);

 (executor_globals.active) = 1;
 (executor_globals.start_op) = ((void*)0);
}


static int zval_call_destructor(zval *zv )
{
 if (zval_get_type(&(*(zv))) == 15) {
  zv = (*(zv)).value.zv;
 }
 if (zval_get_type(&(*(zv))) == 8 && zval_refcount_p(zv) == 1) {
  return 1<<0;
 } else {
  return 0;
 }
}


static void zend_unclean_zval_ptr_dtor(zval *zv)
{
               ;

 if (zval_get_type(&(*(zv))) == 15) {
  zv = (*(zv)).value.zv;
 }
 i_zval_ptr_dtor(zv );
}


void shutdown_destructors(void)
{
 if ((compiler_globals.unclean_shutdown)) {
  (executor_globals.symbol_table).ht.pDestructor = zend_unclean_zval_ptr_dtor;
 }
 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  int symbols;
  do {
   symbols = (&(executor_globals.symbol_table).ht)->nNumOfElements;
   zend_hash_reverse_apply(&(executor_globals.symbol_table).ht, (apply_func_t) zval_call_destructor );
  } while (symbols != (&(executor_globals.symbol_table).ht)->nNumOfElements);
  zend_objects_store_call_destructors(&(executor_globals.objects_store) );
 } } else { (executor_globals.bailout) = __orig_bailout; {

  zend_objects_store_mark_destructed(&(executor_globals.objects_store) );
 } } (executor_globals.bailout) = __orig_bailout; };
}


void shutdown_executor(void)
{
 zend_function *func;
 zend_class_entry *ce;

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
# 262 "Zend/zend_execute_API.c"
  zend_llist_apply(&zend_extensions, (llist_apply_func_t) zend_extension_deactivator );

  if ((compiler_globals.unclean_shutdown)) {
   (executor_globals.symbol_table).ht.pDestructor = zend_unclean_zval_ptr_dtor;
  }
  zend_hash_graceful_reverse_destroy(&(executor_globals.symbol_table).ht);
 } } (executor_globals.bailout) = __orig_bailout; };
 (executor_globals.valid_symbol_table) = 0;

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  zval *zeh;


  if (zval_get_type(&((executor_globals.user_error_handler))) != 0) {
   zeh = &(executor_globals.user_error_handler);
   _zval_ptr_dtor((zeh) );
   do { (*(&(executor_globals.user_error_handler))).u1.type_info = 0; } while (0);
  }

  if (zval_get_type(&((executor_globals.user_exception_handler))) != 0) {
   zeh = &(executor_globals.user_exception_handler);
   _zval_ptr_dtor((zeh) );
   do { (*(&(executor_globals.user_exception_handler))).u1.type_info = 0; } while (0);
  }

  zend_stack_clean(&(executor_globals.user_error_handlers_error_reporting), ((void*)0), 1);
  zend_stack_clean(&(executor_globals.user_error_handlers), (void (*)(void *))_zval_dtor_wrapper, 1);
  zend_stack_clean(&(executor_globals.user_exception_handlers), (void (*)(void *))_zval_dtor_wrapper, 1);
 } } (executor_globals.bailout) = __orig_bailout; };

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
# 302 "Zend/zend_execute_API.c"
  if ((executor_globals.full_tables_cleanup)) {
   do { uint _idx; for (_idx = 0; _idx < ((executor_globals.function_table))->nNumUsed; _idx++) { Bucket *_p = ((executor_globals.function_table))->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; func = (*(_z)).value.ptr; {
    if (func->type == 2) {
     zend_cleanup_op_array_data((zend_op_array *) func);
    }
   } } } while (0);
   do { uint _idx; for (_idx = ((executor_globals.class_table))->nNumUsed; _idx > 0; _idx--) { Bucket *_p = ((executor_globals.class_table))->arData + _idx - 1; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; ce = (*(_z)).value.ptr; {
    if (ce->type == 2) {
     zend_cleanup_user_class_data(ce );
    } else {
     zend_cleanup_internal_class_data(ce );
    }
   } } } while (0);
  } else {
   do { uint _idx; for (_idx = ((executor_globals.function_table))->nNumUsed; _idx > 0; _idx--) { Bucket *_p = ((executor_globals.function_table))->arData + _idx - 1; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; func = (*(_z)).value.ptr; {
    if (func->type != 2) {
     break;
    }
    zend_cleanup_op_array_data((zend_op_array *) func);
   } } } while (0);
   do { uint _idx; for (_idx = ((executor_globals.class_table))->nNumUsed; _idx > 0; _idx--) { Bucket *_p = ((executor_globals.class_table))->arData + _idx - 1; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; ce = (*(_z)).value.ptr; {
    if (ce->type != 2) {
     break;
    }
    zend_cleanup_user_class_data(ce );
   } } } while (0);
   zend_cleanup_internal_classes();
  }
 } } (executor_globals.bailout) = __orig_bailout; };

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  zend_llist_destroy(&(compiler_globals.open_files));
 } } (executor_globals.bailout) = __orig_bailout; };

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  zend_close_rsrc_list(&(executor_globals.regular_list) );
 } } (executor_globals.bailout) = __orig_bailout; };

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  zend_objects_store_free_object_storage(&(executor_globals.objects_store) );

  zend_vm_stack_destroy();


  if ((executor_globals.full_tables_cleanup)) {
   zend_hash_reverse_apply((executor_globals.function_table), clean_non_persistent_function_full );
   zend_hash_reverse_apply((executor_globals.class_table), clean_non_persistent_class_full );
  } else {
   zend_hash_reverse_apply((executor_globals.function_table), clean_non_persistent_function );
   zend_hash_reverse_apply((executor_globals.class_table), clean_non_persistent_class );
  }

  while ((executor_globals.symtable_cache_ptr)>=(executor_globals.symtable_cache)) {
   zend_hash_destroy(&(*(executor_globals.symtable_cache_ptr))->ht);
   _efree((*(executor_globals.symtable_cache_ptr)) );
   (executor_globals.symtable_cache_ptr)--;
  }
 } } (executor_globals.bailout) = __orig_bailout; };

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  clean_non_persistent_constants();
 } } (executor_globals.bailout) = __orig_bailout; };

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {




  zend_hash_destroy(&(executor_globals.included_files));

  zend_stack_destroy(&(executor_globals.user_error_handlers_error_reporting));
  zend_stack_destroy(&(executor_globals.user_error_handlers));
  zend_stack_destroy(&(executor_globals.user_exception_handlers));
  zend_objects_store_destroy(&(executor_globals.objects_store));
  if ((executor_globals.in_autoload)) {
   zend_hash_destroy((executor_globals.in_autoload));
   _efree(((executor_globals.in_autoload)) );
  }
 } } (executor_globals.bailout) = __orig_bailout; };

 zend_shutdown_fpu();

 (executor_globals.active) = 0;
}



__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space )
{
 zend_function *func;

 if (!zend_is_executing()) {
  if (space) {
   *space = "";
  }
  return "";
 }

 func = (executor_globals.current_execute_data)->func;
 switch (func->type) {
  case 2:
  case 1:
  {
   zend_class_entry *ce = func->common.scope;

   if (space) {
    *space = ce ? "::" : "";
   }
   return ce ? ce->name->val : "";
  }
  default:
   if (space) {
    *space = "";
   }
   return "";
 }
}


__attribute__ ((visibility("default"))) const char *get_active_function_name(void)
{
 zend_function *func;

 if (!zend_is_executing()) {
  return ((void*)0);
 }
 func = (executor_globals.current_execute_data)->func;
 switch (func->type) {
  case 2: {
    zend_string *function_name = func->common.function_name;

    if (function_name) {
     return function_name->val;
    } else {
     return "main";
    }
   }
   break;
  case 1:
   return func->common.function_name->val;
   break;
  default:
   return ((void*)0);
 }
}


__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void)
{
 zend_execute_data *ex = (executor_globals.current_execute_data);

 while (ex && (!ex->func || !((ex->func->type & 1) == 0))) {
  ex = ex->prev_execute_data;
 }
 if (ex) {
  return ex->func->op_array.filename->val;
 } else {
  return "[no active file]";
 }
}


__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void)
{
 zend_execute_data *ex = (executor_globals.current_execute_data);

 while (ex && (!ex->func || !((ex->func->type & 1) == 0))) {
  ex = ex->prev_execute_data;
 }
 if (ex) {
  if ((executor_globals.exception) && ex->opline->opcode == 149 &&
      ex->opline->lineno == 0 && (executor_globals.opline_before_exception)) {
   return (executor_globals.opline_before_exception)->lineno;
  }
  return ex->opline->lineno;
 } else {
  return 0;
 }
}


__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void)
{
 return (executor_globals.current_execute_data) != 0;
}


__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval *zval_ptr )
{
               ;
 i_zval_ptr_dtor(zval_ptr );
}


__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval *zval_ptr )
{
 if ((((*(zval_ptr)).u1.v.type_flags & (1<<1)) != 0)) {
  zval_delref_p(zval_ptr);
  if (zval_refcount_p(zval_ptr) == 0) {
   _zval_internal_dtor_for_ptr(zval_ptr );
  }
 }
}


__attribute__ ((visibility("default"))) int zend_is_true(zval *op )
{
 return i_zend_is_true(op );
}






__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval *p, zend_bool inline_change, zend_class_entry *scope )
{
 zval *const_value;
 char *colon;

 if ((zval_get_type(&(*(p))) & 0x80)) {
  zend_error((1<<0L), "Cannot declare self-referencing constant '%s'", (*(p)).value.str->val);
 } else if (zval_get_type(&(*(p))) == 11) {
  int refcount;

  do { zval *_zv = (p); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0);
  (*(p)).u1.type_info |= 0x80;
  refcount = (((*(p)).u1.v.type_flags & (1<<1)) != 0) ? zval_refcount_p(p) : 1;
  const_value = zend_get_constant_ex((*(p)).value.str, scope, (*(p)).u1.v.const_flags );
  if (!const_value) {
   char *actual = (*(p)).value.str->val;

   if ((colon = (char*)zend_memrchr((*(p)).value.str->val, ':', (*(p)).value.str->len))) {
    int len;

    zend_error((1<<0L), "Undefined class constant '%s'", (*(p)).value.str->val);
    len = (*(p)).value.str->len - ((colon - (*(p)).value.str->val) + 1);
    if (inline_change) {
     zend_string *tmp = zend_str_init(colon + 1, len, 0);
     zend_str_release((*(p)).value.str);
     (*(p)).value.str = tmp;
    } else {
     (*(p)).value.str = zend_str_init(colon + 1, len, 0);
    }
    (*(p)).u1.v.type_flags = (1<<1) | (1<<3);
   } else {
    zend_string *save = (*(p)).value.str;
    char *slash;
    int actual_len = (*(p)).value.str->len;
    if (((*(p)).u1.v.const_flags & 0x010) && (slash = (char *)zend_memrchr(actual, '\\', actual_len))) {
     actual = slash + 1;
     actual_len -= (actual - (*(p)).value.str->val);
     if (inline_change) {
      zend_string *s = zend_str_init(actual, actual_len, 0);
      (*(p)).value.str = s;
      (*(p)).u1.v.type_flags = (1<<1) | (1<<3);
     }
    }
    if (actual[0] == '\\') {
     if (inline_change) {
      memmove((*(p)).value.str->val, (*(p)).value.str->val+1, (*(p)).value.str->len);
      --(*(p)).value.str->len;
     } else {
      ++actual;
     }
     --actual_len;
    }
    if (((*(p)).u1.v.const_flags & 0x010) == 0) {
     if (save->val[0] == '\\') {
      zend_error((1<<0L), "Undefined constant '%s'", save->val + 1);
     } else {
      zend_error((1<<0L), "Undefined constant '%s'", save->val);
     }
     if (inline_change) {
      zend_str_release(save);
     }
     save = ((void*)0);
    }
    zend_error((1<<3L), "Use of undefined constant %s - assumed '%s'", actual, actual);
    if (!inline_change) {
     do { do { zval *__z = (p); zend_string *__s = (zend_str_init(actual, actual_len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
    } else {
     (*(p)).u1.type_info = (((zend_refcounted*)((*(p)).value.str))->u.v.flags & (1<<1)) ?
      6 : (6 | (( (1<<1) | (1<<3)) << 8));
     if (save && save->val != actual) {
      zend_str_release(save);
     }
    }
   }
  } else {
   if (inline_change) {
    zend_str_release((*(p)).value.str);
   }
   do { zval *_z1 = (p); zval *_z2 = (const_value); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
   if ((((*(p)).u1.type_info & ((1<<0) << 8)) != 0)) {
    zval_update_constant_ex(p, 1, ((void*)0) );
   }
   _zval_opt_copy_ctor((p) );
  }

  if ((((*(p)).u1.v.type_flags & (1<<1)) != 0)) zval_set_refcount_p(p, refcount);
 } else if (zval_get_type(&(*(p))) == 12) {
  zval tmp;
  do { zval *_zv = (p); if ((((*(_zv)).u1.v.type_flags & (1<<3)) != 0) || (((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { if (zval_refcount_p(_zv) > 1) { if (!(((*(_zv)).u1.v.type_flags & (1<<4)) != 0)) { zval_delref_p(_zv); } _zval_copy_ctor_func(_zv ); } } } while (0);

  zend_ast_evaluate(&tmp, (*(p)).value.ast->ast, scope );
  if (inline_change) {
   zend_ast_destroy((*(p)).value.ast->ast);
   _efree(((*(p)).value.ast) );
  }
  do { zval *_z1 = (p); zval *_z2 = (&tmp); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
 }
 return 0;
}


__attribute__ ((visibility("default"))) int zval_update_constant_inline_change(zval *pp, zend_class_entry *scope )
{
 return zval_update_constant_ex(pp, 1, scope );
}


__attribute__ ((visibility("default"))) int zval_update_constant_no_inline_change(zval *pp, zend_class_entry *scope )
{
 return zval_update_constant_ex(pp, 0, scope );
}


__attribute__ ((visibility("default"))) int zval_update_constant(zval *pp, zend_bool inline_change )
{
 return zval_update_constant_ex(pp, inline_change, ((void*)0) );
}


int call_user_function(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[] )
{
 return call_user_function_ex(function_table, object, function_name, retval_ptr, param_count, params, 1, ((void*)0) );
}


int call_user_function_ex(HashTable *function_table, zval *object, zval *function_name, zval *retval_ptr, zend_uint param_count, zval params[], int no_separation, zend_array *symbol_table )
{
 zend_fcall_info fci;

 fci.size = sizeof(fci);
 fci.function_table = function_table;
 fci.object = object ? (*(object)).value.obj : ((void*)0);
 do { zval *_z1 = (&fci.function_name); zval *_z2 = (function_name); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
 fci.retval = retval_ptr;
 fci.param_count = param_count;
 fci.params = params;
 fci.no_separation = (zend_bool) no_separation;
 fci.symbol_table = symbol_table;

 return zend_call_function(&fci, ((void*)0) );
}


int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache )
{
 zend_uint i;
 zend_class_entry *calling_scope = ((void*)0);
 zend_execute_data *call, dummy_execute_data;
 zend_fcall_info_cache fci_cache_local;
 zend_function *func;
 zend_object *orig_object;
 zend_class_entry *orig_scope;
 zval tmp;

 do { (*(fci->retval)).u1.type_info = 0; } while (0);

 if (!(executor_globals.active)) {
  return FAILURE;
 }

 if ((executor_globals.exception)) {
  return FAILURE;
 }

 switch (fci->size) {
  case sizeof(zend_fcall_info):
   break;
  default:
   zend_error((1<<0L), "Corrupted fcall_info provided to zend_call_function()");
   break;
 }

 orig_object = ((executor_globals.This)).value.obj;
 orig_scope = (executor_globals.scope);


 if (!(executor_globals.current_execute_data)) {




  memset(&dummy_execute_data, 0, sizeof(zend_execute_data));
  (executor_globals.current_execute_data) = &dummy_execute_data;
 } else if ((executor_globals.current_execute_data)->func &&
            (((executor_globals.current_execute_data)->func->common.type & 1) == 0) &&
            (executor_globals.current_execute_data)->opline->opcode != 60) {

  dummy_execute_data = *(executor_globals.current_execute_data);
  dummy_execute_data.prev_execute_data = (executor_globals.current_execute_data);
  dummy_execute_data.call = ((void*)0);
  dummy_execute_data.prev_nested_call = ((void*)0);
  dummy_execute_data.opline = ((void*)0);
  dummy_execute_data.func = ((void*)0);
  (executor_globals.current_execute_data) = &dummy_execute_data;
 }

 if (!fci_cache || !fci_cache->initialized) {
  zend_string *callable_name;
  char *error = ((void*)0);

  if (!fci_cache) {
   fci_cache = &fci_cache_local;
  }

  if (!zend_is_callable_ex(&fci->function_name, fci->object, (1<<3), &callable_name, fci_cache, &error )) {
   if (error) {
    zend_error((1<<1L), "Invalid callback %s, %s", callable_name->val, error);
    _efree((error) );
   }
   if (callable_name) {
    zend_str_release(callable_name);
   }
   if ((executor_globals.current_execute_data) == &dummy_execute_data) {
    (executor_globals.current_execute_data) = dummy_execute_data.prev_execute_data;
   }
   return FAILURE;
  } else if (error) {

   if (error[0] >= 'a' && error[0] <= 'z') {
    error[0] += ('A' - 'a');
   }
   zend_error((1<<11L), "%s", error);
   _efree((error) );
  }
  zend_str_release(callable_name);
 }

 func = fci_cache->function_handler;
 call = zend_vm_stack_push_call_frame(func, fci->param_count, 0, fci_cache->called_scope, fci_cache->object, ((void*)0) );
 calling_scope = fci_cache->calling_scope;
 fci->object = fci_cache->object;
 if (fci->object &&
     (!(executor_globals.objects_store).object_buckets ||
      !(!(((zend_uintptr_t)((executor_globals.objects_store).object_buckets[fci->object->handle])) & (1<<0))))) {
  if ((executor_globals.current_execute_data) == &dummy_execute_data) {
   (executor_globals.current_execute_data) = dummy_execute_data.prev_execute_data;
  }
  return FAILURE;
 }

 if (func->common.fn_flags & (0x02|0x40000)) {
  if (func->common.fn_flags & 0x02) {
   zend_error_noreturn((1<<0L), "Cannot call abstract method %s::%s()", func->common.scope->name->val, func->common.function_name->val);
  }
  if (func->common.fn_flags & 0x40000) {
    zend_error((1<<13L), "Function %s%s%s() is deprecated",
    func->common.scope ? func->common.scope->name->val : "",
    func->common.scope ? "::" : "",
    func->common.function_name->val);
  }
 }

 for (i=0; i<fci->param_count; i++) {
  zval *param;

  if ((__builtin_expect(!(!((func)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(i + 1 <= (func)->common.num_args)), 1) ? ((func)->common.arg_info[i + 1 -1].pass_by_reference & (1|2)) : (__builtin_expect(!(!((func)->common.fn_flags & 0x1000000)), 0) != 0) && ((func)->common.arg_info[(func)->common.num_args-1].pass_by_reference & (1|2))))) {
# 785 "Zend/zend_execute_API.c"
   if (!(((fci->params[i]).u1.v.type_flags & (1<<1)) != 0) ||



       (!(zval_get_type(&(fci->params[i])) == 10) && zval_refcount_p(&(fci->params[i])) > 1)) {

    if (fci->no_separation &&
     !(__builtin_expect(!(!((func)->common.arg_info != ((void*)0))), 1) && (__builtin_expect(!(!(i + 1 <= (func)->common.num_args)), 1) ? ((func)->common.arg_info[i + 1 -1].pass_by_reference & (2)) : (__builtin_expect(!(!((func)->common.fn_flags & 0x1000000)), 0) != 0) && ((func)->common.arg_info[(func)->common.num_args-1].pass_by_reference & (2))))) {
     if (i) {

      call->num_args = i;
      zend_vm_stack_free_args(call );
     }
     zend_vm_stack_free_call_frame(call );

     zend_error((1<<1L), "Parameter %d to %s%s%s() expected to be a reference, value given",
      i+1,
      func->common.scope ? func->common.scope->name->val : "",
      func->common.scope ? "::" : "",
      func->common.function_name->val);
     if ((executor_globals.current_execute_data) == &dummy_execute_data) {
      (executor_globals.current_execute_data) = dummy_execute_data.prev_execute_data;
     }
     return FAILURE;
    }

    if ((((fci->params[i]).u1.v.type_flags & (1<<1)) != 0)) {
     zval_delref_p(&(fci->params[i]));
    }
    do { zval *__z1 = (&tmp); zval *__z2 = (&fci->params[i]); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
    do { zend_reference *_ref = _emalloc((sizeof(zend_reference)) ); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (&tmp); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(&fci->params[i])).value.ref = _ref; (*(&fci->params[i])).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0);
    zval_addref_p(&(fci->params[i]));
   } else if (!(zval_get_type(&(fci->params[i])) == 10)) {
    do { zend_reference *_ref = _emalloc((sizeof(zend_reference)) ); ((zend_refcounted*)(_ref))->refcount = 1; ((zend_refcounted*)(_ref))->u.type_info = 10; do { zval *_z1 = (&_ref->val); zval *_z2 = (&fci->params[i]); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); (*(&fci->params[i])).value.ref = _ref; (*(&fci->params[i])).u1.type_info = (10 | (( (1<<1) ) << 8)); } while (0);
    zval_addref_p(&(fci->params[i]));
   } else if ((((fci->params[i]).u1.v.type_flags & (1<<1)) != 0)) {
    zval_addref_p(&(fci->params[i]));
   }
   param = (((zval*)(call)) + ((i+1) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1)));
   do { zval *_z1 = (param); zval *_z2 = (&fci->params[i]); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
  } else if ((zval_get_type(&(fci->params[i])) == 10) &&

             (func->common.fn_flags & 0x200000) == 0 ) {
   param = (((zval*)(call)) + ((i+1) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1)));
   do { zval *__z1 = (param); zval *__z2 = (&(fci->params[i]).value.ref->val); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); _zval_opt_copy_ctor((__z1) ); } while (0);
  } else {
   param = (((zval*)(call)) + ((i+1) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) - 1)));
   do { zval *__z1 = (param); zval *__z2 = (&fci->params[i]); do { zval *_z1 = (__z1); zval *_z2 = (__z2); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0); if ((((*(__z1)).u1.type_info & ((1<<1) << 8)) != 0)) { zval_addref_p(__z1); } } while (0);
  }
 }
 call->num_args = fci->param_count;

 (executor_globals.scope) = calling_scope;
 if (!fci->object ||
     (func->common.fn_flags & 0x01)) {
  ((executor_globals.This)).value.obj = call->object = ((void*)0);
 } else {
  ((executor_globals.This)).value.obj = fci->object;
  zval_addref_p(&((executor_globals.This)));
 }

 if (func->type == 2) {
  (executor_globals.scope) = func->common.scope;
  call->symbol_table = fci->symbol_table;
  if (__builtin_expect(!(!((func->op_array.fn_flags & 0x800000) == 0)), 1)) {
   zend_init_execute_data(call, &func->op_array, fci->retval, VM_FRAME_TOP_FUNCTION );
   zend_execute_ex(call );
  } else {
   zend_generator_create_zval(call, &func->op_array, fci->retval );
  }
 } else if (func->type == 1) {
  int call_via_handler = (func->common.fn_flags & 0x200000) != 0;
  do { (*(fci->retval)).u1.type_info = 1; } while (0);
  if (func->common.scope) {
   (executor_globals.scope) = func->common.scope;
  }
  call->prev_execute_data = (executor_globals.current_execute_data);
  call->return_value = ((void*)0);
  (executor_globals.current_execute_data) = call;
  if (__builtin_expect(!(!(zend_execute_internal == ((void*)0))), 1)) {

   func->internal_function.handler(fci->param_count, fci->retval );
  } else {
   zend_execute_internal(call, fci->retval );
  }
  (executor_globals.current_execute_data) = call->prev_execute_data;
  zend_vm_stack_free_args(call );
  zend_vm_stack_free_call_frame(call );







  if ((executor_globals.exception)) {
   _zval_ptr_dtor((fci->retval) );
   do { (*(fci->retval)).u1.type_info = 0; } while (0);
  }

  if (call_via_handler) {

   fci_cache->initialized = 0;
  }
 } else {
  do { (*(fci->retval)).u1.type_info = 1; } while (0);


  if (fci->object) {
   call->prev_execute_data = (executor_globals.current_execute_data);
   (executor_globals.current_execute_data) = call;
   fci->object->handlers->call_method(func->common.function_name, fci->object, fci->param_count, fci->retval );
   (executor_globals.current_execute_data) = call->prev_execute_data;
  } else {
   zend_error_noreturn((1<<0L), "Cannot call overloaded function for non-object");
  }

  zend_vm_stack_free_args(call );
  zend_vm_stack_free_call_frame(call );

  if (func->type == 5) {
   zend_str_release(func->common.function_name);
  }
  _efree((func) );

  if ((executor_globals.exception)) {
   _zval_ptr_dtor((fci->retval) );
   do { (*(fci->retval)).u1.type_info = 0; } while (0);
  }
 }

 if (((executor_globals.This)).value.obj) {
  _zval_ptr_dtor((&(executor_globals.This)) );
 }

 ((executor_globals.This)).value.obj = orig_object;
 (executor_globals.scope) = orig_scope;
 if ((executor_globals.current_execute_data) == &dummy_execute_data) {
  (executor_globals.current_execute_data) = dummy_execute_data.prev_execute_data;
 }

 if ((executor_globals.exception)) {
  zend_throw_exception_internal(((void*)0) );
 }
 return SUCCESS;
}


__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class_ex(zend_string *name, const zval *key, int use_autoload )
{
 zend_class_entry *ce = ((void*)0);
 zval args[1];
 zval local_retval;
 int retval;
 zend_string *lc_name;
 zend_fcall_info fcall_info;
 zend_fcall_info_cache fcall_cache;

 if (key) {
  lc_name = (*(key)).value.str;
 } else {
  if (name == ((void*)0) || !name->len) {
   return ((void*)0);
  }

  if (name->val[0] == '\\') {
   lc_name = zend_str_alloc(name->len - 1, 0);
   zend_str_tolower_copy(lc_name->val, name->val + 1, name->len - 1);
  } else {
   lc_name = zend_str_alloc(name->len, 0);
   zend_str_tolower_copy(lc_name->val, name->val, name->len);
  }
 }

 ce = zend_hash_find_ptr((executor_globals.class_table), lc_name);
 if (ce) {
  if (!key) {
   zend_str_free(lc_name);
  }
  return ce;
 }




 if (!use_autoload || zend_is_compiling()) {
  if (!key) {
   zend_str_free(lc_name);
  }
  return ((void*)0);
 }

 if (!(executor_globals.autoload_func)) {
  zend_function *func = zend_hash_str_find_ptr((executor_globals.function_table), "__autoload", sizeof("__autoload") - 1);
  if (func) {
   (executor_globals.autoload_func) = func;
  } else {
   if (!key) {
    zend_str_free(lc_name);
   }
   return ((void*)0);
  }

 }


 if (__extension__ ({ char __a0, __a1, __a2; (__builtin_constant_p ("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\") && ((size_t)(const void *)(("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\") + 1) - (size_t)(const void *)("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\") == 1) ? ((__builtin_constant_p (name->val) && ((size_t)(const void *)((name->val) + 1) - (size_t)(const void *)(name->val) == 1)) ? __builtin_strspn (name->val, "0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\") : ((__a0 = ((const char *) ("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\"))[0], __a0 == '\0') ? ((void) (name->val), (size_t) 0) : ((__a1 = ((const char *) ("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\"))[1], __a1 == '\0') ? __strspn_c1 (name->val, __a0) : ((__a2 = ((const char *) ("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\"))[2], __a2 == '\0') ? __strspn_c2 (name->val, __a0, __a1) : (((const char *) ("0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\"))[3] == '\0' ? __strspn_c3 (name->val, __a0, __a1, __a2) : __builtin_strspn (name->val, "0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\")))))) : __builtin_strspn (name->val, "0123456789_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\177\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377\\")); }) != name->len) {
  if (!key) {
   zend_str_free(lc_name);
  }
  return ((void*)0);
 }

 if ((executor_globals.in_autoload) == ((void*)0)) {
  ((executor_globals.in_autoload)) = (HashTable *) _emalloc((sizeof(HashTable)) );
  _zend_hash_init(((executor_globals.in_autoload)), (8), (((void*)0)), (0) );
 }

 if (zend_hash_add_empty_element((executor_globals.in_autoload), lc_name) == ((void*)0)) {
  if (!key) {
   zend_str_free(lc_name);
  }
  return ((void*)0);
 }

 do { (*(&local_retval)).u1.type_info = 0; } while (0);

 if (name->val[0] == '\\') {
  do { do { zval *__z = (&args[0]); zend_string *__s = (zend_str_init(name->val + 1, name->len - 1, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 } else {
  do { zval *__z = (&args[0]); zend_string *__s = (zend_str_copy(name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 }

 fcall_info.size = sizeof(fcall_info);
 fcall_info.function_table = (executor_globals.function_table);
 do { zval *__z = (&fcall_info.function_name); zend_string *__s = (zend_str_copy((executor_globals.autoload_func)->common.function_name)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (((zend_refcounted*)(__s))->u.v.flags & (1<<1)) ? 6 : (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
 fcall_info.symbol_table = ((void*)0);
 fcall_info.retval = &local_retval;
 fcall_info.param_count = 1;
 fcall_info.params = args;
 fcall_info.object = ((void*)0);
 fcall_info.no_separation = 1;

 fcall_cache.initialized = 1;
 fcall_cache.function_handler = (executor_globals.autoload_func);
 fcall_cache.calling_scope = ((void*)0);
 fcall_cache.called_scope = ((void*)0);
 fcall_cache.object = ((void*)0);

 zend_exception_save();
 retval = zend_call_function(&fcall_info, &fcall_cache );
 zend_exception_restore();

 _zval_ptr_dtor((&args[0]) );
 _zval_dtor((&fcall_info.function_name) );

 zend_hash_del((executor_globals.in_autoload), lc_name);

 _zval_ptr_dtor((&local_retval) );

 if (retval == SUCCESS) {
  ce = zend_hash_find_ptr((executor_globals.class_table), lc_name);
 }
 if (!key) {
  zend_str_free(lc_name);
 }
 return ce;
}


__attribute__ ((visibility("default"))) zend_class_entry *zend_lookup_class(zend_string *name )
{
 return zend_lookup_class_ex(name, ((void*)0), 1 );
}


__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, int str_len, zval *retval_ptr, char *string_name )
{
 zval pv;
 zend_op_array *new_op_array;
 zend_uint original_compiler_options;
 int retval;

 if (retval_ptr) {
  do { zval *__z = (&pv); zend_string *__s = (zend_str_alloc(str_len + sizeof("return ;")-1, 1)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0);
  memcpy((pv).value.str->val, "return ", sizeof("return ") - 1);
  memcpy((pv).value.str->val + sizeof("return ") - 1, str, str_len);
  (pv).value.str->val[(pv).value.str->len - 1] = ';';
  (pv).value.str->val[(pv).value.str->len] = '\0';
 } else {
  do { do { zval *__z = (&pv); zend_string *__s = (zend_str_init(str, str_len, 0)); (*(__z)).value.str = __s; (*(__z)).u1.type_info = (6 | (( (1<<1) | (1<<3)) << 8)); } while (0); } while (0);
 }



 original_compiler_options = (compiler_globals.compiler_options);
 (compiler_globals.compiler_options) = 0;
 new_op_array = zend_compile_string(&pv, string_name );
 (compiler_globals.compiler_options) = original_compiler_options;

 if (new_op_array) {
  zval local_retval;
  int orig_interactive = (compiler_globals.interactive);

  (executor_globals.no_extensions)=1;
  (compiler_globals.interactive) = 0;

  { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
   do { (*(&local_retval)).u1.type_info = 0; } while (0);
   zend_execute(new_op_array, &local_retval );
  } } else { (executor_globals.bailout) = __orig_bailout; {
   destroy_op_array(new_op_array );
   _efree((new_op_array) );
   _zend_bailout("Zend/zend_execute_API.c", 1098);
  } } (executor_globals.bailout) = __orig_bailout; };

  (compiler_globals.interactive) = orig_interactive;
  if (zval_get_type(&(local_retval)) != 0) {
   if (retval_ptr) {
    do { zval *_z1 = (retval_ptr); zval *_z2 = (&local_retval); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
   } else {
    _zval_ptr_dtor((&local_retval) );
   }
  } else {
   if (retval_ptr) {
    do { (*(retval_ptr)).u1.type_info = 1; } while (0);
   }
  }

  (executor_globals.no_extensions)=0;
  destroy_op_array(new_op_array );
  _efree((new_op_array) );
  retval = SUCCESS;
 } else {
  retval = FAILURE;
 }
 _zval_dtor((&pv) );
 return retval;
}


__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name )
{
 return zend_eval_stringl(str, strlen(str), retval_ptr, string_name );
}


__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, int str_len, zval *retval_ptr, char *string_name, int handle_exceptions )
{
 int result;

 result = zend_eval_stringl(str, str_len, retval_ptr, string_name );
 if (handle_exceptions && (executor_globals.exception)) {
  zend_exception_error((executor_globals.exception), (1<<0L) );
  result = FAILURE;
 }
 return result;
}


__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions )
{
 return zend_eval_stringl_ex(str, strlen(str), retval_ptr, string_name, handle_exceptions );
}


void execute_new_code(void)
{
 zend_op *opline, *end;
 zend_op *ret_opline;
 int orig_interactive;

 if (!((compiler_globals.active_op_array)->fn_flags & 0x10)
  || (compiler_globals.context).backpatch_count>0
  || (compiler_globals.active_op_array)->function_name
  || (compiler_globals.active_op_array)->type!=2) {
  return;
 }

 ret_opline = get_next_op((compiler_globals.active_op_array) );
 ret_opline->opcode = 62;
 ret_opline->op1_type = (1<<0);
 ret_opline->op1.constant = zend_add_literal((compiler_globals.active_op_array), &(executor_globals.uninitialized_zval) );
 ret_opline->op2_type = (1<<3);

 if (!(executor_globals.start_op)) {
  (executor_globals.start_op) = (compiler_globals.active_op_array)->opcodes;
 }

 opline=(executor_globals.start_op);
 end=(compiler_globals.active_op_array)->opcodes+(compiler_globals.active_op_array)->last;

 while (opline<end) {
  if (opline->op1_type == (1<<0)) {
   opline->op1.zv = &(compiler_globals.active_op_array)->literals[opline->op1.constant];
  }
  if (opline->op2_type == (1<<0)) {
   opline->op2.zv = &(compiler_globals.active_op_array)->literals[opline->op2.constant];
  }
  switch (opline->opcode) {
   case 100:
    if (zval_get_type(&(*(opline->op2.zv))) != 4) {
     zend_resolve_goto_label((compiler_globals.active_op_array), opline, 1 );
    }

   case 42:
    opline->op1.jmp_addr = &(compiler_globals.active_op_array)->opcodes[opline->op1.opline_num];
    break;
   case 45:

    opline->extended_value = (char*)((compiler_globals.active_op_array)->opcodes + opline->extended_value) - (char*)opline;

   case 43:
   case 44:
   case 46:
   case 47:
   case 152:
   case 158:
   case 68:
   case 77:
   case 78:
    opline->op2.jmp_addr = &(compiler_globals.active_op_array)->opcodes[opline->op2.opline_num];
    break;
  }
  zend_vm_set_opcode_handler(opline);
  opline++;
 }

 zend_release_labels(1 );

 orig_interactive = (compiler_globals.interactive);
 (compiler_globals.interactive) = 0;
 zend_execute((compiler_globals.active_op_array), ((void*)0) );
 (compiler_globals.interactive) = orig_interactive;

 if ((executor_globals.exception)) {
  zend_exception_error((executor_globals.exception), (1<<0L) );
 }

 (compiler_globals.active_op_array)->last -= 1;
 (executor_globals.start_op) = (compiler_globals.active_op_array)->opcodes+(compiler_globals.active_op_array)->last;
}


__attribute__ ((visibility("default"))) void zend_timeout(int dummy)
{
               ;

 if (zend_on_timeout) {
# 1243 "Zend/zend_execute_API.c"
  zend_on_timeout((executor_globals.timeout_seconds) );
 }

 zend_error((1<<0L), "Maximum execution time of %d second%s exceeded", (executor_globals.timeout_seconds), (executor_globals.timeout_seconds) == 1 ? "" : "s");
}
# 1363 "Zend/zend_execute_API.c"
void zend_set_timeout(long seconds, int reset_signals)
{
               ;

 (executor_globals.timeout_seconds) = seconds;
# 1382 "Zend/zend_execute_API.c"
 {
  struct itimerval t_r;
  int signo;

  if(seconds) {
   t_r.it_value.tv_sec = seconds;
   t_r.it_value.tv_usec = t_r.it_interval.tv_sec = t_r.it_interval.tv_usec = 0;






   setitimer(ITIMER_PROF, &t_r, ((void*)0));
  }
  signo = 27;


  if (reset_signals) {



   sigset_t sigset;

   signal(signo, zend_timeout);
   sigemptyset(&sigset);
   sigaddset(&sigset, signo);
   sigprocmask(1, &sigset, ((void*)0));

  }
 }


}


void zend_unset_timeout(void)
{






 if ((executor_globals.timeout_seconds)) {
  struct itimerval no_timeout;

  no_timeout.it_value.tv_sec = no_timeout.it_value.tv_usec = no_timeout.it_interval.tv_sec = no_timeout.it_interval.tv_usec = 0;




  setitimer(ITIMER_PROF, &no_timeout, ((void*)0));

 }


}


zend_class_entry *zend_fetch_class(zend_string *class_name, int fetch_type )
{
 zend_class_entry *ce;
 int use_autoload = (fetch_type & 0x80) == 0;
 int silent = (fetch_type & 0x0100) != 0;

 fetch_type &= 0x0f;

check_fetch_type:
 switch (fetch_type) {
  case 1:
   if (!(executor_globals.scope)) {
    zend_error((1<<0L), "Cannot access self:: when no class scope is active");
   }
   return (executor_globals.scope);
  case 2:
   if (!(executor_globals.scope)) {
    zend_error((1<<0L), "Cannot access parent:: when no class scope is active");
   }
   if (!(executor_globals.scope)->parent) {
    zend_error((1<<0L), "Cannot access parent:: when current class scope has no parent");
   }
   return (executor_globals.scope)->parent;
  case 3:
   if (!(executor_globals.current_execute_data) || !(executor_globals.current_execute_data)->called_scope) {
    zend_error((1<<0L), "Cannot access static:: when no class scope is active");
   }
   return (executor_globals.current_execute_data)->called_scope;
  case 4: {
    fetch_type = zend_get_class_fetch_type(class_name->val, class_name->len);
    if (fetch_type!=0) {
     goto check_fetch_type;
    }
   }
   break;
 }

 if ((ce = zend_lookup_class_ex(class_name, ((void*)0), use_autoload )) == ((void*)0)) {
  if (use_autoload) {
   if (!silent && !(executor_globals.exception)) {
    if (fetch_type == 5) {
     zend_error((1<<0L), "Interface '%s' not found", class_name->val);
    } else if (fetch_type == 6) {
                 zend_error((1<<0L), "Trait '%s' not found", class_name->val);
                } else {
     zend_error((1<<0L), "Class '%s' not found", class_name->val);
    }
   }
  }
  return ((void*)0);
 }
 return ce;
}


zend_class_entry *zend_fetch_class_by_name(zend_string *class_name, const zval *key, int fetch_type )
{
 zend_class_entry *ce;
 int use_autoload = (fetch_type & 0x80) == 0;

 if ((ce = zend_lookup_class_ex(class_name, key, use_autoload )) == ((void*)0)) {
  if (use_autoload) {
   if ((fetch_type & 0x0100) == 0 && !(executor_globals.exception)) {
    if ((fetch_type & 0x0f) == 5) {
     zend_error((1<<0L), "Interface '%s' not found", class_name->val);
    } else if ((fetch_type & 0x0f) == 6) {
     zend_error((1<<0L), "Trait '%s' not found", class_name->val);
    } else {
     zend_error((1<<0L), "Class '%s' not found", class_name->val);
    }
   }
  }
  return ((void*)0);
 }
 return ce;
}
# 1528 "Zend/zend_execute_API.c"
typedef struct _zend_abstract_info {
 zend_function *afn[3 + 1];
 int cnt;
 int ctor;
} zend_abstract_info;

static void zend_verify_abstract_class_function(zend_function *fn, zend_abstract_info *ai )
{
 if (fn->common.fn_flags & 0x02) {
  if (ai->cnt < 3) {
   ai->afn[ai->cnt] = fn;
  }
  if (fn->common.fn_flags & 0x2000) {
   if (!ai->ctor) {
    ai->cnt++;
    ai->ctor = 1;
   } else {
    ai->afn[ai->cnt] = ((void*)0);
   }
  } else {
   ai->cnt++;
  }
 }
}


void zend_verify_abstract_class(zend_class_entry *ce )
{
 zend_function *func;
 zend_abstract_info ai;

 if ((ce->ce_flags & 0x10) && !(ce->ce_flags & 0x20)) {
  memset(&ai, 0, sizeof(ai));

  do { uint _idx; for (_idx = 0; _idx < (&ce->function_table)->nNumUsed; _idx++) { Bucket *_p = (&ce->function_table)->arData + _idx; zval *_z = &_p->val; if (0 && zval_get_type(&(*(_z))) == 15) { _z = (*(_z)).value.zv; } if (zval_get_type(&(*(_z))) == 0) continue;; func = (*(_z)).value.ptr; {
   zend_verify_abstract_class_function(func, &ai );
  } } } while (0);

  if (ai.cnt) {
   zend_error((1<<0L), "Class %s contains %d abstract method%s and must therefore be declared abstract or implement the remaining methods (" "%s%s%s%s" "%s%s%s%s" "%s%s%s%s" ")",
    ce->name->val, ai.cnt,
    ai.cnt > 1 ? "s" : "",
    ai.afn[0] ? ((ai.afn[0]) && (ai.afn[0])->common.scope ? (ai.afn[0])->common.scope->name->val : "") : "", ai.afn[0] ? "::" : "", ai.afn[0] ? ai.afn[0]->common.function_name->val : "", ai.afn[0] && ai.afn[0 + 1] ? ", " : (ai.afn[0] && ai.cnt > 3 ? ", ..." : ""),
    ai.afn[1] ? ((ai.afn[1]) && (ai.afn[1])->common.scope ? (ai.afn[1])->common.scope->name->val : "") : "", ai.afn[1] ? "::" : "", ai.afn[1] ? ai.afn[1]->common.function_name->val : "", ai.afn[1] && ai.afn[1 + 1] ? ", " : (ai.afn[1] && ai.cnt > 3 ? ", ..." : ""),
    ai.afn[2] ? ((ai.afn[2]) && (ai.afn[2])->common.scope ? (ai.afn[2])->common.scope->name->val : "") : "", ai.afn[2] ? "::" : "", ai.afn[2] ? ai.afn[2]->common.function_name->val : "", ai.afn[2] && ai.afn[2 + 1] ? ", " : (ai.afn[2] && ai.cnt > 3 ? ", ..." : "")
    );
  }
 }
}


__attribute__ ((visibility("default"))) int zend_delete_global_variable(zend_string *name )
{
    return zend_hash_del_ind(&(executor_globals.symbol_table).ht, name);
}


__attribute__ ((visibility("default"))) zend_array *zend_rebuild_symbol_table(void)
{
 zend_uint i;
 zend_execute_data *ex;
 zend_array *symbol_table;


 ex = (executor_globals.current_execute_data);
 while (ex && (!ex->func || !((ex->func->common.type & 1) == 0))) {
  ex = ex->prev_execute_data;
 }
 if (!ex) {
  return ((void*)0);
 }
 if (ex->symbol_table) {
  return ex->symbol_table;
 }

 if ((executor_globals.symtable_cache_ptr) >= (executor_globals.symtable_cache)) {

  symbol_table = ex->symbol_table = *((executor_globals.symtable_cache_ptr)--);
 } else {
  symbol_table = ex->symbol_table = _emalloc((sizeof(zend_array)) );
  ((zend_refcounted*)(symbol_table))->refcount = 0;
  ((zend_refcounted*)(symbol_table))->u.type_info = 7;
  _zend_hash_init((&symbol_table->ht), (ex->func->op_array.last_var), (_zval_ptr_dtor), (0) );

 }
 for (i = 0; i < ex->func->op_array.last_var; i++) {
  zval zv;

  do { (*(&zv)).value.zv = ((((zval*)(ex)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))); (*(&zv)).u1.type_info = 15; } while (0);
  _zend_hash_add_new(&symbol_table->ht, ex->func->op_array.vars[i], &zv );

 }
 return symbol_table;
}


__attribute__ ((visibility("default"))) void zend_attach_symbol_table(zend_execute_data *execute_data)
{
 int i;
 zend_op_array *op_array = &execute_data->func->op_array;
 HashTable *ht = &execute_data->symbol_table->ht;



 for (i = 0; i < op_array->last_var; i++) {
  zval *zv = zend_hash_find(ht, op_array->vars[i]);

  if (zv) {
   if (zval_get_type(&(*(zv))) == 15) {
    zval *val = (*(zv)).value.zv;
    if (zval_get_type(&(*(val))) == 0) {
     do { (*((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i)))))).u1.type_info = 0; } while (0);
    } else {
     do { zval *_z1 = ((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))); zval *_z2 = (val); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
    }
   } else {
    do { zval *_z1 = ((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))); zval *_z2 = (zv); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
   }
  } else {
   do { (*((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i)))))).u1.type_info = 0; } while (0);
   zv = _zend_hash_update(ht, op_array->vars[i], (((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i)))) );
  }
  do { (*(zv)).value.zv = ((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))); (*(zv)).u1.type_info = 15; } while (0);
 }
}


__attribute__ ((visibility("default"))) void zend_detach_symbol_table(zend_execute_data *execute_data)
{
 int i;
 zend_op_array *op_array = &execute_data->func->op_array;
 HashTable *ht = &execute_data->symbol_table->ht;


 for (i = 0; i < op_array->last_var; i++) {
  if (zval_get_type(&(*((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))))) == 0) {
   zend_hash_del(ht, op_array->vars[i]);
  } else {
   _zend_hash_update(ht, op_array->vars[i], (((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i)))) );
   do { (*((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i)))))).u1.type_info = 0; } while (0);
  }
 }
}


__attribute__ ((visibility("default"))) int zend_set_local_var(zend_string *name, zval *value, int force )
{
 zend_execute_data *execute_data = (executor_globals.current_execute_data);

 while (execute_data && (!execute_data->func || !((execute_data->func->common.type & 1) == 0))) {
  execute_data = execute_data->prev_execute_data;
 }

 if (execute_data) {
  if (!execute_data->symbol_table) {
   zend_ulong h = zend_str_hash_val(name);
   zend_op_array *op_array = &execute_data->func->op_array;
   int i;

   for (i = 0; i < op_array->last_var; i++) {
    if (op_array->vars[i]->h == h &&
        op_array->vars[i]->len == name->len &&
        memcmp(op_array->vars[i]->val, name->val, name->len) == 0) {
     do { zval *_z1 = ((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))); zval *_z2 = (value); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
     return SUCCESS;
    }
   }
   if (force) {
    zend_array *symbol_table = zend_rebuild_symbol_table();
    if (symbol_table) {
     return _zend_hash_update(&symbol_table->ht, name, value ) ? SUCCESS : FAILURE;;
    }
   }
  } else {
   return (_zend_hash_update_ind(&execute_data->symbol_table->ht, name, value ) != ((void*)0)) ? SUCCESS : FAILURE;
  }
 }
 return FAILURE;
}


__attribute__ ((visibility("default"))) int zend_set_local_var_str(const char *name, int len, zval *value, int force )
{
 zend_execute_data *execute_data = (executor_globals.current_execute_data);

 while (execute_data && (!execute_data->func || !((execute_data->func->common.type & 1) == 0))) {
  execute_data = execute_data->prev_execute_data;
 }

 if (execute_data) {
  if (!execute_data->symbol_table) {
   zend_ulong h = zend_hash_func(name, len);
   zend_op_array *op_array = &execute_data->func->op_array;
   int i;

   for (i = 0; i < op_array->last_var; i++) {
    if (op_array->vars[i]->h == h &&
        op_array->vars[i]->len == len &&
        memcmp(op_array->vars[i]->val, name, len) == 0) {
     do { zval *_z1 = ((((zval*)(execute_data)) + ((((((sizeof(zend_execute_data)) + 8 - 1) & ~(8 -1)) + (((sizeof(zval)) + 8 - 1) & ~(8 -1)) - 1) / (((sizeof(zval)) + 8 - 1) & ~(8 -1))) + ((int)(i))))); zval *_z2 = (value); (_z1)->value = (_z2)->value; (*(_z1)).u1.type_info = (*(_z2)).u1.type_info; } while (0);
     return SUCCESS;
    }
   }

   if (force) {
    zend_array *symbol_table = zend_rebuild_symbol_table();
    if (symbol_table) {
     return _zend_hash_str_update(&symbol_table->ht, name, len, value ) ? SUCCESS : FAILURE;;
    }
   }
  } else {
   return (_zend_hash_str_update_ind(&execute_data->symbol_table->ht, name, len, value ) != ((void*)0)) ? SUCCESS : FAILURE;
  }
 }
 return FAILURE;
}
