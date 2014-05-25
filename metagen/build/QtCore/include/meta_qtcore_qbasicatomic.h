// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QBASICATOMIC_H
#define CPGF_META_QTCORE_QBASICATOMIC_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opAssign(QBasicAtomicInteger<T > * self, T newValue) {
    return (*self) = newValue;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opInc(QBasicAtomicInteger<T > * self) {
    return ++(*self);
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opIncSuffix(QBasicAtomicInteger<T > * self) {
    return (*self)++;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opDec(QBasicAtomicInteger<T > * self) {
    return --(*self);
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opDecSuffix(QBasicAtomicInteger<T > * self) {
    return (*self)--;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opAddAssign(QBasicAtomicInteger<T > * self, T v) {
    return (*self) += v;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opSubAssign(QBasicAtomicInteger<T > * self, T v) {
    return (*self) -= v;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opBitAndAssign(QBasicAtomicInteger<T > * self, T v) {
    return (*self) &= v;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opBitOrAssign(QBasicAtomicInteger<T > * self, T v) {
    return (*self) |= v;
}
template <typename T>
inline T opErAToRWrapper_QBasicAtomicInteger__opBitXorAssign(QBasicAtomicInteger<T > * self, T v) {
    return (*self) ^= v;
}


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
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelaxed", (bool (D::ClassType::*) (T, T))&D::ClassType::testAndSetRelaxed);
    _d.CPGF_MD_TEMPLATE _method("testAndSetAcquire", (bool (D::ClassType::*) (T, T))&D::ClassType::testAndSetAcquire);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelease", (bool (D::ClassType::*) (T, T))&D::ClassType::testAndSetRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetOrdered", (bool (D::ClassType::*) (T, T))&D::ClassType::testAndSetOrdered);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelaxed", (bool (D::ClassType::*) (T, T, T &))&D::ClassType::testAndSetRelaxed);
    _d.CPGF_MD_TEMPLATE _method("testAndSetAcquire", (bool (D::ClassType::*) (T, T, T &))&D::ClassType::testAndSetAcquire);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelease", (bool (D::ClassType::*) (T, T, T &))&D::ClassType::testAndSetRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetOrdered", (bool (D::ClassType::*) (T, T, T &))&D::ClassType::testAndSetOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelaxed", &D::ClassType::fetchAndStoreRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreAcquire", &D::ClassType::fetchAndStoreAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelease", &D::ClassType::fetchAndStoreRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreOrdered", &D::ClassType::fetchAndStoreOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelaxed", &D::ClassType::fetchAndAddRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddAcquire", &D::ClassType::fetchAndAddAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelease", &D::ClassType::fetchAndAddRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddOrdered", &D::ClassType::fetchAndAddOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubRelaxed", &D::ClassType::fetchAndSubRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubAcquire", &D::ClassType::fetchAndSubAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubRelease", &D::ClassType::fetchAndSubRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubOrdered", &D::ClassType::fetchAndSubOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAndRelaxed", &D::ClassType::fetchAndAndRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAndAcquire", &D::ClassType::fetchAndAndAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAndRelease", &D::ClassType::fetchAndAndRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAndOrdered", &D::ClassType::fetchAndAndOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndOrRelaxed", &D::ClassType::fetchAndOrRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndOrAcquire", &D::ClassType::fetchAndOrAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndOrRelease", &D::ClassType::fetchAndOrRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndOrOrdered", &D::ClassType::fetchAndOrOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndXorRelaxed", &D::ClassType::fetchAndXorRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndXorAcquire", &D::ClassType::fetchAndXorAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndXorRelease", &D::ClassType::fetchAndXorRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndXorOrdered", &D::ClassType::fetchAndXorOrdered);
    _d.CPGF_MD_TEMPLATE _method("isReferenceCountingNative", &D::ClassType::isReferenceCountingNative);
    _d.CPGF_MD_TEMPLATE _method("isReferenceCountingWaitFree", &D::ClassType::isReferenceCountingWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetNative", &D::ClassType::isTestAndSetNative);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetWaitFree", &D::ClassType::isTestAndSetWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreNative", &D::ClassType::isFetchAndStoreNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreWaitFree", &D::ClassType::isFetchAndStoreWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddNative", &D::ClassType::isFetchAndAddNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddWaitFree", &D::ClassType::isFetchAndAddWaitFree);
    _d.CPGF_MD_TEMPLATE _operator< T (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf, T)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (T (*) (QBasicAtomicInteger<T > *, T))&opErAToRWrapper_QBasicAtomicInteger__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf)>(++mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opInc", (T (*) (QBasicAtomicInteger<T > *))&opErAToRWrapper_QBasicAtomicInteger__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf)>(mopHolder++);
    _d.CPGF_MD_TEMPLATE _method("_opIncSuffix", (T (*) (QBasicAtomicInteger<T > *))&opErAToRWrapper_QBasicAtomicInteger__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf)>(--mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDec", (T (*) (QBasicAtomicInteger<T > *))&opErAToRWrapper_QBasicAtomicInteger__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf)>(mopHolder--);
    _d.CPGF_MD_TEMPLATE _method("_opDecSuffix", (T (*) (QBasicAtomicInteger<T > *))&opErAToRWrapper_QBasicAtomicInteger__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf, T)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (T (*) (QBasicAtomicInteger<T > *, T))&opErAToRWrapper_QBasicAtomicInteger__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf, T)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (T (*) (QBasicAtomicInteger<T > *, T))&opErAToRWrapper_QBasicAtomicInteger__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf, T)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (T (*) (QBasicAtomicInteger<T > *, T))&opErAToRWrapper_QBasicAtomicInteger__opBitAndAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf, T)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (T (*) (QBasicAtomicInteger<T > *, T))&opErAToRWrapper_QBasicAtomicInteger__opBitOrAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T (*)(cpgf::GMetaSelf, T)>(mopHolder ^= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitXorAssign", (T (*) (QBasicAtomicInteger<T > *, T))&opErAToRWrapper_QBasicAtomicInteger__opBitXorAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opAssign(QBasicAtomicPointer<X > * self, typename QBasicAtomicPointer<X >::Type newValue) {
    return (*self) = newValue;
}
template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opInc(QBasicAtomicPointer<X > * self) {
    return ++(*self);
}
template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opIncSuffix(QBasicAtomicPointer<X > * self) {
    return (*self)++;
}
template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opDec(QBasicAtomicPointer<X > * self) {
    return --(*self);
}
template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opDecSuffix(QBasicAtomicPointer<X > * self) {
    return (*self)--;
}
template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opAddAssign(QBasicAtomicPointer<X > * self, qptrdiff valueToAdd) {
    return (*self) += valueToAdd;
}
template <typename X>
inline typename QBasicAtomicPointer<X >::Type opErAToRWrapper_QBasicAtomicPointer__opSubAssign(QBasicAtomicPointer<X > * self, qptrdiff valueToSub) {
    return (*self) -= valueToSub;
}


template <typename D, typename X>
void buildMetaClass_QBasicAtomicPointer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("_q_value", &D::ClassType::_q_value);
    _d.CPGF_MD_TEMPLATE _method("load", &D::ClassType::load);
    _d.CPGF_MD_TEMPLATE _method("store", &D::ClassType::store);
    _d.CPGF_MD_TEMPLATE _method("loadAcquire", &D::ClassType::loadAcquire);
    _d.CPGF_MD_TEMPLATE _method("storeRelease", &D::ClassType::storeRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelaxed", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetRelaxed);
    _d.CPGF_MD_TEMPLATE _method("testAndSetAcquire", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetAcquire);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelease", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetOrdered", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type))&D::ClassType::testAndSetOrdered);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelaxed", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type&))&D::ClassType::testAndSetRelaxed);
    _d.CPGF_MD_TEMPLATE _method("testAndSetAcquire", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type&))&D::ClassType::testAndSetAcquire);
    _d.CPGF_MD_TEMPLATE _method("testAndSetRelease", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type&))&D::ClassType::testAndSetRelease);
    _d.CPGF_MD_TEMPLATE _method("testAndSetOrdered", (bool (D::ClassType::*) (typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type, typename QBasicAtomicPointer<X >::Type&))&D::ClassType::testAndSetOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelaxed", &D::ClassType::fetchAndStoreRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreAcquire", &D::ClassType::fetchAndStoreAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreRelease", &D::ClassType::fetchAndStoreRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndStoreOrdered", &D::ClassType::fetchAndStoreOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelaxed", &D::ClassType::fetchAndAddRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddAcquire", &D::ClassType::fetchAndAddAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddRelease", &D::ClassType::fetchAndAddRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndAddOrdered", &D::ClassType::fetchAndAddOrdered);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubRelaxed", &D::ClassType::fetchAndSubRelaxed);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubAcquire", &D::ClassType::fetchAndSubAcquire);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubRelease", &D::ClassType::fetchAndSubRelease);
    _d.CPGF_MD_TEMPLATE _method("fetchAndSubOrdered", &D::ClassType::fetchAndSubOrdered);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetNative", &D::ClassType::isTestAndSetNative);
    _d.CPGF_MD_TEMPLATE _method("isTestAndSetWaitFree", &D::ClassType::isTestAndSetWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreNative", &D::ClassType::isFetchAndStoreNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndStoreWaitFree", &D::ClassType::isFetchAndStoreWaitFree);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddNative", &D::ClassType::isFetchAndAddNative);
    _d.CPGF_MD_TEMPLATE _method("isFetchAndAddWaitFree", &D::ClassType::isFetchAndAddWaitFree);
    _d.CPGF_MD_TEMPLATE _operator< Type (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf, typename QBasicAtomicPointer<X >::Type)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *, typename QBasicAtomicPointer<X >::Type))&opErAToRWrapper_QBasicAtomicPointer__opAssign<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf)>(++mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opInc", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *))&opErAToRWrapper_QBasicAtomicPointer__opInc<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf)>(mopHolder++);
    _d.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *))&opErAToRWrapper_QBasicAtomicPointer__opIncSuffix<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf)>(--mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDec", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *))&opErAToRWrapper_QBasicAtomicPointer__opDec<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf)>(mopHolder--);
    _d.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *))&opErAToRWrapper_QBasicAtomicPointer__opDecSuffix<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf, qptrdiff)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *, qptrdiff))&opErAToRWrapper_QBasicAtomicPointer__opAddAssign<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<typename QBasicAtomicPointer<X >::Type (*)(cpgf::GMetaSelf, qptrdiff)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QBasicAtomicPointer<X >::Type (*) (QBasicAtomicPointer<X > *, qptrdiff))&opErAToRWrapper_QBasicAtomicPointer__opSubAssign<X>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
