#pragma once

#include <QObject>
#include <memory>

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"
#include "cpgf/glifecycle.h"

#include <qtQml_cpgf_compat.h>
#include "closureGenerator.h"

#include "dynamicQObjects.h"

#include "QtQml/include/meta_qtqml_qquickitem.h"

namespace qtjs_binder {

void metaCallReadPropertyFromVariant(void *_v, QMetaType::Type type, const QVariant & data);
void metaCallWritePropertyToVariant(void *_v, QMetaType::Type type, QVariant & data);

template <typename ParentClass>
class DynamicQObject : public ParentClass
{
private:
    int classIdx;
    std::map<int, QVariant> propertyStorage;
public:
    void __setClassIdx(int classIdx)
    {
        this->classIdx = classIdx;
        dynamicQObjects().callInit(classIdx, this);
    }

    DynamicQObject() : ParentClass(), classIdx(-1) { }

    template <typename A>
    DynamicQObject(A arg1) : ParentClass(arg1), classIdx(-1) { }

    DynamicQObject(const DynamicQObject &)
    {
        throw std::logic_error("DynamicQObject cannot be copied");
    }

    DynamicQObject & operator=(const DynamicQObject &)
    {
        throw std::logic_error("DynamicQObject cannot be copied");
    }

    const QMetaObject *metaObject() const
    {
        auto ret = dynamicQObjects().getMetaObject(classIdx);
        assert(ret);
        return ret;
    }

    virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a)
    {
        int origId = _id;
        _id = ParentClass::qt_metacall(_c, _id, _a);
        if (_id < 0) {
            return _id;
        }

        if (_c == QMetaObject::InvokeMetaMethod) {
            dynamicQObjects().metacall(classIdx, this, _c, _id, _a);
            return -1;
        } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
            *reinterpret_cast<int*>(_a[0]) = -1;
            return -1;
        }
#ifndef QT_NO_PROPERTIES
        else if (_c == QMetaObject::ReadProperty) {
            auto prop = metaObject()->property(origId);
            QVariant & data = propertyStorage[_id];
            metaCallReadPropertyFromVariant(_a[0], (QMetaType::Type)prop.type(), data);
            return -1;
        } else if (_c == QMetaObject::WriteProperty) {
            auto prop = metaObject()->property(origId);
            metaCallWritePropertyToVariant(_a[0], (QMetaType::Type)prop.type(), propertyStorage[_id]);

            if (prop.hasNotifySignal()) {
                int signal = prop.notifySignalIndex();
                QMetaObject::activate(this, signal, 0);
            }
            return -1;
        } else if (_c == QMetaObject::ResetProperty) {
            return -1;
        } else if (_c == QMetaObject::QueryPropertyDesignable) {
            return -1;
        } else if (_c == QMetaObject::QueryPropertyScriptable) {
            return -1;
        } else if (_c == QMetaObject::QueryPropertyStored) {
            return -1;
        } else if (_c == QMetaObject::QueryPropertyEditable) {
            return -1;
        } else if (_c == QMetaObject::QueryPropertyUser) {
            return -1;
        } else if (_c == QMetaObject::RegisterPropertyMetaType) {
            *reinterpret_cast<int*>(_a[0]) = -1;
            return -1;
        }
    #endif // QT_NO_PROPERTIES
        return _id;
    }
};

}

Q_DECLARE_METATYPE(qtjs_binder::DynamicQObject<QObject>)
Q_DECLARE_METATYPE(qtjs_binder::DynamicQObject<qt_metadata::QQuickItemWrapper>)

namespace qtjs_binder {

template <typename C>
void initialiseCreatedObject(QQmlPrivate::QQmlElement<DynamicQObject<C> > *, int);

typedef void (*CreateIntoFuncPtr)(void *);

template <typename C>
void create_into(ffi_cif *cif, void *ret, void* args[], void* classIdx)
{
    Q_UNUSED(ret) Q_UNUSED(cif)
    void *target = *(void **)args[0];
    size_t index = (size_t)classIdx;
    QQmlPrivate::createInto<C>(target);
    initialiseCreatedObject((QQmlPrivate::QQmlElement<C>*)target, index);
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


template <typename C>
inline QQmlPrivate::RegisterType createQmlRegisterTypeImpl(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    const QMetaObject *metaObject = dynamicQObjects().getMetaObject(classIdx);

    X_QML_GETTYPENAMES;

    return {
        0,

        qRegisterNormalizedMetaType<C *>(pointerName.constData()),
        qRegisterNormalizedMetaType<QQmlListProperty<C> >(listName.constData()),
        sizeof(C), generateDynamicObjectCreateInto<C>(classIdx),
        QString(),

        uri, versionMajor, versionMinor, qmlName, metaObject,

        QQmlPrivate::attachedPropertiesFunc<C>(),
        QQmlPrivate::attachedPropertiesMetaObject<C>(),

        QQmlPrivate::StaticCastSelector<C, QQmlParserStatus>::cast(),
        QQmlPrivate::StaticCastSelector<C, QQmlPropertyValueSource>::cast(),
        QQmlPrivate::StaticCastSelector<C, QQmlPropertyValueInterceptor>::cast(),

        0, 0,

        0,
        0
    };
}


struct DynamicClassSpecification {
    virtual int typeId() = 0;
    virtual void convertQtDataToGVariantData(void *data, cpgf::GVariantData *dest) = 0;
    virtual QQmlPrivate::RegisterType createQmlRegisterType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName) = 0;
    virtual void declareCpgfClass(cpgf::GDefineMetaGlobalDangle &d) = 0;
    virtual QObject* instantiate(int classIdx) = 0;
    virtual std::string getName() = 0;
    virtual const QMetaObject* getParentMetaObject() = 0;
    virtual void *castToTargetAddress(void *) = 0;
};

template <typename Target, typename CastTarget = Target>
struct DynamicClassSpecificationImpl : public DynamicClassSpecification {
    typedef DynamicQObject<Target> DynamicQObjectImpl;

    std::string name;

    DynamicClassSpecificationImpl(std::string name) : name(name) {}
    int typeId() override { return qMetaTypeId<DynamicQObjectImpl>(); }
    void convertQtDataToGVariantData(void *data, cpgf::GVariantData *dest) override {
        *dest = cpgf::createTypedVariant((DynamicQObjectImpl *)data).takeData();
    }
    virtual QQmlPrivate::RegisterType createQmlRegisterType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName) override {
        return createQmlRegisterTypeImpl<DynamicQObjectImpl >(classIdx, uri, versionMajor, versionMinor, qmlName);
    }
    virtual void declareCpgfClass(cpgf::GDefineMetaGlobalDangle &d) override {
        auto _nd = cpgf::GDefineMetaClass<DynamicQObjectImpl, Target>::declare((std::string("DynamicObject_")+name).c_str());
        d._class(_nd);
    }
    virtual QObject* instantiate(int classIdx) override {
        auto ret = new DynamicQObjectImpl();
        ret->__setClassIdx(classIdx);
        return ret;
    }
    virtual std::string getName() override { return name; }
    virtual const QMetaObject* getParentMetaObject() {
        return &Target::staticMetaObject;
    }
    virtual void *castToTargetAddress(void *address) {
        return (CastTarget *)( (Target *) address );
    }
};

struct DynamicClassSpecifications
{
    std::map<int, std::unique_ptr<DynamicClassSpecification>> specifications;
    std::map<std::string, int> classNameToSpecificationId;
    std::map<int, int> classIdToTypeId;
    std::map<int, cpgf::IMetaClass *> classIdToParentClass;

    DynamicClassSpecifications() {
        addSpecification(new DynamicClassSpecificationImpl<QObject>("QObject"));
        addSpecification(new DynamicClassSpecificationImpl<qt_metadata::QQuickItemWrapper, QQuickItem>("QQuickItemWrapper"));
    }

    void addSpecification(DynamicClassSpecification* spec) {
        specifications[spec->typeId()] = std::unique_ptr<DynamicClassSpecification>(spec);
        classNameToSpecificationId[spec->getName()] = spec->typeId();
    }

    void registerClassInstance(int classIdx, cpgf::IMetaClass *parentClass) {
        std::string parentClassName;
        if (parentClass) {
            parentClass->addReference();
            parentClassName = parentClass->getName();
        } else {
            parentClassName = "QObject";
        }
        auto itTypeId = classNameToSpecificationId.find(parentClassName);
        if (itTypeId == classNameToSpecificationId.end()) {
            throw std::logic_error(std::string("registered class ")+parentClassName+" is not supported");
        }
        classIdToTypeId[classIdx] = itTypeId->second;
        classIdToParentClass[classIdx] = parentClass;
    }

    DynamicClassSpecification* byTypeId(int typeId) {
        auto spec = specifications.find(typeId);
        if (spec != specifications.end()) {
            return spec->second.get();
        }
        return nullptr;
    }
    DynamicClassSpecification* byClassIdx(int classIdx) {
        auto itTypeId = classIdToTypeId.find(classIdx);
        if (itTypeId != classIdToTypeId.end()) {
            return byTypeId(itTypeId->second);
        }
        return nullptr;
    }
    cpgf::IMetaClass * getParentClass(int classIdx) {
        return classIdToParentClass[classIdx];
    }
};

extern DynamicClassSpecifications dynamicClassSpecifications;

extern cpgf::IScriptObject * unsafeCpgfScriptObject;

template <typename C>
void initialiseCreatedObject(QQmlPrivate::QQmlElement<DynamicQObject<C> > *target, int index)
{
    target->__setClassIdx(index);
    auto parentClass = dynamicClassSpecifications.getParentClass(index);
    if (parentClass && unsafeCpgfScriptObject) {
        unsafeCpgfScriptObject->getContext()->bindExternalObjectToClass(
            dynamicClassSpecifications.byClassIdx(index)->castToTargetAddress((C *)target),
            parentClass
        );
    }
}



}
