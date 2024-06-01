#la- was forced by automake. So, I dont know how to build the .so
lib_LTLIBRARIES = libupper_lower.la

libupper_lower_la_SOURCES = upper.cpp upper.h lower.cpp lower.h

# Specifying that this is a shared library
libupper_lower_la_LDFLAGS = -version-info 0:0:0 -no-undefined

##ldconfig is executed, in order to force-update shared-library cache on "make install"
install-exec-hook:
	@echo "Running ldconfig..."
	ldconfig