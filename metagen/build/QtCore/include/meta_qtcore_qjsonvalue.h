// Auto generated file, don't modify.

#ifndef __META_QTCORE_QJSONVALUE_H
#define __META_QTCORE_QJSONVALUE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QJsonPrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qjsonvalue(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QJsonValue &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QJsonValue & opErAToRWrapper_QJsonValue__opAssign(QJsonValue * self, const QJsonValue & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QJsonValue__opEqual(const QJsonValue * self, const QJsonValue & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonValue__opNotEqual(const QJsonValue * self, const QJsonValue & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QJsonValue(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QJsonValue::Type)>()
        ._default(copyVariantFromCopyable(QJsonValue::Null))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (bool)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (double)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qint64)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QLatin1String)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonObject &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonValue &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toVariant", &D::ClassType::toVariant);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isBool", &D::ClassType::isBool);
    _d.CPGF_MD_TEMPLATE _method("isDouble", &D::ClassType::isDouble);
    _d.CPGF_MD_TEMPLATE _method("isString", &D::ClassType::isString);
    _d.CPGF_MD_TEMPLATE _method("isArray", &D::ClassType::isArray);
    _d.CPGF_MD_TEMPLATE _method("isObject", &D::ClassType::isObject);
    _d.CPGF_MD_TEMPLATE _method("isUndefined", &D::ClassType::isUndefined);
    _d.CPGF_MD_TEMPLATE _method("toBool", &D::ClassType::toBool)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("toInt", &D::ClassType::toInt)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toDouble", &D::ClassType::toDouble)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("toArray", (QJsonArray (D::ClassType::*) () const)&D::ClassType::toArray);
    _d.CPGF_MD_TEMPLATE _method("toArray", (QJsonArray (D::ClassType::*) (const QJsonArray &) const)&D::ClassType::toArray);
    _d.CPGF_MD_TEMPLATE _method("toObject", (QJsonObject (D::ClassType::*) () const)&D::ClassType::toObject);
    _d.CPGF_MD_TEMPLATE _method("toObject", (QJsonObject (D::ClassType::*) (const QJsonObject &) const)&D::ClassType::toObject);
    _d.CPGF_MD_TEMPLATE _method("fromVariant", &D::ClassType::fromVariant, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("Null", D::ClassType::Null)
        ._element("Bool", D::ClassType::Bool)
        ._element("Double", D::ClassType::Double)
        ._element("String", D::ClassType::String)
        ._element("Array", D::ClassType::Array)
        ._element("Object", D::ClassType::Object)
        ._element("Undefined", D::ClassType::Undefined)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QJsonValue & (*)(cpgf::GMetaSelf, const QJsonValue &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJsonValue & (*) (QJsonValue *, const QJsonValue &))&opErAToRWrapper_QJsonValue__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonValue &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonValue *, const QJsonValue &))&opErAToRWrapper_QJsonValue__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonValue &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonValue *, const QJsonValue &))&opErAToRWrapper_QJsonValue__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


inline QJsonValueRef & opErAToRWrapper_QJsonValueRef__opAssign(QJsonValueRef * self, const QJsonValue & val) {
    return (*self) = val;
}
inline QJsonValueRef & opErAToRWrapper_QJsonValueRef__opAssign(QJsonValueRef * self, const QJsonValueRef & val) {
    return (*self) = val;
}
inline bool opErAToRWrapper_QJsonValueRef__opEqual(const QJsonValueRef * self, const QJsonValue & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonValueRef__opNotEqual(const QJsonValueRef * self, const QJsonValue & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QJsonValueRef(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QJsonArray *, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QJsonObject *, int)>();
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isBool", &D::ClassType::isBool);
    _d.CPGF_MD_TEMPLATE _method("isDouble", &D::ClassType::isDouble);
    _d.CPGF_MD_TEMPLATE _method("isString", &D::ClassType::isString);
    _d.CPGF_MD_TEMPLATE _method("isArray", &D::ClassType::isArray);
    _d.CPGF_MD_TEMPLATE _method("isObject", &D::ClassType::isObject);
    _d.CPGF_MD_TEMPLATE _method("isUndefined", &D::ClassType::isUndefined);
    _d.CPGF_MD_TEMPLATE _method("toBool", &D::ClassType::toBool);
    _d.CPGF_MD_TEMPLATE _method("toInt", &D::ClassType::toInt);
    _d.CPGF_MD_TEMPLATE _method("toDouble", &D::ClassType::toDouble);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _method("toArray", &D::ClassType::toArray);
    _d.CPGF_MD_TEMPLATE _method("toObject", &D::ClassType::toObject);
    _d.CPGF_MD_TEMPLATE _operator< QJsonValue (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<QJsonValueRef & (*)(cpgf::GMetaSelf, const QJsonValue &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJsonValueRef & (*) (QJsonValueRef *, const QJsonValue &))&opErAToRWrapper_QJsonValueRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QJsonValueRef & (*)(cpgf::GMetaSelf, const QJsonValueRef &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJsonValueRef & (*) (QJsonValueRef *, const QJsonValueRef &))&opErAToRWrapper_QJsonValueRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonValue &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonValueRef *, const QJsonValue &))&opErAToRWrapper_QJsonValueRef__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonValue &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonValueRef *, const QJsonValue &))&opErAToRWrapper_QJsonValueRef__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
