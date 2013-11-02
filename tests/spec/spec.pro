
include (../../src/runner/runner.pri)

TARGET = spec
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += $${ROOT}/tests/lib/igloo $${ROOT}/tests/lib/cppspec/include $${ROOT}/tests/lib/turtle
LIBPATH += $${ROOT}/tests/lib/cppspec/build/lib/
LIBS += -lCppSpec

SOURCES += \
    spec.cpp

libcppspec.target = $${ROOT}/tests/lib/cppspec/build/lib/libCppSpec.so
libcppspec.commands = mkdir -p $${ROOT}/tests/lib/cppspec/build && cd $${ROOT}/tests/lib/cppspec/build && cmake ../../cppspec-notests/ && make

QMAKE_EXTRA_TARGETS += libcppspec

PRE_TARGETDEPS += $${ROOT}/tests/lib/cppspec/build/lib/libCppSpec.so
