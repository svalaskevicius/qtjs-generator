
include (../qtjs.pri)
QT += core qml quick
TEMPLATE = lib

TARGET=qtjs_qml

CONFIG += release

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtQml/src/*.cpp) 

HEADERS += \
    ../../include/qtQml_cpgf_compat.h

OTHER_FILES += \
    ../../metagen/qtQml_cfg.js

