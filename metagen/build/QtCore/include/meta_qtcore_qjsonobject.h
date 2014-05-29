// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QJSONOBJECT_H
#define CPGF_META_QTCORE_QJSONOBJECT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qjsonobject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QJsonObject &)>(mopHolder << mopHolder);
}


inline QJsonObject & opErAToRWrapper_QJsonObject__opAssign(QJsonObject * self, const QJsonObject & other) {
    return (*self) = other;
}
inline QJsonValue opErAToRWrapper_QJsonObject__opArrayGet(const QJsonObject * self, const QString & key) {
    return (*self)[key];
}
inline QJsonValueRef opErAToRWrapper_QJsonObject__opArrayGet(QJsonObject * self, const QString & key) {
    return (*self)[key];
}
inline bool opErAToRWrapper_QJsonObject__opEqual(const QJsonObject * self, const QJsonObject & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonObject__opNotEqual(const QJsonObject * self, const QJsonObject & other) {
    return (*self) != other;
}


inline QJsonValue opErAToRWrapper_QJsonObject_const_iterator__opDerefer(const QJsonObject::const_iterator * self) {
    return *(*self);
}
inline bool opErAToRWrapper_QJsonObject_const_iterator__opEqual(const QJsonObject::const_iterator * self, const QJsonObject::const_iterator& other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonObject_const_iterator__opNotEqual(const QJsonObject::const_iterator * self, const QJsonObject::const_iterator& other) {
    return (*self) != other;
}
inline QJsonObject::const_iterator& opErAToRWrapper_QJsonObject_const_iterator__opInc(QJsonObject::const_iterator * self) {
    return ++(*self);
}
inline QJsonObject::const_iterator opErAToRWrapper_QJsonObject_const_iterator__opIncSuffix(QJsonObject::const_iterator * self) {
    return (*self)++;
}
inline QJsonObject::const_iterator& opErAToRWrapper_QJsonObject_const_iterator__opDec(QJsonObject::const_iterator * self) {
    return --(*self);
}
inline QJsonObject::const_iterator opErAToRWrapper_QJsonObject_const_iterator__opDecSuffix(QJsonObject::const_iterator * self) {
    return (*self)--;
}
inline QJsonObject::const_iterator opErAToRWrapper_QJsonObject_const_iterator__opAdd(const QJsonObject::const_iterator * self, int j) {
    return (*self) + j;
}
inline QJsonObject::const_iterator opErAToRWrapper_QJsonObject_const_iterator__opSub(const QJsonObject::const_iterator * self, int j) {
    return (*self) - j;
}
inline QJsonObject::const_iterator& opErAToRWrapper_QJsonObject_const_iterator__opAddAssign(QJsonObject::const_iterator * self, int j) {
    return (*self) += j;
}
inline QJsonObject::const_iterator& opErAToRWrapper_QJsonObject_const_iterator__opSubAssign(QJsonObject::const_iterator * self, int j) {
    return (*self) -= j;
}
inline bool opErAToRWrapper_QJsonObject_const_iterator__opEqual(const QJsonObject::const_iterator * self, const QJsonObject::iterator& other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonObject_const_iterator__opNotEqual(const QJsonObject::const_iterator * self, const QJsonObject::iterator& other) {
    return (*self) != other;
}


inline QJsonValueRef opErAToRWrapper_QJsonObject_iterator__opDerefer(const QJsonObject::iterator * self) {
    return *(*self);
}
inline bool opErAToRWrapper_QJsonObject_iterator__opEqual(const QJsonObject::iterator * self, const QJsonObject::iterator& other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonObject_iterator__opNotEqual(const QJsonObject::iterator * self, const QJsonObject::iterator& other) {
    return (*self) != other;
}
inline QJsonObject::iterator& opErAToRWrapper_QJsonObject_iterator__opInc(QJsonObject::iterator * self) {
    return ++(*self);
}
inline QJsonObject::iterator opErAToRWrapper_QJsonObject_iterator__opIncSuffix(QJsonObject::iterator * self) {
    return (*self)++;
}
inline QJsonObject::iterator& opErAToRWrapper_QJsonObject_iterator__opDec(QJsonObject::iterator * self) {
    return --(*self);
}
inline QJsonObject::iterator opErAToRWrapper_QJsonObject_iterator__opDecSuffix(QJsonObject::iterator * self) {
    return (*self)--;
}
inline QJsonObject::iterator opErAToRWrapper_QJsonObject_iterator__opAdd(const QJsonObject::iterator * self, int j) {
    return (*self) + j;
}
inline QJsonObject::iterator opErAToRWrapper_QJsonObject_iterator__opSub(const QJsonObject::iterator * self, int j) {
    return (*self) - j;
}
inline QJsonObject::iterator& opErAToRWrapper_QJsonObject_iterator__opAddAssign(QJsonObject::iterator * self, int j) {
    return (*self) += j;
}
inline QJsonObject::iterator& opErAToRWrapper_QJsonObject_iterator__opSubAssign(QJsonObject::iterator * self, int j) {
    return (*self) -= j;
}
inline bool opErAToRWrapper_QJsonObject_iterator__opEqual(const QJsonObject::iterator * self, const QJsonObject::const_iterator& other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonObject_iterator__opNotEqual(const QJsonObject::iterator * self, const QJsonObject::const_iterator& other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QJsonObject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonObject &)>();
    _d.CPGF_MD_TEMPLATE _method("toVariantMap", &D::ClassType::toVariantMap);
    _d.CPGF_MD_TEMPLATE _method("keys", &D::ClassType::keys);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("take", &D::ClassType::take, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("begin", (QJsonObject::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (QJsonObject::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (QJsonObject::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (QJsonObject::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("find", (QJsonObject::iterator (D::ClassType::*) (const QString &))&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("find", (QJsonObject::const_iterator (D::ClassType::*) (const QString &) const)&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("constFind", &D::ClassType::constFind, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("fromVariantMap", &D::ClassType::fromVariantMap);
    _d.CPGF_MD_TEMPLATE _operator<QJsonObject & (*)(cpgf::GMetaSelf, const QJsonObject &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJsonObject & (*) (QJsonObject *, const QJsonObject &))&opErAToRWrapper_QJsonObject__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QJsonValue (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder[0], cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QJsonValue (*) (const QJsonObject *, const QString &))&opErAToRWrapper_QJsonObject__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QJsonValueRef (*)(cpgf::GMetaSelf, const QString &)>(mopHolder[0], cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QJsonValueRef (*) (QJsonObject *, const QString &))&opErAToRWrapper_QJsonObject__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonObject *, const QJsonObject &))&opErAToRWrapper_QJsonObject__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonObject *, const QJsonObject &))&opErAToRWrapper_QJsonObject__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QJsonObject::const_iterator> _nd = GDefineMetaClass<QJsonObject::const_iterator>::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJsonObject *, int)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QJsonObject::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("key", &QJsonObject::const_iterator::key);
        _nd.CPGF_MD_TEMPLATE _method("value", &QJsonObject::const_iterator::value);
        _nd.CPGF_MD_TEMPLATE _operator<QJsonValue (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (QJsonValue (*) (const QJsonObject::const_iterator *))&opErAToRWrapper_QJsonObject_const_iterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonObject::const_iterator *, const QJsonObject::const_iterator&))&opErAToRWrapper_QJsonObject_const_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonObject::const_iterator *, const QJsonObject::const_iterator&))&opErAToRWrapper_QJsonObject_const_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (QJsonObject::const_iterator& (*) (QJsonObject::const_iterator *))&opErAToRWrapper_QJsonObject_const_iterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (QJsonObject::const_iterator (*) (QJsonObject::const_iterator *))&opErAToRWrapper_QJsonObject_const_iterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (QJsonObject::const_iterator& (*) (QJsonObject::const_iterator *))&opErAToRWrapper_QJsonObject_const_iterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (QJsonObject::const_iterator (*) (QJsonObject::const_iterator *))&opErAToRWrapper_QJsonObject_const_iterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (QJsonObject::const_iterator (*) (const QJsonObject::const_iterator *, int))&opErAToRWrapper_QJsonObject_const_iterator__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (QJsonObject::const_iterator (*) (const QJsonObject::const_iterator *, int))&opErAToRWrapper_QJsonObject_const_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (QJsonObject::const_iterator& (*) (QJsonObject::const_iterator *, int))&opErAToRWrapper_QJsonObject_const_iterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (QJsonObject::const_iterator& (*) (QJsonObject::const_iterator *, int))&opErAToRWrapper_QJsonObject_const_iterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonObject::const_iterator *, const QJsonObject::iterator&))&opErAToRWrapper_QJsonObject_const_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonObject::const_iterator *, const QJsonObject::iterator&))&opErAToRWrapper_QJsonObject_const_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QJsonObject::iterator> _nd = GDefineMetaClass<QJsonObject::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (QJsonObject *, int)>();
        _nd.CPGF_MD_TEMPLATE _method("key", &QJsonObject::iterator::key);
        _nd.CPGF_MD_TEMPLATE _method("value", &QJsonObject::iterator::value);
        _nd.CPGF_MD_TEMPLATE _operator<QJsonValueRef (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (QJsonValueRef (*) (const QJsonObject::iterator *))&opErAToRWrapper_QJsonObject_iterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonObject::iterator *, const QJsonObject::iterator&))&opErAToRWrapper_QJsonObject_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonObject::iterator *, const QJsonObject::iterator&))&opErAToRWrapper_QJsonObject_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (QJsonObject::iterator& (*) (QJsonObject::iterator *))&opErAToRWrapper_QJsonObject_iterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (QJsonObject::iterator (*) (QJsonObject::iterator *))&opErAToRWrapper_QJsonObject_iterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (QJsonObject::iterator& (*) (QJsonObject::iterator *))&opErAToRWrapper_QJsonObject_iterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (QJsonObject::iterator (*) (QJsonObject::iterator *))&opErAToRWrapper_QJsonObject_iterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (QJsonObject::iterator (*) (const QJsonObject::iterator *, int))&opErAToRWrapper_QJsonObject_iterator__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (QJsonObject::iterator (*) (const QJsonObject::iterator *, int))&opErAToRWrapper_QJsonObject_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (QJsonObject::iterator& (*) (QJsonObject::iterator *, int))&opErAToRWrapper_QJsonObject_iterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QJsonObject::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (QJsonObject::iterator& (*) (QJsonObject::iterator *, int))&opErAToRWrapper_QJsonObject_iterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonObject::iterator *, const QJsonObject::const_iterator&))&opErAToRWrapper_QJsonObject_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonObject::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonObject::iterator *, const QJsonObject::const_iterator&))&opErAToRWrapper_QJsonObject_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
