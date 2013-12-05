
include (../../src/runner/runner.pri)

TARGET = spec
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += $${ROOT}/tests/lib/catch/single_include $${ROOT}/tests/lib/turtle

SOURCES += \
    main.cpp \
    eventdispatcherlibuvSpec.cpp

HEADERS += \
    test_setup.h

