// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QRECYCLEPOOL_P_H
#define CPGF_META_QTQML_QRECYCLEPOOL_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qrecyclepool_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_31")
        ._element("QRECYCLEPOOLCOOKIE", QRECYCLEPOOLCOOKIE)
    ;
}


template <typename D, typename T, int Step>
void buildMetaClass_QRecyclePool(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("New", (T * (D::ClassType::*) ())&D::ClassType::New);
    _d.CPGF_MD_TEMPLATE _method("Delete", &D::ClassType::Delete);
}


template <typename D, typename T, int Step>
void buildMetaClass_QRecyclePoolPrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("recyclePoolHold", &D::ClassType::recyclePoolHold);
    _d.CPGF_MD_TEMPLATE _field("outstandingItems", &D::ClassType::outstandingItems);
    _d.CPGF_MD_TEMPLATE _field("cookie", &D::ClassType::cookie);
    _d.CPGF_MD_TEMPLATE _field("currentPage", &D::ClassType::currentPage);
    _d.CPGF_MD_TEMPLATE _field("nextAllocated", &D::ClassType::nextAllocated);
    _d.CPGF_MD_TEMPLATE _method("allocate", &D::ClassType::allocate);
    _d.CPGF_MD_TEMPLATE _method("releaseIfPossible", &D::ClassType::releaseIfPossible);
    _d.CPGF_MD_TEMPLATE _method("dispose", &D::ClassType::dispose);
    {
        GDefineMetaClass<typename QRecyclePoolPrivate<T, Step >::Page> _nd = GDefineMetaClass<typename QRecyclePoolPrivate<T, Step >::Page>::declare("Page");
        _nd.CPGF_MD_TEMPLATE _field("nextPage", &QRecyclePoolPrivate<T, Step >::Page::nextPage);
        _nd.CPGF_MD_TEMPLATE _field("free", &QRecyclePoolPrivate<T, Step >::Page::free);
        _nd.CPGF_MD_TEMPLATE _field("array", &QRecyclePoolPrivate<T, Step >::Page::array);
        _nd.CPGF_MD_TEMPLATE _field("q_for_alignment_1", &QRecyclePoolPrivate<T, Step >::Page::q_for_alignment_1);
        _nd.CPGF_MD_TEMPLATE _field("q_for_alignment_2", &QRecyclePoolPrivate<T, Step >::Page::q_for_alignment_2);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<typename QRecyclePoolPrivate<T, Step >::PoolType, T> _nd = GDefineMetaClass<typename QRecyclePoolPrivate<T, Step >::PoolType, T>::declare("PoolType");
        _nd.CPGF_MD_TEMPLATE _field("pool", &QRecyclePoolPrivate<T, Step >::PoolType::pool);
        _nd.CPGF_MD_TEMPLATE _field("nextAllocated", &QRecyclePoolPrivate<T, Step >::PoolType::nextAllocated);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
