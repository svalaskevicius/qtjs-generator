// Auto generated file, don't modify.

#ifndef __META_QTCORE_QPLUGIN_H
#define __META_QTCORE_QPLUGIN_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qplugin(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qRegisterStaticPluginFunction", (void (*) (QStaticPlugin))&qRegisterStaticPluginFunction);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_31")
    ;
}


template <typename D>
void buildMetaClass_QStaticPlugin(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("instance", &D::ClassType::instance);
    _d.CPGF_MD_TEMPLATE _field("rawMetaData", &D::ClassType::rawMetaData);
    _d.CPGF_MD_TEMPLATE _method("metaData", &D::ClassType::metaData);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
