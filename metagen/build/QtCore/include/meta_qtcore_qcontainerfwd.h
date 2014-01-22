// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCONTAINERFWD_H
#define __META_QTCORE_QCONTAINERFWD_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D, class T>
void buildMetaClass_QLinkedList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D, class Key, class T>
void buildMetaClass_QMultiMap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D, class T1, class T2>
void buildMetaClass_QPair(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const T1 &, const T2 &)>();
    _d.CPGF_MD_TEMPLATE _field("first", &D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _field("second", &D::ClassType::second);
}


template <typename D, class T>
void buildMetaClass_QQueue(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("enqueue", &D::ClassType::enqueue);
    _d.CPGF_MD_TEMPLATE _method("dequeue", &D::ClassType::dequeue);
    _d.CPGF_MD_TEMPLATE _method("head", (T & (D::ClassType::*) ())&D::ClassType::head);
    _d.CPGF_MD_TEMPLATE _method("head", (const T & (D::ClassType::*) () const)&D::ClassType::head);
}


template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opAssign(QSet<T > * self, const QSet< T > & other) {
    return (*self) = other;
}
template <class T>
inline bool opErAToRWrapper_QSet__opEqual(const QSet<T > * self, const QSet< T > & other) {
    return (*self) == other;
}
template <class T>
inline bool opErAToRWrapper_QSet__opNotEqual(const QSet<T > * self, const QSet< T > & other) {
    return (*self) != other;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opLeftShift(QSet<T > * self, const T & value) {
    return (*self) << value;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opBitOrAssign(QSet<T > * self, const QSet< T > & other) {
    return (*self) |= other;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opBitOrAssign(QSet<T > * self, const T & value) {
    return (*self) |= value;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opBitAndAssign(QSet<T > * self, const QSet< T > & other) {
    return (*self) &= other;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opBitAndAssign(QSet<T > * self, const T & value) {
    return (*self) &= value;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opAddAssign(QSet<T > * self, const QSet< T > & other) {
    return (*self) += other;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opAddAssign(QSet<T > * self, const T & value) {
    return (*self) += value;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opSubAssign(QSet<T > * self, const QSet< T > & other) {
    return (*self) -= other;
}
template <class T>
inline QSet< T > & opErAToRWrapper_QSet__opSubAssign(QSet<T > * self, const T & value) {
    return (*self) -= value;
}
template <class T>
inline QSet< T > opErAToRWrapper_QSet__opBitOr(const QSet<T > * self, const QSet< T > & other) {
    return (*self) | other;
}
template <class T>
inline QSet< T > opErAToRWrapper_QSet__opBitAnd(const QSet<T > * self, const QSet< T > & other) {
    return (*self) & other;
}
template <class T>
inline QSet< T > opErAToRWrapper_QSet__opAdd(const QSet<T > * self, const QSet< T > & other) {
    return (*self) + other;
}
template <class T>
inline QSet< T > opErAToRWrapper_QSet__opSub(const QSet<T > * self, const QSet< T > & other) {
    return (*self) - other;
}


template <class T>
inline typename QSet<T >::const_iterator& opErAToRWrapper_QSet_const_iterator__opAssign(typename QSet<T >::const_iterator * self, const typename QSet<T >::const_iterator& o) {
    return (*self) = o;
}
template <class T>
inline const T & opErAToRWrapper_QSet_const_iterator__opDerefer(const typename QSet<T >::const_iterator * self) {
    return *(*self);
}
template <class T>
inline bool opErAToRWrapper_QSet_const_iterator__opEqual(const typename QSet<T >::const_iterator * self, const typename QSet<T >::const_iterator& o) {
    return (*self) == o;
}
template <class T>
inline bool opErAToRWrapper_QSet_const_iterator__opNotEqual(const typename QSet<T >::const_iterator * self, const typename QSet<T >::const_iterator& o) {
    return (*self) != o;
}
template <class T>
inline typename QSet<T >::const_iterator& opErAToRWrapper_QSet_const_iterator__opInc(typename QSet<T >::const_iterator * self) {
    return ++(*self);
}
template <class T>
inline typename QSet<T >::const_iterator opErAToRWrapper_QSet_const_iterator__opIncSuffix(typename QSet<T >::const_iterator * self) {
    return (*self)++;
}
template <class T>
inline typename QSet<T >::const_iterator& opErAToRWrapper_QSet_const_iterator__opDec(typename QSet<T >::const_iterator * self) {
    return --(*self);
}
template <class T>
inline typename QSet<T >::const_iterator opErAToRWrapper_QSet_const_iterator__opDecSuffix(typename QSet<T >::const_iterator * self) {
    return (*self)--;
}
template <class T>
inline typename QSet<T >::const_iterator opErAToRWrapper_QSet_const_iterator__opAdd(const typename QSet<T >::const_iterator * self, int j) {
    return (*self) + j;
}
template <class T>
inline typename QSet<T >::const_iterator opErAToRWrapper_QSet_const_iterator__opSub(const typename QSet<T >::const_iterator * self, int j) {
    return (*self) - j;
}
template <class T>
inline typename QSet<T >::const_iterator& opErAToRWrapper_QSet_const_iterator__opAddAssign(typename QSet<T >::const_iterator * self, int j) {
    return (*self) += j;
}
template <class T>
inline typename QSet<T >::const_iterator& opErAToRWrapper_QSet_const_iterator__opSubAssign(typename QSet<T >::const_iterator * self, int j) {
    return (*self) -= j;
}


template <class T>
inline typename QSet<T >::iterator& opErAToRWrapper_QSet_iterator__opAssign(typename QSet<T >::iterator * self, const typename QSet<T >::iterator& o) {
    return (*self) = o;
}
template <class T>
inline const T & opErAToRWrapper_QSet_iterator__opDerefer(const typename QSet<T >::iterator * self) {
    return *(*self);
}
template <class T>
inline bool opErAToRWrapper_QSet_iterator__opEqual(const typename QSet<T >::iterator * self, const typename QSet<T >::iterator& o) {
    return (*self) == o;
}
template <class T>
inline bool opErAToRWrapper_QSet_iterator__opNotEqual(const typename QSet<T >::iterator * self, const typename QSet<T >::iterator& o) {
    return (*self) != o;
}
template <class T>
inline bool opErAToRWrapper_QSet_iterator__opEqual(const typename QSet<T >::iterator * self, const typename QSet<T >::const_iterator& o) {
    return (*self) == o;
}
template <class T>
inline bool opErAToRWrapper_QSet_iterator__opNotEqual(const typename QSet<T >::iterator * self, const typename QSet<T >::const_iterator& o) {
    return (*self) != o;
}
template <class T>
inline typename QSet<T >::iterator& opErAToRWrapper_QSet_iterator__opInc(typename QSet<T >::iterator * self) {
    return ++(*self);
}
template <class T>
inline typename QSet<T >::iterator opErAToRWrapper_QSet_iterator__opIncSuffix(typename QSet<T >::iterator * self) {
    return (*self)++;
}
template <class T>
inline typename QSet<T >::iterator& opErAToRWrapper_QSet_iterator__opDec(typename QSet<T >::iterator * self) {
    return --(*self);
}
template <class T>
inline typename QSet<T >::iterator opErAToRWrapper_QSet_iterator__opDecSuffix(typename QSet<T >::iterator * self) {
    return (*self)--;
}
template <class T>
inline typename QSet<T >::iterator opErAToRWrapper_QSet_iterator__opAdd(const typename QSet<T >::iterator * self, int j) {
    return (*self) + j;
}
template <class T>
inline typename QSet<T >::iterator opErAToRWrapper_QSet_iterator__opSub(const typename QSet<T >::iterator * self, int j) {
    return (*self) - j;
}
template <class T>
inline typename QSet<T >::iterator& opErAToRWrapper_QSet_iterator__opAddAssign(typename QSet<T >::iterator * self, int j) {
    return (*self) += j;
}
template <class T>
inline typename QSet<T >::iterator& opErAToRWrapper_QSet_iterator__opSubAssign(typename QSet<T >::iterator * self, int j) {
    return (*self) -= j;
}


template <typename D, class T>
void buildMetaClass_QSet(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSet< T > &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("capacity", &D::ClassType::capacity);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("squeeze", &D::ClassType::squeeze);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("setSharable", &D::ClassType::setSharable);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const T &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QSet< T > &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QSet<T >::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QSet<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QSet<T >::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QSet<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("find", (typename QSet<T >::iterator (D::ClassType::*) (const T &))&D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("find", (typename QSet<T >::const_iterator (D::ClassType::*) (const T &) const)&D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("constFind", &D::ClassType::constFind);
    _d.CPGF_MD_TEMPLATE _method("unite", &D::ClassType::unite);
    _d.CPGF_MD_TEMPLATE _method("intersect", &D::ClassType::intersect);
    _d.CPGF_MD_TEMPLATE _method("subtract", &D::ClassType::subtract);
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("toList", &D::ClassType::toList);
    _d.CPGF_MD_TEMPLATE _method("values", &D::ClassType::values);
    _d.CPGF_MD_TEMPLATE _method("fromList", &D::ClassType::fromList);
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const QSet< T > &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QSet< T > & (*) (QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSet< T > &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSet< T > &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QSet< T > & (*) (QSet<T > *, const T &))&opErAToRWrapper_QSet__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const QSet< T > &)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QSet< T > & (*) (QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opBitOrAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QSet< T > & (*) (QSet<T > *, const T &))&opErAToRWrapper_QSet__opBitOrAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const QSet< T > &)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QSet< T > & (*) (QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opBitAndAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QSet< T > & (*) (QSet<T > *, const T &))&opErAToRWrapper_QSet__opBitAndAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const QSet< T > &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QSet< T > & (*) (QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QSet< T > & (*) (QSet<T > *, const T &))&opErAToRWrapper_QSet__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const QSet< T > &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QSet< T > & (*) (QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QSet< T > & (*) (QSet<T > *, const T &))&opErAToRWrapper_QSet__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > (*)(const cpgf::GMetaSelf &, const QSet< T > &)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (QSet< T > (*) (const QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opBitOr<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > (*)(const cpgf::GMetaSelf &, const QSet< T > &)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QSet< T > (*) (const QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opBitAnd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > (*)(const cpgf::GMetaSelf &, const QSet< T > &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (QSet< T > (*) (const QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSet< T > (*)(const cpgf::GMetaSelf &, const QSet< T > &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSub", (QSet< T > (*) (const QSet<T > *, const QSet< T > &))&opErAToRWrapper_QSet__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<typename QSet<T >::const_iterator> _nd = GDefineMetaClass<typename QSet<T >::const_iterator>::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (typename Hash::const_iterator)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QSet<T >::const_iterator&)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QSet<T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator& (*)(cpgf::GMetaSelf, const typename QSet<T >::const_iterator&)>(mopHolder = mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAssign", (typename QSet<T >::const_iterator& (*) (typename QSet<T >::const_iterator *, const typename QSet<T >::const_iterator&))&opErAToRWrapper_QSet_const_iterator__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const T & (*) (const typename QSet<T >::const_iterator *))&opErAToRWrapper_QSet_const_iterator__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QSet<T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QSet<T >::const_iterator *, const typename QSet<T >::const_iterator&))&opErAToRWrapper_QSet_const_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QSet<T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QSet<T >::const_iterator *, const typename QSet<T >::const_iterator&))&opErAToRWrapper_QSet_const_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QSet<T >::const_iterator& (*) (typename QSet<T >::const_iterator *))&opErAToRWrapper_QSet_const_iterator__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QSet<T >::const_iterator (*) (typename QSet<T >::const_iterator *))&opErAToRWrapper_QSet_const_iterator__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QSet<T >::const_iterator& (*) (typename QSet<T >::const_iterator *))&opErAToRWrapper_QSet_const_iterator__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QSet<T >::const_iterator (*) (typename QSet<T >::const_iterator *))&opErAToRWrapper_QSet_const_iterator__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QSet<T >::const_iterator (*) (const typename QSet<T >::const_iterator *, int))&opErAToRWrapper_QSet_const_iterator__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QSet<T >::const_iterator (*) (const typename QSet<T >::const_iterator *, int))&opErAToRWrapper_QSet_const_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QSet<T >::const_iterator& (*) (typename QSet<T >::const_iterator *, int))&opErAToRWrapper_QSet_const_iterator__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QSet<T >::const_iterator& (*) (typename QSet<T >::const_iterator *, int))&opErAToRWrapper_QSet_const_iterator__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<typename QSet<T >::iterator> _nd = GDefineMetaClass<typename QSet<T >::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (typename Hash::iterator)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QSet<T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator& (*)(cpgf::GMetaSelf, const typename QSet<T >::iterator&)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opAssign", (typename QSet<T >::iterator& (*) (typename QSet<T >::iterator *, const typename QSet<T >::iterator&))&opErAToRWrapper_QSet_iterator__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const T & (*) (const typename QSet<T >::iterator *))&opErAToRWrapper_QSet_iterator__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QSet<T >::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QSet<T >::iterator *, const typename QSet<T >::iterator&))&opErAToRWrapper_QSet_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QSet<T >::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QSet<T >::iterator *, const typename QSet<T >::iterator&))&opErAToRWrapper_QSet_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QSet<T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QSet<T >::iterator *, const typename QSet<T >::const_iterator&))&opErAToRWrapper_QSet_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QSet<T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QSet<T >::iterator *, const typename QSet<T >::const_iterator&))&opErAToRWrapper_QSet_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QSet<T >::iterator& (*) (typename QSet<T >::iterator *))&opErAToRWrapper_QSet_iterator__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QSet<T >::iterator (*) (typename QSet<T >::iterator *))&opErAToRWrapper_QSet_iterator__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QSet<T >::iterator& (*) (typename QSet<T >::iterator *))&opErAToRWrapper_QSet_iterator__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QSet<T >::iterator (*) (typename QSet<T >::iterator *))&opErAToRWrapper_QSet_iterator__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QSet<T >::iterator (*) (const typename QSet<T >::iterator *, int))&opErAToRWrapper_QSet_iterator__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QSet<T >::iterator (*) (const typename QSet<T >::iterator *, int))&opErAToRWrapper_QSet_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QSet<T >::iterator& (*) (typename QSet<T >::iterator *, int))&opErAToRWrapper_QSet_iterator__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QSet<T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QSet<T >::iterator& (*) (typename QSet<T >::iterator *, int))&opErAToRWrapper_QSet_iterator__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D, class T>
void buildMetaClass_QStack(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("push", &D::ClassType::push);
    _d.CPGF_MD_TEMPLATE _method("pop", &D::ClassType::pop);
    _d.CPGF_MD_TEMPLATE _method("top", (T & (D::ClassType::*) ())&D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("top", (const T & (D::ClassType::*) () const)&D::ClassType::top);
}


template <class T, int Prealloc>
inline QVarLengthArray< T, Prealloc > & opErAToRWrapper_QVarLengthArray__opAssign(QVarLengthArray<T, Prealloc > * self, const QVarLengthArray< T, Prealloc > & other) {
    return (*self) = other;
}
template <class T, int Prealloc>
inline T & opErAToRWrapper_QVarLengthArray__opArrayGet(QVarLengthArray<T, Prealloc > * self, int idx) {
    return (*self)[idx];
}
template <class T, int Prealloc>
inline void opErAToRWrapper_QVarLengthArray__opArraySet(QVarLengthArray<T, Prealloc > * self, int idx, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[idx] = OpsEt_vALue;
}
template <class T, int Prealloc>
inline const T & opErAToRWrapper_QVarLengthArray__opArrayGet(const QVarLengthArray<T, Prealloc > * self, int idx) {
    return (*self)[idx];
}
template <class T, int Prealloc>
inline QVarLengthArray< T, Prealloc > & opErAToRWrapper_QVarLengthArray__opLeftShift(QVarLengthArray<T, Prealloc > * self, const T & t) {
    return (*self) << t;
}
template <class T, int Prealloc>
inline QVarLengthArray< T, Prealloc > & opErAToRWrapper_QVarLengthArray__opAddAssign(QVarLengthArray<T, Prealloc > * self, const T & t) {
    return (*self) += t;
}


template <typename D, class T, int Prealloc>
void buildMetaClass_QVarLengthArray(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVarLengthArray< T, Prealloc > &)>();
    _d.CPGF_MD_TEMPLATE _field("array", &D::ClassType::array);
    _d.CPGF_MD_TEMPLATE _field("q_for_alignment_1", &D::ClassType::q_for_alignment_1);
    _d.CPGF_MD_TEMPLATE _field("q_for_alignment_2", &D::ClassType::q_for_alignment_2);
    _d.CPGF_MD_TEMPLATE _method("removeLast", &D::ClassType::removeLast);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("first", (T & (D::ClassType::*) ())&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("first", (const T & (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("last", (T & (D::ClassType::*) ())&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("last", (const T & (D::ClassType::*) () const)&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("squeeze", &D::ClassType::squeeze);
    _d.CPGF_MD_TEMPLATE _method("capacity", &D::ClassType::capacity);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int, const T &) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const T &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const T *, int))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("replace", &D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("remove", (void (D::ClassType::*) (int))&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("remove", (void (D::ClassType::*) (int, int))&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("data", (T * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const T * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QVarLengthArray<T, Prealloc >::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QVarLengthArray<T, Prealloc >::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QVarLengthArray<T, Prealloc >::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QVarLengthArray<T, Prealloc >::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QVarLengthArray<T, Prealloc >::iterator (D::ClassType::*) (typename QVarLengthArray<T, Prealloc >::const_iterator, int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QVarLengthArray<T, Prealloc >::iterator (D::ClassType::*) (typename QVarLengthArray<T, Prealloc >::const_iterator, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QVarLengthArray<T, Prealloc >::iterator (D::ClassType::*) (typename QVarLengthArray<T, Prealloc >::const_iterator, typename QVarLengthArray<T, Prealloc >::const_iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QVarLengthArray<T, Prealloc >::iterator (D::ClassType::*) (typename QVarLengthArray<T, Prealloc >::const_iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("push_back", &D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("pop_back", &D::ClassType::pop_back);
    _d.CPGF_MD_TEMPLATE _method("front", (T & (D::ClassType::*) ())&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("front", (const T & (D::ClassType::*) () const)&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("back", (T & (D::ClassType::*) ())&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("back", (const T & (D::ClassType::*) () const)&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _operator<QVarLengthArray< T, Prealloc > & (*)(cpgf::GMetaSelf, const QVarLengthArray< T, Prealloc > &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QVarLengthArray< T, Prealloc > & (*) (QVarLengthArray<T, Prealloc > *, const QVarLengthArray< T, Prealloc > &))&opErAToRWrapper_QVarLengthArray__opAssign<T, Prealloc>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QVarLengthArray<T, Prealloc > *, int))&opErAToRWrapper_QVarLengthArray__opArrayGet<T, Prealloc>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QVarLengthArray<T, Prealloc > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QVarLengthArray__opArraySet<T, Prealloc>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T & (*) (const QVarLengthArray<T, Prealloc > *, int))&opErAToRWrapper_QVarLengthArray__opArrayGet<T, Prealloc>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVarLengthArray< T, Prealloc > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QVarLengthArray< T, Prealloc > & (*) (QVarLengthArray<T, Prealloc > *, const T &))&opErAToRWrapper_QVarLengthArray__opLeftShift<T, Prealloc>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVarLengthArray< T, Prealloc > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QVarLengthArray< T, Prealloc > & (*) (QVarLengthArray<T, Prealloc > *, const T &))&opErAToRWrapper_QVarLengthArray__opAddAssign<T, Prealloc>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <class T>
inline QVector< T > & opErAToRWrapper_QVector__opAssign(QVector<T > * self, const QVector< T > & v) {
    return (*self) = v;
}
template <class T>
inline bool opErAToRWrapper_QVector__opEqual(const QVector<T > * self, const QVector< T > & v) {
    return (*self) == v;
}
template <class T>
inline bool opErAToRWrapper_QVector__opNotEqual(const QVector<T > * self, const QVector< T > & v) {
    return (*self) != v;
}
template <class T>
inline T & opErAToRWrapper_QVector__opArrayGet(QVector<T > * self, int i) {
    return (*self)[i];
}
template <class T>
inline void opErAToRWrapper_QVector__opArraySet(QVector<T > * self, int i, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[i] = OpsEt_vALue;
}
template <class T>
inline const T & opErAToRWrapper_QVector__opArrayGet(const QVector<T > * self, int i) {
    return (*self)[i];
}
template <class T>
inline QVector< T > & opErAToRWrapper_QVector__opAddAssign(QVector<T > * self, const QVector< T > & l) {
    return (*self) += l;
}
template <class T>
inline QVector< T > opErAToRWrapper_QVector__opAdd(const QVector<T > * self, const QVector< T > & l) {
    return (*self) + l;
}
template <class T>
inline QVector< T > & opErAToRWrapper_QVector__opAddAssign(QVector<T > * self, const T & t) {
    return (*self) += t;
}
template <class T>
inline QVector< T > & opErAToRWrapper_QVector__opLeftShift(QVector<T > * self, const T & t) {
    return (*self) << t;
}
template <class T>
inline QVector< T > & opErAToRWrapper_QVector__opLeftShift(QVector<T > * self, const QVector< T > & l) {
    return (*self) << l;
}


template <typename D, class T>
void buildMetaClass_QVector(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, const T &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector< T > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("capacity", &D::ClassType::capacity);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("squeeze", &D::ClassType::squeeze);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("setSharable", &D::ClassType::setSharable);
    _d.CPGF_MD_TEMPLATE _method("isSharedWith", &D::ClassType::isSharedWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("data", (T * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const T * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("append", &D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("replace", &D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("remove", (void (D::ClassType::*) (int))&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("remove", (void (D::ClassType::*) (int, int))&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("removeFirst", &D::ClassType::removeFirst);
    _d.CPGF_MD_TEMPLATE _method("removeLast", &D::ClassType::removeLast);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", &D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("takeLast", &D::ClassType::takeLast);
    _d.CPGF_MD_TEMPLATE _method("fill", &D::ClassType::fill)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", &D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", &D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const T &) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QVector<T >::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QVector<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QVector<T >::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QVector<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QVector<T >::iterator (D::ClassType::*) (typename QVector<T >::iterator, int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QVector<T >::iterator (D::ClassType::*) (typename QVector<T >::iterator, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QVector<T >::iterator (D::ClassType::*) (typename QVector<T >::iterator, typename QVector<T >::iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QVector<T >::iterator (D::ClassType::*) (typename QVector<T >::iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("first", (T & (D::ClassType::*) ())&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("first", (const T & (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("last", (T & (D::ClassType::*) ())&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("last", (const T & (D::ClassType::*) () const)&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("startsWith", &D::ClassType::startsWith);
    _d.CPGF_MD_TEMPLATE _method("endsWith", &D::ClassType::endsWith);
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int, const T &) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("push_back", &D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("push_front", &D::ClassType::push_front);
    _d.CPGF_MD_TEMPLATE _method("pop_back", &D::ClassType::pop_back);
    _d.CPGF_MD_TEMPLATE _method("pop_front", &D::ClassType::pop_front);
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("front", (T & (D::ClassType::*) ())&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("front", (typename QVector<T >::const_reference (D::ClassType::*) () const)&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("back", (typename QVector<T >::reference (D::ClassType::*) ())&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("back", (typename QVector<T >::const_reference (D::ClassType::*) () const)&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("toList", &D::ClassType::toList);
    _d.CPGF_MD_TEMPLATE _method("toStdVector", &D::ClassType::toStdVector);
    _d.CPGF_MD_TEMPLATE _method("fromList", &D::ClassType::fromList);
    _d.CPGF_MD_TEMPLATE _method("fromStdVector", &D::ClassType::fromStdVector);
    _d.CPGF_MD_TEMPLATE _operator<QVector< T > & (*)(cpgf::GMetaSelf, const QVector< T > &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QVector< T > & (*) (QVector<T > *, const QVector< T > &))&opErAToRWrapper_QVector__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVector< T > &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QVector<T > *, const QVector< T > &))&opErAToRWrapper_QVector__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVector< T > &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QVector<T > *, const QVector< T > &))&opErAToRWrapper_QVector__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QVector<T > *, int))&opErAToRWrapper_QVector__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QVector<T > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QVector__opArraySet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T & (*) (const QVector<T > *, int))&opErAToRWrapper_QVector__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector< T > & (*)(cpgf::GMetaSelf, const QVector< T > &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QVector< T > & (*) (QVector<T > *, const QVector< T > &))&opErAToRWrapper_QVector__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector< T > (*)(const cpgf::GMetaSelf &, const QVector< T > &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (QVector< T > (*) (const QVector<T > *, const QVector< T > &))&opErAToRWrapper_QVector__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QVector< T > & (*) (QVector<T > *, const T &))&opErAToRWrapper_QVector__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QVector< T > & (*) (QVector<T > *, const T &))&opErAToRWrapper_QVector__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector< T > & (*)(cpgf::GMetaSelf, const QVector< T > &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QVector< T > & (*) (QVector<T > *, const QVector< T > &))&opErAToRWrapper_QVector__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
