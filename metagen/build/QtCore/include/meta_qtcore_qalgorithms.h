// Auto generated file, don't modify.

#ifndef __META_QTCORE_QALGORITHMS_H
#define __META_QTCORE_QALGORITHMS_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QAlgorithmsPrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qalgorithms(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qPopulationCount", (uint (*) (quint32))&qPopulationCount);
    _d.CPGF_MD_TEMPLATE _method("qPopulationCount", (uint (*) (quint8))&qPopulationCount);
    _d.CPGF_MD_TEMPLATE _method("qPopulationCount", (uint (*) (quint16))&qPopulationCount);
    _d.CPGF_MD_TEMPLATE _method("qPopulationCount", (uint (*) (quint64))&qPopulationCount);
    _d.CPGF_MD_TEMPLATE _method("qPopulationCount", (uint (*) (long unsigned int))&qPopulationCount);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
