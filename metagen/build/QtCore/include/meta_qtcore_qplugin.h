// Auto generated file, don't modify.

#ifndef __META_QTCORE_QPLUGIN_H
#define __META_QTCORE_QPLUGIN_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qplugin(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qRegisterStaticPluginFunction", (void (*) (QStaticPlugin))&qRegisterStaticPluginFunction);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_24")
    ;
}


template <typename D>
void buildMetaClass_QStaticPlugin(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("instance", &D::ClassType::instance);
    _d.CPGF_MD_TEMPLATE _field("rawMetaData", &D::ClassType::rawMetaData);
    _d.CPGF_MD_TEMPLATE _method("metaData", &D::ClassType::metaData);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
