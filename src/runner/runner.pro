
include (../qtjs.pri)

QT += core widgets qml quick gui
TEMPLATE = app

TARGET=qtjs

SOURCES += main.cpp dynamic_qobject.cpp

LIBPATH += ../core ../widgets ../qml ../gui
LIBS += -lqtjs_core -lqtjs_widgets -lqtjs_qml -lqtjs_gui
