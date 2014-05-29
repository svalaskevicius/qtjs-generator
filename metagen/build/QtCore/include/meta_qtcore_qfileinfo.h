// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QFILEINFO_H
#define CPGF_META_QTCORE_QFILEINFO_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QFileInfo & opErAToRWrapper_QFileInfo__opAssign(QFileInfo * self, const QFileInfo & fileinfo) {
    return (*self) = fileinfo;
}
inline bool opErAToRWrapper_QFileInfo__opEqual(const QFileInfo * self, const QFileInfo & fileinfo) {
    return (*self) == fileinfo;
}
inline bool opErAToRWrapper_QFileInfo__opNotEqual(const QFileInfo * self, const QFileInfo & fileinfo) {
    return (*self) != fileinfo;
}


template <typename D>
void buildMetaClass_QFileInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFile &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDir &, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFileInfo &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setFile", (void (D::ClassType::*) (const QString &))&D::ClassType::setFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFile", (void (D::ClassType::*) (const QFile &))&D::ClassType::setFile);
    _d.CPGF_MD_TEMPLATE _method("setFile", (void (D::ClassType::*) (const QDir &, const QString &))&D::ClassType::setFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("exists", (bool (D::ClassType::*) () const)&D::ClassType::exists);
    _d.CPGF_MD_TEMPLATE _method("refresh", &D::ClassType::refresh);
    _d.CPGF_MD_TEMPLATE _method("filePath", &D::ClassType::filePath);
    _d.CPGF_MD_TEMPLATE _method("absoluteFilePath", &D::ClassType::absoluteFilePath);
    _d.CPGF_MD_TEMPLATE _method("canonicalFilePath", &D::ClassType::canonicalFilePath);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("baseName", &D::ClassType::baseName);
    _d.CPGF_MD_TEMPLATE _method("completeBaseName", &D::ClassType::completeBaseName);
    _d.CPGF_MD_TEMPLATE _method("suffix", &D::ClassType::suffix);
    _d.CPGF_MD_TEMPLATE _method("bundleName", &D::ClassType::bundleName);
    _d.CPGF_MD_TEMPLATE _method("completeSuffix", &D::ClassType::completeSuffix);
    _d.CPGF_MD_TEMPLATE _method("path", &D::ClassType::path);
    _d.CPGF_MD_TEMPLATE _method("absolutePath", &D::ClassType::absolutePath);
    _d.CPGF_MD_TEMPLATE _method("canonicalPath", &D::ClassType::canonicalPath);
    _d.CPGF_MD_TEMPLATE _method("dir", &D::ClassType::dir);
    _d.CPGF_MD_TEMPLATE _method("absoluteDir", &D::ClassType::absoluteDir);
    _d.CPGF_MD_TEMPLATE _method("isReadable", &D::ClassType::isReadable);
    _d.CPGF_MD_TEMPLATE _method("isWritable", &D::ClassType::isWritable);
    _d.CPGF_MD_TEMPLATE _method("isExecutable", &D::ClassType::isExecutable);
    _d.CPGF_MD_TEMPLATE _method("isHidden", &D::ClassType::isHidden);
    _d.CPGF_MD_TEMPLATE _method("isNativePath", &D::ClassType::isNativePath);
    _d.CPGF_MD_TEMPLATE _method("isRelative", &D::ClassType::isRelative);
    _d.CPGF_MD_TEMPLATE _method("isAbsolute", &D::ClassType::isAbsolute);
    _d.CPGF_MD_TEMPLATE _method("makeAbsolute", &D::ClassType::makeAbsolute);
    _d.CPGF_MD_TEMPLATE _method("isFile", &D::ClassType::isFile);
    _d.CPGF_MD_TEMPLATE _method("isDir", &D::ClassType::isDir);
    _d.CPGF_MD_TEMPLATE _method("isSymLink", &D::ClassType::isSymLink);
    _d.CPGF_MD_TEMPLATE _method("isRoot", &D::ClassType::isRoot);
    _d.CPGF_MD_TEMPLATE _method("isBundle", &D::ClassType::isBundle);
    _d.CPGF_MD_TEMPLATE _method("readLink", &D::ClassType::readLink);
    _d.CPGF_MD_TEMPLATE _method("symLinkTarget", &D::ClassType::symLinkTarget);
    _d.CPGF_MD_TEMPLATE _method("owner", &D::ClassType::owner);
    _d.CPGF_MD_TEMPLATE _method("ownerId", &D::ClassType::ownerId);
    _d.CPGF_MD_TEMPLATE _method("group", &D::ClassType::group);
    _d.CPGF_MD_TEMPLATE _method("groupId", &D::ClassType::groupId);
    _d.CPGF_MD_TEMPLATE _method("permission", &D::ClassType::permission);
    _d.CPGF_MD_TEMPLATE _method("permissions", &D::ClassType::permissions);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("created", &D::ClassType::created);
    _d.CPGF_MD_TEMPLATE _method("lastModified", &D::ClassType::lastModified);
    _d.CPGF_MD_TEMPLATE _method("lastRead", &D::ClassType::lastRead);
    _d.CPGF_MD_TEMPLATE _method("caching", &D::ClassType::caching);
    _d.CPGF_MD_TEMPLATE _method("setCaching", &D::ClassType::setCaching);
    _d.CPGF_MD_TEMPLATE _method("exists", (bool (*) (const QString &))&D::ClassType::exists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QFileInfo & (*)(cpgf::GMetaSelf, const QFileInfo &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFileInfo & (*) (QFileInfo *, const QFileInfo &))&opErAToRWrapper_QFileInfo__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFileInfo &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QFileInfo *, const QFileInfo &))&opErAToRWrapper_QFileInfo__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFileInfo &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QFileInfo *, const QFileInfo &))&opErAToRWrapper_QFileInfo__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
