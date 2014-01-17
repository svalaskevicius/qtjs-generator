// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSCOPEDVALUEROLLBACK_H
#define __META_QTCORE_QSCOPEDVALUEROLLBACK_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D, typename T>
void buildMetaClass_QScopedValueRollback(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (T &)>();
    _d.CPGF_MD_TEMPLATE _method("commit", &D::ClassType::commit);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
