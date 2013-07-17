
include (../qtjs.pri)

QT += core widgets
TEMPLATE = app

TARGET=qtjs

SOURCES += main.cpp 

LIBPATH += ../core ../widgets
LIBS += -lqtjs_core -lqtjs_widgets
