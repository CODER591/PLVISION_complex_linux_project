#!/bin/bash

#Setup
aclocal
autoconf
automake --add-missing
#automake --add-missing --copy --force-missing
autoreconf -ivf
./configure

echo "SETUP COMPLETED"