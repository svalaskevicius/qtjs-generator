
include (../qtjs.pri)

QT += core widgets qml quick gui core-private
TEMPLATE = app

TARGET=qtjs

SOURCES += main.cpp 

LIBPATH += ../core ../widgets ../qml ../gui
LIBS += -lqtjs_core -lqtjs_widgets -lqtjs_qml -lqtjs_gui
