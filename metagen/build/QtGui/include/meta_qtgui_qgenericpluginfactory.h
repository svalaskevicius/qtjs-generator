// Auto generated file, don't modify.

#ifndef __META_QTGUI_QGENERICPLUGINFACTORY_H
#define __META_QTGUI_QGENERICPLUGINFACTORY_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QGenericPluginFactory(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("keys", &D::ClassType::keys);
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
