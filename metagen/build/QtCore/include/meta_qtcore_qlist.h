// Auto generated file, don't modify.

#ifndef __META_QTCORE_QLIST_H
#define __META_QTCORE_QLIST_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename T>
inline QList< T > & opErAToRWrapper_QList__opAssign(QList<T > * self, const QList< T > & l) {
    return (*self) = l;
}
template <typename T>
inline bool opErAToRWrapper_QList__opEqual(const QList<T > * self, const QList< T > & l) {
    return (*self) == l;
}
template <typename T>
inline bool opErAToRWrapper_QList__opNotEqual(const QList<T > * self, const QList< T > & l) {
    return (*self) != l;
}
template <typename T>
inline const T & opErAToRWrapper_QList__opArrayGet(const QList<T > * self, int i) {
    return (*self)[i];
}
template <typename T>
inline T & opErAToRWrapper_QList__opArrayGet(QList<T > * self, int i) {
    return (*self)[i];
}
template <typename T>
inline void opErAToRWrapper_QList__opArraySet(QList<T > * self, int i, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[i] = OpsEt_vALue;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opAddAssign(QList<T > * self, const QList< T > & l) {
    return (*self) += l;
}
template <typename T>
inline QList< T > opErAToRWrapper_QList__opAdd(const QList<T > * self, const QList< T > & l) {
    return (*self) + l;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opAddAssign(QList<T > * self, const T & t) {
    return (*self) += t;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opLeftShift(QList<T > * self, const T & t) {
    return (*self) << t;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opLeftShift(QList<T > * self, const QList< T > & l) {
    return (*self) << l;
}


template <typename T>
inline const T & opErAToRWrapper_QList_const_iterator__opDerefer(const typename QList<T >::const_iterator * self) {
    return *(*self);
}
template <typename T>
inline const T & opErAToRWrapper_QList_const_iterator__opArrayGet(const typename QList<T >::const_iterator * self, int j) {
    return (*self)[j];
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) == o;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opNotEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) != o;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opLess(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) < other;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opLessEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) <= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opGreater(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) > other;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opGreaterEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) >= other;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opInc(typename QList<T >::const_iterator * self) {
    return ++(*self);
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opIncSuffix(typename QList<T >::const_iterator * self) {
    return (*self)++;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opDec(typename QList<T >::const_iterator * self) {
    return --(*self);
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opDecSuffix(typename QList<T >::const_iterator * self) {
    return (*self)--;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opAddAssign(typename QList<T >::const_iterator * self, int j) {
    return (*self) += j;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opSubAssign(typename QList<T >::const_iterator * self, int j) {
    return (*self) -= j;
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opAdd(const typename QList<T >::const_iterator * self, int j) {
    return (*self) + j;
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opSub(const typename QList<T >::const_iterator * self, int j) {
    return (*self) - j;
}
template <typename T>
inline int opErAToRWrapper_QList_const_iterator__opSub(const typename QList<T >::const_iterator * self, typename QList<T >::const_iterator j) {
    return (*self) - j;
}


template <typename T>
inline T & opErAToRWrapper_QList_iterator__opDerefer(const typename QList<T >::iterator * self) {
    return *(*self);
}
template <typename T>
inline T & opErAToRWrapper_QList_iterator__opArrayGet(const typename QList<T >::iterator * self, int j) {
    return (*self)[j];
}
template <typename T>
inline void opErAToRWrapper_QList_iterator__opArraySet(const typename QList<T >::iterator * self, int j, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[j] = OpsEt_vALue;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& o) {
    return (*self) == o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opNotEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& o) {
    return (*self) != o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLess(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) < other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLessEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) <= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreater(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) > other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreaterEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) >= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) == o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opNotEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) != o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLess(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) < other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLessEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) <= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreater(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) > other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreaterEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) >= other;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opInc(typename QList<T >::iterator * self) {
    return ++(*self);
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opIncSuffix(typename QList<T >::iterator * self) {
    return (*self)++;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opDec(typename QList<T >::iterator * self) {
    return --(*self);
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opDecSuffix(typename QList<T >::iterator * self) {
    return (*self)--;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opAddAssign(typename QList<T >::iterator * self, int j) {
    return (*self) += j;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opSubAssign(typename QList<T >::iterator * self, int j) {
    return (*self) -= j;
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opAdd(const typename QList<T >::iterator * self, int j) {
    return (*self) + j;
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opSub(const typename QList<T >::iterator * self, int j) {
    return (*self) - j;
}
template <typename T>
inline int opErAToRWrapper_QList_iterator__opSub(const typename QList<T >::iterator * self, typename QList<T >::iterator j) {
    return (*self) - j;
}


template <typename D, typename T>
void buildMetaClass_QList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QList< T > &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", (void (D::ClassType::*) (QList< T > &))&D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("detachShared", &D::ClassType::detachShared);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("setSharable", &D::ClassType::setSharable);
    _d.CPGF_MD_TEMPLATE _method("isSharedWith", &D::ClassType::isSharedWith);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const T &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const QList< T > &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("replace", &D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("removeAll", &D::ClassType::removeAll);
    _d.CPGF_MD_TEMPLATE _method("removeOne", &D::ClassType::removeOne);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", &D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("takeLast", &D::ClassType::takeLast);
    _d.CPGF_MD_TEMPLATE _method("move", &D::ClassType::move);
    _d.CPGF_MD_TEMPLATE _method("swap", (void (D::ClassType::*) (int, int))&D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("indexOf", &D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", &D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const T &) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QList<T >::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QList<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QList<T >::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QList<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QList<T >::iterator (D::ClassType::*) (typename QList<T >::iterator, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QList<T >::iterator (D::ClassType::*) (typename QList<T >::iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QList<T >::iterator (D::ClassType::*) (typename QList<T >::iterator, typename QList<T >::iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("first", (T & (D::ClassType::*) ())&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("first", (const T & (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("last", (T & (D::ClassType::*) ())&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("last", (const T & (D::ClassType::*) () const)&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("removeFirst", &D::ClassType::removeFirst);
    _d.CPGF_MD_TEMPLATE _method("removeLast", &D::ClassType::removeLast);
    _d.CPGF_MD_TEMPLATE _method("startsWith", &D::ClassType::startsWith);
    _d.CPGF_MD_TEMPLATE _method("endsWith", &D::ClassType::endsWith);
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int, const T &) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("push_back", &D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("push_front", &D::ClassType::push_front);
    _d.CPGF_MD_TEMPLATE _method("front", (T & (D::ClassType::*) ())&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("front", (const T & (D::ClassType::*) () const)&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("back", (T & (D::ClassType::*) ())&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("back", (const T & (D::ClassType::*) () const)&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("pop_front", &D::ClassType::pop_front);
    _d.CPGF_MD_TEMPLATE _method("pop_back", &D::ClassType::pop_back);
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("toVector", &D::ClassType::toVector);
    _d.CPGF_MD_TEMPLATE _method("toSet", &D::ClassType::toSet);
    _d.CPGF_MD_TEMPLATE _method("toStdList", &D::ClassType::toStdList);
    _d.CPGF_MD_TEMPLATE _method("fromVector", &D::ClassType::fromVector, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromSet", &D::ClassType::fromSet);
    _d.CPGF_MD_TEMPLATE _method("fromStdList", &D::ClassType::fromStdList);
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const QList< T > &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QList< T > & (*) (QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QList< T > &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QList< T > &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T & (*) (const QList<T > *, int))&opErAToRWrapper_QList__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QList<T > *, int))&opErAToRWrapper_QList__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QList<T > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QList__opArraySet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const QList< T > &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QList< T > & (*) (QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > (*)(const cpgf::GMetaSelf &, const QList< T > &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (QList< T > (*) (const QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QList< T > & (*) (QList<T > *, const T &))&opErAToRWrapper_QList__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QList< T > & (*) (QList<T > *, const T &))&opErAToRWrapper_QList__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const QList< T > &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QList< T > & (*) (QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<typename QList<T >::const_iterator> _nd = GDefineMetaClass<typename QList<T >::const_iterator>::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QList<T >::const_iterator&)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QList<T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _field("i", &QList<T >::const_iterator::i);
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const T & (*) (const typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
        _nd.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T & (*) (const typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder < mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opLess<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder <= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opLessEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder > mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opGreater<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder >= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opGreaterEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QList<T >::const_iterator (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QList<T >::const_iterator (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QList<T >::const_iterator (*) (const typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QList<T >::const_iterator (*) (const typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, typename QList<T >::const_iterator)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (int (*) (const typename QList<T >::const_iterator *, typename QList<T >::const_iterator))&opErAToRWrapper_QList_const_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<typename QList<T >::iterator> _nd = GDefineMetaClass<typename QList<T >::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QList<T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _field("i", &QList<T >::iterator::i);
        _nd.CPGF_MD_TEMPLATE _operator<T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (T & (*) (const typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
        _nd.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (const typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (const typename QList<T >::iterator *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QList_iterator__opArraySet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opLess<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opLessEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opGreater<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opGreaterEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder < mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opLess<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder <= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opLessEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder > mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opGreater<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder >= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opGreaterEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QList<T >::iterator (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QList<T >::iterator (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QList<T >::iterator (*) (const typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QList<T >::iterator (*) (const typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, typename QList<T >::iterator)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (int (*) (const typename QList<T >::iterator *, typename QList<T >::iterator))&opErAToRWrapper_QList_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
