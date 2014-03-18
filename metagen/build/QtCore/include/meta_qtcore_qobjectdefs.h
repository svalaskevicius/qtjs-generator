// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QOBJECTDEFS_H
#define CPGF_META_QTCORE_QOBJECTDEFS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qobjectdefs(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFlagLocation", (const char* (*) (const char *))&qFlagLocation);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_24")
        ._element("Q_MOC_OUTPUT_REVISION", Q_MOC_OUTPUT_REVISION)
    ;
}


template <typename D, typename Object>
void buildMetaClass_HasQ_OBJECT_Macro(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("test", (int (*) (int(Object::*)(QMetaObject::Call, int, void **)))&D::ClassType::test);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, class T>
void buildMetaClass_QArgument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, const T &)>();
}


template <typename D>
void buildMetaClass_QGenericArgument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, const void *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
}


template <typename D>
void buildMetaClass_QGenericReturnArgument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, void *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
}


inline QMetaObject::Connection& opErAToRWrapper_QMetaObject_Connection__opAssign(QMetaObject::Connection * self, const QMetaObject::Connection& other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QMetaObject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("className", &D::ClassType::className);
    _d.CPGF_MD_TEMPLATE _method("superClass", &D::ClassType::superClass);
    _d.CPGF_MD_TEMPLATE _method("cast", (QObject * (D::ClassType::*) (QObject *) const)&D::ClassType::cast);
    _d.CPGF_MD_TEMPLATE _method("cast", (const QObject * (D::ClassType::*) (const QObject *) const)&D::ClassType::cast);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("methodOffset", &D::ClassType::methodOffset);
    _d.CPGF_MD_TEMPLATE _method("enumeratorOffset", &D::ClassType::enumeratorOffset);
    _d.CPGF_MD_TEMPLATE _method("propertyOffset", &D::ClassType::propertyOffset);
    _d.CPGF_MD_TEMPLATE _method("classInfoOffset", &D::ClassType::classInfoOffset);
    _d.CPGF_MD_TEMPLATE _method("constructorCount", &D::ClassType::constructorCount);
    _d.CPGF_MD_TEMPLATE _method("methodCount", &D::ClassType::methodCount);
    _d.CPGF_MD_TEMPLATE _method("enumeratorCount", &D::ClassType::enumeratorCount);
    _d.CPGF_MD_TEMPLATE _method("propertyCount", &D::ClassType::propertyCount);
    _d.CPGF_MD_TEMPLATE _method("classInfoCount", &D::ClassType::classInfoCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfConstructor", &D::ClassType::indexOfConstructor);
    _d.CPGF_MD_TEMPLATE _method("indexOfMethod", &D::ClassType::indexOfMethod);
    _d.CPGF_MD_TEMPLATE _method("indexOfSignal", &D::ClassType::indexOfSignal);
    _d.CPGF_MD_TEMPLATE _method("indexOfSlot", &D::ClassType::indexOfSlot);
    _d.CPGF_MD_TEMPLATE _method("indexOfEnumerator", &D::ClassType::indexOfEnumerator);
    _d.CPGF_MD_TEMPLATE _method("indexOfProperty", &D::ClassType::indexOfProperty);
    _d.CPGF_MD_TEMPLATE _method("indexOfClassInfo", &D::ClassType::indexOfClassInfo);
    _d.CPGF_MD_TEMPLATE _method("constructor", &D::ClassType::constructor);
    _d.CPGF_MD_TEMPLATE _method("method", &D::ClassType::method);
    _d.CPGF_MD_TEMPLATE _method("enumerator", &D::ClassType::enumerator);
    _d.CPGF_MD_TEMPLATE _method("property", &D::ClassType::property);
    _d.CPGF_MD_TEMPLATE _method("classInfo", &D::ClassType::classInfo);
    _d.CPGF_MD_TEMPLATE _method("userProperty", &D::ClassType::userProperty);
    _d.CPGF_MD_TEMPLATE _method("newInstance", &D::ClassType::newInstance)
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument(0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("checkConnectArgs", (bool (*) (const char *, const char *))&D::ClassType::checkConnectArgs);
    _d.CPGF_MD_TEMPLATE _method("checkConnectArgs", (bool (*) (const QMetaMethod &, const QMetaMethod &))&D::ClassType::checkConnectArgs);
    _d.CPGF_MD_TEMPLATE _method("normalizedSignature", &D::ClassType::normalizedSignature);
    _d.CPGF_MD_TEMPLATE _method("normalizedType", &D::ClassType::normalizedType);
    _d.CPGF_MD_TEMPLATE _method("connect", &D::ClassType::connect)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("disconnect", &D::ClassType::disconnect);
    _d.CPGF_MD_TEMPLATE _method("disconnectOne", &D::ClassType::disconnectOne);
    _d.CPGF_MD_TEMPLATE _method("connectSlotsByName", &D::ClassType::connectSlotsByName);
    _d.CPGF_MD_TEMPLATE _method("activate", (void (*) (QObject *, int, void **))&D::ClassType::activate);
    _d.CPGF_MD_TEMPLATE _method("activate", (void (*) (QObject *, const QMetaObject *, int, void **))&D::ClassType::activate);
    _d.CPGF_MD_TEMPLATE _method("activate", (void (*) (QObject *, int, int, void **))&D::ClassType::activate);
    _d.CPGF_MD_TEMPLATE _method("invokeMethod", (bool (*) (QObject *, const char *, Qt::ConnectionType, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument))&D::ClassType::invokeMethod)
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument(0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("invokeMethod", (bool (*) (QObject *, const char *, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument))&D::ClassType::invokeMethod)
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument(0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("invokeMethod", (bool (*) (QObject *, const char *, Qt::ConnectionType, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument))&D::ClassType::invokeMethod)
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument(0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("invokeMethod", (bool (*) (QObject *, const char *, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument))&D::ClassType::invokeMethod)
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument()))
        ._default(copyVariantFromCopyable(QGenericArgument(0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("metacall", &D::ClassType::metacall);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Call>("Call")
        ._element("InvokeMetaMethod", D::ClassType::InvokeMetaMethod)
        ._element("ReadProperty", D::ClassType::ReadProperty)
        ._element("WriteProperty", D::ClassType::WriteProperty)
        ._element("ResetProperty", D::ClassType::ResetProperty)
        ._element("QueryPropertyDesignable", D::ClassType::QueryPropertyDesignable)
        ._element("QueryPropertyScriptable", D::ClassType::QueryPropertyScriptable)
        ._element("QueryPropertyStored", D::ClassType::QueryPropertyStored)
        ._element("QueryPropertyEditable", D::ClassType::QueryPropertyEditable)
        ._element("QueryPropertyUser", D::ClassType::QueryPropertyUser)
        ._element("CreateInstance", D::ClassType::CreateInstance)
        ._element("IndexOfMethod", D::ClassType::IndexOfMethod)
        ._element("RegisterPropertyMetaType", D::ClassType::RegisterPropertyMetaType)
        ._element("RegisterMethodArgumentMetaType", D::ClassType::RegisterMethodArgumentMetaType)
    ;
}


template <typename D, typename T>
void buildMetaClass_QReturnArgument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, T &)>();
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
