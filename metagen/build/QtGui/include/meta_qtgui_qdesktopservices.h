// Auto generated file, don't modify.

#ifndef __META_QTGUI_QDESKTOPSERVICES_H
#define __META_QTGUI_QDESKTOPSERVICES_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QDesktopServices(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("openUrl", &D::ClassType::openUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setUrlHandler", &D::ClassType::setUrlHandler, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("unsetUrlHandler", &D::ClassType::unsetUrlHandler, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
