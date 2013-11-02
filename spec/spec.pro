
include (../src/runner/runner.pri)

TARGET = spec
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += ./lib/igloo ./lib/cppspec/include
LIBPATH += $${ROOT}/spec/lib/cppspec/build/lib/
LIBS += -lCppSpec

SOURCES += \
    spec.cpp

libcppspec.target = $${ROOT}/spec/lib/cppspec/build/lib/libCppSpec.so
libcppspec.commands = mkdir -p $${ROOT}/spec/lib/cppspec/build && cd $${ROOT}/spec/lib/cppspec/build && cmake ../../cppspec-notests/ && make

QMAKE_EXTRA_TARGETS += libcppspec

PRE_TARGETDEPS += $${ROOT}/spec/lib/cppspec/build/lib/libCppSpec.so
