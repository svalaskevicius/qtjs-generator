
#pragma once

#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>

#include "dynamicMetaObjectBuilder.h"

namespace qtjs_binder {

struct CallInfo;

class DynamicQObject;

class DynamicMetaObjects {
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
    DynamicMetaObjects();
    ~DynamicMetaObjects();

    void dispose();

    unsigned int finalizeBuild(DynamicMetaObjectBuilder &builder);
    QMetaObject *getMetaObject(unsigned int id);
    DynamicQObject *construct(unsigned int id, QObject *parent = nullptr);

    void callInit(size_t classIdx, DynamicQObject *obj);
    void metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a);
};

DynamicMetaObjects &dynamicMetaObjects();


cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses();

}

#include "./dynamicQObject.h"
