
QT += qml v8-private qml-private

ROOT = $${PWD}/../
BUILD = $$shadowed($$PWD)/../

INCLUDEPATH += \
    $${ROOT}/lib/cpgf/include/ \
    $${ROOT}/metagen/build/QtCore/include \
    $${ROOT}/metagen/build/QtWidgets/include \
    $${ROOT}/metagen/build/QtQml/include \
    $${ROOT}/metagen/build/QtGui/include \
    $${ROOT}/include


CONFIG += c++11 exceptions

QMAKE_CXXFLAGS += -shared-libgcc
QMAKE_LFLAGS += -shared-libgcc

QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE += -Os
QMAKE_CXXFLAGS_RELEASE += -fvisibility=hidden -fvisibility-inlines-hidden -s
QMAKE_LFLAGS_RELEASE += -fvisibility=hidden -fvisibility-inlines-hidden -s

# mac + clang
# QMAKE_CFLAGS += -mmacosx-version-min=10.7 -stdlib=libc++
# QMAKE_LFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
# QMAKE_CXXFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
# QMAKE_OBJECTIVE_CFLAGS += -mmacosx-version-min=10.7
# QMAKE_CXXFLAGS += -fexceptions -ftemplate-backtrace-limit=0 -g -O0


LIBPATH += $${ROOT}/lib/cpgf/lib/
LIBS += -lcpgf

