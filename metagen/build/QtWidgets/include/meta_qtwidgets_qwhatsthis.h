// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QWHATSTHIS_H
#define CPGF_META_QTWIDGETS_QWHATSTHIS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QWhatsThis(D _d)
{
    (void)_d;
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


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
