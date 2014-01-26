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
        $s =~ s/(?<!define )(?<!Q_OBJECT_FAKE )\bQ_OBJECT\b/public: static const QMetaObject staticMetaObject; virtual const QMetaObject *metaObject() const; virtual void *qt_metacast(const char *); static inline QString tr(const char *s, const char *c = 0, int n = -1); virtual int qt_metacall(QMetaObject::Call, int, void **); private: /g;

        $s =~ s/class QByteArray;//g;
        $s =~ s/template\s*<(class|typename)\s*T>\s*class\s*QList;//g;
        $s =~ s/template\s*<(class|typename)\s*Key,\s*(class|typename)\s*(T|Value)> class QMap;//g;
        $s =~ s/class QString;//g;
        $s =~ s/class QStringList;//g;
        $s =~ s/class QVariant;//g;

        $s =~ s/\r/\n/g;

        # remove constructor initialisers:
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

        # transplant QMetaObject::Connection to its parent class:
        $s =~ s/
            (struct\s+Q_CORE_EXPORT\s+QMetaObject\s*\{\s*)
            (class\s+Connection)
            (.*?)
            class\s+Q_CORE_EXPORT\s+QMetaObject::Connection\s*\{
            ((?&TEXT))
            \};

              (?(DEFINE)
                 (?<WORD>      \s* [^{}]+ )
                 (?<BRACKETED> \s* \{ (?&TEXT)? \s* \} )
                 (?<TEXT>      (?: (?&WORD) | (?&BRACKETED) )+ )
              )
            /\1\2 {\4}\3/xms;


        open my $fh, ">".$filename;
        print $fh $s;
        close $fh;

        print ".\n"
        
    }
    '
}

rm -Rf qtheaders xml 

cp -R "$QTINC" qtheaders

pushd qtheaders
rm -R QtCLucene QtConcurrent QtDBus QtDeclarative QtDesigner QtDesignerComponents \
      QtHelp QtMultimedia QtMultimediaQuick_p QtMultimediaWidgets QtNetwork QtOpenGL \
      QtPlatformSupport QtPrintSupport \
      QtScript QtScriptTools QtSql QtSvg QtTest QtUiTools QtWebKit \
      QtWebKitWidgets QtXml QtXmlPatterns QtZlib
popd

find qtheaders -type f | prepare_files

doxygen qt.doxyfile

find xml -type f -name '*.xml' -exec perl -p -i -e "s#$MYDIR/qtheaders#$QTINC#g" '{}' \;

./metagen.sh "$QTINC"

