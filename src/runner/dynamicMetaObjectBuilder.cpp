
#include <assert.h>
#include <private/qmetaobjectbuilder_p.h>
#include "llvmapi.h"

#include "dynamicMetaObjectBuilder.h"

namespace qtjs_binder {




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


}

