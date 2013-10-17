
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

    void setClassName(const char * name);
    void setInit(cpgf::IScriptFunction *callback);
    void addSignal(const char * signature, QStringList argumentNames);
    void addSlot(const char * signature, cpgf::IScriptFunction *callback);
    void addProperty(const char * name, const char * type);

    QMetaObject *toMetaObject(int classId);
    cpgf::IScriptFunction *getInitCallback();
    std::map<int, cpgf::IScriptFunction *> getCallbacks();
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

    void callInit(size_t classIdx, DynamicQObject *obj);
    void metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a);
};

extern DynamicMetaObjects dynamicMetaObjects;

class DynamicQObject : public QObject
{
private:
    int classIdx;
    std::map<int, QVariant> propertyStorage;
public:
    void __setClassIdx(int classIdx);

    DynamicQObject()
        : QObject(),classIdx(-1)
    {
    }

    DynamicQObject(const DynamicQObject &other)
        : QObject()
    {
        classIdx = other.classIdx;
        propertyStorage = other.propertyStorage;
    }

    DynamicQObject & operator=(const DynamicQObject &other)
    {
        classIdx = other.classIdx;
        propertyStorage = other.propertyStorage;
        return *this;
    }

    const QMetaObject *metaObject() const;

    virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a);

    void emitSignal(char *signature,
                      QVariant arg1 = 0,
                      QVariant arg2 = 0,
                      QVariant arg3 = 0,
                      QVariant arg4 = 0,
                      QVariant arg5 = 0,
                      QVariant arg6 = 0,
                      QVariant arg7 = 0,
                      QVariant arg8 = 0,
                      QVariant arg9 = 0);

};

cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses();

}

Q_DECLARE_METATYPE(qtjs_binder::DynamicQObject);
