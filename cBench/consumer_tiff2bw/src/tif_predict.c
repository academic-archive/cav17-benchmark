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
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int fdatasync(int __fildes);
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
extern int posix_fadvise(int __fd, __off_t __offset, __off_t __len, int __advise) __attribute__ ((__nothrow__));
extern int posix_fallocate(int __fd, __off_t __offset, __off_t __len);
typedef double dblparam_t;
typedef signed char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
enum TIFFIgnoreSense { TIS_STORE, TIS_EXTRACT, TIS_EMPTY };
typedef struct {
    uint16 tiff_magic;
    uint16 tiff_version;
    uint32 tiff_diroff;
} TIFFHeader;
typedef struct {
    uint16 tdir_tag;
    uint16 tdir_type;
    uint32 tdir_count;
    uint32 tdir_offset;
} TIFFDirEntry;
typedef enum { TIFF_NOTYPE = 0, TIFF_BYTE = 1, TIFF_ASCII = 2, TIFF_SHORT = 3, TIFF_LONG = 4, TIFF_RATIONAL = 5, TIFF_SBYTE = 6, TIFF_UNDEFINED = 7, TIFF_SSHORT = 8, TIFF_SLONG = 9, TIFF_SRATIONAL = 10, TIFF_FLOAT = 11, TIFF_DOUBLE = 12 } TIFFDataType;
typedef struct tiff TIFF;
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void *tdata_t;
typedef int32 toff_t;
typedef void *thandle_t;
typedef unsigned char TIFFRGBValue;
typedef struct _TIFFRGBAImage TIFFRGBAImage;
typedef void (*tileContigRoutine) (TIFFRGBAImage *, uint32 *, uint32, uint32, uint32, uint32, int32, int32, unsigned char *);
typedef void (*tileSeparateRoutine) (TIFFRGBAImage *, uint32 *, uint32, uint32, uint32, uint32, int32, int32, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
typedef struct {
    TIFFRGBValue *clamptab;
    int *Cr_r_tab;
    int *Cb_b_tab;
    int32 *Cr_g_tab;
    int32 *Cb_g_tab;
    float coeffs[3];
} TIFFYCbCrToRGB;
struct _TIFFRGBAImage {
    TIFF *tif;
    int stoponerr;
    int isContig;
    int alpha;
    uint32 width;
    uint32 height;
    uint16 bitspersample;
    uint16 samplesperpixel;
    uint16 orientation;
    uint16 photometric;
    uint16 *redcmap;
    uint16 *greencmap;
    uint16 *bluecmap;
    int (*get) (TIFFRGBAImage *, uint32 *, uint32, uint32);
    union {
	void (*any) (TIFFRGBAImage *);
	tileContigRoutine contig;
	tileSeparateRoutine separate;
    } put;
    TIFFRGBValue *Map;
    uint32 **BWmap;
    uint32 **PALmap;
    TIFFYCbCrToRGB *ycbcr;
    int row_offset;
    int col_offset;
};
typedef int (*TIFFInitMethod) (TIFF *, int);
typedef struct {
    char *name;
    uint16 scheme;
    TIFFInitMethod init;
} TIFFCodec;
typedef void (*TIFFErrorHandler) (const char *, const char *, va_list);
typedef tsize_t(*TIFFReadWriteProc) (thandle_t, tdata_t, tsize_t);
typedef toff_t(*TIFFSeekProc) (thandle_t, toff_t, int);
typedef int (*TIFFCloseProc) (thandle_t);
typedef toff_t(*TIFFSizeProc) (thandle_t);
typedef int (*TIFFMapFileProc) (thandle_t, tdata_t *, toff_t *);
typedef void (*TIFFUnmapFileProc) (thandle_t, tdata_t, toff_t);
typedef void (*TIFFExtendProc) (TIFF *);
extern const char *TIFFGetVersion(void);
extern const TIFFCodec *TIFFFindCODEC(uint16);
extern TIFFCodec *TIFFRegisterCODEC(uint16, const char *, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec *);
extern tdata_t _TIFFmalloc(tsize_t);
extern tdata_t _TIFFrealloc(tdata_t, tsize_t);
extern void _TIFFmemset(tdata_t, int, tsize_t);
extern void _TIFFmemcpy(tdata_t, const tdata_t, tsize_t);
extern int _TIFFmemcmp(const tdata_t, const tdata_t, tsize_t);
extern void _TIFFfree(tdata_t);
extern void TIFFClose(TIFF *);
extern int TIFFFlush(TIFF *);
extern int TIFFFlushData(TIFF *);
extern int TIFFGetField(TIFF *, ttag_t, ...);
extern int TIFFVGetField(TIFF *, ttag_t, va_list);
extern int TIFFGetFieldDefaulted(TIFF *, ttag_t, ...);
extern int TIFFVGetFieldDefaulted(TIFF *, ttag_t, va_list);
extern int TIFFReadDirectory(TIFF *);
extern tsize_t TIFFScanlineSize(TIFF *);
extern tsize_t TIFFRasterScanlineSize(TIFF *);
extern tsize_t TIFFStripSize(TIFF *);
extern tsize_t TIFFVStripSize(TIFF *, uint32);
extern tsize_t TIFFTileRowSize(TIFF *);
extern tsize_t TIFFTileSize(TIFF *);
extern tsize_t TIFFVTileSize(TIFF *, uint32);
extern uint32 TIFFDefaultStripSize(TIFF *, uint32);
extern void TIFFDefaultTileSize(TIFF *, uint32 *, uint32 *);
extern int TIFFFileno(TIFF *);
extern int TIFFGetMode(TIFF *);
extern int TIFFIsTiled(TIFF *);
extern int TIFFIsByteSwapped(TIFF *);
extern int TIFFIsUpSampled(TIFF *);
extern int TIFFIsMSB2LSB(TIFF *);
extern uint32 TIFFCurrentRow(TIFF *);
extern tdir_t TIFFCurrentDirectory(TIFF *);
extern tdir_t TIFFNumberOfDirectories(TIFF *);
extern uint32 TIFFCurrentDirOffset(TIFF *);
extern tstrip_t TIFFCurrentStrip(TIFF *);
extern ttile_t TIFFCurrentTile(TIFF *);
extern int TIFFReadBufferSetup(TIFF *, tdata_t, tsize_t);
extern int TIFFWriteBufferSetup(TIFF *, tdata_t, tsize_t);
extern int TIFFLastDirectory(TIFF *);
extern int TIFFSetDirectory(TIFF *, tdir_t);
extern int TIFFSetSubDirectory(TIFF *, uint32);
extern int TIFFUnlinkDirectory(TIFF *, tdir_t);
extern int TIFFSetField(TIFF *, ttag_t, ...);
extern int TIFFVSetField(TIFF *, ttag_t, va_list);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense, int);
extern void TIFFPrintDirectory(TIFF *, FILE *, long);
extern int TIFFReadScanline(TIFF *, tdata_t, uint32, tsample_t);
extern int TIFFWriteScanline(TIFF *, tdata_t, uint32, tsample_t);
extern int TIFFReadRGBAImage(TIFF *, uint32, uint32, uint32 *, int);
extern int TIFFReadRGBAStrip(TIFF *, tstrip_t, uint32 *);
extern int TIFFReadRGBATile(TIFF *, uint32, uint32, uint32 *);
extern int TIFFRGBAImageOK(TIFF *, char[1024]);
extern int TIFFRGBAImageBegin(TIFFRGBAImage *, TIFF *, int, char[1024]);
extern int TIFFRGBAImageGet(TIFFRGBAImage *, uint32 *, uint32, uint32);
extern void TIFFRGBAImageEnd(TIFFRGBAImage *);
extern TIFF *TIFFOpen(const char *, const char *);
extern TIFF *TIFFFdOpen(int, const char *, const char *);
extern TIFF *TIFFClientOpen(const char *, const char *, thandle_t, TIFFReadWriteProc, TIFFReadWriteProc, TIFFSeekProc, TIFFCloseProc, TIFFSizeProc, TIFFMapFileProc, TIFFUnmapFileProc);
extern const char *TIFFFileName(TIFF *);
extern void TIFFError(const char *, const char *, ...);
extern void TIFFWarning(const char *, const char *, ...);
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern ttile_t TIFFComputeTile(TIFF *, uint32, uint32, uint32, tsample_t);
extern int TIFFCheckTile(TIFF *, uint32, uint32, uint32, tsample_t);
extern ttile_t TIFFNumberOfTiles(TIFF *);
extern tsize_t TIFFReadTile(TIFF *, tdata_t, uint32, uint32, uint32, tsample_t);
extern tsize_t TIFFWriteTile(TIFF *, tdata_t, uint32, uint32, uint32, tsample_t);
extern tstrip_t TIFFComputeStrip(TIFF *, uint32, tsample_t);
extern tstrip_t TIFFNumberOfStrips(TIFF *);
extern tsize_t TIFFReadEncodedStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadEncodedTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern void TIFFSetWriteOffset(TIFF *, toff_t);
extern void TIFFSwabShort(uint16 *);
extern void TIFFSwabLong(uint32 *);
extern void TIFFSwabDouble(double *);
extern void TIFFSwabArrayOfShort(uint16 *, unsigned long);
extern void TIFFSwabArrayOfLong(uint32 *, unsigned long);
extern void TIFFSwabArrayOfDouble(double *, unsigned long);
extern void TIFFReverseBits(unsigned char *, unsigned long);
extern const unsigned char *TIFFGetBitRevTable(int);
typedef struct {
    u_long td_fieldsset[3];
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
    uint16 *td_colormap[3];
    uint16 td_halftonehints[2];
    uint16 td_extrasamples;
    uint16 *td_sampleinfo;
    double td_stonits;
    char *td_documentname;
    char *td_artist;
    char *td_datetime;
    char *td_hostcomputer;
    char *td_imagedescription;
    char *td_make;
    char *td_model;
    char *td_software;
    char *td_pagename;
    tstrip_t td_stripsperimage;
    tstrip_t td_nstrips;
    uint32 *td_stripoffset;
    uint32 *td_stripbytecount;
    uint16 td_nsubifd;
    uint32 *td_subifd;
    float *td_ycbcrcoeffs;
    uint16 td_ycbcrsubsampling[2];
    uint16 td_ycbcrpositioning;
    float *td_whitepoint;
    float *td_primarychromas;
    float *td_refblackwhite;
    uint16 *td_transferfunction[3];
    uint16 td_inkset;
    uint16 td_ninks;
    uint16 td_dotrange[2];
    int td_inknameslen;
    char *td_inknames;
    char *td_targetprinter;
    uint32 td_profileLength;
    void *td_profileData;
    uint32 td_photoshopLength;
    void *td_photoshopData;
    uint32 td_richtiffiptcLength;
    void *td_richtiffiptcData;
    uint32 td_imagefullwidth, td_imagefulllength;
    char *td_textureformat;
    char *td_wrapmodes;
    float td_fovcot;
    float *td_matrixWorldToScreen;
    float *td_matrixWorldToCamera;
} TIFFDirectory;
typedef struct {
    ttag_t field_tag;
    short field_readcount;
    short field_writecount;
    TIFFDataType field_type;
    u_short field_bit;
    u_char field_oktochange;
    u_char field_passcount;
    char *field_name;
} TIFFFieldInfo;
extern const int tiffDataWidth[];
extern void _TIFFSetupFieldInfo(TIFF *);
extern void _TIFFMergeFieldInfo(TIFF *, const TIFFFieldInfo[], int);
extern void _TIFFPrintFieldInfo(TIFF *, FILE *);
extern const TIFFFieldInfo *_TIFFFindFieldInfo(TIFF *, ttag_t, TIFFDataType);
extern const TIFFFieldInfo *_TIFFFieldWithTag(TIFF *, ttag_t);
extern TIFFDataType _TIFFSampleToTagType(TIFF *);
typedef unsigned char tidataval_t;
typedef tidataval_t *tidata_t;
typedef void (*TIFFVoidMethod) (TIFF *);
typedef int (*TIFFBoolMethod) (TIFF *);
typedef int (*TIFFPreMethod) (TIFF *, tsample_t);
typedef int (*TIFFCodeMethod) (TIFF *, tidata_t, tsize_t, tsample_t);
typedef int (*TIFFSeekMethod) (TIFF *, uint32);
typedef void (*TIFFPostMethod) (TIFF *, tidata_t, tsize_t);
typedef int (*TIFFVSetMethod) (TIFF *, ttag_t, va_list);
typedef int (*TIFFVGetMethod) (TIFF *, ttag_t, va_list);
typedef void (*TIFFPrintMethod) (TIFF *, FILE *, long);
typedef uint32(*TIFFStripMethod) (TIFF *, uint32);
typedef void (*TIFFTileMethod) (TIFF *, uint32 *, uint32 *);
struct tiff {
    char *tif_name;
    int tif_fd;
    int tif_mode;
    uint32 tif_flags;
    toff_t tif_diroff;
    toff_t tif_nextdiroff;
    TIFFDirectory tif_dir;
    TIFFHeader tif_header;
    tidata_t tif_clientdir;
    const int *tif_typeshift;
    const long *tif_typemask;
    uint32 tif_row;
    tdir_t tif_curdir;
    tstrip_t tif_curstrip;
    toff_t tif_curoff;
    toff_t tif_dataoff;
    uint16 tif_nsubifd;
    toff_t tif_subifdoff;
    uint32 tif_col;
    ttile_t tif_curtile;
    tsize_t tif_tilesize;
    TIFFBoolMethod tif_setupdecode;
    TIFFPreMethod tif_predecode;
    TIFFBoolMethod tif_setupencode;
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
    tidata_t tif_data;
    tsize_t tif_scanlinesize;
    tsize_t tif_scanlineskew;
    tidata_t tif_rawdata;
    tsize_t tif_rawdatasize;
    tidata_t tif_rawcp;
    tsize_t tif_rawcc;
    tidata_t tif_base;
    toff_t tif_size;
    TIFFMapFileProc tif_mapproc;
    TIFFUnmapFileProc tif_unmapproc;
    thandle_t tif_clientdata;
    TIFFReadWriteProc tif_readproc;
    TIFFReadWriteProc tif_writeproc;
    TIFFSeekProc tif_seekproc;
    TIFFCloseProc tif_closeproc;
    TIFFSizeProc tif_sizeproc;
    TIFFPostMethod tif_postdecode;
    TIFFFieldInfo **tif_fieldinfo;
    int tif_nfields;
    TIFFVSetMethod tif_vsetfield;
    TIFFVGetMethod tif_vgetfield;
    TIFFPrintMethod tif_printdir;
};
extern int _TIFFgetMode(const char *, const char *);
extern int _TIFFNoRowEncode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripEncode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileEncode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoRowDecode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripDecode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileDecode(TIFF *, tidata_t, tsize_t, tsample_t);
extern void _TIFFNoPostDecode(TIFF *, tidata_t, tsize_t);
extern int _TIFFNoPreCode(TIFF *, tsample_t);
extern int _TIFFNoSeek(TIFF *, uint32);
extern void _TIFFSwab16BitData(TIFF *, tidata_t, tsize_t);
extern void _TIFFSwab32BitData(TIFF *, tidata_t, tsize_t);
extern void _TIFFSwab64BitData(TIFF *, tidata_t, tsize_t);
extern int TIFFFlushData1(TIFF *);
extern void TIFFFreeDirectory(TIFF *);
extern int TIFFDefaultDirectory(TIFF *);
extern int TIFFSetCompressionScheme(TIFF *, int);
extern int TIFFSetDefaultCompressionState(TIFF *);
extern uint32 _TIFFDefaultStripSize(TIFF *, uint32);
extern void _TIFFDefaultTileSize(TIFF *, uint32 *, uint32 *);
extern void _TIFFsetByteArray(void **, void *, long);
extern void _TIFFsetString(char **, char *);
extern void _TIFFsetShortArray(uint16 **, uint16 *, long);
extern void _TIFFsetLongArray(uint32 **, uint32 *, long);
extern void _TIFFsetFloatArray(float **, float *, long);
extern void _TIFFsetDoubleArray(double **, double *, long);
extern void _TIFFprintAscii(FILE *, const char *);
extern void _TIFFprintAsciiTag(FILE *, const char *, const char *);
extern TIFFErrorHandler _TIFFwarningHandler;
extern TIFFErrorHandler _TIFFerrorHandler;
extern int TIFFInitDumpMode(TIFF *, int);
extern int TIFFInitPackBits(TIFF *, int);
extern int TIFFInitCCITTRLE(TIFF *, int), TIFFInitCCITTRLEW(TIFF *, int);
extern int TIFFInitCCITTFax3(TIFF *, int), TIFFInitCCITTFax4(TIFF *, int);
extern int TIFFInitThunderScan(TIFF *, int);
extern int TIFFInitNeXT(TIFF *, int);
extern int TIFFInitLZW(TIFF *, int);
extern int TIFFInitSGILog(TIFF *, int);
extern TIFFCodec _TIFFBuiltinCODECS[];
typedef struct {
    int predictor;
    int stride;
    tsize_t rowsize;
    TIFFPostMethod pfunc;
    TIFFCodeMethod coderow;
    TIFFCodeMethod codestrip;
    TIFFCodeMethod codetile;
    TIFFVGetMethod vgetparent;
    TIFFVSetMethod vsetparent;
    TIFFPrintMethod printdir;
    TIFFBoolMethod setupdecode;
    TIFFBoolMethod setupencode;
} TIFFPredictorState;
extern int TIFFPredictorInit(TIFF *);
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
static void horAcc8(TIFF *, tidata_t, tsize_t);
static void horAcc16(TIFF *, tidata_t, tsize_t);
static void swabHorAcc16(TIFF *, tidata_t, tsize_t);
static void horDiff8(TIFF *, tidata_t, tsize_t);
static void horDiff16(TIFF *, tidata_t, tsize_t);
static int PredictorDecodeRow(TIFF *, tidata_t, tsize_t, tsample_t);
static int PredictorDecodeTile(TIFF *, tidata_t, tsize_t, tsample_t);
static int PredictorEncodeRow(TIFF *, tidata_t, tsize_t, tsample_t);
static int PredictorEncodeTile(TIFF *, tidata_t, tsize_t, tsample_t);
static int PredictorSetup(TIFF * tif)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    TIFFDirectory *td = &tif->tif_dir;
    if (sp->predictor == 1)
	return (1);
    if (sp->predictor != 2) {
	TIFFError(tif->tif_name, "\"Predictor\" value %d not supported", sp->predictor);
	return (0);
    }
    if (td->td_bitspersample != 8 && td->td_bitspersample != 16) {
	TIFFError(tif->tif_name, "Horizontal differencing \"Predictor\" not supported with %d-bit samples", td->td_bitspersample);
	return (0);
    }
    sp->stride = (td->td_planarconfig == 1 ? td->td_samplesperpixel : 1);
    if ((((tif)->tif_flags & 0x0400) != 0))
	sp->rowsize = TIFFTileRowSize(tif);
    else
	sp->rowsize = TIFFScanlineSize(tif);
    return (1);
}

static int PredictorSetupDecode(TIFF * tif)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    TIFFDirectory *td = &tif->tif_dir;
    if (!(*sp->setupdecode) (tif) || !PredictorSetup(tif))
	return (0);
    if (sp->predictor == 2) {
	switch (td->td_bitspersample) {
	case 8:
	    sp->pfunc = horAcc8;
	    break;
	case 16:
	    sp->pfunc = horAcc16;
	    break;
	}
	sp->coderow = tif->tif_decoderow;
	tif->tif_decoderow = PredictorDecodeRow;
	sp->codestrip = tif->tif_decodestrip;
	tif->tif_decodestrip = PredictorDecodeTile;
	sp->codetile = tif->tif_decodetile;
	tif->tif_decodetile = PredictorDecodeTile;
	if (tif->tif_flags & 0x0080) {
	    if (sp->pfunc == horAcc16) {
		sp->pfunc = swabHorAcc16;
		tif->tif_postdecode = _TIFFNoPostDecode;
	    }
	}
    }
    return (1);
}

static int PredictorSetupEncode(TIFF * tif)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    TIFFDirectory *td = &tif->tif_dir;
    if (!(*sp->setupencode) (tif) || !PredictorSetup(tif))
	return (0);
    if (sp->predictor == 2) {
	switch (td->td_bitspersample) {
	case 8:
	    sp->pfunc = horDiff8;
	    break;
	case 16:
	    sp->pfunc = horDiff16;
	    break;
	}
	sp->coderow = tif->tif_encoderow;
	tif->tif_encoderow = PredictorEncodeRow;
	sp->codestrip = tif->tif_encodestrip;
	tif->tif_encodestrip = PredictorEncodeTile;
	sp->codetile = tif->tif_encodetile;
	tif->tif_encodetile = PredictorEncodeTile;
    }
    return (1);
}

static void horAcc8(TIFF * tif, tidata_t cp0, tsize_t cc)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    tsize_t stride = sp->stride;
    char *cp = (char *) cp0;
    if (cc > stride) {
	cc -= stride;
	if (stride == 3) {
	    u_int cr = cp[0];
	    u_int cg = cp[1];
	    u_int cb = cp[2];
	    do {
		cc -= 3, cp += 3;
		cp[0] = (cr += cp[0]);
		cp[1] = (cg += cp[1]);
		cp[2] = (cb += cp[2]);
	    } while ((int32) cc > 0);
	} else if (stride == 4) {
	    u_int cr = cp[0];
	    u_int cg = cp[1];
	    u_int cb = cp[2];
	    u_int ca = cp[3];
	    do {
		cc -= 4, cp += 4;
		cp[0] = (cr += cp[0]);
		cp[1] = (cg += cp[1]);
		cp[2] = (cb += cp[2]);
		cp[3] = (ca += cp[3]);
	    } while ((int32) cc > 0);
	} else {
	    do {
		switch (stride) {
		default:{
			int i;
			for (i = stride - 4; i > 0; i--) {
			    cp[stride] += *cp;
			    cp++;
			}
		    }
		case 4:
		    cp[stride] += *cp;
		    cp++;
		case 3:
		    cp[stride] += *cp;
		    cp++;
		case 2:
		    cp[stride] += *cp;
		    cp++;
		case 1:
		    cp[stride] += *cp;
		    cp++;
		case 0:;
		}
		cc -= stride;
	    } while ((int32) cc > 0);
	}
    }
}

static void swabHorAcc16(TIFF * tif, tidata_t cp0, tsize_t cc)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    tsize_t stride = sp->stride;
    uint16 *wp = (uint16 *) cp0;
    tsize_t wc = cc / 2;
    if (wc > stride) {
	TIFFSwabArrayOfShort(wp, wc);
	wc -= stride;
	do {
	    switch (stride) {
	    default:{
		    int i;
		    for (i = stride - 4; i > 0; i--) {
			wp[stride] += wp[0];
			wp++;
		    }
		}
	    case 4:
		wp[stride] += wp[0];
		wp++;
	    case 3:
		wp[stride] += wp[0];
		wp++;
	    case 2:
		wp[stride] += wp[0];
		wp++;
	    case 1:
		wp[stride] += wp[0];
		wp++;
	    case 0:;
	    }
	    wc -= stride;
	} while ((int32) wc > 0);
    }
}

static void horAcc16(TIFF * tif, tidata_t cp0, tsize_t cc)
{
    tsize_t stride = ((TIFFPredictorState *) (tif)->tif_data)->stride;
    uint16 *wp = (uint16 *) cp0;
    tsize_t wc = cc / 2;
    if (wc > stride) {
	wc -= stride;
	do {
	    switch (stride) {
	    default:{
		    int i;
		    for (i = stride - 4; i > 0; i--) {
			wp[stride] += wp[0];
			wp++;
		    }
		}
	    case 4:
		wp[stride] += wp[0];
		wp++;
	    case 3:
		wp[stride] += wp[0];
		wp++;
	    case 2:
		wp[stride] += wp[0];
		wp++;
	    case 1:
		wp[stride] += wp[0];
		wp++;
	    case 0:;
	    }
	    wc -= stride;
	} while ((int32) wc > 0);
    }
}

static int PredictorDecodeRow(TIFF * tif, tidata_t op0, tsize_t occ0, tsample_t s)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_predict.c", 244, __PRETTY_FUNCTION__));
    ((sp->coderow != ((void *) 0)) ? (void) (0) : __assert_fail("sp->coderow != ((void*)0)", "tif_predict.c", 245, __PRETTY_FUNCTION__));
    ((sp->pfunc != ((void *) 0)) ? (void) (0) : __assert_fail("sp->pfunc != ((void*)0)", "tif_predict.c", 246, __PRETTY_FUNCTION__));
    if ((*sp->coderow) (tif, op0, occ0, s)) {
	(*sp->pfunc) (tif, op0, occ0);
	return (1);
    } else
	return (0);
}

static int PredictorDecodeTile(TIFF * tif, tidata_t op0, tsize_t occ0, tsample_t s)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_predict.c", 266, __PRETTY_FUNCTION__));
    ((sp->codetile != ((void *) 0)) ? (void) (0) : __assert_fail("sp->codetile != ((void*)0)", "tif_predict.c", 267, __PRETTY_FUNCTION__));
    if ((*sp->codetile) (tif, op0, occ0, s)) {
	tsize_t rowsize = sp->rowsize;
	((rowsize > 0) ? (void) (0) : __assert_fail("rowsize > 0", "tif_predict.c", 270, __PRETTY_FUNCTION__));
	((sp->pfunc != ((void *) 0)) ? (void) (0) : __assert_fail("sp->pfunc != ((void*)0)", "tif_predict.c", 271, __PRETTY_FUNCTION__));
	while ((long) occ0 > 0) {
	    (*sp->pfunc) (tif, op0, (tsize_t) rowsize);
	    occ0 -= rowsize;
	    op0 += rowsize;
	} return (1);
    } else
	return (0);
}

static void horDiff8(TIFF * tif, tidata_t cp0, tsize_t cc)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    tsize_t stride = sp->stride;
    char *cp = (char *) cp0;
    if (cc > stride) {
	cc -= stride;
	if (stride == 3) {
	    int r1, g1, b1;
	    int r2 = cp[0];
	    int g2 = cp[1];
	    int b2 = cp[2];
	    do {
		r1 = cp[3];
		cp[3] = r1 - r2;
		r2 = r1;
		g1 = cp[4];
		cp[4] = g1 - g2;
		g2 = g1;
		b1 = cp[5];
		cp[5] = b1 - b2;
		b2 = b1;
		cp += 3;
	    } while ((int32) (cc -= 3) > 0);
	} else if (stride == 4) {
	    int r1, g1, b1, a1;
	    int r2 = cp[0];
	    int g2 = cp[1];
	    int b2 = cp[2];
	    int a2 = cp[3];
	    do {
		r1 = cp[4];
		cp[4] = r1 - r2;
		r2 = r1;
		g1 = cp[5];
		cp[5] = g1 - g2;
		g2 = g1;
		b1 = cp[6];
		cp[6] = b1 - b2;
		b2 = b1;
		a1 = cp[7];
		cp[7] = a1 - a2;
		a2 = a1;
		cp += 4;
	    } while ((int32) (cc -= 4) > 0);
	} else {
	    cp += cc - 1;
	    do {
		switch (stride) {
		default:{
			int i;
			for (i = stride - 4; i > 0; i--) {
			    cp[stride] -= cp[0];
			    cp--;
			}
		    }
		case 4:
		    cp[stride] -= cp[0];
		    cp--;
		case 3:
		    cp[stride] -= cp[0];
		    cp--;
		case 2:
		    cp[stride] -= cp[0];
		    cp--;
		case 1:
		    cp[stride] -= cp[0];
		    cp--;
		case 0:;
		}
	    } while ((int32) (cc -= stride) > 0);
	}
    }
}

static void horDiff16(TIFF * tif, tidata_t cp0, tsize_t cc)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    tsize_t stride = sp->stride;
    int16 *wp = (int16 *) cp0;
    tsize_t wc = cc / 2;
    if (wc > stride) {
	wc -= stride;
	wp += wc - 1;
	do {
	    switch (stride) {
	    default:{
		    int i;
		    for (i = stride - 4; i > 0; i--) {
			wp[stride] -= wp[0];
			wp--;
		    }
		}
	    case 4:
		wp[stride] -= wp[0];
		wp--;
	    case 3:
		wp[stride] -= wp[0];
		wp--;
	    case 2:
		wp[stride] -= wp[0];
		wp--;
	    case 1:
		wp[stride] -= wp[0];
		wp--;
	    case 0:;
	    }
	    wc -= stride;
	} while ((int32) wc > 0);
    }
}

static int PredictorEncodeRow(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_predict.c", 350, __PRETTY_FUNCTION__));
    ((sp->pfunc != ((void *) 0)) ? (void) (0) : __assert_fail("sp->pfunc != ((void*)0)", "tif_predict.c", 351, __PRETTY_FUNCTION__));
    ((sp->coderow != ((void *) 0)) ? (void) (0) : __assert_fail("sp->coderow != ((void*)0)", "tif_predict.c", 352, __PRETTY_FUNCTION__));
    (*sp->pfunc) (tif, bp, cc);
    return ((*sp->coderow) (tif, bp, cc, s));
}

static int PredictorEncodeTile(TIFF * tif, tidata_t bp0, tsize_t cc0, tsample_t s)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    tsize_t cc = cc0, rowsize;
    u_char *bp = bp0;
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_predict.c", 365, __PRETTY_FUNCTION__));
    ((sp->pfunc != ((void *) 0)) ? (void) (0) : __assert_fail("sp->pfunc != ((void*)0)", "tif_predict.c", 366, __PRETTY_FUNCTION__));
    ((sp->codetile != ((void *) 0)) ? (void) (0) : __assert_fail("sp->codetile != ((void*)0)", "tif_predict.c", 367, __PRETTY_FUNCTION__));
    rowsize = sp->rowsize;
    ((rowsize > 0) ? (void) (0) : __assert_fail("rowsize > 0", "tif_predict.c", 369, __PRETTY_FUNCTION__));
    while ((long) cc > 0) {
	(*sp->pfunc) (tif, bp, (tsize_t) rowsize);
	cc -= rowsize;
	bp += rowsize;
    } return ((*sp->codetile) (tif, bp0, cc0, s));
}
static const TIFFFieldInfo predictFieldInfo[] = { {317, 1, 1, TIFF_SHORT, (62 + 0), 0, 0, "Predictor"}, };

static int PredictorVSetField(TIFF * tif, ttag_t tag, va_list ap)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    switch (tag) {
    case 317:
	sp->predictor = (uint16) __builtin_va_arg(ap, int);
	(((tif)->tif_dir.td_fieldsset[((62 + 0)) / 32]) |= (((u_long) 1L) << (((62 + 0)) & 0x1f)));
	break;
    default:
	return (*sp->vsetparent) (tif, tag, ap);
    }
    tif->tif_flags |= 0x0008;
    return (1);
}

static int PredictorVGetField(TIFF * tif, ttag_t tag, va_list ap)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    switch (tag) {
    case 317:
	*__builtin_va_arg(ap, uint16 *) = sp->predictor;
	break;
    default:
	return (*sp->vgetparent) (tif, tag, ap);
    }
    return (1);
}

static void PredictorPrintDir(TIFF * tif, FILE * fd, long flags)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    (void) flags;
    if ((((tif)->tif_dir.td_fieldsset[((62 + 0)) / 32]) & (((u_long) 1L) << (((62 + 0)) & 0x1f)))) {
	fprintf(fd, "  Predictor: ");
	switch (sp->predictor) {
	case 1:
	    fprintf(fd, "none ");
	    break;
	case 2:
	    fprintf(fd, "horizontal differencing ");
	    break;
	}
	fprintf(fd, "%u (0x%x)\n", sp->predictor, sp->predictor);
    }
    if (sp->printdir)
	(*sp->printdir) (tif, fd, flags);
}

int TIFFPredictorInit(TIFF * tif)
{
    TIFFPredictorState *sp = ((TIFFPredictorState *) (tif)->tif_data);
    _TIFFMergeFieldInfo(tif, predictFieldInfo, (sizeof(predictFieldInfo) / sizeof(predictFieldInfo[0])));
    sp->vgetparent = tif->tif_vgetfield;
    tif->tif_vgetfield = PredictorVGetField;
    sp->vsetparent = tif->tif_vsetfield;
    tif->tif_vsetfield = PredictorVSetField;
    sp->printdir = tif->tif_printdir;
    tif->tif_printdir = PredictorPrintDir;
    sp->setupdecode = tif->tif_setupdecode;
    tif->tif_setupdecode = PredictorSetupDecode;
    sp->setupencode = tif->tif_setupencode;
    tif->tif_setupencode = PredictorSetupEncode;
    sp->predictor = 1;
    sp->pfunc = ((void *) 0);
    return (1);
}