// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QINTRUSIVELIST_P_H
#define CPGF_META_QTQML_QINTRUSIVELIST_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <class N, QIntrusiveListNode N::* member>
inline N * opErAToRWrapper_QIntrusiveList_iterator__opDerefer(const typename QIntrusiveList<N, member >::iterator * self) {
    return *(*self);
}
template <class N, QIntrusiveListNode N::* member>
inline bool opErAToRWrapper_QIntrusiveList_iterator__opEqual(const typename QIntrusiveList<N, member >::iterator * self, const typename QIntrusiveList<N, member >::iterator& other) {
    return (*self) == other;
}
template <class N, QIntrusiveListNode N::* member>
inline bool opErAToRWrapper_QIntrusiveList_iterator__opNotEqual(const typename QIntrusiveList<N, member >::iterator * self, const typename QIntrusiveList<N, member >::iterator& other) {
    return (*self) != other;
}
template <class N, QIntrusiveListNode N::* member>
inline typename QIntrusiveList<N, member >::iterator& opErAToRWrapper_QIntrusiveList_iterator__opInc(typename QIntrusiveList<N, member >::iterator * self) {
    return ++(*self);
}


template <typename D, class N, QIntrusiveListNode N::* member>
void buildMetaClass_QIntrusiveList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("first", &D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
    {
        GDefineMetaClass<typename QIntrusiveList<N, member >::iterator> _nd = GDefineMetaClass<typename QIntrusiveList<N, member >::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (N *)>();
        _nd.CPGF_MD_TEMPLATE _method("erase", &QIntrusiveList<N, member >::iterator::erase);
        _nd.CPGF_MD_TEMPLATE _operator<N * (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (N * (*) (const typename QIntrusiveList<N, member >::iterator *))&opErAToRWrapper_QIntrusiveList_iterator__opDerefer<N, member>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<N * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QIntrusiveList<N, member >::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QIntrusiveList<N, member >::iterator *, const typename QIntrusiveList<N, member >::iterator&))&opErAToRWrapper_QIntrusiveList_iterator__opEqual<N, member>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QIntrusiveList<N, member >::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QIntrusiveList<N, member >::iterator *, const typename QIntrusiveList<N, member >::iterator&))&opErAToRWrapper_QIntrusiveList_iterator__opNotEqual<N, member>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QIntrusiveList<N, member >::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QIntrusiveList<N, member >::iterator& (*) (typename QIntrusiveList<N, member >::iterator *))&opErAToRWrapper_QIntrusiveList_iterator__opInc<N, member>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QIntrusiveListNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("_next", &D::ClassType::_next);
    _d.CPGF_MD_TEMPLATE _field("_prev", &D::ClassType::_prev);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("isInList", &D::ClassType::isInList);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
