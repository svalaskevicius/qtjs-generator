// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QWHATSTHIS_H
#define __META_QTWIDGETS_QWHATSTHIS_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtwidgets { 


template <typename D>
void buildMetaClass_QWhatsThis(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("enterWhatsThisMode", &D::ClassType::enterWhatsThisMode);
    _d.CPGF_MD_TEMPLATE _method("inWhatsThisMode", &D::ClassType::inWhatsThisMode);
    _d.CPGF_MD_TEMPLATE _method("leaveWhatsThisMode", &D::ClassType::leaveWhatsThisMode);
    _d.CPGF_MD_TEMPLATE _method("showText", &D::ClassType::showText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hideText", &D::ClassType::hideText);
    _d.CPGF_MD_TEMPLATE _method("createAction", &D::ClassType::createAction)
        ._default(copyVariantFromCopyable(0))
    ;
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
