
include (../src/runner/runner.pri)

TARGET = spec
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += ./lib/igloo

SOURCES += \
    spec.cpp
