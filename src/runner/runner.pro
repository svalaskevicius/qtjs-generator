
include (../qtjs.pri)

QT += core widgets qml quick gui core-private
TEMPLATE = app

TARGET=qtjs

CONFIG -= release
CONFIG += debug

SOURCES += main.cpp dynamic_qobject.cpp \
    qmlRegisterType.cpp \
    llvmapi.cpp \
    eventdispatcherlibuv.cpp

LIBPATH += ../core ../widgets ../qml ../gui /usr/lib/llvm-3.2/lib ../../lib/node/out/Release/
LIBS += -lqtjs_core -lqtjs_widgets -lqtjs_qml -lqtjs_gui -lLLVM-3.2 -luv -lcares -lhttp_parser -lchrome_zlib -lz -lopenssl
unix:LIBS += -ldl -lrt

HEADERS += \
    qmlRegisterType.h \
    dynamic_qobject.h \
    llvmapi.h \
    eventdispatcherlibuv.h

QMAKE_CXXFLAGS += -pthread -fno-strict-aliasing -fno-tree-vrp
QMAKE_CXXFLAGS_RELEASE += -Wno-unused-parameter
DEFINES += "ARCH=\"\\\"$$QMAKE_HOST.arch\\\"\"" HAVE_OPENSSL=1 NODE_WANT_INTERNALS=1

unix:DEFINES += __POSIX__ "PLATFORM=\"\\\"unix\\\"\""
win32:DEFINES += PLATFORM=win32 FD_SETSIZE=1024 _UNICODE=1  HAVE_PERFCTR

INCLUDEPATH += ../../lib/node/deps/openssl/openssl/include
INCLUDEPATH += ../../lib/node/deps/uv/include/
INCLUDEPATH += ../../lib/node/deps/http_parser/
INCLUDEPATH += ../../lib/node/out/Release/obj/gen/

SOURCES +=  ../../lib/node/src/fs_event_wrap.cc \
            ../../lib/node/src/cares_wrap.cc \
            ../../lib/node/src/handle_wrap.cc \
            ../../lib/node/src/node.cc \
            ../../lib/node/src/node_buffer.cc \
            ../../lib/node/src/node_constants.cc \
            ../../lib/node/src/node_extensions.cc \
            ../../lib/node/src/node_file.cc \
            ../../lib/node/src/node_http_parser.cc \
            ../../lib/node/src/node_javascript.cc \
            ../../lib/node/src/node_os.cc \
            ../../lib/node/src/node_script.cc \
            ../../lib/node/src/node_stat_watcher.cc \
            ../../lib/node/src/node_string.cc \
            ../../lib/node/src/node_zlib.cc \
            ../../lib/node/src/pipe_wrap.cc \
            ../../lib/node/src/signal_wrap.cc \
            ../../lib/node/src/string_bytes.cc \
            ../../lib/node/src/stream_wrap.cc \
            ../../lib/node/src/slab_allocator.cc \
            ../../lib/node/src/tcp_wrap.cc \
            ../../lib/node/src/timer_wrap.cc \
            ../../lib/node/src/tty_wrap.cc \
            ../../lib/node/src/process_wrap.cc \
            ../../lib/node/src/v8_typed_array.cc \
            ../../lib/node/src/udp_wrap.cc \
            ../../lib/node/src/node_crypto.cc


nodeconfig.target = ../../lib/node/out/Makefile
nodeconfig.commands = cd ../../lib/node && ./configure
nodeconfig.depends = ../../lib/node/configure

node_natives.target = ../../lib/node/out/Release/obj/gen/node_natives.h
node_natives.commands = cd ../../lib/node/out/ && make node_js2c
node_natives.depends = ../../lib/node/out/Makefile

libuv.target = ../../lib/node/out/Release/libuv.a
libuv.commands = cd ../../lib/node/out/ && make libuv
libuv.depends = ../../lib/node/out/Makefile

libcares.target = ../../lib/node/out/Release/libcares.a
libcares.commands = cd ../../lib/node/out/ && make cares
libcares.depends = ../../lib/node/out/Makefile

libhttp_parser.target = ../../lib/node/out/Release/libhttp_parser.a
libhttp_parser.commands = cd ../../lib/node/out/ && make http_parser
libhttp_parser.depends = ../../lib/node/out/Makefile

libzlib.target = ../../lib/node/out/Release/libchrome_zlib.a
libzlib.commands = cd ../../lib/node/out/ && make zlib
libzlib.depends = ../../lib/node/out/Makefile

libopenssl.target = ../../lib/node/out/Release/libopenssl.a
libopenssl.commands = cd ../../lib/node/out/ && make openssl
libopenssl.depends = ../../lib/node/out/Makefile


QMAKE_EXTRA_TARGETS += node_natives nodeconfig node_natives libuv libcares libhttp_parser libzlib libopenssl

PRE_TARGETDEPS +=   ../../lib/node/out/Release/obj/gen/node_natives.h \
                    ../../lib/node/out/Release/libuv.a \
                    ../../lib/node/out/Release/libcares.a \
                    ../../lib/node/out/Release/libhttp_parser.a \
                    ../../lib/node/out/Release/libchrome_zlib.a \
                    ../../lib/node/out/Release/libopenssl.a
