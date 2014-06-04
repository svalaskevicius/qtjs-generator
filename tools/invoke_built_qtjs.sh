#!/bin/bash

MYDIR=$(dirname "$(readlink -f "$0")")
TOPDIR="$MYDIR/.."
MYNAME=$(basename "$0")

export LD_LIBRARY_PATH="$TOPDIR/lib/cpgf-build/build:$TOPDIR/build/src/core:$TOPDIR/build/src/widgets:$TOPDIR/build/src/qml:$TOPDIR/build/src/gui:$TOPDIR/lib/node/deps/v8/out/native/lib.target/"

PRECMD=''
ARGS=()
NODE_ARGS=()
while test "$#" -gt 0 ; do
    case "$1" in
        '--gdb')
            PRECMD="gdb --args"
            ;;
        '--lldb')
            PRECMD="lldb-3.4"
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
        '--helgrind')
            PRECMD="valgrind --tool=helgrind"
            ;;
        '--drd')
            PRECMD="valgrind --tool=drd"
            ;;
        '--massif')
            PRECMD="valgrind --tool=massif"
            ;;
        *) ARGS+=("$1")
            ;;
    esac
    shift
done

CMD=""
case "$MYNAME" in
    "spec")
        CMD="$TOPDIR/build/tests/spec/spec"
        ;;
    "features")
        CMD="$TOPDIR/build/tests/features/features"
        ;;
    *) 
        CMD="$TOPDIR/build/src/runner/qtjs"
        NODE_ARGS+=("--harmony")
        ;;
esac

export ASAN_OPTIONS="abort_on_error=1 alloc_dealloc_mismatch=0"

$PRECMD "$CMD" ${NODE_ARGS[@]} ${ARGS[@]}

exit $?

