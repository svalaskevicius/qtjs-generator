
#include <assert.h>
#include <private/qmetaobjectbuilder_p.h>

#include "dynamicMetaObjectBuilder.h"
#include "dynamicQObjects.h"
#include "closureGenerator.h"

namespace qtjs_binder {

namespace {

typedef void (*StaticMetaCallFuncPtr)(QObject *, QMetaObject::Call, int, void **);

void static_metacall(ffi_cif *cif, void *ret, void* args[], void* classIdx)
{
    Q_UNUSED(ret) Q_UNUSED(cif)
    dynamicQObjects().metacall((size_t)classIdx, *(DynamicQObject **)args[0], *(QMetaObject::Call*)args[1], *(int*)args[2], *(void***)args[3]);
}


struct StaticMetaCallFuncGenerator : ClosureGenerator {

    StaticMetaCallFuncPtr generate(size_t classIdx) {
        return (StaticMetaCallFuncPtr) generateClosure(static_metacall, (void *)classIdx);
    }

protected:

    virtual void prepare_cif() override {
        args[0] = &ffi_type_pointer;
        args[1] = &ffi_type_uint;
        args[2] = &ffi_type_sint;
        args[3] = &ffi_type_pointer;

        if (ffi_prep_cif(&cif, FFI_DEFAULT_ABI, 4, &ffi_type_void, args) != FFI_OK) {
            throw new std::runtime_error("cannot create static metacall");
        }
    }

private:
    ffi_type *args[4];

};



StaticMetaCallFuncPtr generateDynamicObjectStaticMetaCall(int classIdx)
{
    static StaticMetaCallFuncGenerator generator;
    return generator.generate(classIdx);
}


}


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
        generateDynamicObjectStaticMetaCall(classId)
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

