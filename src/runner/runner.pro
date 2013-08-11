
include (../qtjs.pri)

QT += core widgets qml quick 
TEMPLATE = app

TARGET=qtjs

SOURCES += main.cpp 

LIBPATH += ../core ../widgets ../qml
LIBS += -lqtjs_core -lqtjs_widgets -lqtjs_qml
