
include (../qtjs.pri)
QT += core gui widgets
TEMPLATE = lib

TARGET=qtjs_widgets

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtWidgets/src/*.cpp) 

HEADERS += \
    ../../include/qtWidgets_cpgf_compat.h

OTHER_FILES += \
    ../../metagen/qtWidgets_cfg.js

