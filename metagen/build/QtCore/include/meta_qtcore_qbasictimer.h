// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QBASICTIMER_H
#define CPGF_META_QTCORE_QBASICTIMER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qbasictimer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QBasicTimer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("timerId", &D::ClassType::timerId);
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (int, QObject *))&D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (int, Qt::TimerType, QObject *))&D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("stop", &D::ClassType::stop);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
