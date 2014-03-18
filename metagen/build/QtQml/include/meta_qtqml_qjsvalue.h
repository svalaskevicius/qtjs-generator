// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QJSVALUE_H
#define CPGF_META_QTQML_QJSVALUE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QJSValue & opErAToRWrapper_QJSValue__opAssign(QJSValue * self, const QJSValue & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QJSValue(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QJSValue::SpecialValue)>()
        ._default(copyVariantFromCopyable(QJSValue::UndefinedValue))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJSValue &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (bool)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uint)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (double)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLatin1String &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _method("isBool", &D::ClassType::isBool);
    _d.CPGF_MD_TEMPLATE _method("isNumber", &D::ClassType::isNumber);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isString", &D::ClassType::isString);
    _d.CPGF_MD_TEMPLATE _method("isUndefined", &D::ClassType::isUndefined);
    _d.CPGF_MD_TEMPLATE _method("isVariant", &D::ClassType::isVariant);
    _d.CPGF_MD_TEMPLATE _method("isQObject", &D::ClassType::isQObject);
    _d.CPGF_MD_TEMPLATE _method("isObject", &D::ClassType::isObject);
    _d.CPGF_MD_TEMPLATE _method("isDate", &D::ClassType::isDate);
    _d.CPGF_MD_TEMPLATE _method("isRegExp", &D::ClassType::isRegExp);
    _d.CPGF_MD_TEMPLATE _method("isArray", &D::ClassType::isArray);
    _d.CPGF_MD_TEMPLATE _method("isError", &D::ClassType::isError);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _method("toNumber", &D::ClassType::toNumber);
    _d.CPGF_MD_TEMPLATE _method("toInt", &D::ClassType::toInt);
    _d.CPGF_MD_TEMPLATE _method("toUInt", &D::ClassType::toUInt);
    _d.CPGF_MD_TEMPLATE _method("toBool", &D::ClassType::toBool);
    _d.CPGF_MD_TEMPLATE _method("toVariant", &D::ClassType::toVariant);
    _d.CPGF_MD_TEMPLATE _method("toQObject", &D::ClassType::toQObject);
    _d.CPGF_MD_TEMPLATE _method("toDateTime", &D::ClassType::toDateTime);
    _d.CPGF_MD_TEMPLATE _method("equals", &D::ClassType::equals, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("strictlyEquals", &D::ClassType::strictlyEquals, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("prototype", &D::ClassType::prototype);
    _d.CPGF_MD_TEMPLATE _method("setPrototype", &D::ClassType::setPrototype, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("property", (QJSValue (D::ClassType::*) (const QString &) const)&D::ClassType::property, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setProperty", (void (D::ClassType::*) (const QString &, const QJSValue &))&D::ClassType::setProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("hasProperty", &D::ClassType::hasProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hasOwnProperty", &D::ClassType::hasOwnProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("property", (QJSValue (D::ClassType::*) (quint32) const)&D::ClassType::property);
    _d.CPGF_MD_TEMPLATE _method("setProperty", (void (D::ClassType::*) (quint32, const QJSValue &))&D::ClassType::setProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("deleteProperty", &D::ClassType::deleteProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isCallable", &D::ClassType::isCallable);
    _d.CPGF_MD_TEMPLATE _method("call", &D::ClassType::call)
        ._default(copyVariantFromCopyable(QJSValueList()))
    ;
    _d.CPGF_MD_TEMPLATE _method("callWithInstance", &D::ClassType::callWithInstance, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QJSValueList()))
    ;
    _d.CPGF_MD_TEMPLATE _method("callAsConstructor", &D::ClassType::callAsConstructor)
        ._default(copyVariantFromCopyable(QJSValueList()))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SpecialValue>("SpecialValue")
        ._element("NullValue", D::ClassType::NullValue)
        ._element("UndefinedValue", D::ClassType::UndefinedValue)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QJSValue & (*)(cpgf::GMetaSelf, const QJSValue &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJSValue & (*) (QJSValue *, const QJSValue &))&opErAToRWrapper_QJSValue__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
