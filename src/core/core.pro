
include (../qtjs.pri)

QT += core
TEMPLATE = lib

TARGET=qtjs_core

SOURCES += QtSignalConnector.cpp

SOURCES += $$files(../../metagen/build/QtCore/src/*.cpp) 

