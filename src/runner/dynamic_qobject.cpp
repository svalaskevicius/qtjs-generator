
#include "dynamic_qobject.h"

#include <QStringList>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QBitArray>
#include <QSize>
#include <QSizeF>
#include <QRect>
#include <QRectF>
#include <QLine>
#include <QLineF>
#include <QPoint>
#include <QPointF>
#include <QUrl>
#include <QEasingCurve>
#include <QLocale>

#include <private/qmetaobjectbuilder_p.h>

#include "llvmapi.h"

// for QVariant - cpgf interop ->
#include <qtCore_cpgf_compat.h>
#include <qtGui_cpgf_compat.h>
#include <qtQml_cpgf_compat.h>
#include <qtWidgets_cpgf_compat.h>

#include <QUuid>
#include <QJsonArray>
#include <QJsonDocument>
// <- for QVariant - cpgf interop

#include "callInfo.h"
#include "autoCallback.h"

namespace qtjs_binder {


namespace {

QVector<int> metaMethodParamTypeIds(QMetaMethod m) {
    QVector<int> ret;
    int maxCnt = m.parameterCount();
    for (int i = 0; i < maxCnt; i++) {
        ret.push_back(m.parameterType(i));
    }
    return ret;
}

}


QtSignalConnector::~QtSignalConnector()
{
    for (CallInfo * p : callbacks) {
        delete p;
    }
    callbacks.clear();
}

bool QtSignalConnector::connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback)
{
    QByteArray normalised_signal = QMetaObject::normalizedSignature(signal);
    int signal_idx = obj->metaObject()->indexOfSignal(normalised_signal);
    if (signal_idx < 0) {
        return false;
    }
    QMetaObject::connect(
                obj,
                signal_idx,
                this,
                callbacks.count() + QObject::metaObject()->methodCount()
                );
    callback->addReference();
    callbacks.push_back(
                new CallInfo({
                                 metaMethodParamTypeIds( obj->metaObject()->method(signal_idx) ),
                                 -1,
                                 callback
                             })
                );

    return true;
}

int QtSignalConnector::qt_metacall(QMetaObject::Call call, int id, void **data)
{
    id = QObject::qt_metacall(call, id, data);
    if (id == -1 || call != QMetaObject::InvokeMetaMethod) {
        return id;
    }

    Q_ASSERT(id < callbacks.count());

    callbacks[id]->invoke(data);

    return -1;
}

void QtSignalConnectorBinder::connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback) {
    Q_ASSERT(connector);
    connector->connectToSignal(obj, signal, callback);
}
void QtSignalConnectorBinder::reset(QtSignalConnector *newConnector) {
    if (connector) {
        delete connector;
    }
    connector = newConnector;
}

QtSignalConnector* QtSignalConnectorBinder::connector = nullptr;




struct DynamicMetaObjectBuilderPrivate
{
    QMetaObjectBuilder builder;
    std::map<int, cpgf::IScriptFunction *> callbacks;
    cpgf::IScriptFunction *initCallback;
};

DynamicMetaObjectBuilder::DynamicMetaObjectBuilder()
{
    _p = new DynamicMetaObjectBuilderPrivate();
}

DynamicMetaObjectBuilder::~DynamicMetaObjectBuilder()
{
    delete _p;
}

void DynamicMetaObjectBuilder::setClassName(const char * name)
{
    _p->builder.setClassName(name);
}

void DynamicMetaObjectBuilder::setInit(cpgf::IScriptFunction *callback)
{
    callback->addReference();
    _p->initCallback = callback;
}

void DynamicMetaObjectBuilder::addSignal(const char * signature, QStringList argumentNames)
{
    QList<QByteArray> arguments;
    for (auto name : argumentNames) {
        arguments.push_back(name.toLatin1());
    }
    _p->builder.addSignal(signature).setParameterNames(arguments);
}

void DynamicMetaObjectBuilder::addSlot(const char * signature, cpgf::IScriptFunction *callback)
{
    int idx = _p->builder.addSlot(signature).index();
    assert(_p->callbacks.find(idx) == _p->callbacks.end());

    callback->addReference();
    _p->callbacks[idx] = callback;
}

void DynamicMetaObjectBuilder::addProperty(const char * name, const char * type)
{
    int idx = _p->builder.addSignal((QString(name)+"Changed()").toLatin1()).index();
    _p->builder.addProperty(name, type, idx);
}

QMetaObject *DynamicMetaObjectBuilder::toMetaObject(int classId)
{
    _p->builder.setStaticMetacallFunction(
        llvmApi.generateDynamicObjectStaticMetaCall(classId)
    );
    return _p->builder.toMetaObject();
}

cpgf::IScriptFunction * DynamicMetaObjectBuilder::getInitCallback()
{
    return _p->initCallback;
}

std::map<int, cpgf::IScriptFunction *> DynamicMetaObjectBuilder::getCallbacks()
{
    return _p->callbacks;
}


QByteArray DynamicMetaObjectBuilder::methodSignature(int id)
{
    return QMetaObject::normalizedSignature(_p->builder.method(id).signature() );
}





DynamicMetaObjects::DynamicMetaObjects()
{
    nextId = 0;
    allocated = 10;
    metaObjects = (QMetaObject **) malloc(sizeof(QMetaObject *) * allocated);
}

DynamicMetaObjects::~DynamicMetaObjects()
{
    dispose();
}

void DynamicMetaObjects::dispose()
{
    if (metaObjects) {
        for (unsigned int i = 0; i < nextId; i++) {
            free(metaObjects[i]);
        }
        free(metaObjects);
        metaObjects = nullptr;
    }
    for (auto ci : classesInfo) {
        if (ci.second.initCallback) {
            delete ci.second.initCallback;
        }
        for (auto callback : ci.second.callbacks) {
            delete callback.second;
        }
        ci.second.callbacks.clear();
    }
    classesInfo.clear();
    nextId = 0;
    allocated = 0;
}

unsigned int DynamicMetaObjects::finalizeBuild(DynamicMetaObjectBuilder &builder)
{
    if (nextId >= allocated) {
        allocated *= 2;
        metaObjects = (QMetaObject **) realloc(metaObjects, sizeof(QMetaObject *) * allocated);
    }
    unsigned int currentId = nextId;
    nextId++;

    metaObjects[currentId] = builder.toMetaObject(currentId);

    auto initFnc = builder.getInitCallback();
    if (initFnc) {
        classesInfo[currentId].initCallback =
                new CallInfo({
                                 {qMetaTypeId<DynamicQObject>()},
                                 -1,
                                 initFnc
                             });
    } else {
        classesInfo[currentId].initCallback = nullptr;
    }
    classesInfo[currentId].callbacks.clear();
    for (auto it : builder.getCallbacks()) {

        int methodID = metaObjects[currentId]->indexOfMethod( builder.methodSignature(it.first) );
        assert(methodID >= 0);

        classesInfo[currentId].callbacks[it.first] =
                new CallInfo({
                                 QVector<int>({qMetaTypeId<DynamicQObject>()}) << metaMethodParamTypeIds( metaObjects[currentId]->method(methodID) ),
                                 -1,
                                 it.second
                             });
    }

    return currentId;
}

QMetaObject *DynamicMetaObjects::getMetaObject(unsigned int id) 
{
    if (id >= nextId) {
        return nullptr;
    }
    return metaObjects[id];
}

DynamicQObject *DynamicMetaObjects::construct(unsigned int id, QObject *parent)
{
    DynamicQObject *ret = new DynamicQObject(parent);
    ret->__setClassIdx(id);
    return ret;
}

void DynamicMetaObjects::callInit(size_t classIdx, DynamicQObject *obj)
{
    if (classesInfo[classIdx].initCallback) {
        void **data = new void*[2];
        data[0] = 0;
        data[1] = obj;
        classesInfo[classIdx].initCallback->invoke(data);
        delete [] data;
    }
}

void DynamicMetaObjects::metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        assert(classesInfo[classIdx].callbacks.find(_id) != classesInfo[classIdx].callbacks.end());
        int paramCnt = classesInfo[classIdx].callbacks[_id]->parameterTypeIds.count();
        void **data = nullptr;

        data = new void*[paramCnt+2];
        data[0] = _a[0];
        data[1] = obj;
        for (int i = 0; i < paramCnt; i++) {
            data[i+2] = _a[i+1];
        }
        AutoCallback paramDeleter(
            [&](){
                delete [] data;
            }
        );
        Q_UNUSED(paramDeleter);

        classesInfo[classIdx].callbacks[_id]->invoke(data);
    } else if (_c == QMetaObject::IndexOfMethod) {
        throw std::runtime_error("IndexOfMethod support is not implemented for DynamicQObject");
    }
}


DynamicMetaObjects &dynamicMetaObjects()
{
    static DynamicMetaObjects _dynamicMetaObjects;
    return _dynamicMetaObjects;
}





}

#include "qtQml_cpgf_compat.h"

namespace qtjs_binder {

cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses()
{
    using namespace cpgf;

    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<DynamicMetaObjectBuilder> _nd = GDefineMetaClass<DynamicMetaObjectBuilder>::declare("DynamicMetaObjectBuilder");
        _nd._method("setClassName", &DynamicMetaObjectBuilder::setClassName);
        _nd._method("setInit", &DynamicMetaObjectBuilder::setInit);
        _nd._method("addSignal", &DynamicMetaObjectBuilder::addSignal);
        _nd._method("addSlot", &DynamicMetaObjectBuilder::addSlot);
        _nd._method("addProperty", &DynamicMetaObjectBuilder::addProperty);

        _d._class(_nd);
    }
    {
        GDefineMetaClass<DynamicMetaObjects> _nd = GDefineMetaClass<DynamicMetaObjects>::declare("DynamicMetaObjects");
        _nd._method("finalizeBuild", &DynamicMetaObjects::finalizeBuild);
        _nd._method("getMetaObject", &DynamicMetaObjects::getMetaObject);
        _nd._method("construct", &DynamicMetaObjects::construct, cpgf::MakePolicy<cpgf::GMetaRuleTransferOwnership<-1> >())
            ._default(copyVariantFromCopyable(0));

        _d._class(_nd);
    }
    {
        GDefineMetaClass<DynamicQObject, QObject> _nd = GDefineMetaClass<DynamicQObject, QObject>::declare("DynamicQObject");
        _d._class(_nd);
    }

    return _d.getMetaInfo();
}

}

