// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKPIXMAPCACHE_P_H
#define CPGF_META_QTQML_QQUICKPIXMAPCACHE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickPixmap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QUrl &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QUrl &, const QSize &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isReady", &D::ClassType::isReady);
    _d.CPGF_MD_TEMPLATE _method("isError", &D::ClassType::isError);
    _d.CPGF_MD_TEMPLATE _method("isLoading", &D::ClassType::isLoading);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("url", &D::ClassType::url, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("implicitSize", &D::ClassType::implicitSize);
    _d.CPGF_MD_TEMPLATE _method("requestSize", &D::ClassType::requestSize);
    _d.CPGF_MD_TEMPLATE _method("image", &D::ClassType::image, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setImage", &D::ClassType::setImage);
    _d.CPGF_MD_TEMPLATE _method("textureFactory", &D::ClassType::textureFactory);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("load", (void (D::ClassType::*) (QQmlEngine *, const QUrl &))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("load", (void (D::ClassType::*) (QQmlEngine *, const QUrl &, QQuickPixmap::Options))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("load", (void (D::ClassType::*) (QQmlEngine *, const QUrl &, const QSize &))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("load", (void (D::ClassType::*) (QQmlEngine *, const QUrl &, const QSize &, QQuickPixmap::Options))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("clear", (void (D::ClassType::*) ())&D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("clear", (void (D::ClassType::*) (QObject *))&D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("connectFinished", (bool (D::ClassType::*) (QObject *, const char *))&D::ClassType::connectFinished);
    _d.CPGF_MD_TEMPLATE _method("connectFinished", (bool (D::ClassType::*) (QObject *, int))&D::ClassType::connectFinished);
    _d.CPGF_MD_TEMPLATE _method("connectDownloadProgress", (bool (D::ClassType::*) (QObject *, const char *))&D::ClassType::connectDownloadProgress);
    _d.CPGF_MD_TEMPLATE _method("connectDownloadProgress", (bool (D::ClassType::*) (QObject *, int))&D::ClassType::connectDownloadProgress);
    _d.CPGF_MD_TEMPLATE _method("purgeCache", &D::ClassType::purgeCache);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Null", D::ClassType::Null)
        ._element("Ready", D::ClassType::Ready)
        ._element("Error", D::ClassType::Error)
        ._element("Loading", D::ClassType::Loading)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Option>("Option")
        ._element("Asynchronous", D::ClassType::Asynchronous)
        ._element("Cache", D::ClassType::Cache)
    ;
    {
        GDefineMetaClass<QFlags<typename QQuickPixmap::Option > > _t_d = GDefineMetaClass<QFlags<typename QQuickPixmap::Option > >::lazyDeclare("Options", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QQuickPixmap::Option > >, typename QQuickPixmap::Option >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
