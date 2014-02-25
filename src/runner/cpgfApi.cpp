
#include "cpgfApi.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"
#include "cpgf/glifecycle.h"

#include "v8.h"

#include "dynamicMetaObjectBuilder.h"
#include "dynamicQObjectManager.h"
#include "dynamicQObject.h"
#include "closureGenerator.h"
#include "signalConnector.h"

#include "register_meta_qtcore.h"
#include "register_meta_qtgui.h"
#include "register_meta_qtwidgets.h"
#include "register_meta_qtqml.h"

// for QVariant - cpgf interop ->
#include <qtCore_cpgf_compat.h>
#include <qtGui_cpgf_compat.h>
#include <qtQml_cpgf_compat.h>
#include <qtWidgets_cpgf_compat.h>

#include <QUuid>
#include <QJsonArray>
#include <QJsonDocument>
// <- for QVariant - cpgf interop

#include <qtCore_cpgf_compat.h>

namespace qtjs_binder {

namespace {

typedef void (*CreateIntoFuncPtr)(void *);

template <typename C>
void create_into(ffi_cif *cif, void *ret, void* args[], void* classIdx)
{
    Q_UNUSED(ret) Q_UNUSED(cif)
    void *target = *(void **)args[0];
    size_t index = (size_t)classIdx;
    QQmlPrivate::createInto<C>(target);
    ((QQmlPrivate::QQmlElement<C> *)target)->__setClassIdx(index);
}

template <typename C>
struct CreateIntoFuncGenerator : ClosureGenerator {

    CreateIntoFuncPtr generate(size_t classIdx) {
        return (CreateIntoFuncPtr) generateClosure(create_into<C>, (void *)classIdx);
    }

protected:

    virtual void prepare_cif() override {
        args[0] = &ffi_type_pointer;

        if (ffi_prep_cif(&cif, FFI_DEFAULT_ABI, 1, &ffi_type_void, args) != FFI_OK) {
            throw new std::runtime_error("cannot create create_into");
        }
    }


private:
    ffi_type *args[1];
};


template <typename C>
CreateIntoFuncPtr generateDynamicObjectCreateInto(int classIdx)
{
    static CreateIntoFuncGenerator<C> generator;
    return generator.generate(classIdx);
}


QObject *objectFromVariant(QVariant *v) {
    return v->value<QObject *>();
}

void invokeV8Gc()
{
    while (!v8::V8::IdleNotification());
}

void emitQObjectSignal(QObject *obj,
                       char *signature,
                      QVariant arg1,
                      QVariant arg2,
                      QVariant arg3,
                      QVariant arg4,
                      QVariant arg5,
                      QVariant arg6,
                      QVariant arg7,
                      QVariant arg8,
                      QVariant arg9
                      )
{
    const QMetaObject *mobj = obj->metaObject();
    int idx = mobj->indexOfSignal(signature);
    if (idx < 0) {
        throw std::runtime_error("cannot find signal to invoke");
    }
    QVariant ret;
    void *argv[] = {
        ret.data(),
        arg1.data(),
        arg2.data(),
        arg3.data(),
        arg4.data(),
        arg5.data(),
        arg6.data(),
        arg7.data(),
        arg8.data(),
        arg9.data(),
    };
    QMetaObject::activate(obj, idx, argv);
}

void invokeQObjectMethod(QObject *obj,
                       char *signature,
                      QVariant arg1,
                      QVariant arg2,
                      QVariant arg3,
                      QVariant arg4,
                      QVariant arg5,
                      QVariant arg6,
                      QVariant arg7,
                      QVariant arg8,
                      QVariant arg9
                      )
{
    const QMetaObject *mobj = obj->metaObject();
    int idx = mobj->indexOfSlot(signature);

    if (idx < 0) {
        throw std::runtime_error("cannot find signal to invoke");
    }
    QVariant ret;
    void *argv[] = {
        ret.data(),
        arg1.data(),
        arg2.data(),
        arg3.data(),
        arg4.data(),
        arg5.data(),
        arg6.data(),
        arg7.data(),
        arg8.data(),
        arg9.data(),
    };
    QMetaObject::metacall(obj, QMetaObject::InvokeMetaMethod, idx, argv);
}


}


void registerQt(cpgf::GDefineMetaNamespace &define)
{
    qt_metadata::registerMain_QtCore(define);
    qt_metadata::registerMain_QtGui(define);
    qt_metadata::registerMain_QtWidgets(define);
    qt_metadata::registerMain_QtQml(define);

    define._class(qtjs_binder::createDynamicObjectsMetaClasses());
    define._method("dynamicQObjectManager", &qtjs_binder::dynamicQObjectManager);
    define._method("qmlRegisterDynamicType", &qtjs_binder::qmlRegisterDynamicType);
    define._method("finalizeAndRegisterMetaObjectBuilderToQml", &qtjs_binder::finalizeAndRegisterMetaObjectBuilderToQml);

    qtjs_binder::SignalConnectorBinder::reset(new qtjs_binder::SignalConnector());
    define._method("connect", &qtjs_binder::SignalConnectorBinder::connect);
    define._method("invokeV8Gc", &invokeV8Gc);
    define._method("objectFromVariant", &objectFromVariant);

    define._method("emitSignal", &emitQObjectSignal)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ;
    define._method("invoke", &invokeQObjectMethod)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ;
}

void unregisterQt()
{
    invokeV8Gc();
    cpgf::clearV8DataPool();
    SignalConnectorBinder::reset();
    dynamicQObjectManager().dispose();
}

#define X_QML_GETTYPENAMES \
    const char *className = metaObject->className(); \
    const int nameLen = int(strlen(className)); \
    QVarLengthArray<char,48> pointerName(nameLen+2); \
    memcpy(pointerName.data(), className, nameLen); \
    pointerName[nameLen] = '*'; \
    pointerName[nameLen+1] = '\0'; \
    const int listLen = int(strlen("QQmlListProperty<")); \
    QVarLengthArray<char,64> listName(listLen + nameLen + 2); \
    memcpy(listName.data(), "QQmlListProperty<", listLen); \
    memcpy(listName.data()+listLen, className, nameLen); \
    listName[listLen+nameLen] = '>'; \
    listName[listLen+nameLen+1] = '\0';

int qmlRegisterDynamicType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    const QMetaObject *metaObject = dynamicQObjectManager().getMetaObject(classIdx);

    X_QML_GETTYPENAMES;

    QQmlPrivate::RegisterType type = {
        0,

        qRegisterNormalizedMetaType<DynamicQObject *>(pointerName.constData()),
        qRegisterNormalizedMetaType<QQmlListProperty<DynamicQObject> >(listName.constData()),
        sizeof(DynamicQObject), generateDynamicObjectCreateInto<DynamicQObject>(classIdx),
        QString(),

        uri, versionMajor, versionMinor, qmlName, metaObject,

        QQmlPrivate::attachedPropertiesFunc<DynamicQObject>(),
        QQmlPrivate::attachedPropertiesMetaObject<DynamicQObject>(),

        QQmlPrivate::StaticCastSelector<DynamicQObject, QQmlParserStatus>::cast(),
        QQmlPrivate::StaticCastSelector<DynamicQObject, QQmlPropertyValueSource>::cast(),
        QQmlPrivate::StaticCastSelector<DynamicQObject, QQmlPropertyValueInterceptor>::cast(),

        0, 0,

        0,
        0
    };

    return QQmlPrivate::qmlregister(QQmlPrivate::TypeRegistration, &type);
}

#undef X_QML_GETTYPENAMES

void finalizeAndRegisterMetaObjectBuilderToQml(DynamicMetaObjectBuilder *builder, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    size_t id = dynamicQObjectManager().finalizeBuild(*builder);
    qmlRegisterDynamicType(id, uri, versionMajor, versionMinor, qmlName);
}

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
        GDefineMetaClass<DynamicQObjectManager> _nd = GDefineMetaClass<DynamicQObjectManager>::declare("DynamicQObjectManager");
        _nd._method("finalizeBuild", &DynamicQObjectManager::finalizeBuild);
        _nd._method("getMetaObject", &DynamicQObjectManager::getMetaObject);
        _nd._method("construct", &DynamicQObjectManager::construct, cpgf::MakePolicy<cpgf::GMetaRuleTransferOwnership<-1> >())
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

