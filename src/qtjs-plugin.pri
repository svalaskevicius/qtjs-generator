
include (./qtjs.pri)

QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE += -Os
QMAKE_CXXFLAGS_RELEASE += -fvisibility=hidden -fvisibility-inlines-hidden
QMAKE_LFLAGS_RELEASE += -fvisibility=hidden -fvisibility-inlines-hidden

linux-g++ {
    QMAKE_CXXFLAGS_RELEASE += -s
    QMAKE_LFLAGS_RELEASE += -s
}
