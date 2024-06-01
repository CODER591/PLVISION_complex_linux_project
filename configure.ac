#Task 3
AC_INIT([Task3CompileT1T2], [1.0], [mazorchyk@gmail.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AM_CONDITIONAL([LINUX], [test $(uname) -eq "Linux"])
AC_PROG_RANLIB
AC_PROG_CXX
AM_PROG_AR
AC_PROG_LIBTOOL

AC_CONFIG_FILES([Makefile \
                task1/src/factorial_sqrt/Makefile \
                task1/src/multiply_divide/Makefile \
                tasl1/src/sum_substract/Makefile \
                task2/src/Makefile \ 
                task2/src/upper_lower/Makefile])

AC_OUTPUT