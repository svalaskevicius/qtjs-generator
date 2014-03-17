// Auto generated file, don't modify.

#ifndef __META_QTCORE_QMETAOBJECT_H
#define __META_QTCORE_QMETAOBJECT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmetaobject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_21")
        ._element("Q_METAMETHOD_INVOKE_MAX_ARGS", Q_METAMETHOD_INVOKE_MAX_ARGS)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMetaMethod &, const QMetaMethod &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMetaMethod &, const QMetaMethod &)>(mopHolder != mopHolder);
}


template <typename D>
void buildMetaClass_QMetaClassInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("enclosingMetaObject", &D::ClassType::enclosingMetaObject);
}


template <typename D>
void buildMetaClass_QMetaEnum(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("isFlag", &D::ClassType::isFlag);
    _d.CPGF_MD_TEMPLATE _method("keyCount", &D::ClassType::keyCount);
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("scope", &D::ClassType::scope);
    _d.CPGF_MD_TEMPLATE _method("keyToValue", &D::ClassType::keyToValue)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("valueToKey", &D::ClassType::valueToKey);
    _d.CPGF_MD_TEMPLATE _method("keysToValue", &D::ClassType::keysToValue)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("valueToKeys", &D::ClassType::valueToKeys);
    _d.CPGF_MD_TEMPLATE _method("enclosingMetaObject", &D::ClassType::enclosingMetaObject);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
}


template <typename D>
void buildMetaClass_QMetaMethod(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("methodSignature", &D::ClassType::methodSignature);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("typeName", &D::ClassType::typeName);
    _d.CPGF_MD_TEMPLATE _method("returnType", &D::ClassType::returnType);
    _d.CPGF_MD_TEMPLATE _method("parameterCount", &D::ClassType::parameterCount);
    _d.CPGF_MD_TEMPLATE _method("parameterType", &D::ClassType::parameterType);
    _d.CPGF_MD_TEMPLATE _method("getParameterTypes", &D::ClassType::getParameterTypes);
    _d.CPGF_MD_TEMPLATE _method("parameterTypes", &D::ClassType::parameterTypes);
    _d.CPGF_MD_TEMPLATE _method("parameterNames", &D::ClassType::parameterNames);
    _d.CPGF_MD_TEMPLATE _method("tag", &D::ClassType::tag);
    _d.CPGF_MD_TEMPLATE _method("access", &D::ClassType::access);
    _d.CPGF_MD_TEMPLATE _method("methodType", &D::ClassType::methodType);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("methodIndex", &D::ClassType::methodIndex);
    _d.CPGF_MD_TEMPLATE _method("revision", &D::ClassType::revision);
    _d.CPGF_MD_TEMPLATE _method("enclosingMetaObject", &D::ClassType::enclosingMetaObject);
    _d.CPGF_MD_TEMPLATE _method("invoke", (bool (D::ClassType::*) (QObject *, Qt::ConnectionType, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const)&D::ClassType::invoke)
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
    _d.CPGF_MD_TEMPLATE _method("invoke", (bool (D::ClassType::*) (QObject *, QGenericReturnArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const)&D::ClassType::invoke)
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
    _d.CPGF_MD_TEMPLATE _method("invoke", (bool (D::ClassType::*) (QObject *, Qt::ConnectionType, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const)&D::ClassType::invoke)
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
    _d.CPGF_MD_TEMPLATE _method("invoke", (bool (D::ClassType::*) (QObject *, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument, QGenericArgument) const)&D::ClassType::invoke)
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
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Access>("Access")
        ._element("Private", D::ClassType::Private)
        ._element("Protected", D::ClassType::Protected)
        ._element("Public", D::ClassType::Public)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MethodType>("MethodType")
        ._element("Method", D::ClassType::Method)
        ._element("Signal", D::ClassType::Signal)
        ._element("Slot", D::ClassType::Slot)
        ._element("Constructor", D::ClassType::Constructor)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Attributes>("Attributes")
        ._element("Compatibility", D::ClassType::Compatibility)
        ._element("Cloned", D::ClassType::Cloned)
        ._element("Scriptable", D::ClassType::Scriptable)
    ;
}


template <typename D>
void buildMetaClass_QMetaProperty(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("typeName", &D::ClassType::typeName);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("userType", &D::ClassType::userType);
    _d.CPGF_MD_TEMPLATE _method("propertyIndex", &D::ClassType::propertyIndex);
    _d.CPGF_MD_TEMPLATE _method("isReadable", &D::ClassType::isReadable);
    _d.CPGF_MD_TEMPLATE _method("isWritable", &D::ClassType::isWritable);
    _d.CPGF_MD_TEMPLATE _method("isResettable", &D::ClassType::isResettable);
    _d.CPGF_MD_TEMPLATE _method("isDesignable", &D::ClassType::isDesignable)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isScriptable", &D::ClassType::isScriptable)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isStored", &D::ClassType::isStored)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isEditable", &D::ClassType::isEditable)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isUser", &D::ClassType::isUser)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isConstant", &D::ClassType::isConstant);
    _d.CPGF_MD_TEMPLATE _method("isFinal", &D::ClassType::isFinal);
    _d.CPGF_MD_TEMPLATE _method("isFlagType", &D::ClassType::isFlagType);
    _d.CPGF_MD_TEMPLATE _method("isEnumType", &D::ClassType::isEnumType);
    _d.CPGF_MD_TEMPLATE _method("enumerator", &D::ClassType::enumerator);
    _d.CPGF_MD_TEMPLATE _method("hasNotifySignal", &D::ClassType::hasNotifySignal);
    _d.CPGF_MD_TEMPLATE _method("notifySignal", &D::ClassType::notifySignal);
    _d.CPGF_MD_TEMPLATE _method("notifySignalIndex", &D::ClassType::notifySignalIndex);
    _d.CPGF_MD_TEMPLATE _method("revision", &D::ClassType::revision);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("hasStdCppSet", &D::ClassType::hasStdCppSet);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("enclosingMetaObject", &D::ClassType::enclosingMetaObject);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
