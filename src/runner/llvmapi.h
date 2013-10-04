#pragma once

#include <qobject.h>

namespace qtjs_binder {

typedef void (*CreateIntoFuncPtr)(void *);
typedef void (*StaticMetaCallFuncPtr)(QObject *, QMetaObject::Call, int, void **);

struct LlvmpApiPrivate;

class LlvmApi
{
public:
    LlvmApi();
    ~LlvmApi();
    CreateIntoFuncPtr generateDynamicObjectCreateInto(int classIdx);
    StaticMetaCallFuncPtr generateDynamicObjectStaticMetaCall(int classIdx);
private:
    LlvmpApiPrivate *_p;

    int closureCounter;
};

extern LlvmApi llvmApi;

}
