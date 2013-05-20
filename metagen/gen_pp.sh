#!/bin/bash

MYDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
QTINC="$( readlink -f "$1" )"

if ! test -d "$QTINC" ; then
    echo "qt dir not specified." >&2
    exit 1
fi


function prepare_file() {
    perl -e '
    open FH, @ARGV[0] ;
    my $s="";
    while (<FH>) {
        $s .= $_;
    }
    close FH;

    $s =~ s/Q_DISABLE_COPY\s*\((.*?)\)/\1(const \1 &){} \1 &operator=(const \1 &){}/g;
    $s =~ s/Q_STATIC_ASSERT(?:_X)?(\((?:[^()]+|(?1))*\))//g;
    $s =~ s/Q_DECL_NOEXCEPT_EXPR(\((?:[^()]+|(?1))*\))//g;
    $s =~ s/QT_ASCII_CAST_WARN//g;
    $s =~ s/Q_DECLARE_FLAGS\s*\(([^,()]+),\s*([^,()]+)\)/typedef QFlags<\2> \1;/g;

    open FH, ">".@ARGV[0];
    print FH $s;
    close FH;' "$1"
}

rm -Rf qtheaders xml build

cp -R "$QTINC" qtheaders
for f in $(find qtheaders -type f) ; do
    prepare_file "$f"
    echo -n .
done
echo ""

mkdir xml
doxygen qtCore.doxyfile

find xml -type f -name '*.xml' -exec perl -p -i -e "s#$MYDIR/qtheaders#$QTINC#g" '{}' \;

