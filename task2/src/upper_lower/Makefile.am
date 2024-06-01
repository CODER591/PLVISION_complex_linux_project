# .la was forced by automake.
lib_LTLIBRARIES = libupper_lower.la
libupper_lower_la_SOURCES = upper.cpp upper.h lower.cpp lower.h
libupper_lower_la_LDFLAGS = -module -avoid-version -shared

# .SO
# lib_LTLIBRARIES = libupper_lower.so
# libupper_lower_so_SOURCES = upper.cpp upper.h lower.cpp lower.h

# # .so is called Shared Module
# libupper_lower_so_LDFLAGS = -module -avoid-version -shared

##ldconfig is executed, in order to force-update shared-library cache on "make install"
install-exec-hook:
	@echo "Running ldconfig..."
	ldconfig