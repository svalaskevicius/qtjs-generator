// Auto generated file, don't modify.

#ifndef __META_QTCORE_QMUTEX_H
#define __META_QTCORE_QMUTEX_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qmutex(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_25")
    ;
}


template <typename D>
void buildMetaClass_QBasicMutex(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("lock", &D::ClassType::lock);
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _method("tryLock", &D::ClassType::tryLock);
    _d.CPGF_MD_TEMPLATE _method("isRecursive", &D::ClassType::isRecursive);
}


template <typename D>
void buildMetaClass_QMutex(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QMutex::RecursionMode)>()
        ._default(copyVariantFromCopyable(QMutex::NonRecursive))
    ;
    _d.CPGF_MD_TEMPLATE _method("lock", &D::ClassType::lock);
    _d.CPGF_MD_TEMPLATE _method("tryLock", &D::ClassType::tryLock)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RecursionMode>("RecursionMode")
        ._element("NonRecursive", D::ClassType::NonRecursive)
        ._element("Recursive", D::ClassType::Recursive)
    ;
}


template <typename D>
void buildMetaClass_QMutexLocker(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QBasicMutex *)>();
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _method("relock", &D::ClassType::relock);
    _d.CPGF_MD_TEMPLATE _method("mutex", &D::ClassType::mutex);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
