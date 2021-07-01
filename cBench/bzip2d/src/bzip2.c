typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct {
    int __val[2];
} __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void *__timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
__extension__ typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct {
    int __count;
    union {
	unsigned int __wch;
	char __wchb[4];
    } __value;
} __mbstate_t;
typedef struct {
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct {
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__(__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__(__SI__)));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};
enum __codecvt_result { __codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv };
struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
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
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn(void *__cookie, __const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t * __pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE * __fp);
extern int _IO_putc(int __c, _IO_FILE * __fp);
extern int _IO_feof(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_ferror(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_peekc_locked(_IO_FILE * __fp);
extern void _IO_flockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area(_IO_FILE *) __attribute__ ((__nothrow__));
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove(__const char *__filename) __attribute__ ((__nothrow__));
extern int rename(__const char *__old, __const char *__new) __attribute__ ((__nothrow__));
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__ ((__nothrow__));
extern FILE *tmpfile(void);
extern char *tmpnam(char *__s) __attribute__ ((__nothrow__));
extern char *tmpnam_r(char *__s) __attribute__ ((__nothrow__));
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int fclose(FILE * __stream);
extern int fflush(FILE * __stream);
extern int fflush_unlocked(FILE * __stream);
extern FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes);
extern FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes, FILE * __restrict __stream);
extern FILE *fdopen(int __fd, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *fmemopen(void *__s, size_t __len, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *open_memstream(char **__bufloc, size_t * __sizeloc) __attribute__ ((__nothrow__));
extern void setbuf(FILE * __restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));
extern int setvbuf(FILE * __restrict __stream, char *__restrict __buf, int __modes, size_t __n) __attribute__ ((__nothrow__));
extern void setbuffer(FILE * __restrict __stream, char *__restrict __buf, size_t __size) __attribute__ ((__nothrow__));
extern void setlinebuf(FILE * __stream) __attribute__ ((__nothrow__));
extern int fprintf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int printf(__const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg);
extern int vprintf(__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 0)));
extern int vdprintf(int __fd, __const char *__restrict __fmt, __gnuc_va_list __arg) __attribute__ ((__format__(__printf__, 2, 0)));
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__ ((__format__(__printf__, 2, 3)));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int scanf(__const char *__restrict __format, ...);
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...) __asm__("" "__isoc99_fscanf");
extern int scanf(__const char *__restrict __format, ...) __asm__("" "__isoc99_scanf");
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __asm__("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vfscanf") __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vscanf") __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vsscanf") __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE * __stream);
extern int getc(FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE * __stream);
extern int fputc(int __c, FILE * __stream);
extern int putc(int __c, FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE * __stream);
extern int putc_unlocked(int __c, FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(FILE * __stream);
extern int putw(int __w, FILE * __stream);
extern char *fgets(char *__restrict __s, int __n, FILE * __restrict __stream);
extern char *gets(char *__s);
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern __ssize_t getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern __ssize_t getline(char **__restrict __lineptr, size_t * __restrict __n, FILE * __restrict __stream);
extern int fputs(__const char *__restrict __s, FILE * __restrict __stream);
extern int puts(__const char *__s);
extern int ungetc(int __c, FILE * __stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __s);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite_unlocked(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern int fseek(FILE * __stream, long int __off, int __whence);
extern long int ftell(FILE * __stream);
extern void rewind(FILE * __stream);
extern int fseeko(FILE * __stream, __off_t __off, int __whence);
extern __off_t ftello(FILE * __stream);
extern int fgetpos(FILE * __restrict __stream, fpos_t * __restrict __pos);
extern int fsetpos(FILE * __stream, __const fpos_t * __pos);
extern void clearerr(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror(FILE * __stream) __attribute__ ((__nothrow__));
extern void clearerr_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern void perror(__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno(FILE * __stream) __attribute__ ((__nothrow__));
extern int fileno_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern FILE *popen(__const char *__command, __const char *__modes);
extern int pclose(FILE * __stream);
extern char *ctermid(char *__s) __attribute__ ((__nothrow__));
extern void flockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern int ftrylockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern void funlockfile(FILE * __stream) __attribute__ ((__nothrow__));
typedef struct {
    int quot;
    int rem;
} div_t;
typedef struct {
    long int quot;
    long int rem;
} ldiv_t;
__extension__ typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;
extern size_t __ctype_get_mb_cur_max(void) __attribute__ ((__nothrow__));
extern double atof(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int atoi(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern long int atol(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int atoll(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *l64a(long int __n) __attribute__ ((__nothrow__));
extern long int a64l(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__(__HI__)));
typedef int int32_t __attribute__ ((__mode__(__SI__)));
typedef int int64_t __attribute__ ((__mode__(__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__(__DI__)));
typedef int register_t __attribute__ ((__mode__(__word__)));
typedef int __sig_atomic_t;
typedef struct {
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof(__fd_mask))];
}
fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec *__restrict __timeout, const __sigset_t * __restrict __sigmask);
__extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__));
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union {
    char __size[36];
    long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;
typedef union {
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    } __data;
    char __size[24];
    long int __align;
} pthread_mutex_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_mutexattr_t;
typedef union {
    struct {
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
typedef union {
    char __size[4];
    long int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union {
    struct {
	int __lock;
	unsigned int __nr_readers;
	unsigned int __readers_wakeup;
	unsigned int __writer_wakeup;
	unsigned int __nr_readers_queued;
	unsigned int __nr_writers_queued;
	unsigned char __flags;
	unsigned char __shared;
	unsigned char __pad1;
	unsigned char __pad2;
	int __writer;
    } __data;
    char __size[32];
    long int __align;
} pthread_rwlock_t;
typedef union {
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union {
    char __size[20];
    long int __align;
} pthread_barrier_t;
typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;
extern long int random(void) __attribute__ ((__nothrow__));
extern void srandom(unsigned int __seed) __attribute__ ((__nothrow__));
extern char *initstate(unsigned int __seed, char *__statebuf, size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *setstate(char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};
extern int random_r(struct random_data *__restrict __buf, int32_t * __restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf, size_t __statelen, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int rand(void) __attribute__ ((__nothrow__));
extern void srand(unsigned int __seed) __attribute__ ((__nothrow__));
extern int rand_r(unsigned int *__seed) __attribute__ ((__nothrow__));
extern double drand48(void) __attribute__ ((__nothrow__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int lrand48(void) __attribute__ ((__nothrow__));
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int mrand48(void) __attribute__ ((__nothrow__));
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void srand48(long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct drand48_data {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *malloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *calloc(size_t __nmemb, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *realloc(void *__ptr, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern void free(void *__ptr) __attribute__ ((__nothrow__));
extern void cfree(void *__ptr) __attribute__ ((__nothrow__));
extern void *alloca(size_t __size) __attribute__ ((__nothrow__));
extern void *valloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void abort(void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern int atexit(void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int on_exit(void (*__func) (int __status, void *__arg), void *__arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void _Exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern char *getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *__secure_getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int putenv(char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int unsetenv(__const char *__name) __attribute__ ((__nothrow__));
extern int clearenv(void) __attribute__ ((__nothrow__));
extern char *mktemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkstemp(char *__template) __attribute__ ((__nonnull__(1)));
extern int mkstemps(char *__template, int __suffixlen) __attribute__ ((__nonnull__(1)));
extern char *mkdtemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int system(__const char *__command);
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__ ((__nothrow__));
typedef int (*__compar_fn_t) (__const void *, __const void *);
extern void *bsearch(__const void *__key, __const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 2, 5)));
extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 4)));
extern int abs(int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long int labs(long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern long long int llabs(long long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern div_t div(int __numer, int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int mblen(__const char *__s, size_t __n) __attribute__ ((__nothrow__));
extern int mbtowc(wchar_t * __restrict __pwc, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern int wctomb(char *__s, wchar_t __wchar) __attribute__ ((__nothrow__));
extern size_t mbstowcs(wchar_t * __restrict __pwcs, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern size_t wcstombs(char *__restrict __s, __const wchar_t * __restrict __pwcs, size_t __n) __attribute__ ((__nothrow__));
extern int rpmatch(__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int posix_openpt(int __oflag);
extern int getloadavg(double __loadavg[], int __nelem) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memmove(void *__dest, __const void *__src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memset(void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int memcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memchr(__const void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l(__const char *__s1, __const char *__s2, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, __const char *__src, size_t __n, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern char *strdup(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strndup(__const char *__string, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strrchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strcspn(__const char *__s, __const char *__reject) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strspn(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern size_t strlen(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strnlen(__const char *__string, size_t __maxlen) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__ ((__nothrow__));
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *strerror_l(int __errnum, __locale_t __l) __attribute__ ((__nothrow__));
extern void __bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void bcopy(__const void *__src, void *__dest, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int bcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *index(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *rindex(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int ffs(int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncasecmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__ ((__nothrow__));
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int __sigismember(__const __sigset_t *, int);
extern int __sigaddset(__sigset_t *, int);
extern int __sigdelset(__sigset_t *, int);
typedef __sig_atomic_t sig_atomic_t;
typedef union sigval {
    int sival_int;
    void *sival_ptr;
} sigval_t;
typedef struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union {
	int _pad[((128 / sizeof(int)) - 3)];
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	} _kill;
	struct {
	    int si_tid;
	    int si_overrun;
	    sigval_t si_sigval;
	} _timer;
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	    sigval_t si_sigval;
	} _rt;
	struct {
	    __pid_t si_pid;
	    __uid_t si_uid;
	    int si_status;
	    __clock_t si_utime;
	    __clock_t si_stime;
	} _sigchld;
	struct {
	    void *si_addr;
	} _sigfault;
	struct {
	    long int si_band;
	    int si_fd;
	} _sigpoll;
    } _sifields;
} siginfo_t;
enum { SI_ASYNCNL = -60, SI_TKILL = -6, SI_SIGIO, SI_ASYNCIO, SI_MESGQ, SI_TIMER, SI_QUEUE, SI_USER, SI_KERNEL = 0x80 };
enum { ILL_ILLOPC = 1, ILL_ILLOPN, ILL_ILLADR, ILL_ILLTRP, ILL_PRVOPC, ILL_PRVREG, ILL_COPROC, ILL_BADSTK };
enum { FPE_INTDIV = 1, FPE_INTOVF, FPE_FLTDIV, FPE_FLTOVF, FPE_FLTUND, FPE_FLTRES, FPE_FLTINV, FPE_FLTSUB };
enum { SEGV_MAPERR = 1, SEGV_ACCERR };
enum { BUS_ADRALN = 1, BUS_ADRERR, BUS_OBJERR };
enum { TRAP_BRKPT = 1, TRAP_TRACE };
enum { CLD_EXITED = 1, CLD_KILLED, CLD_DUMPED, CLD_TRAPPED, CLD_STOPPED, CLD_CONTINUED };
enum { POLL_IN = 1, POLL_OUT, POLL_MSG, POLL_ERR, POLL_PRI, POLL_HUP };
typedef struct sigevent {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union {
	int _pad[((64 / sizeof(int)) - 3)];
	__pid_t _tid;
	struct {
	    void (*_function) (sigval_t);
	    void *_attribute;
	} _sigev_thread;
    } _sigev_un;
} sigevent_t;
enum { SIGEV_SIGNAL = 0, SIGEV_NONE, SIGEV_THREAD, SIGEV_THREAD_ID = 4 };
typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern __sighandler_t signal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern int kill(__pid_t __pid, int __sig) __attribute__ ((__nothrow__));
extern int killpg(__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));
extern int raise(int __sig) __attribute__ ((__nothrow__));
extern __sighandler_t ssignal(int __sig, __sighandler_t __handler) __attribute__ ((__nothrow__));
extern int gsignal(int __sig) __attribute__ ((__nothrow__));
extern void psignal(int __sig, __const char *__s);
extern void psiginfo(__const siginfo_t * __pinfo, __const char *__s);
extern int __sigpause(int __sig_or_mask, int __is_sig);
extern int sigblock(int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int sigsetmask(int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int siggetmask(void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;
extern int sigemptyset(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigfillset(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigaddset(sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigdelset(sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigismember(__const sigset_t * __set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct sigaction {
    union {
	__sighandler_t sa_handler;
	void (*sa_sigaction) (int, siginfo_t *, void *);
    } __sigaction_handler;
    __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer) (void);
};
extern int sigprocmask(int __how, __const sigset_t * __restrict __set, sigset_t * __restrict __oset) __attribute__ ((__nothrow__));
extern int sigsuspend(__const sigset_t * __set) __attribute__ ((__nonnull__(1)));
extern int sigaction(int __sig, __const struct sigaction *__restrict __act, struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));
extern int sigpending(sigset_t * __set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sigwait(__const sigset_t * __restrict __set, int *__restrict __sig) __attribute__ ((__nonnull__(1, 2)));
extern int sigwaitinfo(__const sigset_t * __restrict __set, siginfo_t * __restrict __info) __attribute__ ((__nonnull__(1)));
extern int sigtimedwait(__const sigset_t * __restrict __set, siginfo_t * __restrict __info, __const struct timespec *__restrict __timeout) __attribute__ ((__nonnull__(1)));
extern int sigqueue(__pid_t __pid, int __sig, __const union sigval __val) __attribute__ ((__nothrow__));
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];
struct sigvec {
    __sighandler_t sv_handler;
    int sv_mask;
    int sv_flags;
};
extern int sigvec(int __sig, __const struct sigvec *__vec, struct sigvec *__ovec) __attribute__ ((__nothrow__));
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef unsigned short umode_t;
typedef struct {
    unsigned long fds_bits[(1024 / (8 * sizeof(unsigned long)))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t) (int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;
typedef long long __kernel_loff_t;
typedef struct {
    int val[2];
} __kernel_fsid_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
struct _fpx_sw_bytes {
    __u32 magic1;
    __u32 extended_size;
    __u64 xstate_bv;
    __u32 xstate_size;
    __u32 padding[7];
};
struct _fpreg {
    unsigned short significand[4];
    unsigned short exponent;
};
struct _fpxreg {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short padding[3];
};
struct _xmmreg {
    unsigned long element[4];
};
struct _fpstate {
    unsigned long cw;
    unsigned long sw;
    unsigned long tag;
    unsigned long ipoff;
    unsigned long cssel;
    unsigned long dataoff;
    unsigned long datasel;
    struct _fpreg _st[8];
    unsigned short status;
    unsigned short magic;
    unsigned long _fxsr_env[6];
    unsigned long mxcsr;
    unsigned long reserved;
    struct _fpxreg _fxsr_st[8];
    struct _xmmreg _xmm[8];
    unsigned long padding1[44];
    union {
	unsigned long padding2[12];
	struct _fpx_sw_bytes sw_reserved;
    };
};
struct sigcontext {
    unsigned short gs, __gsh;
    unsigned short fs, __fsh;
    unsigned short es, __esh;
    unsigned short ds, __dsh;
    unsigned long edi;
    unsigned long esi;
    unsigned long ebp;
    unsigned long esp;
    unsigned long ebx;
    unsigned long edx;
    unsigned long ecx;
    unsigned long eax;
    unsigned long trapno;
    unsigned long err;
    unsigned long eip;
    unsigned short cs, __csh;
    unsigned long eflags;
    unsigned long esp_at_signal;
    unsigned short ss, __ssh;
    struct _fpstate *fpstate;
    unsigned long oldmask;
    unsigned long cr2;
};
struct _xsave_hdr {
    __u64 xstate_bv;
    __u64 reserved1[2];
    __u64 reserved2[5];
};
struct _ymmh_state {
    __u32 ymmh_space[64];
};
struct _xstate {
    struct _fpstate fpstate;
    struct _xsave_hdr xstate_hdr;
    struct _ymmh_state ymmh;
};
extern int sigreturn(struct sigcontext *__scp) __attribute__ ((__nothrow__));
extern int siginterrupt(int __sig, int __interrupt) __attribute__ ((__nothrow__));
struct sigstack {
    void *ss_sp;
    int ss_onstack;
};
enum { SS_ONSTACK = 1, SS_DISABLE };
typedef struct sigaltstack {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
} stack_t;
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
extern int sigaltstack(__const struct sigaltstack *__restrict __ss, struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));
extern int pthread_sigmask(int __how, __const __sigset_t * __restrict __newmask, __sigset_t * __restrict __oldmask) __attribute__ ((__nothrow__));
extern int pthread_kill(pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));
extern int __libc_current_sigrtmin(void) __attribute__ ((__nothrow__));
extern int __libc_current_sigrtmax(void) __attribute__ ((__nothrow__));
typedef float float_t;
typedef double double_t;
extern double acos(double __x) __attribute__ ((__nothrow__));
extern double __acos(double __x) __attribute__ ((__nothrow__));
extern double asin(double __x) __attribute__ ((__nothrow__));
extern double __asin(double __x) __attribute__ ((__nothrow__));
extern double atan(double __x) __attribute__ ((__nothrow__));
extern double __atan(double __x) __attribute__ ((__nothrow__));
extern double atan2(double __y, double __x) __attribute__ ((__nothrow__));
extern double __atan2(double __y, double __x) __attribute__ ((__nothrow__));
extern double cos(double __x) __attribute__ ((__nothrow__));
extern double __cos(double __x) __attribute__ ((__nothrow__));
extern double sin(double __x) __attribute__ ((__nothrow__));
extern double __sin(double __x) __attribute__ ((__nothrow__));
extern double tan(double __x) __attribute__ ((__nothrow__));
extern double __tan(double __x) __attribute__ ((__nothrow__));
extern double cosh(double __x) __attribute__ ((__nothrow__));
extern double __cosh(double __x) __attribute__ ((__nothrow__));
extern double sinh(double __x) __attribute__ ((__nothrow__));
extern double __sinh(double __x) __attribute__ ((__nothrow__));
extern double tanh(double __x) __attribute__ ((__nothrow__));
extern double __tanh(double __x) __attribute__ ((__nothrow__));
extern double acosh(double __x) __attribute__ ((__nothrow__));
extern double __acosh(double __x) __attribute__ ((__nothrow__));
extern double asinh(double __x) __attribute__ ((__nothrow__));
extern double __asinh(double __x) __attribute__ ((__nothrow__));
extern double atanh(double __x) __attribute__ ((__nothrow__));
extern double __atanh(double __x) __attribute__ ((__nothrow__));
extern double exp(double __x) __attribute__ ((__nothrow__));
extern double __exp(double __x) __attribute__ ((__nothrow__));
extern double frexp(double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double __frexp(double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double ldexp(double __x, int __exponent) __attribute__ ((__nothrow__));
extern double __ldexp(double __x, int __exponent) __attribute__ ((__nothrow__));
extern double log(double __x) __attribute__ ((__nothrow__));
extern double __log(double __x) __attribute__ ((__nothrow__));
extern double log10(double __x) __attribute__ ((__nothrow__));
extern double __log10(double __x) __attribute__ ((__nothrow__));
extern double modf(double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double __modf(double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double expm1(double __x) __attribute__ ((__nothrow__));
extern double __expm1(double __x) __attribute__ ((__nothrow__));
extern double log1p(double __x) __attribute__ ((__nothrow__));
extern double __log1p(double __x) __attribute__ ((__nothrow__));
extern double logb(double __x) __attribute__ ((__nothrow__));
extern double __logb(double __x) __attribute__ ((__nothrow__));
extern double exp2(double __x) __attribute__ ((__nothrow__));
extern double __exp2(double __x) __attribute__ ((__nothrow__));
extern double log2(double __x) __attribute__ ((__nothrow__));
extern double __log2(double __x) __attribute__ ((__nothrow__));
extern double pow(double __x, double __y) __attribute__ ((__nothrow__));
extern double __pow(double __x, double __y) __attribute__ ((__nothrow__));
extern double sqrt(double __x) __attribute__ ((__nothrow__));
extern double __sqrt(double __x) __attribute__ ((__nothrow__));
extern double hypot(double __x, double __y) __attribute__ ((__nothrow__));
extern double __hypot(double __x, double __y) __attribute__ ((__nothrow__));
extern double cbrt(double __x) __attribute__ ((__nothrow__));
extern double __cbrt(double __x) __attribute__ ((__nothrow__));
extern double ceil(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __ceil(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fabs(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __fabs(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double floor(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __floor(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fmod(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmod(double __x, double __y) __attribute__ ((__nothrow__));
extern int __isinf(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finite(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinf(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finite(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double drem(double __x, double __y) __attribute__ ((__nothrow__));
extern double __drem(double __x, double __y) __attribute__ ((__nothrow__));
extern double significand(double __x) __attribute__ ((__nothrow__));
extern double __significand(double __x) __attribute__ ((__nothrow__));
extern double copysign(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __copysign(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double nan(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nan(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnan(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnan(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double j0(double) __attribute__ ((__nothrow__));
extern double __j0(double) __attribute__ ((__nothrow__));
extern double j1(double) __attribute__ ((__nothrow__));
extern double __j1(double) __attribute__ ((__nothrow__));
extern double jn(int, double) __attribute__ ((__nothrow__));
extern double __jn(int, double) __attribute__ ((__nothrow__));
extern double y0(double) __attribute__ ((__nothrow__));
extern double __y0(double) __attribute__ ((__nothrow__));
extern double y1(double) __attribute__ ((__nothrow__));
extern double __y1(double) __attribute__ ((__nothrow__));
extern double yn(int, double) __attribute__ ((__nothrow__));
extern double __yn(int, double) __attribute__ ((__nothrow__));
extern double erf(double) __attribute__ ((__nothrow__));
extern double __erf(double) __attribute__ ((__nothrow__));
extern double erfc(double) __attribute__ ((__nothrow__));
extern double __erfc(double) __attribute__ ((__nothrow__));
extern double lgamma(double) __attribute__ ((__nothrow__));
extern double __lgamma(double) __attribute__ ((__nothrow__));
extern double tgamma(double) __attribute__ ((__nothrow__));
extern double __tgamma(double) __attribute__ ((__nothrow__));
extern double gamma(double) __attribute__ ((__nothrow__));
extern double __gamma(double) __attribute__ ((__nothrow__));
extern double lgamma_r(double, int *__signgamp) __attribute__ ((__nothrow__));
extern double __lgamma_r(double, int *__signgamp) __attribute__ ((__nothrow__));
extern double rint(double __x) __attribute__ ((__nothrow__));
extern double __rint(double __x) __attribute__ ((__nothrow__));
extern double nextafter(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nextafter(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double nexttoward(double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nexttoward(double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double remainder(double __x, double __y) __attribute__ ((__nothrow__));
extern double __remainder(double __x, double __y) __attribute__ ((__nothrow__));
extern double scalbn(double __x, int __n) __attribute__ ((__nothrow__));
extern double __scalbn(double __x, int __n) __attribute__ ((__nothrow__));
extern int ilogb(double __x) __attribute__ ((__nothrow__));
extern int __ilogb(double __x) __attribute__ ((__nothrow__));
extern double scalbln(double __x, long int __n) __attribute__ ((__nothrow__));
extern double __scalbln(double __x, long int __n) __attribute__ ((__nothrow__));
extern double nearbyint(double __x) __attribute__ ((__nothrow__));
extern double __nearbyint(double __x) __attribute__ ((__nothrow__));
extern double round(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __round(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double trunc(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __trunc(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double remquo(double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern double __remquo(double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrint(double __x) __attribute__ ((__nothrow__));
extern long int __lrint(double __x) __attribute__ ((__nothrow__));
extern long long int llrint(double __x) __attribute__ ((__nothrow__));
extern long long int __llrint(double __x) __attribute__ ((__nothrow__));
extern long int lround(double __x) __attribute__ ((__nothrow__));
extern long int __lround(double __x) __attribute__ ((__nothrow__));
extern long long int llround(double __x) __attribute__ ((__nothrow__));
extern long long int __llround(double __x) __attribute__ ((__nothrow__));
extern double fdim(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fdim(double __x, double __y) __attribute__ ((__nothrow__));
extern double fmax(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmax(double __x, double __y) __attribute__ ((__nothrow__));
extern double fmin(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmin(double __x, double __y) __attribute__ ((__nothrow__));
extern int __fpclassify(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbit(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fma(double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double __fma(double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double scalb(double __x, double __n) __attribute__ ((__nothrow__));
extern double __scalb(double __x, double __n) __attribute__ ((__nothrow__));
extern float acosf(float __x) __attribute__ ((__nothrow__));
extern float __acosf(float __x) __attribute__ ((__nothrow__));
extern float asinf(float __x) __attribute__ ((__nothrow__));
extern float __asinf(float __x) __attribute__ ((__nothrow__));
extern float atanf(float __x) __attribute__ ((__nothrow__));
extern float __atanf(float __x) __attribute__ ((__nothrow__));
extern float atan2f(float __y, float __x) __attribute__ ((__nothrow__));
extern float __atan2f(float __y, float __x) __attribute__ ((__nothrow__));
extern float cosf(float __x) __attribute__ ((__nothrow__));
extern float __cosf(float __x) __attribute__ ((__nothrow__));
extern float sinf(float __x) __attribute__ ((__nothrow__));
extern float __sinf(float __x) __attribute__ ((__nothrow__));
extern float tanf(float __x) __attribute__ ((__nothrow__));
extern float __tanf(float __x) __attribute__ ((__nothrow__));
extern float coshf(float __x) __attribute__ ((__nothrow__));
extern float __coshf(float __x) __attribute__ ((__nothrow__));
extern float sinhf(float __x) __attribute__ ((__nothrow__));
extern float __sinhf(float __x) __attribute__ ((__nothrow__));
extern float tanhf(float __x) __attribute__ ((__nothrow__));
extern float __tanhf(float __x) __attribute__ ((__nothrow__));
extern float acoshf(float __x) __attribute__ ((__nothrow__));
extern float __acoshf(float __x) __attribute__ ((__nothrow__));
extern float asinhf(float __x) __attribute__ ((__nothrow__));
extern float __asinhf(float __x) __attribute__ ((__nothrow__));
extern float atanhf(float __x) __attribute__ ((__nothrow__));
extern float __atanhf(float __x) __attribute__ ((__nothrow__));
extern float expf(float __x) __attribute__ ((__nothrow__));
extern float __expf(float __x) __attribute__ ((__nothrow__));
extern float frexpf(float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float __frexpf(float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float ldexpf(float __x, int __exponent) __attribute__ ((__nothrow__));
extern float __ldexpf(float __x, int __exponent) __attribute__ ((__nothrow__));
extern float logf(float __x) __attribute__ ((__nothrow__));
extern float __logf(float __x) __attribute__ ((__nothrow__));
extern float log10f(float __x) __attribute__ ((__nothrow__));
extern float __log10f(float __x) __attribute__ ((__nothrow__));
extern float modff(float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float __modff(float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float expm1f(float __x) __attribute__ ((__nothrow__));
extern float __expm1f(float __x) __attribute__ ((__nothrow__));
extern float log1pf(float __x) __attribute__ ((__nothrow__));
extern float __log1pf(float __x) __attribute__ ((__nothrow__));
extern float logbf(float __x) __attribute__ ((__nothrow__));
extern float __logbf(float __x) __attribute__ ((__nothrow__));
extern float exp2f(float __x) __attribute__ ((__nothrow__));
extern float __exp2f(float __x) __attribute__ ((__nothrow__));
extern float log2f(float __x) __attribute__ ((__nothrow__));
extern float __log2f(float __x) __attribute__ ((__nothrow__));
extern float powf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __powf(float __x, float __y) __attribute__ ((__nothrow__));
extern float sqrtf(float __x) __attribute__ ((__nothrow__));
extern float __sqrtf(float __x) __attribute__ ((__nothrow__));
extern float hypotf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __hypotf(float __x, float __y) __attribute__ ((__nothrow__));
extern float cbrtf(float __x) __attribute__ ((__nothrow__));
extern float __cbrtf(float __x) __attribute__ ((__nothrow__));
extern float ceilf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __ceilf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fabsf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __fabsf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float floorf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __floorf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fmodf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmodf(float __x, float __y) __attribute__ ((__nothrow__));
extern int __isinff(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finitef(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinff(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finitef(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float dremf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __dremf(float __x, float __y) __attribute__ ((__nothrow__));
extern float significandf(float __x) __attribute__ ((__nothrow__));
extern float __significandf(float __x) __attribute__ ((__nothrow__));
extern float copysignf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __copysignf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float nanf(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nanf(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnanf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnanf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float j0f(float) __attribute__ ((__nothrow__));
extern float __j0f(float) __attribute__ ((__nothrow__));
extern float j1f(float) __attribute__ ((__nothrow__));
extern float __j1f(float) __attribute__ ((__nothrow__));
extern float jnf(int, float) __attribute__ ((__nothrow__));
extern float __jnf(int, float) __attribute__ ((__nothrow__));
extern float y0f(float) __attribute__ ((__nothrow__));
extern float __y0f(float) __attribute__ ((__nothrow__));
extern float y1f(float) __attribute__ ((__nothrow__));
extern float __y1f(float) __attribute__ ((__nothrow__));
extern float ynf(int, float) __attribute__ ((__nothrow__));
extern float __ynf(int, float) __attribute__ ((__nothrow__));
extern float erff(float) __attribute__ ((__nothrow__));
extern float __erff(float) __attribute__ ((__nothrow__));
extern float erfcf(float) __attribute__ ((__nothrow__));
extern float __erfcf(float) __attribute__ ((__nothrow__));
extern float lgammaf(float) __attribute__ ((__nothrow__));
extern float __lgammaf(float) __attribute__ ((__nothrow__));
extern float tgammaf(float) __attribute__ ((__nothrow__));
extern float __tgammaf(float) __attribute__ ((__nothrow__));
extern float gammaf(float) __attribute__ ((__nothrow__));
extern float __gammaf(float) __attribute__ ((__nothrow__));
extern float lgammaf_r(float, int *__signgamp) __attribute__ ((__nothrow__));
extern float __lgammaf_r(float, int *__signgamp) __attribute__ ((__nothrow__));
extern float rintf(float __x) __attribute__ ((__nothrow__));
extern float __rintf(float __x) __attribute__ ((__nothrow__));
extern float nextafterf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nextafterf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float nexttowardf(float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nexttowardf(float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float remainderf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __remainderf(float __x, float __y) __attribute__ ((__nothrow__));
extern float scalbnf(float __x, int __n) __attribute__ ((__nothrow__));
extern float __scalbnf(float __x, int __n) __attribute__ ((__nothrow__));
extern int ilogbf(float __x) __attribute__ ((__nothrow__));
extern int __ilogbf(float __x) __attribute__ ((__nothrow__));
extern float scalblnf(float __x, long int __n) __attribute__ ((__nothrow__));
extern float __scalblnf(float __x, long int __n) __attribute__ ((__nothrow__));
extern float nearbyintf(float __x) __attribute__ ((__nothrow__));
extern float __nearbyintf(float __x) __attribute__ ((__nothrow__));
extern float roundf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __roundf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float truncf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __truncf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float remquof(float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern float __remquof(float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrintf(float __x) __attribute__ ((__nothrow__));
extern long int __lrintf(float __x) __attribute__ ((__nothrow__));
extern long long int llrintf(float __x) __attribute__ ((__nothrow__));
extern long long int __llrintf(float __x) __attribute__ ((__nothrow__));
extern long int lroundf(float __x) __attribute__ ((__nothrow__));
extern long int __lroundf(float __x) __attribute__ ((__nothrow__));
extern long long int llroundf(float __x) __attribute__ ((__nothrow__));
extern long long int __llroundf(float __x) __attribute__ ((__nothrow__));
extern float fdimf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fdimf(float __x, float __y) __attribute__ ((__nothrow__));
extern float fmaxf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmaxf(float __x, float __y) __attribute__ ((__nothrow__));
extern float fminf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fminf(float __x, float __y) __attribute__ ((__nothrow__));
extern int __fpclassifyf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbitf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fmaf(float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float __fmaf(float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float scalbf(float __x, float __n) __attribute__ ((__nothrow__));
extern float __scalbf(float __x, float __n) __attribute__ ((__nothrow__));
extern long double acosl(long double __x) __attribute__ ((__nothrow__));
extern long double __acosl(long double __x) __attribute__ ((__nothrow__));
extern long double asinl(long double __x) __attribute__ ((__nothrow__));
extern long double __asinl(long double __x) __attribute__ ((__nothrow__));
extern long double atanl(long double __x) __attribute__ ((__nothrow__));
extern long double __atanl(long double __x) __attribute__ ((__nothrow__));
extern long double atan2l(long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double __atan2l(long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double cosl(long double __x) __attribute__ ((__nothrow__));
extern long double __cosl(long double __x) __attribute__ ((__nothrow__));
extern long double sinl(long double __x) __attribute__ ((__nothrow__));
extern long double __sinl(long double __x) __attribute__ ((__nothrow__));
extern long double tanl(long double __x) __attribute__ ((__nothrow__));
extern long double __tanl(long double __x) __attribute__ ((__nothrow__));
extern long double coshl(long double __x) __attribute__ ((__nothrow__));
extern long double __coshl(long double __x) __attribute__ ((__nothrow__));
extern long double sinhl(long double __x) __attribute__ ((__nothrow__));
extern long double __sinhl(long double __x) __attribute__ ((__nothrow__));
extern long double tanhl(long double __x) __attribute__ ((__nothrow__));
extern long double __tanhl(long double __x) __attribute__ ((__nothrow__));
extern long double acoshl(long double __x) __attribute__ ((__nothrow__));
extern long double __acoshl(long double __x) __attribute__ ((__nothrow__));
extern long double asinhl(long double __x) __attribute__ ((__nothrow__));
extern long double __asinhl(long double __x) __attribute__ ((__nothrow__));
extern long double atanhl(long double __x) __attribute__ ((__nothrow__));
extern long double __atanhl(long double __x) __attribute__ ((__nothrow__));
extern long double expl(long double __x) __attribute__ ((__nothrow__));
extern long double __expl(long double __x) __attribute__ ((__nothrow__));
extern long double frexpl(long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double __frexpl(long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double ldexpl(long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double __ldexpl(long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double logl(long double __x) __attribute__ ((__nothrow__));
extern long double __logl(long double __x) __attribute__ ((__nothrow__));
extern long double log10l(long double __x) __attribute__ ((__nothrow__));
extern long double __log10l(long double __x) __attribute__ ((__nothrow__));
extern long double modfl(long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double __modfl(long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double expm1l(long double __x) __attribute__ ((__nothrow__));
extern long double __expm1l(long double __x) __attribute__ ((__nothrow__));
extern long double log1pl(long double __x) __attribute__ ((__nothrow__));
extern long double __log1pl(long double __x) __attribute__ ((__nothrow__));
extern long double logbl(long double __x) __attribute__ ((__nothrow__));
extern long double __logbl(long double __x) __attribute__ ((__nothrow__));
extern long double exp2l(long double __x) __attribute__ ((__nothrow__));
extern long double __exp2l(long double __x) __attribute__ ((__nothrow__));
extern long double log2l(long double __x) __attribute__ ((__nothrow__));
extern long double __log2l(long double __x) __attribute__ ((__nothrow__));
extern long double powl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __powl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double sqrtl(long double __x) __attribute__ ((__nothrow__));
extern long double __sqrtl(long double __x) __attribute__ ((__nothrow__));
extern long double hypotl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __hypotl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double cbrtl(long double __x) __attribute__ ((__nothrow__));
extern long double __cbrtl(long double __x) __attribute__ ((__nothrow__));
extern long double ceill(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __ceill(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fabsl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __fabsl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double floorl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __floorl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fmodl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmodl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern int __isinfl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finitel(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinfl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finitel(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double dreml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __dreml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double significandl(long double __x) __attribute__ ((__nothrow__));
extern long double __significandl(long double __x) __attribute__ ((__nothrow__));
extern long double copysignl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __copysignl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double nanl(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nanl(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnanl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnanl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double j0l(long double) __attribute__ ((__nothrow__));
extern long double __j0l(long double) __attribute__ ((__nothrow__));
extern long double j1l(long double) __attribute__ ((__nothrow__));
extern long double __j1l(long double) __attribute__ ((__nothrow__));
extern long double jnl(int, long double) __attribute__ ((__nothrow__));
extern long double __jnl(int, long double) __attribute__ ((__nothrow__));
extern long double y0l(long double) __attribute__ ((__nothrow__));
extern long double __y0l(long double) __attribute__ ((__nothrow__));
extern long double y1l(long double) __attribute__ ((__nothrow__));
extern long double __y1l(long double) __attribute__ ((__nothrow__));
extern long double ynl(int, long double) __attribute__ ((__nothrow__));
extern long double __ynl(int, long double) __attribute__ ((__nothrow__));
extern long double erfl(long double) __attribute__ ((__nothrow__));
extern long double __erfl(long double) __attribute__ ((__nothrow__));
extern long double erfcl(long double) __attribute__ ((__nothrow__));
extern long double __erfcl(long double) __attribute__ ((__nothrow__));
extern long double lgammal(long double) __attribute__ ((__nothrow__));
extern long double __lgammal(long double) __attribute__ ((__nothrow__));
extern long double tgammal(long double) __attribute__ ((__nothrow__));
extern long double __tgammal(long double) __attribute__ ((__nothrow__));
extern long double gammal(long double) __attribute__ ((__nothrow__));
extern long double __gammal(long double) __attribute__ ((__nothrow__));
extern long double lgammal_r(long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double __lgammal_r(long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double rintl(long double __x) __attribute__ ((__nothrow__));
extern long double __rintl(long double __x) __attribute__ ((__nothrow__));
extern long double nextafterl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nextafterl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double nexttowardl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nexttowardl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double remainderl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __remainderl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double scalbnl(long double __x, int __n) __attribute__ ((__nothrow__));
extern long double __scalbnl(long double __x, int __n) __attribute__ ((__nothrow__));
extern int ilogbl(long double __x) __attribute__ ((__nothrow__));
extern int __ilogbl(long double __x) __attribute__ ((__nothrow__));
extern long double scalblnl(long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double __scalblnl(long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double nearbyintl(long double __x) __attribute__ ((__nothrow__));
extern long double __nearbyintl(long double __x) __attribute__ ((__nothrow__));
extern long double roundl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __roundl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double truncl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __truncl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double remquol(long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long double __remquol(long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrintl(long double __x) __attribute__ ((__nothrow__));
extern long int __lrintl(long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl(long double __x) __attribute__ ((__nothrow__));
extern long long int __llrintl(long double __x) __attribute__ ((__nothrow__));
extern long int lroundl(long double __x) __attribute__ ((__nothrow__));
extern long int __lroundl(long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl(long double __x) __attribute__ ((__nothrow__));
extern long long int __llroundl(long double __x) __attribute__ ((__nothrow__));
extern long double fdiml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fdiml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double fmaxl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmaxl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double fminl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fminl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern int __fpclassifyl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbitl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fmal(long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double __fmal(long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double scalbl(long double __x, long double __n) __attribute__ ((__nothrow__));
extern long double __scalbl(long double __x, long double __n) __attribute__ ((__nothrow__));
extern int signgam;
enum { FP_NAN, FP_INFINITE, FP_ZERO, FP_SUBNORMAL, FP_NORMAL };
typedef enum { _IEEE_ = -1, _SVID_, _XOPEN_, _POSIX_, _ISOC_ } _LIB_VERSION_TYPE;
extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
extern int matherr(struct exception *__exc);
extern int *__errno_location(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
enum { _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)), _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)), _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)), _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)), _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)), _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)), _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)), _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)), _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)), _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)), _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)), _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) };
extern __const unsigned short int **__ctype_b_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern int isalnum(int) __attribute__ ((__nothrow__));
extern int isalpha(int) __attribute__ ((__nothrow__));
extern int iscntrl(int) __attribute__ ((__nothrow__));
extern int isdigit(int) __attribute__ ((__nothrow__));
extern int islower(int) __attribute__ ((__nothrow__));
extern int isgraph(int) __attribute__ ((__nothrow__));
extern int isprint(int) __attribute__ ((__nothrow__));
extern int ispunct(int) __attribute__ ((__nothrow__));
extern int isspace(int) __attribute__ ((__nothrow__));
extern int isupper(int) __attribute__ ((__nothrow__));
extern int isxdigit(int) __attribute__ ((__nothrow__));
extern int tolower(int __c) __attribute__ ((__nothrow__));
extern int toupper(int __c) __attribute__ ((__nothrow__));
extern int isblank(int) __attribute__ ((__nothrow__));
extern int isascii(int __c) __attribute__ ((__nothrow__));
extern int toascii(int __c) __attribute__ ((__nothrow__));
extern int _toupper(int) __attribute__ ((__nothrow__));
extern int _tolower(int) __attribute__ ((__nothrow__));
extern int isalnum_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isblank_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int __tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int __toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
typedef struct {
    char *next_in;
    unsigned int avail_in;
    unsigned int total_in_lo32;
    unsigned int total_in_hi32;
    char *next_out;
    unsigned int avail_out;
    unsigned int total_out_lo32;
    unsigned int total_out_hi32;
    void *state;
    void *(*bzalloc) (void *, int, int);
    void (*bzfree) (void *, void *);
    void *opaque;
} bz_stream;
extern int BZ2_bzCompressInit(bz_stream * strm, int blockSize100k, int verbosity, int workFactor);
extern int BZ2_bzCompress(bz_stream * strm, int action);
extern int BZ2_bzCompressEnd(bz_stream * strm);
extern int BZ2_bzDecompressInit(bz_stream * strm, int verbosity, int small);
extern int BZ2_bzDecompress(bz_stream * strm);
extern int BZ2_bzDecompressEnd(bz_stream * strm);
typedef void BZFILE;
extern BZFILE *BZ2_bzReadOpen(int *bzerror, FILE * f, int verbosity, int small, void *unused, int nUnused);
extern void BZ2_bzReadClose(int *bzerror, BZFILE * b);
extern void BZ2_bzReadGetUnused(int *bzerror, BZFILE * b, void **unused, int *nUnused);
extern int BZ2_bzRead(int *bzerror, BZFILE * b, void *buf, int len);
extern BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE * f, int blockSize100k, int verbosity, int workFactor);
extern void BZ2_bzWrite(int *bzerror, BZFILE * b, void *buf, int len);
extern void BZ2_bzWriteClose(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in, unsigned int *nbytes_out);
extern void BZ2_bzWriteClose64(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32);
extern int BZ2_bzBuffToBuffCompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int blockSize100k, int verbosity, int workFactor);
extern int BZ2_bzBuffToBuffDecompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int small, int verbosity);
extern const char *BZ2_bzlibVersion(void);
extern BZFILE *BZ2_bzopen(const char *path, const char *mode);
extern BZFILE *BZ2_bzdopen(int fd, const char *mode);
extern int BZ2_bzread(BZFILE * b, void *buf, int len);
extern int BZ2_bzwrite(BZFILE * b, void *buf, int len);
extern int BZ2_bzflush(BZFILE * b);
extern void BZ2_bzclose(BZFILE * b);
extern const char *BZ2_bzerror(BZFILE * b, int *errnum);
struct flock {
    short int l_type;
    short int l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
};
extern int fcntl(int __fd, int __cmd, ...);
extern int open(__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(1)));
extern int openat(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int openat64(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int creat(__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__(1)));
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int posix_fadvise(int __fd, __off_t __offset, __off_t __len, int __advise) __attribute__ ((__nothrow__));
extern int posix_fallocate(int __fd, __off_t __offset, __off_t __len);
struct utimbuf {
    __time_t actime;
    __time_t modtime;
};
extern int utime(__const char *__file, __const struct utimbuf *__file_times) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access(__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
extern int close(int __fd);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern ssize_t write(int __fd, __const void *__buf, size_t __n);
extern int pipe(int __pipedes[2]) __attribute__ ((__nothrow__));
extern unsigned int alarm(unsigned int __seconds) __attribute__ ((__nothrow__));
extern unsigned int sleep(unsigned int __seconds);
extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval) __attribute__ ((__nothrow__));
extern int usleep(__useconds_t __useconds);
extern int pause(void);
extern int chown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchown(int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__));
extern int lchown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchownat(int __fd, __const char *__file, __uid_t __owner, __gid_t __group, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int chdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchdir(int __fd) __attribute__ ((__nothrow__));
extern char *getcwd(char *__buf, size_t __size) __attribute__ ((__nothrow__));
extern char *getwd(char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1))) __attribute__ ((__deprecated__));
extern int dup(int __fd) __attribute__ ((__nothrow__));
extern int dup2(int __fd, int __fd2) __attribute__ ((__nothrow__));
extern char **__environ;
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__));
extern int execv(__const char *__path, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int nice(int __inc) __attribute__ ((__nothrow__));
extern void _exit(int __status) __attribute__ ((__noreturn__));
enum { _PC_LINK_MAX, _PC_MAX_CANON, _PC_MAX_INPUT, _PC_NAME_MAX, _PC_PATH_MAX, _PC_PIPE_BUF, _PC_CHOWN_RESTRICTED, _PC_NO_TRUNC, _PC_VDISABLE, _PC_SYNC_IO, _PC_ASYNC_IO, _PC_PRIO_IO, _PC_SOCK_MAXBUF, _PC_FILESIZEBITS, _PC_REC_INCR_XFER_SIZE, _PC_REC_MAX_XFER_SIZE, _PC_REC_MIN_XFER_SIZE, _PC_REC_XFER_ALIGN, _PC_ALLOC_SIZE_MIN, _PC_SYMLINK_MAX, _PC_2_SYMLINKS };
enum { _SC_ARG_MAX, _SC_CHILD_MAX, _SC_CLK_TCK, _SC_NGROUPS_MAX, _SC_OPEN_MAX, _SC_STREAM_MAX, _SC_TZNAME_MAX, _SC_JOB_CONTROL, _SC_SAVED_IDS, _SC_REALTIME_SIGNALS, _SC_PRIORITY_SCHEDULING, _SC_TIMERS, _SC_ASYNCHRONOUS_IO, _SC_PRIORITIZED_IO, _SC_SYNCHRONIZED_IO, _SC_FSYNC, _SC_MAPPED_FILES, _SC_MEMLOCK, _SC_MEMLOCK_RANGE, _SC_MEMORY_PROTECTION, _SC_MESSAGE_PASSING, _SC_SEMAPHORES, _SC_SHARED_MEMORY_OBJECTS, _SC_AIO_LISTIO_MAX, _SC_AIO_MAX, _SC_AIO_PRIO_DELTA_MAX, _SC_DELAYTIMER_MAX, _SC_MQ_OPEN_MAX, _SC_MQ_PRIO_MAX, _SC_VERSION, _SC_PAGESIZE, _SC_RTSIG_MAX, _SC_SEM_NSEMS_MAX, _SC_SEM_VALUE_MAX, _SC_SIGQUEUE_MAX, _SC_TIMER_MAX, _SC_BC_BASE_MAX, _SC_BC_DIM_MAX, _SC_BC_SCALE_MAX, _SC_BC_STRING_MAX, _SC_COLL_WEIGHTS_MAX, _SC_EQUIV_CLASS_MAX, _SC_EXPR_NEST_MAX, _SC_LINE_MAX, _SC_RE_DUP_MAX, _SC_CHARCLASS_NAME_MAX, _SC_2_VERSION, _SC_2_C_BIND, _SC_2_C_DEV, _SC_2_FORT_DEV, _SC_2_FORT_RUN, _SC_2_SW_DEV, _SC_2_LOCALEDEF, _SC_PII, _SC_PII_XTI, _SC_PII_SOCKET, _SC_PII_INTERNET, _SC_PII_OSI, _SC_POLL, _SC_SELECT, _SC_UIO_MAXIOV, _SC_IOV_MAX = _SC_UIO_MAXIOV, _SC_PII_INTERNET_STREAM, _SC_PII_INTERNET_DGRAM, _SC_PII_OSI_COTS, _SC_PII_OSI_CLTS, _SC_PII_OSI_M, _SC_T_IOV_MAX, _SC_THREADS, _SC_THREAD_SAFE_FUNCTIONS, _SC_GETGR_R_SIZE_MAX, _SC_GETPW_R_SIZE_MAX, _SC_LOGIN_NAME_MAX, _SC_TTY_NAME_MAX, _SC_THREAD_DESTRUCTOR_ITERATIONS, _SC_THREAD_KEYS_MAX, _SC_THREAD_STACK_MIN, _SC_THREAD_THREADS_MAX, _SC_THREAD_ATTR_STACKADDR, _SC_THREAD_ATTR_STACKSIZE, _SC_THREAD_PRIORITY_SCHEDULING, _SC_THREAD_PRIO_INHERIT, _SC_THREAD_PRIO_PROTECT, _SC_THREAD_PROCESS_SHARED, _SC_NPROCESSORS_CONF, _SC_NPROCESSORS_ONLN, _SC_PHYS_PAGES, _SC_AVPHYS_PAGES, _SC_ATEXIT_MAX, _SC_PASS_MAX, _SC_XOPEN_VERSION, _SC_XOPEN_XCU_VERSION, _SC_XOPEN_UNIX, _SC_XOPEN_CRYPT, _SC_XOPEN_ENH_I18N, _SC_XOPEN_SHM, _SC_2_CHAR_TERM, _SC_2_C_VERSION, _SC_2_UPE, _SC_XOPEN_XPG2, _SC_XOPEN_XPG3, _SC_XOPEN_XPG4, _SC_CHAR_BIT, _SC_CHAR_MAX, _SC_CHAR_MIN, _SC_INT_MAX, _SC_INT_MIN, _SC_LONG_BIT, _SC_WORD_BIT, _SC_MB_LEN_MAX, _SC_NZERO, _SC_SSIZE_MAX, _SC_SCHAR_MAX, _SC_SCHAR_MIN, _SC_SHRT_MAX, _SC_SHRT_MIN, _SC_UCHAR_MAX, _SC_UINT_MAX, _SC_ULONG_MAX, _SC_USHRT_MAX, _SC_NL_ARGMAX, _SC_NL_LANGMAX, _SC_NL_MSGMAX, _SC_NL_NMAX, _SC_NL_SETMAX, _SC_NL_TEXTMAX, _SC_XBS5_ILP32_OFF32, _SC_XBS5_ILP32_OFFBIG, _SC_XBS5_LP64_OFF64, _SC_XBS5_LPBIG_OFFBIG, _SC_XOPEN_LEGACY, _SC_XOPEN_REALTIME, _SC_XOPEN_REALTIME_THREADS, _SC_ADVISORY_INFO, _SC_BARRIERS, _SC_BASE, _SC_C_LANG_SUPPORT, _SC_C_LANG_SUPPORT_R, _SC_CLOCK_SELECTION, _SC_CPUTIME, _SC_THREAD_CPUTIME, _SC_DEVICE_IO, _SC_DEVICE_SPECIFIC, _SC_DEVICE_SPECIFIC_R, _SC_FD_MGMT, _SC_FIFO, _SC_PIPE, _SC_FILE_ATTRIBUTES, _SC_FILE_LOCKING, _SC_FILE_SYSTEM, _SC_MONOTONIC_CLOCK, _SC_MULTI_PROCESS, _SC_SINGLE_PROCESS, _SC_NETWORKING, _SC_READER_WRITER_LOCKS, _SC_SPIN_LOCKS, _SC_REGEXP, _SC_REGEX_VERSION, _SC_SHELL, _SC_SIGNALS, _SC_SPAWN, _SC_SPORADIC_SERVER, _SC_THREAD_SPORADIC_SERVER, _SC_SYSTEM_DATABASE, _SC_SYSTEM_DATABASE_R, _SC_TIMEOUTS, _SC_TYPED_MEMORY_OBJECTS, _SC_USER_GROUPS, _SC_USER_GROUPS_R, _SC_2_PBS, _SC_2_PBS_ACCOUNTING, _SC_2_PBS_LOCATE, _SC_2_PBS_MESSAGE, _SC_2_PBS_TRACK, _SC_SYMLOOP_MAX, _SC_STREAMS, _SC_2_PBS_CHECKPOINT, _SC_V6_ILP32_OFF32, _SC_V6_ILP32_OFFBIG, _SC_V6_LP64_OFF64, _SC_V6_LPBIG_OFFBIG, _SC_HOST_NAME_MAX, _SC_TRACE, _SC_TRACE_EVENT_FILTER, _SC_TRACE_INHERIT, _SC_TRACE_LOG, _SC_LEVEL1_ICACHE_SIZE, _SC_LEVEL1_ICACHE_ASSOC, _SC_LEVEL1_ICACHE_LINESIZE, _SC_LEVEL1_DCACHE_SIZE, _SC_LEVEL1_DCACHE_ASSOC, _SC_LEVEL1_DCACHE_LINESIZE, _SC_LEVEL2_CACHE_SIZE, _SC_LEVEL2_CACHE_ASSOC, _SC_LEVEL2_CACHE_LINESIZE, _SC_LEVEL3_CACHE_SIZE, _SC_LEVEL3_CACHE_ASSOC, _SC_LEVEL3_CACHE_LINESIZE, _SC_LEVEL4_CACHE_SIZE, _SC_LEVEL4_CACHE_ASSOC, _SC_LEVEL4_CACHE_LINESIZE, _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, _SC_RAW_SOCKETS, _SC_V7_ILP32_OFF32, _SC_V7_ILP32_OFFBIG, _SC_V7_LP64_OFF64, _SC_V7_LPBIG_OFFBIG, _SC_SS_REPL_MAX, _SC_TRACE_EVENT_NAME_MAX, _SC_TRACE_NAME_MAX, _SC_TRACE_SYS_MAX, _SC_TRACE_USER_EVENT_MAX, _SC_XOPEN_STREAMS, _SC_THREAD_ROBUST_PRIO_INHERIT, _SC_THREAD_ROBUST_PRIO_PROTECT };
enum { _CS_PATH, _CS_V6_WIDTH_RESTRICTED_ENVS, _CS_GNU_LIBC_VERSION, _CS_GNU_LIBPTHREAD_VERSION, _CS_V5_WIDTH_RESTRICTED_ENVS, _CS_V7_WIDTH_RESTRICTED_ENVS, _CS_LFS_CFLAGS = 1000, _CS_LFS_LDFLAGS, _CS_LFS_LIBS, _CS_LFS_LINTFLAGS, _CS_LFS64_CFLAGS, _CS_LFS64_LDFLAGS, _CS_LFS64_LIBS, _CS_LFS64_LINTFLAGS, _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, _CS_XBS5_ILP32_OFF32_LDFLAGS, _CS_XBS5_ILP32_OFF32_LIBS, _CS_XBS5_ILP32_OFF32_LINTFLAGS, _CS_XBS5_ILP32_OFFBIG_CFLAGS, _CS_XBS5_ILP32_OFFBIG_LDFLAGS, _CS_XBS5_ILP32_OFFBIG_LIBS, _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, _CS_XBS5_LP64_OFF64_CFLAGS, _CS_XBS5_LP64_OFF64_LDFLAGS, _CS_XBS5_LP64_OFF64_LIBS, _CS_XBS5_LP64_OFF64_LINTFLAGS, _CS_XBS5_LPBIG_OFFBIG_CFLAGS, _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, _CS_XBS5_LPBIG_OFFBIG_LIBS, _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V6_ILP32_OFF32_CFLAGS, _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, _CS_POSIX_V6_ILP32_OFF32_LIBS, _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LIBS, _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V6_LP64_OFF64_CFLAGS, _CS_POSIX_V6_LP64_OFF64_LDFLAGS, _CS_POSIX_V6_LP64_OFF64_LIBS, _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V7_ILP32_OFF32_CFLAGS, _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, _CS_POSIX_V7_ILP32_OFF32_LIBS, _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LIBS, _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V7_LP64_OFF64_CFLAGS, _CS_POSIX_V7_LP64_OFF64_LDFLAGS, _CS_POSIX_V7_LP64_OFF64_LIBS, _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS };
extern long int pathconf(__const char *__path, int __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int fpathconf(int __fd, int __name) __attribute__ ((__nothrow__));
extern long int sysconf(int __name) __attribute__ ((__nothrow__));
extern size_t confstr(int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));
extern __pid_t getpid(void) __attribute__ ((__nothrow__));
extern __pid_t getppid(void) __attribute__ ((__nothrow__));
extern __pid_t getpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t __getpgid(__pid_t __pid) __attribute__ ((__nothrow__));
extern int setpgid(__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
extern int setpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t setsid(void) __attribute__ ((__nothrow__));
extern __uid_t getuid(void) __attribute__ ((__nothrow__));
extern __uid_t geteuid(void) __attribute__ ((__nothrow__));
extern __gid_t getgid(void) __attribute__ ((__nothrow__));
extern __gid_t getegid(void) __attribute__ ((__nothrow__));
extern int getgroups(int __size, __gid_t __list[]) __attribute__ ((__nothrow__));
extern int setuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setreuid(__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));
extern int seteuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setgid(__gid_t __gid) __attribute__ ((__nothrow__));
extern int setregid(__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));
extern int setegid(__gid_t __gid) __attribute__ ((__nothrow__));
extern __pid_t fork(void) __attribute__ ((__nothrow__));
extern __pid_t vfork(void) __attribute__ ((__nothrow__));
extern char *ttyname(int __fd) __attribute__ ((__nothrow__));
extern int ttyname_r(int __fd, char *__buf, size_t __buflen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int isatty(int __fd) __attribute__ ((__nothrow__));
extern int ttyslot(void) __attribute__ ((__nothrow__));
extern int link(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int symlink(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern ssize_t readlink(__const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 3)));
extern ssize_t readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int unlink(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int rmdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern __pid_t tcgetpgrp(int __fd) __attribute__ ((__nothrow__));
extern int tcsetpgrp(int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));
extern char *getlogin(void);
extern int getlogin_r(char *__name, size_t __name_len) __attribute__ ((__nonnull__(1)));
extern int setlogin(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__ ((__nothrow__));
extern int gethostname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostid(long int __id) __attribute__ ((__nothrow__));
extern int getdomainname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setdomainname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int vhangup(void) __attribute__ ((__nothrow__));
extern int revoke(__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int profil(unsigned short int *__sample_buffer, size_t __size, size_t __offset, unsigned int __scale) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int acct(__const char *__name) __attribute__ ((__nothrow__));
extern char *getusershell(void) __attribute__ ((__nothrow__));
extern void endusershell(void) __attribute__ ((__nothrow__));
extern void setusershell(void) __attribute__ ((__nothrow__));
extern int daemon(int __nochdir, int __noclose) __attribute__ ((__nothrow__));
extern int chroot(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *getpass(__const char *__prompt) __attribute__ ((__nonnull__(1)));
extern int fsync(int __fd);
extern long int gethostid(void);
extern void sync(void) __attribute__ ((__nothrow__));
extern int getpagesize(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int getdtablesize(void) __attribute__ ((__nothrow__));
extern int truncate(__const char *__file, __off_t __length) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int ftruncate(int __fd, __off_t __length) __attribute__ ((__nothrow__));
extern int brk(void *__addr) __attribute__ ((__nothrow__));
extern void *sbrk(intptr_t __delta) __attribute__ ((__nothrow__));
extern long int syscall(long int __sysno, ...) __attribute__ ((__nothrow__));
extern int fdatasync(int __fildes);
struct stat {
    __dev_t st_dev;
    unsigned short int __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __unused4;
    unsigned long int __unused5;
};
extern int stat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int fstat(int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int fstatat(int __fd, __const char *__restrict __file, struct stat *__restrict __buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int lstat(__const char *__restrict __file, struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int chmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int lchmod(__const char *__file, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchmod(int __fd, __mode_t __mode) __attribute__ ((__nothrow__));
extern int fchmodat(int __fd, __const char *__file, __mode_t __mode, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __mode_t umask(__mode_t __mask) __attribute__ ((__nothrow__));
extern int mkdir(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkdirat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mknod(__const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mknodat(int __fd, __const char *__path, __mode_t __mode, __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int mkfifo(__const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkfifoat(int __fd, __const char *__path, __mode_t __mode) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int utimensat(int __fd, __const char *__path, __const struct timespec __times[2], int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int futimens(int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int __xstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __lxstat(int __ver, __const char *__filename, struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int __fxstatat(int __ver, int __fildes, __const char *__filename, struct stat *__stat_buf, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern int __xmknod(int __ver, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int __xmknodat(int __ver, int __fd, __const char *__path, __mode_t __mode, __dev_t * __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 5)));
typedef __clock_t clock_t;
struct tms {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
};
extern clock_t times(struct tms *__buffer) __attribute__ ((__nothrow__));
typedef char Char;
typedef unsigned char Bool;
typedef unsigned char UChar;
typedef int Int32;
typedef unsigned int UInt32;
typedef short Int16;
typedef unsigned short UInt16;
typedef int IntNative;
Int32 verbosity;
Bool keepInputFiles, smallMode, deleteOutputOnInterrupt;
Bool forceOverwrite, testFailsExist, unzFailsExist, noisy;
Int32 numFileNames, numFilesProcessed, blockSize100k;
Int32 exitValue;
Int32 opMode;
Int32 srcMode;
Int32 longestFileName;
Char inName[1034];
Char outName[1034];
Char tmpName[1034];
Char *progName;
Char progNameReally[1034];
FILE *outputHandleJustInCase;
Int32 workFactor;
static void panic(const Char *) __attribute__ ((noreturn));
static void ioError(void) __attribute__ ((noreturn));
static void outOfMemory(void) __attribute__ ((noreturn));
static void configError(void) __attribute__ ((noreturn));
static void crcError(void) __attribute__ ((noreturn));
static void cleanUpAndFail(Int32) __attribute__ ((noreturn));
static void compressedStreamEOF(void) __attribute__ ((noreturn));
static void copyFileName(Char *, Char *);
static void *myMalloc(Int32);
static void applySavedFileAttrToOutputFile(IntNative fd);
typedef struct {
    UChar b[8];
} UInt64;
static void uInt64_from_UInt32s(UInt64 * n, UInt32 lo32, UInt32 hi32)
{
    n->b[7] = (UChar) ((hi32 >> 24) & 0xFF);
    n->b[6] = (UChar) ((hi32 >> 16) & 0xFF);
    n->b[5] = (UChar) ((hi32 >> 8) & 0xFF);
    n->b[4] = (UChar) (hi32 & 0xFF);
    n->b[3] = (UChar) ((lo32 >> 24) & 0xFF);
    n->b[2] = (UChar) ((lo32 >> 16) & 0xFF);
    n->b[1] = (UChar) ((lo32 >> 8) & 0xFF);
    n->b[0] = (UChar) (lo32 & 0xFF);
} static double uInt64_to_double(UInt64 * n)
{
    Int32 i;
    double base = 1.0;
    double sum = 0.0;
    for (i = 0; i < 8; i++) {
	sum += base * (double) (n->b[i]);
	base *= 256.0;
    } return sum;
}

static Bool uInt64_isZero(UInt64 * n)
{
    Int32 i;
    for (i = 0; i < 8; i++)
	if (n->b[i] != 0)
	    return 0;
    return 1;
}

static Int32 uInt64_qrm10(UInt64 * n)
{
    UInt32 rem, tmp;
    Int32 i;
    rem = 0;
    for (i = 7; i >= 0; i--) {
	tmp = rem * 256 + n->b[i];
	n->b[i] = tmp / 10;
	rem = tmp % 10;
    }
    return rem;
}

static void uInt64_toAscii(char *outbuf, UInt64 * n)
{
    Int32 i, q;
    UChar buf[32];
    Int32 nBuf = 0;
    UInt64 n_copy = *n;
    do {
	q = uInt64_qrm10(&n_copy);
	buf[nBuf] = q + '0';
	nBuf++;
    } while (!uInt64_isZero(&n_copy));
    outbuf[nBuf] = 0;
    for (i = 0; i < nBuf; i++)
	outbuf[i] = buf[nBuf - i - 1];
}

static Bool myfeof(FILE * f)
{
    Int32 c = fgetc(f);
    if (c == (-1))
	return ((Bool) 1);
    ungetc(c, f);
    return ((Bool) 0);
}

static void compressStream(FILE * stream, FILE * zStream)
{
    BZFILE *bzf = ((void *) 0);
    UChar ibuf[5000];
    Int32 nIbuf;
    UInt32 nbytes_in_lo32, nbytes_in_hi32;
    UInt32 nbytes_out_lo32, nbytes_out_hi32;
    Int32 bzerr, bzerr_dummy, ret;;;
    if (ferror(stream))
	goto errhandler_io;
    if (ferror(zStream))
	goto errhandler_io;
    bzf = BZ2_bzWriteOpen(&bzerr, zStream, blockSize100k, verbosity, workFactor);
    if (bzerr != 0)
	goto errhandler;
    if (verbosity >= 2)
	fprintf(stderr, "\n");
    while (((Bool) 1)) {
	if (myfeof(stream))
	    break;
	nIbuf = fread(ibuf, sizeof(UChar), 5000, stream);
	if (ferror(stream))
	    goto errhandler_io;
	if (nIbuf > 0)
	    BZ2_bzWrite(&bzerr, bzf, (void *) ibuf, nIbuf);
	if (bzerr != 0)
	    goto errhandler;
    }
    BZ2_bzWriteClose64(&bzerr, bzf, 0, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
    if (bzerr != 0)
	goto errhandler;
    if (ferror(zStream))
	goto errhandler_io;
    ret = fflush(zStream);
    if (ret == (-1))
	goto errhandler_io;
    if (zStream != stdout) {
	Int32 fd = fileno(zStream);
	if (fd < 0)
	    goto errhandler_io;
	applySavedFileAttrToOutputFile(fd);
	ret = fclose(zStream);
	outputHandleJustInCase = ((void *) 0);
	if (ret == (-1))
	    goto errhandler_io;
    }
    outputHandleJustInCase = ((void *) 0);
    if (ferror(stream))
	goto errhandler_io;
    ret = fclose(stream);
    if (ret == (-1))
	goto errhandler_io;
    if (verbosity >= 1) {
	if (nbytes_in_lo32 == 0 && nbytes_in_hi32 == 0) {
	    fprintf(stderr, " no data compressed.\n");
	} else {
	    Char buf_nin[32], buf_nout[32];
	    UInt64 nbytes_in, nbytes_out;
	    double nbytes_in_d, nbytes_out_d;
	    uInt64_from_UInt32s(&nbytes_in, nbytes_in_lo32, nbytes_in_hi32);
	    uInt64_from_UInt32s(&nbytes_out, nbytes_out_lo32, nbytes_out_hi32);
	    nbytes_in_d = uInt64_to_double(&nbytes_in);
	    nbytes_out_d = uInt64_to_double(&nbytes_out);
	    uInt64_toAscii(buf_nin, &nbytes_in);
	    uInt64_toAscii(buf_nout, &nbytes_out);
	    fprintf(stderr, "%6.3f:1, %6.3f bits/byte, " "%5.2f%% saved, %s in, %s out.\n", nbytes_in_d / nbytes_out_d, (8.0 * nbytes_out_d) / nbytes_in_d, 100.0 * (1.0 - nbytes_out_d / nbytes_in_d), buf_nin, buf_nout);
    }}
    return;
  errhandler:BZ2_bzWriteClose64(&bzerr_dummy, bzf, 1, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
    switch (bzerr) {
    case (-9):
	configError();
	break;
    case (-3):
	outOfMemory();
	break;
    case (-6):
      errhandler_io:ioError();
	break;
    default:
	panic("compress:unexpected error");
    }
    panic("compress:end");
}

static Bool uncompressStream(FILE * zStream, FILE * stream)
{
    BZFILE *bzf = ((void *) 0);
    Int32 bzerr, bzerr_dummy, ret, nread, streamNo, i;
    UChar obuf[5000];
    UChar unused[5000];
    Int32 nUnused;
    void *unusedTmpV;
    UChar *unusedTmp;
    nUnused = 0;
    streamNo = 0;;;
    if (ferror(stream))
	goto errhandler_io;
    if (ferror(zStream))
	goto errhandler_io;
    while (((Bool) 1)) {
	bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int) smallMode, unused, nUnused);
	if (bzf == ((void *) 0) || bzerr != 0)
	    goto errhandler;
	streamNo++;
	while (bzerr == 0) {
	    nread = BZ2_bzRead(&bzerr, bzf, obuf, 5000);
	    if (bzerr == (-5))
		goto trycat;
	    if ((bzerr == 0 || bzerr == 4) && nread > 0)
		fwrite(obuf, sizeof(UChar), nread, stream);
	    if (ferror(stream))
		goto errhandler_io;
	}
	if (bzerr != 4)
	    goto errhandler;
	BZ2_bzReadGetUnused(&bzerr, bzf, &unusedTmpV, &nUnused);
	if (bzerr != 0)
	    panic("decompress:bzReadGetUnused");
	unusedTmp = (UChar *) unusedTmpV;
	for (i = 0; i < nUnused; i++)
	    unused[i] = unusedTmp[i];
	BZ2_bzReadClose(&bzerr, bzf);
	if (bzerr != 0)
	    panic("decompress:bzReadGetUnused");
	if (nUnused == 0 && myfeof(zStream))
	    break;
    }
  closeok:if (ferror(zStream))
	goto errhandler_io;
    if (stream != stdout) {
	Int32 fd = fileno(stream);
	if (fd < 0)
	    goto errhandler_io;
	applySavedFileAttrToOutputFile(fd);
    }
    ret = fclose(zStream);
    if (ret == (-1))
	goto errhandler_io;
    if (ferror(stream))
	goto errhandler_io;
    ret = fflush(stream);
    if (ret != 0)
	goto errhandler_io;
    if (stream != stdout) {
	ret = fclose(stream);
	outputHandleJustInCase = ((void *) 0);
	if (ret == (-1))
	    goto errhandler_io;
    }
    outputHandleJustInCase = ((void *) 0);
    if (verbosity >= 2)
	fprintf(stderr, "\n    ");
    return ((Bool) 1);
  trycat:if (forceOverwrite) {
	rewind(zStream);
	while (((Bool) 1)) {
	    if (myfeof(zStream))
		break;
	    nread = fread(obuf, sizeof(UChar), 5000, zStream);
	    if (ferror(zStream))
		goto errhandler_io;
	    if (nread > 0)
		fwrite(obuf, sizeof(UChar), nread, stream);
	    if (ferror(stream))
		goto errhandler_io;
	}
	goto closeok;
    }
  errhandler:BZ2_bzReadClose(&bzerr_dummy, bzf);
    switch (bzerr) {
    case (-9):
	configError();
	break;
    case (-6):
      errhandler_io:ioError();
	break;
    case (-4):
	crcError();
    case (-3):
	outOfMemory();
    case (-7):
	compressedStreamEOF();
    case (-5):
	if (zStream != stdin)
	    fclose(zStream);
	if (stream != stdout)
	    fclose(stream);
	if (streamNo == 1) {
	    return ((Bool) 0);
	} else {
	    if (noisy)
		fprintf(stderr, "\n%s: %s: trailing garbage after EOF ignored\n", progName, inName);
	    return ((Bool) 1);
	}
    default:
	panic("decompress:unexpected error");
    }
    panic("decompress:end");
    return ((Bool) 1);
}

static Bool testStream(FILE * zStream)
{
    BZFILE *bzf = ((void *) 0);
    Int32 bzerr, bzerr_dummy, ret, nread, streamNo, i;
    UChar obuf[5000];
    UChar unused[5000];
    Int32 nUnused;
    void *unusedTmpV;
    UChar *unusedTmp;
    nUnused = 0;
    streamNo = 0;;
    if (ferror(zStream))
	goto errhandler_io;
    while (((Bool) 1)) {
	bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int) smallMode, unused, nUnused);
	if (bzf == ((void *) 0) || bzerr != 0)
	    goto errhandler;
	streamNo++;
	while (bzerr == 0) {
	    nread = BZ2_bzRead(&bzerr, bzf, obuf, 5000);
	    if (bzerr == (-5))
		goto errhandler;
	}
	if (bzerr != 4)
	    goto errhandler;
	BZ2_bzReadGetUnused(&bzerr, bzf, &unusedTmpV, &nUnused);
	if (bzerr != 0)
	    panic("test:bzReadGetUnused");
	unusedTmp = (UChar *) unusedTmpV;
	for (i = 0; i < nUnused; i++)
	    unused[i] = unusedTmp[i];
	BZ2_bzReadClose(&bzerr, bzf);
	if (bzerr != 0)
	    panic("test:bzReadGetUnused");
	if (nUnused == 0 && myfeof(zStream))
	    break;
    }
    if (ferror(zStream))
	goto errhandler_io;
    ret = fclose(zStream);
    if (ret == (-1))
	goto errhandler_io;
    if (verbosity >= 2)
	fprintf(stderr, "\n    ");
    return ((Bool) 1);
  errhandler:BZ2_bzReadClose(&bzerr_dummy, bzf);
    if (verbosity == 0)
	fprintf(stderr, "%s: %s: ", progName, inName);
    switch (bzerr) {
    case (-9):
	configError();
	break;
    case (-6):
      errhandler_io:ioError();
	break;
    case (-4):
	fprintf(stderr, "data integrity (CRC) error in data\n");
	return ((Bool) 0);
    case (-3):
	outOfMemory();
    case (-7):
	fprintf(stderr, "file ends unexpectedly\n");
	return ((Bool) 0);
    case (-5):
	if (zStream != stdin)
	    fclose(zStream);
	if (streamNo == 1) {
	    fprintf(stderr, "bad magic number (file not created by bzip2)\n");
	    return ((Bool) 0);
	} else {
	    if (noisy)
		fprintf(stderr, "trailing garbage after EOF ignored\n");
	    return ((Bool) 1);
	}
    default:
	panic("test:unexpected error");
    }
    panic("test:end");
    return ((Bool) 1);
}

static void setExit(Int32 v)
{
    if (v > exitValue)
	exitValue = v;
}

static void cadvise(void)
{
    if (noisy)
	fprintf(stderr, "\nIt is possible that the compressed file(s) have become corrupted.\n" "You can use the -tvv option to test integrity of such files.\n\n" "You can use the `bzip2recover' program to attempt to recover\n" "data from undamaged sections of corrupted files.\n\n");
}

static void showFileNames(void)
{
    if (noisy)
	fprintf(stderr, "\tInput file = %s, output file = %s\n", inName, outName);
}

static void cleanUpAndFail(Int32 ec)
{
    IntNative retVal;
    struct stat statBuf;
    if (srcMode == 3 && opMode != 3 && deleteOutputOnInterrupt) {
	retVal = stat(inName, &statBuf);
	if (retVal == 0) {
	    if (noisy)
		fprintf(stderr, "%s: Deleting output file %s, if it exists.\n", progName, outName);
	    if (outputHandleJustInCase != ((void *) 0))
		fclose(outputHandleJustInCase);
	    retVal = remove(outName);
	    if (retVal != 0)
		fprintf(stderr, "%s: WARNING: deletion of output file " "(apparently) failed.\n", progName);
	} else {
	    fprintf(stderr, "%s: WARNING: deletion of output file suppressed\n", progName);
	    fprintf(stderr, "%s:    since input file no longer exists.  Output file\n", progName);
	    fprintf(stderr, "%s:    `%s' may be incomplete.\n", progName, outName);
	    fprintf(stderr, "%s:    I suggest doing an integrity test (bzip2 -tv)" " of it.\n", progName);
	}
    }
    if (noisy && numFileNames > 0 && numFilesProcessed < numFileNames) {
	fprintf(stderr, "%s: WARNING: some files have not been processed:\n" "%s:    %d specified on command line, %d not processed yet.\n\n", progName, progName, numFileNames, numFileNames - numFilesProcessed);
    }
    setExit(ec);
    exit(exitValue);
}

static void panic(const Char * s)
{
    fprintf(stderr, "\n%s: PANIC -- internal consistency error:\n" "\t%s\n" "\tThis is a BUG.  Please report it to me at:\n" "\tjseward@bzip.org\n", progName, s);
    showFileNames();
    cleanUpAndFail(3);
} static void crcError(void)
{
    fprintf(stderr, "\n%s: Data integrity error when decompressing.\n", progName);
    showFileNames();
    cadvise();
    cleanUpAndFail(2);
} static void compressedStreamEOF(void)
{
    if (noisy) {
	fprintf(stderr, "\n%s: Compressed file ends unexpectedly;\n\t" "perhaps it is corrupted?  *Possible* reason follows.\n", progName);
	perror(progName);
	showFileNames();
	cadvise();
    }
    cleanUpAndFail(2);
}

static void ioError(void)
{
    fprintf(stderr, "\n%s: I/O or other error, bailing out.  " "Possible reason follows.\n", progName);
    perror(progName);
    showFileNames();
    cleanUpAndFail(1);
} static void mySignalCatcher(IntNative n)
{
    fprintf(stderr, "\n%s: Control-C or similar caught, quitting.\n", progName);
    cleanUpAndFail(1);
} static void mySIGSEGVorSIGBUScatcher(IntNative n)
{
    if (opMode == 1)
	fprintf(stderr, "\n%s: Caught a SIGSEGV or SIGBUS whilst compressing.\n" "\n" "   Possible causes are (most likely first):\n" "   (1) This computer has unreliable memory or cache hardware\n" "       (a surprisingly common problem; try a different machine.)\n" "   (2) A bug in the compiler used to create this executable\n" "       (unlikely, if you didn't compile bzip2 yourself.)\n" "   (3) A real bug in bzip2 -- I hope this should never be the case.\n" "   The user's manual, Section 4.3, has more info on (1) and (2).\n" "   \n" "   If you suspect this is a bug in bzip2, or are unsure about (1)\n" "   or (2), feel free to report it to me at: jseward@bzip.org.\n" "   Section 4.3 of the user's manual describes the info a useful\n" "   bug report should have.  If the manual is available on your\n" "   system, please try and read it before mailing me.  If you don't\n" "   have the manual or can't be bothered to read it, mail me anyway.\n" "\n", progName);
    else
	fprintf(stderr, "\n%s: Caught a SIGSEGV or SIGBUS whilst decompressing.\n" "\n" "   Possible causes are (most likely first):\n" "   (1) The compressed data is corrupted, and bzip2's usual checks\n" "       failed to detect this.  Try bzip2 -tvv my_file.bz2.\n" "   (2) This computer has unreliable memory or cache hardware\n" "       (a surprisingly common problem; try a different machine.)\n" "   (3) A bug in the compiler used to create this executable\n" "       (unlikely, if you didn't compile bzip2 yourself.)\n" "   (4) A real bug in bzip2 -- I hope this should never be the case.\n" "   The user's manual, Section 4.3, has more info on (2) and (3).\n" "   \n" "   If you suspect this is a bug in bzip2, or are unsure about (2)\n" "   or (3), feel free to report it to me at: jseward@bzip.org.\n" "   Section 4.3 of the user's manual describes the info a useful\n" "   bug report should have.  If the manual is available on your\n" "   system, please try and read it before mailing me.  If you don't\n" "   have the manual or can't be bothered to read it, mail me anyway.\n" "\n", progName);
    showFileNames();
    if (opMode == 1)
	cleanUpAndFail(3);
    else {
	cadvise();
	cleanUpAndFail(2);
    }
}

static void outOfMemory(void)
{
    fprintf(stderr, "\n%s: couldn't allocate enough memory\n", progName);
    showFileNames();
    cleanUpAndFail(1);
} static void configError(void)
{
    fprintf(stderr, "bzip2: I'm not configured correctly for this platform!\n" "\tI require Int32, Int16 and Char to have sizes\n" "\tof 4, 2 and 1 bytes to run properly, and they don't.\n" "\tProbably you can fix this by defining them correctly,\n" "\tand recompiling.  Bye!\n");
    setExit(3);
    exit(exitValue);
} static void pad(Char * s)
{
    Int32 i;
    if ((Int32) strlen(s) >= longestFileName)
	return;
    for (i = 1; i <= longestFileName - (Int32) strlen(s); i++)
	fprintf(stderr, " ");
}

static void copyFileName(Char * to, Char * from)
{
    if (strlen(from) > 1034 - 10) {
	fprintf(stderr, "bzip2: file name\n`%s'\n" "is suspiciously (more than %d chars) long.\n" "Try using a reasonable file name instead.  Sorry! :-)\n", from, 1034 - 10);
	setExit(1);
	exit(exitValue);
    }
    strncpy(to, from, 1034 - 10);
    to[1034 - 10] = '\0';
}

static Bool fileExists(Char * name)
{
    FILE *tmp = fopen(name, "rb");
    Bool exists = (tmp != ((void *) 0));
    if (tmp != ((void *) 0))
	fclose(tmp);
    return exists;
}

static FILE *fopen_output_safely(Char * name, const char *mode)
{
    FILE *fp;
    IntNative fh;
    fh = open(name, 01 | 0100 | 0200, 0200 | 0400);
    if (fh == -1)
	return ((void *) 0);
    fp = fdopen(fh, mode);
    if (fp == ((void *) 0))
	close(fh);
    return fp;
}

static Bool notAStandardFile(Char * name)
{
    IntNative i;
    struct stat statBuf;
    i = lstat(name, &statBuf);
    if (i != 0)
	return ((Bool) 1);
    if (((((statBuf.st_mode)) & 0170000) == (0100000)))
	return ((Bool) 0);
    return ((Bool) 1);
}

static Int32 countHardLinks(Char * name)
{
    IntNative i;
    struct stat statBuf;
    i = lstat(name, &statBuf);
    if (i != 0)
	return 0;
    return (statBuf.st_nlink - 1);
}

static struct stat fileMetaInfo;
static void saveInputFileMetaInfo(Char * srcName)
{
    IntNative retVal;
    retVal = stat(srcName, &fileMetaInfo); {
	if ((retVal) != 0)
	    ioError();
    };
}

static void applySavedTimeInfoToOutputFile(Char * dstName)
{
    IntNative retVal;
    struct utimbuf uTimBuf;
    uTimBuf.actime = fileMetaInfo.st_atim.tv_sec;
    uTimBuf.modtime = fileMetaInfo.st_mtim.tv_sec;
    retVal = utime(dstName, &uTimBuf); {
	if ((retVal) != 0)
	    ioError();
    };
}

static void applySavedFileAttrToOutputFile(IntNative fd)
{
    IntNative retVal;
    retVal = fchmod(fd, fileMetaInfo.st_mode); {
	if ((retVal) != 0)
	    ioError();
    };
    (void) fchown(fd, fileMetaInfo.st_uid, fileMetaInfo.st_gid);
} static Bool containsDubiousChars(Char * name)
{
    return ((Bool) 0);
}
const Char *zSuffix[4] = { ".bz2", ".bz", ".tbz2", ".tbz" };
const Char *unzSuffix[4] = { "", "", ".tar", ".tar" };

static Bool hasSuffix(Char * s, const Char * suffix)
{
    Int32 ns = strlen(s);
    Int32 nx = strlen(suffix);
    if (ns < nx)
	return ((Bool) 0);
    if (strcmp(s + ns - nx, suffix) == 0)
	return ((Bool) 1);
    return ((Bool) 0);
}

static Bool mapSuffix(Char * name, const Char * oldSuffix, const Char * newSuffix)
{
    if (!hasSuffix(name, oldSuffix))
	return ((Bool) 0);
    name[strlen(name) - strlen(oldSuffix)] = 0;
    strcat(name, newSuffix);
    return ((Bool) 1);
}

static void compress(Char * name)
{
    FILE *inStr;
    FILE *outStr;
    Int32 n, i;
    struct stat statBuf;
    deleteOutputOnInterrupt = ((Bool) 0);
    if (name == ((void *) 0) && srcMode != 1)
	panic("compress: bad modes\n");
    switch (srcMode) {
    case 1:
	copyFileName(inName, (Char *) "(stdin)");
	copyFileName(outName, (Char *) "(stdout)");
	break;
    case 3:
	copyFileName(inName, name);
	copyFileName(outName, name);
	strcat(outName, ".bz2");
	break;
    case 2:
	copyFileName(inName, name);
	copyFileName(outName, (Char *) "(stdout)");
	break;
    }
    if (srcMode != 1 && containsDubiousChars(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: There are no files matching `%s'.\n", progName, inName);
	setExit(1);
	return;
    }
    if (srcMode != 1 && !fileExists(inName)) {
	fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	setExit(1);
	return;
    }
    for (i = 0; i < 4; i++) {
	if (hasSuffix(inName, zSuffix[i])) {
	    if (noisy)
		fprintf(stderr, "%s: Input file %s already has %s suffix.\n", progName, inName, zSuffix[i]);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 || srcMode == 2) {
	stat(inName, &statBuf);
	if (((((statBuf.st_mode)) & 0170000) == (0040000))) {
	    fprintf(stderr, "%s: Input file %s is a directory.\n", progName, inName);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 && !forceOverwrite && notAStandardFile(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: Input file %s is not a normal file.\n", progName, inName);
	setExit(1);
	return;
    }
    if (srcMode == 3 && fileExists(outName)) {
	if (forceOverwrite) {
	    remove(outName);
	} else {
	    fprintf(stderr, "%s: Output file %s already exists.\n", progName, outName);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 && !forceOverwrite && (n = countHardLinks(inName)) > 0) {
	fprintf(stderr, "%s: Input file %s has %d other link%s.\n", progName, inName, n, n > 1 ? "s" : "");
	setExit(1);
	return;
    }
    if (srcMode == 3) {
	saveInputFileMetaInfo(inName);
    }
    switch (srcMode) {
    case 1:
	inStr = stdin;
	outStr = stdout;
	if (isatty(fileno(stdout))) {
	    fprintf(stderr, "%s: I won't write compressed data to a terminal.\n", progName);
	    fprintf(stderr, "%s: For help, type: `%s --help'.\n", progName, progName);
	    setExit(1);
	    return;
	};
	break;
    case 2:
	inStr = fopen(inName, "rb");
	outStr = stdout;
	if (isatty(fileno(stdout))) {
	    fprintf(stderr, "%s: I won't write compressed data to a terminal.\n", progName);
	    fprintf(stderr, "%s: For help, type: `%s --help'.\n", progName, progName);
	    if (inStr != ((void *) 0))
		fclose(inStr);
	    setExit(1);
	    return;
	};
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	    setExit(1);
	    return;
	};
	break;
    case 3:
	inStr = fopen(inName, "rb");
	outStr = fopen_output_safely(outName, "wb");
	if (outStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't create output file %s: %s.\n", progName, outName, strerror((*__errno_location())));
	    if (inStr != ((void *) 0))
		fclose(inStr);
	    setExit(1);
	    return;
	}
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	    if (outStr != ((void *) 0))
		fclose(outStr);
	    setExit(1);
	    return;
	};
	break;
    default:
	panic("compress: bad srcMode");
	break;
    }
    if (verbosity >= 1) {
	fprintf(stderr, "  %s: ", inName);
	pad(inName);
	fflush(stderr);
    }
    outputHandleJustInCase = outStr;
    deleteOutputOnInterrupt = ((Bool) 1);
    compressStream(inStr, outStr);
    outputHandleJustInCase = ((void *) 0);
    if (srcMode == 3) {
	applySavedTimeInfoToOutputFile(outName);
	deleteOutputOnInterrupt = ((Bool) 0);
	if (!keepInputFiles) {
	    IntNative retVal = remove(inName); {
		if ((retVal) != 0)
		    ioError();
	    };
	}
    }
    deleteOutputOnInterrupt = ((Bool) 0);
}

static void uncompress(Char * name)
{
    FILE *inStr;
    FILE *outStr;
    Int32 n, i;
    Bool magicNumberOK;
    Bool cantGuess;
    struct stat statBuf;
    deleteOutputOnInterrupt = ((Bool) 0);
    if (name == ((void *) 0) && srcMode != 1)
	panic("uncompress: bad modes\n");
    cantGuess = ((Bool) 0);
    switch (srcMode) {
    case 1:
	copyFileName(inName, (Char *) "(stdin)");
	copyFileName(outName, (Char *) "(stdout)");
	break;
    case 3:
	copyFileName(inName, name);
	copyFileName(outName, name);
	for (i = 0; i < 4; i++)
	    if (mapSuffix(outName, zSuffix[i], unzSuffix[i]))
		goto zzz;
	cantGuess = ((Bool) 1);
	strcat(outName, ".out");
	break;
    case 2:
	copyFileName(inName, name);
	copyFileName(outName, (Char *) "(stdout)");
	break;
    }
  zzz:if (srcMode != 1 && containsDubiousChars(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: There are no files matching `%s'.\n", progName, inName);
	setExit(1);
	return;
    }
    if (srcMode != 1 && !fileExists(inName)) {
	fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	setExit(1);
	return;
    }
    if (srcMode == 3 || srcMode == 2) {
	stat(inName, &statBuf);
	if (((((statBuf.st_mode)) & 0170000) == (0040000))) {
	    fprintf(stderr, "%s: Input file %s is a directory.\n", progName, inName);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 && !forceOverwrite && notAStandardFile(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: Input file %s is not a normal file.\n", progName, inName);
	setExit(1);
	return;
    }
    if (cantGuess) {
	if (noisy)
	    fprintf(stderr, "%s: Can't guess original name for %s -- using %s\n", progName, inName, outName);
    }
    if (srcMode == 3 && fileExists(outName)) {
	if (forceOverwrite) {
	    remove(outName);
	} else {
	    fprintf(stderr, "%s: Output file %s already exists.\n", progName, outName);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 && !forceOverwrite && (n = countHardLinks(inName)) > 0) {
	fprintf(stderr, "%s: Input file %s has %d other link%s.\n", progName, inName, n, n > 1 ? "s" : "");
	setExit(1);
	return;
    }
    if (srcMode == 3) {
	saveInputFileMetaInfo(inName);
    }
    switch (srcMode) {
    case 1:
	inStr = stdin;
	outStr = stdout;
	if (isatty(fileno(stdin))) {
	    fprintf(stderr, "%s: I won't read compressed data from a terminal.\n", progName);
	    fprintf(stderr, "%s: For help, type: `%s --help'.\n", progName, progName);
	    setExit(1);
	    return;
	};
	break;
    case 2:
	inStr = fopen(inName, "rb");
	outStr = stdout;
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s:%s.\n", progName, inName, strerror((*__errno_location())));
	    if (inStr != ((void *) 0))
		fclose(inStr);
	    setExit(1);
	    return;
	};
	break;
    case 3:
	inStr = fopen(inName, "rb");
	outStr = fopen_output_safely(outName, "wb");
	if (outStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't create output file %s: %s.\n", progName, outName, strerror((*__errno_location())));
	    if (inStr != ((void *) 0))
		fclose(inStr);
	    setExit(1);
	    return;
	}
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	    if (outStr != ((void *) 0))
		fclose(outStr);
	    setExit(1);
	    return;
	};
	break;
    default:
	panic("uncompress: bad srcMode");
	break;
    }
    if (verbosity >= 1) {
	fprintf(stderr, "  %s: ", inName);
	pad(inName);
	fflush(stderr);
    }
    outputHandleJustInCase = outStr;
    deleteOutputOnInterrupt = ((Bool) 1);
    magicNumberOK = uncompressStream(inStr, outStr);
    outputHandleJustInCase = ((void *) 0);
    if (magicNumberOK) {
	if (srcMode == 3) {
	    applySavedTimeInfoToOutputFile(outName);
	    deleteOutputOnInterrupt = ((Bool) 0);
	    if (!keepInputFiles) {
		IntNative retVal = remove(inName); {
		    if ((retVal) != 0)
			ioError();
		};
	    }
	}
    } else {
	unzFailsExist = ((Bool) 1);
	deleteOutputOnInterrupt = ((Bool) 0);
	if (srcMode == 3) {
	    IntNative retVal = remove(outName); {
		if ((retVal) != 0)
		    ioError();
	    };
	}
    }
    deleteOutputOnInterrupt = ((Bool) 0);
    if (magicNumberOK) {
	if (verbosity >= 1)
	    fprintf(stderr, "done\n");
    } else {
	setExit(2);
	if (verbosity >= 1)
	    fprintf(stderr, "not a bzip2 file.\n");
	else
	    fprintf(stderr, "%s: %s is not a bzip2 file.\n", progName, inName);
    }
}

static void testf(Char * name)
{
    FILE *inStr;
    Bool allOK;
    struct stat statBuf;
    deleteOutputOnInterrupt = ((Bool) 0);
    if (name == ((void *) 0) && srcMode != 1)
	panic("testf: bad modes\n");
    copyFileName(outName, (Char *) "(none)");
    switch (srcMode) {
    case 1:
	copyFileName(inName, (Char *) "(stdin)");
	break;
    case 3:
	copyFileName(inName, name);
	break;
    case 2:
	copyFileName(inName, name);
	break;
    }
    if (srcMode != 1 && containsDubiousChars(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: There are no files matching `%s'.\n", progName, inName);
	setExit(1);
	return;
    }
    if (srcMode != 1 && !fileExists(inName)) {
	fprintf(stderr, "%s: Can't open input %s: %s.\n", progName, inName, strerror((*__errno_location())));
	setExit(1);
	return;
    }
    if (srcMode != 1) {
	stat(inName, &statBuf);
	if (((((statBuf.st_mode)) & 0170000) == (0040000))) {
	    fprintf(stderr, "%s: Input file %s is a directory.\n", progName, inName);
	    setExit(1);
	    return;
	}
    }
    switch (srcMode) {
    case 1:
	if (isatty(fileno(stdin))) {
	    fprintf(stderr, "%s: I won't read compressed data from a terminal.\n", progName);
	    fprintf(stderr, "%s: For help, type: `%s --help'.\n", progName, progName);
	    setExit(1);
	    return;
	};
	inStr = stdin;
	break;
    case 2:
    case 3:
	inStr = fopen(inName, "rb");
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s:%s.\n", progName, inName, strerror((*__errno_location())));
	    setExit(1);
	    return;
	};
	break;
    default:
	panic("testf: bad srcMode");
	break;
    }
    if (verbosity >= 1) {
	fprintf(stderr, "  %s: ", inName);
	pad(inName);
	fflush(stderr);
    }
    outputHandleJustInCase = ((void *) 0);
    allOK = testStream(inStr);
    if (allOK && verbosity >= 1)
	fprintf(stderr, "ok\n");
    if (!allOK)
	testFailsExist = ((Bool) 1);
}

static void license(void)
{
    fprintf(stderr, "bzip2, a block-sorting file compressor.  " "Version %s.\n" "   \n" "   Copyright (C) 1996-2006 by Julian Seward.\n" "   \n" "   This program is free software; you can redistribute it and/or modify\n" "   it under the terms set out in the LICENSE file, which is included\n" "   in the bzip2-1.0.4 source distribution.\n" "   \n" "   This program is distributed in the hope that it will be useful,\n" "   but WITHOUT ANY WARRANTY; without even the implied warranty of\n" "   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n" "   LICENSE file for more details.\n" "   \n", BZ2_bzlibVersion());
} static void usage(Char * fullProgName)
{
    fprintf(stderr, "bzip2, a block-sorting file compressor.  " "Version %s.\n" "\n   usage: %s [flags and input files in any order]\n" "\n" "   -h --help           print this message\n" "   -d --decompress     force decompression\n" "   -z --compress       force compression\n" "   -k --keep           keep (don't delete) input files\n" "   -f --force          overwrite existing output files\n" "   -t --test           test compressed file integrity\n" "   -c --stdout         output to standard out\n" "   -q --quiet          suppress noncritical error messages\n" "   -v --verbose        be verbose (a 2nd -v gives more)\n" "   -L --license        display software version & license\n" "   -V --version        display software version & license\n" "   -s --small          use less memory (at most 2500k)\n" "   -1 .. -9            set block size to 100k .. 900k\n" "   --fast              alias for -1\n" "   --best              alias for -9\n" "\n" "   If invoked as `bzip2', default action is to compress.\n" "              as `bunzip2',  default action is to decompress.\n" "              as `bzcat', default action is to decompress to stdout.\n" "\n" "   If no file names are given, bzip2 compresses or decompresses\n" "   from standard input to standard output.  You can combine\n" "   short flags, so `-v -4' means the same as -v4 or -4v, &c.\n" "\n", BZ2_bzlibVersion(), fullProgName);
} static void redundant(Char * flag)
{
    fprintf(stderr, "%s: %s is redundant in versions 0.9.5 and above\n", progName, flag);
} typedef struct zzzz {

    Char *name;
    struct zzzz *link;
} Cell;
static void *myMalloc(Int32 n)
{
    void *p;
    p = malloc((size_t) n);
    if (p == ((void *) 0))
	outOfMemory();
    return p;
}

static Cell *mkCell(void)
{
    Cell *c;
    c = (Cell *) myMalloc(sizeof(Cell));
    c->name = ((void *) 0);
    c->link = ((void *) 0);
    return c;
}

static Cell *snocString(Cell * root, Char * name)
{
    if (root == ((void *) 0)) {
	Cell *tmp = mkCell();
	tmp->name = (Char *) myMalloc(5 + strlen(name));
	strcpy(tmp->name, name);
	return tmp;
    } else {
	Cell *tmp = root;
	while (tmp->link != ((void *) 0))
	    tmp = tmp->link;
	tmp->link = snocString(tmp->link, name);
	return root;
    }
}

static void addFlagsFromEnvVar(Cell ** argList, Char * varName)
{
    Int32 i, j, k;
    Char *envbase, *p;
    envbase = getenv(varName);
    if (envbase != ((void *) 0)) {
	p = envbase;
	i = 0;
	while (((Bool) 1)) {
	    if (p[i] == 0)
		break;
	    p += i;
	    i = 0;
	    while (((*__ctype_b_loc())[(int) (((Int32) (p[0])))] & (unsigned short int) _ISspace))
		p++;
	    while (p[i] != 0 && !((*__ctype_b_loc())[(int) (((Int32) (p[i])))] & (unsigned short int) _ISspace))
		i++;
	    if (i > 0) {
		k = i;
		if (k > 1034 - 10)
		    k = 1034 - 10;
		for (j = 0; j < k; j++)
		    tmpName[j] = p[j];
		tmpName[k] = 0;
		*argList = snocString((*argList), (tmpName));
	    }
	}
    }
}

IntNative main1(IntNative argc, Char * argv[])
{
    Int32 i, j;
    Char *tmp;
    Cell *argList;
    Cell *aa;
    Bool decode;
    if (sizeof(Int32) != 4 || sizeof(UInt32) != 4 || sizeof(Int16) != 2 || sizeof(UInt16) != 2 || sizeof(Char) != 1 || sizeof(UChar) != 1)
	configError();
    outputHandleJustInCase = ((void *) 0);
    smallMode = ((Bool) 0);
    keepInputFiles = ((Bool) 0);
    forceOverwrite = ((Bool) 0);
    noisy = ((Bool) 1);
    verbosity = 0;
    blockSize100k = 9;
    testFailsExist = ((Bool) 0);
    unzFailsExist = ((Bool) 0);
    numFileNames = 0;
    numFilesProcessed = 0;
    workFactor = 30;
    deleteOutputOnInterrupt = ((Bool) 0);
    exitValue = 0;
    i = j = 0;
    signal(11, mySIGSEGVorSIGBUScatcher);
    signal(7, mySIGSEGVorSIGBUScatcher);
    copyFileName(inName, (Char *) "(none)");
    copyFileName(outName, (Char *) "(none)");
    copyFileName(progNameReally, argv[0]);
    progName = &progNameReally[0];
    for (tmp = &progNameReally[0]; *tmp != '\0'; tmp++)
	if (*tmp == '/')
	    progName = tmp + 1;
    argList = ((void *) 0);
    addFlagsFromEnvVar(&argList, (Char *) "BZIP2");
    addFlagsFromEnvVar(&argList, (Char *) "BZIP");
    for (i = 1; i <= argc - 1; i++)
	argList = snocString((argList), (argv[i]));
    longestFileName = 7;
    numFileNames = 0;
    decode = ((Bool) 1);
    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
	if ((strcmp(aa->name, ("--")) == 0)) {
	    decode = ((Bool) 0);
	    continue;
	}
	if (aa->name[0] == '-' && decode)
	    continue;
	numFileNames++;
	if (longestFileName < (Int32) strlen(aa->name))
	    longestFileName = (Int32) strlen(aa->name);
    }
    if (numFileNames == 0)
	srcMode = 1;
    else
	srcMode = 3;
    opMode = 1;
    if ((strstr(progName, "unzip") != 0) || (strstr(progName, "UNZIP") != 0))
	opMode = 2;
    if ((strstr(progName, "z2cat") != 0) || (strstr(progName, "Z2CAT") != 0) || (strstr(progName, "zcat") != 0) || (strstr(progName, "ZCAT") != 0)) {
	opMode = 2;
	srcMode = (numFileNames == 0) ? 1 : 2;
    }
    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
	if ((strcmp(aa->name, ("--")) == 0))
	    break;
	if (aa->name[0] == '-' && aa->name[1] != '-') {
	    for (j = 1; aa->name[j] != '\0'; j++) {
		switch (aa->name[j]) {
		case 'c':
		    srcMode = 2;
		    break;
		case 'd':
		    opMode = 2;
		    break;
		case 'z':
		    opMode = 1;
		    break;
		case 'f':
		    forceOverwrite = ((Bool) 1);
		    break;
		case 't':
		    opMode = 3;
		    break;
		case 'k':
		    keepInputFiles = ((Bool) 1);
		    break;
		case 's':
		    smallMode = ((Bool) 1);
		    break;
		case 'q':
		    noisy = ((Bool) 0);
		    break;
		case '1':
		    blockSize100k = 1;
		    break;
		case '2':
		    blockSize100k = 2;
		    break;
		case '3':
		    blockSize100k = 3;
		    break;
		case '4':
		    blockSize100k = 4;
		    break;
		case '5':
		    blockSize100k = 5;
		    break;
		case '6':
		    blockSize100k = 6;
		    break;
		case '7':
		    blockSize100k = 7;
		    break;
		case '8':
		    blockSize100k = 8;
		    break;
		case '9':
		    blockSize100k = 9;
		    break;
		case 'V':
		case 'L':
		    license();
		    break;
		case 'v':
		    verbosity++;
		    break;
		case 'h':
		    usage(progName);
		    exit(0);
		    break;
		default:
		    fprintf(stderr, "%s: Bad flag `%s'\n", progName, aa->name);
		    usage(progName);
		    exit(1);
		    break;
		}
	    }
	}
    }
    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
	if ((strcmp(aa->name, ("--")) == 0))
	    break;
	if ((strcmp(aa->name, ("--stdout")) == 0))
	    srcMode = 2;
	else if ((strcmp(aa->name, ("--decompress")) == 0))
	    opMode = 2;
	else if ((strcmp(aa->name, ("--compress")) == 0))
	    opMode = 1;
	else if ((strcmp(aa->name, ("--force")) == 0))
	    forceOverwrite = ((Bool) 1);
	else if ((strcmp(aa->name, ("--test")) == 0))
	    opMode = 3;
	else if ((strcmp(aa->name, ("--keep")) == 0))
	    keepInputFiles = ((Bool) 1);
	else if ((strcmp(aa->name, ("--small")) == 0))
	    smallMode = ((Bool) 1);
	else if ((strcmp(aa->name, ("--quiet")) == 0))
	    noisy = ((Bool) 0);
	else if ((strcmp(aa->name, ("--version")) == 0))
	    license();
	else if ((strcmp(aa->name, ("--license")) == 0))
	    license();
	else if ((strcmp(aa->name, ("--exponential")) == 0))
	    workFactor = 1;
	else if ((strcmp(aa->name, ("--repetitive-best")) == 0))
	    redundant(aa->name);
	else if ((strcmp(aa->name, ("--repetitive-fast")) == 0))
	    redundant(aa->name);
	else if ((strcmp(aa->name, ("--fast")) == 0))
	    blockSize100k = 1;
	else if ((strcmp(aa->name, ("--best")) == 0))
	    blockSize100k = 9;
	else if ((strcmp(aa->name, ("--verbose")) == 0))
	    verbosity++;
	else if ((strcmp(aa->name, ("--help")) == 0)) {
	    usage(progName);
	    exit(0);
	} else if (strncmp(aa->name, "--", 2) == 0) {
	    fprintf(stderr, "%s: Bad flag `%s'\n", progName, aa->name);
	    usage(progName);
	    exit(1);
	}
    }
    if (verbosity > 4)
	verbosity = 4;
    if (opMode == 1 && smallMode && blockSize100k > 2)
	blockSize100k = 2;
    if (opMode == 3 && srcMode == 2) {
	fprintf(stderr, "%s: -c and -t cannot be used together.\n", progName);
	exit(1);
    }
    if (srcMode == 2 && numFileNames == 0)
	srcMode = 1;
    if (opMode != 1)
	blockSize100k = 0;
    if (srcMode == 3) {
	signal(2, mySignalCatcher);
	signal(15, mySignalCatcher);
	signal(1, mySignalCatcher);
    }
    if (opMode == 1) {
	if (srcMode == 1) {
	    compress(((void *) 0));
	} else {
	    decode = ((Bool) 1);
	    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
		if ((strcmp(aa->name, ("--")) == 0)) {
		    decode = ((Bool) 0);
		    continue;
		}
		if (aa->name[0] == '-' && decode)
		    continue;
		numFilesProcessed++;
		compress(aa->name);
	    }
	}
    } else if (opMode == 2) {
	unzFailsExist = ((Bool) 0);
	if (srcMode == 1) {
	    uncompress(((void *) 0));
	} else {
	    decode = ((Bool) 1);
	    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
		if ((strcmp(aa->name, ("--")) == 0)) {
		    decode = ((Bool) 0);
		    continue;
		}
		if (aa->name[0] == '-' && decode)
		    continue;
		numFilesProcessed++;
		uncompress(aa->name);
	    }
	}
	if (unzFailsExist) {
	    setExit(2);
	    exit(exitValue);
	}
    } else {
	testFailsExist = ((Bool) 0);
	if (srcMode == 1) {
	    testf(((void *) 0));
	} else {
	    decode = ((Bool) 1);
	    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
		if ((strcmp(aa->name, ("--")) == 0)) {
		    decode = ((Bool) 0);
		    continue;
		}
		if (aa->name[0] == '-' && decode)
		    continue;
		numFilesProcessed++;
		testf(aa->name);
	    }
	}
	if (testFailsExist && noisy) {
	    fprintf(stderr, "\n" "You can use the `bzip2recover' program to attempt to recover\n" "data from undamaged sections of corrupted files.\n\n");
	    setExit(2);
	    exit(exitValue);
	}
    }
    aa = argList;
    while (aa != ((void *) 0)) {
	Cell *aa2 = aa->link;
	if (aa->name != ((void *) 0))
	    free(aa->name);
	free(aa);
	aa = aa2;
    } return exitValue;
}
