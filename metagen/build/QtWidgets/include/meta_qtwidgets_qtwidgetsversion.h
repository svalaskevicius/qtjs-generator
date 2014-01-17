// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QTWIDGETSVERSION_H
#define __META_QTWIDGETS_QTWIDGETSVERSION_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtwidgets { 


template <typename D>
void buildMetaClass_Global_qtwidgetsversion(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtWidgets_8")
        ._element("QTWIDGETS_VERSION_STR", QTWIDGETS_VERSION_STR)
        ._element("QTWIDGETS_VERSION", QTWIDGETS_VERSION)
    ;
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
