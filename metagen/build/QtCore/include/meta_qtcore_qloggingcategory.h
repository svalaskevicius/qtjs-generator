// Auto generated file, don't modify.

#ifndef __META_QTCORE_QLOGGINGCATEGORY_H
#define __META_QTCORE_QLOGGINGCATEGORY_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QLoggingCategory & opErAToRWrapper_QLoggingCategory__opFunction(QLoggingCategory * self) {
    return (*self)();
}


template <typename D>
void buildMetaClass_QLoggingCategory(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("isDebugEnabled", &D::ClassType::isDebugEnabled);
    _d.CPGF_MD_TEMPLATE _method("isWarningEnabled", &D::ClassType::isWarningEnabled);
    _d.CPGF_MD_TEMPLATE _method("isCriticalEnabled", &D::ClassType::isCriticalEnabled);
    _d.CPGF_MD_TEMPLATE _method("categoryName", &D::ClassType::categoryName);
    _d.CPGF_MD_TEMPLATE _method("defaultCategory", &D::ClassType::defaultCategory);
    _d.CPGF_MD_TEMPLATE _method("installFilter", &D::ClassType::installFilter);
    _d.CPGF_MD_TEMPLATE _method("setFilterRules", &D::ClassType::setFilterRules, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QLoggingCategory & (*)()>(mopHolder(mopHolder), cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (QLoggingCategory & (*) (QLoggingCategory *))&opErAToRWrapper_QLoggingCategory__opFunction, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
