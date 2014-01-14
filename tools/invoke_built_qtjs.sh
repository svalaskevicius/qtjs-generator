#!/bin/bash

MYDIR=$(dirname "$(readlink -f "$0")")
TOPDIR="$MYDIR/.."

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf/lib:$TOPDIR/build/src/core:$TOPDIR/build/src/widgets:$TOPDIR/build/src/qml:$TOPDIR/build/src/gui:$TOPDIR/lib/node/deps/v8/out/native/lib.target/"

PRECMD=''
ARGS=()
while test "$#" -gt 0 ; do
    case "$1" in
        '--gdb')
            PRECMD="gdb --args"
            ;;
        '--memcheck')
            PRECMD="valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-reachable=yes --suppressions=$MYDIR/.valgrind.suppress --gen-suppressions=all --log-file=$TOPDIR/build/memcheck.log"
            ;;
        '--memcheck-gdb')
            PRECMD="valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-reachable=yes --suppressions=$MYDIR/.valgrind.suppress --gen-suppressions=all --log-file=$TOPDIR/build/memcheck.log --vgdb-error=0"
            ;;
        '--callgrind')
            PRECMD="valgrind --tool=callgrind"
            ;;
        '--massif')
            PRECMD="valgrind --tool=massif"
            ;;
        *) ARGS+=("$1")
            ;;
    esac
    shift
done
$PRECMD "$TOPDIR/build/src/runner/qtjs" ${ARGS[@]}

exit $?

