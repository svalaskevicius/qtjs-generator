// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSCOPEDVALUEROLLBACK_H
#define CPGF_META_QTCORE_QSCOPEDVALUEROLLBACK_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D, typename T>
void buildMetaClass_QScopedValueRollback(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (T &)>();
    _d.CPGF_MD_TEMPLATE _method("commit", &D::ClassType::commit);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
