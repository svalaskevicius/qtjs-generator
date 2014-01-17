// Auto generated file, don't modify.

#ifndef __META_QTCORE_QWAITCONDITION_H
#define __META_QTCORE_QWAITCONDITION_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QWaitCondition(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("wait", (bool (D::ClassType::*) (QMutex *, unsigned long))&D::ClassType::wait)
        ._default(copyVariantFromCopyable(ULONG_MAX))
    ;
    _d.CPGF_MD_TEMPLATE _method("wait", (bool (D::ClassType::*) (QReadWriteLock *, unsigned long))&D::ClassType::wait)
        ._default(copyVariantFromCopyable(ULONG_MAX))
    ;
    _d.CPGF_MD_TEMPLATE _method("wakeOne", &D::ClassType::wakeOne);
    _d.CPGF_MD_TEMPLATE _method("wakeAll", &D::ClassType::wakeAll);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
