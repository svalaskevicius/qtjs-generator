// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QSTYLEPAINTER_H
#define CPGF_META_QTWIDGETS_QSTYLEPAINTER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QStylePainter(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QPaintDevice *, QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("begin", (bool (D::ClassType::*) (QWidget *))&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (bool (D::ClassType::*) (QPaintDevice *, QWidget *))&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("drawPrimitive", &D::ClassType::drawPrimitive);
    _d.CPGF_MD_TEMPLATE _method("drawControl", &D::ClassType::drawControl);
    _d.CPGF_MD_TEMPLATE _method("drawComplexControl", &D::ClassType::drawComplexControl);
    _d.CPGF_MD_TEMPLATE _method("drawItemText", &D::ClassType::drawItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<4> >())
        ._default(copyVariantFromCopyable(QPalette::NoRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawItemPixmap", &D::ClassType::drawItemPixmap);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
