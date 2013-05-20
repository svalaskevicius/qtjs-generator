#!/bin/sh

java -cp "../lib/cpgf/tools/metagen/tool/bin:../lib/cpgf/tools/metagen/js.jar" metagen --config qtCore_cfg.js --xml xml/index.xml
java -cp "../lib/cpgf/tools/metagen/tool/bin:../lib/cpgf/tools/metagen/js.jar" metagen --config qtWidgets_cfg.js --xml xml/index.xml

