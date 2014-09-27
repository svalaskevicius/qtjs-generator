
include (../qtjs-plugin.pri)

QT += core gui widgets
TEMPLATE = lib

TARGET=qtjs_widgets

#PRECOMPILED_HEADER = precompiledIncludes.h
#CONFIG += precompile_header

LIBPATH += $${BUILD}/src/core/
LIBS += -lqtjs_core

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtWidgets/src/*.cpp) \ 
    metaObjectLifeManager.cpp

HEADERS += \
    ../../include/qtWidgets_cpgf_compat.h \
    $$files(../../metagen/build/QtWidgets/include/*.h) \
    precompiledIncludes.h


OTHER_FILES += \
    ../../metagen/qtWidgets_cfg.js

