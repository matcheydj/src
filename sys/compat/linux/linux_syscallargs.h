/*	$OpenBSD: linux_syscallargs.h,v 1.40 2003/05/10 17:55:56 miod Exp $	*/

/*
 * System call argument lists.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	OpenBSD: syscalls.master,v 1.37 2003/05/10 17:53:57 miod Exp 
 */

#ifdef	syscallarg
#undef	syscallarg
#endif

#define	syscallarg(x)							\
	union {								\
		register_t pad;						\
		struct { x datum; } le;					\
		struct {						\
			int8_t pad[ (sizeof (register_t) < sizeof (x))	\
				? 0					\
				: sizeof (register_t) - sizeof (x)];	\
			x datum;					\
		} be;							\
	}

struct linux_sys_open_args {
	syscallarg(char *) path;
	syscallarg(int) flags;
	syscallarg(int) mode;
};

struct linux_sys_waitpid_args {
	syscallarg(int) pid;
	syscallarg(int *) status;
	syscallarg(int) options;
};

struct linux_sys_creat_args {
	syscallarg(char *) path;
	syscallarg(int) mode;
};

struct linux_sys_unlink_args {
	syscallarg(char *) path;
};

struct linux_sys_execve_args {
	syscallarg(char *) path;
	syscallarg(char **) argp;
	syscallarg(char **) envp;
};

struct linux_sys_chdir_args {
	syscallarg(char *) path;
};

struct linux_sys_time_args {
	syscallarg(linux_time_t *) t;
};

struct linux_sys_mknod_args {
	syscallarg(char *) path;
	syscallarg(int) mode;
	syscallarg(int) dev;
};

struct linux_sys_chmod_args {
	syscallarg(char *) path;
	syscallarg(int) mode;
};

struct linux_sys_lchown16_args {
	syscallarg(char *) path;
	syscallarg(int) uid;
	syscallarg(int) gid;
};

struct linux_sys_break_args {
	syscallarg(char *) nsize;
};

struct linux_sys_mount_args {
	syscallarg(char *) specialfile;
	syscallarg(char *) dir;
	syscallarg(char *) filesystemtype;
	syscallarg(long) rwflag;
	syscallarg(void *) data;
};

struct linux_sys_umount_args {
	syscallarg(char *) specialfile;
};

struct linux_sys_stime_args {
	syscallarg(linux_time_t *) t;
};

struct linux_sys_alarm_args {
	syscallarg(unsigned int) secs;
};

struct linux_sys_utime_args {
	syscallarg(char *) path;
	syscallarg(struct linux_utimbuf *) times;
};

struct linux_sys_access_args {
	syscallarg(char *) path;
	syscallarg(int) flags;
};

struct linux_sys_nice_args {
	syscallarg(int) incr;
};

struct linux_sys_kill_args {
	syscallarg(int) pid;
	syscallarg(int) signum;
};

struct linux_sys_rename_args {
	syscallarg(char *) from;
	syscallarg(char *) to;
};

struct linux_sys_mkdir_args {
	syscallarg(char *) path;
	syscallarg(int) mode;
};

struct linux_sys_rmdir_args {
	syscallarg(char *) path;
};

struct linux_sys_pipe_args {
	syscallarg(int *) pfds;
};

struct linux_sys_times_args {
	syscallarg(struct times *) tms;
};

struct linux_sys_brk_args {
	syscallarg(char *) nsize;
};

struct linux_sys_signal_args {
	syscallarg(int) sig;
	syscallarg(linux_handler_t) handler;
};

struct linux_sys_ioctl_args {
	syscallarg(int) fd;
	syscallarg(u_long) com;
	syscallarg(caddr_t) data;
};

struct linux_sys_fcntl_args {
	syscallarg(int) fd;
	syscallarg(int) cmd;
	syscallarg(void *) arg;
};

struct linux_sys_oldolduname_args {
	syscallarg(struct linux_oldold_utsname *) up;
};

struct linux_sys_sigaction_args {
	syscallarg(int) signum;
	syscallarg(struct linux_old_sigaction *) nsa;
	syscallarg(struct linux_old_sigaction *) osa;
};

struct linux_sys_sigsetmask_args {
	syscallarg(linux_old_sigset_t) mask;
};

struct linux_sys_setreuid16_args {
	syscallarg(int) ruid;
	syscallarg(int) euid;
};

struct linux_sys_setregid16_args {
	syscallarg(int) rgid;
	syscallarg(int) egid;
};

struct linux_sys_sigsuspend_args {
	syscallarg(caddr_t) restart;
	syscallarg(int) oldmask;
	syscallarg(int) mask;
};

struct linux_sys_sigpending_args {
	syscallarg(linux_old_sigset_t *) mask;
};

struct linux_sys_setrlimit_args {
	syscallarg(u_int) which;
	syscallarg(struct linux_rlimit *) rlp;
};

struct linux_sys_getrlimit_args {
	syscallarg(u_int) which;
	syscallarg(struct linux_rlimit *) rlp;
};

struct linux_sys_oldselect_args {
	syscallarg(struct linux_select *) lsp;
};

struct linux_sys_symlink_args {
	syscallarg(char *) path;
	syscallarg(char *) to;
};

struct linux_sys_readlink_args {
	syscallarg(char *) name;
	syscallarg(char *) buf;
	syscallarg(int) count;
};

struct linux_sys_uselib_args {
	syscallarg(char *) path;
};

struct linux_sys_readdir_args {
	syscallarg(int) fd;
	syscallarg(caddr_t) dent;
	syscallarg(unsigned int) count;
};

struct linux_sys_mmap_args {
	syscallarg(struct linux_mmap *) lmp;
};

struct linux_sys_truncate_args {
	syscallarg(char *) path;
	syscallarg(long) length;
};

struct linux_sys_fchown16_args {
	syscallarg(int) fd;
	syscallarg(int) uid;
	syscallarg(int) gid;
};

struct linux_sys_statfs_args {
	syscallarg(char *) path;
	syscallarg(struct linux_statfs *) sp;
};

struct linux_sys_fstatfs_args {
	syscallarg(int) fd;
	syscallarg(struct linux_statfs *) sp;
};

struct linux_sys_ioperm_args {
	syscallarg(unsigned int) lo;
	syscallarg(unsigned int) hi;
	syscallarg(int) val;
};

struct linux_sys_socketcall_args {
	syscallarg(int) what;
	syscallarg(void *) args;
};

struct linux_sys_stat_args {
	syscallarg(char *) path;
	syscallarg(struct linux_stat *) sp;
};

struct linux_sys_lstat_args {
	syscallarg(char *) path;
	syscallarg(struct linux_stat *) sp;
};

struct linux_sys_fstat_args {
	syscallarg(int) fd;
	syscallarg(struct linux_stat *) sp;
};

struct linux_sys_olduname_args {
	syscallarg(struct linux_old_utsname *) up;
};

struct linux_sys_iopl_args {
	syscallarg(int) level;
};

struct linux_sys_wait4_args {
	syscallarg(int) pid;
	syscallarg(int *) status;
	syscallarg(int) options;
	syscallarg(struct rusage *) rusage;
};

struct linux_sys_ipc_args {
	syscallarg(int) what;
	syscallarg(int) a1;
	syscallarg(int) a2;
	syscallarg(int) a3;
	syscallarg(caddr_t) ptr;
};

struct linux_sys_sigreturn_args {
	syscallarg(struct linux_sigcontext *) scp;
};

struct linux_sys_clone_args {
	syscallarg(int) flags;
	syscallarg(void *) stack;
};

struct linux_sys_uname_args {
	syscallarg(struct linux_utsname *) up;
};

struct linux_sys_modify_ldt_args {
	syscallarg(int) func;
	syscallarg(void *) ptr;
	syscallarg(size_t) bytecount;
};

struct linux_sys_sigprocmask_args {
	syscallarg(int) how;
	syscallarg(linux_old_sigset_t *) set;
	syscallarg(linux_old_sigset_t *) oset;
};

struct linux_sys_getpgid_args {
	syscallarg(int) pid;
};

struct linux_sys_personality_args {
	syscallarg(int) per;
};

struct linux_sys_llseek_args {
	syscallarg(int) fd;
	syscallarg(u_int32_t) ohigh;
	syscallarg(u_int32_t) olow;
	syscallarg(caddr_t) res;
	syscallarg(int) whence;
};

struct linux_sys_getdents_args {
	syscallarg(int) fd;
	syscallarg(void *) dirent;
	syscallarg(unsigned) count;
};

struct linux_sys_select_args {
	syscallarg(int) nfds;
	syscallarg(fd_set *) readfds;
	syscallarg(fd_set *) writefds;
	syscallarg(fd_set *) exceptfds;
	syscallarg(struct timeval *) timeout;
};

struct linux_sys_getsid_args {
	syscallarg(int) pid;
};

struct linux_sys_fdatasync_args {
	syscallarg(int) fd;
};

struct linux_sys___sysctl_args {
	syscallarg(struct linux___sysctl *) lsp;
};

struct linux_sys_sched_setparam_args {
	syscallarg(linux_pid_t) pid;
	syscallarg(const struct linux_sched_param *) sp;
};

struct linux_sys_sched_getparam_args {
	syscallarg(linux_pid_t) pid;
	syscallarg(struct linux_sched_param *) sp;
};

struct linux_sys_sched_setscheduler_args {
	syscallarg(linux_pid_t) pid;
	syscallarg(int) policy;
	syscallarg(const struct linux_sched_param *) sp;
};

struct linux_sys_sched_getscheduler_args {
	syscallarg(linux_pid_t) pid;
};

struct linux_sys_sched_get_priority_max_args {
	syscallarg(int) policy;
};

struct linux_sys_sched_get_priority_min_args {
	syscallarg(int) policy;
};

struct linux_sys_mremap_args {
	syscallarg(void *) old_address;
	syscallarg(size_t) old_size;
	syscallarg(size_t) new_size;
	syscallarg(long) flags;
};

struct linux_sys_setresuid16_args {
	syscallarg(u_int16_t) ruid;
	syscallarg(u_int16_t) euid;
	syscallarg(u_int16_t) suid;
};

struct linux_sys_getresuid16_args {
	syscallarg(u_int16_t *) ruid;
	syscallarg(u_int16_t *) euid;
	syscallarg(u_int16_t *) suid;
};

struct linux_sys_setresgid16_args {
	syscallarg(u_int16_t) rgid;
	syscallarg(u_int16_t) egid;
	syscallarg(u_int16_t) sgid;
};

struct linux_sys_getresgid16_args {
	syscallarg(u_int16_t *) rgid;
	syscallarg(u_int16_t *) egid;
	syscallarg(u_int16_t *) sgid;
};

struct linux_sys_rt_sigreturn_args {
	syscallarg(struct linux_rt_sigframe *) sfp;
};

struct linux_sys_rt_sigaction_args {
	syscallarg(int) signum;
	syscallarg(struct linux_sigaction *) nsa;
	syscallarg(struct linux_sigaction *) osa;
	syscallarg(size_t) sigsetsize;
};

struct linux_sys_rt_sigprocmask_args {
	syscallarg(int) how;
	syscallarg(const linux_sigset_t *) set;
	syscallarg(linux_sigset_t *) oset;
	syscallarg(size_t) sigsetsize;
};

struct linux_sys_rt_sigpending_args {
	syscallarg(linux_sigset_t *) set;
	syscallarg(size_t) sigsetsize;
};

struct linux_sys_rt_sigsuspend_args {
	syscallarg(linux_sigset_t *) unewset;
	syscallarg(size_t) sigsetsize;
};

struct linux_sys_pread_args {
	syscallarg(int) fd;
	syscallarg(char *) buf;
	syscallarg(size_t) nbyte;
	syscallarg(linux_off_t) offset;
};

struct linux_sys_pwrite_args {
	syscallarg(int) fd;
	syscallarg(char *) buf;
	syscallarg(size_t) nbyte;
	syscallarg(linux_off_t) offset;
};

struct linux_sys_chown16_args {
	syscallarg(char *) path;
	syscallarg(int) uid;
	syscallarg(int) gid;
};

struct linux_sys_getcwd_args {
	syscallarg(char *) bufp;
	syscallarg(size_t) length;
};

struct linux_sys_sigaltstack_args {
	syscallarg(const struct linux_sigaltstack *) nss;
	syscallarg(struct linux_sigaltstack *) oss;
};

struct linux_sys_ugetrlimit_args {
	syscallarg(u_int) which;
	syscallarg(struct linux_rlimit *) rlp;
};

struct linux_sys_truncate64_args {
	syscallarg(char *) path;
	syscallarg(off_t) length;
};

struct linux_sys_stat64_args {
	syscallarg(char *) path;
	syscallarg(struct linux_stat64 *) sp;
};

struct linux_sys_lstat64_args {
	syscallarg(char *) path;
	syscallarg(struct linux_stat64 *) sp;
};

struct linux_sys_fstat64_args {
	syscallarg(int) fd;
	syscallarg(struct linux_stat64 *) sp;
};

struct linux_sys_setfsuid_args {
	syscallarg(uid_t) uid;
};

struct linux_sys_getdents64_args {
	syscallarg(int) fd;
	syscallarg(void *) dirent;
	syscallarg(unsigned) count;
};

struct linux_sys_fcntl64_args {
	syscallarg(u_int) fd;
	syscallarg(u_int) cmd;
	syscallarg(void *) arg;
};

/*
 * System call prototypes.
 */

int	sys_nosys(struct proc *, void *, register_t *);
int	sys_exit(struct proc *, void *, register_t *);
int	sys_fork(struct proc *, void *, register_t *);
int	sys_read(struct proc *, void *, register_t *);
int	sys_write(struct proc *, void *, register_t *);
int	linux_sys_open(struct proc *, void *, register_t *);
int	sys_close(struct proc *, void *, register_t *);
int	linux_sys_waitpid(struct proc *, void *, register_t *);
int	linux_sys_creat(struct proc *, void *, register_t *);
int	sys_link(struct proc *, void *, register_t *);
int	linux_sys_unlink(struct proc *, void *, register_t *);
int	linux_sys_execve(struct proc *, void *, register_t *);
int	linux_sys_chdir(struct proc *, void *, register_t *);
int	linux_sys_time(struct proc *, void *, register_t *);
int	linux_sys_mknod(struct proc *, void *, register_t *);
int	linux_sys_chmod(struct proc *, void *, register_t *);
int	linux_sys_lchown16(struct proc *, void *, register_t *);
int	linux_sys_break(struct proc *, void *, register_t *);
int	linux_sys_ostat(struct proc *, void *, register_t *);
int	compat_43_sys_lseek(struct proc *, void *, register_t *);
int	linux_sys_getpid(struct proc *, void *, register_t *);
int	linux_sys_mount(struct proc *, void *, register_t *);
int	linux_sys_umount(struct proc *, void *, register_t *);
int	sys_setuid(struct proc *, void *, register_t *);
int	linux_sys_getuid(struct proc *, void *, register_t *);
int	linux_sys_stime(struct proc *, void *, register_t *);
#ifdef PTRACE
int	linux_sys_ptrace(struct proc *, void *, register_t *);
#else
#endif
int	linux_sys_alarm(struct proc *, void *, register_t *);
int	linux_sys_ofstat(struct proc *, void *, register_t *);
int	linux_sys_pause(struct proc *, void *, register_t *);
int	linux_sys_utime(struct proc *, void *, register_t *);
int	linux_sys_stty(struct proc *, void *, register_t *);
int	linux_sys_gtty(struct proc *, void *, register_t *);
int	linux_sys_access(struct proc *, void *, register_t *);
int	linux_sys_nice(struct proc *, void *, register_t *);
int	linux_sys_ftime(struct proc *, void *, register_t *);
int	sys_sync(struct proc *, void *, register_t *);
int	linux_sys_kill(struct proc *, void *, register_t *);
int	linux_sys_rename(struct proc *, void *, register_t *);
int	linux_sys_mkdir(struct proc *, void *, register_t *);
int	linux_sys_rmdir(struct proc *, void *, register_t *);
int	sys_dup(struct proc *, void *, register_t *);
int	linux_sys_pipe(struct proc *, void *, register_t *);
int	linux_sys_times(struct proc *, void *, register_t *);
int	linux_sys_prof(struct proc *, void *, register_t *);
int	linux_sys_brk(struct proc *, void *, register_t *);
int	sys_setgid(struct proc *, void *, register_t *);
int	linux_sys_getgid(struct proc *, void *, register_t *);
int	linux_sys_signal(struct proc *, void *, register_t *);
int	sys_geteuid(struct proc *, void *, register_t *);
int	sys_getegid(struct proc *, void *, register_t *);
int	sys_acct(struct proc *, void *, register_t *);
int	linux_sys_phys(struct proc *, void *, register_t *);
int	linux_sys_lock(struct proc *, void *, register_t *);
int	linux_sys_ioctl(struct proc *, void *, register_t *);
int	linux_sys_fcntl(struct proc *, void *, register_t *);
int	linux_sys_mpx(struct proc *, void *, register_t *);
int	sys_setpgid(struct proc *, void *, register_t *);
int	linux_sys_ulimit(struct proc *, void *, register_t *);
int	linux_sys_oldolduname(struct proc *, void *, register_t *);
int	sys_umask(struct proc *, void *, register_t *);
int	sys_chroot(struct proc *, void *, register_t *);
int	linux_sys_ustat(struct proc *, void *, register_t *);
int	sys_dup2(struct proc *, void *, register_t *);
int	sys_getppid(struct proc *, void *, register_t *);
int	sys_getpgrp(struct proc *, void *, register_t *);
int	sys_setsid(struct proc *, void *, register_t *);
int	linux_sys_sigaction(struct proc *, void *, register_t *);
int	linux_sys_siggetmask(struct proc *, void *, register_t *);
int	linux_sys_sigsetmask(struct proc *, void *, register_t *);
int	linux_sys_setreuid16(struct proc *, void *, register_t *);
int	linux_sys_setregid16(struct proc *, void *, register_t *);
int	linux_sys_sigsuspend(struct proc *, void *, register_t *);
int	linux_sys_sigpending(struct proc *, void *, register_t *);
int	compat_43_sys_sethostname(struct proc *, void *, register_t *);
int	linux_sys_setrlimit(struct proc *, void *, register_t *);
int	linux_sys_getrlimit(struct proc *, void *, register_t *);
int	sys_getrusage(struct proc *, void *, register_t *);
int	sys_gettimeofday(struct proc *, void *, register_t *);
int	sys_settimeofday(struct proc *, void *, register_t *);
int	sys_getgroups(struct proc *, void *, register_t *);
int	sys_setgroups(struct proc *, void *, register_t *);
int	linux_sys_oldselect(struct proc *, void *, register_t *);
int	linux_sys_symlink(struct proc *, void *, register_t *);
int	compat_43_sys_lstat(struct proc *, void *, register_t *);
int	linux_sys_readlink(struct proc *, void *, register_t *);
int	linux_sys_uselib(struct proc *, void *, register_t *);
int	compat_25_sys_swapon(struct proc *, void *, register_t *);
int	sys_reboot(struct proc *, void *, register_t *);
int	linux_sys_readdir(struct proc *, void *, register_t *);
int	linux_sys_mmap(struct proc *, void *, register_t *);
int	sys_munmap(struct proc *, void *, register_t *);
int	linux_sys_truncate(struct proc *, void *, register_t *);
int	compat_43_sys_ftruncate(struct proc *, void *, register_t *);
int	sys_fchmod(struct proc *, void *, register_t *);
int	linux_sys_fchown16(struct proc *, void *, register_t *);
int	sys_getpriority(struct proc *, void *, register_t *);
int	sys_setpriority(struct proc *, void *, register_t *);
int	sys_profil(struct proc *, void *, register_t *);
int	linux_sys_statfs(struct proc *, void *, register_t *);
int	linux_sys_fstatfs(struct proc *, void *, register_t *);
#ifdef __i386__
int	linux_sys_ioperm(struct proc *, void *, register_t *);
#else
int	linux_sys_ioperm(struct proc *, void *, register_t *);
#endif
int	linux_sys_socketcall(struct proc *, void *, register_t *);
int	linux_sys_klog(struct proc *, void *, register_t *);
int	sys_setitimer(struct proc *, void *, register_t *);
int	sys_getitimer(struct proc *, void *, register_t *);
int	linux_sys_stat(struct proc *, void *, register_t *);
int	linux_sys_lstat(struct proc *, void *, register_t *);
int	linux_sys_fstat(struct proc *, void *, register_t *);
int	linux_sys_olduname(struct proc *, void *, register_t *);
#ifdef __i386__
int	linux_sys_iopl(struct proc *, void *, register_t *);
#else
int	linux_sys_iopl(struct proc *, void *, register_t *);
#endif
int	linux_sys_vhangup(struct proc *, void *, register_t *);
int	linux_sys_idle(struct proc *, void *, register_t *);
int	linux_sys_vm86old(struct proc *, void *, register_t *);
int	linux_sys_wait4(struct proc *, void *, register_t *);
int	linux_sys_swapoff(struct proc *, void *, register_t *);
int	linux_sys_sysinfo(struct proc *, void *, register_t *);
int	linux_sys_ipc(struct proc *, void *, register_t *);
int	sys_fsync(struct proc *, void *, register_t *);
int	linux_sys_sigreturn(struct proc *, void *, register_t *);
int	linux_sys_clone(struct proc *, void *, register_t *);
int	compat_09_sys_setdomainname(struct proc *, void *, register_t *);
int	linux_sys_uname(struct proc *, void *, register_t *);
#ifdef __i386__
int	linux_sys_modify_ldt(struct proc *, void *, register_t *);
#else
int	linux_sys_modify_ldt(struct proc *, void *, register_t *);
#endif
int	linux_sys_adjtimex(struct proc *, void *, register_t *);
int	sys_mprotect(struct proc *, void *, register_t *);
int	linux_sys_sigprocmask(struct proc *, void *, register_t *);
int	linux_sys_create_module(struct proc *, void *, register_t *);
int	linux_sys_init_module(struct proc *, void *, register_t *);
int	linux_sys_delete_module(struct proc *, void *, register_t *);
int	linux_sys_get_kernel_syms(struct proc *, void *, register_t *);
int	linux_sys_quotactl(struct proc *, void *, register_t *);
int	linux_sys_getpgid(struct proc *, void *, register_t *);
int	sys_fchdir(struct proc *, void *, register_t *);
int	linux_sys_bdflush(struct proc *, void *, register_t *);
int	linux_sys_sysfs(struct proc *, void *, register_t *);
int	linux_sys_personality(struct proc *, void *, register_t *);
int	linux_sys_afs_syscall(struct proc *, void *, register_t *);
int	linux_sys_setfsuid(struct proc *, void *, register_t *);
int	linux_sys_getfsuid(struct proc *, void *, register_t *);
int	linux_sys_llseek(struct proc *, void *, register_t *);
int	linux_sys_getdents(struct proc *, void *, register_t *);
int	linux_sys_select(struct proc *, void *, register_t *);
int	sys_flock(struct proc *, void *, register_t *);
int	sys_msync(struct proc *, void *, register_t *);
int	sys_readv(struct proc *, void *, register_t *);
int	sys_writev(struct proc *, void *, register_t *);
int	linux_sys_getsid(struct proc *, void *, register_t *);
int	linux_sys_fdatasync(struct proc *, void *, register_t *);
int	linux_sys___sysctl(struct proc *, void *, register_t *);
int	sys_mlock(struct proc *, void *, register_t *);
int	sys_munlock(struct proc *, void *, register_t *);
int	linux_sys_mlockall(struct proc *, void *, register_t *);
int	linux_sys_munlockall(struct proc *, void *, register_t *);
int	linux_sys_sched_setparam(struct proc *, void *, register_t *);
int	linux_sys_sched_getparam(struct proc *, void *, register_t *);
int	linux_sys_sched_setscheduler(struct proc *, void *, register_t *);
int	linux_sys_sched_getscheduler(struct proc *, void *, register_t *);
int	linux_sys_sched_yield(struct proc *, void *, register_t *);
int	linux_sys_sched_get_priority_max(struct proc *, void *, register_t *);
int	linux_sys_sched_get_priority_min(struct proc *, void *, register_t *);
int	linux_sys_sched_rr_get_interval(struct proc *, void *, register_t *);
int	sys_nanosleep(struct proc *, void *, register_t *);
int	linux_sys_mremap(struct proc *, void *, register_t *);
int	linux_sys_setresuid16(struct proc *, void *, register_t *);
int	linux_sys_getresuid16(struct proc *, void *, register_t *);
int	linux_sys_vm86(struct proc *, void *, register_t *);
int	linux_sys_query_module(struct proc *, void *, register_t *);
int	sys_poll(struct proc *, void *, register_t *);
int	linux_sys_nfsservctl(struct proc *, void *, register_t *);
int	linux_sys_setresgid16(struct proc *, void *, register_t *);
int	linux_sys_getresgid16(struct proc *, void *, register_t *);
int	linux_sys_prctl(struct proc *, void *, register_t *);
int	linux_sys_rt_sigreturn(struct proc *, void *, register_t *);
int	linux_sys_rt_sigaction(struct proc *, void *, register_t *);
int	linux_sys_rt_sigprocmask(struct proc *, void *, register_t *);
int	linux_sys_rt_sigpending(struct proc *, void *, register_t *);
int	linux_sys_rt_sigtimedwait(struct proc *, void *, register_t *);
int	linux_sys_rt_queueinfo(struct proc *, void *, register_t *);
int	linux_sys_rt_sigsuspend(struct proc *, void *, register_t *);
int	linux_sys_pread(struct proc *, void *, register_t *);
int	linux_sys_pwrite(struct proc *, void *, register_t *);
int	linux_sys_chown16(struct proc *, void *, register_t *);
int	linux_sys_getcwd(struct proc *, void *, register_t *);
int	linux_sys_capget(struct proc *, void *, register_t *);
int	linux_sys_capset(struct proc *, void *, register_t *);
int	linux_sys_sigaltstack(struct proc *, void *, register_t *);
int	linux_sys_sendfile(struct proc *, void *, register_t *);
int	linux_sys_getpmsg(struct proc *, void *, register_t *);
int	linux_sys_putpmsg(struct proc *, void *, register_t *);
int	sys_vfork(struct proc *, void *, register_t *);
int	linux_sys_ugetrlimit(struct proc *, void *, register_t *);
int	linux_sys_mmap2(struct proc *, void *, register_t *);
int	linux_sys_truncate64(struct proc *, void *, register_t *);
int	sys_ftruncate(struct proc *, void *, register_t *);
int	linux_sys_stat64(struct proc *, void *, register_t *);
int	linux_sys_lstat64(struct proc *, void *, register_t *);
int	linux_sys_fstat64(struct proc *, void *, register_t *);
int	linux_sys_lchown(struct proc *, void *, register_t *);
int	linux_sys_getuid(struct proc *, void *, register_t *);
int	linux_sys_getgid(struct proc *, void *, register_t *);
int	sys_geteuid(struct proc *, void *, register_t *);
int	sys_getegid(struct proc *, void *, register_t *);
int	linux_sys_setreuid(struct proc *, void *, register_t *);
int	linux_sys_setregid(struct proc *, void *, register_t *);
int	sys_getgroups(struct proc *, void *, register_t *);
int	sys_setgroups(struct proc *, void *, register_t *);
int	linux_sys_fchown(struct proc *, void *, register_t *);
int	sys_setresuid(struct proc *, void *, register_t *);
int	sys_getresuid(struct proc *, void *, register_t *);
int	sys_setresgid(struct proc *, void *, register_t *);
int	sys_getresgid(struct proc *, void *, register_t *);
int	linux_sys_chown(struct proc *, void *, register_t *);
int	sys_setuid(struct proc *, void *, register_t *);
int	sys_setgid(struct proc *, void *, register_t *);
int	linux_sys_setfsuid(struct proc *, void *, register_t *);
int	linux_sys_setfsgid(struct proc *, void *, register_t *);
int	linux_sys_pivot_root(struct proc *, void *, register_t *);
int	linux_sys_mincore(struct proc *, void *, register_t *);
int	linux_sys_madvise(struct proc *, void *, register_t *);
int	linux_sys_getdents64(struct proc *, void *, register_t *);
int	linux_sys_fcntl64(struct proc *, void *, register_t *);
