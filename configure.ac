#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([hello],[1.0.0],[weiju.wu@gmail.com])

AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([src/hello.c])

# we allow for cross-compilation
AC_CANONICAL_HOST
if [test $host_os = 'amigaos' -a $host_cpu = 'm68k']; then
  echo "We are cross-compiling Amiga stuff !"
  CC=vc
  CFLAGS=+aos68k
fi
if [test $host_os = 'aros' -a $host_cpu = 'i386']; then
  echo "We are cross-compiling for AROS !"
  CC=$AROS_SDK_HOME/bin/x86_64-aros-gcc
fi

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_C_BIGENDIAN

# Checks for library functions.

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
