// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSHAREDDATA_H
#define __META_QTCORE_QSHAREDDATA_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace std;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qshareddata(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <class T>
inline T & opErAToRWrapper_QExplicitlySharedDataPointer__opDerefer(const QExplicitlySharedDataPointer<T > * self) {
    return *(*self);
}
template <class T>
inline bool opErAToRWrapper_QExplicitlySharedDataPointer__opEqual(const QExplicitlySharedDataPointer<T > * self, const QExplicitlySharedDataPointer< T > & other) {
    return (*self) == other;
}
template <class T>
inline bool opErAToRWrapper_QExplicitlySharedDataPointer__opNotEqual(const QExplicitlySharedDataPointer<T > * self, const QExplicitlySharedDataPointer< T > & other) {
    return (*self) != other;
}
template <class T>
inline bool opErAToRWrapper_QExplicitlySharedDataPointer__opEqual(const QExplicitlySharedDataPointer<T > * self, const T * ptr) {
    return (*self) == ptr;
}
template <class T>
inline bool opErAToRWrapper_QExplicitlySharedDataPointer__opNotEqual(const QExplicitlySharedDataPointer<T > * self, const T * ptr) {
    return (*self) != ptr;
}
template <class T>
inline QExplicitlySharedDataPointer<T> & opErAToRWrapper_QExplicitlySharedDataPointer__opAssign(QExplicitlySharedDataPointer<T > * self, const QExplicitlySharedDataPointer< T > & o) {
    return (*self) = o;
}
template <class T>
inline QExplicitlySharedDataPointer<T> & opErAToRWrapper_QExplicitlySharedDataPointer__opAssign(QExplicitlySharedDataPointer<T > * self, T * o) {
    return (*self) = o;
}
template <class T>
inline bool opErAToRWrapper_QExplicitlySharedDataPointer__opNot(const QExplicitlySharedDataPointer<T > * self) {
    return !(*self);
}


template <typename D, class T>
void buildMetaClass_QExplicitlySharedDataPointer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (T *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QExplicitlySharedDataPointer< T > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (T & (*) (const QExplicitlySharedDataPointer<T > *))&opErAToRWrapper_QExplicitlySharedDataPointer__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T * (*)(cpgf::GMetaSelf)>(mopHolder -> mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
    _d.CPGF_MD_TEMPLATE _operator< bool (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QExplicitlySharedDataPointer< T > &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QExplicitlySharedDataPointer<T > *, const QExplicitlySharedDataPointer< T > &))&opErAToRWrapper_QExplicitlySharedDataPointer__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QExplicitlySharedDataPointer< T > &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QExplicitlySharedDataPointer<T > *, const QExplicitlySharedDataPointer< T > &))&opErAToRWrapper_QExplicitlySharedDataPointer__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const T *)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QExplicitlySharedDataPointer<T > *, const T *))&opErAToRWrapper_QExplicitlySharedDataPointer__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const T *)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QExplicitlySharedDataPointer<T > *, const T *))&opErAToRWrapper_QExplicitlySharedDataPointer__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QExplicitlySharedDataPointer<T> & (*)(cpgf::GMetaSelf, const QExplicitlySharedDataPointer< T > &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QExplicitlySharedDataPointer<T> & (*) (QExplicitlySharedDataPointer<T > *, const QExplicitlySharedDataPointer< T > &))&opErAToRWrapper_QExplicitlySharedDataPointer__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QExplicitlySharedDataPointer<T> & (*)(cpgf::GMetaSelf, T *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QExplicitlySharedDataPointer<T> & (*) (QExplicitlySharedDataPointer<T > *, T *))&opErAToRWrapper_QExplicitlySharedDataPointer__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &)>(!mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNot", (bool (*) (const QExplicitlySharedDataPointer<T > *))&opErAToRWrapper_QExplicitlySharedDataPointer__opNot<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QSharedData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSharedData &)>();
    _d.CPGF_MD_TEMPLATE _field("ref", &D::ClassType::ref);
}


template <class T>
inline T & opErAToRWrapper_QSharedDataPointer__opDerefer(QSharedDataPointer<T > * self) {
    return *(*self);
}
template <class T>
inline const T & opErAToRWrapper_QSharedDataPointer__opDerefer(const QSharedDataPointer<T > * self) {
    return *(*self);
}
template <class T>
inline bool opErAToRWrapper_QSharedDataPointer__opEqual(const QSharedDataPointer<T > * self, const QSharedDataPointer< T > & other) {
    return (*self) == other;
}
template <class T>
inline bool opErAToRWrapper_QSharedDataPointer__opNotEqual(const QSharedDataPointer<T > * self, const QSharedDataPointer< T > & other) {
    return (*self) != other;
}
template <class T>
inline QSharedDataPointer<T> & opErAToRWrapper_QSharedDataPointer__opAssign(QSharedDataPointer<T > * self, const QSharedDataPointer< T > & o) {
    return (*self) = o;
}
template <class T>
inline QSharedDataPointer<T> & opErAToRWrapper_QSharedDataPointer__opAssign(QSharedDataPointer<T > * self, T * o) {
    return (*self) = o;
}
template <class T>
inline bool opErAToRWrapper_QSharedDataPointer__opNot(const QSharedDataPointer<T > * self) {
    return !(*self);
}


template <typename D, class T>
void buildMetaClass_QSharedDataPointer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (T *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSharedDataPointer< T > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("data", (T * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const T * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (T & (*) (QSharedDataPointer<T > *))&opErAToRWrapper_QSharedDataPointer__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (const T & (*) (const QSharedDataPointer<T > *))&opErAToRWrapper_QSharedDataPointer__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T * (*)(cpgf::GMetaSelf)>(mopHolder -> mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
    _d.CPGF_MD_TEMPLATE _operator< T * (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator< const T * (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSharedDataPointer< T > &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QSharedDataPointer<T > *, const QSharedDataPointer< T > &))&opErAToRWrapper_QSharedDataPointer__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSharedDataPointer< T > &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QSharedDataPointer<T > *, const QSharedDataPointer< T > &))&opErAToRWrapper_QSharedDataPointer__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSharedDataPointer<T> & (*)(cpgf::GMetaSelf, const QSharedDataPointer< T > &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QSharedDataPointer<T> & (*) (QSharedDataPointer<T > *, const QSharedDataPointer< T > &))&opErAToRWrapper_QSharedDataPointer__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSharedDataPointer<T> & (*)(cpgf::GMetaSelf, T *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QSharedDataPointer<T> & (*) (QSharedDataPointer<T > *, T *))&opErAToRWrapper_QSharedDataPointer__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &)>(!mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNot", (bool (*) (const QSharedDataPointer<T > *))&opErAToRWrapper_QSharedDataPointer__opNot<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
