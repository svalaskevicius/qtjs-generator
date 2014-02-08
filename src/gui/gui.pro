
include (../qtjs-plugin.pri)

QT += core gui
TEMPLATE = lib

TARGET=qtjs_gui

#PRECOMPILED_HEADER = precompiledIncludes.h
#CONFIG += precompile_header


QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtGui/src/*.cpp) 

HEADERS += \
    ../../include/qtGui_cpgf_compat.h \
    $$files(../../metagen/build/QtGui/include/*.h) \
    precompiledIncludes.h

OTHER_FILES += \
    ../../metagen/qtGui_cfg.js

