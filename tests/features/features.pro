
include (../../src/runner/runner.pri)

TARGET = features
CONFIG   += console network
CONFIG   -= app_bundle

TEMPLATE = app

CONFIG -= release
CONFIG += debug

INCLUDEPATH += $${ROOT}/tests/lib/catch/single_include $${ROOT}/tests/lib/turtle $$ROOT/lib/qt-event-dispatcher-libuv/

SOURCES += \
    main.cpp

HEADERS += \
    $$files($$ROOT/lib/qt-event-dispatcher-libuv/features/*.h)
