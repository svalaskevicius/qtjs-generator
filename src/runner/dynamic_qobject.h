
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

struct CallInfo {
    QVector<int> parameterTypeIds;
    int returnTypeId;
    cpgf::IScriptFunction * callback;
    void invoke(void **);
    ~CallInfo();
};

class DLL_PUBLIC QtSignalConnector : public QObject {
public:
    ~QtSignalConnector();
    bool connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback);

protected:
    QVector<CallInfo *> callbacks;
public:
    virtual int qt_metacall(QMetaObject::Call, int, void **);
};

struct DLL_PUBLIC QtSignalConnectorBinder {
    static void connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback);
    static void reset(QtSignalConnector *newConnector = nullptr);
private:
    static QtSignalConnector *connector;
};

struct DynamicMetaObjectBuilderPrivate;

class DynamicMetaObjectBuilder {
public:
    DynamicMetaObjectBuilder();
    ~DynamicMetaObjectBuilder();

    void setClassName(QString name);
    void setInit(cpgf::IScriptFunction *callback);
    void addSignal(QString signature, QStringList argumentNames);
    void addSlot(QString signature, cpgf::IScriptFunction *callback);
    void addProperty(QString name, QString type);

    QMetaObject *toMetaObject(int classId);
    cpgf::IScriptFunction *getInitCallback();
    std::map<int, cpgf::IScriptFunction *> getCallbacks();
private:
    DynamicMetaObjectBuilderPrivate *_p;
};

class DynamicMetaObjects {
private:
    QMetaObject **metaObjects;
    unsigned int lastId;
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

    unsigned int finalizeBuild(DynamicMetaObjectBuilder &builder);
    QMetaObject *getMetaObject(unsigned int id);

    void callInit(size_t classIdx, QObject *obj);
    void metacall(size_t classIdx, QObject *obj, QMetaObject::Call _c, int _id, void **_a);
};

extern DynamicMetaObjects dynamicMetaObjects;

class DynamicQObject : public QObject
{
private:
    int classIdx;

public:
    void __setClassIdx(int classIdx);

    const QMetaObject *metaObject() const;

    virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a);
};

cpgf::GDefineMetaInfo createMetaClass_DynamicMetaObjectBuilder();

}
