// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCONFIG_H
#define __META_QTCORE_QCONFIG_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qconfig(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_26")
        ._element("QT_LARGEFILE_SUPPORT", QT_LARGEFILE_SUPPORT)
        ._element("QT_POINTER_SIZE", QT_POINTER_SIZE)
        ._element("QT_QPA_DEFAULT_PLATFORM_NAME", QT_QPA_DEFAULT_PLATFORM_NAME)
    ;
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
