
#pragma once

#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>

namespace qtjs_binder {

struct CallInfo;


struct DynamicMetaObjectBuilderPrivate;

class DynamicMetaObjectBuilder {
public:
    DynamicMetaObjectBuilder();
    ~DynamicMetaObjectBuilder();

    void setClassName(const char * name);
    void setInit(cpgf::IScriptFunction *callback);
    void addSignal(const char * signature, QStringList argumentNames);
    void addSlot(const char * signature, cpgf::IScriptFunction *callback);
    void addProperty(const char * name, const char * type);

    QMetaObject *toMetaObject(int classId);
    cpgf::IScriptFunction *getInitCallback();
    std::map<int, cpgf::IScriptFunction *> getCallbacks();
    QByteArray methodSignature(int id);
private:
    DynamicMetaObjectBuilderPrivate *_p;
};

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
