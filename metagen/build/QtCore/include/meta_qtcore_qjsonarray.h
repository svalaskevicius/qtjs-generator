// Auto generated file, don't modify.

#ifndef __META_QTCORE_QJSONARRAY_H
#define __META_QTCORE_QJSONARRAY_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qjsonarray(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QJsonArray &)>(mopHolder << mopHolder);
}


inline QJsonArray & opErAToRWrapper_QJsonArray__opAssign(QJsonArray * self, const QJsonArray & other) {
    return (*self) = other;
}
inline QJsonValueRef opErAToRWrapper_QJsonArray__opArrayGet(QJsonArray * self, int i) {
    return (*self)[i];
}
inline QJsonValue opErAToRWrapper_QJsonArray__opArrayGet(const QJsonArray * self, int i) {
    return (*self)[i];
}
inline bool opErAToRWrapper_QJsonArray__opEqual(const QJsonArray * self, const QJsonArray & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonArray__opNotEqual(const QJsonArray * self, const QJsonArray & other) {
    return (*self) != other;
}


inline QJsonValue opErAToRWrapper_QJsonArray_const_iterator__opDerefer(const QJsonArray::const_iterator * self) {
    return *(*self);
}
inline QJsonValue opErAToRWrapper_QJsonArray_const_iterator__opArrayGet(const QJsonArray::const_iterator * self, int j) {
    return (*self)[j];
}
inline bool opErAToRWrapper_QJsonArray_const_iterator__opEqual(const QJsonArray::const_iterator * self, const QJsonArray::const_iterator& o) {
    return (*self) == o;
}
inline bool opErAToRWrapper_QJsonArray_const_iterator__opNotEqual(const QJsonArray::const_iterator * self, const QJsonArray::const_iterator& o) {
    return (*self) != o;
}
inline bool opErAToRWrapper_QJsonArray_const_iterator__opLess(const QJsonArray::const_iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QJsonArray_const_iterator__opLessEqual(const QJsonArray::const_iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QJsonArray_const_iterator__opGreater(const QJsonArray::const_iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QJsonArray_const_iterator__opGreaterEqual(const QJsonArray::const_iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) >= other;
}
inline QJsonArray::const_iterator& opErAToRWrapper_QJsonArray_const_iterator__opInc(QJsonArray::const_iterator * self) {
    return ++(*self);
}
inline QJsonArray::const_iterator opErAToRWrapper_QJsonArray_const_iterator__opIncSuffix(QJsonArray::const_iterator * self) {
    return (*self)++;
}
inline QJsonArray::const_iterator& opErAToRWrapper_QJsonArray_const_iterator__opDec(QJsonArray::const_iterator * self) {
    return --(*self);
}
inline QJsonArray::const_iterator opErAToRWrapper_QJsonArray_const_iterator__opDecSuffix(QJsonArray::const_iterator * self) {
    return (*self)--;
}
inline QJsonArray::const_iterator& opErAToRWrapper_QJsonArray_const_iterator__opAddAssign(QJsonArray::const_iterator * self, int j) {
    return (*self) += j;
}
inline QJsonArray::const_iterator& opErAToRWrapper_QJsonArray_const_iterator__opSubAssign(QJsonArray::const_iterator * self, int j) {
    return (*self) -= j;
}
inline QJsonArray::const_iterator opErAToRWrapper_QJsonArray_const_iterator__opAdd(const QJsonArray::const_iterator * self, int j) {
    return (*self) + j;
}
inline QJsonArray::const_iterator opErAToRWrapper_QJsonArray_const_iterator__opSub(const QJsonArray::const_iterator * self, int j) {
    return (*self) - j;
}
inline int opErAToRWrapper_QJsonArray_const_iterator__opSub(const QJsonArray::const_iterator * self, QJsonArray::const_iterator j) {
    return (*self) - j;
}


inline QJsonValueRef opErAToRWrapper_QJsonArray_iterator__opDerefer(const QJsonArray::iterator * self) {
    return *(*self);
}
inline QJsonValueRef opErAToRWrapper_QJsonArray_iterator__opArrayGet(const QJsonArray::iterator * self, int j) {
    return (*self)[j];
}
inline bool opErAToRWrapper_QJsonArray_iterator__opEqual(const QJsonArray::iterator * self, const QJsonArray::iterator& o) {
    return (*self) == o;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opNotEqual(const QJsonArray::iterator * self, const QJsonArray::iterator& o) {
    return (*self) != o;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opLess(const QJsonArray::iterator * self, const QJsonArray::iterator& other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opLessEqual(const QJsonArray::iterator * self, const QJsonArray::iterator& other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opGreater(const QJsonArray::iterator * self, const QJsonArray::iterator& other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opGreaterEqual(const QJsonArray::iterator * self, const QJsonArray::iterator& other) {
    return (*self) >= other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opEqual(const QJsonArray::iterator * self, const QJsonArray::const_iterator& o) {
    return (*self) == o;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opNotEqual(const QJsonArray::iterator * self, const QJsonArray::const_iterator& o) {
    return (*self) != o;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opLess(const QJsonArray::iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opLessEqual(const QJsonArray::iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opGreater(const QJsonArray::iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QJsonArray_iterator__opGreaterEqual(const QJsonArray::iterator * self, const QJsonArray::const_iterator& other) {
    return (*self) >= other;
}
inline QJsonArray::iterator& opErAToRWrapper_QJsonArray_iterator__opInc(QJsonArray::iterator * self) {
    return ++(*self);
}
inline QJsonArray::iterator opErAToRWrapper_QJsonArray_iterator__opIncSuffix(QJsonArray::iterator * self) {
    return (*self)++;
}
inline QJsonArray::iterator& opErAToRWrapper_QJsonArray_iterator__opDec(QJsonArray::iterator * self) {
    return --(*self);
}
inline QJsonArray::iterator opErAToRWrapper_QJsonArray_iterator__opDecSuffix(QJsonArray::iterator * self) {
    return (*self)--;
}
inline QJsonArray::iterator& opErAToRWrapper_QJsonArray_iterator__opAddAssign(QJsonArray::iterator * self, int j) {
    return (*self) += j;
}
inline QJsonArray::iterator& opErAToRWrapper_QJsonArray_iterator__opSubAssign(QJsonArray::iterator * self, int j) {
    return (*self) -= j;
}
inline QJsonArray::iterator opErAToRWrapper_QJsonArray_iterator__opAdd(const QJsonArray::iterator * self, int j) {
    return (*self) + j;
}
inline QJsonArray::iterator opErAToRWrapper_QJsonArray_iterator__opSub(const QJsonArray::iterator * self, int j) {
    return (*self) - j;
}
inline int opErAToRWrapper_QJsonArray_iterator__opSub(const QJsonArray::iterator * self, QJsonArray::iterator j) {
    return (*self) - j;
}


template <typename D>
void buildMetaClass_QJsonArray(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray &)>();
    _d.CPGF_MD_TEMPLATE _method("toVariantList", &D::ClassType::toVariantList);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("first", &D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("last", &D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("append", &D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("removeFirst", &D::ClassType::removeFirst);
    _d.CPGF_MD_TEMPLATE _method("removeLast", &D::ClassType::removeLast);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, const QJsonValue &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replace", &D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("begin", (QJsonArray::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (QJsonArray::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (QJsonArray::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (QJsonArray::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("insert", (QJsonArray::iterator (D::ClassType::*) (QJsonArray::iterator, const QJsonValue &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("push_back", &D::ClassType::push_back, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("push_front", &D::ClassType::push_front, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pop_front", &D::ClassType::pop_front);
    _d.CPGF_MD_TEMPLATE _method("pop_back", &D::ClassType::pop_back);
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("fromStringList", &D::ClassType::fromStringList, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromVariantList", &D::ClassType::fromVariantList);
    _d.CPGF_MD_TEMPLATE _operator<QJsonArray & (*)(cpgf::GMetaSelf, const QJsonArray &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJsonArray & (*) (QJsonArray *, const QJsonArray &))&opErAToRWrapper_QJsonArray__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QJsonValueRef (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QJsonValueRef (*) (QJsonArray *, int))&opErAToRWrapper_QJsonArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QJsonValue (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QJsonValue (*) (const QJsonArray *, int))&opErAToRWrapper_QJsonArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonArray *, const QJsonArray &))&opErAToRWrapper_QJsonArray__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonArray *, const QJsonArray &))&opErAToRWrapper_QJsonArray__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QJsonArray::const_iterator> _nd = GDefineMetaClass<QJsonArray::const_iterator>::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray *, int)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray::const_iterator&)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _field("a", &QJsonArray::const_iterator::a);
        _nd.CPGF_MD_TEMPLATE _field("i", &QJsonArray::const_iterator::i);
        _nd.CPGF_MD_TEMPLATE _operator<QJsonValue (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (QJsonValue (*) (const QJsonArray::const_iterator *))&opErAToRWrapper_QJsonArray_const_iterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonValue (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
        _nd.CPGF_MD_TEMPLATE _method("_opArrayGet", (QJsonValue (*) (const QJsonArray::const_iterator *, int))&opErAToRWrapper_QJsonArray_const_iterator__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonArray::const_iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_const_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonArray::const_iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_const_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder < mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QJsonArray::const_iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_const_iterator__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder <= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QJsonArray::const_iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_const_iterator__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder > mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QJsonArray::const_iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_const_iterator__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder >= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QJsonArray::const_iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_const_iterator__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (QJsonArray::const_iterator& (*) (QJsonArray::const_iterator *))&opErAToRWrapper_QJsonArray_const_iterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (QJsonArray::const_iterator (*) (QJsonArray::const_iterator *))&opErAToRWrapper_QJsonArray_const_iterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (QJsonArray::const_iterator& (*) (QJsonArray::const_iterator *))&opErAToRWrapper_QJsonArray_const_iterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (QJsonArray::const_iterator (*) (QJsonArray::const_iterator *))&opErAToRWrapper_QJsonArray_const_iterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (QJsonArray::const_iterator& (*) (QJsonArray::const_iterator *, int))&opErAToRWrapper_QJsonArray_const_iterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (QJsonArray::const_iterator& (*) (QJsonArray::const_iterator *, int))&opErAToRWrapper_QJsonArray_const_iterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (QJsonArray::const_iterator (*) (const QJsonArray::const_iterator *, int))&opErAToRWrapper_QJsonArray_const_iterator__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (QJsonArray::const_iterator (*) (const QJsonArray::const_iterator *, int))&opErAToRWrapper_QJsonArray_const_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, QJsonArray::const_iterator)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (int (*) (const QJsonArray::const_iterator *, QJsonArray::const_iterator))&opErAToRWrapper_QJsonArray_const_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QJsonArray::iterator> _nd = GDefineMetaClass<QJsonArray::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (QJsonArray *, int)>();
        _nd.CPGF_MD_TEMPLATE _field("a", &QJsonArray::iterator::a);
        _nd.CPGF_MD_TEMPLATE _field("i", &QJsonArray::iterator::i);
        _nd.CPGF_MD_TEMPLATE _operator<QJsonValueRef (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (QJsonValueRef (*) (const QJsonArray::iterator *))&opErAToRWrapper_QJsonArray_iterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonValueRef (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
        _nd.CPGF_MD_TEMPLATE _method("_opArrayGet", (QJsonValueRef (*) (const QJsonArray::iterator *, int))&opErAToRWrapper_QJsonArray_iterator__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::iterator&))&opErAToRWrapper_QJsonArray_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::iterator&))&opErAToRWrapper_QJsonArray_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::iterator&)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QJsonArray::iterator *, const QJsonArray::iterator&))&opErAToRWrapper_QJsonArray_iterator__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::iterator&)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::iterator&))&opErAToRWrapper_QJsonArray_iterator__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::iterator&)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QJsonArray::iterator *, const QJsonArray::iterator&))&opErAToRWrapper_QJsonArray_iterator__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::iterator&)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::iterator&))&opErAToRWrapper_QJsonArray_iterator__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder < mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QJsonArray::iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_iterator__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder <= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_iterator__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder > mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QJsonArray::iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_iterator__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonArray::const_iterator&)>(mopHolder >= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QJsonArray::iterator *, const QJsonArray::const_iterator&))&opErAToRWrapper_QJsonArray_iterator__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (QJsonArray::iterator& (*) (QJsonArray::iterator *))&opErAToRWrapper_QJsonArray_iterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (QJsonArray::iterator (*) (QJsonArray::iterator *))&opErAToRWrapper_QJsonArray_iterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (QJsonArray::iterator& (*) (QJsonArray::iterator *))&opErAToRWrapper_QJsonArray_iterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (QJsonArray::iterator (*) (QJsonArray::iterator *))&opErAToRWrapper_QJsonArray_iterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (QJsonArray::iterator& (*) (QJsonArray::iterator *, int))&opErAToRWrapper_QJsonArray_iterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (QJsonArray::iterator& (*) (QJsonArray::iterator *, int))&opErAToRWrapper_QJsonArray_iterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (QJsonArray::iterator (*) (const QJsonArray::iterator *, int))&opErAToRWrapper_QJsonArray_iterator__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonArray::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (QJsonArray::iterator (*) (const QJsonArray::iterator *, int))&opErAToRWrapper_QJsonArray_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, QJsonArray::iterator)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (int (*) (const QJsonArray::iterator *, QJsonArray::iterator))&opErAToRWrapper_QJsonArray_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
