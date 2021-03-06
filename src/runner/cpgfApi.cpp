
#include "cpgfApi.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"
#include "cpgf/glifecycle.h"

#include "v8.h"

#include "dynamicMetaObjectBuilder.h"
#include "dynamicQObjects.h"
#include "dynamicQObject.h"
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

#include "qttypesconverter.h"

namespace qtjs_binder {

namespace {


QObject *objectFromVariant(QVariant *v) {
    return v->value<QObject *>();
}
QFont fontFromVariant(QVariant *v) {
    return v->value<QFont>();
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

template <typename T>
T *arrayValueForOffset(T *array, int offset)
{
    return &(array[offset]);
}


}

template <typename F>
void registerGlobalV8Function(const char * name, F function)
{
    using namespace v8;

    v8::Isolate* isolate = v8::Isolate::GetCurrent();
    HandleScope handle_scope(isolate);
    Q_UNUSED(handle_scope);

    Local<Context> ctx = isolate->GetCurrentContext();
    Local<Object> global( ctx->Global() );
    v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(isolate, function);
    v8::Local<v8::Function> fn = t->GetFunction();
    v8::Local<v8::String> fn_name = v8::String::NewFromUtf8(isolate, name);
    fn->SetName(fn_name);
    global->Set(fn_name, fn);
}

void registerQt(cpgf::GDefineMetaNamespace &define)
{
    qt_metadata::registerMain_QtCore(define);
    qt_metadata::registerMain_QtGui(define);
    qt_metadata::registerMain_QtWidgets(define);
    qt_metadata::registerMain_QtQml(define);

    define._class(qtjs_binder::createDynamicObjectsMetaClasses());
    define._method("dynamicQObjectManager", &qtjs_binder::dynamicQObjects);
    define._method("qmlRegisterDynamicType", &qtjs_binder::qmlRegisterDynamicType);
    define._method("finalizeAndRegisterMetaObjectBuilderToQml", &qtjs_binder::finalizeAndRegisterMetaObjectBuilderToQml);

    qtjs_binder::SignalConnectorBinder::reset(new qtjs_binder::SignalConnector());
    define._method("connect", &qtjs_binder::SignalConnectorBinder::connect);
    define._method("invokeV8Gc", &invokeV8Gc);
    define._method("objectFromVariant", &objectFromVariant);
    define._method("fontFromVariant", &fontFromVariant);

    define._method("arrayValueForOffset_Point2D", &arrayValueForOffset<QSGGeometry::Point2D>);
    define._method("arrayValueForOffset_ColoredPoint2D", &arrayValueForOffset<QSGGeometry::ColoredPoint2D>);
    define._method("arrayValueForOffset_TexturedPoint2D", &arrayValueForOffset<QSGGeometry::TexturedPoint2D>);

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

    registerGlobalV8Function("keepQtObjectUntilItsFreed", cpgf::qtjs::MetaObjectLifeManager::keepV8HandleUntilObjectIsFreed);
}

void unregisterQt()
{
    invokeV8Gc();
    cpgf::clearV8DataPool();
    SignalConnectorBinder::reset();
    dynamicQObjects().dispose();
}


int qmlRegisterDynamicType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    auto dynamicClass = dynamicClassSpecifications.byClassIdx(classIdx);
    assert(dynamicClass);
    QQmlPrivate::RegisterType type = dynamicClass->createQmlRegisterType(classIdx, uri, versionMajor, versionMinor, qmlName);
    return QQmlPrivate::qmlregister(QQmlPrivate::TypeRegistration, &type);
}

#undef X_QML_GETTYPENAMES

void finalizeAndRegisterMetaObjectBuilderToQml(DynamicMetaObjectBuilder *builder, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    size_t id = dynamicQObjects().addResult(*builder);
    qmlRegisterDynamicType(id, uri, versionMajor, versionMinor, qmlName);
}

cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses()
{
    using namespace cpgf;

    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        auto _nd = GDefineMetaClass<DynamicMetaObjectBuilder>::declare("DynamicMetaObjectBuilder");
        _nd._method("setClassName", &DynamicMetaObjectBuilder::setClassName);
        _nd._method("setInit", &DynamicMetaObjectBuilder::setInit);
        _nd._method("addSignal", &DynamicMetaObjectBuilder::addSignal);
        _nd._method("addSlot", &DynamicMetaObjectBuilder::addSlot);
        _nd._method("addProperty", &DynamicMetaObjectBuilder::addProperty);
        _nd._method("setParentClass", &DynamicMetaObjectBuilder::setParentClass);

        _d._class(_nd);
    }
    {
        auto _nd = GDefineMetaClass<DynamicQObjects>::declare("DynamicQObjectManager");
        _nd._method("finalizeBuild", &DynamicQObjects::addResult);
        _nd._method("getMetaObject", &DynamicQObjects::getMetaObject);
        _nd._method("construct", &DynamicQObjects::createInstance, cpgf::MakePolicy<cpgf::GMetaRuleTransferOwnership<-1> >())
            ._default(copyVariantFromCopyable(0));

        _d._class(_nd);
    }

    for (const auto & it : dynamicClassSpecifications.specifications) {
        it.second->declareCpgfClass(_d);
    }

    return _d.getMetaInfo();
}



CpgfBinder::CpgfBinder(v8::Handle<v8::Context> ctx)
    : define(GDefineMetaNamespace::declare("qt")),
      service(createDefaultMetaService()),
      runner(createV8ScriptRunner(service.get(), ctx)),
      scriptObject(runner->getScripeObject()),
      metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass()))),
      userConverter(new QtTypesConverter())
{
    scriptObject->getContext()->addScriptUserConverter(userConverter.get());

    qtjs_binder::registerQt(define);
    scriptObject->bindCoreService("cpgf", NULL);
    scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));
    unsafeCpgfScriptObject = scriptObject.get();
}

CpgfBinder::~CpgfBinder()
{
    unsafeCpgfScriptObject = nullptr;
    unregisterQt();
}
}

