#!/bin/sh

MYDIR=$(dirname "$0")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/core:$TOPDIR/build/widgets:$TOPDIR/build/qml:$TOPDIR/build/gui"

gdb --args "$TOPDIR/build/runner/qtjs" "$@"

exit $?

