// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLCOMPONENT_H
#define __META_QTQML_QQMLCOMPONENT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQmlComponent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QString &, QQmlComponent::CompilationMode, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QUrl &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QUrl &, QQmlComponent::CompilationMode, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isReady", &D::ClassType::isReady);
    _d.CPGF_MD_TEMPLATE _method("isError", &D::ClassType::isError);
    _d.CPGF_MD_TEMPLATE _method("isLoading", &D::ClassType::isLoading);
    _d.CPGF_MD_TEMPLATE _method("errors", &D::ClassType::errors);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("progress", &D::ClassType::progress);
    _d.CPGF_MD_TEMPLATE _method("url", &D::ClassType::url);
    _d.CPGF_MD_TEMPLATE _method("create", (QObject * (D::ClassType::*) (QQmlContext *))&D::ClassType::create, cpgf::MakePolicy<cpgf::GMetaRuleTransferOwnership<-1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("beginCreate", &D::ClassType::beginCreate);
    _d.CPGF_MD_TEMPLATE _method("completeCreate", &D::ClassType::completeCreate);
    _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (QQmlIncubator &, QQmlContext *, QQmlContext *))&D::ClassType::create, cpgf::MakePolicy<cpgf::GMetaRuleTransferOwnership<-1>, cpgf::GMetaRuleParamNoncopyable<0> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("creationContext", &D::ClassType::creationContext);
    _d.CPGF_MD_TEMPLATE _method("loadUrl", (void (D::ClassType::*) (const QUrl &))&D::ClassType::loadUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("loadUrl", (void (D::ClassType::*) (const QUrl &, QQmlComponent::CompilationMode))&D::ClassType::loadUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("statusChanged", &D::ClassType::statusChanged);
    _d.CPGF_MD_TEMPLATE _method("progressChanged", &D::ClassType::progressChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CompilationMode>("CompilationMode")
        ._element("PreferSynchronous", D::ClassType::PreferSynchronous)
        ._element("Asynchronous", D::ClassType::Asynchronous)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Null", D::ClassType::Null)
        ._element("Ready", D::ClassType::Ready)
        ._element("Loading", D::ClassType::Loading)
        ._element("Error", D::ClassType::Error)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
