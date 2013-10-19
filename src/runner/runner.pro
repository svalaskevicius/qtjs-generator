
include (../qtjs.pri)

QT += core widgets qml quick gui core-private
TEMPLATE = app

TARGET=qtjs

CONFIG -= release
CONFIG += debug

SOURCES += main.cpp dynamic_qobject.cpp \
    qmlRegisterType.cpp \
    llvmapi.cpp

LIBPATH += ../core ../widgets ../qml ../gui /usr/lib/llvm-3.2/lib
LIBS += -lqtjs_core -lqtjs_widgets -lqtjs_qml -lqtjs_gui -lLLVM-3.2

HEADERS += \
    qmlRegisterType.h \
    dynamic_qobject.h \
    llvmapi.h
