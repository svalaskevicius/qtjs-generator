// Auto generated file, don't modify.

#ifndef __META_QTCORE_QRESULTSTORE_H
#define __META_QTCORE_QRESULTSTORE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_ResultItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const void *, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const void *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("m_count", &D::ClassType::m_count);
    _d.CPGF_MD_TEMPLATE _field("result", &D::ClassType::result);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isVector", &D::ClassType::isVector);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
}


template <typename D, typename T>
void buildMetaClass_ResultIterator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const ResultIteratorBase &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("pointer", &D::ClassType::pointer);
}


inline ResultIteratorBase opErAToRWrapper_ResultIteratorBase__opInc(ResultIteratorBase * self) {
    return ++(*self);
}
inline bool opErAToRWrapper_ResultIteratorBase__opEqual(const ResultIteratorBase * self, const ResultIteratorBase & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_ResultIteratorBase__opNotEqual(const ResultIteratorBase * self, const ResultIteratorBase & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_ResultIteratorBase(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QMap< int, ResultItem >::const_iterator, int)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("vectorIndex", &D::ClassType::vectorIndex);
    _d.CPGF_MD_TEMPLATE _method("resultIndex", &D::ClassType::resultIndex);
    _d.CPGF_MD_TEMPLATE _method("batchSize", &D::ClassType::batchSize);
    _d.CPGF_MD_TEMPLATE _method("batchedAdvance", &D::ClassType::batchedAdvance);
    _d.CPGF_MD_TEMPLATE _method("isVector", &D::ClassType::isVector);
    _d.CPGF_MD_TEMPLATE _method("canIncrementVectorIndex", &D::ClassType::canIncrementVectorIndex);
    _d.CPGF_MD_TEMPLATE _operator<ResultIteratorBase (*)(cpgf::GMetaSelf)>(++mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opInc", (ResultIteratorBase (*) (ResultIteratorBase *))&opErAToRWrapper_ResultIteratorBase__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const ResultIteratorBase &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const ResultIteratorBase *, const ResultIteratorBase &))&opErAToRWrapper_ResultIteratorBase__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const ResultIteratorBase &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const ResultIteratorBase *, const ResultIteratorBase &))&opErAToRWrapper_ResultIteratorBase__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D, typename T>
void buildMetaClass_ResultStore(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const ResultStoreBase &)>();
    _d.CPGF_MD_TEMPLATE _method("addResult", &D::ClassType::addResult);
    _d.CPGF_MD_TEMPLATE _method("addResults", (int (D::ClassType::*) (int, const QVector< T > *))&D::ClassType::addResults);
    _d.CPGF_MD_TEMPLATE _method("addResults", (int (D::ClassType::*) (int, const QVector< T > *, int))&D::ClassType::addResults);
    _d.CPGF_MD_TEMPLATE _method("addCanceledResult", &D::ClassType::addCanceledResult);
    _d.CPGF_MD_TEMPLATE _method("addCanceledResults", &D::ClassType::addCanceledResults);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("resultAt", &D::ClassType::resultAt);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
}


template <typename D>
void buildMetaClass_ResultStoreBase(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setFilterMode", &D::ClassType::setFilterMode);
    _d.CPGF_MD_TEMPLATE _method("filterMode", &D::ClassType::filterMode);
    _d.CPGF_MD_TEMPLATE _method("addResult", &D::ClassType::addResult);
    _d.CPGF_MD_TEMPLATE _method("addResults", &D::ClassType::addResults);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("hasNextResult", &D::ClassType::hasNextResult);
    _d.CPGF_MD_TEMPLATE _method("resultAt", &D::ClassType::resultAt);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
