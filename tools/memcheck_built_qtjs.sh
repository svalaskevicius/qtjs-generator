#!/bin/sh

MYDIR=$(dirname "$0")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/src/core:$TOPDIR/build/src/widgets:$TOPDIR/build/src/qml:$TOPDIR/build/src/gui:$TOPDIR/lib/node/deps/v8/out/native/lib.target/"

valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-reachable=yes --suppressions="$MYDIR"/.valgrind.suppress --gen-suppressions=all --log-file="$TOPDIR/build/memcheck.log" "$TOPDIR/build/src/runner/qtjs" "$@" &
# valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-reachable=yes --suppressions="$MYDIR"/.valgrind.suppress --gen-suppressions=all --xml=yes --xml-file="$TOPDIR/build/memcheck.xml" "$TOPDIR/build/src/runner/qtjs" "$@" &

wait

exit $?

