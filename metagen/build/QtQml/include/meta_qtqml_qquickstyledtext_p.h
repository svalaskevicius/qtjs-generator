// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKSTYLEDTEXT_P_H
#define CPGF_META_QTQML_QQUICKSTYLEDTEXT_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickStyledTextImgTag(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("url", &D::ClassType::url);
    _d.CPGF_MD_TEMPLATE _field("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _field("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _field("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _field("align", &D::ClassType::align);
    _d.CPGF_MD_TEMPLATE _field("pix", &D::ClassType::pix);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Align>("Align")
        ._element("Bottom", D::ClassType::Bottom)
        ._element("Middle", D::ClassType::Middle)
        ._element("Top", D::ClassType::Top)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
