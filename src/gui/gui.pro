
include (../qtjs.pri)
QT += core gui
TEMPLATE = lib

TARGET=qtjs_gui

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtGui/src/*.cpp) 

HEADERS += \
    ../../include/qtGui_cpgf_compat.h

OTHER_FILES += \
    ../../metagen/qtGui_cfg.js

