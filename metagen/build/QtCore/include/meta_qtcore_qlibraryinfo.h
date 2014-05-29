// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QLIBRARYINFO_H
#define CPGF_META_QTCORE_QLIBRARYINFO_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QLibraryInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("licensee", &D::ClassType::licensee);
    _d.CPGF_MD_TEMPLATE _method("licensedProducts", &D::ClassType::licensedProducts);
    _d.CPGF_MD_TEMPLATE _method("buildDate", &D::ClassType::buildDate);
    _d.CPGF_MD_TEMPLATE _method("build", &D::ClassType::build);
    _d.CPGF_MD_TEMPLATE _method("isDebugBuild", &D::ClassType::isDebugBuild);
    _d.CPGF_MD_TEMPLATE _method("location", &D::ClassType::location);
    _d.CPGF_MD_TEMPLATE _method("platformPluginArguments", &D::ClassType::platformPluginArguments, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LibraryLocation>("LibraryLocation")
        ._element("PrefixPath", D::ClassType::PrefixPath)
        ._element("DocumentationPath", D::ClassType::DocumentationPath)
        ._element("HeadersPath", D::ClassType::HeadersPath)
        ._element("LibrariesPath", D::ClassType::LibrariesPath)
        ._element("LibraryExecutablesPath", D::ClassType::LibraryExecutablesPath)
        ._element("BinariesPath", D::ClassType::BinariesPath)
        ._element("PluginsPath", D::ClassType::PluginsPath)
        ._element("ImportsPath", D::ClassType::ImportsPath)
        ._element("Qml2ImportsPath", D::ClassType::Qml2ImportsPath)
        ._element("ArchDataPath", D::ClassType::ArchDataPath)
        ._element("DataPath", D::ClassType::DataPath)
        ._element("TranslationsPath", D::ClassType::TranslationsPath)
        ._element("ExamplesPath", D::ClassType::ExamplesPath)
        ._element("TestsPath", D::ClassType::TestsPath)
        ._element("SettingsPath", D::ClassType::SettingsPath)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
