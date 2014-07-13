
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
QMAKE_CFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS_WARN_ON = -Wall -Wno-unused-parameter

INCLUDEPATH += $${ROOT}/metagen/build/

clang-mac:QMAKE_CFLAGS += -mmacosx-version-min=10.7 -stdlib=libc++
clang-mac:QMAKE_LFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
clang-mac:QMAKE_CXXFLAGS += -mmacosx-version-min=10.7  -stdlib=libc++
clang-mac:QMAKE_OBJECTIVE_CFLAGS += -mmacosx-version-min=10.7
# clang-mac:QMAKE_CXXFLAGS += -fexceptions -ftemplate-backtrace-limit=0 -g -O0


LIBPATH += $${ROOT}/lib/cpgf-build/build/
mac {
	LIBPATH += $${ROOT}/lib/node/deps/v8/out/native/
} else {
	LIBPATH += $${ROOT}/lib/node/deps/v8/out/native/lib.target/
}
LIBS += -lcpgf -lv8 -licuuc -licui18n

mac {
	LIB_V8 = $${ROOT}/lib/node/deps/v8/out/native/libv8.dylib
	LIB_CPGF = $${ROOT}/lib/cpgf-build/build/libcpgf.dylib
} else {
	LIB_V8 = $${ROOT}/lib/node/deps/v8/out/native/lib.target/libv8.so
	LIB_CPGF = $${ROOT}/lib/cpgf-build/build/libcpgf.so
}


v8_gyp.target = $${ROOT}/lib/node/deps/v8/build/gyp/gyp
v8_gyp.commands = cd $${ROOT}/lib/node/deps/v8/ && make dependencies
v8_gyp.depends = $${ROOT}/lib/node/deps/v8/Makefile

dep_v8.target = $${LIB_V8}
mac {
	dep_v8.commands = cd $${ROOT}/lib/node/deps/v8/ && export DYLD_LIBRARY_PATH=$${ROOT}/lib/node/deps/v8/out/native/ && make native -j4 library=shared
} else {
	dep_v8.commands = cd $${ROOT}/lib/node/deps/v8/ && make native -j4 library=shared
}
dep_v8.depends = $${ROOT}/lib/node/deps/v8/build/gyp/gyp

dep_cpgf.target = $${LIB_CPGF}
dep_cpgf.depends = $${LIB_V8}
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

PRE_TARGETDEPS +=   $${LIB_V8} $${LIB_CPGF}

