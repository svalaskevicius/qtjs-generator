// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLFILE_H
#define CPGF_META_QTQML_QQMLFILE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQmlFile(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QUrl &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isReady", &D::ClassType::isReady);
    _d.CPGF_MD_TEMPLATE _method("isError", &D::ClassType::isError);
    _d.CPGF_MD_TEMPLATE _method("isLoading", &D::ClassType::isLoading);
    _d.CPGF_MD_TEMPLATE _method("url", &D::ClassType::url);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("dataByteArray", &D::ClassType::dataByteArray);
    _d.CPGF_MD_TEMPLATE _method("metaData", &D::ClassType::metaData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("load", (void (D::ClassType::*) (QQmlEngine *, const QUrl &))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("load", (void (D::ClassType::*) (QQmlEngine *, const QString &))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("clear", (void (D::ClassType::*) ())&D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("clear", (void (D::ClassType::*) (QObject *))&D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("connectFinished", (bool (D::ClassType::*) (QObject *, const char *))&D::ClassType::connectFinished);
    _d.CPGF_MD_TEMPLATE _method("connectFinished", (bool (D::ClassType::*) (QObject *, int))&D::ClassType::connectFinished);
    _d.CPGF_MD_TEMPLATE _method("connectDownloadProgress", (bool (D::ClassType::*) (QObject *, const char *))&D::ClassType::connectDownloadProgress);
    _d.CPGF_MD_TEMPLATE _method("connectDownloadProgress", (bool (D::ClassType::*) (QObject *, int))&D::ClassType::connectDownloadProgress);
    _d.CPGF_MD_TEMPLATE _method("isSynchronous", (bool (*) (const QString &))&D::ClassType::isSynchronous, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isSynchronous", (bool (*) (const QUrl &))&D::ClassType::isSynchronous, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isBundle", (bool (*) (const QString &))&D::ClassType::isBundle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isBundle", (bool (*) (const QUrl &))&D::ClassType::isBundle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isLocalFile", (bool (*) (const QString &))&D::ClassType::isLocalFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isLocalFile", (bool (*) (const QUrl &))&D::ClassType::isLocalFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("urlToLocalFileOrQrc", (QString (*) (const QString &))&D::ClassType::urlToLocalFileOrQrc, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("urlToLocalFileOrQrc", (QString (*) (const QUrl &))&D::ClassType::urlToLocalFileOrQrc, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bundleDirectoryExists", (bool (*) (const QString &, QQmlEngine *))&D::ClassType::bundleDirectoryExists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bundleDirectoryExists", (bool (*) (const QUrl &, QQmlEngine *))&D::ClassType::bundleDirectoryExists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bundleFileExists", (bool (*) (const QString &, QQmlEngine *))&D::ClassType::bundleFileExists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bundleFileExists", (bool (*) (const QUrl &, QQmlEngine *))&D::ClassType::bundleFileExists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bundleFileName", (QString (*) (const QString &, QQmlEngine *))&D::ClassType::bundleFileName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bundleFileName", (QString (*) (const QUrl &, QQmlEngine *))&D::ClassType::bundleFileName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Null", D::ClassType::Null)
        ._element("Ready", D::ClassType::Ready)
        ._element("Error", D::ClassType::Error)
        ._element("Loading", D::ClassType::Loading)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
