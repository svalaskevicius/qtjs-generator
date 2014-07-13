
include (../qtjs-plugin.pri)

QT += core qml quick core-private qml-private quick-private gui-private quickwidgets quickwidgets-private
TEMPLATE = lib

TARGET=qtjs_qml

#PRECOMPILED_HEADER = precompiledIncludes.h
#CONFIG += precompile_header

CONFIG(debug, debug|release) {
    CONFIG += declarative_debug qml_debug
}

LIBPATH += $${BUILD}/src/core/
LIBS += -lqtjs_core

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtQml/src/*.cpp) 

HEADERS += \
    ../../include/qtQml_cpgf_compat.h \
    $$files(../../metagen/build/QtQml/include/*.h) \
    precompiledIncludes.h


OTHER_FILES += \
    ../../metagen/qtQml_cfg.js

