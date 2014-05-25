// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QRECURSIONWATCHER_P_H
#define CPGF_META_QTQML_QRECURSIONWATCHER_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QRecursionNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("_r", &D::ClassType::_r);
}


template <typename D, class T, QRecursionNode T::* Node>
void buildMetaClass_QRecursionWatcher(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (T *)>();
    _d.CPGF_MD_TEMPLATE _method("hasRecursed", &D::ClassType::hasRecursed);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
