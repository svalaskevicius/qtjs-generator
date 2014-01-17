// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLPROPERTY_H
#define __META_QTQML_QQMLPROPERTY_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_Global_qqmlproperty(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QQmlProperty &))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


inline QQmlProperty & opErAToRWrapper_QQmlProperty__opAssign(QQmlProperty * self, const QQmlProperty & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QQmlProperty__opEqual(const QQmlProperty * self, const QQmlProperty & __arg0) {
    return (*self) == __arg0;
}


template <typename D>
void buildMetaClass_QQmlProperty(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QQmlContext *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QQmlEngine *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, const QString &, QQmlContext *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, const QString &, QQmlEngine *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QQmlProperty &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isProperty", &D::ClassType::isProperty);
    _d.CPGF_MD_TEMPLATE _method("isSignalProperty", &D::ClassType::isSignalProperty);
    _d.CPGF_MD_TEMPLATE _method("propertyType", &D::ClassType::propertyType);
    _d.CPGF_MD_TEMPLATE _method("propertyTypeCategory", &D::ClassType::propertyTypeCategory);
    _d.CPGF_MD_TEMPLATE _method("propertyTypeName", &D::ClassType::propertyTypeName);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("read", (QVariant (D::ClassType::*) () const)&D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("write", (bool (D::ClassType::*) (const QVariant &) const)&D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("hasNotifySignal", &D::ClassType::hasNotifySignal);
    _d.CPGF_MD_TEMPLATE _method("needsNotifySignal", &D::ClassType::needsNotifySignal);
    _d.CPGF_MD_TEMPLATE _method("connectNotifySignal", (bool (D::ClassType::*) (QObject *, const char *) const)&D::ClassType::connectNotifySignal);
    _d.CPGF_MD_TEMPLATE _method("connectNotifySignal", (bool (D::ClassType::*) (QObject *, int) const)&D::ClassType::connectNotifySignal);
    _d.CPGF_MD_TEMPLATE _method("isWritable", &D::ClassType::isWritable);
    _d.CPGF_MD_TEMPLATE _method("isDesignable", &D::ClassType::isDesignable);
    _d.CPGF_MD_TEMPLATE _method("isResettable", &D::ClassType::isResettable);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("index", &D::ClassType::index);
    _d.CPGF_MD_TEMPLATE _method("property", &D::ClassType::property);
    _d.CPGF_MD_TEMPLATE _method("method", &D::ClassType::method);
    _d.CPGF_MD_TEMPLATE _method("read", (QVariant (*) (const QObject *, const QString &))&D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("read", (QVariant (*) (const QObject *, const QString &, QQmlContext *))&D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("read", (QVariant (*) (const QObject *, const QString &, QQmlEngine *))&D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("write", (bool (*) (QObject *, const QString &, const QVariant &))&D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("write", (bool (*) (QObject *, const QString &, const QVariant &, QQmlContext *))&D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("write", (bool (*) (QObject *, const QString &, const QVariant &, QQmlEngine *))&D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PropertyTypeCategory>("PropertyTypeCategory")
        ._element("InvalidCategory", D::ClassType::InvalidCategory)
        ._element("List", D::ClassType::List)
        ._element("Object", D::ClassType::Object)
        ._element("Normal", D::ClassType::Normal)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("Invalid", D::ClassType::Invalid)
        ._element("Property", D::ClassType::Property)
        ._element("SignalProperty", D::ClassType::SignalProperty)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QQmlProperty & (*)(cpgf::GMetaSelf, const QQmlProperty &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QQmlProperty & (*) (QQmlProperty *, const QQmlProperty &))&opErAToRWrapper_QQmlProperty__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QQmlProperty &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QQmlProperty *, const QQmlProperty &))&opErAToRWrapper_QQmlProperty__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
