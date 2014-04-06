#!/bin/sh

QTINC="$( readlink -f "$1" )"

if ! test -d "$QTINC" ; then
    echo "qt dir not specified." >&2
    exit 1
fi

java -cp "../lib/cpgf/tools/metagen/tool/bin:../lib/cpgf/tools/metagen/js.jar" metagen --config qtCore_cfg.js --xml xml/index.xml
java -cp "../lib/cpgf/tools/metagen/tool/bin:../lib/cpgf/tools/metagen/js.jar" metagen --config qtWidgets_cfg.js --xml xml/index.xml
java -cp "../lib/cpgf/tools/metagen/tool/bin:../lib/cpgf/tools/metagen/js.jar" metagen --config qtQml_cfg.js --xml xml/index.xml
java -cp "../lib/cpgf/tools/metagen/tool/bin:../lib/cpgf/tools/metagen/js.jar" metagen --config qtGui_cfg.js --xml xml/index.xml

find build/ -type f -name '*.cpp' -exec perl -p -i -e "s#\"$QTINC/?(.*?)\"#<\1>#g" '{}' \;

