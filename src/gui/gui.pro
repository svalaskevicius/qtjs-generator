
include (../qtjs-plugin.pri)

QT += core widgets gui gui-private
TEMPLATE = lib

TARGET=qtjs_gui

#PRECOMPILED_HEADER = precompiledIncludes.h
#CONFIG += precompile_header

LIBPATH += $${BUILD}/src/core/
LIBS += -lqtjs_core

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtGui/src/*.cpp) 

HEADERS += \
    ../../include/qtGui_cpgf_compat.h \
    $$files(../../metagen/build/QtGui/include/*.h) \
    precompiledIncludes.h

OTHER_FILES += \
    ../../metagen/qtGui_cfg.js

