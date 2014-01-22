// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSTANDARDPATHS_H
#define __META_QTCORE_QSTANDARDPATHS_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QStandardPaths(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("writableLocation", &D::ClassType::writableLocation);
    _d.CPGF_MD_TEMPLATE _method("standardLocations", &D::ClassType::standardLocations);
    _d.CPGF_MD_TEMPLATE _method("locate", &D::ClassType::locate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QStandardPaths::LocateFile))
    ;
    _d.CPGF_MD_TEMPLATE _method("locateAll", &D::ClassType::locateAll, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QStandardPaths::LocateFile))
    ;
    _d.CPGF_MD_TEMPLATE _method("displayName", &D::ClassType::displayName);
    _d.CPGF_MD_TEMPLATE _method("findExecutable", &D::ClassType::findExecutable, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QStringList()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setTestModeEnabled", &D::ClassType::setTestModeEnabled);
    _d.CPGF_MD_TEMPLATE _method("isTestModeEnabled", &D::ClassType::isTestModeEnabled);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StandardLocation>("StandardLocation")
        ._element("DesktopLocation", D::ClassType::DesktopLocation)
        ._element("DocumentsLocation", D::ClassType::DocumentsLocation)
        ._element("FontsLocation", D::ClassType::FontsLocation)
        ._element("ApplicationsLocation", D::ClassType::ApplicationsLocation)
        ._element("MusicLocation", D::ClassType::MusicLocation)
        ._element("MoviesLocation", D::ClassType::MoviesLocation)
        ._element("PicturesLocation", D::ClassType::PicturesLocation)
        ._element("TempLocation", D::ClassType::TempLocation)
        ._element("HomeLocation", D::ClassType::HomeLocation)
        ._element("DataLocation", D::ClassType::DataLocation)
        ._element("CacheLocation", D::ClassType::CacheLocation)
        ._element("GenericDataLocation", D::ClassType::GenericDataLocation)
        ._element("RuntimeLocation", D::ClassType::RuntimeLocation)
        ._element("ConfigLocation", D::ClassType::ConfigLocation)
        ._element("DownloadLocation", D::ClassType::DownloadLocation)
        ._element("GenericCacheLocation", D::ClassType::GenericCacheLocation)
        ._element("GenericConfigLocation", D::ClassType::GenericConfigLocation)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LocateOption>("LocateOption")
        ._element("LocateFile", D::ClassType::LocateFile)
        ._element("LocateDirectory", D::ClassType::LocateDirectory)
    ;
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
