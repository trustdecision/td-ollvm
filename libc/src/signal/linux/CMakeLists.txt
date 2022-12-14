
add_entrypoint_object(
  raise
  SRCS
    raise.cpp
  HDRS
    signal.h
    ../raise.h
  DEPENDS
    libc.include.signal
    libc.include.sys_syscall
    libc.src.__support.OSUtil.osutil
)

add_object_library(
  __restore
  SRCS
    __restore.cpp
  COMPILE_OPTIONS
    -fomit-frame-pointer
    -O3
    -Wframe-larger-than=0
    -Werror
    -Wno-attributes
    # asan creates asan.module_ctor which uses stack space, causing warnings.
    -fno-sanitize=address
  DEPENDS
    libc.include.sys_syscall
    libc.src.__support.OSUtil.osutil
)

add_entrypoint_object(
  sigaction
  SRCS
    sigaction.cpp
  HDRS
    signal.h
    ../sigaction.h
  DEPENDS
    .__restore
    libc.include.signal
    libc.include.sys_syscall
    libc.src.__support.OSUtil.osutil
    libc.src.errno.__errno_location
)

add_entrypoint_object(
  sigprocmask
  SRCS
    sigprocmask.cpp
  HDRS
    signal.h
    ../sigprocmask.h
  DEPENDS
    libc.include.signal
    libc.include.sys_syscall
    libc.src.__support.OSUtil.osutil
    libc.src.errno.__errno_location
)

add_entrypoint_object(
  sigemptyset
  SRCS
    sigemptyset.cpp
  HDRS
    signal.h
    ../sigemptyset.h
  DEPENDS
    libc.include.errno
    libc.include.signal
    libc.src.errno.__errno_location
)

add_entrypoint_object(
  sigaddset
  SRCS
    sigaddset.cpp
  HDRS
    signal.h
    ../sigaddset.h
  DEPENDS
    libc.include.errno
    libc.include.signal
    libc.src.errno.__errno_location
)

add_entrypoint_object(
  signal
  SRCS
    signal.cpp
  HDRS
    signal.h
    ../signal.h
  DEPENDS
    .sigaction
    libc.include.signal
)

add_entrypoint_object(
  sigfillset
  SRCS
    sigfillset.cpp
  HDRS
    signal.h
    ../sigfillset.h
  DEPENDS
    libc.include.errno
    libc.include.signal
    libc.src.errno.__errno_location
)

add_entrypoint_object(
  sigdelset
  SRCS
    sigdelset.cpp
  HDRS
    signal.h
    ../sigdelset.h
  DEPENDS
    libc.include.errno
    libc.include.signal
    libc.src.errno.__errno_location
)
