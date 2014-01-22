// Auto generated file, don't modify.

#ifndef __META_QTCORE_QTYPEINFO_H
#define __META_QTCORE_QTYPEINFO_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qtypeinfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_29")
        ._element("Q_COMPLEX_TYPE", Q_COMPLEX_TYPE)
        ._element("Q_PRIMITIVE_TYPE", Q_PRIMITIVE_TYPE)
        ._element("Q_STATIC_TYPE", Q_STATIC_TYPE)
        ._element("Q_MOVABLE_TYPE", Q_MOVABLE_TYPE)
        ._element("Q_DUMMY_TYPE", Q_DUMMY_TYPE)
    ;
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
