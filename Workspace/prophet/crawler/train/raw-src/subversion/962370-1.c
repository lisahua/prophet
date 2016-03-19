# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 313 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
# 24 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c"
# 1 "./subversion/svn_private_config.h" 1
# 197 "./subversion/svn_private_config.h"
# 1 "/usr/include/locale.h" 1 3 4
# 25 "/usr/include/locale.h" 3 4
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
# 26 "/usr/include/locale.h" 2 3 4


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
# 145 "/usr/include/locale.h" 3 4
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
# 146 "/usr/include/locale.h" 2 3 4





extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ ));
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));
# 198 "./subversion/svn_private_config.h" 2
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
# 199 "./subversion/svn_private_config.h" 2
# 25 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2

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
# 27 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 33 "/usr/include/stdio.h" 3 4
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
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







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
# 28 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2

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
# 30 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
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
# 63 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h"
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
# 166 "/usr/include/string.h" 3 4
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
# 64 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-build/include/apr-1/apr_want.h" 2
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
# 31 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
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
# 32 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
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
# 33 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2

# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h" 1
# 50 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h"
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apu.h" 1
# 51 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h" 2
# 1 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h" 1
# 39 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h"
typedef struct apr_xlate_t apr_xlate_t;
# 66 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h"
apr_status_t apr_xlate_open(apr_xlate_t **convset,
                                         const char *topage,
                                         const char *frompage,
                                         apr_pool_t *pool);
# 93 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h"
apr_status_t apr_xlate_sb_get(apr_xlate_t *convset, int *onoff);
# 117 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h"
apr_status_t apr_xlate_conv_buffer(apr_xlate_t *convset,
                                                const char *inbuf,
                                                apr_size_t *inbytes_left,
                                                char *outbuf,
                                                apr_size_t *outbytes_left);
# 146 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h"
apr_int32_t apr_xlate_conv_byte(apr_xlate_t *convset,
                                             unsigned char inchar);
# 156 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_xlate.h"
apr_status_t apr_xlate_close(apr_xlate_t *convset);
# 52 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h" 2
# 71 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h"
typedef struct apr_md5_ctx_t apr_md5_ctx_t;


struct apr_md5_ctx_t {

    apr_uint32_t state[4];

    apr_uint32_t count[2];

    unsigned char buffer[64];



    apr_xlate_t *xlate;
};





apr_status_t apr_md5_init(apr_md5_ctx_t *context);







apr_status_t apr_md5_set_xlate(apr_md5_ctx_t *context,
                                            apr_xlate_t *xlate);
# 109 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h"
apr_status_t apr_md5_update(apr_md5_ctx_t *context,
                                         const void *input,
                                         apr_size_t inputLen);







apr_status_t apr_md5_final(unsigned char digest[16],
                                        apr_md5_ctx_t *context);







apr_status_t apr_md5(unsigned char digest[16],
                                  const void *input,
                                  apr_size_t inputLen);
# 139 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h"
apr_status_t apr_md5_encode(const char *password, const char *salt,
                                         char *result, apr_size_t nbytes);
# 151 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h"
apr_status_t apr_bcrypt_encode(const char *pw,
                                            unsigned int count,
                                            const unsigned char *salt,
                                            apr_size_t salt_len,
                                            char *out, apr_size_t out_len);
# 167 "/home/ubuntu/Workspace/prophet/build/benchmarks/apache-deps/apr-util-build/include/apr-1/apr_md5.h"
apr_status_t apr_password_validate(const char *passwd,
                                                const char *hash);
# 35 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2

# 1 "/usr/include/zlib.h" 1 3 4
# 34 "/usr/include/zlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/zconf.h" 1 3 4
# 368 "/usr/include/x86_64-linux-gnu/zconf.h" 3 4
typedef unsigned char Byte;

typedef unsigned int uInt;
typedef unsigned long uLong;





   typedef Byte Bytef;

typedef char charf;
typedef int intf;
typedef uInt uIntf;
typedef uLong uLongf;


   typedef void const *voidpc;
   typedef void *voidpf;
   typedef void *voidp;
# 406 "/usr/include/x86_64-linux-gnu/zconf.h" 3 4
   typedef unsigned z_crc_t;
# 452 "/usr/include/x86_64-linux-gnu/zconf.h" 3 4
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
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ ));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ )) ;
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





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ ));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ )) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ ));



extern char **__environ;

extern char **environ;





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




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





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



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ ));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ )) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ )) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ ));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ ));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ )) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ )) ;






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





extern int syncfs (int __fd) __attribute__ ((__nothrow__ ));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ ));





extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ )) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ ));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 453 "/usr/include/x86_64-linux-gnu/zconf.h" 2 3 4
# 35 "/usr/include/zlib.h" 2 3 4
# 80 "/usr/include/zlib.h" 3 4
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void (*free_func) (voidpf opaque, voidpf address);

struct internal_state;

typedef struct z_stream_s {
            Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

            char *msg;
    struct internal_state *state;

    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;

    int data_type;
    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream *z_streamp;





typedef struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef *extra;
    uInt extra_len;
    uInt extra_max;
    Bytef *name;
    uInt name_max;
    Bytef *comment;
    uInt comm_max;
    int hcrc;
    int done;

} gz_header;

typedef gz_header *gz_headerp;
# 216 "/usr/include/zlib.h" 3 4
extern const char * zlibVersion (void);
# 246 "/usr/include/zlib.h" 3 4
extern int deflate (z_streamp strm, int flush);
# 353 "/usr/include/zlib.h" 3 4
extern int deflateEnd (z_streamp strm);
# 392 "/usr/include/zlib.h" 3 4
extern int inflate (z_streamp strm, int flush);
# 508 "/usr/include/zlib.h" 3 4
extern int inflateEnd (z_streamp strm);
# 587 "/usr/include/zlib.h" 3 4
extern int deflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength);
# 631 "/usr/include/zlib.h" 3 4
extern int deflateCopy (z_streamp dest, z_streamp source);
# 649 "/usr/include/zlib.h" 3 4
extern int deflateReset (z_streamp strm);
# 660 "/usr/include/zlib.h" 3 4
extern int deflateParams (z_streamp strm, int level, int strategy);
# 681 "/usr/include/zlib.h" 3 4
extern int deflateTune (z_streamp strm, int good_length, int max_lazy, int nice_length, int max_chain);
# 698 "/usr/include/zlib.h" 3 4
extern uLong deflateBound (z_streamp strm, uLong sourceLen);
# 713 "/usr/include/zlib.h" 3 4
extern int deflatePending (z_streamp strm, unsigned *pending, int *bits);
# 728 "/usr/include/zlib.h" 3 4
extern int deflatePrime (z_streamp strm, int bits, int value);
# 745 "/usr/include/zlib.h" 3 4
extern int deflateSetHeader (z_streamp strm, gz_headerp head);
# 819 "/usr/include/zlib.h" 3 4
extern int inflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength);
# 842 "/usr/include/zlib.h" 3 4
extern int inflateGetDictionary (z_streamp strm, Bytef *dictionary, uInt *dictLength);
# 857 "/usr/include/zlib.h" 3 4
extern int inflateSync (z_streamp strm);
# 876 "/usr/include/zlib.h" 3 4
extern int inflateCopy (z_streamp dest, z_streamp source);
# 892 "/usr/include/zlib.h" 3 4
extern int inflateReset (z_streamp strm);
# 902 "/usr/include/zlib.h" 3 4
extern int inflateReset2 (z_streamp strm, int windowBits);
# 914 "/usr/include/zlib.h" 3 4
extern int inflatePrime (z_streamp strm, int bits, int value);
# 935 "/usr/include/zlib.h" 3 4
extern long inflateMark (z_streamp strm);
# 963 "/usr/include/zlib.h" 3 4
extern int inflateGetHeader (z_streamp strm, gz_headerp head);
# 1025 "/usr/include/zlib.h" 3 4
typedef unsigned (*in_func) (void *, unsigned char * *);

typedef int (*out_func) (void *, unsigned char *, unsigned);

extern int inflateBack (z_streamp strm, in_func in, void *in_desc, out_func out, void *out_desc);
# 1099 "/usr/include/zlib.h" 3 4
extern int inflateBackEnd (z_streamp strm);







extern uLong zlibCompileFlags (void);
# 1160 "/usr/include/zlib.h" 3 4
extern int compress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
# 1174 "/usr/include/zlib.h" 3 4
extern int compress2 (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen, int level);
# 1190 "/usr/include/zlib.h" 3 4
extern uLong compressBound (uLong sourceLen);






extern int uncompress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
# 1224 "/usr/include/zlib.h" 3 4
typedef struct gzFile_s *gzFile;
# 1264 "/usr/include/zlib.h" 3 4
extern gzFile gzdopen (int fd, const char *mode);
# 1287 "/usr/include/zlib.h" 3 4
extern int gzbuffer (gzFile file, unsigned size);
# 1304 "/usr/include/zlib.h" 3 4
extern int gzsetparams (gzFile file, int level, int strategy);
# 1313 "/usr/include/zlib.h" 3 4
extern int gzread (gzFile file, voidp buf, unsigned len);
# 1341 "/usr/include/zlib.h" 3 4
extern int gzwrite (gzFile file, voidpc buf, unsigned len);







extern int gzprintf (gzFile file, const char *format, ...);
# 1364 "/usr/include/zlib.h" 3 4
extern int gzputs (gzFile file, const char *s);







extern char * gzgets (gzFile file, char *buf, int len);
# 1385 "/usr/include/zlib.h" 3 4
extern int gzputc (gzFile file, int c);





extern int gzgetc (gzFile file);
# 1400 "/usr/include/zlib.h" 3 4
extern int gzungetc (int c, gzFile file);
# 1412 "/usr/include/zlib.h" 3 4
extern int gzflush (gzFile file, int flush);
# 1447 "/usr/include/zlib.h" 3 4
extern int gzrewind (gzFile file);
# 1475 "/usr/include/zlib.h" 3 4
extern int gzeof (gzFile file);
# 1490 "/usr/include/zlib.h" 3 4
extern int gzdirect (gzFile file);
# 1511 "/usr/include/zlib.h" 3 4
extern int gzclose (gzFile file);
# 1524 "/usr/include/zlib.h" 3 4
extern int gzclose_r (gzFile file);
extern int gzclose_w (gzFile file);
# 1536 "/usr/include/zlib.h" 3 4
extern const char * gzerror (gzFile file, int *errnum);
# 1552 "/usr/include/zlib.h" 3 4
extern void gzclearerr (gzFile file);
# 1569 "/usr/include/zlib.h" 3 4
extern uLong adler32 (uLong adler, const Bytef *buf, uInt len);
# 1600 "/usr/include/zlib.h" 3 4
extern uLong crc32 (uLong crc, const Bytef *buf, uInt len);
# 1633 "/usr/include/zlib.h" 3 4
extern int deflateInit_ (z_streamp strm, int level, const char *version, int stream_size);

extern int inflateInit_ (z_streamp strm, const char *version, int stream_size);

extern int deflateInit2_ (z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy, const char *version, int stream_size);



extern int inflateInit2_ (z_streamp strm, int windowBits, const char *version, int stream_size);

extern int inflateBackInit_ (z_streamp strm, int windowBits, unsigned char *window, const char *version, int stream_size);
# 1670 "/usr/include/zlib.h" 3 4
struct gzFile_s {
    unsigned have;
    unsigned char *next;
    off64_t pos;
};
extern int gzgetc_ (gzFile file);
# 1692 "/usr/include/zlib.h" 3 4
   extern gzFile gzopen64 (const char *, const char *);
   extern off64_t gzseek64 (gzFile, off64_t, int);
   extern off64_t gztell64 (gzFile);
   extern off64_t gzoffset64 (gzFile);
   extern uLong adler32_combine64 (uLong, uLong, off64_t);
   extern uLong crc32_combine64 (uLong, uLong, off64_t);
# 1725 "/usr/include/zlib.h" 3 4
   extern gzFile gzopen (const char *, const char *);
   extern off_t gzseek (gzFile, off_t, int);
   extern off_t gztell (gzFile);
   extern off_t gzoffset (gzFile);
   extern uLong adler32_combine (uLong, uLong, off_t);
   extern uLong crc32_combine (uLong, uLong, off_t);
# 1742 "/usr/include/zlib.h" 3 4
    struct internal_state {int dummy;};



extern const char * zError (int);
extern int inflateSyncPoint (z_streamp);
extern const z_crc_t * get_crc_table (void);
extern int inflateUndermine (z_streamp, int);
extern int inflateResetKeep (z_streamp);
extern int deflateResetKeep (z_streamp);






extern int gzvprintf (gzFile file, const char *format, va_list va);
# 37 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2

# 1 "./subversion/include/svn_pools.h" 1
# 54 "./subversion/include/svn_pools.h"
apr_pool_t *
svn_pool_create_ex(apr_pool_t *parent_pool,
                   apr_allocator_t *allocator);


apr_pool_t *
svn_pool_create_ex_debug(apr_pool_t *parent_pool,
                         apr_allocator_t *allocator,
                         const char *file_line);
# 39 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
# 1 "./subversion/include/svn_io.h" 1
# 36 "./subversion/include/svn_io.h"
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
# 37 "./subversion/include/svn_io.h" 2



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
# 72 "./subversion/include/svn_types.h"
typedef struct svn_error_t
{

  apr_status_t apr_err;


  const char *message;


  struct svn_error_t *child;


  apr_pool_t *pool;


  const char *file;


  long line;

} svn_error_t;
# 123 "./subversion/include/svn_types.h"
const void *
svn__apr_hash_index_key(const apr_hash_index_t *hi);


apr_ssize_t
svn__apr_hash_index_klen(const apr_hash_index_t *hi);


void *
svn__apr_hash_index_val(const apr_hash_index_t *hi);




typedef enum
{

  svn_node_none,


  svn_node_file,


  svn_node_dir,


  svn_node_unknown
} svn_node_kind_t;
# 159 "./subversion/include/svn_types.h"
const char *
svn_node_kind_to_word(svn_node_kind_t kind);







svn_node_kind_t
svn_node_kind_from_word(const char *word);



typedef enum
{
  svn_tristate_unknown = 0,
  svn_tristate_false,
  svn_tristate_true
} svn_tristate_t;






const char *
svn_tristate_to_word(svn_tristate_t tristate);







svn_tristate_t
svn_tristate_from_word(const char * word);
# 236 "./subversion/include/svn_types.h"
typedef long int svn_revnum_t;
# 264 "./subversion/include/svn_types.h"
svn_error_t *
svn_revnum_parse(svn_revnum_t *rev,
                 const char *str,
                 const char **endptr);
# 282 "./subversion/include/svn_types.h"
typedef apr_int64_t svn_filesize_t;
# 299 "./subversion/include/svn_types.h"
typedef int svn_boolean_t;
# 313 "./subversion/include/svn_types.h"
enum svn_recurse_kind
{
  svn_nonrecursive = 1,
  svn_recursive
};
# 326 "./subversion/include/svn_types.h"
typedef enum
{







  svn_depth_unknown = -2,
# 346 "./subversion/include/svn_types.h"
  svn_depth_exclude = -1,



  svn_depth_empty = 0,



  svn_depth_files = 1,




  svn_depth_immediates = 2,





  svn_depth_infinity = 3

} svn_depth_t;
# 376 "./subversion/include/svn_types.h"
const char *
svn_depth_to_word(svn_depth_t depth);
# 386 "./subversion/include/svn_types.h"
svn_depth_t
svn_depth_from_word(const char *word);
# 472 "./subversion/include/svn_types.h"
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
# 590 "./subversion/include/svn_types.h"
typedef struct svn_commit_info_t
{

  svn_revnum_t revision;


  const char *date;


  const char *author;


  const char *post_commit_err;

} svn_commit_info_t;
# 621 "./subversion/include/svn_types.h"
svn_commit_info_t *
svn_create_commit_info(apr_pool_t *pool);







svn_commit_info_t *
svn_commit_info_dup(const svn_commit_info_t *src_commit_info,
                    apr_pool_t *pool);
# 644 "./subversion/include/svn_types.h"
typedef struct svn_log_changed_path2_t
{

  char action;


  const char *copyfrom_path;


  svn_revnum_t copyfrom_rev;


  svn_node_kind_t node_kind;



  svn_tristate_t text_modified;



  svn_tristate_t props_modified;




} svn_log_changed_path2_t;
# 681 "./subversion/include/svn_types.h"
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
# 719 "./subversion/include/svn_types.h"
__attribute__((deprecated))
svn_log_changed_path_t *
svn_log_changed_path_dup(const svn_log_changed_path_t *changed_path,
                         apr_pool_t *pool);
# 732 "./subversion/include/svn_types.h"
typedef struct svn_log_entry_t
{
# 742 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths;


  svn_revnum_t revision;



  apr_hash_t *revprops;
# 767 "./subversion/include/svn_types.h"
  svn_boolean_t has_children;
# 781 "./subversion/include/svn_types.h"
  apr_hash_t *changed_paths2;







  svn_boolean_t non_inheritable;




} svn_log_entry_t;
# 805 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_create(apr_pool_t *pool);
# 816 "./subversion/include/svn_types.h"
svn_log_entry_t *
svn_log_entry_dup(const svn_log_entry_t *log_entry, apr_pool_t *pool);
# 852 "./subversion/include/svn_types.h"
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
# 881 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_commit_callback2_t)(
  const svn_commit_info_t *commit_info,
  void *baton,
  apr_pool_t *pool);






typedef svn_error_t *(*svn_commit_callback_t)(
  svn_revnum_t new_revision,
  const char *date,
  const char *author,
  void *baton);
# 945 "./subversion/include/svn_types.h"
svn_error_t *
svn_mime_type_validate(const char *mime_type,
                       apr_pool_t *pool);







svn_boolean_t
svn_mime_type_is_binary(const char *mime_type);
# 965 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_cancel_func_t)(void *cancel_baton);
# 988 "./subversion/include/svn_types.h"
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
# 1009 "./subversion/include/svn_types.h"
svn_lock_t *
svn_lock_create(apr_pool_t *pool);






svn_lock_t *
svn_lock_dup(const svn_lock_t *lock, apr_pool_t *pool);






const char *
svn_uuid_generate(apr_pool_t *pool);






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
# 1080 "./subversion/include/svn_types.h"
typedef struct svn_location_segment_t
{


  svn_revnum_t range_start;
  svn_revnum_t range_end;



  const char *path;

} svn_location_segment_t;
# 1100 "./subversion/include/svn_types.h"
typedef svn_error_t *(*svn_location_segment_receiver_t)(
  svn_location_segment_t *segment,
  void *baton,
  apr_pool_t *pool);







svn_location_segment_t *
svn_location_segment_dup(const svn_location_segment_t *segment,
                         apr_pool_t *pool);





typedef unsigned long svn_linenum_t;
# 1146 "./subversion/include/svn_types.h"
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





  SVN_ERR_STREAM_UNEXPECTED_EOF = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 0,



  SVN_ERR_STREAM_MALFORMED_DATA = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 1,



  SVN_ERR_STREAM_UNRECOGNIZED_DATA = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 2,




  SVN_ERR_STREAM_RESET_NOT_SUPPORTED = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 3,




  SVN_ERR_STREAM_SEEK_NOT_SUPPORTED = (((20000 + 50000) + 50000) + ( 4 * 5000)) + 4,





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
# 712 "./subversion/include/svn_error_codes.h"
  SVN_ERR_FS_UNSUPPORTED_FORMAT = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 43,




  SVN_ERR_FS_REP_BEING_WRITTEN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 44,




  SVN_ERR_FS_TXN_NAME_TOO_LONG = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 45,




  SVN_ERR_FS_NO_SUCH_NODE_ORIGIN = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 46,




  SVN_ERR_FS_UNSUPPORTED_UPGRADE = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 47,




  SVN_ERR_FS_NO_SUCH_CHECKSUM_REP = (((20000 + 50000) + 50000) + ( 8 * 5000)) + 48,





  SVN_ERR_REPOS_LOCKED = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 0,



  SVN_ERR_REPOS_HOOK_FAILURE = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 1,



  SVN_ERR_REPOS_BAD_ARGS = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 2,



  SVN_ERR_REPOS_NO_DATA_FOR_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 3,



  SVN_ERR_REPOS_BAD_REVISION_REPORT = (((20000 + 50000) + 50000) + ( 9 * 5000)) + 4,
# 768 "./subversion/include/svn_error_codes.h"
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





  SVN_ERR_ASSERTION_FAIL = (((20000 + 50000) + 50000) + (23 * 5000)) + 0,



SVN_ERR_LAST } svn_errno_t;
# 59 "./subversion/include/svn_error.h" 2


void
svn_error__locate(const char *file,
                  long line);





char *
svn_strerror(apr_status_t statcode,
             char *buf,
             apr_size_t bufsize);
# 84 "./subversion/include/svn_error.h"
const char *svn_err_best_message(svn_error_t *err,
                                 char *buf,
                                 apr_size_t bufsize);
# 114 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_create(apr_status_t apr_err,
                 svn_error_t *child,
                 const char *message);
# 127 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_createf(apr_status_t apr_err,
                  svn_error_t *child,
                  const char *fmt,
                  ...)
  __attribute__ ((format(printf, 3, 4)));
# 146 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_wrap_apr(apr_status_t status,
                   const char *fmt,
                   ...)
       __attribute__((format(printf, 2, 3)));
# 160 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_quick_wrap(svn_error_t *child,
                     const char *new_msg);
# 175 "./subversion/include/svn_error.h"
svn_error_t *
svn_error_compose_create(svn_error_t *err1,
                         svn_error_t *err2);





void
svn_error_compose(svn_error_t *chain,
                  svn_error_t *new_err);







svn_error_t *
svn_error_root_cause(svn_error_t *err);





svn_error_t *
svn_error_dup(svn_error_t *err);
# 212 "./subversion/include/svn_error.h"
void
svn_error_clear(svn_error_t *error);
# 228 "./subversion/include/svn_error.h"
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
# 251 "./subversion/include/svn_error.h"
void
svn_handle_warning2(FILE *stream,
                    svn_error_t *error,
                    const char *prefix);





__attribute__((deprecated))
void
svn_handle_warning(FILE *stream,
                   svn_error_t *error);
# 314 "./subversion/include/svn_error.h"
svn_error_t *svn_error_purge_tracing(svn_error_t *err);
# 463 "./subversion/include/svn_error.h"
svn_error_t *
svn_error__malfunction(svn_boolean_t can_return,
                       const char *file,
                       int line,
                       const char *expr);
# 488 "./subversion/include/svn_error.h"
typedef svn_error_t *(*svn_error_malfunction_handler_t)
  (svn_boolean_t can_return, const char *file, int line, const char *expr);
# 502 "./subversion/include/svn_error.h"
svn_error_malfunction_handler_t
svn_error_set_malfunction_handler(svn_error_malfunction_handler_t func);
# 513 "./subversion/include/svn_error.h"
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
# 1147 "./subversion/include/svn_types.h" 2
# 43 "./subversion/include/svn_io.h" 2
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
# 190 "./subversion/include/svn_string.h"
svn_stringbuf_t *
svn_stringbuf_create(const char *cstring, apr_pool_t *pool);




svn_stringbuf_t *
svn_stringbuf_ncreate(const char *bytes, apr_size_t size, apr_pool_t *pool);
# 207 "./subversion/include/svn_string.h"
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
# 332 "./subversion/include/svn_string.h"
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







int
svn_cstring_count_newlines(const char *msg);
# 373 "./subversion/include/svn_string.h"
char *
svn_cstring_join(const apr_array_header_t *strings,
                 const char *separator,
                 apr_pool_t *pool);
# 388 "./subversion/include/svn_string.h"
int
svn_cstring_casecmp(const char *str1, const char *str2);
# 44 "./subversion/include/svn_io.h" 2
# 1 "./subversion/include/svn_checksum.h" 1
# 45 "./subversion/include/svn_checksum.h"
typedef enum
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







svn_checksum_t *
svn_checksum_dup(const svn_checksum_t *checksum,
                 apr_pool_t *pool);







const char *
svn_checksum_to_cstring_display(const svn_checksum_t *checksum,
                                apr_pool_t *pool);
# 128 "./subversion/include/svn_checksum.h"
const char *
svn_checksum_to_cstring(const svn_checksum_t *checksum,
                        apr_pool_t *pool);
# 140 "./subversion/include/svn_checksum.h"
const char *
svn_checksum_serialize(const svn_checksum_t *checksum,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 152 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_deserialize(const svn_checksum_t **checksum,
                         const char *data,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 167 "./subversion/include/svn_checksum.h"
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
# 193 "./subversion/include/svn_checksum.h"
svn_checksum_t *
svn_checksum_empty_checksum(svn_checksum_kind_t kind,
                            apr_pool_t *pool);
# 204 "./subversion/include/svn_checksum.h"
svn_checksum_ctx_t *
svn_checksum_ctx_create(svn_checksum_kind_t kind,
                        apr_pool_t *pool);







svn_error_t *
svn_checksum_update(svn_checksum_ctx_t *ctx,
                    const void *data,
                    apr_size_t len);
# 226 "./subversion/include/svn_checksum.h"
svn_error_t *
svn_checksum_final(svn_checksum_t **checksum,
                   const svn_checksum_ctx_t *ctx,
                   apr_pool_t *pool);







apr_size_t
svn_checksum_size(const svn_checksum_t *checksum);







svn_checksum_t *
svn_checksum__from_digest(const unsigned char *digest,
                          svn_checksum_kind_t kind,
                          apr_pool_t *result_pool);
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
# 262 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_open_unique_file3(apr_file_t **file,
                         const char **temp_path,
                         const char *dirpath,
                         svn_io_file_del_t delete_when,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 278 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_open_unique_file2(apr_file_t **f,
                         const char **unique_name_p,
                         const char *path,
                         const char *suffix,
                         svn_io_file_del_t delete_when,
                         apr_pool_t *pool);
# 295 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_open_unique_file(apr_file_t **f,
                        const char **unique_name_p,
                        const char *path,
                        const char *suffix,
                        svn_boolean_t delete_on_close,
                        apr_pool_t *pool);
# 311 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_create_unique_link(const char **unique_name_p,
                          const char *path,
                          const char *dest,
                          const char *suffix,
                          apr_pool_t *pool);
# 325 "./subversion/include/svn_io.h"
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
# 370 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_copy_link(const char *src,
                 const char *dst,
                 apr_pool_t *pool);
# 386 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_copy_dir_recursively(const char *src,
                            const char *dst_parent,
                            const char *dst_basename,
                            svn_boolean_t copy_perms,
                            svn_cancel_func_t cancel_func,
                            void *cancel_baton,
                            apr_pool_t *pool);
# 403 "./subversion/include/svn_io.h"
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
# 439 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_read_only(const char *path,
                          svn_boolean_t ignore_enoent,
                          apr_pool_t *pool);
# 460 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_read_write(const char *path,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *pool);
# 488 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_set_file_read_write_carefully(const char *path,
                                     svn_boolean_t enable_write,
                                     svn_boolean_t ignore_enoent,
                                     apr_pool_t *pool);
# 520 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_set_file_executable(const char *path,
                           svn_boolean_t executable,
                           svn_boolean_t ignore_enoent,
                           apr_pool_t *pool);







svn_error_t *
svn_io_is_file_executable(svn_boolean_t *executable,
                          const char *path,
                          apr_pool_t *pool);
# 546 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_length_line(apr_file_t *file,
                        char *buf,
                        apr_size_t *limit,
                        apr_pool_t *pool);
# 559 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_affected_time(apr_time_t *apr_time,
                          const char *path,
                          apr_pool_t *pool);







svn_error_t *
svn_io_set_file_affected_time(apr_time_t apr_time,
                              const char *path,
                              apr_pool_t *pool);
# 589 "./subversion/include/svn_io.h"
void
svn_io_sleep_for_timestamps(const char *path, apr_pool_t *pool);
# 601 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_filesizes_different_p(svn_boolean_t *different_p,
                             const char *file1,
                             const char *file2,
                             apr_pool_t *pool);







svn_error_t *
svn_io_file_checksum2(svn_checksum_t **checksum,
                      const char *file,
                      svn_checksum_kind_t kind,
                      apr_pool_t *pool);
# 626 "./subversion/include/svn_io.h"
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
svn_io_file_create(const char *file,
                   const char *contents,
                   apr_pool_t *pool);
# 659 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_io_file_lock(const char *lock_file,
                 svn_boolean_t exclusive,
                 apr_pool_t *pool);
# 677 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_file_lock2(const char *lock_file,
                  svn_boolean_t exclusive,
                  svn_boolean_t nonblocking,
                  apr_pool_t *pool);






svn_error_t *
svn_io_file_flush_to_disk(apr_file_t *file,
                          apr_pool_t *pool);




svn_error_t *
svn_io_dir_file_copy(const char *src_path,
                     const char *dest_path,
                     const char *file,
                     apr_pool_t *pool);
# 735 "./subversion/include/svn_io.h"
typedef struct svn_stream_t svn_stream_t;




typedef svn_error_t *(*svn_read_fn_t)(void *baton,
                                      char *buffer,
                                      apr_size_t *len);


typedef svn_error_t *(*svn_write_fn_t)(void *baton,
                                       const char *data,
                                       apr_size_t *len);


typedef svn_error_t *(*svn_close_fn_t)(void *baton);






typedef svn_error_t *(*svn_io_reset_fn_t)(void *baton);






typedef struct svn_stream_mark_t svn_stream_mark_t;






typedef svn_error_t *(*svn_io_mark_fn_t)(void *baton,
                                         svn_stream_mark_t **mark,
                                         apr_pool_t *pool);






typedef svn_error_t *(*svn_io_seek_fn_t)(void *baton,
                                         svn_stream_mark_t *mark);


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
svn_stream_set_write(svn_stream_t *stream,
                     svn_write_fn_t write_fn);


void
svn_stream_set_close(svn_stream_t *stream,
                     svn_close_fn_t close_fn);





void
svn_stream_set_reset(svn_stream_t *stream,
                     svn_io_reset_fn_t reset_fn);





void
svn_stream_set_mark(svn_stream_t *stream,
                    svn_io_mark_fn_t mark_fn);





void
svn_stream_set_seek(svn_stream_t *stream,
                    svn_io_seek_fn_t seek_fn);


svn_stream_t *
svn_stream_empty(apr_pool_t *pool);
# 843 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_disown(svn_stream_t *stream,
                  apr_pool_t *pool);
# 858 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_readonly(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 877 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_writable(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 901 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_open_unique(svn_stream_t **stream,
                       const char **temp_path,
                       const char *dirpath,
                       svn_io_file_del_t delete_when,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 921 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_from_aprfile2(apr_file_t *file,
                         svn_boolean_t disown,
                         apr_pool_t *pool);
# 935 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_stream_t *
svn_stream_from_aprfile(apr_file_t *file,
                        apr_pool_t *pool);
# 967 "./subversion/include/svn_io.h"
svn_stream_t*
svn_stream_from_aprfile_range_readonly(apr_file_t *file,
                                       svn_boolean_t disown,
                                       apr_off_t start,
                                       apr_off_t end,
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
# 1006 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_compressed(svn_stream_t *stream,
                      apr_pool_t *pool);
# 1031 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_checksummed2(svn_stream_t *stream,
                        svn_checksum_t **read_checksum,
                        svn_checksum_t **write_checksum,
                        svn_checksum_kind_t checksum_kind,
                        svn_boolean_t read_all,
                        apr_pool_t *pool);
# 1046 "./subversion/include/svn_io.h"
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


svn_error_t *
svn_stream_write(svn_stream_t *stream,
                 const char *data,
                 apr_size_t *len);


svn_error_t *
svn_stream_close(svn_stream_t *stream);
# 1077 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_reset(svn_stream_t *stream);
# 1090 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_mark(svn_stream_t *stream,
                svn_stream_mark_t **mark,
                apr_pool_t *pool);
# 1102 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_seek(svn_stream_t *stream, svn_stream_mark_t *mark);
# 1113 "./subversion/include/svn_io.h"
svn_stream_t *
svn_stream_tee(svn_stream_t *out1,
               svn_stream_t *out2,
               apr_pool_t *pool);





svn_error_t *
svn_stream_printf(svn_stream_t *stream,
                  apr_pool_t *pool,
                  const char *fmt,
                  ...)
       __attribute__((format(printf, 3, 4)));
# 1138 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_printf_from_utf8(svn_stream_t *stream,
                            const char *encoding,
                            apr_pool_t *pool,
                            const char *fmt,
                            ...)
       __attribute__((format(printf, 4, 5)));
# 1154 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_readline(svn_stream_t *stream,
                    svn_stringbuf_t **stringbuf,
                    const char *eol,
                    svn_boolean_t *eof,
                    apr_pool_t *pool);
# 1169 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_readline_detect_eol(svn_stream_t *stream,
                               svn_stringbuf_t **stringbuf,
                               const char **eol,
                               svn_boolean_t *eof,
                               apr_pool_t *pool);
# 1190 "./subversion/include/svn_io.h"
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
# 1218 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_copy(svn_stream_t *from,
                svn_stream_t *to,
                apr_pool_t *pool);
# 1235 "./subversion/include/svn_io.h"
svn_error_t *
svn_stream_contents_same2(svn_boolean_t *same,
                          svn_stream_t *stream1,
                          svn_stream_t *stream2,
                          apr_pool_t *pool);
# 1248 "./subversion/include/svn_io.h"
__attribute__((deprecated))
svn_error_t *
svn_stream_contents_same(svn_boolean_t *same,
                         svn_stream_t *stream1,
                         svn_stream_t *stream2,
                         apr_pool_t *pool);
# 1268 "./subversion/include/svn_io.h"
svn_error_t *
svn_string_from_stream(svn_string_t **result,
                       svn_stream_t *stream,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool);
# 1292 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_file2(svn_stringbuf_t **result,
                         const char *filename,
                         apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_stringbuf_from_file(svn_stringbuf_t **result,
                        const char *filename,
                        apr_pool_t *pool);
# 1316 "./subversion/include/svn_io.h"
svn_error_t *
svn_stringbuf_from_aprfile(svn_stringbuf_t **result,
                           apr_file_t *file,
                           apr_pool_t *pool);






svn_error_t *
svn_io_remove_file2(const char *path,
                   svn_boolean_t ignore_enoent,
                   apr_pool_t *scratch_pool);





__attribute__((deprecated))
svn_error_t *
svn_io_remove_file(const char *path,
                   apr_pool_t *pool);
# 1349 "./subversion/include/svn_io.h"
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
# 1375 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_get_dir_filenames(apr_hash_t **dirents,
                         const char *path,
                         apr_pool_t *pool);
# 1395 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_get_dirents3(apr_hash_t **dirents,
                    const char *path,
                    svn_boolean_t only_check_type,
                    apr_pool_t *result_pool,
                    apr_pool_t *scratch_pool);







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
# 1433 "./subversion/include/svn_io.h"
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
# 1460 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_dir_walk(const char *dirname,
                apr_int32_t wanted,
                svn_io_walk_func_t walk_func,
                void *walk_baton,
                apr_pool_t *pool);
# 1488 "./subversion/include/svn_io.h"
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
# 1515 "./subversion/include/svn_io.h"
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
# 1558 "./subversion/include/svn_io.h"
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
# 1627 "./subversion/include/svn_io.h"
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
# 1688 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_parse_mimetypes_file(apr_hash_t **type_map,
                            const char *mimetypes_file,
                            apr_pool_t *pool);
# 1707 "./subversion/include/svn_io.h"
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
svn_io_file_info_get(apr_finfo_t *finfo,
                     apr_int32_t wanted,
                     apr_file_t *file,
                     apr_pool_t *pool);



svn_error_t *
svn_io_file_read(apr_file_t *file,
                 void *buf,
                 apr_size_t *nbytes,
                 apr_pool_t *pool);



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
# 1811 "./subversion/include/svn_io.h"
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





svn_error_t *
svn_io_file_rename(const char *from_path,
                   const char *to_path,
                   apr_pool_t *pool);
# 1852 "./subversion/include/svn_io.h"
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
# 1881 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_dir_make_sgid(const char *path,
                     apr_fileperms_t perm,
                     apr_pool_t *pool);


svn_error_t *
svn_io_dir_open(apr_dir_t **new_dir,
                const char *dirname,
                apr_pool_t *pool);






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
# 1936 "./subversion/include/svn_io.h"
svn_error_t *
svn_io_read_version_file(int *version,
                         const char *path,
                         apr_pool_t *pool);






svn_error_t *
svn_io_write_version_file(const char *path,
                          int version,
                          apr_pool_t *pool);
# 40 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2


# 1 "./subversion/include/svn_utf.h" 1
# 59 "./subversion/include/svn_utf.h"
void
svn_utf_initialize(apr_pool_t *pool);




svn_error_t *
svn_utf_stringbuf_to_utf8(svn_stringbuf_t **dest,
                          const svn_stringbuf_t *src,
                          apr_pool_t *pool);





svn_error_t *
svn_utf_string_to_utf8(const svn_string_t **dest,
                       const svn_string_t *src,
                       apr_pool_t *pool);





svn_error_t *
svn_utf_cstring_to_utf8(const char **dest,
                        const char *src,
                        apr_pool_t *pool);







svn_error_t *
svn_utf_cstring_to_utf8_ex2(const char **dest,
                            const char *src,
                            const char *frompage,
                            apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_utf_cstring_to_utf8_ex(const char **dest,
                           const char *src,
                           const char *frompage,
                           const char *convset_key,
                           apr_pool_t *pool);





svn_error_t *
svn_utf_stringbuf_from_utf8(svn_stringbuf_t **dest,
                            const svn_stringbuf_t *src,
                            apr_pool_t *pool);





svn_error_t *
svn_utf_string_from_utf8(const svn_string_t **dest,
                         const svn_string_t *src,
                         apr_pool_t *pool);





svn_error_t *
svn_utf_cstring_from_utf8(const char **dest,
                          const char *src,
                          apr_pool_t *pool);







svn_error_t *
svn_utf_cstring_from_utf8_ex2(const char **dest,
                              const char *src,
                              const char *topage,
                              apr_pool_t *pool);







__attribute__((deprecated))
svn_error_t *
svn_utf_cstring_from_utf8_ex(const char **dest,
                             const char *src,
                             const char *topage,
                             const char *convset_key,
                             apr_pool_t *pool);
# 201 "./subversion/include/svn_utf.h"
const char *
svn_utf_cstring_from_utf8_fuzzy(const char *src,
                                apr_pool_t *pool);





svn_error_t *
svn_utf_cstring_from_utf8_stringbuf(const char **dest,
                                    const svn_stringbuf_t *src,
                                    apr_pool_t *pool);





svn_error_t *
svn_utf_cstring_from_utf8_string(const char **dest,
                                 const svn_string_t *src,
                                 apr_pool_t *pool);
# 43 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2

# 1 "./subversion/include/svn_path.h" 1
# 57 "./subversion/include/svn_path.h"
# 1 "./subversion/include/svn_dirent_uri.h" 1
# 101 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_internal_style(const char *dirent,
                          apr_pool_t *pool);





const char *
svn_dirent_local_style(const char *dirent,
                       apr_pool_t *pool);





const char *
svn_relpath_internal_style(const char *relpath,
                           apr_pool_t *pool);





const char *
svn_relpath_local_style(const char *relpath,
                        apr_pool_t *pool);
# 146 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_join(const char *base,
                const char *component,
                apr_pool_t *pool);
# 163 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_join_many(apr_pool_t *pool,
                     const char *base,
                     ...);
# 177 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_join(const char *base,
                 const char *component,
                 apr_pool_t *pool);
# 197 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_join(const char *base,
             const char *component,
             apr_pool_t *pool);
# 216 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_basename(const char *dirent,
                    apr_pool_t *pool);
# 230 "./subversion/include/svn_dirent_uri.h"
char *
svn_dirent_dirname(const char *dirent,
                   apr_pool_t *pool);
# 258 "./subversion/include/svn_dirent_uri.h"
void
svn_dirent_split(const char **dirpath,
                 const char **base_name,
                 const char *dirent,
                 apr_pool_t *pool);
# 282 "./subversion/include/svn_dirent_uri.h"
void
svn_relpath_split(const char **dirpath,
                  const char **base_name,
                  const char *relpath,
                  apr_pool_t *pool);
# 302 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_basename(const char *uri,
                     apr_pool_t *pool);
# 315 "./subversion/include/svn_dirent_uri.h"
char *
svn_relpath_dirname(const char *relpath,
                    apr_pool_t *pool);
# 340 "./subversion/include/svn_dirent_uri.h"
void
svn_uri_split(const char **dirpath,
              const char **base_name,
              const char *uri,
              apr_pool_t *pool);
# 360 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_basename(const char *uri,
                 apr_pool_t *pool);
# 374 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_dirname(const char *dirent,
                apr_pool_t *pool);
# 385 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_absolute(const char *dirent);





svn_boolean_t
svn_uri_is_absolute(const char *uri);
# 406 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_root(const char *dirent,
                   apr_size_t len);







svn_boolean_t
svn_uri_is_root(const char *uri,
                apr_size_t len);
# 435 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_canonicalize(const char *dirent,
                        apr_pool_t *pool);
# 455 "./subversion/include/svn_dirent_uri.h"
const char *
svn_relpath_canonicalize(const char *uri,
                         apr_pool_t *pool);
# 479 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_canonicalize(const char *uri,
                     apr_pool_t *pool);
# 492 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_canonical(const char *dirent,
                        apr_pool_t *pool);






svn_boolean_t
svn_relpath_is_canonical(const char *relpath,
                         apr_pool_t *scratch_pool);






svn_boolean_t
svn_uri_is_canonical(const char *uri,
                     apr_pool_t *pool);







char *
svn_dirent_get_longest_ancestor(const char *dirent1,
                                const char *dirent2,
                                apr_pool_t *pool);







char *
svn_relpath_get_longest_ancestor(const char *relpath1,
                                 const char *relpath2,
                                 apr_pool_t *pool);
# 548 "./subversion/include/svn_dirent_uri.h"
char *
svn_uri_get_longest_ancestor(const char *uri1,
                             const char *uri2,
                             apr_pool_t *pool);







svn_error_t *
svn_dirent_get_absolute(const char **pabsolute,
                        const char *relative,
                        apr_pool_t *pool);
# 586 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_is_child(const char *uri1,
                 const char *uri2,
                 apr_pool_t *pool);
# 600 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_is_child(const char *dirent1,
                    const char *dirent2,
                    apr_pool_t *pool);







const char *
svn_relpath_is_child(const char *relpath1,
                     const char *relpath2,
                     apr_pool_t *pool);






svn_boolean_t
svn_dirent_is_ancestor(const char *path1,
                       const char *path2);
# 632 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_relpath_is_ancestor(const char *relpath1,
                        const char *relpath2);
# 643 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_uri_is_ancestor(const char *uri1,
                    const char *uri2);
# 657 "./subversion/include/svn_dirent_uri.h"
const char *
svn_dirent_skip_ancestor(const char *dirent1,
                         const char *dirent2);







const char *
svn_relpath_skip_ancestor(const char *relpath1,
                          const char *relpath2);
# 680 "./subversion/include/svn_dirent_uri.h"
const char *
svn_uri_skip_ancestor(const char *uri1,
                      const char *uri2);
# 717 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_dirent_condense_targets(const char **pcommon,
                            apr_array_header_t **pcondensed_targets,
                            const apr_array_header_t *targets,
                            svn_boolean_t remove_redundancies,
                            apr_pool_t *result_pool,
                            apr_pool_t *scratch_pool);
# 758 "./subversion/include/svn_dirent_uri.h"
svn_error_t *
svn_uri_condense_targets(const char **pcommon,
                         apr_array_header_t **pcondensed_targets,
                         const apr_array_header_t *targets,
                         svn_boolean_t remove_redundancies,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool);
# 776 "./subversion/include/svn_dirent_uri.h"
svn_boolean_t
svn_dirent_is_under_root(char **full_path,
                         const char *base_path,
                         const char *path,
                         apr_pool_t *pool);






svn_error_t *
svn_uri_get_dirent_from_file_url(const char **dirent,
                                 const char *url,
                                 apr_pool_t *pool);






svn_error_t *
svn_uri_get_file_url_from_dirent(const char **url,
                                 const char *dirent,
                                 apr_pool_t *pool);
# 58 "./subversion/include/svn_path.h" 2
# 69 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_internal_style(const char *path, apr_pool_t *pool);




__attribute__((deprecated))
const char *
svn_path_local_style(const char *path, apr_pool_t *pool);
# 106 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_join(const char *base, const char *component, apr_pool_t *pool);
# 124 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_join_many(apr_pool_t *pool, const char *base, ...);
# 146 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_basename(const char *path, apr_pool_t *pool);
# 161 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_dirname(const char *path, apr_pool_t *pool);
# 174 "./subversion/include/svn_path.h"
void
svn_path_splitext(const char **path_root, const char **path_ext,
                  const char *path, apr_pool_t *pool);





apr_size_t
svn_path_component_count(const char *path);
# 195 "./subversion/include/svn_path.h"
void
svn_path_add_component(svn_stringbuf_t *path, const char *component);


void
svn_path_remove_component(svn_stringbuf_t *path);






void
svn_path_remove_components(svn_stringbuf_t *path, apr_size_t n);
# 234 "./subversion/include/svn_path.h"
__attribute__((deprecated))
void
svn_path_split(const char *path,
               const char **dirpath,
               const char **base_name,
               apr_pool_t *pool);






int
svn_path_is_empty(const char *path);
# 271 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_canonicalize(const char *path, apr_pool_t *pool);







__attribute__((deprecated))
svn_boolean_t
svn_path_is_canonical(const char *path, apr_pool_t *pool);





int
svn_path_compare_paths(const char *path1, const char *path2);
# 305 "./subversion/include/svn_path.h"
__attribute__((deprecated))
char *
svn_path_get_longest_ancestor(const char *path1,
                              const char *path2,
                              apr_pool_t *pool);
# 319 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_get_absolute(const char **pabsolute,
                      const char *relative,
                      apr_pool_t *pool);
# 333 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_split_if_file(const char *path,
                       const char **pdirectory,
                       const char **pfile,
                       apr_pool_t *pool);
# 373 "./subversion/include/svn_path.h"
__attribute__((deprecated))
svn_error_t *
svn_path_condense_targets(const char **pcommon,
                          apr_array_header_t **pcondensed_targets,
                          const apr_array_header_t *targets,
                          svn_boolean_t remove_redundancies,
                          apr_pool_t *pool);
# 419 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_remove_redundancies(apr_array_header_t **pcondensed_targets,
                             const apr_array_header_t *targets,
                             apr_pool_t *pool);







apr_array_header_t *
svn_path_decompose(const char *path, apr_pool_t *pool);
# 442 "./subversion/include/svn_path.h"
const char *
svn_path_compose(const apr_array_header_t *components, apr_pool_t *pool);






svn_boolean_t
svn_path_is_single_path_component(const char *name);
# 461 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_backpath_present(const char *path);
# 472 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_dotpath_present(const char *path);
# 494 "./subversion/include/svn_path.h"
__attribute__((deprecated))
const char *
svn_path_is_child(const char *path1, const char *path2, apr_pool_t *pool);







__attribute__((deprecated))
svn_boolean_t
svn_path_is_ancestor(const char *path1, const char *path2);
# 527 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_check_valid(const char *path, apr_pool_t *pool);
# 538 "./subversion/include/svn_path.h"
svn_boolean_t
svn_path_is_url(const char *path);


svn_boolean_t
svn_path_is_uri_safe(const char *path);




const char *
svn_path_uri_encode(const char *path, apr_pool_t *pool);


const char *
svn_path_uri_decode(const char *path, apr_pool_t *pool);
# 582 "./subversion/include/svn_path.h"
const char *
svn_path_url_add_component2(const char *url,
                            const char *component,
                            apr_pool_t *pool);






__attribute__((deprecated))
const char *
svn_path_url_add_component(const char *url,
                           const char *component,
                           apr_pool_t *pool);
# 605 "./subversion/include/svn_path.h"
const char *
svn_path_uri_from_iri(const char *iri, apr_pool_t *pool);
# 618 "./subversion/include/svn_path.h"
const char *
svn_path_uri_autoescape(const char *uri, apr_pool_t *pool);
# 630 "./subversion/include/svn_path.h"
svn_error_t *
svn_path_cstring_from_utf8(const char **path_apr,
                           const char *path_utf8,
                           apr_pool_t *pool);


svn_error_t *
svn_path_cstring_to_utf8(const char **path_utf8,
                         const char *path_apr,
                         apr_pool_t *pool);
# 45 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2
# 1 "./subversion/include/private/svn_eol_private.h" 1
# 48 "./subversion/include/private/svn_eol_private.h"
char *
svn_eol__find_eol_start(char *buf, apr_size_t len);
# 68 "./subversion/include/private/svn_eol_private.h"
const char *
svn_eol__detect_eol(char *buf, char *endp);
# 93 "./subversion/include/private/svn_eol_private.h"
svn_error_t *
svn_eol__detect_file_eol(const char **eol, apr_file_t *file, apr_pool_t *pool);
# 46 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c" 2


struct svn_stream_t {
  void *baton;
  svn_read_fn_t read_fn;
  svn_write_fn_t write_fn;
  svn_close_fn_t close_fn;
  svn_io_reset_fn_t reset_fn;
  svn_io_mark_fn_t mark_fn;
  svn_io_seek_fn_t seek_fn;
};




svn_stream_t *
svn_stream_create(void *baton, apr_pool_t *pool)
{
  svn_stream_t *stream;

  stream = apr_palloc(pool, sizeof(*stream));
  stream->baton = baton;
  stream->read_fn = ((void*)0);
  stream->write_fn = ((void*)0);
  stream->close_fn = ((void*)0);
  stream->reset_fn = ((void*)0);
  stream->mark_fn = ((void*)0);
  stream->seek_fn = ((void*)0);
  return stream;
}


void
svn_stream_set_baton(svn_stream_t *stream, void *baton)
{
  stream->baton = baton;
}


void
svn_stream_set_read(svn_stream_t *stream, svn_read_fn_t read_fn)
{
  stream->read_fn = read_fn;
}


void
svn_stream_set_write(svn_stream_t *stream, svn_write_fn_t write_fn)
{
  stream->write_fn = write_fn;
}

void
svn_stream_set_close(svn_stream_t *stream, svn_close_fn_t close_fn)
{
  stream->close_fn = close_fn;
}

void
svn_stream_set_reset(svn_stream_t *stream, svn_io_reset_fn_t reset_fn)
{
  stream->reset_fn = reset_fn;
}

void
svn_stream_set_mark(svn_stream_t *stream, svn_io_mark_fn_t mark_fn)
{
  stream->mark_fn = mark_fn;
}

void
svn_stream_set_seek(svn_stream_t *stream, svn_io_seek_fn_t seek_fn)
{
  stream->seek_fn = seek_fn;
}

svn_error_t *
svn_stream_read(svn_stream_t *stream, char *buffer, apr_size_t *len)
{
  do { if (!(stream->read_fn != ((void*)0))) do { svn_error_t *svn_err__temp = (svn_error__malfunction((!0), "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c", 125, "stream->read_fn != NULL")); if (svn_err__temp) return (svn_err__temp); } while (0); } while (0);
  return stream->read_fn(stream->baton, buffer, len);
}


svn_error_t *
svn_stream_write(svn_stream_t *stream, const char *data, apr_size_t *len)
{
  do { if (!(stream->write_fn != ((void*)0))) do { svn_error_t *svn_err__temp = (svn_error__malfunction((!0), "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c", 133, "stream->write_fn != NULL")); if (svn_err__temp) return (svn_err__temp); } while (0); } while (0);
  return stream->write_fn(stream->baton, data, len);
}


svn_error_t *
svn_stream_reset(svn_stream_t *stream)
{
  if (stream->reset_fn == ((void*)0))
    return (svn_error__locate("/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c",142), (svn_error_create))(SVN_ERR_STREAM_RESET_NOT_SUPPORTED, ((void*)0), ((void*)0));

  return stream->reset_fn(stream->baton);
}

svn_error_t *
svn_stream_mark(svn_stream_t *stream, svn_stream_mark_t **mark,
                apr_pool_t *pool)
{
  if (stream->mark_fn == ((void*)0))
    return (svn_error__locate("/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c",152), (svn_error_create))(SVN_ERR_STREAM_SEEK_NOT_SUPPORTED, ((void*)0), ((void*)0));

  return stream->mark_fn(stream->baton, mark, pool);
}

svn_error_t *
svn_stream_seek(svn_stream_t *stream, svn_stream_mark_t *mark)
{
  if (stream->seek_fn == ((void*)0))
    return (svn_error__locate("/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c",161), (svn_error_create))(SVN_ERR_STREAM_SEEK_NOT_SUPPORTED, ((void*)0), ((void*)0));

  return stream->seek_fn(stream->baton, mark);
}

svn_error_t *
svn_stream_close(svn_stream_t *stream)
{
  if (stream->close_fn == ((void*)0))
    return 0;
  return stream->close_fn(stream->baton);
}


svn_error_t *
svn_stream_printf(svn_stream_t *stream,
                  apr_pool_t *pool,
                  const char *fmt,
                  ...)
{
  const char *message;
  va_list ap;
  apr_size_t len;

  __builtin_va_start(ap, fmt);
  message = apr_pvsprintf(pool, fmt, ap);
  __builtin_va_end(ap);

  len = strlen(message);
  return svn_stream_write(stream, message, &len);
}


svn_error_t *
svn_stream_printf_from_utf8(svn_stream_t *stream,
                            const char *encoding,
                            apr_pool_t *pool,
                            const char *fmt,
                            ...)
{
  const char *message, *translated;
  va_list ap;
  apr_size_t len;

  __builtin_va_start(ap, fmt);
  message = apr_pvsprintf(pool, fmt, ap);
  __builtin_va_end(ap);

  do { svn_error_t *svn_err__temp = (svn_utf_cstring_from_utf8_ex2(&translated, message, encoding, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);


  len = strlen(translated);

  return svn_stream_write(stream, translated, &len);
}




static svn_error_t *
scan_eol(const char **eol, svn_stream_t *stream, apr_pool_t *pool)
{
  const char *eol_str;
  svn_stream_mark_t *mark;

  do { svn_error_t *svn_err__temp = (svn_stream_mark(stream, &mark, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  eol_str = ((void*)0);
  while (! eol_str)
    {
      char buf[512];
      apr_size_t len;

      len = sizeof(buf);
      do { svn_error_t *svn_err__temp = (svn_stream_read(stream, buf, &len)); if (svn_err__temp) return (svn_err__temp); } while (0);
      if (len == 0)
          break;
      eol_str = svn_eol__detect_eol(buf, buf + len);
    }

  do { svn_error_t *svn_err__temp = (svn_stream_seek(stream, mark)); if (svn_err__temp) return (svn_err__temp); } while (0);

  *eol = eol_str;

  return 0;
}







static svn_error_t *
stream_readline(svn_stringbuf_t **stringbuf,
                svn_boolean_t *eof,
                const char **eol,
                svn_stream_t *stream,
                svn_boolean_t detect_eol,
                apr_pool_t *pool)
{
  svn_stringbuf_t *str;
  const char *eol_str;
  apr_size_t numbytes;
  const char *match;
  char c;





  str = svn_stringbuf_create_ensure(80, pool);

  if (detect_eol)
    {
      do { svn_error_t *svn_err__temp = (scan_eol(&eol_str, stream, pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      if (eol)
        *eol = eol_str;
      if (! eol_str)
        {

          eol_str = "\n";
        }
    }
  else
    eol_str = *eol;


  match = eol_str;
  while (*match)
    {
      numbytes = 1;
      do { svn_error_t *svn_err__temp = (svn_stream_read(stream, &c, &numbytes)); if (svn_err__temp) return (svn_err__temp); } while (0);
      if (numbytes != 1)
        {

          *eof = (!0);
          if (eol)
            *eol = ((void*)0);
          *stringbuf = str;
          return 0;
        }

      if (c == *match)
        match++;
      else
        match = eol_str;

      svn_stringbuf_appendbytes(str, &c, 1);
    }

  *eof = 0;
  svn_stringbuf_chop(str, match - eol_str);
  *stringbuf = str;

  return 0;
}

svn_error_t *
svn_stream_readline(svn_stream_t *stream,
                    svn_stringbuf_t **stringbuf,
                    const char *eol,
                    svn_boolean_t *eof,
                    apr_pool_t *pool)
{
  return (stream_readline(stringbuf, eof, &eol, stream, 0, pool));

}

svn_error_t *
svn_stream_readline_detect_eol(svn_stream_t *stream,
                               svn_stringbuf_t **stringbuf,
                               const char **eol,
                               svn_boolean_t *eof,
                               apr_pool_t *pool)
{
  return (stream_readline(stringbuf, eof, eol, stream, (!0), pool));

}


svn_error_t *svn_stream_copy3(svn_stream_t *from, svn_stream_t *to,
                              svn_cancel_func_t cancel_func,
                              void *cancel_baton,
                              apr_pool_t *scratch_pool)
{
  char *buf = apr_palloc(scratch_pool, 16384);
  svn_error_t *err;
  svn_error_t *err2;




  while (1)
    {
      apr_size_t len = 16384;

      if (cancel_func)
        {
          err = cancel_func(cancel_baton);
          if (err)
             break;
        }

      err = svn_stream_read(from, buf, &len);
      if (err)
         break;

      if (len > 0)
        err = svn_stream_write(to, buf, &len);

      if (err || (len != 16384))
          break;
    }

  err2 = svn_error_compose_create(svn_stream_close(from),
                                  svn_stream_close(to));

  return svn_error_compose_create(err, err2);
}

svn_error_t *
svn_stream_contents_same2(svn_boolean_t *same,
                          svn_stream_t *stream1,
                          svn_stream_t *stream2,
                          apr_pool_t *pool)
{
  char *buf1 = apr_palloc(pool, 16384);
  char *buf2 = apr_palloc(pool, 16384);
  apr_size_t bytes_read1 = 16384;
  apr_size_t bytes_read2 = 16384;
  svn_error_t *err = ((void*)0);

  *same = (!0);
  while (bytes_read1 == 16384
         && bytes_read2 == 16384)
    {
      err = svn_stream_read(stream1, buf1, &bytes_read1);
      if (err)
        break;
      err = svn_stream_read(stream2, buf2, &bytes_read2);
      if (err)
        break;

      if ((bytes_read1 != bytes_read2)
          || (memcmp(buf1, buf2, bytes_read1)))
        {
          *same = 0;
          break;
        }
    }

  return svn_error_compose_create(err,
                                  svn_error_compose_create(
                                    svn_stream_close(stream1),
                                    svn_stream_close(stream2)));
}





static svn_error_t *
read_handler_empty(void *baton, char *buffer, apr_size_t *len)
{
  *len = 0;
  return 0;
}


static svn_error_t *
write_handler_empty(void *baton, const char *data, apr_size_t *len)
{
  return 0;
}

static svn_error_t *
reset_handler_empty(void *baton)
{
  return 0;
}

static svn_error_t *
mark_handler_empty(void *baton, svn_stream_mark_t **mark, apr_pool_t *pool)
{
  return 0;
}

static svn_error_t *
seek_handler_empty(void *baton, svn_stream_mark_t *mark)
{
  return 0;
}


svn_stream_t *
svn_stream_empty(apr_pool_t *pool)
{
  svn_stream_t *stream;

  stream = svn_stream_create(((void*)0), pool);
  svn_stream_set_read(stream, read_handler_empty);
  svn_stream_set_write(stream, write_handler_empty);
  svn_stream_set_reset(stream, reset_handler_empty);
  svn_stream_set_mark(stream, mark_handler_empty);
  svn_stream_set_seek(stream, seek_handler_empty);
  return stream;
}




struct baton_tee {
  svn_stream_t *out1;
  svn_stream_t *out2;
};


static svn_error_t *
write_handler_tee(void *baton, const char *data, apr_size_t *len)
{
  struct baton_tee *bt = baton;

  do { svn_error_t *svn_err__temp = (svn_stream_write(bt->out1, data, len)); if (svn_err__temp) return (svn_err__temp); } while (0);
  do { svn_error_t *svn_err__temp = (svn_stream_write(bt->out2, data, len)); if (svn_err__temp) return (svn_err__temp); } while (0);

  return 0;
}


static svn_error_t *
close_handler_tee(void *baton)
{
  struct baton_tee *bt = baton;

  do { svn_error_t *svn_err__temp = (svn_stream_close(bt->out1)); if (svn_err__temp) return (svn_err__temp); } while (0);
  do { svn_error_t *svn_err__temp = (svn_stream_close(bt->out2)); if (svn_err__temp) return (svn_err__temp); } while (0);

  return 0;
}


svn_stream_t *
svn_stream_tee(svn_stream_t *out1,
               svn_stream_t *out2,
               apr_pool_t *pool)
{
  struct baton_tee *baton;
  svn_stream_t *stream;

  if (out1 == ((void*)0))
    return out2;

  if (out2 == ((void*)0))
    return out1;

  baton = apr_palloc(pool, sizeof(*baton));
  baton->out1 = out1;
  baton->out2 = out2;
  stream = svn_stream_create(baton, pool);
  svn_stream_set_write(stream, write_handler_tee);
  svn_stream_set_close(stream, close_handler_tee);

  return stream;
}





static svn_error_t *
read_handler_disown(void *baton, char *buffer, apr_size_t *len)
{
  return svn_stream_read(baton, buffer, len);
}

static svn_error_t *
write_handler_disown(void *baton, const char *buffer, apr_size_t *len)
{
  return svn_stream_write(baton, buffer, len);
}

static svn_error_t *
reset_handler_disown(void *baton)
{
  return svn_stream_reset(baton);
}

static svn_error_t *
mark_handler_disown(void *baton, svn_stream_mark_t **mark, apr_pool_t *pool)
{
  return svn_stream_mark(baton, mark, pool);
}

static svn_error_t *
seek_handler_disown(void *baton, svn_stream_mark_t *mark)
{
  return svn_stream_seek(baton, mark);
}

svn_stream_t *
svn_stream_disown(svn_stream_t *stream, apr_pool_t *pool)
{
  svn_stream_t *s = svn_stream_create(stream, pool);

  svn_stream_set_read(s, read_handler_disown);
  svn_stream_set_write(s, write_handler_disown);
  svn_stream_set_reset(s, reset_handler_disown);
  svn_stream_set_mark(s, mark_handler_disown);
  svn_stream_set_seek(s, seek_handler_disown);

  return s;
}




struct baton_apr {
  apr_file_t *file;
  apr_pool_t *pool;



  apr_off_t start;
  apr_off_t end;
};


struct mark_apr {
  apr_off_t off;
};

static svn_error_t *
read_handler_apr(void *baton, char *buffer, apr_size_t *len)
{
  struct baton_apr *btn = baton;
  svn_error_t *err;

  err = svn_io_file_read_full(btn->file, buffer, *len, len, btn->pool);
  if (err && ((err->apr_err) == ((20000 + 50000) + 14)))
    {
      svn_error_clear(err);
      err = 0;
    }

  return err;
}

static svn_error_t *
write_handler_apr(void *baton, const char *data, apr_size_t *len)
{
  struct baton_apr *btn = baton;

  return svn_io_file_write_full(btn->file, data, *len, len, btn->pool);
}

static svn_error_t *
close_handler_apr(void *baton)
{
  struct baton_apr *btn = baton;

  return svn_io_file_close(btn->file, btn->pool);
}

static svn_error_t *
reset_handler_apr(void *baton)
{
  apr_off_t offset;
  struct baton_apr *btn = baton;



  offset = btn->start >= 0 ? btn->start : 0;

  return svn_io_file_seek(btn->file, 0, &offset, btn->pool);
}

static svn_error_t *
mark_handler_apr(void *baton, svn_stream_mark_t **mark, apr_pool_t *pool)
{
  struct baton_apr *btn = baton;
  struct mark_apr *mark_apr;

  mark_apr = apr_palloc(pool, sizeof(*mark_apr));
  mark_apr->off = 0;
  do { svn_error_t *svn_err__temp = (svn_io_file_seek(btn->file, 1, &mark_apr->off, btn->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  *mark = (svn_stream_mark_t *)mark_apr;
  return 0;
}

static svn_error_t *
seek_handler_apr(void *baton, svn_stream_mark_t *mark)
{
  struct baton_apr *btn = baton;
  struct mark_apr *mark_apr;

  mark_apr = (struct mark_apr *)mark;
  do { svn_error_t *svn_err__temp = (svn_io_file_seek(btn->file, 0, &mark_apr->off, btn->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
  return 0;
}

svn_error_t *
svn_stream_open_readonly(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool)
{
  apr_file_t *file;

  do { svn_error_t *svn_err__temp = (svn_io_file_open(&file, path, 0x00001 | 0x00080 | 0x00020, 0x0FFF, result_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  *stream = svn_stream_from_aprfile2(file, 0, result_pool);

  return 0;
}


svn_error_t *
svn_stream_open_writable(svn_stream_t **stream,
                         const char *path,
                         apr_pool_t *result_pool,
                         apr_pool_t *scratch_pool)
{
  apr_file_t *file;

  do { svn_error_t *svn_err__temp = (svn_io_file_open(&file, path, 0x00002 | 0x00080 | 0x00020 | 0x00004 | 0x00040, 0x0FFF, result_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);






  *stream = svn_stream_from_aprfile2(file, 0, result_pool);

  return 0;
}


svn_error_t *
svn_stream_open_unique(svn_stream_t **stream,
                       const char **temp_path,
                       const char *dirpath,
                       svn_io_file_del_t delete_when,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool)
{
  apr_file_t *file;

  do { svn_error_t *svn_err__temp = (svn_io_open_unique_file3(&file, temp_path, dirpath, delete_when, result_pool, scratch_pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  *stream = svn_stream_from_aprfile2(file, 0, result_pool);

  return 0;
}


svn_stream_t *
svn_stream_from_aprfile2(apr_file_t *file,
                         svn_boolean_t disown,
                         apr_pool_t *pool)
{
  struct baton_apr *baton;
  svn_stream_t *stream;

  if (file == ((void*)0))
    return svn_stream_empty(pool);

  baton = apr_palloc(pool, sizeof(*baton));
  baton->file = file;
  baton->pool = pool;
  baton->start = -1;
  baton->end = -1;
  stream = svn_stream_create(baton, pool);
  svn_stream_set_read(stream, read_handler_apr);
  svn_stream_set_write(stream, write_handler_apr);
  svn_stream_set_reset(stream, reset_handler_apr);
  svn_stream_set_mark(stream, mark_handler_apr);
  svn_stream_set_seek(stream, seek_handler_apr);

  if (! disown)
    svn_stream_set_close(stream, close_handler_apr);

  return stream;
}



static svn_error_t *
read_range_handler_apr(void *baton, char *buffer, apr_size_t *len)
{
  struct baton_apr *btn = baton;





  if (btn->start >= 0 && btn->end > 0)
    {

      apr_off_t pos;

      pos = 0;
      do { svn_error_t *svn_err__temp = (svn_io_file_seek(btn->file, 1, &pos, btn->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
      if (pos < btn->start)
        {


          pos = btn->start;
          do { svn_error_t *svn_err__temp = (svn_io_file_seek(btn->file, 0, &pos, btn->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);
        }
      else if (pos >= btn->end)
        {

          *len = 0;
          return 0;
        }


      if (pos + *len > btn->end)
        *len = (apr_size_t)(btn->end - pos);
    }

  return read_handler_apr(baton, buffer, len);
}


svn_stream_t *
svn_stream_from_aprfile_range_readonly(apr_file_t *file,
                                       svn_boolean_t disown,
                                       apr_off_t start,
                                       apr_off_t end,
                                       apr_pool_t *pool)
{
  struct baton_apr *baton;
  svn_stream_t *stream;
  apr_off_t pos;


  if (file == ((void*)0) || start < 0 || end <= 0 || start >= end)
    return svn_stream_empty(pool);


  pos = start;
  if (apr_file_seek(file, 0, &pos) != 0)
    return svn_stream_empty(pool);

  baton = apr_palloc(pool, sizeof(*baton));
  baton->file = file;
  baton->pool = pool;
  baton->start = start;
  baton->end = end;
  stream = svn_stream_create(baton, pool);
  svn_stream_set_read(stream, read_range_handler_apr);
  svn_stream_set_reset(stream, reset_handler_apr);
  svn_stream_set_mark(stream, mark_handler_apr);
  svn_stream_set_seek(stream, seek_handler_apr);

  if (! disown)
    svn_stream_set_close(stream, close_handler_apr);

  return stream;
}
# 833 "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c"
struct zbaton {
  z_stream *in;
  z_stream *out;
  svn_read_fn_t read;
  svn_write_fn_t write;
  svn_close_fn_t close;
  void *read_buffer;

  int read_flush;

  apr_pool_t *pool;

  void *subbaton;
};


static voidpf
zalloc(voidpf opaque, uInt items, uInt size)
{
  apr_pool_t *pool = opaque;

  return apr_palloc(pool, items * size);
}


static void
zfree(voidpf opaque, voidpf address)
{

}




static svn_error_t *
zerr_to_svn_error(int zerr, const char *function, z_stream *stream)
{
  apr_status_t status;
  const char *message;

  if (zerr == 0)
    return 0;

  switch (zerr)
    {
    case (-2):
      status = SVN_ERR_STREAM_MALFORMED_DATA;
      message = "stream error";
      break;

    case (-4):
      status = 12;
      message = "out of memory";
      break;

    case (-5):
      status = 12;
      message = "buffer error";
      break;

    case (-6):
      status = SVN_ERR_STREAM_UNRECOGNIZED_DATA;
      message = "version error";
      break;

    case (-3):
      status = SVN_ERR_STREAM_MALFORMED_DATA;
      message = "corrupted data";
      break;

    default:
      status = SVN_ERR_STREAM_UNRECOGNIZED_DATA;
      message = "error";
      break;
    }

  if (stream->msg != ((void*)0))
    return (svn_error__locate("/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c",910), (svn_error_createf))(status, ((void*)0), "zlib (%s): %s: %s", function,
                             message, stream->msg);
  else
    return (svn_error__locate("/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c",913), (svn_error_createf))(status, ((void*)0), "zlib (%s): %s", function,
                             message);
}


static svn_error_t *
read_helper_gz(svn_read_fn_t read_fn,
               void *baton,
               char *buffer,
               uInt *len, int *zflush)
{
  uInt orig_len = *len;



  apr_size_t apr_len = (apr_size_t) *len;

  do { svn_error_t *svn_err__temp = ((*read_fn)(baton, buffer, &apr_len)); if (svn_err__temp) return (svn_err__temp); } while (0);



  *len = (uInt) apr_len;



  *zflush = (*len) < orig_len ? 2 : 2;

  return 0;
}


static svn_error_t *
read_handler_gz(void *baton, char *buffer, apr_size_t *len)
{
  struct zbaton *btn = baton;
  int zerr;

  if (btn->in == ((void*)0))
    {
      btn->in = apr_palloc(btn->pool, sizeof(z_stream));
      btn->in->zalloc = zalloc;
      btn->in->zfree = zfree;
      btn->in->opaque = btn->pool;
      btn->read_buffer = apr_palloc(btn->pool, 4096);
      btn->in->next_in = btn->read_buffer;
      btn->in->avail_in = 4096;

      do { svn_error_t *svn_err__temp = (read_helper_gz(btn->read, btn->subbaton, btn->read_buffer, &btn->in->avail_in, &btn->read_flush)); if (svn_err__temp) return (svn_err__temp); } while (0);


      zerr = inflateInit_((btn->in), "1.2.8", (int)sizeof(z_stream));
      do { svn_error_t *svn_err__temp = (zerr_to_svn_error(zerr, "inflateInit", btn->in)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }

  btn->in->next_out = (Bytef *) buffer;
  btn->in->avail_out = *len;

  while (btn->in->avail_out > 0)
    {
      if (btn->in->avail_in <= 0)
        {
          btn->in->avail_in = 4096;
          btn->in->next_in = btn->read_buffer;
          do { svn_error_t *svn_err__temp = (read_helper_gz(btn->read, btn->subbaton, btn->read_buffer, &btn->in->avail_in, &btn->read_flush)); if (svn_err__temp) return (svn_err__temp); } while (0);

        }

      zerr = inflate(btn->in, btn->read_flush);
      if (zerr == 1)
        break;
      else if (zerr != 0)
        return zerr_to_svn_error(zerr, "inflate", btn->in);
    }

  *len -= btn->in->avail_out;
  return 0;
}


static svn_error_t *
write_handler_gz(void *baton, const char *buffer, apr_size_t *len)
{
  struct zbaton *btn = baton;
  apr_pool_t *subpool;
  void *write_buf;
  apr_size_t buf_size, write_len;
  int zerr;

  if (btn->out == ((void*)0))
    {
      btn->out = apr_palloc(btn->pool, sizeof(z_stream));
      btn->out->zalloc = zalloc;
      btn->out->zfree = zfree;
      btn->out->opaque = btn->pool;

      zerr = deflateInit_((btn->out), ((-1)), "1.2.8", (int)sizeof(z_stream));
      do { svn_error_t *svn_err__temp = (zerr_to_svn_error(zerr, "deflateInit", btn->out)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }



  buf_size = *len + (*len / 1000) + 13;
  subpool = svn_pool_create_ex(btn->pool, ((void*)0));
  write_buf = apr_palloc(subpool, buf_size);

  btn->out->next_in = (Bytef *) buffer;
  btn->out->avail_in = *len;

  while (btn->out->avail_in > 0)
    {
      btn->out->next_out = write_buf;
      btn->out->avail_out = buf_size;

      zerr = deflate(btn->out, 0);
      do { svn_error_t *svn_err__temp = (zerr_to_svn_error(zerr, "deflate", btn->out)); if (svn_err__temp) return (svn_err__temp); } while (0);
      write_len = buf_size - btn->out->avail_out;
      if (write_len > 0)
        do { svn_error_t *svn_err__temp = (btn->write(btn->subbaton, write_buf, &write_len)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }

  apr_pool_destroy(subpool);

  return 0;
}


static svn_error_t *
close_handler_gz(void *baton)
{
  struct zbaton *btn = baton;
  int zerr;

  if (btn->in != ((void*)0))
    {
      zerr = inflateEnd(btn->in);
      do { svn_error_t *svn_err__temp = (zerr_to_svn_error(zerr, "inflateEnd", btn->in)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }

  if (btn->out != ((void*)0))
    {
      void *buf;
      apr_size_t write_len;

      buf = apr_palloc(btn->pool, 4096);

      while ((!0))
        {
          btn->out->next_out = buf;
          btn->out->avail_out = 4096;

          zerr = deflate(btn->out, 4);
          if (zerr != 1 && zerr != 0)
            return zerr_to_svn_error(zerr, "deflate", btn->out);
          write_len = 4096 - btn->out->avail_out;
          if (write_len > 0)
            do { svn_error_t *svn_err__temp = (btn->write(btn->subbaton, buf, &write_len)); if (svn_err__temp) return (svn_err__temp); } while (0);
          if (zerr == 1)
            break;
        }

      zerr = deflateEnd(btn->out);
      do { svn_error_t *svn_err__temp = (zerr_to_svn_error(zerr, "deflateEnd", btn->out)); if (svn_err__temp) return (svn_err__temp); } while (0);
    }

  if (btn->close != ((void*)0))
    return btn->close(btn->subbaton);
  else
    return 0;
}


svn_stream_t *
svn_stream_compressed(svn_stream_t *stream, apr_pool_t *pool)
{
  struct svn_stream_t *zstream;
  struct zbaton *baton;

  ((stream != ((void*)0)) ? (void) (0) : __assert_fail ("stream != ((void*)0)", "/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c", 1090, __PRETTY_FUNCTION__));

  baton = apr_palloc(pool, sizeof(*baton));
  baton->in = baton->out = ((void*)0);
  baton->read = stream->read_fn;
  baton->write = stream->write_fn;
  baton->close = stream->close_fn;
  baton->subbaton = stream->baton;
  baton->pool = pool;
  baton->read_buffer = ((void*)0);
  baton->read_flush = 2;

  zstream = svn_stream_create(baton, pool);
  svn_stream_set_read(zstream, read_handler_gz);
  svn_stream_set_write(zstream, write_handler_gz);
  svn_stream_set_close(zstream, close_handler_gz);

  return zstream;
}




struct checksum_stream_baton
{
  svn_checksum_ctx_t *read_ctx, *write_ctx;
  svn_checksum_t **read_checksum;
  svn_checksum_t **write_checksum;
  svn_stream_t *proxy;


  svn_boolean_t read_more;


  apr_pool_t *pool;
};

static svn_error_t *
read_handler_checksum(void *baton, char *buffer, apr_size_t *len)
{
  struct checksum_stream_baton *btn = baton;
  apr_size_t saved_len = *len;

  do { svn_error_t *svn_err__temp = (svn_stream_read(btn->proxy, buffer, len)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (btn->read_checksum)
    do { svn_error_t *svn_err__temp = (svn_checksum_update(btn->read_ctx, buffer, *len)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (saved_len != *len)
    btn->read_more = 0;

  return 0;
}


static svn_error_t *
write_handler_checksum(void *baton, const char *buffer, apr_size_t *len)
{
  struct checksum_stream_baton *btn = baton;

  if (btn->write_checksum && *len > 0)
    do { svn_error_t *svn_err__temp = (svn_checksum_update(btn->write_ctx, buffer, *len)); if (svn_err__temp) return (svn_err__temp); } while (0);

  return svn_stream_write(btn->proxy, buffer, len);
}


static svn_error_t *
close_handler_checksum(void *baton)
{
  struct checksum_stream_baton *btn = baton;



  if (btn->read_more)
    {
      char *buf = apr_palloc(btn->pool, 16384);
      apr_size_t len = 16384;

      do
        {
          do { svn_error_t *svn_err__temp = (read_handler_checksum(baton, buf, &len)); if (svn_err__temp) return (svn_err__temp); } while (0);
        }
      while (btn->read_more);
    }

  if (btn->read_ctx)
    do { svn_error_t *svn_err__temp = (svn_checksum_final(btn->read_checksum, btn->read_ctx, btn->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (btn->write_ctx)
    do { svn_error_t *svn_err__temp = (svn_checksum_final(btn->write_checksum, btn->write_ctx, btn->pool)); if (svn_err__temp) return (svn_err__temp); } while (0);

  return svn_stream_close(btn->proxy);
}


svn_stream_t *
svn_stream_checksummed2(svn_stream_t *stream,
                        svn_checksum_t **read_checksum,
                        svn_checksum_t **write_checksum,
                        svn_checksum_kind_t checksum_kind,
                        svn_boolean_t read_all,
                        apr_pool_t *pool)
{
  svn_stream_t *s;
  struct checksum_stream_baton *baton;

  if (read_checksum == ((void*)0) && write_checksum == ((void*)0))
    return stream;

  baton = apr_palloc(pool, sizeof(*baton));
  if (read_checksum)
    baton->read_ctx = svn_checksum_ctx_create(checksum_kind, pool);
  else
    baton->read_ctx = ((void*)0);

  if (write_checksum)
    baton->write_ctx = svn_checksum_ctx_create(checksum_kind, pool);
  else
    baton->write_ctx = ((void*)0);

  baton->read_checksum = read_checksum;
  baton->write_checksum = write_checksum;
  baton->proxy = stream;
  baton->read_more = read_all;
  baton->pool = pool;

  s = svn_stream_create(baton, pool);
  svn_stream_set_read(s, read_handler_checksum);
  svn_stream_set_write(s, write_handler_checksum);
  svn_stream_set_close(s, close_handler_checksum);
  return s;
}

struct md5_stream_baton
{
  const unsigned char **read_digest;
  const unsigned char **write_digest;
  svn_checksum_t *read_checksum;
  svn_checksum_t *write_checksum;
  svn_stream_t *proxy;
  apr_pool_t *pool;
};

static svn_error_t *
read_handler_md5(void *baton, char *buffer, apr_size_t *len)
{
  struct md5_stream_baton *btn = baton;
  return svn_stream_read(btn->proxy, buffer, len);
}

static svn_error_t *
write_handler_md5(void *baton, const char *buffer, apr_size_t *len)
{
  struct md5_stream_baton *btn = baton;
  return svn_stream_write(btn->proxy, buffer, len);
}

static svn_error_t *
close_handler_md5(void *baton)
{
  struct md5_stream_baton *btn = baton;

  do { svn_error_t *svn_err__temp = (svn_stream_close(btn->proxy)); if (svn_err__temp) return (svn_err__temp); } while (0);

  if (btn->read_digest)
    *btn->read_digest
      = apr_pmemdup(btn->pool, btn->read_checksum->digest,
                    16);

  if (btn->write_digest)
    *btn->write_digest
      = apr_pmemdup(btn->pool, btn->write_checksum->digest,
                    16);

  return 0;
}


svn_stream_t *
svn_stream_checksummed(svn_stream_t *stream,
                       const unsigned char **read_digest,
                       const unsigned char **write_digest,
                       svn_boolean_t read_all,
                       apr_pool_t *pool)
{
  svn_stream_t *s;
  struct md5_stream_baton *baton;

  if (! read_digest && ! write_digest)
    return stream;

  baton = apr_palloc(pool, sizeof(*baton));
  baton->read_digest = read_digest;
  baton->write_digest = write_digest;
  baton->pool = pool;



  baton->proxy
    = svn_stream_checksummed2(stream,
                              read_digest ? &baton->read_checksum : ((void*)0),
                              write_digest ? &baton->write_checksum : ((void*)0),
                              svn_checksum_md5,
                              read_all, pool);




  s = svn_stream_create(baton, pool);
  svn_stream_set_read(s, read_handler_md5);
  svn_stream_set_write(s, write_handler_md5);
  svn_stream_set_close(s, close_handler_md5);
  return s;
}





struct stringbuf_stream_baton
{
  svn_stringbuf_t *str;
  apr_size_t amt_read;
};


struct stringbuf_stream_mark {
    apr_size_t pos;
};

static svn_error_t *
read_handler_stringbuf(void *baton, char *buffer, apr_size_t *len)
{
  struct stringbuf_stream_baton *btn = baton;
  apr_size_t left_to_read = btn->str->len - btn->amt_read;

  *len = (*len > left_to_read) ? left_to_read : *len;
  memcpy(buffer, btn->str->data + btn->amt_read, *len);
  btn->amt_read += *len;
  return 0;
}

static svn_error_t *
write_handler_stringbuf(void *baton, const char *data, apr_size_t *len)
{
  struct stringbuf_stream_baton *btn = baton;

  svn_stringbuf_appendbytes(btn->str, data, *len);
  return 0;
}

static svn_error_t *
reset_handler_stringbuf(void *baton)
{
  struct stringbuf_stream_baton *btn = baton;
  btn->amt_read = 0;
  return 0;
}

static svn_error_t *
mark_handler_stringbuf(void *baton, svn_stream_mark_t **mark, apr_pool_t *pool)
{
  struct stringbuf_stream_baton *btn;
  struct stringbuf_stream_mark *stringbuf_stream_mark;

  btn = baton;
  stringbuf_stream_mark = apr_palloc(pool, sizeof(*stringbuf_stream_mark));
  stringbuf_stream_mark->pos = btn->amt_read;
  *mark = (svn_stream_mark_t *)stringbuf_stream_mark;
  return 0;
}

static svn_error_t *
seek_handler_stringbuf(void *baton, svn_stream_mark_t *mark)
{
  struct stringbuf_stream_baton *btn;
  struct stringbuf_stream_mark *stringbuf_stream_mark;

  btn = baton;
  stringbuf_stream_mark = (struct stringbuf_stream_mark *)mark;
  btn->amt_read = stringbuf_stream_mark->pos;
  return 0;
}

svn_stream_t *
svn_stream_from_stringbuf(svn_stringbuf_t *str,
                          apr_pool_t *pool)
{
  svn_stream_t *stream;
  struct stringbuf_stream_baton *baton;

  if (! str)
    return svn_stream_empty(pool);

  baton = apr_palloc(pool, sizeof(*baton));
  baton->str = str;
  baton->amt_read = 0;
  stream = svn_stream_create(baton, pool);
  svn_stream_set_read(stream, read_handler_stringbuf);
  svn_stream_set_write(stream, write_handler_stringbuf);
  svn_stream_set_reset(stream, reset_handler_stringbuf);
  svn_stream_set_mark(stream, mark_handler_stringbuf);
  svn_stream_set_seek(stream, seek_handler_stringbuf);
  return stream;
}

struct string_stream_baton
{
  const svn_string_t *str;
  apr_size_t amt_read;
};

static svn_error_t *
read_handler_string(void *baton, char *buffer, apr_size_t *len)
{
  struct string_stream_baton *btn = baton;
  apr_size_t left_to_read = btn->str->len - btn->amt_read;

  *len = (*len > left_to_read) ? left_to_read : *len;
  memcpy(buffer, btn->str->data + btn->amt_read, *len);
  btn->amt_read += *len;
  return 0;
}

svn_stream_t *
svn_stream_from_string(const svn_string_t *str,
                       apr_pool_t *pool)
{
  svn_stream_t *stream;
  struct string_stream_baton *baton;

  if (! str)
    return svn_stream_empty(pool);

  baton = apr_palloc(pool, sizeof(*baton));
  baton->str = str;
  baton->amt_read = 0;
  stream = svn_stream_create(baton, pool);
  svn_stream_set_read(stream, read_handler_string);
  return stream;
}


svn_error_t *
svn_stream_for_stdout(svn_stream_t **out, apr_pool_t *pool)
{
  apr_file_t *stdout_file;
  apr_status_t apr_err;

  apr_err = apr_file_open_stdout(&stdout_file, pool);
  if (apr_err)
    return (svn_error__locate("/home/ubuntu/Workspace/prophet/crawler/__tmp/src1/subversion/libsvn_subr/stream.c",1442), (svn_error_wrap_apr))(apr_err, "Can't open stdout");

  *out = svn_stream_from_aprfile2(stdout_file, (!0), pool);

  return 0;
}


svn_error_t *
svn_string_from_stream(svn_string_t **result,
                       svn_stream_t *stream,
                       apr_pool_t *result_pool,
                       apr_pool_t *scratch_pool)
{
  svn_stringbuf_t *work = svn_stringbuf_create_ensure(16384,
                                                      result_pool);
  char *buffer = apr_palloc(scratch_pool, 16384);

  while (1)
    {
      apr_size_t len = 16384;

      do { svn_error_t *svn_err__temp = (svn_stream_read(stream, buffer, &len)); if (svn_err__temp) return (svn_err__temp); } while (0);
      svn_stringbuf_appendbytes(work, buffer, len);

      if (len < 16384)
        break;
    }

  do { svn_error_t *svn_err__temp = (svn_stream_close(stream)); if (svn_err__temp) return (svn_err__temp); } while (0);

  *result = apr_palloc(result_pool, sizeof(**result));
  (*result)->data = work->data;
  (*result)->len = work->len;

  return 0;
}
