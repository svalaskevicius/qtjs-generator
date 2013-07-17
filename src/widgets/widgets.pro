
include (../qtjs.pri)
QT += core gui widgets
TEMPLATE = lib

TARGET=qtjs_widgets

SOURCES += $$files(../../metagen/build/QtWidgets/src/*.cpp) 

