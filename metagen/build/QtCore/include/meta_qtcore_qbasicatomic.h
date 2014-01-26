// Auto generated file, don't modify.

#ifndef __META_QTCORE_QBASICATOMIC_H
#define __META_QTCORE_QBASICATOMIC_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D, typename T>
void buildMetaClass_QBasicAtomicInteger(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("_q_value", &D::ClassType::_q_value);
    _d.CPGF_MD_TEMPLATE _method("load", &D::ClassType::load);
    _d.CPGF_MD_TEMPLATE _method("store", &D::ClassType::store);
    _d.CPGF_MD_TEMPLATE _method("loadAcquire", &D::ClassType::loadAcquire);
    _d.CPGF_MD_TEMPLATE _method("storeRelease", &D::ClassType::storeRelease);
    _d.CPGF_MD_TEMPLATE _method("ref", &D::ClassType::ref);
    _d.CPGF_MD_TEMPLATE _method("deref", &D::ClassType::deref);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelaxed", &D::ClassType::testAndSetRelaxed);
    _d.CPGF_MD_TEMPLATE _method("testAndSetAcquire", &D::ClassType::testAndSetAcquire);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelease", &D::ClassType::testAndSetRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetOrdered", &D::ClassType::testAndSetOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelaxed", &D::ClassType::fetchAndStoreRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreAcquire", &D::ClassType::fetchAndStoreAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelease", &D::ClassType::fetchAndStoreRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreOrdered", &D::ClassType::fetchAndStoreOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelaxed", &D::ClassType::fetchAndAddRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddAcquire", &D::ClassType::fetchAndAddAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelease", &D::ClassType::fetchAndAddRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddOrdered", &D::ClassType::fetchAndAddOrdered);
    _d.CPGF_MD_TEMPLATE _method("isReferenceCountingNative", &D::ClassType::isReferenceCountingNative);
    _d.CPGF_MD_TEMPLATE _method("isReferenceCountingWaitFree", &D::ClassType::isReferenceCountingWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetNative", &D::ClassType::isTestAndSetNative);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetWaitFree", &D::ClassType::isTestAndSetWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreNative", &D::ClassType::isFetchAndStoreNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreWaitFree", &D::ClassType::isFetchAndStoreWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddNative", &D::ClassType::isFetchAndAddNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddWaitFree", &D::ClassType::isFetchAndAddWaitFree);
}


template <typename D, typename X>
void buildMetaClass_QBasicAtomicPointer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("_q_value", &D::ClassType::_q_value);
    _d.CPGF_MD_TEMPLATE _method("load", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) () const)&D::ClassType::load);
    _d.CPGF_MD_TEMPLATE _method("store", (void (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type))&D::ClassType::store);
    _d.CPGF_MD_TEMPLATE _method("loadAcquire", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) () const)&D::ClassType::loadAcquire);
    _d.CPGF_MD_TEMPLATE _method("storeRelease", (void (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type))&D::ClassType::storeRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelaxed", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetRelaxed);
    _d.CPGF_MD_TEMPLATE _method("testAndSetAcquire", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetAcquire);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelease", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetOrdered", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelaxed", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type))&D::ClassType::fetchAndStoreRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreAcquire", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type))&D::ClassType::fetchAndStoreAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelease", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type))&D::ClassType::fetchAndStoreRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreOrdered", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type))&D::ClassType::fetchAndStoreOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelaxed", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (qptrdiff))&D::ClassType::fetchAndAddRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddAcquire", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (qptrdiff))&D::ClassType::fetchAndAddAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelease", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (qptrdiff))&D::ClassType::fetchAndAddRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddOrdered", (typename QBasicAtomicPointer<X >::Type (D::ClassType::*) (qptrdiff))&D::ClassType::fetchAndAddOrdered);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetNative", (bool (*) ())&D::ClassType::isTestAndSetNative);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetWaitFree", (bool (*) ())&D::ClassType::isTestAndSetWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreNative", (bool (*) ())&D::ClassType::isFetchAndStoreNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreWaitFree", (bool (*) ())&D::ClassType::isFetchAndStoreWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddNative", (bool (*) ())&D::ClassType::isFetchAndAddNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddWaitFree", (bool (*) ())&D::ClassType::isFetchAndAddWaitFree);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
