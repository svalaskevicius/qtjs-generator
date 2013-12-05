
include (./runner.pri)

TEMPLATE = app
TARGET=qtjs

CONFIG -= release
CONFIG += debug

SOURCES += main.cpp

OTHER_FILES += \
    runner.pri
