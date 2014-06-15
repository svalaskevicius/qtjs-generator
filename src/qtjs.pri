
ROOT = $${PWD}/../
BUILD = $$shadowed($$PWD)/../

INCLUDEPATH += \
    $${ROOT}/lib/cpgf/include/ \
    $${ROOT}/metagen/build/QtCore/include \
    $${ROOT}/metagen/build/QtWidgets/include \
    $${ROOT}/metagen/build/QtQml/include \
    $${ROOT}/metagen/build/QtGui/include \
    $${ROOT}/include \
    $${ROOT}/lib/node/deps/v8/include


CONFIG += c++11 exceptions

linux-g++ {
    QMAKE_CXXFLAGS += -shared-libgcc
    QMAKE_LFLAGS += -shared-libgcc
}

linux-clang {
    QMAKE_CXXFLAGS_DEBUG += -fsanitize=address
    QMAKE_LFLAGS_DEBUG += -fsanitize=address
}

# V8 has lots of them (unused params)..
QMAKE_CXXFLAGS += -Wno-unused-parameter

INCLUDEPATH += $${ROOT}/metagen/build/

# mac + clang
# QMAKE_CFLAGS += -mmacosx-version-min=10.7 -stdlib=libc++
# QMAKE_LFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
# QMAKE_CXXFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
# QMAKE_OBJECTIVE_CFLAGS += -mmacosx-version-min=10.7
# QMAKE_CXXFLAGS += -fexceptions -ftemplate-backtrace-limit=0 -g -O0


LIBPATH += $${ROOT}/lib/cpgf-build/build/ $${ROOT}/lib/node/deps/v8/out/native/lib.target/
LIBS += -lcpgf -lv8 -licuuc -licui18n





v8_gyp.target = $${ROOT}/lib/node/deps/v8/build/gyp/gyp
v8_gyp.commands = cd $${ROOT}/lib/node/deps/v8/ && make dependencies
v8_gyp.depends = $${ROOT}/lib/node/deps/v8/Makefile

dep_v8.target = $${ROOT}/lib/node/deps/v8/out/native/lib.target/libv8.so
dep_v8.commands = cd $${ROOT}/lib/node/deps/v8/ && make native -j4 library=shared
dep_v8.depends = $${ROOT}/lib/node/deps/v8/build/gyp/gyp

dep_cpgf.target = $${ROOT}/lib/cpgf-build/build/libcpgf.so
CONFIG(debug, debug|release) {
    linux-clang {
        dep_cpgf.commands = cd $${ROOT}/lib/cpgf-build/ && mkdir -p build && cd build && \
                            CXX="$${QMAKE_CXX}" CC="$${QMAKE_CC}" CXXFLAGS="-fsanitize=address" cmake .. -DCMAKE_BUILD_TYPE=Debug && \
                            make -j4 lib
    } else {
        dep_cpgf.commands = cd $${ROOT}/lib/cpgf-build/ && mkdir -p build && cd build && \
                            CXX="$${QMAKE_CXX}" CC="$${QMAKE_CC}" cmake .. -DCMAKE_BUILD_TYPE=Debug && \
                            make -j4 lib
    }
} else {
    dep_cpgf.commands = cd $${ROOT}/lib/cpgf-build/ && mkdir -p build && cd build && \
                        CXX="$${QMAKE_CXX}" CC="$${QMAKE_CC}" cmake .. -DCMAKE_BUILD_TYPE=Release && \
                        make -j4 lib
}
QMAKE_EXTRA_TARGETS += v8_gyp dep_v8 dep_cpgf

PRE_TARGETDEPS +=   $${ROOT}/lib/node/deps/v8/out/native/lib.target/libv8.so $${ROOT}/lib/cpgf-build/build/libcpgf.so

