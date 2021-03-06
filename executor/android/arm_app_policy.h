// Copyright 2016 syzkaller project authors. All rights reserved.
// Use of this source code is governed by Apache 2 LICENSE that can be found in the LICENSE file.

// File autogenerated by genseccomp.py from Android Q - edit at your peril!!

const struct sock_filter arm_app_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 0, 0, 136),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 190, 67, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 85, 33, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 45, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 26, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 10, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 8, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 7, 128, 127), //restart_syscall|exit|fork|read|write|open|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 9, 127, 126), //creat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 13, 126, 125), //unlink|execve|chdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 24, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 21, 124, 123), //lseek|getpid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 25, 123, 122), //getuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 36, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 33, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 27, 120, 119), //ptrace
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 34, 119, 118), //access
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 40, 117, 116), //sync|kill|rename|mkdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 44, 116, 115), //dup|pipe|times
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 63, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 57, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 54, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 46, 112, 111), //brk
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 56, 111, 110), //ioctl|fcntl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 60, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 109, 108), //setpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 61, 108, 107), //umask
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 75, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 66, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 65, 105, 104), //dup2|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 68, 104, 103), //setsid|sigaction
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 77, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 76, 102, 101), //setrlimit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 79, 101, 100), //getrusage|gettimeofday
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 125, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 114, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 96, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 94, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 91, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 86, 95, 94), //readlink
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 93, 94, 93), //munmap|truncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 95, 93, 92), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 104, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 98, 91, 90), //getpriority|setpriority
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 106, 90, 89), //setitimer|getitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 118, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 116, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 115, 87, 86), //wait4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 117, 86, 85), //sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 122, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 121, 84, 83), //fsync|sigreturn|clone
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 123, 83, 82), //uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 150, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 136, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 131, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 126, 79, 78), //mprotect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 134, 78, 77), //quotactl|getpgid|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 140, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 137, 76, 75), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 149, 75, 74), //_llseek|getdents|_newselect|flock|msync|readv|writev|getsid|fdatasync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 172, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 168, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 164, 72, 71), //mlock|munlock|mlockall|munlockall|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|nanosleep|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 169, 71, 70), //poll
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 183, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 182, 69, 68), //prctl|rt_sigreturn|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|pread64|pwrite64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 188, 68, 67), //getcwd|capget|capset|sigaltstack|sendfile
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 322, 33, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 256, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 207, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 205, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 199, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 61, 60), //vfork|ugetrlimit|mmap2|truncate64|ftruncate64|stat64|lstat64|fstat64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 203, 60, 59), //getuid32|getgid32|geteuid32|getegid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 206, 59, 58), //getgroups32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 211, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 210, 57, 56), //fchown32|setresuid32|getresuid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 212, 56, 55), //getresgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 224, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 219, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 218, 53, 52), //getdents64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 222, 52, 51), //mincore|madvise|fcntl64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 250, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 249, 50, 49), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill|sendfile64|futex|sched_setaffinity|sched_getaffinity|io_setup|io_destroy|io_getevents|io_submit|io_cancel|exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 254, 49, 48), //epoll_create|epoll_ctl|epoll_wait|remap_file_pages
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 286, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 270, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 263, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 262, 45, 44), //set_tid_address|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 269, 44, 43), //clock_gettime|clock_getres|clock_nanosleep|statfs64|fstatfs64|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 280, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 271, 42, 41), //arm_fadvise64_64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 285, 41, 40), //waitid|socket|bind|connect|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 292, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 290, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 289, 38, 37), //getsockname|getpeername|socketpair
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 291, 37, 36), //sendto
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 316, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 298, 35, 34), //recvfrom|shutdown|setsockopt|getsockopt|sendmsg|recvmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 319, 34, 33), //inotify_init|inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 387, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 350, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 345, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 340, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 327, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 326, 28, 27), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 338, 27, 26), //fstatat64|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 344, 26, 25), //splice|sync_file_range2|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 348, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 347, 24, 23), //getcpu|epoll_pwait
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 349, 23, 22), //utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 373, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 369, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 367, 20, 19), //timerfd_create|eventfd|fallocate|timerfd_settime|timerfd_gettime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|recvmmsg|accept4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 370, 19, 18), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 380, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 378, 17, 16), //syncfs|sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 386, 16, 15), //sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 417, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 397, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 389, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 388, 12, 11), //execveat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 394, 11, 10), //membarrier|mlock2|copy_file_range|preadv2|pwritev2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 403, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 398, 9, 8), //statx
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 415, 8, 7), //clock_gettime64|clock_settime64|clock_adjtime64|clock_getres_time64|clock_nanosleep_time64|timer_gettime64|timer_settime64|timerfd_gettime64|timerfd_settime64|utimensat_time64|pselect6_time64|ppoll_time64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983042, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 420, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 418, 5, 4), //recvmmsg_time64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 424, 4, 3), //semtimedop_time64|rt_sigtimedwait_time64|futex_time64|sched_rr_get_interval_time64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983045, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983043, 2, 1), //__ARM_NR_cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983046, 1, 0), //__ARM_NR_set_tls
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

#define arm_app_filter_size (sizeof(arm_app_filter) / sizeof(struct sock_filter))
