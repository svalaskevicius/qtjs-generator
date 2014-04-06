// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QRECYCLEPOOL_P_H
#define CPGF_META_QTQML_QRECYCLEPOOL_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qrecyclepool_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_27")
        ._element("QRECYCLEPOOLCOOKIE", QRECYCLEPOOLCOOKIE)
    ;
}


template <typename D, typename T, int Step>
void buildMetaClass_QRecyclePool(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("New", (T * (D::ClassType::*) ())&D::ClassType::New);
    _d.CPGF_MD_TEMPLATE _method("Delete", &D::ClassType::Delete);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
