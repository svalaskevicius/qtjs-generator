// Auto generated file, don't modify.

#ifndef __META_QTCORE_QBASICTIMER_H
#define __META_QTCORE_QBASICTIMER_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qbasictimer(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QBasicTimer(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("timerId", &D::ClassType::timerId);
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (int, QObject *))&D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (int, Qt::TimerType, QObject *))&D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("stop", &D::ClassType::stop);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
