// Auto generated file, don't modify.

#ifndef __META_QTCORE_QFILE_H
#define __META_QTCORE_QFILE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QFile(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("setFileName", &D::ClassType::setFileName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("exists", (bool (D::ClassType::*) () const)&D::ClassType::exists);
    _d.CPGF_MD_TEMPLATE _method("readLink", (QString (D::ClassType::*) () const)&D::ClassType::readLink);
    _d.CPGF_MD_TEMPLATE _method("symLinkTarget", (QString (D::ClassType::*) () const)&D::ClassType::symLinkTarget);
    _d.CPGF_MD_TEMPLATE _method("remove", (bool (D::ClassType::*) ())&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("rename", (bool (D::ClassType::*) (const QString &))&D::ClassType::rename, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("link", (bool (D::ClassType::*) (const QString &))&D::ClassType::link, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("copy", (bool (D::ClassType::*) (const QString &))&D::ClassType::copy, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("open", (bool (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::open);
    _d.CPGF_MD_TEMPLATE _method("open", (bool (D::ClassType::*) (FILE *, QIODevice::OpenMode, QFileDevice::FileHandleFlags))&D::ClassType::open)
        ._default(copyVariantFromCopyable(QFileDevice::DontCloseHandle))
    ;
    _d.CPGF_MD_TEMPLATE _method("open", (bool (D::ClassType::*) (int, QIODevice::OpenMode, QFileDevice::FileHandleFlags))&D::ClassType::open)
        ._default(copyVariantFromCopyable(QFileDevice::DontCloseHandle))
    ;
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("resize", (bool (D::ClassType::*) (qint64))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("permissions", (QFileDevice::Permissions (D::ClassType::*) () const)&D::ClassType::permissions);
    _d.CPGF_MD_TEMPLATE _method("setPermissions", (bool (D::ClassType::*) (QFileDevice::Permissions))&D::ClassType::setPermissions);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("encodeName", &D::ClassType::encodeName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("decodeName", (QString (*) (const QByteArray &))&D::ClassType::decodeName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("decodeName", (QString (*) (const char *))&D::ClassType::decodeName);
    _d.CPGF_MD_TEMPLATE _method("exists", (bool (*) (const QString &))&D::ClassType::exists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("readLink", (QString (*) (const QString &))&D::ClassType::readLink, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("symLinkTarget", (QString (*) (const QString &))&D::ClassType::symLinkTarget, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("remove", (bool (*) (const QString &))&D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rename", (bool (*) (const QString &, const QString &))&D::ClassType::rename, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("link", (bool (*) (const QString &, const QString &))&D::ClassType::link, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("copy", (bool (*) (const QString &, const QString &))&D::ClassType::copy, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("resize", (bool (*) (const QString &, qint64))&D::ClassType::resize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("permissions", (QFileDevice::Permissions (*) (const QString &))&D::ClassType::permissions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPermissions", (bool (*) (const QString &, QFileDevice::Permissions))&D::ClassType::setPermissions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
