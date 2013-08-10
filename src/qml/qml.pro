
include (../qtjs.pri)
QT += core qml quick
TEMPLATE = lib

TARGET=qtjs_qml

INCLUDEPATH += \
    ../../metagen/build/QtQml/include

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtQml/src/*.cpp) 

