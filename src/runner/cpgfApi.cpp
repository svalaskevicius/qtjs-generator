
#include "cpgfApi.h"

#include "dynamicMetaObjectBuilder.h"
#include "dynamicQObjectManager.h"
#include "dynamicQObject.h"
#include "closureGenerator.h"

#include <qqmlprivate.h>
#include <QQmlComponent>

#include <qtCore_cpgf_compat.h>

namespace qtjs_binder {

namespace {

typedef void (*CreateIntoFuncPtr)(void *);

void create_into(ffi_cif *cif, void *ret, void* args[], void* classIdx)
{
    Q_UNUSED(ret) Q_UNUSED(cif)
    void *target = *(void **)args[0];
    size_t index = (size_t)classIdx;
    QQmlPrivate::createInto<DynamicQObject>(target);
    ((QQmlPrivate::QQmlElement<DynamicQObject> *)target)->__setClassIdx(index);
}

struct CreateIntoFuncGenerator : ClosureGenerator {

    CreateIntoFuncPtr generate(size_t classIdx) {
        return (CreateIntoFuncPtr) generateClosure(create_into, (void *)classIdx);
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


CreateIntoFuncPtr generateDynamicObjectCreateInto(int classIdx)
{
    static CreateIntoFuncGenerator generator;
    return generator.generate(classIdx);
}

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
        sizeof(DynamicQObject), generateDynamicObjectCreateInto(classIdx),
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

