// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QLAZILYALLOCATED_P_H
#define CPGF_META_QTQML_QLAZILYALLOCATED_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D, typename T>
void buildMetaClass_QLazilyAllocated(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isAllocated", &D::ClassType::isAllocated);
    _d.CPGF_MD_TEMPLATE _method("value", (T & (D::ClassType::*) ())&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("value", (const T & (D::ClassType::*) () const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("flag", &D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", &D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", &D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
