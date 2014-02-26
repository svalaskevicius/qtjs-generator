#pragma once

#include "dynamicMetaObjectBuilder.h"

namespace qtjs_binder {

struct CallInfo;
class DynamicQObject;

class DynamicQObjects {
private:
    QMetaObject **metaObjects;
    unsigned int nextId;
    unsigned int allocated;

    struct ClassInfo {
        CallInfo *initCallback;
        std::map<size_t, CallInfo *> callbacks;
    };
    typedef std::map<size_t, ClassInfo> ClassesInfo;
    ClassesInfo classesInfo;
public:
    DynamicQObjects();
    ~DynamicQObjects();

    void dispose();

    unsigned int addResult(DynamicMetaObjectBuilder &builder);
    QMetaObject *getMetaObject(unsigned int id);
    QObject *createInstance(unsigned int id, QObject *parent = nullptr);

    void callInit(size_t classIdx, QObject *obj);
    void metacall(size_t classIdx, QObject *obj, QMetaObject::Call _c, int _id, void **_a);
};

DynamicQObjects &dynamicQObjects();


}
