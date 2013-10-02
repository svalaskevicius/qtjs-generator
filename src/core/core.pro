
include (../qtjs.pri)

QT += core
TEMPLATE = lib

TARGET=qtjs_core

QMAKE_CXXFLAGS += -DBUILDING_DLL

SOURCES += $$files(../../metagen/build/QtCore/src/*.cpp) 

