#!/bin/sh

MYDIR=$(dirname "$0")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/core:$TOPDIR/build/widgets"

valgrind --tool=memcheck --leak-check=full --show-reachable=yes --suppressions="$MYDIR"/.valgrind.suppress --gen-suppressions=all --log-file="$TOPDIR/build/memcheck.log" "$TOPDIR/build/runner/qtjs" "$@"

exit $?

