
include (../../src/runner/runner.pri)

TARGET = features
CONFIG   += console network
CONFIG   -= app_bundle

TEMPLATE = app

CONFIG -= release
CONFIG += debug

INCLUDEPATH += $${ROOT}/tests/lib/catch/single_include $${ROOT}/tests/lib/turtle

SOURCES += \
    main.cpp

HEADERS += \
    eventDispatcher.h
