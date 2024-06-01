SUBDIRS = upper_lower

bin_PROGRAMS = main
main_SOURCES = main.cpp
main_LDFLAGS = -all-static

main_LDADD = \
    upper_lower/libupper_lower.la

#   upper_lower/libupper_lower.so  "error: 'libupper_lower.so' is not a standard libtool module name"
#Wants .la