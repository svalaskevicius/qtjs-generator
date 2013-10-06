
include (../qtjs.pri)

QT += core
TEMPLATE = lib

TARGET=qtjs_core

QMAKE_CXXFLAGS += -DBUILDING_DLL

SOURCES += $$files(../../metagen/build/QtCore/src/*.cpp) 

HEADERS += \
    ../../include/qt_cpgf_compat.h \
    ../../include/ObjectLifeManagerAutoTree.h \
    ../../include/_base.h \
    ../../include/qtCore_cpgf_compat.h

