// Auto generated file, don't modify.

#ifndef __META_QTCORE_QREADWRITELOCK_H
#define __META_QTCORE_QREADWRITELOCK_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QReadLocker(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QReadWriteLock *)>();
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _method("relock", &D::ClassType::relock);
    _d.CPGF_MD_TEMPLATE _method("readWriteLock", &D::ClassType::readWriteLock);
}


template <typename D>
void buildMetaClass_QReadWriteLock(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QReadWriteLock::RecursionMode)>()
        ._default(copyVariantFromCopyable(QReadWriteLock::NonRecursive))
    ;
    _d.CPGF_MD_TEMPLATE _method("lockForRead", &D::ClassType::lockForRead);
    _d.CPGF_MD_TEMPLATE _method("tryLockForRead", (bool (D::ClassType::*) ())&D::ClassType::tryLockForRead);
    _d.CPGF_MD_TEMPLATE _method("tryLockForRead", (bool (D::ClassType::*) (int))&D::ClassType::tryLockForRead);
    _d.CPGF_MD_TEMPLATE _method("lockForWrite", &D::ClassType::lockForWrite);
    _d.CPGF_MD_TEMPLATE _method("tryLockForWrite", (bool (D::ClassType::*) ())&D::ClassType::tryLockForWrite);
    _d.CPGF_MD_TEMPLATE _method("tryLockForWrite", (bool (D::ClassType::*) (int))&D::ClassType::tryLockForWrite);
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RecursionMode>("RecursionMode")
        ._element("NonRecursive", D::ClassType::NonRecursive)
        ._element("Recursive", D::ClassType::Recursive)
    ;
}


template <typename D>
void buildMetaClass_QWriteLocker(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QReadWriteLock *)>();
    _d.CPGF_MD_TEMPLATE _method("unlock", &D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _method("relock", &D::ClassType::relock);
    _d.CPGF_MD_TEMPLATE _method("readWriteLock", &D::ClassType::readWriteLock);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif