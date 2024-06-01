#Task 3

AUTOMAKE_OPTIONS = foreign
SUBDIRS = task1 task2

TO_REMOVE_ON_CLEANUP =	\
	config.log \
	autom4te.cache \
	missing \
	aclocal.m4 \
	compile \
	depcomp \
	deps \
	src/.deps \
	src/.dirstamp \
	.dirstamp \
	configure \
	configure~ \
	install-sh \
	Makefile \
	Makefile.in \
	config.status

.PHONY: clean-all

clean-all: clean uninstall
	rm -rf $(TO_REMOVE_ON_CLEANUP)