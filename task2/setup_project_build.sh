#!/bin/bash

#Setup
aclocal
autoconf
automake --add-missing
./configure

echo "SETUP COMPLETED"