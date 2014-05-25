// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QMAP_H
#define CPGF_META_QTCORE_QMAP_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <class Key, class T>
inline QMap< Key, T > & opErAToRWrapper_QMap__opAssign(QMap<Key, T > * self, const QMap< Key, T > & other) {
    return (*self) = other;
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap__opEqual(const QMap<Key, T > * self, const QMap< Key, T > & other) {
    return (*self) == other;
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap__opNotEqual(const QMap<Key, T > * self, const QMap< Key, T > & other) {
    return (*self) != other;
}
template <class Key, class T>
inline T & opErAToRWrapper_QMap__opArrayGet(QMap<Key, T > * self, const Key & key) {
    return (*self)[key];
}
template <class Key, class T>
inline void opErAToRWrapper_QMap__opArraySet(QMap<Key, T > * self, const Key & key, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[key] = OpsEt_vALue;
}
template <class Key, class T>
inline const T opErAToRWrapper_QMap__opArrayGet(const QMap<Key, T > * self, const Key & key) {
    return (*self)[key];
}


template <class Key, class T>
inline const T & opErAToRWrapper_QMap_const_iterator__opDerefer(const typename QMap<Key, T >::const_iterator * self) {
    return *(*self);
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap_const_iterator__opEqual(const typename QMap<Key, T >::const_iterator * self, const typename QMap<Key, T >::const_iterator& o) {
    return (*self) == o;
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap_const_iterator__opNotEqual(const typename QMap<Key, T >::const_iterator * self, const typename QMap<Key, T >::const_iterator& o) {
    return (*self) != o;
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator& opErAToRWrapper_QMap_const_iterator__opInc(typename QMap<Key, T >::const_iterator * self) {
    return ++(*self);
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator opErAToRWrapper_QMap_const_iterator__opIncSuffix(typename QMap<Key, T >::const_iterator * self) {
    return (*self)++;
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator& opErAToRWrapper_QMap_const_iterator__opDec(typename QMap<Key, T >::const_iterator * self) {
    return --(*self);
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator opErAToRWrapper_QMap_const_iterator__opDecSuffix(typename QMap<Key, T >::const_iterator * self) {
    return (*self)--;
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator opErAToRWrapper_QMap_const_iterator__opAdd(const typename QMap<Key, T >::const_iterator * self, int j) {
    return (*self) + j;
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator opErAToRWrapper_QMap_const_iterator__opSub(const typename QMap<Key, T >::const_iterator * self, int j) {
    return (*self) - j;
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator& opErAToRWrapper_QMap_const_iterator__opAddAssign(typename QMap<Key, T >::const_iterator * self, int j) {
    return (*self) += j;
}
template <class Key, class T>
inline typename QMap<Key, T >::const_iterator& opErAToRWrapper_QMap_const_iterator__opSubAssign(typename QMap<Key, T >::const_iterator * self, int j) {
    return (*self) -= j;
}


template <class Key, class T>
inline T & opErAToRWrapper_QMap_iterator__opDerefer(const typename QMap<Key, T >::iterator * self) {
    return *(*self);
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap_iterator__opEqual(const typename QMap<Key, T >::iterator * self, const typename QMap<Key, T >::iterator& o) {
    return (*self) == o;
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap_iterator__opNotEqual(const typename QMap<Key, T >::iterator * self, const typename QMap<Key, T >::iterator& o) {
    return (*self) != o;
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator& opErAToRWrapper_QMap_iterator__opInc(typename QMap<Key, T >::iterator * self) {
    return ++(*self);
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator opErAToRWrapper_QMap_iterator__opIncSuffix(typename QMap<Key, T >::iterator * self) {
    return (*self)++;
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator& opErAToRWrapper_QMap_iterator__opDec(typename QMap<Key, T >::iterator * self) {
    return --(*self);
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator opErAToRWrapper_QMap_iterator__opDecSuffix(typename QMap<Key, T >::iterator * self) {
    return (*self)--;
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator opErAToRWrapper_QMap_iterator__opAdd(const typename QMap<Key, T >::iterator * self, int j) {
    return (*self) + j;
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator opErAToRWrapper_QMap_iterator__opSub(const typename QMap<Key, T >::iterator * self, int j) {
    return (*self) - j;
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator& opErAToRWrapper_QMap_iterator__opAddAssign(typename QMap<Key, T >::iterator * self, int j) {
    return (*self) += j;
}
template <class Key, class T>
inline typename QMap<Key, T >::iterator& opErAToRWrapper_QMap_iterator__opSubAssign(typename QMap<Key, T >::iterator * self, int j) {
    return (*self) -= j;
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap_iterator__opEqual(const typename QMap<Key, T >::iterator * self, const typename QMap<Key, T >::const_iterator& o) {
    return (*self) == o;
}
template <class Key, class T>
inline bool opErAToRWrapper_QMap_iterator__opNotEqual(const typename QMap<Key, T >::iterator * self, const typename QMap<Key, T >::const_iterator& o) {
    return (*self) != o;
}


template <typename D, class Key, class T>
void buildMetaClass_QMap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMap< Key, T > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const typename std::map< Key, T > &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("toStdMap", &D::ClassType::toStdMap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("isSharedWith", &D::ClassType::isSharedWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("take", &D::ClassType::take);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key)
        ._default(copyVariantFromCopyable(Key()))
    ;
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value)
        ._default(copyVariantFromCopyable(T()))
    ;
    _d.CPGF_MD_TEMPLATE _method("uniqueKeys", &D::ClassType::uniqueKeys);
    _d.CPGF_MD_TEMPLATE _method("keys", (QList< Key > (D::ClassType::*) () const)&D::ClassType::keys);
    _d.CPGF_MD_TEMPLATE _method("keys", (QList< Key > (D::ClassType::*) (const T &) const)&D::ClassType::keys);
    _d.CPGF_MD_TEMPLATE _method("values", (QList< T > (D::ClassType::*) () const)&D::ClassType::values);
    _d.CPGF_MD_TEMPLATE _method("values", (QList< T > (D::ClassType::*) (const Key &) const)&D::ClassType::values);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const Key &) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("firstKey", &D::ClassType::firstKey);
    _d.CPGF_MD_TEMPLATE _method("lastKey", &D::ClassType::lastKey);
    _d.CPGF_MD_TEMPLATE _method("first", (T & (D::ClassType::*) ())&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("first", (const T & (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("last", (T & (D::ClassType::*) ())&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("last", (const T & (D::ClassType::*) () const)&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QMap<Key, T >::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QMap<Key, T >::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QMap<Key, T >::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QMap<Key, T >::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("find", (typename QMap<Key, T >::iterator (D::ClassType::*) (const Key &))&D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("find", (typename QMap<Key, T >::const_iterator (D::ClassType::*) (const Key &) const)&D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("constFind", &D::ClassType::constFind);
    _d.CPGF_MD_TEMPLATE _method("lowerBound", (typename QMap<Key, T >::iterator (D::ClassType::*) (const Key &))&D::ClassType::lowerBound);
    _d.CPGF_MD_TEMPLATE _method("lowerBound", (typename QMap<Key, T >::const_iterator (D::ClassType::*) (const Key &) const)&D::ClassType::lowerBound);
    _d.CPGF_MD_TEMPLATE _method("upperBound", (typename QMap<Key, T >::iterator (D::ClassType::*) (const Key &))&D::ClassType::upperBound);
    _d.CPGF_MD_TEMPLATE _method("upperBound", (typename QMap<Key, T >::const_iterator (D::ClassType::*) (const Key &) const)&D::ClassType::upperBound);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QMap<Key, T >::iterator (D::ClassType::*) (const Key &, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QMap<Key, T >::iterator (D::ClassType::*) (typename QMap<Key, T >::const_iterator, const Key &, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insertMulti", (typename QMap<Key, T >::iterator (D::ClassType::*) (const Key &, const T &))&D::ClassType::insertMulti);
    _d.CPGF_MD_TEMPLATE _method("insertMulti", (typename QMap<Key, T >::iterator (D::ClassType::*) (typename QMap<Key, T >::const_iterator, const Key &, const T &))&D::ClassType::insertMulti);
    _d.CPGF_MD_TEMPLATE _method("unite", &D::ClassType::unite, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("equal_range", &D::ClassType::equal_range);
    _d.CPGF_MD_TEMPLATE _operator<QMap< Key, T > & (*)(cpgf::GMetaSelf, const QMap< Key, T > &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QMap< Key, T > & (*) (QMap<Key, T > *, const QMap< Key, T > &))&opErAToRWrapper_QMap__opAssign<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMap< Key, T > &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QMap<Key, T > *, const QMap< Key, T > &))&opErAToRWrapper_QMap__opEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMap< Key, T > &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QMap<Key, T > *, const QMap< Key, T > &))&opErAToRWrapper_QMap__opNotEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, const Key &)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QMap<Key, T > *, const Key &))&opErAToRWrapper_QMap__opArrayGet<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QMap<Key, T > *, const Key &, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QMap__opArraySet<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const T (*)(const cpgf::GMetaSelf &, const Key &)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T (*) (const QMap<Key, T > *, const Key &))&opErAToRWrapper_QMap__opArrayGet<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<typename QMap<Key, T >::const_iterator> _nd = GDefineMetaClass<typename QMap<Key, T >::const_iterator>::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QMap<Key, T >::Node*)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QMap<Key, T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("key", &QMap<Key, T >::const_iterator::key);
        _nd.CPGF_MD_TEMPLATE _method("value", &QMap<Key, T >::const_iterator::value);
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const T & (*) (const typename QMap<Key, T >::const_iterator *))&opErAToRWrapper_QMap_const_iterator__opDerefer<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QMap<Key, T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QMap<Key, T >::const_iterator *, const typename QMap<Key, T >::const_iterator&))&opErAToRWrapper_QMap_const_iterator__opEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QMap<Key, T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QMap<Key, T >::const_iterator *, const typename QMap<Key, T >::const_iterator&))&opErAToRWrapper_QMap_const_iterator__opNotEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QMap<Key, T >::const_iterator& (*) (typename QMap<Key, T >::const_iterator *))&opErAToRWrapper_QMap_const_iterator__opInc<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QMap<Key, T >::const_iterator (*) (typename QMap<Key, T >::const_iterator *))&opErAToRWrapper_QMap_const_iterator__opIncSuffix<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QMap<Key, T >::const_iterator& (*) (typename QMap<Key, T >::const_iterator *))&opErAToRWrapper_QMap_const_iterator__opDec<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QMap<Key, T >::const_iterator (*) (typename QMap<Key, T >::const_iterator *))&opErAToRWrapper_QMap_const_iterator__opDecSuffix<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QMap<Key, T >::const_iterator (*) (const typename QMap<Key, T >::const_iterator *, int))&opErAToRWrapper_QMap_const_iterator__opAdd<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QMap<Key, T >::const_iterator (*) (const typename QMap<Key, T >::const_iterator *, int))&opErAToRWrapper_QMap_const_iterator__opSub<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QMap<Key, T >::const_iterator& (*) (typename QMap<Key, T >::const_iterator *, int))&opErAToRWrapper_QMap_const_iterator__opAddAssign<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QMap<Key, T >::const_iterator& (*) (typename QMap<Key, T >::const_iterator *, int))&opErAToRWrapper_QMap_const_iterator__opSubAssign<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<typename QMap<Key, T >::iterator> _nd = GDefineMetaClass<typename QMap<Key, T >::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (typename QMap<Key, T >::Node*)>();
        _nd.CPGF_MD_TEMPLATE _method("key", &QMap<Key, T >::iterator::key);
        _nd.CPGF_MD_TEMPLATE _method("value", &QMap<Key, T >::iterator::value);
        _nd.CPGF_MD_TEMPLATE _operator<T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (T & (*) (const typename QMap<Key, T >::iterator *))&opErAToRWrapper_QMap_iterator__opDerefer<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QMap<Key, T >::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QMap<Key, T >::iterator *, const typename QMap<Key, T >::iterator&))&opErAToRWrapper_QMap_iterator__opEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QMap<Key, T >::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QMap<Key, T >::iterator *, const typename QMap<Key, T >::iterator&))&opErAToRWrapper_QMap_iterator__opNotEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QMap<Key, T >::iterator& (*) (typename QMap<Key, T >::iterator *))&opErAToRWrapper_QMap_iterator__opInc<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QMap<Key, T >::iterator (*) (typename QMap<Key, T >::iterator *))&opErAToRWrapper_QMap_iterator__opIncSuffix<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QMap<Key, T >::iterator& (*) (typename QMap<Key, T >::iterator *))&opErAToRWrapper_QMap_iterator__opDec<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QMap<Key, T >::iterator (*) (typename QMap<Key, T >::iterator *))&opErAToRWrapper_QMap_iterator__opDecSuffix<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QMap<Key, T >::iterator (*) (const typename QMap<Key, T >::iterator *, int))&opErAToRWrapper_QMap_iterator__opAdd<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QMap<Key, T >::iterator (*) (const typename QMap<Key, T >::iterator *, int))&opErAToRWrapper_QMap_iterator__opSub<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QMap<Key, T >::iterator& (*) (typename QMap<Key, T >::iterator *, int))&opErAToRWrapper_QMap_iterator__opAddAssign<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QMap<Key, T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QMap<Key, T >::iterator& (*) (typename QMap<Key, T >::iterator *, int))&opErAToRWrapper_QMap_iterator__opSubAssign<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QMap<Key, T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QMap<Key, T >::iterator *, const typename QMap<Key, T >::const_iterator&))&opErAToRWrapper_QMap_iterator__opEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QMap<Key, T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QMap<Key, T >::iterator *, const typename QMap<Key, T >::const_iterator&))&opErAToRWrapper_QMap_iterator__opNotEqual<Key, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
