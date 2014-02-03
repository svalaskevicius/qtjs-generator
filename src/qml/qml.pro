
include (../qtjs.pri)
QT += core qml quick
TEMPLATE = lib

TARGET=qtjs_qml

#PRECOMPILED_HEADER = precompiledIncludes.h
#CONFIG += precompile_header

contains(QT_CONFIG, debug) {
    CONFIG += declarative_debug qml_debug
}

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtQml/src/*.cpp) 

HEADERS += \
    ../../include/qtQml_cpgf_compat.h \
    $$files(../../metagen/build/QtQml/include/*.h) \
    precompiledIncludes.h


OTHER_FILES += \
    ../../metagen/qtQml_cfg.js

