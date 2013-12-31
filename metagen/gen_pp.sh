#!/bin/bash

MYDIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
QTINC="$( readlink -f "$1" )"

if ! test -d "$QTINC" ; then
    echo "qt dir not specified." >&2
    exit 1
fi


function prepare_files() {
    perl -e '
    use strict;
    local $| = 1;
    foreach my $filename (<STDIN>) {
        $filename =~ s/^\s+//;
        $filename =~ s/\s+$//;
        my $s="";

        print "processing $filename..";
        open (my $fh, $filename);
        while (my $line = <$fh>) {
            $s .= $line;
        }
        close $fh;

        $s =~ s/Q_DISABLE_COPY\s*\((.*?)\)/\1(const \1 &){} \1 &operator=(const \1 &){}/g;
        $s =~ s/Q_STATIC_ASSERT(?:_X)?(\((?:[^()]+|(?1))*\))//g;
        $s =~ s/Q_DECL_NOEXCEPT_EXPR(\((?:[^()]+|(?1))*\))//g;
        $s =~ s/QT_ASCII_CAST_WARN//g;
        $s =~ s/Q_WIDGETS_EXPORT//g;
        $s =~ s/Q_SLOTS//g;
        $s =~ s/Q_INVOKABLE//g;
        $s =~ s/Q_SIGNALS://g;
        $s =~ s/Q_REVISION\s*\(\s*[0-9]+\s*\)//g;
        $s =~ s/Q_DECLARE_FLAGS\s*\(([^,()]+),\s*([^,()]+)\)/typedef QFlags<\2> \1;/g;

        $s =~ s/class QByteArray;//g;
        $s =~ s/template<(class|typename)\s*T>\s*class\s*QList;//g;
        $s =~ s/template<(class|typename)\s*Key,\s*(class|typename)\s*Value> class QMap;//g;
        $s =~ s/class QString;//g;
        $s =~ s/class QStringList;//g;
        $s =~ s/class QVariant;//g;

        $s =~ s/\r/\n/g;

        $s =~ s/
            (
                (
                    [{;}]
                |
                    (public|protected|private):
                |
                    template[\s\n]*<.*?>
                )
                [\s\n]*
                ((explicit|inline)[\s\n]*)?
                [a-zA-Z0-9_]+
                \s*
                \((.|\n)*?\)
            )
            [\s\n]*
            :
            (
                \s*
                (
                    (^\s*\#.*$)
                |
                    [\s\n,]*
                    [a-zA-Z0-9_]+
                    [\s\n]*
                    \(
                        .*?
                    \)
                )
            )+
            [\s\n]*
            \{
            /\1 {/xgm;

        open my $fh, ">".$filename;
        print $fh $s;
        close $fh;

        print ".\n"
        
    }
    '
}

rm -Rf qtheaders xml build

cp -R "$QTINC" qtheaders

pushd qtheaders
rm -R QtCLucene QtConcurrent QtDBus QtDeclarative QtDesigner QtDesignerComponents \
      QtHelp QtMultimedia QtMultimediaQuick_p QtMultimediaWidgets QtNetwork QtOpenGL \
      QtPlatformSupport QtPrintSupport QtQmlDevTools \
      QtScript QtScriptTools QtSql QtSvg QtTest QtUiTools QtV8 QtWebKit \
      QtWebKitWidgets QtXml QtXmlPatterns QtZlib
popd

find qtheaders -type f | prepare_files

doxygen qt.doxyfile

find xml -type f -name '*.xml' -exec perl -p -i -e "s#$MYDIR/qtheaders#$QTINC#g" '{}' \;

