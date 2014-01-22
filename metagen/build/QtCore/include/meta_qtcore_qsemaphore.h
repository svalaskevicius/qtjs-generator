// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSEMAPHORE_H
#define __META_QTCORE_QSEMAPHORE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QSemaphore(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("acquire", &D::ClassType::acquire)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("tryAcquire", (bool (D::ClassType::*) (int))&D::ClassType::tryAcquire)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("tryAcquire", (bool (D::ClassType::*) (int, int))&D::ClassType::tryAcquire);
    _d.CPGF_MD_TEMPLATE _method("release", &D::ClassType::release)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("available", &D::ClassType::available);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
