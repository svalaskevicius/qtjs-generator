
include (../qtjs.pri)
QT += core qml quick
TEMPLATE = lib

TARGET=qtjs_qml

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtQml/src/*.cpp) 

