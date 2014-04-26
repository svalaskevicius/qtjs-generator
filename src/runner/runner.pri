
include (../qtjs.pri)

QT += core widgets qml quick gui core-private

SOURCES += \
    $$PWD/cpgfApi.cpp \
    $$ROOT/lib/qt-event-dispatcher-libuv/src/eventdispatcherlibuv.cpp \
    $$files($$ROOT/lib/qt-event-dispatcher-libuv/src/eventdispatcherlibuv/*.cpp) \
    $$PWD/dynamicQObject.cpp \
    $$PWD/callInfo.cpp \
    $$PWD/signalConnector.cpp \
    $$PWD/dynamicMetaObjectBuilder.cpp \
    $$PWD/dynamicQObjects.cpp

LIBPATH += $$BUILD/src/core $$BUILD/src/widgets $$BUILD/src/qml $$BUILD/src/gui $${ROOT}/lib/node/out/Release/
LIBS += -lqtjs_widgets -lqtjs_qml -lqtjs_gui -lqtjs_core -lffi -luv -lcares -lhttp_parser -lopenssl -lchrome_zlib
unix:LIBS += -ldl -lrt

HEADERS += \
    $$PWD/cpgfApi.h \
    $$files($$ROOT/lib/qt-event-dispatcher-libuv/src/*.h) \
    $$PWD/dynamicQObject.h \
    $$PWD/autoCallback.h \
    $$PWD/callInfo.h \
    $$PWD/signalConnector.h \
    $$PWD/dynamicMetaObjectBuilder.h \
    $$PWD/dynamicQObjects.h \
    $$PWD/closureGenerator.h

QMAKE_LFLAGS += -rdynamic

QMAKE_CXXFLAGS += -pthread -fno-strict-aliasing
linux-g++: QMAKE_CXXFLAGS += -fno-tree-vrp
DEFINES += "ARCH=\"\\\"$$QMAKE_HOST.arch\\\"\"" HAVE_OPENSSL=1 NODE_WANT_INTERNALS=1 OPENSSL_NO_SSL2=1

unix:DEFINES += __POSIX__ "PLATFORM=\"\\\"unix\\\"\""
win32:DEFINES += PLATFORM=win32 FD_SETSIZE=1024 _UNICODE=1  HAVE_PERFCTR

INCLUDEPATH += $${ROOT}/lib/node/deps/openssl/openssl/include
INCLUDEPATH += $${ROOT}/lib/node/deps/cares/include/
INCLUDEPATH += $${ROOT}/lib/node/deps/zlib/
INCLUDEPATH += $${ROOT}/lib/node/deps/uv/include/
INCLUDEPATH += $${ROOT}/lib/node/deps/http_parser/
INCLUDEPATH += $${ROOT}/lib/node/out/Release/obj/gen/
INCLUDEPATH += $$ROOT/lib/qt-event-dispatcher-libuv/src/

SOURCES +=  $${ROOT}/lib/node/src/fs_event_wrap.cc \
            $${ROOT}/lib/node/src/cares_wrap.cc \
            $${ROOT}/lib/node/src/handle_wrap.cc \
            $${ROOT}/lib/node/src/node.cc \
            $${ROOT}/lib/node/src/node_buffer.cc \
            $${ROOT}/lib/node/src/node_constants.cc \
            $${ROOT}/lib/node/src/node_extensions.cc \
            $${ROOT}/lib/node/src/node_file.cc \
            $${ROOT}/lib/node/src/node_http_parser.cc \
            $${ROOT}/lib/node/src/node_javascript.cc \
            $${ROOT}/lib/node/src/node_os.cc \
            $${ROOT}/lib/node/src/node_stat_watcher.cc \
            $${ROOT}/lib/node/src/node_zlib.cc \
            $${ROOT}/lib/node/src/pipe_wrap.cc \
            $${ROOT}/lib/node/src/signal_wrap.cc \
            $${ROOT}/lib/node/src/string_bytes.cc \
            $${ROOT}/lib/node/src/stream_wrap.cc \
            $${ROOT}/lib/node/src/tcp_wrap.cc \
            $${ROOT}/lib/node/src/timer_wrap.cc \
            $${ROOT}/lib/node/src/tty_wrap.cc \
            $${ROOT}/lib/node/src/process_wrap.cc \
            $${ROOT}/lib/node/src/udp_wrap.cc \
            $${ROOT}/lib/node/src/node_crypto.cc \
            $${ROOT}/lib/node/src/node_crypto_bio.cc \
            $${ROOT}/lib/node/src/node_crypto_clienthello.cc \
            $${ROOT}/lib/node/src/tls_wrap.cc \
            $${ROOT}/lib/node/src/node_contextify.cc \
            $${ROOT}/lib/node/src/node_watchdog.cc \
            $${ROOT}/lib/node/src/smalloc.cc \
            $${ROOT}/lib/node/src/uv.cc

nodeconfig.target = $${ROOT}/lib/node/out/Makefile
nodeconfig.commands = cd $${ROOT}/lib/node && ./configure
nodeconfig.depends = $${ROOT}/lib/node/configure

node_natives.target = $${ROOT}/lib/node/out/Release/obj/gen/node_natives.h
node_natives.commands = cd $${ROOT}/lib/node/out/ && make node_js2c
node_natives.depends = $${ROOT}/lib/node/out/Makefile

libuv.target = $${ROOT}/lib/node/out/Release/libuv.a
libuv.commands = cd $${ROOT}/lib/node/out/ && make libuv
libuv.depends = $${ROOT}/lib/node/out/Makefile

libcares.target = $${ROOT}/lib/node/out/Release/libcares.a
libcares.commands = cd $${ROOT}/lib/node/out/ && make cares
libcares.depends = $${ROOT}/lib/node/out/Makefile

libhttp_parser.target = $${ROOT}/lib/node/out/Release/libhttp_parser.a
libhttp_parser.commands = cd $${ROOT}/lib/node/out/ && make http_parser
libhttp_parser.depends = $${ROOT}/lib/node/out/Makefile

libzlib.target = $${ROOT}/lib/node/out/Release/libchrome_zlib.a
libzlib.commands = cd $${ROOT}/lib/node/out/ && make zlib
libzlib.depends = $${ROOT}/lib/node/out/Makefile

libopenssl.target = $${ROOT}/lib/node/out/Release/libopenssl.a
libopenssl.commands = cd $${ROOT}/lib/node/out/ && make openssl
libopenssl.depends = $${ROOT}/lib/node/out/Makefile


QMAKE_EXTRA_TARGETS += nodeconfig node_natives libuv libcares libhttp_parser libzlib libopenssl

PRE_TARGETDEPS +=   $${ROOT}/lib/node/out/Release/obj/gen/node_natives.h \
                    $${ROOT}/lib/node/out/Release/libuv.a \
                    $${ROOT}/lib/node/out/Release/libcares.a \
                    $${ROOT}/lib/node/out/Release/libhttp_parser.a \
                    $${ROOT}/lib/node/out/Release/libchrome_zlib.a \
                    $${ROOT}/lib/node/out/Release/libopenssl.a
