
#include "callInfo.h"
#include "autoCallback.h"

#include "dynamicQObjectManager.h"
#include "dynamicQObject.h"

#include "autoCallback.h"
#include "callInfo.h"

namespace qtjs_binder {


DynamicQObjectManager::DynamicQObjectManager()
{
    nextId = 0;
    allocated = 10;
    metaObjects = (QMetaObject **) malloc(sizeof(QMetaObject *) * allocated);
}

DynamicQObjectManager::~DynamicQObjectManager()
{
    dispose();
}

void DynamicQObjectManager::dispose()
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

unsigned int DynamicQObjectManager::finalizeBuild(DynamicMetaObjectBuilder &builder)
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

QMetaObject *DynamicQObjectManager::getMetaObject(unsigned int id)
{
    if (id >= nextId) {
        return nullptr;
    }
    return metaObjects[id];
}

DynamicQObject *DynamicQObjectManager::construct(unsigned int id, QObject *parent)
{
    DynamicQObject *ret = new DynamicQObject(parent);
    ret->__setClassIdx(id);
    return ret;
}

void DynamicQObjectManager::callInit(size_t classIdx, DynamicQObject *obj)
{
    if (classesInfo[classIdx].initCallback) {
        void **data = new void*[2];
        data[0] = 0;
        data[1] = obj;
        classesInfo[classIdx].initCallback->invoke(data);
        delete [] data;
    }
}

void DynamicQObjectManager::metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a)
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


DynamicQObjectManager &dynamicQObjectManager()
{
    static DynamicQObjectManager _obj;
    return _obj;
}

}

