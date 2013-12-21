
include (../../src/runner/runner.pri)

TARGET = spec
CONFIG   += console
CONFIG   -= app_bundle

CONFIG -= release
CONFIG += debug

TEMPLATE = app

INCLUDEPATH += $${ROOT}/tests/lib/catch/single_include $${ROOT}/tests/lib/turtle $$ROOT/lib/qt-event-dispatcher-libuv/src/

SOURCES += \
    main.cpp \
    $$files($$ROOT/lib/qt-event-dispatcher-libuv/spec/*.cpp)

HEADERS += \
    test_setup.h

