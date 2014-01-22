// Auto generated file, don't modify.

#ifndef __META_QTGUI_QBACKINGSTORE_H
#define __META_QTGUI_QBACKINGSTORE_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QBackingStore(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWindow *)>();
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window);
    _d.CPGF_MD_TEMPLATE _method("paintDevice", &D::ClassType::paintDevice);
    _d.CPGF_MD_TEMPLATE _method("flush", &D::ClassType::flush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QPoint()))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("scroll", &D::ClassType::scroll, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("beginPaint", &D::ClassType::beginPaint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("endPaint", &D::ClassType::endPaint);
    _d.CPGF_MD_TEMPLATE _method("setStaticContents", &D::ClassType::setStaticContents, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("staticContents", &D::ClassType::staticContents);
    _d.CPGF_MD_TEMPLATE _method("hasStaticContents", &D::ClassType::hasStaticContents);
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
