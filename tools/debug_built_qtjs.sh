#!/bin/sh

MYDIR=$(dirname "$0")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/src/core:$TOPDIR/build/src/widgets:$TOPDIR/build/src/qml:$TOPDIR/build/src/gui:$TOPDIR/lib/node/deps/v8/out/native/lib.target/"

gdb --args "$TOPDIR/build/src/runner/qtjs" "$@"

exit $?

