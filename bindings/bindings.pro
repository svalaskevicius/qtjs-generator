QT += core gui widgets qml core-private v8-private qml-private
TEMPLATE = app

INCLUDEPATH += . /Users/Shared/dev/vu8/src/ /Users/Shared/dev/vu8/build/include/


CONFIG += c++11 exceptions

QMAKE_CFLAGS += -mmacosx-version-min=10.7 -stdlib=libc++
QMAKE_LFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
QMAKE_CXXFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
QMAKE_OBJECTIVE_CFLAGS += -mmacosx-version-min=10.7

QMAKE_CXXFLAGS += -fexceptions -ftemplate-backtrace-limit=0   -g -O0


TARGET=test
SOURCES += main.cpp


GENERATEDCPP = $$PWD/../generated_cpp
include($$GENERATEDCPP/QtCore.pri)
include($$GENERATEDCPP/QtWidgets.pri)

