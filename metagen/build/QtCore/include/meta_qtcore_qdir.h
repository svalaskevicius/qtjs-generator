// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QDIR_H
#define CPGF_META_QTCORE_QDIR_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qdir(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QDir::Filters)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QDir &)>(mopHolder << mopHolder);
}


inline QDir & opErAToRWrapper_QDir__opAssign(QDir * self, const QDir & __arg0) {
    return (*self) = __arg0;
}
inline QDir & opErAToRWrapper_QDir__opAssign(QDir * self, const QString & path) {
    return (*self) = path;
}
inline QString opErAToRWrapper_QDir__opArrayGet(const QDir * self, int __arg0) {
    return (*self)[__arg0];
}
inline bool opErAToRWrapper_QDir__opEqual(const QDir * self, const QDir & dir) {
    return (*self) == dir;
}
inline bool opErAToRWrapper_QDir__opNotEqual(const QDir * self, const QDir & dir) {
    return (*self) != dir;
}


template <typename D>
void buildMetaClass_QDir(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDir &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QString &, QDir::SortFlags, QDir::Filters)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QDir::AllEntries))
        ._default(copyVariantFromCopyable(QDir::SortFlags(QDir::Name|QDir::IgnoreCase)))
    ;
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setPath", &D::ClassType::setPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("path", &D::ClassType::path);
    _d.CPGF_MD_TEMPLATE _method("absolutePath", &D::ClassType::absolutePath);
    _d.CPGF_MD_TEMPLATE _method("canonicalPath", &D::ClassType::canonicalPath);
    _d.CPGF_MD_TEMPLATE _method("dirName", &D::ClassType::dirName);
    _d.CPGF_MD_TEMPLATE _method("filePath", &D::ClassType::filePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("absoluteFilePath", &D::ClassType::absoluteFilePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("relativeFilePath", &D::ClassType::relativeFilePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cd", &D::ClassType::cd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cdUp", &D::ClassType::cdUp);
    _d.CPGF_MD_TEMPLATE _method("nameFilters", &D::ClassType::nameFilters);
    _d.CPGF_MD_TEMPLATE _method("setNameFilters", &D::ClassType::setNameFilters, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("filter", &D::ClassType::filter);
    _d.CPGF_MD_TEMPLATE _method("setFilter", &D::ClassType::setFilter);
    _d.CPGF_MD_TEMPLATE _method("sorting", &D::ClassType::sorting);
    _d.CPGF_MD_TEMPLATE _method("setSorting", &D::ClassType::setSorting);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("entryList", (QStringList (D::ClassType::*) (QDir::Filters, QDir::SortFlags) const)&D::ClassType::entryList)
        ._default(copyVariantFromCopyable(QDir::NoSort))
        ._default(copyVariantFromCopyable(QDir::NoFilter))
    ;
    _d.CPGF_MD_TEMPLATE _method("entryList", (QStringList (D::ClassType::*) (const QStringList &, QDir::Filters, QDir::SortFlags) const)&D::ClassType::entryList, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QDir::NoSort))
        ._default(copyVariantFromCopyable(QDir::NoFilter))
    ;
    _d.CPGF_MD_TEMPLATE _method("entryInfoList", (QFileInfoList (D::ClassType::*) (QDir::Filters, QDir::SortFlags) const)&D::ClassType::entryInfoList)
        ._default(copyVariantFromCopyable(QDir::NoSort))
        ._default(copyVariantFromCopyable(QDir::NoFilter))
    ;
    _d.CPGF_MD_TEMPLATE _method("entryInfoList", (QFileInfoList (D::ClassType::*) (const QStringList &, QDir::Filters, QDir::SortFlags) const)&D::ClassType::entryInfoList, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QDir::NoSort))
        ._default(copyVariantFromCopyable(QDir::NoFilter))
    ;
    _d.CPGF_MD_TEMPLATE _method("mkdir", &D::ClassType::mkdir, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rmdir", &D::ClassType::rmdir, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mkpath", &D::ClassType::mkpath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rmpath", &D::ClassType::rmpath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("removeRecursively", &D::ClassType::removeRecursively);
    _d.CPGF_MD_TEMPLATE _method("isReadable", &D::ClassType::isReadable);
    _d.CPGF_MD_TEMPLATE _method("exists", (bool (D::ClassType::*) () const)&D::ClassType::exists);
    _d.CPGF_MD_TEMPLATE _method("isRoot", &D::ClassType::isRoot);
    _d.CPGF_MD_TEMPLATE _method("isRelative", &D::ClassType::isRelative);
    _d.CPGF_MD_TEMPLATE _method("isAbsolute", &D::ClassType::isAbsolute);
    _d.CPGF_MD_TEMPLATE _method("makeAbsolute", &D::ClassType::makeAbsolute);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rename", &D::ClassType::rename, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("exists", (bool (D::ClassType::*) (const QString &) const)&D::ClassType::exists, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("refresh", &D::ClassType::refresh);
    _d.CPGF_MD_TEMPLATE _method("addResourceSearchPath", &D::ClassType::addResourceSearchPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setSearchPaths", &D::ClassType::setSearchPaths, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("addSearchPath", &D::ClassType::addSearchPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("searchPaths", &D::ClassType::searchPaths, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toNativeSeparators", &D::ClassType::toNativeSeparators, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromNativeSeparators", &D::ClassType::fromNativeSeparators, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("nameFiltersFromString", &D::ClassType::nameFiltersFromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isRelativePath", &D::ClassType::isRelativePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isAbsolutePath", &D::ClassType::isAbsolutePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drives", &D::ClassType::drives);
    _d.CPGF_MD_TEMPLATE _method("separator", &D::ClassType::separator);
    _d.CPGF_MD_TEMPLATE _method("setCurrent", &D::ClassType::setCurrent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("current", &D::ClassType::current);
    _d.CPGF_MD_TEMPLATE _method("currentPath", &D::ClassType::currentPath);
    _d.CPGF_MD_TEMPLATE _method("home", &D::ClassType::home);
    _d.CPGF_MD_TEMPLATE _method("homePath", &D::ClassType::homePath);
    _d.CPGF_MD_TEMPLATE _method("root", &D::ClassType::root);
    _d.CPGF_MD_TEMPLATE _method("rootPath", &D::ClassType::rootPath);
    _d.CPGF_MD_TEMPLATE _method("temp", &D::ClassType::temp);
    _d.CPGF_MD_TEMPLATE _method("tempPath", &D::ClassType::tempPath);
    _d.CPGF_MD_TEMPLATE _method("match", (bool (*) (const QStringList &, const QString &))&D::ClassType::match, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("match", (bool (*) (const QString &, const QString &))&D::ClassType::match, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("cleanPath", &D::ClassType::cleanPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Filter>("Filter")
        ._element("Dirs", D::ClassType::Dirs)
        ._element("Files", D::ClassType::Files)
        ._element("Drives", D::ClassType::Drives)
        ._element("NoSymLinks", D::ClassType::NoSymLinks)
        ._element("AllEntries", D::ClassType::AllEntries)
        ._element("TypeMask", D::ClassType::TypeMask)
        ._element("Readable", D::ClassType::Readable)
        ._element("Writable", D::ClassType::Writable)
        ._element("Executable", D::ClassType::Executable)
        ._element("PermissionMask", D::ClassType::PermissionMask)
        ._element("Modified", D::ClassType::Modified)
        ._element("Hidden", D::ClassType::Hidden)
        ._element("System", D::ClassType::System)
        ._element("AccessMask", D::ClassType::AccessMask)
        ._element("AllDirs", D::ClassType::AllDirs)
        ._element("CaseSensitive", D::ClassType::CaseSensitive)
        ._element("NoDot", D::ClassType::NoDot)
        ._element("NoDotDot", D::ClassType::NoDotDot)
        ._element("NoDotAndDotDot", D::ClassType::NoDotAndDotDot)
        ._element("NoFilter", D::ClassType::NoFilter)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SortFlag>("SortFlag")
        ._element("Name", D::ClassType::Name)
        ._element("Time", D::ClassType::Time)
        ._element("Size", D::ClassType::Size)
        ._element("Unsorted", D::ClassType::Unsorted)
        ._element("SortByMask", D::ClassType::SortByMask)
        ._element("DirsFirst", D::ClassType::DirsFirst)
        ._element("Reversed", D::ClassType::Reversed)
        ._element("IgnoreCase", D::ClassType::IgnoreCase)
        ._element("DirsLast", D::ClassType::DirsLast)
        ._element("LocaleAware", D::ClassType::LocaleAware)
        ._element("Type", D::ClassType::Type)
        ._element("NoSort", D::ClassType::NoSort)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QDir & (*)(cpgf::GMetaSelf, const QDir &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QDir & (*) (QDir *, const QDir &))&opErAToRWrapper_QDir__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QDir & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QDir & (*) (QDir *, const QString &))&opErAToRWrapper_QDir__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QString (*) (const QDir *, int))&opErAToRWrapper_QDir__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDir &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QDir *, const QDir &))&opErAToRWrapper_QDir__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDir &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QDir *, const QDir &))&opErAToRWrapper_QDir__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QDir::Filter > > _t_d = GDefineMetaClass<QFlags<typename QDir::Filter > >::lazyDeclare("Filters", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QDir::Filter > >, typename QDir::Filter >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QDir::SortFlag > > _t_d = GDefineMetaClass<QFlags<typename QDir::SortFlag > >::lazyDeclare("SortFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QDir::SortFlag > >, typename QDir::SortFlag >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
