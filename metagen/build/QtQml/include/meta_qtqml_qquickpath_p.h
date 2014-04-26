// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKPATH_P_H
#define CPGF_META_QTQML_QQUICKPATH_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickCachedBezier(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("bezier", &D::ClassType::bezier);
    _d.CPGF_MD_TEMPLATE _field("element", &D::ClassType::element);
    _d.CPGF_MD_TEMPLATE _field("bezLength", &D::ClassType::bezLength);
    _d.CPGF_MD_TEMPLATE _field("currLength", &D::ClassType::currLength);
    _d.CPGF_MD_TEMPLATE _field("p", &D::ClassType::p);
    _d.CPGF_MD_TEMPLATE _field("isValid", &D::ClassType::isValid);
}


template <typename D>
void buildMetaClass_QQuickPathData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("index", &D::ClassType::index);
    _d.CPGF_MD_TEMPLATE _field("endPoint", &D::ClassType::endPoint);
    _d.CPGF_MD_TEMPLATE _field("curves", &D::ClassType::curves);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
