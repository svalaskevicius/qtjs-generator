
include (../qtjs.pri)
QT += core gui widgets
TEMPLATE = lib

TARGET=qtjs_widgets

CONFIG += release

QMAKE_CXXFLAGS += -DBUILDING_DLL 

SOURCES += $$files(../../metagen/build/QtWidgets/src/*.cpp) \ 
    metaObjectLifeManager.cpp

HEADERS += \
    ../../include/qtWidgets_cpgf_compat.h \
    $$files(../../metagen/build/QtWidgets/include/*.h)


OTHER_FILES += \
    ../../metagen/qtWidgets_cfg.js

